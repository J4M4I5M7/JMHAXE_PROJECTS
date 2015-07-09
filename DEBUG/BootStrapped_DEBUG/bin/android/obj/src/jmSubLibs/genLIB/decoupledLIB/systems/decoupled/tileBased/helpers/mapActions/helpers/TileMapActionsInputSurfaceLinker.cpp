#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_jmSubLibs_EU
#include <jmSubLibs/EU.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapActions_TileMapActionsContainer
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/TileMapActionsContainer.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapActions_helpers_TileMapActionsInputSurfaceLinker
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/helpers/TileMapActionsInputSurfaceLinker.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TouchEvent
#include <openfl/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl_ui_Multitouch
#include <openfl/ui/Multitouch.h>
#endif
#ifndef INCLUDED_openfl_ui_MultitouchInputMode
#include <openfl/ui/MultitouchInputMode.h>
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

Void TileMapActionsInputSurfaceLinker_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker","new",0xa58a6284,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker.new","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/helpers/TileMapActionsInputSurfaceLinker.hx",31,0xabaf5c8f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(74)
	this->_isMouseDownTime = (int)0;
	HX_STACK_LINE(69)
	this->_onEnterFrameTimer = (int)0;
	HX_STACK_LINE(66)
	this->_isMouseDown = false;
	HX_STACK_LINE(45)
	this->_isMultiTouching = false;
	HX_STACK_LINE(38)
	this->_hasAct = false;
	HX_STACK_LINE(85)
	super::__construct();
	HX_STACK_LINE(88)
	this->_ppVec_len = (int)2;
	HX_STACK_LINE(89)
	Array< ::Dynamic > _g1;		HX_STACK_VAR(_g1,"_g1");
	struct _Function_1_1{
		inline static Array< ::Dynamic > Block( hx::ObjectPtr< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::helpers::TileMapActionsInputSurfaceLinker_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/helpers/TileMapActionsInputSurfaceLinker.hx",89,0xabaf5c8f)
			{
				HX_STACK_LINE(89)
				Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(89)
				Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new()->__SetSizeExact(__this->_ppVec_len);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(89)
				this1 = _g;
				HX_STACK_LINE(89)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(89)
	_g1 = _Function_1_1::Block(this);
	HX_STACK_LINE(89)
	this->_ppVec = _g1;
	HX_STACK_LINE(90)
	this->_ppVec_fui = (int)0;
	HX_STACK_LINE(94)
	this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null(),null(),null());
	HX_STACK_LINE(97)
	this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->onMouseMove_dyn(),null(),null(),null());
	HX_STACK_LINE(98)
	this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
	HX_STACK_LINE(99)
	this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_OUT,this->onMouseLeave_dyn(),null(),null(),null());
	HX_STACK_LINE(102)
	bool _g2 = ::openfl::ui::Multitouch_obj::get_supportsTouchEvents();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(102)
	this->_multiTouchSupported = _g2;
	HX_STACK_LINE(103)
	if ((this->_multiTouchSupported)){
		HX_STACK_LINE(109)
		::openfl::ui::Multitouch_obj::set_inputMode(::openfl::ui::MultitouchInputMode_obj::TOUCH_POINT);
		HX_STACK_LINE(112)
		this->addEventListener(::openfl::events::TouchEvent_obj::TOUCH_BEGIN,this->onTouch_BEGIN_dyn(),null(),null(),null());
		HX_STACK_LINE(113)
		this->addEventListener(::openfl::events::TouchEvent_obj::TOUCH_MOVE,this->onTouch_CONTINUE_dyn(),null(),null(),null());
		HX_STACK_LINE(114)
		this->addEventListener(::openfl::events::TouchEvent_obj::TOUCH_END,this->onTouch_END_dyn(),null(),null(),null());
	}
	HX_STACK_LINE(128)
	this->addEventListener(::openfl::events::Event_obj::ENTER_FRAME,this->onEnterFrame_dyn(),null(),null(),null());
}
;
	return null();
}

//TileMapActionsInputSurfaceLinker_obj::~TileMapActionsInputSurfaceLinker_obj() { }

