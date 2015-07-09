package ;


//Imports:
import jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.Lib;
import openfl.display.Bitmap;

//Main object used for tilemap rendering.
import jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR;

//Debugger for rendering some basic shapes to TileMapUpdateMGR
import jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.debug.TileMapUpdateMGR_Debugger;

//UI class we are testing out:
import jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.fMacs.fmacUI.TileUIAreaFMAC;

/**
 * ...
 * @author JMIM
 */

class Main extends Sprite 
{
	
	private var SYSID_MAIN:String = "SYSID_MAIN";
	private var SYSID_UI  :String = "SYSID_UI";
	
	/** Width of a single tile in pixels. **/
	private var tWD:Int = 32;
	
	/**HEight of a single tile in pixels. **/
	private var tHG:Int = 32;
	
	/** Width in tiles of our main system. **/
	private var wit:Int = 20;
	
	/**Height in tiles of our main system. **/
	private var hit:Int = 20;
	
	/** The main buffer for all rendering. **/
	private var buf:BitmapData;
	
	/** The visible buffer representation on the display. **/
	private var bVS:Bitmap;
	
	/** The width of the main buffer. **/
	private var bWD:Int = 640;
	
	/** The height of the main buffer. **/
	private var bHG:Int = 480;

	/** Main TileMapUpdateMGR **/
	private var mgr:TileMapUpdateMGR;
	
	/**Debugger Class. **/
	private var deb:TileMapUpdateMGR_Debugger;
	
	/**TileUIAreaFMAC**/
	private var tui:TileUIAreaFMAC;
	
	/** Used to configure clicking input into the tilemap. **/
	private var sur:TileMapActionsInputSurfaceLinker;
	
	var inited:Bool;

	/* ENTRY POINT */
	
	function resize(e) 
	{
		if (!inited) init();
		// else (resize or orientation change)
	}
	
	
	function init() 
	{
		#if debug
		trace("Main.hx:: init() entered.");
		#end
		
		if (inited) return;
		inited = true;
		
		doMyInitStuff();
		
		#if debug
		trace("Main.hx:: init() exiting.");
		#end
		
	}//init
	
	public function doMyInitStuff():Void
	{
		mgr = new TileMapUpdateMGR();
		deb = new TileMapUpdateMGR_Debugger();

		
		tui = new TileUIAreaFMAC();
		
		
		//Wird debugger's internal time to the manager's time:
		deb.linkSharedFrameTimeTracker( mgr.getFrameTracker() );
		
		//create buffer and make it visible on stage:
		init_buf();
		
		#if debug
		trace("Main.hx :: about to initialize manager.");
		#end
		
		mgr.beginInit(2); //open for initialization.
		mgr.setViewPortBuffer(buf, bWD, bHG);
		mgr.setTileDims(wit, hit, tWD, tHG);
		
		mgr.addFN_GetGraphics (deb.getTileBMFunc      
		                    , "deb.getTileBMFunc"       
							, SYSID_MAIN);
		mgr.addFN_GetTileFrameID(deb.getTileFrameID,
		                        "deb.getTileFrameID", 
								SYSID_MAIN);		
								
		//Wire Up the UI manager:
		mgr.addFN_GetGraphics   (tui.getGraphicsFN, "tui.getGraphicsFN", SYSID_UI);	
		mgr.addFN_GetTileFrameID(tui.getTileFrameID, "tui.getTileFrameID", SYSID_UI);	
								
								
		mgr.endInit(); //close initialization when done.
		
		mgr.setScreenWrapX(true);
		mgr.setScreenWrapY(true);
		mgr.setZoomFocalX(0.5, false);
		mgr.setZoomFocalY(0.5, false);
		mgr.setZoomSpeed(0.005); //SLOW ZOOM.
		mgr.setZoom(1, false);
		
		#if debug
		trace("mgr.endInit() fired with no problem!");
		#end
		
		this.addEventListener(Event.ENTER_FRAME, onEnterFrame);
		
		
		//create a surface that will be used to read click events
		sur = new TileMapActionsInputSurfaceLinker();
		sur.linkActionsContainer(mgr.getActionsContainer() );
		sur.setSize(buf.width, buf.height);
		this.addChild(sur);
		
		
		
	
	}//end
	
	/** initialize our main buffer. **/
	private function init_buf():Void
	{
		bVS = new Bitmap();
		buf = new BitmapData(bWD, bHG, true, 0xFF8800FF);
		bVS.bitmapData = buf;
		this.addChild(bVS);
	}
	
	private function onEnterFrame(evt:Event):Void
	{
		mgr.update();
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
}//class
