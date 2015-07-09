package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("img/BLINK_EYES_01.PNG", "img/BLINK_EYES_01.PNG");
			type.set ("img/BLINK_EYES_01.PNG", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/BLINK_EYES_02.PNG", "img/BLINK_EYES_02.PNG");
			type.set ("img/BLINK_EYES_02.PNG", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/BLINK_EYES_03.PNG", "img/BLINK_EYES_03.PNG");
			type.set ("img/BLINK_EYES_03.PNG", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/BODY_01.PNG", "img/BODY_01.PNG");
			type.set ("img/BODY_01.PNG", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/BODY_02.PNG", "img/BODY_02.PNG");
			type.set ("img/BODY_02.PNG", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/IDLE_EYES_01.PNG", "img/IDLE_EYES_01.PNG");
			type.set ("img/IDLE_EYES_01.PNG", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/IDLE_EYES_02.PNG", "img/IDLE_EYES_02.PNG");
			type.set ("img/IDLE_EYES_02.PNG", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/MOUTH_01.PNG", "img/MOUTH_01.PNG");
			type.set ("img/MOUTH_01.PNG", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/MOUTH_02.PNG", "img/MOUTH_02.PNG");
			type.set ("img/MOUTH_02.PNG", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/MOUTH_03.PNG", "img/MOUTH_03.PNG");
			type.set ("img/MOUTH_03.PNG", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/PreviewImage150x150.png", "img/PreviewImage150x150.png");
			type.set ("img/PreviewImage150x150.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
