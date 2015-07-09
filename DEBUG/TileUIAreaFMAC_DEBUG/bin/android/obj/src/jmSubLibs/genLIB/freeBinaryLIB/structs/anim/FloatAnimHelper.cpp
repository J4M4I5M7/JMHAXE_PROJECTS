#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_EU
#include <jmSubLibs/EU.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_FloatAnimHelper
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/anim/FloatAnimHelper.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace freeBinaryLIB{
namespace structs{
namespace anim{

Void FloatAnimHelper_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.anim.FloatAnimHelper","new",0x88abafec,"jmSubLibs.genLIB.freeBinaryLIB.structs.anim.FloatAnimHelper.new","jmSubLibs/genLIB/freeBinaryLIB/structs/anim/FloatAnimHelper.hx",9,0xfd427663)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	this->pt1 = (int)0;
	HX_STACK_LINE(17)
	this->pt0 = (int)0;
	HX_STACK_LINE(14)
	this->cur = (int)0;
}
;
	return null();
}

//FloatAnimHelper_obj::~FloatAnimHelper_obj() { }

Dynamic FloatAnimHelper_obj::__CreateEmpty() { return  new FloatAnimHelper_obj; }
hx::ObjectPtr< FloatAnimHelper_obj > FloatAnimHelper_obj::__new()
{  hx::ObjectPtr< FloatAnimHelper_obj > result = new FloatAnimHelper_obj();
	result->__construct();
	return result;}

Dynamic FloatAnimHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FloatAnimHelper_obj > result = new FloatAnimHelper_obj();
	result->__construct();
	return result;}

bool FloatAnimHelper_obj::setDest( Float inDestPT1,bool inDoAnimate){
	HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.anim.FloatAnimHelper","setDest",0xff3734b0,"jmSubLibs.genLIB.freeBinaryLIB.structs.anim.FloatAnimHelper.setDest","jmSubLibs/genLIB/freeBinaryLIB/structs/anim/FloatAnimHelper.hx",25,0xfd427663)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inDestPT1,"inDestPT1")
	HX_STACK_ARG(inDoAnimate,"inDoAnimate")
	HX_STACK_LINE(26)
	if (((false == inDoAnimate))){
		HX_STACK_LINE(28)
		this->pt1 = inDestPT1;
		HX_STACK_LINE(29)
		this->pt0 = inDestPT1;
		HX_STACK_LINE(30)
		this->cur = inDestPT1;
		HX_STACK_LINE(31)
		return false;
	}
	else{
		HX_STACK_LINE(38)
		this->pt0 = this->cur;
		HX_STACK_LINE(41)
		this->pt1 = inDestPT1;
		HX_STACK_LINE(42)
		if (((this->pt1 == this->cur))){
			HX_STACK_LINE(44)
			return false;
		}
		else{
			HX_STACK_LINE(49)
			return true;
		}
	}
	HX_STACK_LINE(53)
	::jmSubLibs::EU_obj::msg(HX_CSTRING("We should never get to this line! FloatAnimHelper.hx"));
	HX_STACK_LINE(54)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(FloatAnimHelper_obj,setDest,return )


FloatAnimHelper_obj::FloatAnimHelper_obj()
{
}

Dynamic FloatAnimHelper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cur") ) { return cur; }
		if (HX_FIELD_EQ(inName,"pt0") ) { return pt0; }
		if (HX_FIELD_EQ(inName,"pt1") ) { return pt1; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setDest") ) { return setDest_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FloatAnimHelper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cur") ) { cur=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pt0") ) { pt0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pt1") ) { pt1=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FloatAnimHelper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cur"));
	outFields->push(HX_CSTRING("pt0"));
	outFields->push(HX_CSTRING("pt1"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FloatAnimHelper_obj,cur),HX_CSTRING("cur")},
	{hx::fsFloat,(int)offsetof(FloatAnimHelper_obj,pt0),HX_CSTRING("pt0")},
	{hx::fsFloat,(int)offsetof(FloatAnimHelper_obj,pt1),HX_CSTRING("pt1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("cur"),
	HX_CSTRING("pt0"),
	HX_CSTRING("pt1"),
	HX_CSTRING("setDest"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FloatAnimHelper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FloatAnimHelper_obj::__mClass,"__mClass");
};

#endif

Class FloatAnimHelper_obj::__mClass;

void FloatAnimHelper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.freeBinaryLIB.structs.anim.FloatAnimHelper"), hx::TCanCast< FloatAnimHelper_obj> ,sStaticFields,sMemberFields,
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

void FloatAnimHelper_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace freeBinaryLIB
} // end namespace structs
} // end namespace anim
