package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Preloader;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.text.Font;
import lime.utils.ByteArray;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		className.set ("img/ABOV/400X400_ABOV_BASE_GLOW.png", __ASSET__img_abov_400x400_abov_base_glow_png);
		type.set ("img/ABOV/400X400_ABOV_BASE_GLOW.png", AssetType.IMAGE);
		className.set ("img/ABOV/400X400_ABOV_BASE_SOLID.png", __ASSET__img_abov_400x400_abov_base_solid_png);
		type.set ("img/ABOV/400X400_ABOV_BASE_SOLID.png", AssetType.IMAGE);
		className.set ("img/ABOV/400X400_ABOV_EYES_CLOSED.png", __ASSET__img_abov_400x400_abov_eyes_closed_png);
		type.set ("img/ABOV/400X400_ABOV_EYES_CLOSED.png", AssetType.IMAGE);
		className.set ("img/ABOV/400X400_ABOV_EYES_OPEN.png", __ASSET__img_abov_400x400_abov_eyes_open_png);
		type.set ("img/ABOV/400X400_ABOV_EYES_OPEN.png", AssetType.IMAGE);
		className.set ("img/DOWN/400X400_DOWN_BASE_GLOW.png", __ASSET__img_down_400x400_down_base_glow_png);
		type.set ("img/DOWN/400X400_DOWN_BASE_GLOW.png", AssetType.IMAGE);
		className.set ("img/DOWN/400X400_DOWN_BASE_SOLID.png", __ASSET__img_down_400x400_down_base_solid_png);
		type.set ("img/DOWN/400X400_DOWN_BASE_SOLID.png", AssetType.IMAGE);
		className.set ("img/DOWN/400X400_DOWN_EYES_CLOSED.png", __ASSET__img_down_400x400_down_eyes_closed_png);
		type.set ("img/DOWN/400X400_DOWN_EYES_CLOSED.png", AssetType.IMAGE);
		className.set ("img/DOWN/400X400_DOWN_EYES_OPEN.png", __ASSET__img_down_400x400_down_eyes_open_png);
		type.set ("img/DOWN/400X400_DOWN_EYES_OPEN.png", AssetType.IMAGE);
		className.set ("img/FOUR/400X400_FOUR_BASE_GLOW.png", __ASSET__img_four_400x400_four_base_glow_png);
		type.set ("img/FOUR/400X400_FOUR_BASE_GLOW.png", AssetType.IMAGE);
		className.set ("img/FOUR/400X400_FOUR_BASE_SOLID.png", __ASSET__img_four_400x400_four_base_solid_png);
		type.set ("img/FOUR/400X400_FOUR_BASE_SOLID.png", AssetType.IMAGE);
		className.set ("img/FOUR/400X400_FOUR_EYES_CLOSED.png", __ASSET__img_four_400x400_four_eyes_closed_png);
		type.set ("img/FOUR/400X400_FOUR_EYES_CLOSED.png", AssetType.IMAGE);
		className.set ("img/FOUR/400X400_FOUR_EYES_OPEN.png", __ASSET__img_four_400x400_four_eyes_open_png);
		type.set ("img/FOUR/400X400_FOUR_EYES_OPEN.png", AssetType.IMAGE);
		className.set ("img/HORZ/400X400_HORZ_BASE_GLOW.png", __ASSET__img_horz_400x400_horz_base_glow_png);
		type.set ("img/HORZ/400X400_HORZ_BASE_GLOW.png", AssetType.IMAGE);
		className.set ("img/HORZ/400X400_HORZ_BASE_SOLID.png", __ASSET__img_horz_400x400_horz_base_solid_png);
		type.set ("img/HORZ/400X400_HORZ_BASE_SOLID.png", AssetType.IMAGE);
		className.set ("img/HORZ/400X400_HORZ_EYES_CLOSED.png", __ASSET__img_horz_400x400_horz_eyes_closed_png);
		type.set ("img/HORZ/400X400_HORZ_EYES_CLOSED.png", AssetType.IMAGE);
		className.set ("img/HORZ/400X400_HORZ_EYES_OPEN.png", __ASSET__img_horz_400x400_horz_eyes_open_png);
		type.set ("img/HORZ/400X400_HORZ_EYES_OPEN.png", AssetType.IMAGE);
		className.set ("img/LEFT/400X400_LEFT_BASE_GLOW.png", __ASSET__img_left_400x400_left_base_glow_png);
		type.set ("img/LEFT/400X400_LEFT_BASE_GLOW.png", AssetType.IMAGE);
		className.set ("img/LEFT/400X400_LEFT_BASE_SOLID.png", __ASSET__img_left_400x400_left_base_solid_png);
		type.set ("img/LEFT/400X400_LEFT_BASE_SOLID.png", AssetType.IMAGE);
		className.set ("img/LEFT/400X400_LEFT_EYES_CLOSED.png", __ASSET__img_left_400x400_left_eyes_closed_png);
		type.set ("img/LEFT/400X400_LEFT_EYES_CLOSED.png", AssetType.IMAGE);
		className.set ("img/LEFT/400X400_LEFT_EYES_OPEN.png", __ASSET__img_left_400x400_left_eyes_open_png);
		type.set ("img/LEFT/400X400_LEFT_EYES_OPEN.png", AssetType.IMAGE);
		className.set ("img/RGHT/400X400_RGHT_BASE_GLOW.png", __ASSET__img_rght_400x400_rght_base_glow_png);
		type.set ("img/RGHT/400X400_RGHT_BASE_GLOW.png", AssetType.IMAGE);
		className.set ("img/RGHT/400X400_RGHT_BASE_SOLID.png", __ASSET__img_rght_400x400_rght_base_solid_png);
		type.set ("img/RGHT/400X400_RGHT_BASE_SOLID.png", AssetType.IMAGE);
		className.set ("img/RGHT/400X400_RGHT_EYES_CLOSED.png", __ASSET__img_rght_400x400_rght_eyes_closed_png);
		type.set ("img/RGHT/400X400_RGHT_EYES_CLOSED.png", AssetType.IMAGE);
		className.set ("img/RGHT/400X400_RGHT_EYES_OPEN.png", __ASSET__img_rght_400x400_rght_eyes_open_png);
		type.set ("img/RGHT/400X400_RGHT_EYES_OPEN.png", AssetType.IMAGE);
		className.set ("img/VERT/400X400_VERT_BASE_GLOW.png", __ASSET__img_vert_400x400_vert_base_glow_png);
		type.set ("img/VERT/400X400_VERT_BASE_GLOW.png", AssetType.IMAGE);
		className.set ("img/VERT/400X400_VERT_BASE_SOLID.png", __ASSET__img_vert_400x400_vert_base_solid_png);
		type.set ("img/VERT/400X400_VERT_BASE_SOLID.png", AssetType.IMAGE);
		className.set ("img/VERT/400X400_VERT_EYES_CLOSED.png", __ASSET__img_vert_400x400_vert_eyes_closed_png);
		type.set ("img/VERT/400X400_VERT_EYES_CLOSED.png", AssetType.IMAGE);
		className.set ("img/VERT/400X400_VERT_EYES_OPEN.png", __ASSET__img_vert_400x400_vert_eyes_open_png);
		type.set ("img/VERT/400X400_VERT_EYES_OPEN.png", AssetType.IMAGE);
		
		
		#elseif html5
		
		var id;
		id = "img/ABOV/400X400_ABOV_BASE_GLOW.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/ABOV/400X400_ABOV_BASE_SOLID.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/ABOV/400X400_ABOV_EYES_CLOSED.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/ABOV/400X400_ABOV_EYES_OPEN.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/DOWN/400X400_DOWN_BASE_GLOW.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/DOWN/400X400_DOWN_BASE_SOLID.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/DOWN/400X400_DOWN_EYES_CLOSED.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/DOWN/400X400_DOWN_EYES_OPEN.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/FOUR/400X400_FOUR_BASE_GLOW.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/FOUR/400X400_FOUR_BASE_SOLID.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/FOUR/400X400_FOUR_EYES_CLOSED.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/FOUR/400X400_FOUR_EYES_OPEN.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/HORZ/400X400_HORZ_BASE_GLOW.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/HORZ/400X400_HORZ_BASE_SOLID.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/HORZ/400X400_HORZ_EYES_CLOSED.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/HORZ/400X400_HORZ_EYES_OPEN.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/LEFT/400X400_LEFT_BASE_GLOW.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/LEFT/400X400_LEFT_BASE_SOLID.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/LEFT/400X400_LEFT_EYES_CLOSED.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/LEFT/400X400_LEFT_EYES_OPEN.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/RGHT/400X400_RGHT_BASE_GLOW.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/RGHT/400X400_RGHT_BASE_SOLID.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/RGHT/400X400_RGHT_EYES_CLOSED.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/RGHT/400X400_RGHT_EYES_OPEN.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/VERT/400X400_VERT_BASE_GLOW.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/VERT/400X400_VERT_BASE_SOLID.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/VERT/400X400_VERT_EYES_CLOSED.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/VERT/400X400_VERT_EYES_OPEN.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		
		
		var assetsPrefix = ApplicationMain.config.assetsPrefix;
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if openfl
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		#end
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		
		className.set ("img/ABOV/400X400_ABOV_BASE_GLOW.png", __ASSET__img_abov_400x400_abov_base_glow_png);
		type.set ("img/ABOV/400X400_ABOV_BASE_GLOW.png", AssetType.IMAGE);
		
		className.set ("img/ABOV/400X400_ABOV_BASE_SOLID.png", __ASSET__img_abov_400x400_abov_base_solid_png);
		type.set ("img/ABOV/400X400_ABOV_BASE_SOLID.png", AssetType.IMAGE);
		
		className.set ("img/ABOV/400X400_ABOV_EYES_CLOSED.png", __ASSET__img_abov_400x400_abov_eyes_closed_png);
		type.set ("img/ABOV/400X400_ABOV_EYES_CLOSED.png", AssetType.IMAGE);
		
		className.set ("img/ABOV/400X400_ABOV_EYES_OPEN.png", __ASSET__img_abov_400x400_abov_eyes_open_png);
		type.set ("img/ABOV/400X400_ABOV_EYES_OPEN.png", AssetType.IMAGE);
		
		className.set ("img/DOWN/400X400_DOWN_BASE_GLOW.png", __ASSET__img_down_400x400_down_base_glow_png);
		type.set ("img/DOWN/400X400_DOWN_BASE_GLOW.png", AssetType.IMAGE);
		
		className.set ("img/DOWN/400X400_DOWN_BASE_SOLID.png", __ASSET__img_down_400x400_down_base_solid_png);
		type.set ("img/DOWN/400X400_DOWN_BASE_SOLID.png", AssetType.IMAGE);
		
		className.set ("img/DOWN/400X400_DOWN_EYES_CLOSED.png", __ASSET__img_down_400x400_down_eyes_closed_png);
		type.set ("img/DOWN/400X400_DOWN_EYES_CLOSED.png", AssetType.IMAGE);
		
		className.set ("img/DOWN/400X400_DOWN_EYES_OPEN.png", __ASSET__img_down_400x400_down_eyes_open_png);
		type.set ("img/DOWN/400X400_DOWN_EYES_OPEN.png", AssetType.IMAGE);
		
		className.set ("img/FOUR/400X400_FOUR_BASE_GLOW.png", __ASSET__img_four_400x400_four_base_glow_png);
		type.set ("img/FOUR/400X400_FOUR_BASE_GLOW.png", AssetType.IMAGE);
		
		className.set ("img/FOUR/400X400_FOUR_BASE_SOLID.png", __ASSET__img_four_400x400_four_base_solid_png);
		type.set ("img/FOUR/400X400_FOUR_BASE_SOLID.png", AssetType.IMAGE);
		
		className.set ("img/FOUR/400X400_FOUR_EYES_CLOSED.png", __ASSET__img_four_400x400_four_eyes_closed_png);
		type.set ("img/FOUR/400X400_FOUR_EYES_CLOSED.png", AssetType.IMAGE);
		
		className.set ("img/FOUR/400X400_FOUR_EYES_OPEN.png", __ASSET__img_four_400x400_four_eyes_open_png);
		type.set ("img/FOUR/400X400_FOUR_EYES_OPEN.png", AssetType.IMAGE);
		
		className.set ("img/HORZ/400X400_HORZ_BASE_GLOW.png", __ASSET__img_horz_400x400_horz_base_glow_png);
		type.set ("img/HORZ/400X400_HORZ_BASE_GLOW.png", AssetType.IMAGE);
		
		className.set ("img/HORZ/400X400_HORZ_BASE_SOLID.png", __ASSET__img_horz_400x400_horz_base_solid_png);
		type.set ("img/HORZ/400X400_HORZ_BASE_SOLID.png", AssetType.IMAGE);
		
		className.set ("img/HORZ/400X400_HORZ_EYES_CLOSED.png", __ASSET__img_horz_400x400_horz_eyes_closed_png);
		type.set ("img/HORZ/400X400_HORZ_EYES_CLOSED.png", AssetType.IMAGE);
		
		className.set ("img/HORZ/400X400_HORZ_EYES_OPEN.png", __ASSET__img_horz_400x400_horz_eyes_open_png);
		type.set ("img/HORZ/400X400_HORZ_EYES_OPEN.png", AssetType.IMAGE);
		
		className.set ("img/LEFT/400X400_LEFT_BASE_GLOW.png", __ASSET__img_left_400x400_left_base_glow_png);
		type.set ("img/LEFT/400X400_LEFT_BASE_GLOW.png", AssetType.IMAGE);
		
		className.set ("img/LEFT/400X400_LEFT_BASE_SOLID.png", __ASSET__img_left_400x400_left_base_solid_png);
		type.set ("img/LEFT/400X400_LEFT_BASE_SOLID.png", AssetType.IMAGE);
		
		className.set ("img/LEFT/400X400_LEFT_EYES_CLOSED.png", __ASSET__img_left_400x400_left_eyes_closed_png);
		type.set ("img/LEFT/400X400_LEFT_EYES_CLOSED.png", AssetType.IMAGE);
		
		className.set ("img/LEFT/400X400_LEFT_EYES_OPEN.png", __ASSET__img_left_400x400_left_eyes_open_png);
		type.set ("img/LEFT/400X400_LEFT_EYES_OPEN.png", AssetType.IMAGE);
		
		className.set ("img/RGHT/400X400_RGHT_BASE_GLOW.png", __ASSET__img_rght_400x400_rght_base_glow_png);
		type.set ("img/RGHT/400X400_RGHT_BASE_GLOW.png", AssetType.IMAGE);
		
		className.set ("img/RGHT/400X400_RGHT_BASE_SOLID.png", __ASSET__img_rght_400x400_rght_base_solid_png);
		type.set ("img/RGHT/400X400_RGHT_BASE_SOLID.png", AssetType.IMAGE);
		
		className.set ("img/RGHT/400X400_RGHT_EYES_CLOSED.png", __ASSET__img_rght_400x400_rght_eyes_closed_png);
		type.set ("img/RGHT/400X400_RGHT_EYES_CLOSED.png", AssetType.IMAGE);
		
		className.set ("img/RGHT/400X400_RGHT_EYES_OPEN.png", __ASSET__img_rght_400x400_rght_eyes_open_png);
		type.set ("img/RGHT/400X400_RGHT_EYES_OPEN.png", AssetType.IMAGE);
		
		className.set ("img/VERT/400X400_VERT_BASE_GLOW.png", __ASSET__img_vert_400x400_vert_base_glow_png);
		type.set ("img/VERT/400X400_VERT_BASE_GLOW.png", AssetType.IMAGE);
		
		className.set ("img/VERT/400X400_VERT_BASE_SOLID.png", __ASSET__img_vert_400x400_vert_base_solid_png);
		type.set ("img/VERT/400X400_VERT_BASE_SOLID.png", AssetType.IMAGE);
		
		className.set ("img/VERT/400X400_VERT_EYES_CLOSED.png", __ASSET__img_vert_400x400_vert_eyes_closed_png);
		type.set ("img/VERT/400X400_VERT_EYES_CLOSED.png", AssetType.IMAGE);
		
		className.set ("img/VERT/400X400_VERT_EYES_OPEN.png", __ASSET__img_vert_400x400_vert_eyes_open_png);
		type.set ("img/VERT/400X400_VERT_EYES_OPEN.png", AssetType.IMAGE);
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), ByteArray));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return cast (Type.createInstance (className.get (id), []), ByteArray);
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return bitmapData.getPixels (bitmapData.rect);
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif html5
		
		var bytes:ByteArray = null;
		var data = Preloader.loaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var bytes:ByteArray = null;
		var data = Preloader.loaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String, handler:AudioBuffer -> Void):Void {
		
		#if (flash)
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				handler (audioBuffer);
				
			});
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			handler (getAudioBuffer (id));
			
		}
		#else
		handler (getAudioBuffer (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadImage (id:String, handler:Image -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				handler (Image.fromBitmapData (bitmapData));
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getImage (id));
			
		}
		
		#else
		
		handler (getImage (id));
		
		#end
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = ByteArray.readFile ("../Resources/manifest");
			#elseif ios
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if ios
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	/*public override function loadMusic (id:String, handler:Dynamic -> Void):Void {
		
		#if (flash || html5)
		
		//if (path.exists (id)) {
			
		//	var loader = new Loader ();
		//	loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
		//		handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
		//	});
		//	loader.load (new URLRequest (path.get (id)));
			
		//} else {
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}*/
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		//#if html5
		
		/*if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (event.currentTarget.data);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}*/
		
		//#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		//#end
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__img_abov_400x400_abov_base_glow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_abov_400x400_abov_base_solid_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_abov_400x400_abov_eyes_closed_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_abov_400x400_abov_eyes_open_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_down_400x400_down_base_glow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_down_400x400_down_base_solid_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_down_400x400_down_eyes_closed_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_down_400x400_down_eyes_open_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_four_400x400_four_base_glow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_four_400x400_four_base_solid_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_four_400x400_four_eyes_closed_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_four_400x400_four_eyes_open_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_horz_400x400_horz_base_glow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_horz_400x400_horz_base_solid_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_horz_400x400_horz_eyes_closed_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_horz_400x400_horz_eyes_open_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_left_400x400_left_base_glow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_left_400x400_left_base_solid_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_left_400x400_left_eyes_closed_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_left_400x400_left_eyes_open_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_rght_400x400_rght_base_glow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_rght_400x400_rght_base_solid_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_rght_400x400_rght_eyes_closed_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_rght_400x400_rght_eyes_open_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_vert_400x400_vert_base_glow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_vert_400x400_vert_base_solid_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_vert_400x400_vert_eyes_closed_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__img_vert_400x400_vert_eyes_open_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }


