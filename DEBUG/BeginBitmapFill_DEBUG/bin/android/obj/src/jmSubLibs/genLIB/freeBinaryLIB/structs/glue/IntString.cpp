#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_glue_IntString
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/glue/IntString.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace freeBinaryLIB{
namespace structs{
namespace glue{

Void IntString_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.glue.IntString","new",0xb7a6a1d5,"jmSubLibs.genLIB.freeBinaryLIB.structs.glue.IntString.new","jmSubLibs/genLIB/freeBinaryLIB/structs/glue/IntString.hx",16,0x6259935a)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//IntString_obj::~IntString_obj() { }

Dynamic IntString_obj::__CreateEmpty() { return  new IntString_obj; }
hx::ObjectPtr< IntString_obj > IntString_obj::__new()
{  hx::ObjectPtr< IntString_obj > result = new IntString_obj();
	result->__construct();
	return result;}

Dynamic IntString_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntString_obj > result = new IntString_obj();
	result->__construct();
	return result;}


IntString_obj::IntString_obj()
{
}

void IntString_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntString);
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_END_CLASS();
}

void IntString_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(s,"s");
}

Dynamic IntString_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IntString_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntString_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("i"));
	outFields->push(HX_CSTRING("s"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(IntString_obj,i),HX_CSTRING("i")},
	{hx::fsString,(int)offsetof(IntString_obj,s),HX_CSTRING("s")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("i"),
	HX_CSTRING("s"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntString_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntString_obj::__mClass,"__mClass");
};

#endif

Class IntString_obj::__mClass;

void IntString_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.freeBinaryLIB.structs.glue.IntString"), hx::TCanCast< IntString_obj> ,sStaticFields,sMemberFields,
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

void IntString_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace freeBinaryLIB
} // end namespace structs
} // end namespace glue
