#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_EU
#include <jmSubLibs/EU.h>
#endif
#ifndef INCLUDED_jmSubLibs_decoupledLIB_helpers_funcs_TypedFunctionBase
#include <jmSubLibs/decoupledLIB/helpers/funcs/TypedFunctionBase.h>
#endif
namespace jmSubLibs{
namespace decoupledLIB{
namespace helpers{
namespace funcs{

Void TypedFunctionBase_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.decoupledLIB.helpers.funcs.TypedFunctionBase","new",0x18337c74,"jmSubLibs.decoupledLIB.helpers.funcs.TypedFunctionBase.new","jmSubLibs/decoupledLIB/helpers/funcs/TypedFunctionBase.hx",23,0x4a575c9e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	this->b = false;
	HX_STACK_LINE(27)
	this->n = HX_CSTRING("");
}
;
	return null();
}

//TypedFunctionBase_obj::~TypedFunctionBase_obj() { }

Dynamic TypedFunctionBase_obj::__CreateEmpty() { return  new TypedFunctionBase_obj; }
hx::ObjectPtr< TypedFunctionBase_obj > TypedFunctionBase_obj::__new()
{  hx::ObjectPtr< TypedFunctionBase_obj > result = new TypedFunctionBase_obj();
	result->__construct();
	return result;}

Dynamic TypedFunctionBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TypedFunctionBase_obj > result = new TypedFunctionBase_obj();
	result->__construct();
	return result;}

Void TypedFunctionBase_obj::checkString( ::String inStr){
{
		HX_STACK_FRAME("jmSubLibs.decoupledLIB.helpers.funcs.TypedFunctionBase","checkString",0x2f89dbcd,"jmSubLibs.decoupledLIB.helpers.funcs.TypedFunctionBase.checkString","jmSubLibs/decoupledLIB/helpers/funcs/TypedFunctionBase.hx",34,0x4a575c9e)
		HX_STACK_ARG(inStr,"inStr")
		HX_STACK_LINE(34)
		if (((bool((null() == inStr)) || bool((HX_CSTRING("") == inStr))))){
			HX_STACK_LINE(36)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("Invalid string: TypedFunctionBase.hx"));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypedFunctionBase_obj,checkString,(void))


TypedFunctionBase_obj::TypedFunctionBase_obj()
{
}

void TypedFunctionBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TypedFunctionBase);
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_END_CLASS();
}

void TypedFunctionBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(n,"n");
	HX_VISIT_MEMBER_NAME(b,"b");
}

Dynamic TypedFunctionBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"n") ) { return n; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkString") ) { return checkString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TypedFunctionBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TypedFunctionBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("n"));
	outFields->push(HX_CSTRING("b"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("checkString"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TypedFunctionBase_obj,n),HX_CSTRING("n")},
	{hx::fsBool,(int)offsetof(TypedFunctionBase_obj,b),HX_CSTRING("b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("n"),
	HX_CSTRING("b"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TypedFunctionBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TypedFunctionBase_obj::__mClass,"__mClass");
};

#endif

Class TypedFunctionBase_obj::__mClass;

void TypedFunctionBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.decoupledLIB.helpers.funcs.TypedFunctionBase"), hx::TCanCast< TypedFunctionBase_obj> ,sStaticFields,sMemberFields,
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

void TypedFunctionBase_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace decoupledLIB
} // end namespace helpers
} // end namespace funcs
