package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/img/TEST.png", "assets/img/TEST.png");
			type.set ("assets/img/TEST.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/aud/ahem_x.wav", "assets/aud/ahem_x.wav");
			type.set ("assets/aud/ahem_x.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
