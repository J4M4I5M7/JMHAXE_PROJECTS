#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_com_kircode_debug_FPS_Mem
#include <com/kircode/debug/FPS_Mem.h>
#endif
#ifndef INCLUDED_jmSubLibs_UNIT_TEST
#include <jmSubLibs/UNIT_TEST.h>
#endif
#ifndef INCLUDED_jmSubLibs_expLIB_haxePhoneLIB_staticUtils_ScreenSizeUtil
#include <jmSubLibs/expLIB/haxePhoneLIB/staticUtils/ScreenSizeUtil.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_structs_glue_BitMapBool
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/structs/glue/BitMapBool.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapActions_TileMapActionsContainer
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/TileMapActionsContainer.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapActions_helpers_TileMapActionsInputSurfaceLinker
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/helpers/TileMapActionsInputSurfaceLinker.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_TileMapUpdateMGR
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",34,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(51)
	this->_buf_hig = ::jmSubLibs::expLIB::haxePhoneLIB::staticUtils::ScreenSizeUtil_obj::getPixelHig();
	HX_STACK_LINE(50)
	this->_buf_wid = ::jmSubLibs::expLIB::haxePhoneLIB::staticUtils::ScreenSizeUtil_obj::getPixelWid();
	HX_STACK_LINE(41)
	this->_tHY = (int)32;
	HX_STACK_LINE(40)
	this->_tWX = (int)32;
	HX_STACK_LINE(39)
	this->_hig = (int)1;
	HX_STACK_LINE(38)
	this->_wid = (int)1;
	HX_STACK_LINE(210)
	super::__construct();
	HX_STACK_LINE(211)
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
		HX_STACK_FRAME("Main","resize",0x39257969,"Main.resize","Main.hx",73,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(73)
		if ((!(this->inited))){
			HX_STACK_LINE(73)
			this->init();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,resize,(void))

Void Main_obj::init_buf( ){
{
		HX_STACK_FRAME("Main","init_buf",0x9ffcb1f9,"Main.init_buf","Main.hx",79,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		::openfl::display::Bitmap _g = ::openfl::display::Bitmap_obj::__new(null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(80)
		this->_buf_vis = _g;
		HX_STACK_LINE(81)
		::openfl::display::BitmapData _g1 = ::openfl::display::BitmapData_obj::__new(this->_buf_wid,this->_buf_hig,true,(int)-7864065,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(81)
		this->_buf = _g1;
		HX_STACK_LINE(82)
		this->_buf_vis->set_bitmapData(this->_buf);
		HX_STACK_LINE(83)
		this->addChild(this->_buf_vis);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init_buf,(void))

Void Main_obj::init( ){
{
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",87,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		if ((this->inited)){
			HX_STACK_LINE(88)
			return null();
		}
		HX_STACK_LINE(89)
		this->inited = true;
		HX_STACK_LINE(94)
		::jmSubLibs::UNIT_TEST_obj::unitTest();
		HX_STACK_LINE(96)
		int _g = ::jmSubLibs::expLIB::haxePhoneLIB::staticUtils::ScreenSizeUtil_obj::getPixelWid();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(96)
		this->_sWID = _g;
		HX_STACK_LINE(97)
		int _g1 = ::jmSubLibs::expLIB::haxePhoneLIB::staticUtils::ScreenSizeUtil_obj::getPixelHig();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(97)
		this->_sHIG = _g1;
		HX_STACK_LINE(101)
		this->init_buf();
		HX_STACK_LINE(104)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR _g2 = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(104)
		this->_mgr = _g2;
		HX_STACK_LINE(115)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::debug::TileMapUpdateMGR_Debugger _g3 = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::debug::TileMapUpdateMGR_Debugger_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(115)
		this->_debug = _g3;
		HX_STACK_LINE(116)
		::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString _g4 = this->_mgr->getFrameTracker();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(116)
		this->_debug->linkSharedFrameTimeTracker(_g4);
		HX_STACK_LINE(121)
		this->_mgr->beginInit((int)1);
		HX_STACK_LINE(122)
		this->_mgr->setViewPortBuffer(this->_buf);
		HX_STACK_LINE(124)
		this->_mgr->setTileDims(this->_wid,this->_hig,this->_tWX,this->_tHY);
		HX_STACK_LINE(125)
		this->_mgr->addFN_GetGraphics(this->_debug->getTileBMFunc_dyn(),HX_CSTRING("_debug.getTileBMFunc"),HX_CSTRING("DEBUG_SYS"));
		HX_STACK_LINE(126)
		this->_mgr->addFN_GetTileFrameID(this->_debug->getTileFrameID_dyn(),HX_CSTRING("_debug.getTileFrameID"),HX_CSTRING("DEBUG_SYS"));
		HX_STACK_LINE(132)
		this->_mgr->endInit();
		HX_STACK_LINE(134)
		this->_mgr->setScreenWrapX(false);
		HX_STACK_LINE(135)
		this->_mgr->setScreenWrapY(false);
		HX_STACK_LINE(147)
		this->_mgr->setZoomFocalX(0.5,false);
		HX_STACK_LINE(148)
		this->_mgr->setZoomFocalY(0.5,false);
		HX_STACK_LINE(151)
		this->_mgr->setZoomSpeed(0.005);
		HX_STACK_LINE(153)
		this->_mgr->setZoom((int)1,false);
		HX_STACK_LINE(159)
		this->addEventListener(::openfl::events::Event_obj::ENTER_FRAME,this->onEnterFrame_dyn(),null(),null(),null());
		HX_STACK_LINE(162)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::helpers::TileMapActionsInputSurfaceLinker _g5 = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::helpers::TileMapActionsInputSurfaceLinker_obj::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(162)
		this->_tSurf = _g5;
		HX_STACK_LINE(163)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::TileMapActionsContainer _g6 = this->_mgr->getActionsContainer();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(163)
		this->_tSurf->linkActionsContainer(_g6);
		HX_STACK_LINE(164)
		int _g7 = this->_buf->get_width();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(164)
		int _g8 = this->_buf->get_height();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(164)
		this->_tSurf->setSize(_g7,_g8);
		HX_STACK_LINE(165)
		this->addChild(this->_tSurf);
		HX_STACK_LINE(169)
		::openfl::display::Sprite _g9 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(169)
		this->_s = _g9;
		HX_STACK_LINE(170)
		this->addChild(this->_s);
		HX_STACK_LINE(172)
		::com::kircode::debug::FPS_Mem _g10 = ::com::kircode::debug::FPS_Mem_obj::__new(null(),null(),null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(172)
		this->_fpsMem = _g10;
		HX_STACK_LINE(173)
		this->addChild(this->_fpsMem);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init,(void))

Void Main_obj::onEnterFrame( ::openfl::events::Event evt){
{
		HX_STACK_FRAME("Main","onEnterFrame",0x016e4b29,"Main.onEnterFrame","Main.hx",187,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_LINE(187)
		this->_mgr->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onEnterFrame,(void))

Void Main_obj::added( Dynamic e){
{
		HX_STACK_FRAME("Main","added",0x98771aeb,"Main.added","Main.hx",215,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(216)
		this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null());
		HX_STACK_LINE(217)
		this->get_stage()->addEventListener(::openfl::events::Event_obj::RESIZE,this->resize_dyn(),null(),null(),null());
		HX_STACK_LINE(221)
		this->init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,added,(void))

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",226,0x087e5c05)
		HX_STACK_LINE(228)
		::openfl::Lib_obj::get_current()->get_stage()->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(229)
		::openfl::Lib_obj::get_current()->get_stage()->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(230)
		::Main _g = ::Main_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(230)
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
	HX_MARK_MEMBER_NAME(_sWID,"_sWID");
	HX_MARK_MEMBER_NAME(_sHIG,"_sHIG");
	HX_MARK_MEMBER_NAME(_fpsMem,"_fpsMem");
	HX_MARK_MEMBER_NAME(_buf_wid,"_buf_wid");
	HX_MARK_MEMBER_NAME(_buf_hig,"_buf_hig");
	HX_MARK_MEMBER_NAME(_buf,"_buf");
	HX_MARK_MEMBER_NAME(_buf_vis,"_buf_vis");
	HX_MARK_MEMBER_NAME(_mgr,"_mgr");
	HX_MARK_MEMBER_NAME(_debug,"_debug");
	HX_MARK_MEMBER_NAME(_tSurf,"_tSurf");
	HX_MARK_MEMBER_NAME(_s,"_s");
	HX_MARK_MEMBER_NAME(_b,"_b");
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
	HX_VISIT_MEMBER_NAME(_sWID,"_sWID");
	HX_VISIT_MEMBER_NAME(_sHIG,"_sHIG");
	HX_VISIT_MEMBER_NAME(_fpsMem,"_fpsMem");
	HX_VISIT_MEMBER_NAME(_buf_wid,"_buf_wid");
	HX_VISIT_MEMBER_NAME(_buf_hig,"_buf_hig");
	HX_VISIT_MEMBER_NAME(_buf,"_buf");
	HX_VISIT_MEMBER_NAME(_buf_vis,"_buf_vis");
	HX_VISIT_MEMBER_NAME(_mgr,"_mgr");
	HX_VISIT_MEMBER_NAME(_debug,"_debug");
	HX_VISIT_MEMBER_NAME(_tSurf,"_tSurf");
	HX_VISIT_MEMBER_NAME(_s,"_s");
	HX_VISIT_MEMBER_NAME(_b,"_b");
	HX_VISIT_MEMBER_NAME(inited,"inited");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_s") ) { return _s; }
		if (HX_FIELD_EQ(inName,"_b") ) { return _b; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"_wid") ) { return _wid; }
		if (HX_FIELD_EQ(inName,"_hig") ) { return _hig; }
		if (HX_FIELD_EQ(inName,"_tWX") ) { return _tWX; }
		if (HX_FIELD_EQ(inName,"_tHY") ) { return _tHY; }
		if (HX_FIELD_EQ(inName,"_buf") ) { return _buf; }
		if (HX_FIELD_EQ(inName,"_mgr") ) { return _mgr; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_sWID") ) { return _sWID; }
		if (HX_FIELD_EQ(inName,"_sHIG") ) { return _sHIG; }
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_debug") ) { return _debug; }
		if (HX_FIELD_EQ(inName,"_tSurf") ) { return _tSurf; }
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_fpsMem") ) { return _fpsMem; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buf_wid") ) { return _buf_wid; }
		if (HX_FIELD_EQ(inName,"_buf_hig") ) { return _buf_hig; }
		if (HX_FIELD_EQ(inName,"_buf_vis") ) { return _buf_vis; }
		if (HX_FIELD_EQ(inName,"init_buf") ) { return init_buf_dyn(); }
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
		if (HX_FIELD_EQ(inName,"_b") ) { _b=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::helpers::data::structs::glue::BitMapBool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_wid") ) { _wid=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hig") ) { _hig=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tWX") ) { _tWX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tHY") ) { _tHY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buf") ) { _buf=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mgr") ) { _mgr=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_sWID") ) { _sWID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sHIG") ) { _sHIG=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_debug") ) { _debug=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::debug::TileMapUpdateMGR_Debugger >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tSurf") ) { _tSurf=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::helpers::TileMapActionsInputSurfaceLinker >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_fpsMem") ) { _fpsMem=inValue.Cast< ::com::kircode::debug::FPS_Mem >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buf_wid") ) { _buf_wid=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buf_hig") ) { _buf_hig=inValue.Cast< int >(); return inValue; }
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
	outFields->push(HX_CSTRING("_sWID"));
	outFields->push(HX_CSTRING("_sHIG"));
	outFields->push(HX_CSTRING("_fpsMem"));
	outFields->push(HX_CSTRING("_buf_wid"));
	outFields->push(HX_CSTRING("_buf_hig"));
	outFields->push(HX_CSTRING("_buf"));
	outFields->push(HX_CSTRING("_buf_vis"));
	outFields->push(HX_CSTRING("_mgr"));
	outFields->push(HX_CSTRING("_debug"));
	outFields->push(HX_CSTRING("_tSurf"));
	outFields->push(HX_CSTRING("_s"));
	outFields->push(HX_CSTRING("_b"));
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
	{hx::fsInt,(int)offsetof(Main_obj,_sWID),HX_CSTRING("_sWID")},
	{hx::fsInt,(int)offsetof(Main_obj,_sHIG),HX_CSTRING("_sHIG")},
	{hx::fsObject /*::com::kircode::debug::FPS_Mem*/ ,(int)offsetof(Main_obj,_fpsMem),HX_CSTRING("_fpsMem")},
	{hx::fsInt,(int)offsetof(Main_obj,_buf_wid),HX_CSTRING("_buf_wid")},
	{hx::fsInt,(int)offsetof(Main_obj,_buf_hig),HX_CSTRING("_buf_hig")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Main_obj,_buf),HX_CSTRING("_buf")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Main_obj,_buf_vis),HX_CSTRING("_buf_vis")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR*/ ,(int)offsetof(Main_obj,_mgr),HX_CSTRING("_mgr")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::debug::TileMapUpdateMGR_Debugger*/ ,(int)offsetof(Main_obj,_debug),HX_CSTRING("_debug")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::helpers::TileMapActionsInputSurfaceLinker*/ ,(int)offsetof(Main_obj,_tSurf),HX_CSTRING("_tSurf")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Main_obj,_s),HX_CSTRING("_s")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::helpers::data::structs::glue::BitMapBool*/ ,(int)offsetof(Main_obj,_b),HX_CSTRING("_b")},
	{hx::fsBool,(int)offsetof(Main_obj,inited),HX_CSTRING("inited")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_wid"),
	HX_CSTRING("_hig"),
	HX_CSTRING("_tWX"),
	HX_CSTRING("_tHY"),
	HX_CSTRING("_sWID"),
	HX_CSTRING("_sHIG"),
	HX_CSTRING("_fpsMem"),
	HX_CSTRING("_buf_wid"),
	HX_CSTRING("_buf_hig"),
	HX_CSTRING("_buf"),
	HX_CSTRING("_buf_vis"),
	HX_CSTRING("_mgr"),
	HX_CSTRING("_debug"),
	HX_CSTRING("_tSurf"),
	HX_CSTRING("_s"),
	HX_CSTRING("_b"),
	HX_CSTRING("inited"),
	HX_CSTRING("resize"),
	HX_CSTRING("init_buf"),
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