#elseif html5































#else



#if (windows || mac || linux)


@:image("assets/img/ABOV/400X400_ABOV_BASE_GLOW.png") #if display private #end class __ASSET__img_abov_400x400_abov_base_glow_png extends lime.graphics.Image {}
@:image("assets/img/ABOV/400X400_ABOV_BASE_SOLID.png") #if display private #end class __ASSET__img_abov_400x400_abov_base_solid_png extends lime.graphics.Image {}
@:image("assets/img/ABOV/400X400_ABOV_EYES_CLOSED.png") #if display private #end class __ASSET__img_abov_400x400_abov_eyes_closed_png extends lime.graphics.Image {}
@:image("assets/img/ABOV/400X400_ABOV_EYES_OPEN.png") #if display private #end class __ASSET__img_abov_400x400_abov_eyes_open_png extends lime.graphics.Image {}
@:image("assets/img/DOWN/400X400_DOWN_BASE_GLOW.png") #if display private #end class __ASSET__img_down_400x400_down_base_glow_png extends lime.graphics.Image {}
@:image("assets/img/DOWN/400X400_DOWN_BASE_SOLID.png") #if display private #end class __ASSET__img_down_400x400_down_base_solid_png extends lime.graphics.Image {}
@:image("assets/img/DOWN/400X400_DOWN_EYES_CLOSED.png") #if display private #end class __ASSET__img_down_400x400_down_eyes_closed_png extends lime.graphics.Image {}
@:image("assets/img/DOWN/400X400_DOWN_EYES_OPEN.png") #if display private #end class __ASSET__img_down_400x400_down_eyes_open_png extends lime.graphics.Image {}
@:image("assets/img/FOUR/400X400_FOUR_BASE_GLOW.png") #if display private #end class __ASSET__img_four_400x400_four_base_glow_png extends lime.graphics.Image {}
@:image("assets/img/FOUR/400X400_FOUR_BASE_SOLID.png") #if display private #end class __ASSET__img_four_400x400_four_base_solid_png extends lime.graphics.Image {}
@:image("assets/img/FOUR/400X400_FOUR_EYES_CLOSED.png") #if display private #end class __ASSET__img_four_400x400_four_eyes_closed_png extends lime.graphics.Image {}
@:image("assets/img/FOUR/400X400_FOUR_EYES_OPEN.png") #if display private #end class __ASSET__img_four_400x400_four_eyes_open_png extends lime.graphics.Image {}
@:image("assets/img/HORZ/400X400_HORZ_BASE_GLOW.png") #if display private #end class __ASSET__img_horz_400x400_horz_base_glow_png extends lime.graphics.Image {}
@:image("assets/img/HORZ/400X400_HORZ_BASE_SOLID.png") #if display private #end class __ASSET__img_horz_400x400_horz_base_solid_png extends lime.graphics.Image {}
@:image("assets/img/HORZ/400X400_HORZ_EYES_CLOSED.png") #if display private #end class __ASSET__img_horz_400x400_horz_eyes_closed_png extends lime.graphics.Image {}
@:image("assets/img/HORZ/400X400_HORZ_EYES_OPEN.png") #if display private #end class __ASSET__img_horz_400x400_horz_eyes_open_png extends lime.graphics.Image {}
@:image("assets/img/LEFT/400X400_LEFT_BASE_GLOW.png") #if display private #end class __ASSET__img_left_400x400_left_base_glow_png extends lime.graphics.Image {}
@:image("assets/img/LEFT/400X400_LEFT_BASE_SOLID.png") #if display private #end class __ASSET__img_left_400x400_left_base_solid_png extends lime.graphics.Image {}
@:image("assets/img/LEFT/400X400_LEFT_EYES_CLOSED.png") #if display private #end class __ASSET__img_left_400x400_left_eyes_closed_png extends lime.graphics.Image {}
@:image("assets/img/LEFT/400X400_LEFT_EYES_OPEN.png") #if display private #end class __ASSET__img_left_400x400_left_eyes_open_png extends lime.graphics.Image {}
@:image("assets/img/RGHT/400X400_RGHT_BASE_GLOW.png") #if display private #end class __ASSET__img_rght_400x400_rght_base_glow_png extends lime.graphics.Image {}
@:image("assets/img/RGHT/400X400_RGHT_BASE_SOLID.png") #if display private #end class __ASSET__img_rght_400x400_rght_base_solid_png extends lime.graphics.Image {}
@:image("assets/img/RGHT/400X400_RGHT_EYES_CLOSED.png") #if display private #end class __ASSET__img_rght_400x400_rght_eyes_closed_png extends lime.graphics.Image {}
@:image("assets/img/RGHT/400X400_RGHT_EYES_OPEN.png") #if display private #end class __ASSET__img_rght_400x400_rght_eyes_open_png extends lime.graphics.Image {}
@:image("assets/img/VERT/400X400_VERT_BASE_GLOW.png") #if display private #end class __ASSET__img_vert_400x400_vert_base_glow_png extends lime.graphics.Image {}
@:image("assets/img/VERT/400X400_VERT_BASE_SOLID.png") #if display private #end class __ASSET__img_vert_400x400_vert_base_solid_png extends lime.graphics.Image {}
@:image("assets/img/VERT/400X400_VERT_EYES_CLOSED.png") #if display private #end class __ASSET__img_vert_400x400_vert_eyes_closed_png extends lime.graphics.Image {}
@:image("assets/img/VERT/400X400_VERT_EYES_OPEN.png") #if display private #end class __ASSET__img_vert_400x400_vert_eyes_open_png extends lime.graphics.Image {}



#end

#if openfl

#end

#end
#end

