#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_EU
#include <jmSubLibs/EU.h>
#endif
#ifndef INCLUDED_jmSubLibs_decoupledLIB_helpers_funcs_TypedFunctionBase
#include <jmSubLibs/decoupledLIB/helpers/funcs/TypedFunctionBase.h>
#endif
#ifndef INCLUDED_jmSubLibs_decoupledLIB_helpers_funcs_typedFN_FN_TXTY_VOID
#include <jmSubLibs/decoupledLIB/helpers/funcs/typedFN/FN_TXTY_VOID.h>
#endif
namespace jmSubLibs{
namespace decoupledLIB{
namespace helpers{
namespace funcs{
namespace typedFN{

Void FN_TXTY_VOID_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.decoupledLIB.helpers.funcs.typedFN.FN_TXTY_VOID","new",0x59518fd2,"jmSubLibs.decoupledLIB.helpers.funcs.typedFN.FN_TXTY_VOID.new","jmSubLibs/decoupledLIB/helpers/funcs/typedFN/FN_TXTY_VOID.hx",15,0x86830b1b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	super::__construct();
}
;
	return null();
}

//FN_TXTY_VOID_obj::~FN_TXTY_VOID_obj() { }

Dynamic FN_TXTY_VOID_obj::__CreateEmpty() { return  new FN_TXTY_VOID_obj; }
hx::ObjectPtr< FN_TXTY_VOID_obj > FN_TXTY_VOID_obj::__new()
{  hx::ObjectPtr< FN_TXTY_VOID_obj > result = new FN_TXTY_VOID_obj();
	result->__construct();
	return result;}

Dynamic FN_TXTY_VOID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FN_TXTY_VOID_obj > result = new FN_TXTY_VOID_obj();
	result->__construct();
	return result;}

::jmSubLibs::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_VOID FN_TXTY_VOID_obj::make( Dynamic inFunc,::String inName){
	HX_STACK_FRAME("jmSubLibs.decoupledLIB.helpers.funcs.typedFN.FN_TXTY_VOID","make",0xcd5ffe3c,"jmSubLibs.decoupledLIB.helpers.funcs.typedFN.FN_TXTY_VOID.make","jmSubLibs/decoupledLIB/helpers/funcs/typedFN/FN_TXTY_VOID.hx",25,0x86830b1b)
	HX_STACK_ARG(inFunc,"inFunc")
	HX_STACK_ARG(inName,"inName")
	HX_STACK_LINE(26)
	if (((bool((null() == inName)) || bool((HX_CSTRING("") == inName))))){
		HX_STACK_LINE(27)
		::jmSubLibs::EU_obj::msg(HX_CSTRING("FN_TXTY_VOID.make::bad inName"));
	}
	HX_STACK_LINE(29)
	if (((null() == inFunc))){
		HX_STACK_LINE(31)
		::jmSubLibs::EU_obj::msg(HX_CSTRING("FN_TXTY_VOID.make::function supplied is null."));
	}
	HX_STACK_LINE(35)
	::jmSubLibs::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_VOID op = ::jmSubLibs::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_VOID_obj::__new();		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(38)
	op->b = true;
	HX_STACK_LINE(39)
	op->n = inName;
	HX_STACK_LINE(40)
	op->f = inFunc;
	HX_STACK_LINE(41)
	return op;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FN_TXTY_VOID_obj,make,return )


FN_TXTY_VOID_obj::FN_TXTY_VOID_obj()
{
}

void FN_TXTY_VOID_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FN_TXTY_VOID);
	HX_MARK_MEMBER_NAME(f,"f");
	::jmSubLibs::decoupledLIB::helpers::funcs::TypedFunctionBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FN_TXTY_VOID_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(f,"f");
	::jmSubLibs::decoupledLIB::helpers::funcs::TypedFunctionBase_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FN_TXTY_VOID_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { return f; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FN_TXTY_VOID_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FN_TXTY_VOID_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FN_TXTY_VOID_obj,f),HX_CSTRING("f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("f"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FN_TXTY_VOID_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FN_TXTY_VOID_obj::__mClass,"__mClass");
};

#endif

Class FN_TXTY_VOID_obj::__mClass;

void FN_TXTY_VOID_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.decoupledLIB.helpers.funcs.typedFN.FN_TXTY_VOID"), hx::TCanCast< FN_TXTY_VOID_obj> ,sStaticFields,sMemberFields,
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

void FN_TXTY_VOID_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace decoupledLIB
} // end namespace helpers
} // end namespace funcs
} // end namespace typedFN