Dynamic TileMapActionsInputSurfaceLinker_obj::__CreateEmpty() { return  new TileMapActionsInputSurfaceLinker_obj; }
hx::ObjectPtr< TileMapActionsInputSurfaceLinker_obj > TileMapActionsInputSurfaceLinker_obj::__new()
{  hx::ObjectPtr< TileMapActionsInputSurfaceLinker_obj > result = new TileMapActionsInputSurfaceLinker_obj();
	result->__construct();
	return result;}

Dynamic TileMapActionsInputSurfaceLinker_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileMapActionsInputSurfaceLinker_obj > result = new TileMapActionsInputSurfaceLinker_obj();
	result->__construct();
	return result;}

Void TileMapActionsInputSurfaceLinker_obj::linkActionsContainer( ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::TileMapActionsContainer inAct){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker","linkActionsContainer",0x415236fa,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker.linkActionsContainer","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/helpers/TileMapActionsInputSurfaceLinker.hx",77,0xabaf5c8f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inAct,"inAct")
		HX_STACK_LINE(78)
		if (((null() == inAct))){
			HX_STACK_LINE(78)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("Action Container Null!"));
		}
		HX_STACK_LINE(79)
		this->_act = inAct;
		HX_STACK_LINE(80)
		this->_hasAct = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapActionsInputSurfaceLinker_obj,linkActionsContainer,(void))

Void TileMapActionsInputSurfaceLinker_obj::onTouch_BEGIN( ::openfl::events::TouchEvent tev){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker","onTouch_BEGIN",0x3adf9e8e,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker.onTouch_BEGIN","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/helpers/TileMapActionsInputSurfaceLinker.hx",145,0xabaf5c8f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tev,"tev")
		HX_STACK_LINE(150)
		return null();
		HX_STACK_LINE(153)
		if (((this->_ppVec_fui >= (int)2))){
			HX_STACK_LINE(160)
			return null();
		}
		HX_STACK_LINE(165)
		bool doPinchReadBeforeExit = false;		HX_STACK_VAR(doPinchReadBeforeExit,"doPinchReadBeforeExit");
		HX_STACK_LINE(166)
		if (((this->_ppVec_fui == (int)1))){
			HX_STACK_LINE(169)
			doPinchReadBeforeExit = true;
		}
		HX_STACK_LINE(172)
		if (((this->_ppVec_fui >= this->_ppVec_len))){
			HX_STACK_LINE(175)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("_ppVec_fui >= _ppVec_len"));
		}
		HX_STACK_LINE(179)
		this->_ppVec->__unsafe_set(this->_ppVec_fui,tev);
		HX_STACK_LINE(180)
		(this->_ppVec_fui)++;
		HX_STACK_LINE(183)
		if ((doPinchReadBeforeExit)){
			HX_STACK_LINE(186)
			this->_isMultiTouching = true;
			HX_STACK_LINE(187)
			this->doPinchReadUsingPPVec();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapActionsInputSurfaceLinker_obj,onTouch_BEGIN,(void))

