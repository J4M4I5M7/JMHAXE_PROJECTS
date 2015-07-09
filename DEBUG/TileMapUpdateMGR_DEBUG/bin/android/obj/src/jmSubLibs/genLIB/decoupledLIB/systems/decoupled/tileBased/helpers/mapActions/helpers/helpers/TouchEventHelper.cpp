#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapActions_helpers_helpers_TouchEventHelper
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/helpers/helpers/TouchEventHelper.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TouchEvent
#include <openfl/events/TouchEvent.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace decoupled{
namespace tileBased{
namespace helpers{
namespace mapActions{
namespace helpers{
namespace helpers{

Void TouchEventHelper_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.helpers.TouchEventHelper","new",0x327480fd,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.helpers.TouchEventHelper.new","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/helpers/helpers/TouchEventHelper.hx",14,0x9a71b9d5)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//TouchEventHelper_obj::~TouchEventHelper_obj() { }

Dynamic TouchEventHelper_obj::__CreateEmpty() { return  new TouchEventHelper_obj; }
hx::ObjectPtr< TouchEventHelper_obj > TouchEventHelper_obj::__new()
{  hx::ObjectPtr< TouchEventHelper_obj > result = new TouchEventHelper_obj();
	result->__construct();
	return result;}

Dynamic TouchEventHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TouchEventHelper_obj > result = new TouchEventHelper_obj();
	result->__construct();
	return result;}


TouchEventHelper_obj::TouchEventHelper_obj()
{
}

void TouchEventHelper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TouchEventHelper);
	HX_MARK_MEMBER_NAME(tev,"tev");
	HX_MARK_END_CLASS();
}

void TouchEventHelper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tev,"tev");
}

Dynamic TouchEventHelper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tev") ) { return tev; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TouchEventHelper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tev") ) { tev=inValue.Cast< ::openfl::events::TouchEvent >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TouchEventHelper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tev"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::events::TouchEvent*/ ,(int)offsetof(TouchEventHelper_obj,tev),HX_CSTRING("tev")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("tev"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchEventHelper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchEventHelper_obj::__mClass,"__mClass");
};

#endif

Class TouchEventHelper_obj::__mClass;

void TouchEventHelper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.helpers.TouchEventHelper"), hx::TCanCast< TouchEventHelper_obj> ,sStaticFields,sMemberFields,
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

void TouchEventHelper_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace decoupled
} // end namespace tileBased
} // end namespace helpers
} // end namespace mapActions
} // end namespace helpers
} // end namespace helpers
