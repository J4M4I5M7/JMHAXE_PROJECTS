#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_TypedFunctionBase
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/TypedFunctionBase.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_PXPY_VOID
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_PXPY_VOID.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_TXTY_VOID
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_TXTY_VOID.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_X0Y0X1Y1_VOID
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_X0Y0X1Y1_VOID.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_ZOOM_VOID
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_ZOOM_VOID.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_genericBases_FN_f_void
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/genericBases/FN_f_void.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_genericBases_FN_i_i_i_i_void
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/genericBases/FN_i_i_i_i_void.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_genericBases_FN_i_i_void
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/genericBases/FN_i_i_void.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapActions_components_TMAC_BoundActionsFUNCS
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/components/TMAC_BoundActionsFUNCS.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace decoupled{
namespace tileBased{
namespace helpers{
namespace mapActions{
namespace components{

Void TMAC_BoundActionsFUNCS_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.components.TMAC_BoundActionsFUNCS","new",0x6decd8e6,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.components.TMAC_BoundActionsFUNCS.new","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/components/TMAC_BoundActionsFUNCS.hx",45,0x1deed225)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(48)
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_VOID _g = ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_VOID_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(48)
	this->clickTileFN = _g;
	HX_STACK_LINE(50)
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_ZOOM_VOID _g1 = ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_ZOOM_VOID_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(50)
	this->gestureFN_ZOOM = _g1;
	HX_STACK_LINE(53)
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_PXPY_VOID _g2 = ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_PXPY_VOID_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(53)
	this->dragFN_START = _g2;
	HX_STACK_LINE(54)
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_PXPY_VOID _g3 = ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_PXPY_VOID_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(54)
	this->dragFN_CONTINUE = _g3;
	HX_STACK_LINE(55)
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_PXPY_VOID _g4 = ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_PXPY_VOID_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(55)
	this->dragFN_END = _g4;
	HX_STACK_LINE(57)
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID _g5 = ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID_obj::__new();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(57)
	this->pinchFN_START = _g5;
	HX_STACK_LINE(58)
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID _g6 = ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID_obj::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(58)
	this->pinchFN_CONTINUE = _g6;
	HX_STACK_LINE(59)
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID _g7 = ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(59)
	this->pinchFN_END = _g7;
}
;
	return null();
}

//TMAC_BoundActionsFUNCS_obj::~TMAC_BoundActionsFUNCS_obj() { }

Dynamic TMAC_BoundActionsFUNCS_obj::__CreateEmpty() { return  new TMAC_BoundActionsFUNCS_obj; }
hx::ObjectPtr< TMAC_BoundActionsFUNCS_obj > TMAC_BoundActionsFUNCS_obj::__new()
{  hx::ObjectPtr< TMAC_BoundActionsFUNCS_obj > result = new TMAC_BoundActionsFUNCS_obj();
	result->__construct();
	return result;}

Dynamic TMAC_BoundActionsFUNCS_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TMAC_BoundActionsFUNCS_obj > result = new TMAC_BoundActionsFUNCS_obj();
	result->__construct();
	return result;}


TMAC_BoundActionsFUNCS_obj::TMAC_BoundActionsFUNCS_obj()
{
}

void TMAC_BoundActionsFUNCS_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TMAC_BoundActionsFUNCS);
	HX_MARK_MEMBER_NAME(clickTileFN,"clickTileFN");
	HX_MARK_MEMBER_NAME(dragFN_START,"dragFN_START");
	HX_MARK_MEMBER_NAME(dragFN_CONTINUE,"dragFN_CONTINUE");
	HX_MARK_MEMBER_NAME(dragFN_END,"dragFN_END");
	HX_MARK_MEMBER_NAME(pinchFN_START,"pinchFN_START");
	HX_MARK_MEMBER_NAME(pinchFN_CONTINUE,"pinchFN_CONTINUE");
	HX_MARK_MEMBER_NAME(pinchFN_END,"pinchFN_END");
	HX_MARK_MEMBER_NAME(gestureFN_ZOOM,"gestureFN_ZOOM");
	HX_MARK_END_CLASS();
}

void TMAC_BoundActionsFUNCS_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clickTileFN,"clickTileFN");
	HX_VISIT_MEMBER_NAME(dragFN_START,"dragFN_START");
	HX_VISIT_MEMBER_NAME(dragFN_CONTINUE,"dragFN_CONTINUE");
	HX_VISIT_MEMBER_NAME(dragFN_END,"dragFN_END");
	HX_VISIT_MEMBER_NAME(pinchFN_START,"pinchFN_START");
	HX_VISIT_MEMBER_NAME(pinchFN_CONTINUE,"pinchFN_CONTINUE");
	HX_VISIT_MEMBER_NAME(pinchFN_END,"pinchFN_END");
	HX_VISIT_MEMBER_NAME(gestureFN_ZOOM,"gestureFN_ZOOM");
}

