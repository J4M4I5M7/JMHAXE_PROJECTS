package ;

import openfl.display.BitmapData;
//import jmSubLibs.haxePhoneLIB.staticUtils.ScreenSizeUtil;
import jmSubLibs.expLIB.haxePhoneLIB.staticUtils.ScreenSizeUtil;

import flash.display.Sprite;
import flash.events.Event;
import flash.Lib;
import jmSubLibs.genLIB.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker;
//import jmSubLibs.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker;
import openfl.display.Bitmap;

/**
 * ...
 * @author JMIM
 */

class Main extends Sprite 
{
	
	//private var _numTilesX:Int = 8;
	//private var _numTilesY:Int = 8;
	
	private var _wid:Int = 8;
	private var _hig:Int = 8;
	private var _tWX:Int = 0;
	private var _tHY:Int = 0;
	
	
	/** The main game buffer. **/
	private var _buf:BitmapData;
	/** Display object used to display main game buffer. **/
	private var _buf_vis:Bitmap;
	
	
	/** Manages taps on screen, mapping them to XY coordinates. **/
	var gTap:GridTapLinker;
	
	var inited:Bool;

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
		
		jmimInit();
		
		
	}//init
	
	/** init tile map size based on how big of a buffer we have to work with. **/
	private function init_map():Void
	{
		var w:Int = ScreenSizeUtil.getPixelWid();
		var h:Int = ScreenSizeUtil.getPixelHig();
		
		_tWX = Std.int( w / _wid); //pixel width/ number of tiles == tile wid.
		_tHY = Std.int( h / _hig);
		
	}//init_map
	
	private function jmimInit():Void
	{
		init_buf();
		init_map(); //initialized map dimensions based on how much buffer we
		            //have to work with.
		
		init_tap(); //init our grid tapper class.			
					
		
		#if debug
		//TRACE NOT ALLOWED IN RELEASE!
		trace("jmimInit over!");
		#end
	}
	
	private function init_tap():Void
	{
		gTap = new GridTapLinker(5);
		gTap.linkUpEventListeners( this );
		gTap.setDebugBuffer(_buf);
		gTap.setDims(_wid, _hig, _tWX, _tHY);
	}//init_tap
	
	private function init_buf():Void
	{
		var w:Int = ScreenSizeUtil.getPixelWid();
		var h:Int = ScreenSizeUtil.getPixelHig();
		_buf = new BitmapData(w, h, true, 0xFFFF0000);
		
		_buf_vis = new Bitmap();
		_buf_vis.bitmapData = _buf;
		this.addChild( _buf_vis);
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
