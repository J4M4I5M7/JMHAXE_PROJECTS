#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_structs_glue_BitMapBool
#include <jmSubLibs/genLIB/decoupledLIB/helpers/structs/glue/BitMapBool.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace helpers{
namespace structs{
namespace glue{

Void BitMapBool_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.structs.glue.BitMapBool","new",0xb97af435,"jmSubLibs.genLIB.decoupledLIB.helpers.structs.glue.BitMapBool.new","jmSubLibs/genLIB/decoupledLIB/helpers/structs/glue/BitMapBool.hx",23,0xae4445dd)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BitMapBool_obj::~BitMapBool_obj() { }

Dynamic BitMapBool_obj::__CreateEmpty() { return  new BitMapBool_obj; }
hx::ObjectPtr< BitMapBool_obj > BitMapBool_obj::__new()
{  hx::ObjectPtr< BitMapBool_obj > result = new BitMapBool_obj();
	result->__construct();
	return result;}

Dynamic BitMapBool_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitMapBool_obj > result = new BitMapBool_obj();
	result->__construct();
	return result;}


BitMapBool_obj::BitMapBool_obj()
{
}

void BitMapBool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitMapBool);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(boo,"boo");
	HX_MARK_END_CLASS();
}

void BitMapBool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(boo,"boo");
}

Dynamic BitMapBool_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		if (HX_FIELD_EQ(inName,"boo") ) { return boo; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitMapBool_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boo") ) { boo=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitMapBool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("map"));
	outFields->push(HX_CSTRING("boo"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(BitMapBool_obj,map),HX_CSTRING("map")},
	{hx::fsBool,(int)offsetof(BitMapBool_obj,boo),HX_CSTRING("boo")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("map"),
	HX_CSTRING("boo"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitMapBool_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitMapBool_obj::__mClass,"__mClass");
};

#endif

Class BitMapBool_obj::__mClass;

void BitMapBool_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.helpers.structs.glue.BitMapBool"), hx::TCanCast< BitMapBool_obj> ,sStaticFields,sMemberFields,
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

void BitMapBool_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace helpers
} // end namespace structs
} // end namespace glue
