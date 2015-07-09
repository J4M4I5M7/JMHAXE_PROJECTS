#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_jmSubLibs_decoupledLIB_utils_staticUtils_graphics_bitmap_fill_BitmapFillPatternUtil
#include <jmSubLibs/decoupledLIB/utils/staticUtils/graphics/bitmap/fill/BitmapFillPatternUtil.h>
#endif
#ifndef INCLUDED_jmSubLibs_haxePhoneLIB_staticUtils_ScreenSizeUtil
#include <jmSubLibs/haxePhoneLIB/staticUtils/ScreenSizeUtil.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace jmSubLibs{
namespace haxePhoneLIB{
namespace staticUtils{

Void ScreenSizeUtil_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.haxePhoneLIB.staticUtils.ScreenSizeUtil","new",0xb448a8ba,"jmSubLibs.haxePhoneLIB.staticUtils.ScreenSizeUtil.new","jmSubLibs/haxePhoneLIB/staticUtils/ScreenSizeUtil.hx",17,0x865f8b75)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ScreenSizeUtil_obj::~ScreenSizeUtil_obj() { }

Dynamic ScreenSizeUtil_obj::__CreateEmpty() { return  new ScreenSizeUtil_obj; }
hx::ObjectPtr< ScreenSizeUtil_obj > ScreenSizeUtil_obj::__new()
{  hx::ObjectPtr< ScreenSizeUtil_obj > result = new ScreenSizeUtil_obj();
	result->__construct();
	return result;}

Dynamic ScreenSizeUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScreenSizeUtil_obj > result = new ScreenSizeUtil_obj();
	result->__construct();
	return result;}

int ScreenSizeUtil_obj::getPixelWid( ){
	HX_STACK_FRAME("jmSubLibs.haxePhoneLIB.staticUtils.ScreenSizeUtil","getPixelWid",0x45b0763c,"jmSubLibs.haxePhoneLIB.staticUtils.ScreenSizeUtil.getPixelWid","jmSubLibs/haxePhoneLIB/staticUtils/ScreenSizeUtil.hx",22,0x865f8b75)
	HX_STACK_LINE(28)
	int op = ::openfl::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(31)
	return op;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ScreenSizeUtil_obj,getPixelWid,return )

int ScreenSizeUtil_obj::getPixelHig( ){
	HX_STACK_FRAME("jmSubLibs.haxePhoneLIB.staticUtils.ScreenSizeUtil","getPixelHig",0x45a51470,"jmSubLibs.haxePhoneLIB.staticUtils.ScreenSizeUtil.getPixelHig","jmSubLibs/haxePhoneLIB/staticUtils/ScreenSizeUtil.hx",36,0x865f8b75)
	HX_STACK_LINE(42)
	int op = ::openfl::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(45)
	return op;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ScreenSizeUtil_obj,getPixelHig,return )

Void ScreenSizeUtil_obj::debugVisualTest( ::Main inMain){
{
		HX_STACK_FRAME("jmSubLibs.haxePhoneLIB.staticUtils.ScreenSizeUtil","debugVisualTest",0x5c940abf,"jmSubLibs.haxePhoneLIB.staticUtils.ScreenSizeUtil.debugVisualTest","jmSubLibs/haxePhoneLIB/staticUtils/ScreenSizeUtil.hx",51,0x865f8b75)
		HX_STACK_ARG(inMain,"inMain")
		HX_STACK_LINE(52)
		int w = ::jmSubLibs::haxePhoneLIB::staticUtils::ScreenSizeUtil_obj::getPixelWid();		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(53)
		int h = ::jmSubLibs::haxePhoneLIB::staticUtils::ScreenSizeUtil_obj::getPixelHig();		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(54)
		::openfl::display::BitmapData buf = ::openfl::display::BitmapData_obj::__new(w,h,true,(int)-65536,null());		HX_STACK_VAR(buf,"buf");
		HX_STACK_LINE(58)
		::jmSubLibs::decoupledLIB::utils::staticUtils::graphics::bitmap::fill::BitmapFillPatternUtil_obj::makeRectangularGradient(buf,(int)-65536,(int)-16711936,true);
		HX_STACK_LINE(60)
		::openfl::display::Bitmap buf_vis = ::openfl::display::Bitmap_obj::__new(null(),null(),null());		HX_STACK_VAR(buf_vis,"buf_vis");
		HX_STACK_LINE(61)
		buf_vis->set_bitmapData(buf);
		HX_STACK_LINE(64)
		inMain->addChild(buf_vis);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScreenSizeUtil_obj,debugVisualTest,(void))


ScreenSizeUtil_obj::ScreenSizeUtil_obj()
{
}

Dynamic ScreenSizeUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"getPixelWid") ) { return getPixelWid_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixelHig") ) { return getPixelHig_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"debugVisualTest") ) { return debugVisualTest_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScreenSizeUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenSizeUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getPixelWid"),
	HX_CSTRING("getPixelHig"),
	HX_CSTRING("debugVisualTest"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScreenSizeUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScreenSizeUtil_obj::__mClass,"__mClass");
};

#endif

Class ScreenSizeUtil_obj::__mClass;

void ScreenSizeUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.haxePhoneLIB.staticUtils.ScreenSizeUtil"), hx::TCanCast< ScreenSizeUtil_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void ScreenSizeUtil_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace haxePhoneLIB
} // end namespace staticUtils
