package ;

import openfl.display.BitmapData;
import flash.display.Sprite;
import flash.events.Event;
import flash.Lib;
import haxe.ds.Vector;
import openfl.Assets;

//import BMDollSprite;
//import jmSubLibs.decoupledLIB.refactor.BMDollSprite;
//import jmSubLibs.decoupledLIB.doll.ChibiSpace;
import jmSubLibs.genLIB.decoupledLIB.systems.spriteBased.doll.components.BMDollSprite;
import jmSubLibs.genLIB.decoupledLIB.systems.spriteBased.doll.ChibiSpace;





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
	
	//Vector holding all of the chibi's:
	private var _cVec:Vector<ChibiSpace>;
	private var _cPTR:Int;
	
	//The 7 different BomKats you want to make:
	/////////////////////////////////////
	private var _chibi_FOUR:ChibiSpace;
	
	private var _chibi_HORZ:ChibiSpace;
	private var _chibi_LEFT:ChibiSpace;
	private var _chibi_RGHT:ChibiSpace;
	
	private var _chibi_VERT:ChibiSpace;
	private var _chibi_ABOV:ChibiSpace;
	private var _chibi_DOWN:ChibiSpace;
	//////////////////////////////////////
	
	/** ChibiSpace object used to render the chibi **/
	//private var _chibi:ChibiSpace;
	//private var _headBody:BMDollSprite;
	//private var _eyes:BMDollSprite;
	//private var _mouth:BMDollSprite;

	/* ENTRY POINT */
	
	function resize(e) 
	{
		if (!inited) init();
		// else (resize or orientation change)
	}
	
	/**
	 * Makes a bomb-cat animation object using the correct pieces:
	 * @param	b0: Body of cat: VERSION: SOLID/NORMAL.
	 * @param	b1: Body of cat: VERSION: GLOWING.
	 * @param	e0: Eyes of cat: VERSION: OPEN
	 * @param	e1: Eyes of cat: VERSION: CLOSED
	 * @return
	 */
	private function bomKatMaker(
	b0:BitmapData, b1:BitmapData, e0:BitmapData, e1:BitmapData):ChibiSpace
	{
		var body:BMDollSprite = new BMDollSprite();
		var eyes:BMDollSprite = new BMDollSprite();
		
		/** ba == body array. **/
		var ba:Vector<BitmapData> = new Vector<BitmapData>(2);
		ba[0] = b0;
		ba[1] = b1;
		
		/** ea == eyes array. **/
		var ea:Vector<BitmapData> = new Vector<BitmapData>(2);
		ea[0] = e0;
		ea[1] = e1;
		
		//load frames:
		body.loadFrames(ba, false);
		eyes.loadFrames(ea, false);
		
		//set animations:
		
		//Eyes animation:
		eyes.addAnim("IDLE", [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1], true);
		eyes.addAnim("TRIP", [1], true); //eyes always closed in triped animation.
		
		//Body animations:
		body.addAnim("IDLE", 
		[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0, 0, 0, 0, 1],true); //want this to be fade animation.
		body.addAnim("TRIP", [0, 1], true);
		
		//Bind all the pieces together:
		var op:ChibiSpace;
		op = new ChibiSpace(400, 400);
		op.add(body);
		op.add(eyes);
		
		//zero held frames:
		op.heldFrames = 2;
		
		//play animations, else will just strobe though all frames super fast:
		eyes.playAnim("IDLE");
		body.playAnim("IDLE");
		
		//set click function that will scroll to next:
		op.setClickFN( onChibiClickFN );
		
		//return output:
		return op;
	}//bomKatMaker
	
	function init() 
	{
		if (inited) return;
		inited = true;

		//gBM("img/FOUR/400X400_FOUR_BASE_SOLID.png");
		
		_cVec = new Vector<ChibiSpace>(7);
		
		_chibi_FOUR = bomKatMaker( gBM("img/FOUR/400X400_FOUR_BASE_SOLID.png" ),
		                           gBM("img/FOUR/400X400_FOUR_BASE_GLOW.png"  ),
								   gBM("img/FOUR/400X400_FOUR_EYES_OPEN.png"  ),
								   gBM("img/FOUR/400X400_FOUR_EYES_CLOSED.png") );
								  
							   
							   
		_chibi_HORZ = bomKatMaker( gBM("img/HORZ/400X400_HORZ_BASE_SOLID.png" ),
		                           gBM("img/HORZ/400X400_HORZ_BASE_GLOW.png"  ),
								   gBM("img/HORZ/400X400_HORZ_EYES_OPEN.png"  ),
								   gBM("img/HORZ/400X400_HORZ_EYES_CLOSED.png") );
							   
		_chibi_LEFT = bomKatMaker( gBM("img/LEFT/400X400_LEFT_BASE_SOLID.png" ),
		                           gBM("img/LEFT/400X400_LEFT_BASE_GLOW.png"  ),
								   gBM("img/LEFT/400X400_LEFT_EYES_OPEN.png"  ),
								   gBM("img/LEFT/400X400_LEFT_EYES_CLOSED.png") );
								   
		_chibi_RGHT = bomKatMaker( gBM("img/RGHT/400X400_RGHT_BASE_SOLID.png" ),
		                           gBM("img/RGHT/400X400_RGHT_BASE_GLOW.png"  ),
								   gBM("img/RGHT/400X400_RGHT_EYES_OPEN.png"  ),
								   gBM("img/RGHT/400X400_RGHT_EYES_CLOSED.png") );
								   
							   
								   
								   
		_chibi_VERT = bomKatMaker( gBM("img/VERT/400X400_VERT_BASE_SOLID.png" ),
		                           gBM("img/VERT/400X400_VERT_BASE_GLOW.png"  ),
								   gBM("img/VERT/400X400_VERT_EYES_OPEN.png"  ),
								   gBM("img/VERT/400X400_VERT_EYES_CLOSED.png") );
								   
		_chibi_ABOV = bomKatMaker( gBM("img/ABOV/400X400_ABOV_BASE_SOLID.png" ),
		                           gBM("img/ABOV/400X400_ABOV_BASE_GLOW.png"  ),
								   gBM("img/ABOV/400X400_ABOV_EYES_OPEN.png"  ),
								   gBM("img/ABOV/400X400_ABOV_EYES_CLOSED.png") );
							   
		_chibi_DOWN = bomKatMaker( gBM("img/DOWN/400X400_DOWN_BASE_SOLID.png" ),
		                           gBM("img/DOWN/400X400_DOWN_BASE_GLOW.png"  ),
								   gBM("img/DOWN/400X400_DOWN_EYES_OPEN.png"  ),
								   gBM("img/DOWN/400X400_DOWN_EYES_CLOSED.png") );
							   
		_cVec[0] = _chibi_FOUR;
		
		_cVec[1] = _chibi_HORZ;
		_cVec[2] = _chibi_LEFT;
		_cVec[3] = _chibi_RGHT;
		
		_cVec[4] = _chibi_VERT;
		_cVec[5] = _chibi_ABOV;
		_cVec[6] = _chibi_DOWN;
		
		
		//this.addChild(_chibi_FOUR);
		_cPTR = 0;
		this.addChild( _cVec[_cPTR]);
								   
		/*
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
		*/
	}

	/* SETUP */
	
	private function onChibiClickFN():Void
	{
		///_eyes.playAnim("blink_eyes");
		///trace("CHIBI CLICK!!");
		
		this.removeChild( _cVec[ _cPTR] );
		
		//incriment pointer to next chibi:
		_cPTR++;
		if (_cPTR >= _cVec.length)
		{
			_cPTR = 0;
		}
		
		
		this.addChild(_cVec[_cPTR] );
		
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
		//if this class fails because asset does not exist, you will
		//get weird error that makes no sense:
		//"Property color not found on Flash.Display.stage and
		//there is no default value.
		//flas:Bool $/get trace.
		//
		//Also: Traces in release code do cause crashes.
		
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