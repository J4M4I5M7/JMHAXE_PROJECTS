#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_TypedFunctionBase
#include <jmSubLibs/genLIB/decoupledLIB/helpers/funcs/TypedFunctionBase.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_typedFN_FN_TXTY_BOOL
#include <jmSubLibs/genLIB/decoupledLIB/helpers/funcs/typedFN/FN_TXTY_BOOL.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_typedFN_genericBases_FN_i_i_bool
#include <jmSubLibs/genLIB/decoupledLIB/helpers/funcs/typedFN/genericBases/FN_i_i_bool.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace helpers{
namespace funcs{
namespace typedFN{

Void FN_TXTY_BOOL_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_TXTY_BOOL","new",0x0a659975,"jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_TXTY_BOOL.new","jmSubLibs/genLIB/decoupledLIB/helpers/funcs/typedFN/FN_TXTY_BOOL.hx",13,0x5ea788b7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	super::__construct();
}
;
	return null();
}

//FN_TXTY_BOOL_obj::~FN_TXTY_BOOL_obj() { }

Dynamic FN_TXTY_BOOL_obj::__CreateEmpty() { return  new FN_TXTY_BOOL_obj; }
hx::ObjectPtr< FN_TXTY_BOOL_obj > FN_TXTY_BOOL_obj::__new()
{  hx::ObjectPtr< FN_TXTY_BOOL_obj > result = new FN_TXTY_BOOL_obj();
	result->__construct();
	return result;}

Dynamic FN_TXTY_BOOL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FN_TXTY_BOOL_obj > result = new FN_TXTY_BOOL_obj();
	result->__construct();
	return result;}


FN_TXTY_BOOL_obj::FN_TXTY_BOOL_obj()
{
}

Dynamic FN_TXTY_BOOL_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FN_TXTY_BOOL_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FN_TXTY_BOOL_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FN_TXTY_BOOL_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FN_TXTY_BOOL_obj::__mClass,"__mClass");
};

#endif

Class FN_TXTY_BOOL_obj::__mClass;

void FN_TXTY_BOOL_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_TXTY_BOOL"), hx::TCanCast< FN_TXTY_BOOL_obj> ,sStaticFields,sMemberFields,
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

void FN_TXTY_BOOL_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace helpers
} // end namespace funcs
} // end namespace typedFN
