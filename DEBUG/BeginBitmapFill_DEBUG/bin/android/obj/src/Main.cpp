#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_com_kircode_debug_FPS_Mem
#include <com/kircode/debug/FPS_Mem.h>
#endif
#ifndef INCLUDED_jmSubLibs_EU
#include <jmSubLibs/EU.h>
#endif
#ifndef INCLUDED_jmSubLibs_expLIB_haxePhoneLIB_staticUtils_ScreenSizeUtil
#include <jmSubLibs/expLIB/haxePhoneLIB/staticUtils/ScreenSizeUtil.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_structs_glue_BitMapBool
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/structs/glue/BitMapBool.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_debug_TileMapUpdateMGR_Debugger
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/debug/TileMapUpdateMGR_Debugger.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_glue_IntString
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/glue/IntString.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",132,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(133)
	super::__construct();
	HX_STACK_LINE(134)
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
		HX_STACK_FRAME("Main","resize",0x39257969,"Main.resize","Main.hx",53,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(53)
		if ((!(this->inited))){
			HX_STACK_LINE(53)
			this->init();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,resize,(void))

Void Main_obj::init( ){
{
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",58,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		if ((this->inited)){
			HX_STACK_LINE(59)
			return null();
		}
		HX_STACK_LINE(60)
		this->inited = true;
		HX_STACK_LINE(70)
		this->_doOnce = true;
		HX_STACK_LINE(71)
		int _g = ::jmSubLibs::expLIB::haxePhoneLIB::staticUtils::ScreenSizeUtil_obj::getPixelWid();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		this->_sWID = _g;
		HX_STACK_LINE(72)
		int _g1 = ::jmSubLibs::expLIB::haxePhoneLIB::staticUtils::ScreenSizeUtil_obj::getPixelHig();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(72)
		this->_sHIG = _g1;
		HX_STACK_LINE(74)
		this->_tWX = (int)32;
		HX_STACK_LINE(75)
		this->_tHY = (int)32;
		HX_STACK_LINE(77)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::debug::TileMapUpdateMGR_Debugger _g2 = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::debug::TileMapUpdateMGR_Debugger_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(77)
		this->_d = _g2;
		HX_STACK_LINE(79)
		::openfl::display::Sprite _g3 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(79)
		this->_s = _g3;
		HX_STACK_LINE(80)
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::structs::glue::BitMapBool _g4 = this->_d->getTileBMFunc((int)0,(int)0,(int)32,(int)32);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(80)
		this->_bm = _g4;
		HX_STACK_LINE(82)
		::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString _g5 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString_obj::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(82)
		this->_ft = _g5;
		HX_STACK_LINE(83)
		this->_d->linkSharedFrameTimeTracker(this->_ft);
		HX_STACK_LINE(87)
		int _g6 = this->_bm->map->get_width();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(87)
		if (((_g6 != this->_tWX))){
			HX_STACK_LINE(87)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("wafd"));
		}
		HX_STACK_LINE(88)
		int _g7 = this->_bm->map->get_height();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(88)
		if (((_g7 != this->_tHY))){
			HX_STACK_LINE(88)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("sfdfd"));
		}
		HX_STACK_LINE(90)
		this->addChild(this->_s);
		HX_STACK_LINE(92)
		this->addEventListener(::openfl::events::Event_obj::ENTER_FRAME,this->onEnterFrame_dyn(),null(),null(),null());
		HX_STACK_LINE(94)
		::com::kircode::debug::FPS_Mem _g8 = ::com::kircode::debug::FPS_Mem_obj::__new((int)10,(int)36,null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(94)
		this->_fps = _g8;
		HX_STACK_LINE(95)
		this->addChild(this->_fps);
		HX_STACK_LINE(97)
		::openfl::display::BitmapData _g9 = ::openfl::display::BitmapData_obj::__new((int)32,(int)32,true,(int)16711680,null());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(97)
		this->_bm0 = _g9;
		HX_STACK_LINE(98)
		::openfl::display::BitmapData _g10 = ::openfl::display::BitmapData_obj::__new((int)32,(int)32,true,(int)16711935,null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(98)
		this->_bm1 = _g10;
		HX_STACK_LINE(99)
		::openfl::geom::Rectangle _g11 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,(int)32,(int)32);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(99)
		this->_bmRec = _g11;
		HX_STACK_LINE(100)
		::openfl::geom::Point _g12 = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(100)
		this->_zz = _g12;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init,(void))