Void TileMapActionsInputSurfaceLinker_obj::doPinchReadUsingPPVec( ){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker","doPinchReadUsingPPVec",0x984b6199,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker.doPinchReadUsingPPVec","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/helpers/TileMapActionsInputSurfaceLinker.hx",199,0xabaf5c8f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(201)
		::openfl::events::TouchEvent _g = this->_ppVec->__unsafe_get((int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(201)
		if (((null() == _g))){
			HX_STACK_LINE(201)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("null _ppVec[0]"));
		}
		HX_STACK_LINE(202)
		::openfl::events::TouchEvent _g1 = this->_ppVec->__unsafe_get((int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(202)
		if (((null() == _g1))){
			HX_STACK_LINE(202)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("null _ppVec[1]"));
		}
		HX_STACK_LINE(203)
		if (((this->_ppVec_fui != (int)2))){
			HX_STACK_LINE(203)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("[_ppVec_fui != 2 ]"));
		}
		HX_STACK_LINE(206)
		if (((this->_isMultiTouching != true))){
			HX_STACK_LINE(206)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("[_isMultiTouching]"));
		}
		HX_STACK_LINE(211)
		int _g2 = ::Std_obj::_int(this->_ppVec->__unsafe_get((int)0)->__Field(HX_CSTRING("localX"),true));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(211)
		this->_ppX0 = _g2;
		HX_STACK_LINE(212)
		int _g3 = ::Std_obj::_int(this->_ppVec->__unsafe_get((int)0)->__Field(HX_CSTRING("localY"),true));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(212)
		this->_ppY0 = _g3;
		HX_STACK_LINE(215)
		int _g4 = ::Std_obj::_int(this->_ppVec->__unsafe_get((int)1)->__Field(HX_CSTRING("localX"),true));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(215)
		this->_ppX1 = _g4;
		HX_STACK_LINE(216)
		int _g5 = ::Std_obj::_int(this->_ppVec->__unsafe_get((int)1)->__Field(HX_CSTRING("localY"),true));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(216)
		this->_ppY1 = _g5;
		HX_STACK_LINE(219)
		this->_act->readPinch(this->_ppX0,this->_ppY0,this->_ppX1,this->_ppY1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileMapActionsInputSurfaceLinker_obj,doPinchReadUsingPPVec,(void))

Void TileMapActionsInputSurfaceLinker_obj::onTouch_CONTINUE( ::openfl::events::TouchEvent tev){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker","onTouch_CONTINUE",0x5ff1d502,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker.onTouch_CONTINUE","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/helpers/TileMapActionsInputSurfaceLinker.hx",223,0xabaf5c8f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tev,"tev")
		HX_STACK_LINE(229)
		return null();
		HX_STACK_LINE(232)
		if (((this->_ppVec_fui != (int)2))){
			HX_STACK_LINE(234)
			return null();
		}
		HX_STACK_LINE(239)
		bool found = false;		HX_STACK_VAR(found,"found");
		HX_STACK_LINE(240)
		{
			HX_STACK_LINE(240)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(240)
			Array< ::Dynamic > _g1 = this->_ppVec;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(240)
			while((true)){
				HX_STACK_LINE(240)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(240)
					break;
				}
				HX_STACK_LINE(240)
				::openfl::events::TouchEvent ent = _g1->__unsafe_get(_g);		HX_STACK_VAR(ent,"ent");
				HX_STACK_LINE(240)
				++(_g);
				HX_STACK_LINE(242)
				if (((ent->touchPointID == tev->touchPointID))){
					HX_STACK_LINE(244)
					found = true;
					HX_STACK_LINE(245)
					break;
				}
			}
		}
		HX_STACK_LINE(248)
		if (((false == found))){
			HX_STACK_LINE(248)
			return null();
		}
		HX_STACK_LINE(250)
		this->doPinchReadUsingPPVec();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapActionsInputSurfaceLinker_obj,onTouch_CONTINUE,(void))

Void TileMapActionsInputSurfaceLinker_obj::onTouch_END( ::openfl::events::TouchEvent tev){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker","onTouch_END",0x5ee18100,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker.onTouch_END","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/helpers/TileMapActionsInputSurfaceLinker.hx",257,0xabaf5c8f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tev,"tev")
		HX_STACK_LINE(263)
		return null();
		HX_STACK_LINE(270)
		bool found = false;		HX_STACK_VAR(found,"found");
		HX_STACK_LINE(271)
		{
			HX_STACK_LINE(271)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(271)
			Array< ::Dynamic > _g1 = this->_ppVec;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(271)
			while((true)){
				HX_STACK_LINE(271)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(271)
					break;
				}
				HX_STACK_LINE(271)
				::openfl::events::TouchEvent ent = _g1->__unsafe_get(_g);		HX_STACK_VAR(ent,"ent");
				HX_STACK_LINE(271)
				++(_g);
				HX_STACK_LINE(273)
				if (((ent->touchPointID == tev->touchPointID))){
					HX_STACK_LINE(275)
					found = true;
					HX_STACK_LINE(276)
					break;
				}
			}
		}
		HX_STACK_LINE(279)
		if (((false == found))){
			HX_STACK_LINE(279)
			return null();
		}
		HX_STACK_LINE(285)
		this->_ppVec_fui = (int)0;
		HX_STACK_LINE(286)
		this->_isMultiTouching = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapActionsInputSurfaceLinker_obj,onTouch_END,(void))

