#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_glue_IntFloat
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/glue/IntFloat.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace freeBinaryLIB{
namespace structs{
namespace glue{

Void IntFloat_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.glue.IntFloat","new",0xba20e13c,"jmSubLibs.genLIB.freeBinaryLIB.structs.glue.IntFloat.new","jmSubLibs/genLIB/freeBinaryLIB/structs/glue/IntFloat.hx",22,0x1f93de75)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	this->i = (int)-777666;
	HX_STACK_LINE(24)
	this->f = (int)-333222;
}
;
	return null();
}

//IntFloat_obj::~IntFloat_obj() { }

Dynamic IntFloat_obj::__CreateEmpty() { return  new IntFloat_obj; }
hx::ObjectPtr< IntFloat_obj > IntFloat_obj::__new()
{  hx::ObjectPtr< IntFloat_obj > result = new IntFloat_obj();
	result->__construct();
	return result;}

Dynamic IntFloat_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntFloat_obj > result = new IntFloat_obj();
	result->__construct();
	return result;}


IntFloat_obj::IntFloat_obj()
{
}

Dynamic IntFloat_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		if (HX_FIELD_EQ(inName,"f") ) { return f; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IntFloat_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntFloat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("i"));
	outFields->push(HX_CSTRING("f"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(IntFloat_obj,i),HX_CSTRING("i")},
	{hx::fsFloat,(int)offsetof(IntFloat_obj,f),HX_CSTRING("f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("i"),
	HX_CSTRING("f"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntFloat_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntFloat_obj::__mClass,"__mClass");
};

#endif

Class IntFloat_obj::__mClass;

void IntFloat_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.freeBinaryLIB.structs.glue.IntFloat"), hx::TCanCast< IntFloat_obj> ,sStaticFields,sMemberFields,
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

void IntFloat_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace freeBinaryLIB
} // end namespace structs
} // end namespace glue
