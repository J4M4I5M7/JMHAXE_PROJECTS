package ;

import flash.display.Sprite;
import flash.events.Event;
import flash.Lib;

   //http://www.haxeui.org/hello_world.jsp
   ///////////////////////////////////////
   import haxe.ui.toolkit.core.Macros;
   import haxe.ui.toolkit.core.Toolkit;
   import haxe.ui.toolkit.core.Root;
   import haxe.ui.toolkit.controls.Button;
   import haxe.ui.toolkit.events.UIEvent;
   ///////////////////////////////////////

import com.bit101.minimalcomps.CheckBox;
import com.bit101.minimalcomps.Text;
import com.bit101.minimalcomps.PushButton;
import com.bit101.minimalcomps.Label;


/**
 * ...
 * @author JMIM
 */

class Main extends Sprite 
{
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

		doHaxeUIHelloWorld();
	}
	
	private function doHaxeUIHelloWorld():Void
	{
		//var l:Label = new Label();
		//this.addChild(untyped l._comp);
		//l.setText("HEY");
		//l.draw();
		
		/*
		var pb:PushButton = new PushButton(this);
		pb.setSize(30, 30);
		pb.setLabel("ABD");
		pb.setX(30);
		pb.setY(30);
		*/
		
		//var cb:CheckBox = new CheckBox(this);
	
		//cb.setSize(30, 30);
		
		
		
		/*
		var ta:Text = new Text(this);
		ta.setText("Hello there");
		ta.setSize(100, 100);
		ta.setFontSize(16);
		*/
		
		// Macros.addStyleSheet("styles/gradient/gradient.css");
        Toolkit.init();
        Toolkit.openFullscreen(function(root:Root) {
            var button:Button = new Button();
            button.text = "Click Me!";
            button.x = 100;
            button.y = 100;
            button.onClick = function(e:UIEvent) {
                e.component.text = "You clicked me!";
            };
            root.addChild(button);
       });
		
		
	
		
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