Void TileMapActionsInputSurfaceLinker_obj::onEnterFrame( ::openfl::events::Event evt){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker","onEnterFrame",0x6173af50,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker.onEnterFrame","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/helpers/TileMapActionsInputSurfaceLinker.hx",294,0xabaf5c8f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_LINE(298)
		if ((this->_isMouseDown)){
			HX_STACK_LINE(300)
			if (((this->_isMouseDownTime != this->_onEnterFrameTimer))){
				HX_STACK_LINE(304)
				this->onMouseDownCore(this->_mx,this->_my);
			}
		}
		HX_STACK_LINE(308)
		(this->_onEnterFrameTimer)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapActionsInputSurfaceLinker_obj,onEnterFrame,(void))

Void TileMapActionsInputSurfaceLinker_obj::onMouseMove( ::openfl::events::MouseEvent mev){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker","onMouseMove",0x3a03d4db,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker.onMouseMove","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/helpers/TileMapActionsInputSurfaceLinker.hx",315,0xabaf5c8f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mev,"mev")
		HX_STACK_LINE(317)
		if (((false == this->_isMouseDown))){
			HX_STACK_LINE(317)
			return null();
		}
		HX_STACK_LINE(319)
		int _g = ::Std_obj::_int(mev->localX);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(319)
		this->_mx = _g;
		HX_STACK_LINE(320)
		int _g1 = ::Std_obj::_int(mev->localY);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(320)
		this->_my = _g1;
		HX_STACK_LINE(322)
		if (((false == this->_isMultiTouching))){
			HX_STACK_LINE(324)
			this->_act->readTouch(this->_mx,this->_my);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapActionsInputSurfaceLinker_obj,onMouseMove,(void))

Void TileMapActionsInputSurfaceLinker_obj::onMouseUp( ::openfl::events::MouseEvent mev){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker","onMouseUp",0x209271a5,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker.onMouseUp","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/helpers/TileMapActionsInputSurfaceLinker.hx",331,0xabaf5c8f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mev,"mev")
		HX_STACK_LINE(331)
		this->_isMouseDown = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapActionsInputSurfaceLinker_obj,onMouseUp,(void))

Void TileMapActionsInputSurfaceLinker_obj::onMouseLeave( ::openfl::events::MouseEvent mev){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker","onMouseLeave",0xef43d3ed,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker.onMouseLeave","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/helpers/TileMapActionsInputSurfaceLinker.hx",336,0xabaf5c8f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mev,"mev")
		HX_STACK_LINE(336)
		this->onMouseUp(mev);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapActionsInputSurfaceLinker_obj,onMouseLeave,(void))

Void TileMapActionsInputSurfaceLinker_obj::onMouseDownCore( int mx,int my){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker","onMouseDownCore",0xc20d59ab,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker.onMouseDownCore","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/helpers/TileMapActionsInputSurfaceLinker.hx",340,0xabaf5c8f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mx,"mx")
		HX_STACK_ARG(my,"my")
		HX_STACK_LINE(341)
		if (((false == this->_hasAct))){
			HX_STACK_LINE(341)
			return null();
		}
		HX_STACK_LINE(344)
		if (((this->_isMouseDown != true))){
			HX_STACK_LINE(346)
			this->_isMouseDownTime = this->_onEnterFrameTimer;
			HX_STACK_LINE(347)
			this->_isMouseDown = true;
		}
		HX_STACK_LINE(351)
		this->_mx = mx;
		HX_STACK_LINE(352)
		this->_my = my;
		HX_STACK_LINE(354)
		if (((false == this->_isMultiTouching))){
			HX_STACK_LINE(356)
			this->_act->readTouch(this->_mx,this->_my);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapActionsInputSurfaceLinker_obj,onMouseDownCore,(void))

