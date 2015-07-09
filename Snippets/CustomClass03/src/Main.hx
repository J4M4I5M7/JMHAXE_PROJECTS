package ;


import flash.display.Sprite;
import flash.events.Event;
import flash.Lib;
import bas.refactor.ProtoTapSprite;
import openfl.Assets;
import ind.structs.geom.primitives.IntPoint;
import openfl.media.Sound;

import openfl.display.BitmapData;

/**
 * ...
 * @author JMIM
 */

class Main extends Sprite 
{
	var inited:Bool;
	
	private var _proto:ProtoTapSprite;
	private var _hasProto:Bool = false;

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
		var b:BitmapData = Assets.getBitmapData("img/ANIM_STRIP.png");
		
		var p:ProtoTapSprite = ProtoTapSprite.make(b);
		
		var a:Sound      = Assets.getSound("aud/AHEM.WAV");
		p.addSound(a);
		
		/*
		#if android
		trace("android!");
		#end
		*/
		
		
		this.addChild( p );
		
		_proto = p;
		_hasProto = true;
	}
	
	public function onEnterFrame(evt:Event):Void
	{
		if (_hasProto)
		{
			_proto.update();
		}
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
