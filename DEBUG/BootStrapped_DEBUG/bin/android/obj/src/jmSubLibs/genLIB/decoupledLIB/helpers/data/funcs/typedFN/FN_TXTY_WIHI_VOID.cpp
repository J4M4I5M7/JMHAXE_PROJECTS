#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_EU
#include <jmSubLibs/EU.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_TypedFunctionBase
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/TypedFunctionBase.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_TXTY_WIHI_VOID
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_TXTY_WIHI_VOID.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_genericBases_FN_i_i_i_i_void
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/genericBases/FN_i_i_i_i_void.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace helpers{
namespace data{
namespace funcs{
namespace typedFN{

Void FN_TXTY_WIHI_VOID_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.FN_TXTY_WIHI_VOID","new",0xa43e8313,"jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.FN_TXTY_WIHI_VOID.new","jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_TXTY_WIHI_VOID.hx",14,0x5cfe115e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	super::__construct();
}
;
	return null();
}

//FN_TXTY_WIHI_VOID_obj::~FN_TXTY_WIHI_VOID_obj() { }

Dynamic FN_TXTY_WIHI_VOID_obj::__CreateEmpty() { return  new FN_TXTY_WIHI_VOID_obj; }
hx::ObjectPtr< FN_TXTY_WIHI_VOID_obj > FN_TXTY_WIHI_VOID_obj::__new()
{  hx::ObjectPtr< FN_TXTY_WIHI_VOID_obj > result = new FN_TXTY_WIHI_VOID_obj();
	result->__construct();
	return result;}

Dynamic FN_TXTY_WIHI_VOID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FN_TXTY_WIHI_VOID_obj > result = new FN_TXTY_WIHI_VOID_obj();
	result->__construct();
	return result;}

::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_WIHI_VOID FN_TXTY_WIHI_VOID_obj::make( Dynamic inFunc,::String inName){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.FN_TXTY_WIHI_VOID","make",0x11c7e3db,"jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.FN_TXTY_WIHI_VOID.make","jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_TXTY_WIHI_VOID.hx",22,0x5cfe115e)
	HX_STACK_ARG(inFunc,"inFunc")
	HX_STACK_ARG(inName,"inName")
	HX_STACK_LINE(23)
	if (((bool((null() == inName)) || bool((HX_CSTRING("") == inName))))){
		HX_STACK_LINE(24)
		::jmSubLibs::EU_obj::msg(HX_CSTRING("FN_TXTY_WIHI_VOID.make::bad inName"));
	}
	HX_STACK_LINE(26)
	if (((null() == inFunc))){
		HX_STACK_LINE(28)
		::jmSubLibs::EU_obj::msg(HX_CSTRING("FN_TXTY_WIHI_VOID.make::function supplied is null."));
	}
	HX_STACK_LINE(32)
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_WIHI_VOID op = ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_WIHI_VOID_obj::__new();		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(35)
	op->b = true;
	HX_STACK_LINE(36)
	op->n = inName;
	HX_STACK_LINE(37)
	op->f = inFunc;
	HX_STACK_LINE(38)
	return op;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FN_TXTY_WIHI_VOID_obj,make,return )


FN_TXTY_WIHI_VOID_obj::FN_TXTY_WIHI_VOID_obj()
{
}

Dynamic FN_TXTY_WIHI_VOID_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FN_TXTY_WIHI_VOID_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FN_TXTY_WIHI_VOID_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FN_TXTY_WIHI_VOID_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FN_TXTY_WIHI_VOID_obj::__mClass,"__mClass");
};

#endif

Class FN_TXTY_WIHI_VOID_obj::__mClass;

void FN_TXTY_WIHI_VOID_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.FN_TXTY_WIHI_VOID"), hx::TCanCast< FN_TXTY_WIHI_VOID_obj> ,sStaticFields,sMemberFields,
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

void FN_TXTY_WIHI_VOID_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace helpers
} // end namespace data
} // end namespace funcs
} // end namespace typedFN