Void TileMapActionsInputSurfaceLinker_obj::onMouseDown( ::openfl::events::MouseEvent mev){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker","onMouseDown",0x3410ea2c,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker.onMouseDown","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/helpers/TileMapActionsInputSurfaceLinker.hx",362,0xabaf5c8f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mev,"mev")
		HX_STACK_LINE(371)
		if (((false == this->_hasAct))){
			HX_STACK_LINE(371)
			return null();
		}
		HX_STACK_LINE(374)
		int _g = ::Std_obj::_int(mev->localX);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(374)
		this->_mx = _g;
		HX_STACK_LINE(375)
		int _g1 = ::Std_obj::_int(mev->localY);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(375)
		this->_my = _g1;
		HX_STACK_LINE(376)
		this->onMouseDownCore(this->_mx,this->_my);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapActionsInputSurfaceLinker_obj,onMouseDown,(void))

Void TileMapActionsInputSurfaceLinker_obj::setSize( int inPixelWIDX,int inPixelHIGY){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker","setSize",0xc52c55a7,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker.setSize","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/helpers/TileMapActionsInputSurfaceLinker.hx",389,0xabaf5c8f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inPixelWIDX,"inPixelWIDX")
		HX_STACK_ARG(inPixelHIGY,"inPixelHIGY")
		HX_STACK_LINE(390)
		this->get_graphics()->clear();
		HX_STACK_LINE(391)
		this->get_graphics()->beginFill((int)0,(int)0);
		HX_STACK_LINE(392)
		this->get_graphics()->drawRect((int)0,(int)0,inPixelWIDX,inPixelHIGY);
		HX_STACK_LINE(393)
		this->get_graphics()->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapActionsInputSurfaceLinker_obj,setSize,(void))


TileMapActionsInputSurfaceLinker_obj::TileMapActionsInputSurfaceLinker_obj()
{
}