Dynamic TMAC_BoundActionsFUNCS_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"dragFN_END") ) { return dragFN_END; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clickTileFN") ) { return clickTileFN; }
		if (HX_FIELD_EQ(inName,"pinchFN_END") ) { return pinchFN_END; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dragFN_START") ) { return dragFN_START; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pinchFN_START") ) { return pinchFN_START; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gestureFN_ZOOM") ) { return gestureFN_ZOOM; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dragFN_CONTINUE") ) { return dragFN_CONTINUE; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"pinchFN_CONTINUE") ) { return pinchFN_CONTINUE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TMAC_BoundActionsFUNCS_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"dragFN_END") ) { dragFN_END=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_PXPY_VOID >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clickTileFN") ) { clickTileFN=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_VOID >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pinchFN_END") ) { pinchFN_END=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dragFN_START") ) { dragFN_START=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_PXPY_VOID >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pinchFN_START") ) { pinchFN_START=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gestureFN_ZOOM") ) { gestureFN_ZOOM=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_ZOOM_VOID >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dragFN_CONTINUE") ) { dragFN_CONTINUE=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_PXPY_VOID >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"pinchFN_CONTINUE") ) { pinchFN_CONTINUE=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TMAC_BoundActionsFUNCS_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("clickTileFN"));
	outFields->push(HX_CSTRING("dragFN_START"));
	outFields->push(HX_CSTRING("dragFN_CONTINUE"));
	outFields->push(HX_CSTRING("dragFN_END"));
	outFields->push(HX_CSTRING("pinchFN_START"));
	outFields->push(HX_CSTRING("pinchFN_CONTINUE"));
	outFields->push(HX_CSTRING("pinchFN_END"));
	outFields->push(HX_CSTRING("gestureFN_ZOOM"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_VOID*/ ,(int)offsetof(TMAC_BoundActionsFUNCS_obj,clickTileFN),HX_CSTRING("clickTileFN")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_PXPY_VOID*/ ,(int)offsetof(TMAC_BoundActionsFUNCS_obj,dragFN_START),HX_CSTRING("dragFN_START")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_PXPY_VOID*/ ,(int)offsetof(TMAC_BoundActionsFUNCS_obj,dragFN_CONTINUE),HX_CSTRING("dragFN_CONTINUE")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_PXPY_VOID*/ ,(int)offsetof(TMAC_BoundActionsFUNCS_obj,dragFN_END),HX_CSTRING("dragFN_END")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID*/ ,(int)offsetof(TMAC_BoundActionsFUNCS_obj,pinchFN_START),HX_CSTRING("pinchFN_START")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID*/ ,(int)offsetof(TMAC_BoundActionsFUNCS_obj,pinchFN_CONTINUE),HX_CSTRING("pinchFN_CONTINUE")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID*/ ,(int)offsetof(TMAC_BoundActionsFUNCS_obj,pinchFN_END),HX_CSTRING("pinchFN_END")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_ZOOM_VOID*/ ,(int)offsetof(TMAC_BoundActionsFUNCS_obj,gestureFN_ZOOM),HX_CSTRING("gestureFN_ZOOM")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("clickTileFN"),
	HX_CSTRING("dragFN_START"),
	HX_CSTRING("dragFN_CONTINUE"),
	HX_CSTRING("dragFN_END"),
	HX_CSTRING("pinchFN_START"),
	HX_CSTRING("pinchFN_CONTINUE"),
	HX_CSTRING("pinchFN_END"),
	HX_CSTRING("gestureFN_ZOOM"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TMAC_BoundActionsFUNCS_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TMAC_BoundActionsFUNCS_obj::__mClass,"__mClass");
};

#endif

Class TMAC_BoundActionsFUNCS_obj::__mClass;

void TMAC_BoundActionsFUNCS_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.components.TMAC_BoundActionsFUNCS"), hx::TCanCast< TMAC_BoundActionsFUNCS_obj> ,sStaticFields,sMemberFields,
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

void TMAC_BoundActionsFUNCS_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace decoupled
} // end namespace tileBased
} // end namespace helpers
} // end namespace mapActions
} // end namespace components
