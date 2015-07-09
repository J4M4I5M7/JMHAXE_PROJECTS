package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("img/ABOV/400X400_ABOV_BASE_GLOW.png", "img/ABOV/400X400_ABOV_BASE_GLOW.png");
			type.set ("img/ABOV/400X400_ABOV_BASE_GLOW.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/ABOV/400X400_ABOV_BASE_SOLID.png", "img/ABOV/400X400_ABOV_BASE_SOLID.png");
			type.set ("img/ABOV/400X400_ABOV_BASE_SOLID.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/ABOV/400X400_ABOV_EYES_CLOSED.png", "img/ABOV/400X400_ABOV_EYES_CLOSED.png");
			type.set ("img/ABOV/400X400_ABOV_EYES_CLOSED.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/ABOV/400X400_ABOV_EYES_OPEN.png", "img/ABOV/400X400_ABOV_EYES_OPEN.png");
			type.set ("img/ABOV/400X400_ABOV_EYES_OPEN.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/DOWN/400X400_DOWN_BASE_GLOW.png", "img/DOWN/400X400_DOWN_BASE_GLOW.png");
			type.set ("img/DOWN/400X400_DOWN_BASE_GLOW.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/DOWN/400X400_DOWN_BASE_SOLID.png", "img/DOWN/400X400_DOWN_BASE_SOLID.png");
			type.set ("img/DOWN/400X400_DOWN_BASE_SOLID.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/DOWN/400X400_DOWN_EYES_CLOSED.png", "img/DOWN/400X400_DOWN_EYES_CLOSED.png");
			type.set ("img/DOWN/400X400_DOWN_EYES_CLOSED.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/DOWN/400X400_DOWN_EYES_OPEN.png", "img/DOWN/400X400_DOWN_EYES_OPEN.png");
			type.set ("img/DOWN/400X400_DOWN_EYES_OPEN.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/FOUR/400X400_FOUR_BASE_GLOW.png", "img/FOUR/400X400_FOUR_BASE_GLOW.png");
			type.set ("img/FOUR/400X400_FOUR_BASE_GLOW.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/FOUR/400X400_FOUR_BASE_SOLID.png", "img/FOUR/400X400_FOUR_BASE_SOLID.png");
			type.set ("img/FOUR/400X400_FOUR_BASE_SOLID.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/FOUR/400X400_FOUR_EYES_CLOSED.png", "img/FOUR/400X400_FOUR_EYES_CLOSED.png");
			type.set ("img/FOUR/400X400_FOUR_EYES_CLOSED.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/FOUR/400X400_FOUR_EYES_OPEN.png", "img/FOUR/400X400_FOUR_EYES_OPEN.png");
			type.set ("img/FOUR/400X400_FOUR_EYES_OPEN.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/HORZ/400X400_HORZ_BASE_GLOW.png", "img/HORZ/400X400_HORZ_BASE_GLOW.png");
			type.set ("img/HORZ/400X400_HORZ_BASE_GLOW.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/HORZ/400X400_HORZ_BASE_SOLID.png", "img/HORZ/400X400_HORZ_BASE_SOLID.png");
			type.set ("img/HORZ/400X400_HORZ_BASE_SOLID.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/HORZ/400X400_HORZ_EYES_CLOSED.png", "img/HORZ/400X400_HORZ_EYES_CLOSED.png");
			type.set ("img/HORZ/400X400_HORZ_EYES_CLOSED.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/HORZ/400X400_HORZ_EYES_OPEN.png", "img/HORZ/400X400_HORZ_EYES_OPEN.png");
			type.set ("img/HORZ/400X400_HORZ_EYES_OPEN.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/LEFT/400X400_LEFT_BASE_GLOW.png", "img/LEFT/400X400_LEFT_BASE_GLOW.png");
			type.set ("img/LEFT/400X400_LEFT_BASE_GLOW.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/LEFT/400X400_LEFT_BASE_SOLID.png", "img/LEFT/400X400_LEFT_BASE_SOLID.png");
			type.set ("img/LEFT/400X400_LEFT_BASE_SOLID.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/LEFT/400X400_LEFT_EYES_CLOSED.png", "img/LEFT/400X400_LEFT_EYES_CLOSED.png");
			type.set ("img/LEFT/400X400_LEFT_EYES_CLOSED.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/LEFT/400X400_LEFT_EYES_OPEN.png", "img/LEFT/400X400_LEFT_EYES_OPEN.png");
			type.set ("img/LEFT/400X400_LEFT_EYES_OPEN.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/RGHT/400X400_RGHT_BASE_GLOW.png", "img/RGHT/400X400_RGHT_BASE_GLOW.png");
			type.set ("img/RGHT/400X400_RGHT_BASE_GLOW.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/RGHT/400X400_RGHT_BASE_SOLID.png", "img/RGHT/400X400_RGHT_BASE_SOLID.png");
			type.set ("img/RGHT/400X400_RGHT_BASE_SOLID.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/RGHT/400X400_RGHT_EYES_CLOSED.png", "img/RGHT/400X400_RGHT_EYES_CLOSED.png");
			type.set ("img/RGHT/400X400_RGHT_EYES_CLOSED.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/RGHT/400X400_RGHT_EYES_OPEN.png", "img/RGHT/400X400_RGHT_EYES_OPEN.png");
			type.set ("img/RGHT/400X400_RGHT_EYES_OPEN.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/VERT/400X400_VERT_BASE_GLOW.png", "img/VERT/400X400_VERT_BASE_GLOW.png");
			type.set ("img/VERT/400X400_VERT_BASE_GLOW.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/VERT/400X400_VERT_BASE_SOLID.png", "img/VERT/400X400_VERT_BASE_SOLID.png");
			type.set ("img/VERT/400X400_VERT_BASE_SOLID.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/VERT/400X400_VERT_EYES_CLOSED.png", "img/VERT/400X400_VERT_EYES_CLOSED.png");
			type.set ("img/VERT/400X400_VERT_EYES_CLOSED.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/VERT/400X400_VERT_EYES_OPEN.png", "img/VERT/400X400_VERT_EYES_OPEN.png");
			type.set ("img/VERT/400X400_VERT_EYES_OPEN.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
