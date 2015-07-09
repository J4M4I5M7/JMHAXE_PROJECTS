#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_EU
#include <jmSubLibs/EU.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_TypedFunctionBase
#include <jmSubLibs/genLIB/decoupledLIB/helpers/funcs/TypedFunctionBase.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_typedFN_FN_VOID_VOID
#include <jmSubLibs/genLIB/decoupledLIB/helpers/funcs/typedFN/FN_VOID_VOID.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace helpers{
namespace funcs{
namespace typedFN{

Void FN_VOID_VOID_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_VOID_VOID","new",0x6d1964f4,"jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_VOID_VOID.new","jmSubLibs/genLIB/decoupledLIB/helpers/funcs/typedFN/FN_VOID_VOID.hx",13,0x8f4ff218)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	super::__construct();
}
;
	return null();
}

//FN_VOID_VOID_obj::~FN_VOID_VOID_obj() { }

Dynamic FN_VOID_VOID_obj::__CreateEmpty() { return  new FN_VOID_VOID_obj; }
hx::ObjectPtr< FN_VOID_VOID_obj > FN_VOID_VOID_obj::__new()
{  hx::ObjectPtr< FN_VOID_VOID_obj > result = new FN_VOID_VOID_obj();
	result->__construct();
	return result;}

Dynamic FN_VOID_VOID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FN_VOID_VOID_obj > result = new FN_VOID_VOID_obj();
	result->__construct();
	return result;}

::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_VOID_VOID FN_VOID_VOID_obj::make( Dynamic inFunc,::String inName){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_VOID_VOID","make",0x0872a6da,"jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_VOID_VOID.make","jmSubLibs/genLIB/decoupledLIB/helpers/funcs/typedFN/FN_VOID_VOID.hx",22,0x8f4ff218)
	HX_STACK_ARG(inFunc,"inFunc")
	HX_STACK_ARG(inName,"inName")
	HX_STACK_LINE(24)
	::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_VOID_VOID op = ::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_VOID_VOID_obj::__new();		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(25)
	::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_VOID_VOID_obj::init(inFunc,inName,op);
	HX_STACK_LINE(26)
	return op;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FN_VOID_VOID_obj,make,return )

::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_VOID_VOID FN_VOID_VOID_obj::init( Dynamic inFunc,::String inName,::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_VOID_VOID op){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_VOID_VOID","init",0x05d7a7fc,"jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_VOID_VOID.init","jmSubLibs/genLIB/decoupledLIB/helpers/funcs/typedFN/FN_VOID_VOID.hx",34,0x8f4ff218)
	HX_STACK_ARG(inFunc,"inFunc")
	HX_STACK_ARG(inName,"inName")
	HX_STACK_ARG(op,"op")
	HX_STACK_LINE(35)
	if (((bool((null() == inName)) || bool((HX_CSTRING("") == inName))))){
		HX_STACK_LINE(36)
		::jmSubLibs::EU_obj::msg(HX_CSTRING("FN_VOID_VOID.make::bad inName"));
	}
	HX_STACK_LINE(38)
	if (((null() == inFunc))){
		HX_STACK_LINE(40)
		::jmSubLibs::EU_obj::msg(HX_CSTRING("FN_VOID_VOID.make::function supplied is null."));
	}
	HX_STACK_LINE(46)
	op->b = true;
	HX_STACK_LINE(47)
	op->n = inName;
	HX_STACK_LINE(48)
	op->f = inFunc;
	HX_STACK_LINE(49)
	return op;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FN_VOID_VOID_obj,init,return )


FN_VOID_VOID_obj::FN_VOID_VOID_obj()
{
}

void FN_VOID_VOID_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FN_VOID_VOID);
	HX_MARK_MEMBER_NAME(f,"f");
	::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::TypedFunctionBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FN_VOID_VOID_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(f,"f");
	::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::TypedFunctionBase_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FN_VOID_VOID_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { return f; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FN_VOID_VOID_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FN_VOID_VOID_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("init"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FN_VOID_VOID_obj,f),HX_CSTRING("f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("f"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FN_VOID_VOID_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FN_VOID_VOID_obj::__mClass,"__mClass");
};

#endif

Class FN_VOID_VOID_obj::__mClass;

void FN_VOID_VOID_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.FN_VOID_VOID"), hx::TCanCast< FN_VOID_VOID_obj> ,sStaticFields,sMemberFields,
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

void FN_VOID_VOID_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace helpers
} // end namespace funcs
} // end namespace typedFN
