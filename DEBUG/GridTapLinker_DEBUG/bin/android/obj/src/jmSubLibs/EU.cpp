#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_EU
#include <jmSubLibs/EU.h>
#endif
namespace jmSubLibs{

Void EU_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.EU","new",0xc5740ac5,"jmSubLibs.EU.new","jmSubLibs/EU.hx",14,0x7f5990aa)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	HX_STACK_DO_THROW(HX_CSTRING("do not instantiate EU.hx"));
}
;
	return null();
}

//EU_obj::~EU_obj() { }

Dynamic EU_obj::__CreateEmpty() { return  new EU_obj; }
hx::ObjectPtr< EU_obj > EU_obj::__new()
{  hx::ObjectPtr< EU_obj > result = new EU_obj();
	result->__construct();
	return result;}

Dynamic EU_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EU_obj > result = new EU_obj();
	result->__construct();
	return result;}

bool EU_obj::_configToCrash;

Void EU_obj::msg( ::String inMSG){
{
		HX_STACK_FRAME("jmSubLibs.EU","msg",0xc57354a6,"jmSubLibs.EU.msg","jmSubLibs/EU.hx",27,0x7f5990aa)
		HX_STACK_ARG(inMSG,"inMSG")
		HX_STACK_LINE(27)
		if ((::jmSubLibs::EU_obj::_configToCrash)){
			HX_STACK_LINE(29)
			HX_STACK_DO_THROW(inMSG);
		}
		else{
			HX_STACK_LINE(34)
			HX_STACK_DO_THROW(inMSG);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EU_obj,msg,(void))


EU_obj::EU_obj()
{
}

Dynamic EU_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"msg") ) { return msg_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_configToCrash") ) { return _configToCrash; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EU_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"_configToCrash") ) { _configToCrash=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EU_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_configToCrash"),
	HX_CSTRING("msg"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EU_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EU_obj::_configToCrash,"_configToCrash");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EU_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EU_obj::_configToCrash,"_configToCrash");
};

#endif

Class EU_obj::__mClass;

void EU_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.EU"), hx::TCanCast< EU_obj> ,sStaticFields,sMemberFields,
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

void EU_obj::__boot()
{
	_configToCrash= true;
}

} // end namespace jmSubLibs
