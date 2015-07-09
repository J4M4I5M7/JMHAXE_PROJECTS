#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_utils_staticUtils_builtInTypes_vector_VectorUtil
#include <jmSubLibs/genLIB/decoupledLIB/utils/staticUtils/builtInTypes/vector/VectorUtil.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace utils{
namespace staticUtils{
namespace builtInTypes{
namespace vector{

Void VectorUtil_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.utils.staticUtils.builtInTypes.vector.VectorUtil","new",0xd08929c8,"jmSubLibs.genLIB.decoupledLIB.utils.staticUtils.builtInTypes.vector.VectorUtil.new","jmSubLibs/genLIB/decoupledLIB/utils/staticUtils/builtInTypes/vector/VectorUtil.hx",15,0x151fdf85)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//VectorUtil_obj::~VectorUtil_obj() { }

Dynamic VectorUtil_obj::__CreateEmpty() { return  new VectorUtil_obj; }
hx::ObjectPtr< VectorUtil_obj > VectorUtil_obj::__new()
{  hx::ObjectPtr< VectorUtil_obj > result = new VectorUtil_obj();
	result->__construct();
	return result;}

Dynamic VectorUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VectorUtil_obj > result = new VectorUtil_obj();
	result->__construct();
	return result;}

bool VectorUtil_obj::unitTest( ){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.utils.staticUtils.builtInTypes.vector.VectorUtil","unitTest",0xa7f3de8e,"jmSubLibs.genLIB.decoupledLIB.utils.staticUtils.builtInTypes.vector.VectorUtil.unitTest","jmSubLibs/genLIB/decoupledLIB/utils/staticUtils/builtInTypes/vector/VectorUtil.hx",62,0x151fdf85)
	HX_STACK_LINE(62)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(VectorUtil_obj,unitTest,return )

bool VectorUtil_obj::unitTestMatchFN( Dynamic stringFromVector,Dynamic matcherArg){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.utils.staticUtils.builtInTypes.vector.VectorUtil","unitTestMatchFN",0x5c2c78df,"jmSubLibs.genLIB.decoupledLIB.utils.staticUtils.builtInTypes.vector.VectorUtil.unitTestMatchFN","jmSubLibs/genLIB/decoupledLIB/utils/staticUtils/builtInTypes/vector/VectorUtil.hx",89,0x151fdf85)
	HX_STACK_ARG(stringFromVector,"stringFromVector")
	HX_STACK_ARG(matcherArg,"matcherArg")
	HX_STACK_LINE(90)
	if (((stringFromVector == matcherArg))){
		HX_STACK_LINE(90)
		return true;
	}
	HX_STACK_LINE(91)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(VectorUtil_obj,unitTestMatchFN,return )


VectorUtil_obj::VectorUtil_obj()
{
}

Dynamic VectorUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"unitTest") ) { return unitTest_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unitTestMatchFN") ) { return unitTestMatchFN_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VectorUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void VectorUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("unitTest"),
	HX_CSTRING("unitTestMatchFN"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VectorUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VectorUtil_obj::__mClass,"__mClass");
};

#endif

Class VectorUtil_obj::__mClass;

void VectorUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.utils.staticUtils.builtInTypes.vector.VectorUtil"), hx::TCanCast< VectorUtil_obj> ,sStaticFields,sMemberFields,
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

void VectorUtil_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace utils
} // end namespace staticUtils
} // end namespace builtInTypes
} // end namespace vector
