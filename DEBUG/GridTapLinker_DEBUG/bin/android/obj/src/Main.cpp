#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_jmSubLibs_decoupledLIB_systems_tileBased_frameWork_gridTap_GridTapLinker
#include <jmSubLibs/decoupledLIB/systems/tileBased/frameWork/gridTap/GridTapLinker.h>
#endif
#ifndef INCLUDED_jmSubLibs_haxePhoneLIB_staticUtils_ScreenSizeUtil
#include <jmSubLibs/haxePhoneLIB/staticUtils/ScreenSizeUtil.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",16,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	this->_tHY = (int)0;
	HX_STACK_LINE(24)
	this->_tWX = (int)0;
	HX_STACK_LINE(23)
	this->_hig = (int)8;
	HX_STACK_LINE(22)
	this->_wid = (int)8;
	HX_STACK_LINE(114)
	super::__construct();
	HX_STACK_LINE(115)
	this->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null(),null(),null());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::resize( Dynamic e){
{
		HX_STACK_FRAME("Main","resize",0x39257969,"Main.resize","Main.hx",43,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(43)
		if ((!(this->inited))){
			HX_STACK_LINE(43)
			this->init();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,resize,(void))

Void Main_obj::init( ){
{
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",48,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		if ((this->inited)){
			HX_STACK_LINE(49)
			return null();
		}
		HX_STACK_LINE(50)
		this->inited = true;
		HX_STACK_LINE(60)
		this->jmimInit();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init,(void))

Void Main_obj::init_map( ){
{
		HX_STACK_FRAME("Main","init_map",0xa004f962,"Main.init_map","Main.hx",67,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		int w = ::jmSubLibs::haxePhoneLIB::staticUtils::ScreenSizeUtil_obj::getPixelWid();		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(69)
		int h = ::jmSubLibs::haxePhoneLIB::staticUtils::ScreenSizeUtil_obj::getPixelHig();		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(71)
		int _g = ::Std_obj::_int((Float(w) / Float(this->_wid)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		this->_tWX = _g;
		HX_STACK_LINE(72)
		int _g1 = ::Std_obj::_int((Float(h) / Float(this->_hig)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(72)
		this->_tHY = _g1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init_map,(void))

Void Main_obj::jmimInit( ){
{
		HX_STACK_FRAME("Main","jmimInit",0x9949fccc,"Main.jmimInit","Main.hx",77,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(78)
		this->init_buf();
		HX_STACK_LINE(79)
		this->init_map();
		HX_STACK_LINE(82)
		this->init_tap();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,jmimInit,(void))

Void Main_obj::init_tap( ){
{
		HX_STACK_FRAME("Main","init_tap",0xa00a4929,"Main.init_tap","Main.hx",92,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		::jmSubLibs::decoupledLIB::systems::tileBased::frameWork::gridTap::GridTapLinker _g = ::jmSubLibs::decoupledLIB::systems::tileBased::frameWork::gridTap::GridTapLinker_obj::__new((int)5);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(93)
		this->gTap = _g;
		HX_STACK_LINE(94)
		this->gTap->linkUpEventListeners(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(95)
		this->gTap->setDebugBuffer(this->_buf);
		HX_STACK_LINE(96)
		this->gTap->setDims(this->_wid,this->_hig,this->_tWX,this->_tHY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init_tap,(void))

Void Main_obj::init_buf( ){
{
		HX_STACK_FRAME("Main","init_buf",0x9ffcb1f9,"Main.init_buf","Main.hx",100,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		int w = ::jmSubLibs::haxePhoneLIB::staticUtils::ScreenSizeUtil_obj::getPixelWid();		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(102)
		int h = ::jmSubLibs::haxePhoneLIB::staticUtils::ScreenSizeUtil_obj::getPixelHig();		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(103)
		::openfl::display::BitmapData _g = ::openfl::display::BitmapData_obj::__new(w,h,true,(int)-65536,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(103)
		this->_buf = _g;
		HX_STACK_LINE(105)
		::openfl::display::Bitmap _g1 = ::openfl::display::Bitmap_obj::__new(null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(105)
		this->_buf_vis = _g1;
		HX_STACK_LINE(106)
		this->_buf_vis->set_bitmapData(this->_buf);
		HX_STACK_LINE(107)
		this->addChild(this->_buf_vis);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init_buf,(void))

Void Main_obj::added( Dynamic e){
{
		HX_STACK_FRAME("Main","added",0x98771aeb,"Main.added","Main.hx",119,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(120)
		this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null());
		HX_STACK_LINE(121)
		this->get_stage()->addEventListener(::openfl::events::Event_obj::RESIZE,this->resize_dyn(),null(),null(),null());
		HX_STACK_LINE(125)
		this->init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,added,(void))

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",130,0x087e5c05)
		HX_STACK_LINE(132)
		::openfl::Lib_obj::get_current()->get_stage()->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(133)
		::openfl::Lib_obj::get_current()->get_stage()->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(134)
		::Main _g = ::Main_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(134)
		::openfl::Lib_obj::get_current()->addChild(_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(_wid,"_wid");
	HX_MARK_MEMBER_NAME(_hig,"_hig");
	HX_MARK_MEMBER_NAME(_tWX,"_tWX");
	HX_MARK_MEMBER_NAME(_tHY,"_tHY");
	HX_MARK_MEMBER_NAME(_buf,"_buf");
	HX_MARK_MEMBER_NAME(_buf_vis,"_buf_vis");
	HX_MARK_MEMBER_NAME(gTap,"gTap");
	HX_MARK_MEMBER_NAME(inited,"inited");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_wid,"_wid");
	HX_VISIT_MEMBER_NAME(_hig,"_hig");
	HX_VISIT_MEMBER_NAME(_tWX,"_tWX");
	HX_VISIT_MEMBER_NAME(_tHY,"_tHY");
	HX_VISIT_MEMBER_NAME(_buf,"_buf");
	HX_VISIT_MEMBER_NAME(_buf_vis,"_buf_vis");
	HX_VISIT_MEMBER_NAME(gTap,"gTap");
	HX_VISIT_MEMBER_NAME(inited,"inited");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"_wid") ) { return _wid; }
		if (HX_FIELD_EQ(inName,"_hig") ) { return _hig; }
		if (HX_FIELD_EQ(inName,"_tWX") ) { return _tWX; }
		if (HX_FIELD_EQ(inName,"_tHY") ) { return _tHY; }
		if (HX_FIELD_EQ(inName,"_buf") ) { return _buf; }
		if (HX_FIELD_EQ(inName,"gTap") ) { return gTap; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buf_vis") ) { return _buf_vis; }
		if (HX_FIELD_EQ(inName,"init_map") ) { return init_map_dyn(); }
		if (HX_FIELD_EQ(inName,"jmimInit") ) { return jmimInit_dyn(); }
		if (HX_FIELD_EQ(inName,"init_tap") ) { return init_tap_dyn(); }
		if (HX_FIELD_EQ(inName,"init_buf") ) { return init_buf_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_wid") ) { _wid=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hig") ) { _hig=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tWX") ) { _tWX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tHY") ) { _tHY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buf") ) { _buf=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gTap") ) { gTap=inValue.Cast< ::jmSubLibs::decoupledLIB::systems::tileBased::frameWork::gridTap::GridTapLinker >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buf_vis") ) { _buf_vis=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_wid"));
	outFields->push(HX_CSTRING("_hig"));
	outFields->push(HX_CSTRING("_tWX"));
	outFields->push(HX_CSTRING("_tHY"));
	outFields->push(HX_CSTRING("_buf"));
	outFields->push(HX_CSTRING("_buf_vis"));
	outFields->push(HX_CSTRING("gTap"));
	outFields->push(HX_CSTRING("inited"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Main_obj,_wid),HX_CSTRING("_wid")},
	{hx::fsInt,(int)offsetof(Main_obj,_hig),HX_CSTRING("_hig")},
	{hx::fsInt,(int)offsetof(Main_obj,_tWX),HX_CSTRING("_tWX")},
	{hx::fsInt,(int)offsetof(Main_obj,_tHY),HX_CSTRING("_tHY")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Main_obj,_buf),HX_CSTRING("_buf")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Main_obj,_buf_vis),HX_CSTRING("_buf_vis")},
	{hx::fsObject /*::jmSubLibs::decoupledLIB::systems::tileBased::frameWork::gridTap::GridTapLinker*/ ,(int)offsetof(Main_obj,gTap),HX_CSTRING("gTap")},
	{hx::fsBool,(int)offsetof(Main_obj,inited),HX_CSTRING("inited")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_wid"),
	HX_CSTRING("_hig"),
	HX_CSTRING("_tWX"),
	HX_CSTRING("_tHY"),
	HX_CSTRING("_buf"),
	HX_CSTRING("_buf_vis"),
	HX_CSTRING("gTap"),
	HX_CSTRING("inited"),
	HX_CSTRING("resize"),
	HX_CSTRING("init"),
	HX_CSTRING("init_map"),
	HX_CSTRING("jmimInit"),
	HX_CSTRING("init_tap"),
	HX_CSTRING("init_buf"),
	HX_CSTRING("added"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
}

