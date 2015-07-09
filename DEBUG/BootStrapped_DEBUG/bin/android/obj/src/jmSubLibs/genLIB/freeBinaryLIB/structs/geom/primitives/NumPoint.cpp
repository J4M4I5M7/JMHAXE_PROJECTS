#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_geom_primitives_NumPoint
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/NumPoint.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace freeBinaryLIB{
namespace structs{
namespace geom{
namespace primitives{

Void NumPoint_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.NumPoint","new",0x52468da8,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.NumPoint.new","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/NumPoint.hx",14,0x3746ad46)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	this->x = (int)0;
	HX_STACK_LINE(16)
	this->y = (int)0;
}
;
	return null();
}

//NumPoint_obj::~NumPoint_obj() { }

Dynamic NumPoint_obj::__CreateEmpty() { return  new NumPoint_obj; }
hx::ObjectPtr< NumPoint_obj > NumPoint_obj::__new()
{  hx::ObjectPtr< NumPoint_obj > result = new NumPoint_obj();
	result->__construct();
	return result;}

Dynamic NumPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NumPoint_obj > result = new NumPoint_obj();
	result->__construct();
	return result;}


NumPoint_obj::NumPoint_obj()
{
}

Dynamic NumPoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NumPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NumPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(NumPoint_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(NumPoint_obj,y),HX_CSTRING("y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NumPoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NumPoint_obj::__mClass,"__mClass");
};

#endif

Class NumPoint_obj::__mClass;

void NumPoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.NumPoint"), hx::TCanCast< NumPoint_obj> ,sStaticFields,sMemberFields,
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

void NumPoint_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace freeBinaryLIB
} // end namespace structs
} // end namespace geom
} // end namespace primitives
