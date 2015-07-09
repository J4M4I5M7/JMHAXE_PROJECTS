#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_EU
#include <jmSubLibs/EU.h>
#endif
#ifndef INCLUDED_jmSubLibs_UNIT_TEST
#include <jmSubLibs/UNIT_TEST.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_utils_staticUtils_builtInTypes_vector_VectorUtil
#include <jmSubLibs/genLIB/decoupledLIB/utils/staticUtils/builtInTypes/vector/VectorUtil.h>
#endif
namespace jmSubLibs{

Void UNIT_TEST_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.UNIT_TEST","new",0x4ac2439c,"jmSubLibs.UNIT_TEST.new","jmSubLibs/UNIT_TEST.hx",13,0x7401a0d5)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//UNIT_TEST_obj::~UNIT_TEST_obj() { }

Dynamic UNIT_TEST_obj::__CreateEmpty() { return  new UNIT_TEST_obj; }
hx::ObjectPtr< UNIT_TEST_obj > UNIT_TEST_obj::__new()
{  hx::ObjectPtr< UNIT_TEST_obj > result = new UNIT_TEST_obj();
	result->__construct();
	return result;}

Dynamic UNIT_TEST_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UNIT_TEST_obj > result = new UNIT_TEST_obj();
	result->__construct();
	return result;}

Void UNIT_TEST_obj::unitTest( ){
{
		HX_STACK_FRAME("jmSubLibs.UNIT_TEST","unitTest",0x2ec8a43a,"jmSubLibs.UNIT_TEST.unitTest","jmSubLibs/UNIT_TEST.hx",19,0x7401a0d5)
		HX_STACK_LINE(20)
		bool _g = ::jmSubLibs::genLIB::decoupledLIB::utils::staticUtils::builtInTypes::vector::VectorUtil_obj::unitTest();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(20)
		::jmSubLibs::UNIT_TEST_obj::test(_g,HX_CSTRING("VectorUtil.unitTest()"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(UNIT_TEST_obj,unitTest,(void))

bool UNIT_TEST_obj::test( bool b,::String onFailMSG){
	HX_STACK_FRAME("jmSubLibs.UNIT_TEST","test",0x23302996,"jmSubLibs.UNIT_TEST.test","jmSubLibs/UNIT_TEST.hx",29,0x7401a0d5)
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(onFailMSG,"onFailMSG")
	HX_STACK_LINE(30)
	if (((b == false))){
		HX_STACK_LINE(30)
		::jmSubLibs::UNIT_TEST_obj::unitTestFail(onFailMSG);
	}
	HX_STACK_LINE(31)
	return b;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UNIT_TEST_obj,test,return )

Void UNIT_TEST_obj::unitTestFail( ::String inMSG){
{
		HX_STACK_FRAME("jmSubLibs.UNIT_TEST","unitTestFail",0x7db72f38,"jmSubLibs.UNIT_TEST.unitTestFail","jmSubLibs/UNIT_TEST.hx",37,0x7401a0d5)
		HX_STACK_ARG(inMSG,"inMSG")
		HX_STACK_LINE(37)
		::jmSubLibs::EU_obj::msg(((HX_CSTRING("UNIT_TEST.hx :: Failure at: Track MSG==[") + inMSG) + HX_CSTRING("]")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UNIT_TEST_obj,unitTestFail,(void))


UNIT_TEST_obj::UNIT_TEST_obj()
{
}

Dynamic UNIT_TEST_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"test") ) { return test_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"unitTest") ) { return unitTest_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"unitTestFail") ) { return unitTestFail_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UNIT_TEST_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void UNIT_TEST_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("unitTest"),
	HX_CSTRING("test"),
	HX_CSTRING("unitTestFail"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UNIT_TEST_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UNIT_TEST_obj::__mClass,"__mClass");
};

#endif

Class UNIT_TEST_obj::__mClass;

void UNIT_TEST_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.UNIT_TEST"), hx::TCanCast< UNIT_TEST_obj> ,sStaticFields,sMemberFields,
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

void UNIT_TEST_obj::__boot()
{
}

} // end namespace jmSubLibs