Void Main_obj::onEnterFrame( ::openfl::events::Event evt){
{
		HX_STACK_FRAME("Main","onEnterFrame",0x016e4b29,"Main.onEnterFrame","Main.hx",106,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_LINE(107)
		(this->_ft->i)++;
		HX_STACK_LINE(110)
		this->_d->getTileFrameID((int)0,(int)0);
		HX_STACK_LINE(111)
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::structs::glue::BitMapBool _g = this->_d->getTileBMFunc((int)0,(int)0,this->_tWX,this->_tHY);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(111)
		this->_bm = _g;
		HX_STACK_LINE(112)
		this->_doOnce = false;
		HX_STACK_LINE(114)
		this->_bm0->copyPixels(this->_bm1,this->_bmRec,this->_zz,null(),null(),false);
		HX_STACK_LINE(120)
		this->_s->get_graphics()->clear();
		HX_STACK_LINE(121)
		this->_s->get_graphics()->beginBitmapFill(this->_bm->map,null(),true,null());
		HX_STACK_LINE(122)
		this->_s->get_graphics()->drawRect((int)0,(int)0,this->_sWID,this->_sHIG);
		HX_STACK_LINE(123)
		this->_s->get_graphics()->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onEnterFrame,(void))

Void Main_obj::added( Dynamic e){
{
		HX_STACK_FRAME("Main","added",0x98771aeb,"Main.added","Main.hx",138,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(139)
		this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null());
		HX_STACK_LINE(140)
		this->get_stage()->addEventListener(::openfl::events::Event_obj::RESIZE,this->resize_dyn(),null(),null(),null());
		HX_STACK_LINE(144)
		this->init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,added,(void))

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",149,0x087e5c05)
		HX_STACK_LINE(151)
		::openfl::Lib_obj::get_current()->get_stage()->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(152)
		::openfl::Lib_obj::get_current()->get_stage()->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(153)
		::Main _g = ::Main_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(153)
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
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(_tWX,"_tWX");
	HX_MARK_MEMBER_NAME(_tHY,"_tHY");
	HX_MARK_MEMBER_NAME(_sWID,"_sWID");
	HX_MARK_MEMBER_NAME(_sHIG,"_sHIG");
	HX_MARK_MEMBER_NAME(_bm,"_bm");
	HX_MARK_MEMBER_NAME(_s,"_s");
	HX_MARK_MEMBER_NAME(_d,"_d");
	HX_MARK_MEMBER_NAME(_ft,"_ft");
	HX_MARK_MEMBER_NAME(_fps,"_fps");
	HX_MARK_MEMBER_NAME(_doOnce,"_doOnce");
	HX_MARK_MEMBER_NAME(_bm0,"_bm0");
	HX_MARK_MEMBER_NAME(_bm1,"_bm1");
	HX_MARK_MEMBER_NAME(_bmRec,"_bmRec");
	HX_MARK_MEMBER_NAME(_zz,"_zz");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(_tWX,"_tWX");
	HX_VISIT_MEMBER_NAME(_tHY,"_tHY");
	HX_VISIT_MEMBER_NAME(_sWID,"_sWID");
	HX_VISIT_MEMBER_NAME(_sHIG,"_sHIG");
	HX_VISIT_MEMBER_NAME(_bm,"_bm");
	HX_VISIT_MEMBER_NAME(_s,"_s");
	HX_VISIT_MEMBER_NAME(_d,"_d");
	HX_VISIT_MEMBER_NAME(_ft,"_ft");
	HX_VISIT_MEMBER_NAME(_fps,"_fps");
	HX_VISIT_MEMBER_NAME(_doOnce,"_doOnce");
	HX_VISIT_MEMBER_NAME(_bm0,"_bm0");
	HX_VISIT_MEMBER_NAME(_bm1,"_bm1");
	HX_VISIT_MEMBER_NAME(_bmRec,"_bmRec");
	HX_VISIT_MEMBER_NAME(_zz,"_zz");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_s") ) { return _s; }
		if (HX_FIELD_EQ(inName,"_d") ) { return _d; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_bm") ) { return _bm; }
		if (HX_FIELD_EQ(inName,"_ft") ) { return _ft; }
		if (HX_FIELD_EQ(inName,"_zz") ) { return _zz; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"_tWX") ) { return _tWX; }
		if (HX_FIELD_EQ(inName,"_tHY") ) { return _tHY; }
		if (HX_FIELD_EQ(inName,"_fps") ) { return _fps; }
		if (HX_FIELD_EQ(inName,"_bm0") ) { return _bm0; }
		if (HX_FIELD_EQ(inName,"_bm1") ) { return _bm1; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_sWID") ) { return _sWID; }
		if (HX_FIELD_EQ(inName,"_sHIG") ) { return _sHIG; }
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"_bmRec") ) { return _bmRec; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_doOnce") ) { return _doOnce; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_s") ) { _s=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_d") ) { _d=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::debug::TileMapUpdateMGR_Debugger >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_bm") ) { _bm=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::helpers::data::structs::glue::BitMapBool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ft") ) { _ft=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_zz") ) { _zz=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_tWX") ) { _tWX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tHY") ) { _tHY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fps") ) { _fps=inValue.Cast< ::com::kircode::debug::FPS_Mem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bm0") ) { _bm0=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bm1") ) { _bm1=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_sWID") ) { _sWID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sHIG") ) { _sHIG=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bmRec") ) { _bmRec=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_doOnce") ) { _doOnce=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("inited"));
	outFields->push(HX_CSTRING("_tWX"));
	outFields->push(HX_CSTRING("_tHY"));
	outFields->push(HX_CSTRING("_sWID"));
	outFields->push(HX_CSTRING("_sHIG"));
	outFields->push(HX_CSTRING("_bm"));
	outFields->push(HX_CSTRING("_s"));
	outFields->push(HX_CSTRING("_d"));
	outFields->push(HX_CSTRING("_ft"));
	outFields->push(HX_CSTRING("_fps"));
	outFields->push(HX_CSTRING("_doOnce"));
	outFields->push(HX_CSTRING("_bm0"));
	outFields->push(HX_CSTRING("_bm1"));
	outFields->push(HX_CSTRING("_bmRec"));
	outFields->push(HX_CSTRING("_zz"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Main_obj,inited),HX_CSTRING("inited")},
	{hx::fsInt,(int)offsetof(Main_obj,_tWX),HX_CSTRING("_tWX")},
	{hx::fsInt,(int)offsetof(Main_obj,_tHY),HX_CSTRING("_tHY")},
	{hx::fsInt,(int)offsetof(Main_obj,_sWID),HX_CSTRING("_sWID")},
	{hx::fsInt,(int)offsetof(Main_obj,_sHIG),HX_CSTRING("_sHIG")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::helpers::data::structs::glue::BitMapBool*/ ,(int)offsetof(Main_obj,_bm),HX_CSTRING("_bm")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Main_obj,_s),HX_CSTRING("_s")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::debug::TileMapUpdateMGR_Debugger*/ ,(int)offsetof(Main_obj,_d),HX_CSTRING("_d")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString*/ ,(int)offsetof(Main_obj,_ft),HX_CSTRING("_ft")},
	{hx::fsObject /*::com::kircode::debug::FPS_Mem*/ ,(int)offsetof(Main_obj,_fps),HX_CSTRING("_fps")},
	{hx::fsBool,(int)offsetof(Main_obj,_doOnce),HX_CSTRING("_doOnce")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Main_obj,_bm0),HX_CSTRING("_bm0")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Main_obj,_bm1),HX_CSTRING("_bm1")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Main_obj,_bmRec),HX_CSTRING("_bmRec")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(Main_obj,_zz),HX_CSTRING("_zz")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("inited"),
	HX_CSTRING("_tWX"),
	HX_CSTRING("_tHY"),
	HX_CSTRING("_sWID"),
	HX_CSTRING("_sHIG"),
	HX_CSTRING("_bm"),
	HX_CSTRING("_s"),
	HX_CSTRING("_d"),
	HX_CSTRING("_ft"),
	HX_CSTRING("_fps"),
	HX_CSTRING("_doOnce"),
	HX_CSTRING("_bm0"),
	HX_CSTRING("_bm1"),
	HX_CSTRING("_bmRec"),
	HX_CSTRING("_zz"),
	HX_CSTRING("resize"),
	HX_CSTRING("init"),
	HX_CSTRING("onEnterFrame"),
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

