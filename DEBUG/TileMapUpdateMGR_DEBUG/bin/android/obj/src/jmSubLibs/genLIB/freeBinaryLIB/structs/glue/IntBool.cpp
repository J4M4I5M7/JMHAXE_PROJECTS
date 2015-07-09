#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_glue_IntBool
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/glue/IntBool.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace freeBinaryLIB{
namespace structs{
namespace glue{

Void IntBool_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.glue.IntBool","new",0xa804b52e,"jmSubLibs.genLIB.freeBinaryLIB.structs.glue.IntBool.new","jmSubLibs/genLIB/freeBinaryLIB/structs/glue/IntBool.hx",14,0xf2135861)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//IntBool_obj::~IntBool_obj() { }

Dynamic IntBool_obj::__CreateEmpty() { return  new IntBool_obj; }
hx::ObjectPtr< IntBool_obj > IntBool_obj::__new()
{  hx::ObjectPtr< IntBool_obj > result = new IntBool_obj();
	result->__construct();
	return result;}

Dynamic IntBool_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntBool_obj > result = new IntBool_obj();
	result->__construct();
	return result;}


IntBool_obj::IntBool_obj()
{
}

Dynamic IntBool_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IntBool_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntBool_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("i"));
	outFields->push(HX_CSTRING("b"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(IntBool_obj,i),HX_CSTRING("i")},
	{hx::fsBool,(int)offsetof(IntBool_obj,b),HX_CSTRING("b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("i"),
	HX_CSTRING("b"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntBool_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntBool_obj::__mClass,"__mClass");
};

#endif

Class IntBool_obj::__mClass;

void IntBool_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.freeBinaryLIB.structs.glue.IntBool"), hx::TCanCast< IntBool_obj> ,sStaticFields,sMemberFields,
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

void IntBool_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace freeBinaryLIB
} // end namespace structs
} // end namespace glue
