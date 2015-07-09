package ;

import flash.display.Sprite;
import flash.events.Event;
import flash.Lib;
import openfl.Assets; //<<You need this import!

import openfl.display.Bitmap; //<<Does this cover bitmap and bitmapData??
import openfl.display.BitmapData; //<<Bitmap Data object.
import openfl.media.Sound; //<<for playing sound.

import openfl.events.MouseEvent;

//import dec.refactor.Myclass;
//import jmHAXE.aaaRefactor.AnimSpriteSimpleXG;
//import JM_HAXLIB.AAA_Refactor.AnimSpriteSimpleXG;

/**
 * ...
 * @author JMIM
 */

class Main extends Sprite 
{
	var inited:Bool;
	
	private var _sound:Sound;
	
	//private var _aSprite:AnimSpriteSimpleXG;

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
		//nme.Assets.getBitmapData("img/assetname.jpg");
		
		 //Assets.getBitmapData("assets/img/TEST.png");
		 
		                                               
		_sound = Assets.getSound("assets/aud/ahem_x.wav");
		
		 
		var bmd:BitmapData = Assets.getBitmapData("assets/img/TEST.png");
		var bm1:Bitmap = new Bitmap(bmd);
		var bm2:Bitmap = new Bitmap(bmd);
		var spt:Sprite = new Sprite();
		spt.addChild(bm1);
		
		spt.x = 100;
		spt.y = 50;
		bm2.x = 280;
		bm2.y = 50;
		
		spt.addEventListener(MouseEvent.CLICK, onClick);

		addChild(spt);
		addChild(bm2);
		
		//_aSprite = AnimSpriteSimpleXG.makeUsingFrameSize(bmd, 10, 10);
		 
	}
	
	public function onClick(evt:Event):Void
	{
		_sound.play();
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
