#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_TypedFunctionBase
#include <jmSubLibs/genLIB/decoupledLIB/helpers/funcs/TypedFunctionBase.h>
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
namespace genericBases{

Void FN_i_i_bool_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.genericBases.FN_i_i_bool","new",0x81ebabb6,"jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.genericBases.FN_i_i_bool.new","jmSubLibs/genLIB/decoupledLIB/helpers/funcs/typedFN/genericBases/FN_i_i_bool.hx",17,0x918d1357)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	super::__construct();
}
;
	return null();
}

//FN_i_i_bool_obj::~FN_i_i_bool_obj() { }

Dynamic FN_i_i_bool_obj::__CreateEmpty() { return  new FN_i_i_bool_obj; }
hx::ObjectPtr< FN_i_i_bool_obj > FN_i_i_bool_obj::__new()
{  hx::ObjectPtr< FN_i_i_bool_obj > result = new FN_i_i_bool_obj();
	result->__construct();
	return result;}

Dynamic FN_i_i_bool_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FN_i_i_bool_obj > result = new FN_i_i_bool_obj();
	result->__construct();
	return result;}


FN_i_i_bool_obj::FN_i_i_bool_obj()
{
}

void FN_i_i_bool_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FN_i_i_bool);
	HX_MARK_MEMBER_NAME(f,"f");
	::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::TypedFunctionBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FN_i_i_bool_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(f,"f");
	::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::TypedFunctionBase_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FN_i_i_bool_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { return f; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FN_i_i_bool_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FN_i_i_bool_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FN_i_i_bool_obj,f),HX_CSTRING("f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("f"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FN_i_i_bool_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FN_i_i_bool_obj::__mClass,"__mClass");
};

#endif

Class FN_i_i_bool_obj::__mClass;

void FN_i_i_bool_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.helpers.funcs.typedFN.genericBases.FN_i_i_bool"), hx::TCanCast< FN_i_i_bool_obj> ,sStaticFields,sMemberFields,
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

void FN_i_i_bool_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace helpers
} // end namespace funcs
} // end namespace typedFN
} // end namespace genericBases
