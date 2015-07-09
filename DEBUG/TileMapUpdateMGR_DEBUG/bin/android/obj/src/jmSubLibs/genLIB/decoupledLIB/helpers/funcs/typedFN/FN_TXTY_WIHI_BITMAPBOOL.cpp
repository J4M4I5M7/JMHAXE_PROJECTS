#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_EU
#include <jmSubLibs/EU.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_TypedFunctionBase
#include <jmSubLibs/genLIB/decoupledLIB/helpers/funcs/TypedFunctionBase.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_typedFN_FN_TXTY_WIHI_BITMAPBOOL
#include <jmSubLibs/genLIB/decoupledLIB/helpers/funcs/typedFN/FN_TXTY_WIHI_BITMAPBOOL.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_typedFN_genericBases_FN_i_i_i_i_bitmapBool
#include <jmSubLibs/genLIB/decoupledLIB/helpers/funcs/typedFN/genericBases/FN_i_i_i_i_bitmapBool.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_structs_glue_BitMapBool
#include <jmSubLibs/genLIB/decoupledLIB/helpers/structs/glue/BitMapBool.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace helpers{
namespace funcs{
namespace typedFN{

Void FN_TXTY_WIHI_BITMAPBOOL_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_TXTY_WIHI_BITMAPBOOL","new",0xf9234cbe,"jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_TXTY_WIHI_BITMAPBOOL.new","jmSubLibs/genLIB/decoupledLIB/helpers/funcs/typedFN/FN_TXTY_WIHI_BITMAPBOOL.hx",18,0x38abb4d6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	super::__construct();
}
;
	return null();
}

//FN_TXTY_WIHI_BITMAPBOOL_obj::~FN_TXTY_WIHI_BITMAPBOOL_obj() { }

Dynamic FN_TXTY_WIHI_BITMAPBOOL_obj::__CreateEmpty() { return  new FN_TXTY_WIHI_BITMAPBOOL_obj; }
hx::ObjectPtr< FN_TXTY_WIHI_BITMAPBOOL_obj > FN_TXTY_WIHI_BITMAPBOOL_obj::__new()
{  hx::ObjectPtr< FN_TXTY_WIHI_BITMAPBOOL_obj > result = new FN_TXTY_WIHI_BITMAPBOOL_obj();
	result->__construct();
	return result;}

Dynamic FN_TXTY_WIHI_BITMAPBOOL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FN_TXTY_WIHI_BITMAPBOOL_obj > result = new FN_TXTY_WIHI_BITMAPBOOL_obj();
	result->__construct();
	return result;}

::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_WIHI_BITMAPBOOL FN_TXTY_WIHI_BITMAPBOOL_obj::make( Dynamic inFunc,::String inName){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_TXTY_WIHI_BITMAPBOOL","make",0x05138fd0,"jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_TXTY_WIHI_BITMAPBOOL.make","jmSubLibs/genLIB/decoupledLIB/helpers/funcs/typedFN/FN_TXTY_WIHI_BITMAPBOOL.hx",24,0x38abb4d6)
	HX_STACK_ARG(inFunc,"inFunc")
	HX_STACK_ARG(inName,"inName")
	HX_STACK_LINE(27)
	::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_WIHI_BITMAPBOOL op = ::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_WIHI_BITMAPBOOL_obj::__new();		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(30)
	::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_WIHI_BITMAPBOOL_obj::init(inFunc,inName,op);
	HX_STACK_LINE(31)
	return op;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FN_TXTY_WIHI_BITMAPBOOL_obj,make,return )

::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_WIHI_BITMAPBOOL FN_TXTY_WIHI_BITMAPBOOL_obj::init( Dynamic inFunc,::String inName,::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_WIHI_BITMAPBOOL op){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_TXTY_WIHI_BITMAPBOOL","init",0x027890f2,"jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_TXTY_WIHI_BITMAPBOOL.init","jmSubLibs/genLIB/decoupledLIB/helpers/funcs/typedFN/FN_TXTY_WIHI_BITMAPBOOL.hx",39,0x38abb4d6)
	HX_STACK_ARG(inFunc,"inFunc")
	HX_STACK_ARG(inName,"inName")
	HX_STACK_ARG(op,"op")
	HX_STACK_LINE(40)
	if (((bool((null() == inName)) || bool((HX_CSTRING("") == inName))))){
		HX_STACK_LINE(41)
		::jmSubLibs::EU_obj::msg(HX_CSTRING("ERROR_CODE#0010-BBNAME"));
	}
	HX_STACK_LINE(43)
	if (((null() == inFunc))){
		HX_STACK_LINE(45)
		::jmSubLibs::EU_obj::msg(HX_CSTRING("ERROR_CODE#0011-BBFUNC"));
	}
	HX_STACK_LINE(49)
	op->b = true;
	HX_STACK_LINE(50)
	op->n = inName;
	HX_STACK_LINE(51)
	op->f = inFunc;
	HX_STACK_LINE(52)
	return op;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FN_TXTY_WIHI_BITMAPBOOL_obj,init,return )


FN_TXTY_WIHI_BITMAPBOOL_obj::FN_TXTY_WIHI_BITMAPBOOL_obj()
{
}

Dynamic FN_TXTY_WIHI_BITMAPBOOL_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FN_TXTY_WIHI_BITMAPBOOL_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FN_TXTY_WIHI_BITMAPBOOL_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(FN_TXTY_WIHI_BITMAPBOOL_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FN_TXTY_WIHI_BITMAPBOOL_obj::__mClass,"__mClass");
};

#endif

Class FN_TXTY_WIHI_BITMAPBOOL_obj::__mClass;

void FN_TXTY_WIHI_BITMAPBOOL_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_TXTY_WIHI_BITMAPBOOL"), hx::TCanCast< FN_TXTY_WIHI_BITMAPBOOL_obj> ,sStaticFields,sMemberFields,
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

void FN_TXTY_WIHI_BITMAPBOOL_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace helpers
} // end namespace funcs
} // end namespace typedFN
