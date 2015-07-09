package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("img/ANIM_STRIP.png", "img/ANIM_STRIP.png");
			type.set ("img/ANIM_STRIP.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("aud/AHEM.WAV", "aud/AHEM.WAV");
			type.set ("aud/AHEM.WAV", Reflect.field (AssetType, "sound".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
