package ;

//import jmSubLibs.expLIB.extenderLIB.events.;

import com.kircode.debug.FPS_Mem;
import jmSubLibs.genLIB.decoupledLIB.helpers.data.structs.glue.BitMapBool;
import jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker;
import openfl.display.Bitmap;

import jmSubLibs.EU;
//import flash.display.Sprite;
import openfl.display.Sprite;

import flash.events.Event;
import flash.Lib;
//import jmSubLibs.decoupledLIB.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR;
import jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR;
import jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapDims.helpers.TileMapDimsSetterHelper;
import jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.debug.TileMapUpdateMGR_Debugger;

import jmSubLibs.UNIT_TEST;
import jmSubLibs.expLIB.haxePhoneLIB.staticUtils.ScreenSizeUtil;

import openfl.display.Tilesheet;

import openfl.display.BitmapData;
//import jmSubLibs.DBOL;

/**
 * ...
 * @author JMIM
 */

class Main extends Sprite 
{
	///Map tile dims:
	////////////////////////
	private var _wid:Int = 30;
	private var _hig:Int = 30;
	private var _tWX:Int = 32;
	private var _tHY:Int = 32;
	////////////////////////
	
	private var _sWID:Int;
	private var _sHIG:Int;
	
	private var _fpsMem:FPS_Mem;
	
	///Viewport buffer size:
	private var _buf_wid:Int = ScreenSizeUtil.getPixelWid();
	private var _buf_hig:Int = ScreenSizeUtil.getPixelHig();
	
	/** A buffer bitmap to which everything is rendered. **/
	private var _buf:BitmapData;
	
	/** added to stage in order to display our bitmap. **/
	private var _buf_vis:Bitmap;
	
	private var _mgr:TileMapUpdateMGR;
	private var _debug:TileMapUpdateMGR_Debugger;
	
	private var _tSurf:TileMapActionsInputSurfaceLinker;
	
	private var _s:Sprite;
	private var _b:BitMapBool;
	
	var inited:Bool;

	/* ENTRY POINT */
	
	function resize(e) 
	{
		if (!inited) init();
		// else (resize or orientation change)
	}
	
	/** initialize our main buffer. **/
	private function init_buf():Void
	{
		_buf_vis = new Bitmap();
		_buf = new BitmapData(_buf_wid, _buf_hig, true, 0xFF8800FF);
		_buf_vis.bitmapData = _buf;
		this.addChild(_buf_vis);
	}
	
	function init() 
	{
		if (inited) return;
		inited = true;
		
		//EU.setStage( this.stage );
		//DBOL.setStage( this.stage);
		
		UNIT_TEST.unitTest();
		
		_sWID = ScreenSizeUtil.getPixelWid();
		_sHIG = ScreenSizeUtil.getPixelHig();
		
		
		
		init_buf();//initialize the buffer.
		
		
		_mgr = new TileMapUpdateMGR();
		//_mgr.dims.setDims(1, 2, 3, 4);
		#if debug
		//_mgr.dims.debugTrace();
		var res:Bool = TileMapDimsSetterHelper.unitTest();
		if (res != true) { EU.msg("rawwwererjdfjsf");}
		
		#end
		
		
		//create debugger, wire to manager:
		_debug = new TileMapUpdateMGR_Debugger();
		_debug.linkSharedFrameTimeTracker( _mgr.getFrameTracker() );
		
		
		
		
		_mgr.beginInit(1); //open for initialization.
		_mgr.setViewPortBuffer(_buf, _buf_wid, _buf_hig);
		//_mgr.setViewPortBufferDISP(_buf_vis);
		_mgr.setTileDims(_wid, _hig, _tWX, _tHY);
		_mgr.addFN_GetGraphics (_debug.getTileBMFunc      , "_debug.getTileBMFunc"       , "DEBUG_SYS");
		_mgr.addFN_GetTileFrameID(_debug.getTileFrameID,
		                               "_debug.getTileFrameID", "DEBUG_SYS");
									   
		
		//_mgr.addFN_ModelUpdate(_debug.modelUpdateFunc    , "_debug.modelUpdateFunc"     , "DEBUG_SYS");
		//_mgr.addFN_ResizeBMaps(_debug.resizeInternalsFunc, "_debug.resizeInternalsFunc" , "DEBUG_SYS");
		_mgr.endInit(); //close initialization when done.
		
		_mgr.setScreenWrapX(true);
		_mgr.setScreenWrapY(true);

		//_mgr.setScrollX(32,false);
		//_mgr.setScrollX(0-_wid * _tWX, true);
		//_mgr.setScrollY(0-_hig * _tHY, true);
		
		
		//_mgr.setZoomFocalX(1, false);
		//_mgr.setZoomFocalY(1, false);
		//_mgr.setZoomFocalX(0, true);
		//_mgr.setZoomFocalY(0, true);
		
		_mgr.setZoomFocalX(0.5, false);
		_mgr.setZoomFocalY(0.5, false);
		
		
		_mgr.setZoomSpeed(0.005); //SLOW ZOOM.
		//_mgr.setZoomSpeed(0.05); //set zoom speed per frame.
		_mgr.setZoom(1, false);
		
		#if debug
		trace("_mgr.endInit() fired with no problem!");
		#end
		
		this.addEventListener(Event.ENTER_FRAME, onEnterFrame);
		
		//create a surface that will be used to read click events
		_tSurf = new TileMapActionsInputSurfaceLinker();
		_tSurf.linkActionsContainer(_mgr.getActionsContainer() );
		_tSurf.setSize(_buf.width, _buf.height);
		this.addChild(_tSurf);
		
		
		
		_s = new Sprite();
		this.addChild(_s);
		
		_fpsMem = new FPS_Mem();
		this.addChild(_fpsMem);
		
		#if (neko || android)
			trace("NEKO||ANDROID");
		#else
			trace("not neko or android.");
		#end
		

		// (your code here)
		
		// Stage:
		// stage.stageWidth x stage.stageHeight @ stage.dpiScale
		
		// Assets:
		// nme.Assets.getBitmapData("img/assetname.jpg");
	}//init
	
	private function onEnterFrame(evt:Event):Void
	{
		_mgr.update();
		
		
		//_b = _debug.getTileBMFunc(0, 0, _tWX, _tHY);
		//_s.graphics.clear();
		//_s.graphics.beginBitmapFill(_b.map, null, true);
		//_s.graphics.drawRect(0, 0, _sWID, _sHIG);
		//_s.graphics.endFill();
		
		
		#if debug //##################
		var z:Float = _mgr.getZoom();
		if (z == 2)
		{
			//trace("Zoom target hit!");
		}
		#end      //##################
	}

	/* SETUP */

	public function new() 
	{
		super();	
		addEventListener(Event.ADDED_TO_STAGE, added);
	}

	function added(e) 
	{
		removeEventListener(Event.ADDED_TO_STAGE, added);
		stage.addEventListener(Event.RESIZE, resize);
		#if ios
		haxe.Timer.delay(init, 100); // iOS 6
		#else
		init();
		#end
	}
	
	public static function main() 
	{
		// static entry point
		Lib.current.stage.align = flash.display.StageAlign.TOP_LEFT;
		Lib.current.stage.scaleMode = flash.display.StageScaleMode.NO_SCALE;
		Lib.current.addChild(new Main());
	}
}
