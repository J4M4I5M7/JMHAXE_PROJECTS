#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_EU
#include <jmSubLibs/EU.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_TypedFunctionBase
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/TypedFunctionBase.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_X0Y0X1Y1_VOID
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_X0Y0X1Y1_VOID.h>
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

Void FN_X0Y0X1Y1_VOID_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.FN_X0Y0X1Y1_VOID","new",0x992a294e,"jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.FN_X0Y0X1Y1_VOID.new","jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_X0Y0X1Y1_VOID.hx",17,0xd1d27761)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	super::__construct();
}
;
	return null();
}

//FN_X0Y0X1Y1_VOID_obj::~FN_X0Y0X1Y1_VOID_obj() { }

Dynamic FN_X0Y0X1Y1_VOID_obj::__CreateEmpty() { return  new FN_X0Y0X1Y1_VOID_obj; }
hx::ObjectPtr< FN_X0Y0X1Y1_VOID_obj > FN_X0Y0X1Y1_VOID_obj::__new()
{  hx::ObjectPtr< FN_X0Y0X1Y1_VOID_obj > result = new FN_X0Y0X1Y1_VOID_obj();
	result->__construct();
	return result;}

Dynamic FN_X0Y0X1Y1_VOID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FN_X0Y0X1Y1_VOID_obj > result = new FN_X0Y0X1Y1_VOID_obj();
	result->__construct();
	return result;}

::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID FN_X0Y0X1Y1_VOID_obj::make( Dynamic inFunc,::String inName){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.FN_X0Y0X1Y1_VOID","make",0x6b0db140,"jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.FN_X0Y0X1Y1_VOID.make","jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_X0Y0X1Y1_VOID.hx",24,0xd1d27761)
	HX_STACK_ARG(inFunc,"inFunc")
	HX_STACK_ARG(inName,"inName")
	HX_STACK_LINE(27)
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID op = ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID_obj::__new();		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(30)
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID_obj::init(inFunc,inName,op);
	HX_STACK_LINE(33)
	return op;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FN_X0Y0X1Y1_VOID_obj,make,return )

::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID FN_X0Y0X1Y1_VOID_obj::init( Dynamic inFunc,::String inName,::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID op){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.FN_X0Y0X1Y1_VOID","init",0x6872b262,"jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.FN_X0Y0X1Y1_VOID.init","jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_X0Y0X1Y1_VOID.hx",41,0xd1d27761)
	HX_STACK_ARG(inFunc,"inFunc")
	HX_STACK_ARG(inName,"inName")
	HX_STACK_ARG(op,"op")
	HX_STACK_LINE(43)
	if (((bool((null() == inName)) || bool((HX_CSTRING("") == inName))))){
		HX_STACK_LINE(44)
		::jmSubLibs::EU_obj::msg(HX_CSTRING("FN_X0Y0X1Y1_VOID.init::bad inName"));
	}
	HX_STACK_LINE(46)
	if (((null() == inFunc))){
		HX_STACK_LINE(48)
		::jmSubLibs::EU_obj::msg(HX_CSTRING("FN_X0Y0X1Y1_VOID.init::function supplied is null."));
	}
	HX_STACK_LINE(53)
	op->b = true;
	HX_STACK_LINE(54)
	op->n = inName;
	HX_STACK_LINE(55)
	op->f = inFunc;
	HX_STACK_LINE(56)
	return op;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FN_X0Y0X1Y1_VOID_obj,init,return )


FN_X0Y0X1Y1_VOID_obj::FN_X0Y0X1Y1_VOID_obj()
{
}

Dynamic FN_X0Y0X1Y1_VOID_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FN_X0Y0X1Y1_VOID_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FN_X0Y0X1Y1_VOID_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("init"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FN_X0Y0X1Y1_VOID_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FN_X0Y0X1Y1_VOID_obj::__mClass,"__mClass");
};

#endif

Class FN_X0Y0X1Y1_VOID_obj::__mClass;

void FN_X0Y0X1Y1_VOID_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.FN_X0Y0X1Y1_VOID"), hx::TCanCast< FN_X0Y0X1Y1_VOID_obj> ,sStaticFields,sMemberFields,
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

void FN_X0Y0X1Y1_VOID_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace helpers
} // end namespace data
} // end namespace funcs
} // end namespace typedFN
