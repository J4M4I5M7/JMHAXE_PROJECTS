package ;

import jmSubLibs.EU;
//import flash.display.BitmapData;
import openfl.display.BitmapData;
import flash.display.Sprite;
import flash.events.Event;
import flash.Lib;
import jmSubLibs.genLIB.decoupledLIB.helpers.data.structs.glue.BitMapBool;
import jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.debug.TileMapUpdateMGR_Debugger;
import jmSubLibs.expLIB.haxePhoneLIB.staticUtils.ScreenSizeUtil;
import jmSubLibs.genLIB.freeBinaryLIB.structs.glue.IntString;
import openfl.geom.Point;
import openfl.geom.Rectangle;

import com.kircode.debug.FPS_Mem;

/**
 * ...
 * @author JMIM
 */

class Main extends Sprite 
{
	var inited:Bool;
	
	private var _tWX:Int;
	private var _tHY:Int;
	
	private var _sWID:Int;
	private var _sHIG:Int;
	
	private var _bm:BitMapBool;
	private var _s:Sprite;
	
	private var _d:TileMapUpdateMGR_Debugger;
	
	private var _ft:IntString;
	
	private var _fps:FPS_Mem;
	
	private var _doOnce:Bool;
	
	private var _bm0:BitmapData;
	private var _bm1:BitmapData;
	private var _bmRec:Rectangle;
	private var _zz:Point;
	
	/** A sprite used as a graphics tile to see if we can do a beginbitmapfill with
	 *  another sprite as the input rather than bitmapdata.**/
	private var _sTile:Sprite;

	/* ENTRY POINT */
	
	function resize(e) 
	{
		if (!inited) init();
		// else (resize or orientation change)
	}
	
	function init() 
	{
		if (inited) return;
		inited = true;

		// (your code here)
		
		// Stage:
		// stage.stageWidth x stage.stageHeight @ stage.dpiScale
		
		// Assets:
		// nme.Assets.getBitmapData("img/assetname.jpg");
		
		_doOnce = true;
		_sWID = ScreenSizeUtil.getPixelWid();
		_sHIG = ScreenSizeUtil.getPixelHig();
		
		_tWX=32;
		_tHY=32;
		
		_d = new TileMapUpdateMGR_Debugger();
		
		_s = new Sprite();
		_bm = _d.getTileBMFunc(0,0, 32, 32);
		
		_ft = new IntString();
		_d.linkSharedFrameTimeTracker(_ft);
		
		
		
		if (_bm.map.width != _tWX) { EU.msg("wafd"); }
		if (_bm.map.height != _tHY) { EU.msg("sfdfd");}
		
		this.addChild(_s);
		
		this.addEventListener(Event.ENTER_FRAME, onEnterFrame);
		
		_fps = new FPS_Mem(10, 36);
		this.addChild(_fps);
		
		_bm0 = new BitmapData(32, 32, true, 0x00FF0000);
		_bm1 = new BitmapData(32, 32, true, 0x00FF00FF);
		_bmRec = new Rectangle(0, 0, 32, 32);
		_zz = new Point(0, 0);
		
		
	}
	
	private function onEnterFrame(evt:Event):Void
	{
		_ft.i++;
		
		
		_d.getTileFrameID(0, 0);
		_bm = _d.getTileBMFunc(0, 0, _tWX, _tHY);
		_doOnce = false;
		
		_bm0.copyPixels(_bm1, _bmRec, _zz, null, null, false);
		
		
		
		//_bm.map.unlock();
		
		_s.graphics.clear();
		_s.graphics.beginBitmapFill(_bm.map, null, true);
		_s.graphics.drawRect(0, 0, _sWID, _sHIG);
		_s.graphics.endFill();
		
		
		
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
