#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_decoupledLIB_utils_staticUtils_graphics_bitmap_fill_BitmapFillPatternUtil
#include <jmSubLibs/decoupledLIB/utils/staticUtils/graphics/bitmap/fill/BitmapFillPatternUtil.h>
#endif
#ifndef INCLUDED_jmSubLibs_decoupledLIB_utils_staticUtils_graphics_bitmap_fill_funcs_BFPU_MakeRectangularGradient
#include <jmSubLibs/decoupledLIB/utils/staticUtils/graphics/bitmap/fill/funcs/BFPU_MakeRectangularGradient.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
namespace jmSubLibs{
namespace decoupledLIB{
namespace utils{
namespace staticUtils{
namespace graphics{
namespace bitmap{
namespace fill{

Void BitmapFillPatternUtil_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.decoupledLIB.utils.staticUtils.graphics.bitmap.fill.BitmapFillPatternUtil","new",0x4f43e994,"jmSubLibs.decoupledLIB.utils.staticUtils.graphics.bitmap.fill.BitmapFillPatternUtil.new","jmSubLibs/decoupledLIB/utils/staticUtils/graphics/bitmap/fill/BitmapFillPatternUtil.hx",14,0xb0f2c31b)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BitmapFillPatternUtil_obj::~BitmapFillPatternUtil_obj() { }

Dynamic BitmapFillPatternUtil_obj::__CreateEmpty() { return  new BitmapFillPatternUtil_obj; }
hx::ObjectPtr< BitmapFillPatternUtil_obj > BitmapFillPatternUtil_obj::__new()
{  hx::ObjectPtr< BitmapFillPatternUtil_obj > result = new BitmapFillPatternUtil_obj();
	result->__construct();
	return result;}

Dynamic BitmapFillPatternUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapFillPatternUtil_obj > result = new BitmapFillPatternUtil_obj();
	result->__construct();
	return result;}

Void BitmapFillPatternUtil_obj::makeRectangularGradient( ::openfl::display::BitmapData inBm,int centerColor,int edgeColor,hx::Null< bool >  __o_clearBitmapFirst){
bool clearBitmapFirst = __o_clearBitmapFirst.Default(true);
	HX_STACK_FRAME("jmSubLibs.decoupledLIB.utils.staticUtils.graphics.bitmap.fill.BitmapFillPatternUtil","makeRectangularGradient",0x045fc834,"jmSubLibs.decoupledLIB.utils.staticUtils.graphics.bitmap.fill.BitmapFillPatternUtil.makeRectangularGradient","jmSubLibs/decoupledLIB/utils/staticUtils/graphics/bitmap/fill/BitmapFillPatternUtil.hx",23,0xb0f2c31b)
	HX_STACK_ARG(inBm,"inBm")
	HX_STACK_ARG(centerColor,"centerColor")
	HX_STACK_ARG(edgeColor,"edgeColor")
	HX_STACK_ARG(clearBitmapFirst,"clearBitmapFirst")
{
		HX_STACK_LINE(23)
		::jmSubLibs::decoupledLIB::utils::staticUtils::graphics::bitmap::fill::funcs::BFPU_MakeRectangularGradient_obj::func(inBm,centerColor,edgeColor,clearBitmapFirst);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(BitmapFillPatternUtil_obj,makeRectangularGradient,(void))


BitmapFillPatternUtil_obj::BitmapFillPatternUtil_obj()
{
}

Dynamic BitmapFillPatternUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"makeRectangularGradient") ) { return makeRectangularGradient_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapFillPatternUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapFillPatternUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("makeRectangularGradient"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFillPatternUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFillPatternUtil_obj::__mClass,"__mClass");
};

#endif

Class BitmapFillPatternUtil_obj::__mClass;

void BitmapFillPatternUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.decoupledLIB.utils.staticUtils.graphics.bitmap.fill.BitmapFillPatternUtil"), hx::TCanCast< BitmapFillPatternUtil_obj> ,sStaticFields,sMemberFields,
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

void BitmapFillPatternUtil_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace decoupledLIB
} // end namespace utils
} // end namespace staticUtils
} // end namespace graphics
} // end namespace bitmap
} // end namespace fill
