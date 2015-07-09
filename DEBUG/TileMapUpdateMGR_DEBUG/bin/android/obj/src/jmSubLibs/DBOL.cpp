#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_DBOL
#include <jmSubLibs/DBOL.h>
#endif
#ifndef INCLUDED_jmSubLibs_EU
#include <jmSubLibs/EU.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
namespace jmSubLibs{

Void DBOL_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.DBOL","new",0x3d1bbab0,"jmSubLibs.DBOL.new","jmSubLibs/DBOL.hx",66,0x60809cdf)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//DBOL_obj::~DBOL_obj() { }

Dynamic DBOL_obj::__CreateEmpty() { return  new DBOL_obj; }
hx::ObjectPtr< DBOL_obj > DBOL_obj::__new()
{  hx::ObjectPtr< DBOL_obj > result = new DBOL_obj();
	result->__construct();
	return result;}

Dynamic DBOL_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DBOL_obj > result = new DBOL_obj();
	result->__construct();
	return result;}

void DBOL_obj::__init__() {
HX_STACK_FRAME("jmSubLibs.DBOL","__init__",0xd0509100,"jmSubLibs.DBOL.__init__","jmSubLibs/DBOL.hx",18,0x60809cdf)
{
	HX_STACK_LINE(18)
	::jmSubLibs::DBOL_obj::doStaticInit();
}
}

Void DBOL_obj::doStaticInit( ){
{
		HX_STACK_FRAME("jmSubLibs.DBOL","doStaticInit",0xc87fd5f9,"jmSubLibs.DBOL.doStaticInit","jmSubLibs/DBOL.hx",21,0x60809cdf)
		HX_STACK_LINE(22)
		::openfl::display::Sprite _g = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(22)
		::jmSubLibs::DBOL_obj::_overlay = _g;
		HX_STACK_LINE(25)
		::jmSubLibs::DBOL_obj::_overlay->set_mouseEnabled(false);
		HX_STACK_LINE(26)
		::jmSubLibs::DBOL_obj::_overlay->set_mouseChildren(false);
		HX_STACK_LINE(29)
		::openfl::text::TextField _g1 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		::jmSubLibs::DBOL_obj::_textArea = _g1;
		HX_STACK_LINE(30)
		::jmSubLibs::DBOL_obj::_overlay->addChild(::jmSubLibs::DBOL_obj::_textArea);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DBOL_obj,doStaticInit,(void))

::openfl::display::Stage DBOL_obj::_stage;

::openfl::display::Sprite DBOL_obj::_overlay;

::openfl::text::TextField DBOL_obj::_textArea;

Void DBOL_obj::setStage( ::openfl::display::Stage inStage){
{
		HX_STACK_FRAME("jmSubLibs.DBOL","setStage",0x2314876c,"jmSubLibs.DBOL.setStage","jmSubLibs/DBOL.hx",41,0x60809cdf)
		HX_STACK_ARG(inStage,"inStage")
		HX_STACK_LINE(42)
		::jmSubLibs::DBOL_obj::_stage = inStage;
		HX_STACK_LINE(43)
		::jmSubLibs::DBOL_obj::_stage->addChild(::jmSubLibs::DBOL_obj::_overlay);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DBOL_obj,setStage,(void))

Void DBOL_obj::textMSG( ::String inMSG){
{
		HX_STACK_FRAME("jmSubLibs.DBOL","textMSG",0x1ed5a5e4,"jmSubLibs.DBOL.textMSG","jmSubLibs/DBOL.hx",48,0x60809cdf)
		HX_STACK_ARG(inMSG,"inMSG")
		HX_STACK_LINE(48)
		::jmSubLibs::DBOL_obj::_textArea->set_text(inMSG);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DBOL_obj,textMSG,(void))

Void DBOL_obj::colorMSG( int inRGB){
{
		HX_STACK_FRAME("jmSubLibs.DBOL","colorMSG",0x1abfb84e,"jmSubLibs.DBOL.colorMSG","jmSubLibs/DBOL.hx",52,0x60809cdf)
		HX_STACK_ARG(inRGB,"inRGB")
		HX_STACK_LINE(53)
		if (((null() == ::jmSubLibs::DBOL_obj::_stage))){
			HX_STACK_LINE(53)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("DBOL: no stage set"));
		}
		HX_STACK_LINE(56)
		int _g = ::jmSubLibs::DBOL_obj::_stage->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(56)
		int _g1 = (_g - (int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(56)
		::jmSubLibs::DBOL_obj::_stage->setChildIndex(::jmSubLibs::DBOL_obj::_overlay,_g1);
		HX_STACK_LINE(58)
		::openfl::display::Graphics g = ::jmSubLibs::DBOL_obj::_overlay->get_graphics();		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(59)
		g->clear();
		HX_STACK_LINE(60)
		g->beginFill(inRGB,0.5);
		HX_STACK_LINE(61)
		int _g2 = ::jmSubLibs::DBOL_obj::_stage->get_stageWidth();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(61)
		int _g3 = ::jmSubLibs::DBOL_obj::_stage->get_stageHeight();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(61)
		g->drawRect((int)0,(int)0,_g2,_g3);
		HX_STACK_LINE(62)
		g->endFill();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DBOL_obj,colorMSG,(void))


DBOL_obj::DBOL_obj()
{
}

Dynamic DBOL_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_stage") ) { return _stage; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"textMSG") ) { return textMSG_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_overlay") ) { return _overlay; }
		if (HX_FIELD_EQ(inName,"setStage") ) { return setStage_dyn(); }
		if (HX_FIELD_EQ(inName,"colorMSG") ) { return colorMSG_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textArea") ) { return _textArea; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"doStaticInit") ) { return doStaticInit_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DBOL_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_stage") ) { _stage=inValue.Cast< ::openfl::display::Stage >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_overlay") ) { _overlay=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textArea") ) { _textArea=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DBOL_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("doStaticInit"),
	HX_CSTRING("_stage"),
	HX_CSTRING("_overlay"),
	HX_CSTRING("_textArea"),
	HX_CSTRING("setStage"),
	HX_CSTRING("textMSG"),
	HX_CSTRING("colorMSG"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DBOL_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DBOL_obj::_stage,"_stage");
	HX_MARK_MEMBER_NAME(DBOL_obj::_overlay,"_overlay");
	HX_MARK_MEMBER_NAME(DBOL_obj::_textArea,"_textArea");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DBOL_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DBOL_obj::_stage,"_stage");
	HX_VISIT_MEMBER_NAME(DBOL_obj::_overlay,"_overlay");
	HX_VISIT_MEMBER_NAME(DBOL_obj::_textArea,"_textArea");
};

#endif

Class DBOL_obj::__mClass;

void DBOL_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.DBOL"), hx::TCanCast< DBOL_obj> ,sStaticFields,sMemberFields,
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

void DBOL_obj::__boot()
{
}

} // end namespace jmSubLibs
