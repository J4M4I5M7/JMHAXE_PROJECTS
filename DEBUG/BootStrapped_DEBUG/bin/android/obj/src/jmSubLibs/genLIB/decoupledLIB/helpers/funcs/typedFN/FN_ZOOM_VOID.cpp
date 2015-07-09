#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_EU
#include <jmSubLibs/EU.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_TypedFunctionBase
#include <jmSubLibs/genLIB/decoupledLIB/helpers/funcs/TypedFunctionBase.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_typedFN_FN_ZOOM_VOID
#include <jmSubLibs/genLIB/decoupledLIB/helpers/funcs/typedFN/FN_ZOOM_VOID.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_typedFN_genericBases_FN_f_void
#include <jmSubLibs/genLIB/decoupledLIB/helpers/funcs/typedFN/genericBases/FN_f_void.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace helpers{
namespace funcs{
namespace typedFN{

Void FN_ZOOM_VOID_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_ZOOM_VOID","new",0x4bf01555,"jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_ZOOM_VOID.new","jmSubLibs/genLIB/decoupledLIB/helpers/funcs/typedFN/FN_ZOOM_VOID.hx",8,0x828928d7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	super::__construct();
}
;
	return null();
}

//FN_ZOOM_VOID_obj::~FN_ZOOM_VOID_obj() { }

Dynamic FN_ZOOM_VOID_obj::__CreateEmpty() { return  new FN_ZOOM_VOID_obj; }
hx::ObjectPtr< FN_ZOOM_VOID_obj > FN_ZOOM_VOID_obj::__new()
{  hx::ObjectPtr< FN_ZOOM_VOID_obj > result = new FN_ZOOM_VOID_obj();
	result->__construct();
	return result;}

Dynamic FN_ZOOM_VOID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FN_ZOOM_VOID_obj > result = new FN_ZOOM_VOID_obj();
	result->__construct();
	return result;}

::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_ZOOM_VOID FN_ZOOM_VOID_obj::make( Dynamic inFunc,::String inName){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_ZOOM_VOID","make",0x25764b59,"jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_ZOOM_VOID.make","jmSubLibs/genLIB/decoupledLIB/helpers/funcs/typedFN/FN_ZOOM_VOID.hx",14,0x828928d7)
	HX_STACK_ARG(inFunc,"inFunc")
	HX_STACK_ARG(inName,"inName")
	HX_STACK_LINE(16)
	::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_ZOOM_VOID op = ::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_ZOOM_VOID_obj::__new();		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(19)
	::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_ZOOM_VOID_obj::init(inFunc,inName,op);
	HX_STACK_LINE(22)
	return op;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FN_ZOOM_VOID_obj,make,return )

::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_ZOOM_VOID FN_ZOOM_VOID_obj::init( Dynamic inFunc,::String inName,::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_ZOOM_VOID op){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_ZOOM_VOID","init",0x22db4c7b,"jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_ZOOM_VOID.init","jmSubLibs/genLIB/decoupledLIB/helpers/funcs/typedFN/FN_ZOOM_VOID.hx",28,0x828928d7)
	HX_STACK_ARG(inFunc,"inFunc")
	HX_STACK_ARG(inName,"inName")
	HX_STACK_ARG(op,"op")
	HX_STACK_LINE(29)
	if (((bool((null() == inName)) || bool((HX_CSTRING("") == inName))))){
		HX_STACK_LINE(30)
		::jmSubLibs::EU_obj::msg(HX_CSTRING("FN_ZOOM_VOID.init::bad inName"));
	}
	HX_STACK_LINE(32)
	if (((null() == inFunc))){
		HX_STACK_LINE(34)
		::jmSubLibs::EU_obj::msg(HX_CSTRING("FN_ZOOM_VOID.init::function supplied is null."));
	}
	HX_STACK_LINE(38)
	op->b = true;
	HX_STACK_LINE(39)
	op->n = inName;
	HX_STACK_LINE(40)
	op->f = inFunc;
	HX_STACK_LINE(41)
	return op;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FN_ZOOM_VOID_obj,init,return )


FN_ZOOM_VOID_obj::FN_ZOOM_VOID_obj()
{
}

Dynamic FN_ZOOM_VOID_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FN_ZOOM_VOID_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FN_ZOOM_VOID_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(FN_ZOOM_VOID_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FN_ZOOM_VOID_obj::__mClass,"__mClass");
};

#endif

Class FN_ZOOM_VOID_obj::__mClass;

void FN_ZOOM_VOID_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_ZOOM_VOID"), hx::TCanCast< FN_ZOOM_VOID_obj> ,sStaticFields,sMemberFields,
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

void FN_ZOOM_VOID_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace helpers
} // end namespace funcs
} // end namespace typedFN
