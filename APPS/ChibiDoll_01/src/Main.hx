package ;

import openfl.display.BitmapData;
import flash.display.Sprite;
import flash.events.Event;
import flash.Lib;
import haxe.ds.Vector;
import openfl.Assets;

//import BMDollSprite;
import jmSubLibs.decoupledLIB.refactor.BMDollSprite;
import jmSubLibs.decoupledLIB.doll.ChibiSpace;



/**
 * Design note: For this first project, all assets and layers will have the exact same size.
 * This is wasteful, but will make production easier. Will also make it easier for the
 * artist, because they can more easily do flipping between frames within an editor to
 * see what the animation looks like.
 * 
 * 
 * 
 * @author JMIM
 */

class Main extends Sprite 
{
	var inited:Bool;
	
	/** ChibiSpace object used to render the chibi **/
	private var _chibi:ChibiSpace;
	private var _headBody:BMDollSprite;
	private var _eyes:BMDollSprite;
	private var _mouth:BMDollSprite;

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
		
		
		_headBody = makeBody() ;
		_eyes     = makeEyes() ;
		_mouth    = MakeMouth();
		
		_eyes.addAnim("blink_eyes", [2, 3, 4], false);
		_eyes.addAnim("idle_eyes", [0, 1], true);
		_eyes.setDefaultAnim("idle_eyes");
		_eyes.playAnim("idle_eyes");
		
		//create a rendering surface, and add the
		//head, eyes, and mouth to it:
		_chibi = new ChibiSpace(100, 160);
		_chibi.add(_headBody);
		_chibi.add(_eyes);
		_chibi.add(_mouth);
		
		_chibi.heldFrames = 8;
		
		
		//Correct useage of function typing:
		//http://stackoverflow.com/questions/14025739/passing-a-function-as-a-parameter-in-haxe
		_chibi.setClickFN( onChibiClickFN );
		
		this.addChild( _chibi );
	}

	/* SETUP */
	
	private function onChibiClickFN():Void
	{
		_eyes.playAnim("blink_eyes");
		trace("CHIBI CLICK!!");
	}
	
	/** Creates the body sprite with all of it's animations and any other setup it needs. **/
	public function makeBody():BMDollSprite
	{
		var ba:Vector<BitmapData> = new Vector<BitmapData>(2);
		ba[0] = Assets.getBitmapData("img/BODY_01.PNG"); //CASE MATTERS FOR .PNG must match file
		ba[1] = Assets.getBitmapData("img/BODY_02.PNG"); //CASE MATTERS FOR .PNG must match file
		var op:BMDollSprite = new BMDollSprite();
		op.loadFrames(ba, true);
		return op;
	}//body
	
	/** Creates eye sprite with all setup necessary. **/
	public function makeEyes():BMDollSprite
	{
		var ba:Vector<BitmapData> = new Vector<BitmapData>(5);
		ba[0] = gBM("img/IDLE_EYES_01.PNG");
		ba[1] = gBM("img/IDLE_EYES_02.PNG");
		ba[2] = gBM("img/BLINK_EYES_01.PNG"); //CASE MATTERS FOR .PNG must match file
		ba[3] = gBM("img/BLINK_EYES_02.PNG"); //CASE MATTERS FOR .PNG must match file
		ba[4] = gBM("img/BLINK_EYES_03.PNG"); //CASE MATTERS FOR .PNG must match file
		var op:BMDollSprite = new BMDollSprite();
		op.loadFrames(ba, true);
		return op;
	}//eyes
	
	/**Creates mouth sprite. WIll all setup necessary. **/
	public function MakeMouth():BMDollSprite
	{
		var ba:Vector<BitmapData> = new Vector<BitmapData>(3);
		ba[0] = Assets.getBitmapData("img/MOUTH_01.PNG"); //CASE MATTERS FOR .PNG must match file
		ba[1] = Assets.getBitmapData("img/MOUTH_02.PNG"); //CASE MATTERS FOR .PNG must match file
		ba[2] = Assets.getBitmapData("img/MOUTH_03.PNG"); //CASE MATTERS FOR .PNG must match file
		var op:BMDollSprite = new BMDollSprite();
		op.loadFrames(ba, true);
		return op;
	}//mouth
	
	/** Shorthand for get bitmap. **/
	public function gBM(inName:String):BitmapData
	{
		var op:BitmapData = Assets.getBitmapData(inName);
		return op;
	}

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
}//class
