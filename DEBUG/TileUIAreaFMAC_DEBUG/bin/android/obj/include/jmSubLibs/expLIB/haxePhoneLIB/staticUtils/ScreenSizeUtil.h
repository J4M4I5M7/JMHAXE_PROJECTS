#ifndef INCLUDED_jmSubLibs_expLIB_haxePhoneLIB_staticUtils_ScreenSizeUtil
#define INCLUDED_jmSubLibs_expLIB_haxePhoneLIB_staticUtils_ScreenSizeUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS4(jmSubLibs,expLIB,haxePhoneLIB,staticUtils,ScreenSizeUtil)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace jmSubLibs{
namespace expLIB{
namespace haxePhoneLIB{
namespace staticUtils{


class HXCPP_CLASS_ATTRIBUTES  ScreenSizeUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ScreenSizeUtil_obj OBJ_;
		ScreenSizeUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ScreenSizeUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScreenSizeUtil_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ScreenSizeUtil"); }

		static int getPixelWid( );
		static Dynamic getPixelWid_dyn();

		static int getPixelHig( );
		static Dynamic getPixelHig_dyn();

		static Void debugVisualTest( ::Main inMain);
		static Dynamic debugVisualTest_dyn();

};

} // end namespace jmSubLibs
} // end namespace expLIB
} // end namespace haxePhoneLIB
} // end namespace staticUtils

#endif /* INCLUDED_jmSubLibs_expLIB_haxePhoneLIB_staticUtils_ScreenSizeUtil */ 
