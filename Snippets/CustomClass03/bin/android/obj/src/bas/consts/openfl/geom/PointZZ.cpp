#include <hxcpp.h>

#ifndef INCLUDED_bas_consts_openfl_geom_PointZZ
#include <bas/consts/openfl/geom/PointZZ.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
namespace bas{
namespace consts{
namespace openfl{
namespace geom{

Void PointZZ_obj::__construct()
{
HX_STACK_FRAME("bas.consts.openfl.geom.PointZZ","new",0x3cd7026a,"bas.consts.openfl.geom.PointZZ.new","bas/consts/openfl/geom/PointZZ.hx",14,0xea8e56c6)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//PointZZ_obj::~PointZZ_obj() { }

Dynamic PointZZ_obj::__CreateEmpty() { return  new PointZZ_obj; }
hx::ObjectPtr< PointZZ_obj > PointZZ_obj::__new()
{  hx::ObjectPtr< PointZZ_obj > result = new PointZZ_obj();
	result->__construct();
	return result;}

Dynamic PointZZ_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PointZZ_obj > result = new PointZZ_obj();
	result->__construct();
	return result;}

::openfl::geom::Point PointZZ_obj::ZZ;


PointZZ_obj::PointZZ_obj()
{
}

Dynamic PointZZ_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ZZ") ) { return ZZ; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PointZZ_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ZZ") ) { ZZ=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PointZZ_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ZZ"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PointZZ_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PointZZ_obj::ZZ,"ZZ");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PointZZ_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PointZZ_obj::ZZ,"ZZ");
};

#endif

Class PointZZ_obj::__mClass;

void PointZZ_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("bas.consts.openfl.geom.PointZZ"), hx::TCanCast< PointZZ_obj> ,sStaticFields,sMemberFields,
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

void PointZZ_obj::__boot()
{
	ZZ= ::openfl::geom::Point_obj::__new((int)0,(int)0);
}

} // end namespace bas
} // end namespace consts
} // end namespace openfl
} // end namespace geom
