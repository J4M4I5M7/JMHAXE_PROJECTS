#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_TypedFunctionBase
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/TypedFunctionBase.h>
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
namespace genericBases{

Void FN_i_i_int_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.genericBases.FN_i_i_int","new",0x42e1cde1,"jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.genericBases.FN_i_i_int.new","jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/genericBases/FN_i_i_int.hx",17,0xe0925c6f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	super::__construct();
}
;
	return null();
}

//FN_i_i_int_obj::~FN_i_i_int_obj() { }

Dynamic FN_i_i_int_obj::__CreateEmpty() { return  new FN_i_i_int_obj; }
hx::ObjectPtr< FN_i_i_int_obj > FN_i_i_int_obj::__new()
{  hx::ObjectPtr< FN_i_i_int_obj > result = new FN_i_i_int_obj();
	result->__construct();
	return result;}

Dynamic FN_i_i_int_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FN_i_i_int_obj > result = new FN_i_i_int_obj();
	result->__construct();
	return result;}


FN_i_i_int_obj::FN_i_i_int_obj()
{
}

void FN_i_i_int_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FN_i_i_int);
	HX_MARK_MEMBER_NAME(f,"f");
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::TypedFunctionBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FN_i_i_int_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(f,"f");
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::TypedFunctionBase_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FN_i_i_int_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { return f; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FN_i_i_int_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FN_i_i_int_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FN_i_i_int_obj,f),HX_CSTRING("f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("f"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FN_i_i_int_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FN_i_i_int_obj::__mClass,"__mClass");
};

#endif

Class FN_i_i_int_obj::__mClass;

void FN_i_i_int_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.helpers.data.funcs.typedFN.genericBases.FN_i_i_int"), hx::TCanCast< FN_i_i_int_obj> ,sStaticFields,sMemberFields,
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

void FN_i_i_int_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace helpers
} // end namespace data
} // end namespace funcs
} // end namespace typedFN
} // end namespace genericBases