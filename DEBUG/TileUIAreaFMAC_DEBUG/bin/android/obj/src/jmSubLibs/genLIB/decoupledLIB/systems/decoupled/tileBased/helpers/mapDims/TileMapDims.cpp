#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapDims_TileMapDims
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapDims/TileMapDims.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace decoupled{
namespace tileBased{
namespace helpers{
namespace mapDims{

Void TileMapDims_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapDims.TileMapDims","new",0x15d96a87,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapDims.TileMapDims.new","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapDims/TileMapDims.hx",22,0xb2c4156f)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//TileMapDims_obj::~TileMapDims_obj() { }

Dynamic TileMapDims_obj::__CreateEmpty() { return  new TileMapDims_obj; }
hx::ObjectPtr< TileMapDims_obj > TileMapDims_obj::__new()
{  hx::ObjectPtr< TileMapDims_obj > result = new TileMapDims_obj();
	result->__construct();
	return result;}

Dynamic TileMapDims_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileMapDims_obj > result = new TileMapDims_obj();
	result->__construct();
	return result;}


TileMapDims_obj::TileMapDims_obj()
{
}

Dynamic TileMapDims_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"wid") ) { return wid; }
		if (HX_FIELD_EQ(inName,"hig") ) { return hig; }
		if (HX_FIELD_EQ(inName,"tWX") ) { return tWX; }
		if (HX_FIELD_EQ(inName,"tHY") ) { return tHY; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileMapDims_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"wid") ) { wid=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hig") ) { hig=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tWX") ) { tWX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tHY") ) { tHY=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileMapDims_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("wid"));
	outFields->push(HX_CSTRING("hig"));
	outFields->push(HX_CSTRING("tWX"));
	outFields->push(HX_CSTRING("tHY"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TileMapDims_obj,wid),HX_CSTRING("wid")},
	{hx::fsInt,(int)offsetof(TileMapDims_obj,hig),HX_CSTRING("hig")},
	{hx::fsInt,(int)offsetof(TileMapDims_obj,tWX),HX_CSTRING("tWX")},
	{hx::fsInt,(int)offsetof(TileMapDims_obj,tHY),HX_CSTRING("tHY")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("wid"),
	HX_CSTRING("hig"),
	HX_CSTRING("tWX"),
	HX_CSTRING("tHY"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileMapDims_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileMapDims_obj::__mClass,"__mClass");
};

#endif

Class TileMapDims_obj::__mClass;

void TileMapDims_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapDims.TileMapDims"), hx::TCanCast< TileMapDims_obj> ,sStaticFields,sMemberFields,
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

void TileMapDims_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace decoupled
} // end namespace tileBased
} // end namespace helpers
} // end namespace mapDims