void TileMapActionsInputSurfaceLinker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileMapActionsInputSurfaceLinker);
	HX_MARK_MEMBER_NAME(_multiTouchSupported,"_multiTouchSupported");
	HX_MARK_MEMBER_NAME(_act,"_act");
	HX_MARK_MEMBER_NAME(_hasAct,"_hasAct");
	HX_MARK_MEMBER_NAME(_mx,"_mx");
	HX_MARK_MEMBER_NAME(_my,"_my");
	HX_MARK_MEMBER_NAME(_isMultiTouching,"_isMultiTouching");
	HX_MARK_MEMBER_NAME(_ppX0,"_ppX0");
	HX_MARK_MEMBER_NAME(_ppY0,"_ppY0");
	HX_MARK_MEMBER_NAME(_ppX1,"_ppX1");
	HX_MARK_MEMBER_NAME(_ppY1,"_ppY1");
	HX_MARK_MEMBER_NAME(_ppVec,"_ppVec");
	HX_MARK_MEMBER_NAME(_ppVec_fui,"_ppVec_fui");
	HX_MARK_MEMBER_NAME(_ppVec_len,"_ppVec_len");
	HX_MARK_MEMBER_NAME(_isMouseDown,"_isMouseDown");
	HX_MARK_MEMBER_NAME(_onEnterFrameTimer,"_onEnterFrameTimer");
	HX_MARK_MEMBER_NAME(_isMouseDownTime,"_isMouseDownTime");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TileMapActionsInputSurfaceLinker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_multiTouchSupported,"_multiTouchSupported");
	HX_VISIT_MEMBER_NAME(_act,"_act");
	HX_VISIT_MEMBER_NAME(_hasAct,"_hasAct");
	HX_VISIT_MEMBER_NAME(_mx,"_mx");
	HX_VISIT_MEMBER_NAME(_my,"_my");
	HX_VISIT_MEMBER_NAME(_isMultiTouching,"_isMultiTouching");
	HX_VISIT_MEMBER_NAME(_ppX0,"_ppX0");
	HX_VISIT_MEMBER_NAME(_ppY0,"_ppY0");
	HX_VISIT_MEMBER_NAME(_ppX1,"_ppX1");
	HX_VISIT_MEMBER_NAME(_ppY1,"_ppY1");
	HX_VISIT_MEMBER_NAME(_ppVec,"_ppVec");
	HX_VISIT_MEMBER_NAME(_ppVec_fui,"_ppVec_fui");
	HX_VISIT_MEMBER_NAME(_ppVec_len,"_ppVec_len");
	HX_VISIT_MEMBER_NAME(_isMouseDown,"_isMouseDown");
	HX_VISIT_MEMBER_NAME(_onEnterFrameTimer,"_onEnterFrameTimer");
	HX_VISIT_MEMBER_NAME(_isMouseDownTime,"_isMouseDownTime");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TileMapActionsInputSurfaceLinker_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_mx") ) { return _mx; }
		if (HX_FIELD_EQ(inName,"_my") ) { return _my; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_act") ) { return _act; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_ppX0") ) { return _ppX0; }
		if (HX_FIELD_EQ(inName,"_ppY0") ) { return _ppY0; }
		if (HX_FIELD_EQ(inName,"_ppX1") ) { return _ppX1; }
		if (HX_FIELD_EQ(inName,"_ppY1") ) { return _ppY1; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_ppVec") ) { return _ppVec; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_hasAct") ) { return _hasAct; }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_ppVec_fui") ) { return _ppVec_fui; }
		if (HX_FIELD_EQ(inName,"_ppVec_len") ) { return _ppVec_len; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onTouch_END") ) { return onTouch_END_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_isMouseDown") ) { return _isMouseDown; }
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseLeave") ) { return onMouseLeave_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onTouch_BEGIN") ) { return onTouch_BEGIN_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onMouseDownCore") ) { return onMouseDownCore_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_isMultiTouching") ) { return _isMultiTouching; }
		if (HX_FIELD_EQ(inName,"_isMouseDownTime") ) { return _isMouseDownTime; }
		if (HX_FIELD_EQ(inName,"onTouch_CONTINUE") ) { return onTouch_CONTINUE_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_onEnterFrameTimer") ) { return _onEnterFrameTimer; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_multiTouchSupported") ) { return _multiTouchSupported; }
		if (HX_FIELD_EQ(inName,"linkActionsContainer") ) { return linkActionsContainer_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"doPinchReadUsingPPVec") ) { return doPinchReadUsingPPVec_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileMapActionsInputSurfaceLinker_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_mx") ) { _mx=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_my") ) { _my=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_act") ) { _act=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::TileMapActionsContainer >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_ppX0") ) { _ppX0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ppY0") ) { _ppY0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ppX1") ) { _ppX1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ppY1") ) { _ppY1=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_ppVec") ) { _ppVec=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_hasAct") ) { _hasAct=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_ppVec_fui") ) { _ppVec_fui=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ppVec_len") ) { _ppVec_len=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_isMouseDown") ) { _isMouseDown=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_isMultiTouching") ) { _isMultiTouching=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isMouseDownTime") ) { _isMouseDownTime=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_onEnterFrameTimer") ) { _onEnterFrameTimer=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_multiTouchSupported") ) { _multiTouchSupported=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileMapActionsInputSurfaceLinker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_multiTouchSupported"));
	outFields->push(HX_CSTRING("_act"));
	outFields->push(HX_CSTRING("_hasAct"));
	outFields->push(HX_CSTRING("_mx"));
	outFields->push(HX_CSTRING("_my"));
	outFields->push(HX_CSTRING("_isMultiTouching"));
	outFields->push(HX_CSTRING("_ppX0"));
	outFields->push(HX_CSTRING("_ppY0"));
	outFields->push(HX_CSTRING("_ppX1"));
	outFields->push(HX_CSTRING("_ppY1"));
	outFields->push(HX_CSTRING("_ppVec"));
	outFields->push(HX_CSTRING("_ppVec_fui"));
	outFields->push(HX_CSTRING("_ppVec_len"));
	outFields->push(HX_CSTRING("_isMouseDown"));
	outFields->push(HX_CSTRING("_onEnterFrameTimer"));
	outFields->push(HX_CSTRING("_isMouseDownTime"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(TileMapActionsInputSurfaceLinker_obj,_multiTouchSupported),HX_CSTRING("_multiTouchSupported")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::TileMapActionsContainer*/ ,(int)offsetof(TileMapActionsInputSurfaceLinker_obj,_act),HX_CSTRING("_act")},
	{hx::fsBool,(int)offsetof(TileMapActionsInputSurfaceLinker_obj,_hasAct),HX_CSTRING("_hasAct")},
	{hx::fsInt,(int)offsetof(TileMapActionsInputSurfaceLinker_obj,_mx),HX_CSTRING("_mx")},
	{hx::fsInt,(int)offsetof(TileMapActionsInputSurfaceLinker_obj,_my),HX_CSTRING("_my")},
	{hx::fsBool,(int)offsetof(TileMapActionsInputSurfaceLinker_obj,_isMultiTouching),HX_CSTRING("_isMultiTouching")},
	{hx::fsInt,(int)offsetof(TileMapActionsInputSurfaceLinker_obj,_ppX0),HX_CSTRING("_ppX0")},
	{hx::fsInt,(int)offsetof(TileMapActionsInputSurfaceLinker_obj,_ppY0),HX_CSTRING("_ppY0")},
	{hx::fsInt,(int)offsetof(TileMapActionsInputSurfaceLinker_obj,_ppX1),HX_CSTRING("_ppX1")},
	{hx::fsInt,(int)offsetof(TileMapActionsInputSurfaceLinker_obj,_ppY1),HX_CSTRING("_ppY1")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TileMapActionsInputSurfaceLinker_obj,_ppVec),HX_CSTRING("_ppVec")},
	{hx::fsInt,(int)offsetof(TileMapActionsInputSurfaceLinker_obj,_ppVec_fui),HX_CSTRING("_ppVec_fui")},
	{hx::fsInt,(int)offsetof(TileMapActionsInputSurfaceLinker_obj,_ppVec_len),HX_CSTRING("_ppVec_len")},
	{hx::fsBool,(int)offsetof(TileMapActionsInputSurfaceLinker_obj,_isMouseDown),HX_CSTRING("_isMouseDown")},
	{hx::fsInt,(int)offsetof(TileMapActionsInputSurfaceLinker_obj,_onEnterFrameTimer),HX_CSTRING("_onEnterFrameTimer")},
	{hx::fsInt,(int)offsetof(TileMapActionsInputSurfaceLinker_obj,_isMouseDownTime),HX_CSTRING("_isMouseDownTime")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_multiTouchSupported"),
	HX_CSTRING("_act"),
	HX_CSTRING("_hasAct"),
	HX_CSTRING("_mx"),
	HX_CSTRING("_my"),
	HX_CSTRING("_isMultiTouching"),
	HX_CSTRING("_ppX0"),
	HX_CSTRING("_ppY0"),
	HX_CSTRING("_ppX1"),
	HX_CSTRING("_ppY1"),
	HX_CSTRING("_ppVec"),
	HX_CSTRING("_ppVec_fui"),
	HX_CSTRING("_ppVec_len"),
	HX_CSTRING("_isMouseDown"),
	HX_CSTRING("_onEnterFrameTimer"),
	HX_CSTRING("_isMouseDownTime"),
	HX_CSTRING("linkActionsContainer"),
	HX_CSTRING("onTouch_BEGIN"),
	HX_CSTRING("doPinchReadUsingPPVec"),
	HX_CSTRING("onTouch_CONTINUE"),
	HX_CSTRING("onTouch_END"),
	HX_CSTRING("onEnterFrame"),
	HX_CSTRING("onMouseMove"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseLeave"),
	HX_CSTRING("onMouseDownCore"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("setSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileMapActionsInputSurfaceLinker_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileMapActionsInputSurfaceLinker_obj::__mClass,"__mClass");
};

#endif

Class TileMapActionsInputSurfaceLinker_obj::__mClass;

void TileMapActionsInputSurfaceLinker_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.helpers.TileMapActionsInputSurfaceLinker"), hx::TCanCast< TileMapActionsInputSurfaceLinker_obj> ,sStaticFields,sMemberFields,
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

void TileMapActionsInputSurfaceLinker_obj::__boot()
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
