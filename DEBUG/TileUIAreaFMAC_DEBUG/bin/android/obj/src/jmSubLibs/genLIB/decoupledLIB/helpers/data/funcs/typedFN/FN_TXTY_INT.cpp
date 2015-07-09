#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_EU
#include <jmSubLibs/EU.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_TypedFunctionBase
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/TypedFunctionBase.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_TXTY_INT
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_TXTY_INT.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_genericBases_FN_i_i_int
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/genericBases/FN_i_i_int.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace helpers{
namespace data{
namespace funcs{
namespace typedFN{

Void FN_TXTY_INT_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.FN_TXTY_INT","new",0x447d91e2,"jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.FN_TXTY_INT.new","jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_TXTY_INT.hx",15,0xb3a032af)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	super::__construct();
}
;
	return null();
}

//FN_TXTY_INT_obj::~FN_TXTY_INT_obj() { }

Dynamic FN_TXTY_INT_obj::__CreateEmpty() { return  new FN_TXTY_INT_obj; }
hx::ObjectPtr< FN_TXTY_INT_obj > FN_TXTY_INT_obj::__new()
{  hx::ObjectPtr< FN_TXTY_INT_obj > result = new FN_TXTY_INT_obj();
	result->__construct();
	return result;}

Dynamic FN_TXTY_INT_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FN_TXTY_INT_obj > result = new FN_TXTY_INT_obj();
	result->__construct();
	return result;}

::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_INT FN_TXTY_INT_obj::make( Dynamic inFunc,::String inName){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.FN_TXTY_INT","make",0xa8b5ca2c,"jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.FN_TXTY_INT.make","jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_TXTY_INT.hx",21,0xb3a032af)
	HX_STACK_ARG(inFunc,"inFunc")
	HX_STACK_ARG(inName,"inName")
	HX_STACK_LINE(23)
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_INT op = ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_INT_obj::__new();		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(26)
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_INT_obj::init(inFunc,inName,op);
	HX_STACK_LINE(29)
	return op;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FN_TXTY_INT_obj,make,return )

::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_INT FN_TXTY_INT_obj::init( Dynamic inFunc,::String inName,::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_INT op){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.FN_TXTY_INT","init",0xa61acb4e,"jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.FN_TXTY_INT.init","jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_TXTY_INT.hx",35,0xb3a032af)
	HX_STACK_ARG(inFunc,"inFunc")
	HX_STACK_ARG(inName,"inName")
	HX_STACK_ARG(op,"op")
	HX_STACK_LINE(36)
	if (((bool((null() == inName)) || bool((HX_CSTRING("") == inName))))){
		HX_STACK_LINE(37)
		::jmSubLibs::EU_obj::msg(HX_CSTRING("FN_TXTY_INT.init::bad inName"));
	}
	HX_STACK_LINE(39)
	if (((null() == inFunc))){
		HX_STACK_LINE(41)
		::jmSubLibs::EU_obj::msg(HX_CSTRING("FN_TXTY_INT.init::function supplied is null."));
	}
	HX_STACK_LINE(45)
	op->b = true;
	HX_STACK_LINE(46)
	op->n = inName;
	HX_STACK_LINE(47)
	op->f = inFunc;
	HX_STACK_LINE(48)
	return op;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FN_TXTY_INT_obj,init,return )


FN_TXTY_INT_obj::FN_TXTY_INT_obj()
{
}

Dynamic FN_TXTY_INT_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FN_TXTY_INT_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FN_TXTY_INT_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(FN_TXTY_INT_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FN_TXTY_INT_obj::__mClass,"__mClass");
};

#endif

Class FN_TXTY_INT_obj::__mClass;

void FN_TXTY_INT_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.FN_TXTY_INT"), hx::TCanCast< FN_TXTY_INT_obj> ,sStaticFields,sMemberFields,
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

void FN_TXTY_INT_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace helpers
} // end namespace data
} // end namespace funcs
} // end namespace typedFN
