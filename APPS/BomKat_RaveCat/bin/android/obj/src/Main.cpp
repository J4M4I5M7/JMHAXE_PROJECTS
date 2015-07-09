#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_spriteBased_doll_ChibiSpace
#include <jmSubLibs/genLIB/decoupledLIB/systems/spriteBased/doll/ChibiSpace.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_spriteBased_doll_components_BMDollSprite
#include <jmSubLibs/genLIB/decoupledLIB/systems/spriteBased/doll/components/BMDollSprite.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
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

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",289,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(290)
	super::__construct();
	HX_STACK_LINE(291)
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
		HX_STACK_FRAME("Main","resize",0x39257969,"Main.resize","Main.hx",60,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(60)
		if ((!(this->inited))){
			HX_STACK_LINE(60)
			this->init();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,resize,(void))

::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace Main_obj::bomKatMaker( ::openfl::display::BitmapData b0,::openfl::display::BitmapData b1,::openfl::display::BitmapData e0,::openfl::display::BitmapData e1){
	HX_STACK_FRAME("Main","bomKatMaker",0x0058a651,"Main.bomKatMaker","Main.hx",74,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b0,"b0")
	HX_STACK_ARG(b1,"b1")
	HX_STACK_ARG(e0,"e0")
	HX_STACK_ARG(e1,"e1")
	HX_STACK_LINE(75)
	::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite body = ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite_obj::__new();		HX_STACK_VAR(body,"body");
	HX_STACK_LINE(76)
	::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite eyes = ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite_obj::__new();		HX_STACK_VAR(eyes,"eyes");
	HX_STACK_LINE(79)
	Array< ::Dynamic > ba;		HX_STACK_VAR(ba,"ba");
	struct _Function_1_1{
		inline static Array< ::Dynamic > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",79,0x087e5c05)
			{
				HX_STACK_LINE(79)
				Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(79)
				Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new()->__SetSizeExact((int)2);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(79)
				this1 = _g;
				HX_STACK_LINE(79)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(79)
	ba = _Function_1_1::Block();
	HX_STACK_LINE(80)
	ba->__unsafe_set((int)0,b0);
	HX_STACK_LINE(81)
	ba->__unsafe_set((int)1,b1);
	HX_STACK_LINE(84)
	Array< ::Dynamic > ea;		HX_STACK_VAR(ea,"ea");
	struct _Function_1_2{
		inline static Array< ::Dynamic > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",84,0x087e5c05)
			{
				HX_STACK_LINE(84)
				Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(84)
				Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new()->__SetSizeExact((int)2);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(84)
				this1 = _g1;
				HX_STACK_LINE(84)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(84)
	ea = _Function_1_2::Block();
	HX_STACK_LINE(85)
	ea->__unsafe_set((int)0,e0);
	HX_STACK_LINE(86)
	ea->__unsafe_set((int)1,e1);
	HX_STACK_LINE(89)
	body->loadFrames(ba,false);
	HX_STACK_LINE(90)
	eyes->loadFrames(ea,false);
	HX_STACK_LINE(95)
	eyes->addAnim(HX_CSTRING("IDLE"),Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)1),true);
	HX_STACK_LINE(96)
	eyes->addAnim(HX_CSTRING("TRIP"),Array_obj< int >::__new().Add((int)1),true);
	HX_STACK_LINE(99)
	body->addAnim(HX_CSTRING("IDLE"),Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1),true);
	HX_STACK_LINE(101)
	body->addAnim(HX_CSTRING("TRIP"),Array_obj< int >::__new().Add((int)0).Add((int)1),true);
	HX_STACK_LINE(104)
	::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace op;		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(105)
	::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace _g2 = ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace_obj::__new((int)400,(int)400);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(105)
	op = _g2;
	HX_STACK_LINE(106)
	op->add(body);
	HX_STACK_LINE(107)
	op->add(eyes);
	HX_STACK_LINE(110)
	op->heldFrames = (int)2;
	HX_STACK_LINE(113)
	eyes->playAnim(HX_CSTRING("IDLE"));
	HX_STACK_LINE(114)
	body->playAnim(HX_CSTRING("IDLE"));
	HX_STACK_LINE(117)
	op->setClickFN(this->onChibiClickFN_dyn());
	HX_STACK_LINE(120)
	return op;
}


HX_DEFINE_DYNAMIC_FUNC4(Main_obj,bomKatMaker,return )

Void Main_obj::init( ){
{
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",124,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(125)
		if ((this->inited)){
			HX_STACK_LINE(125)
			return null();
		}
		HX_STACK_LINE(126)
		this->inited = true;
		HX_STACK_LINE(130)
		Array< ::Dynamic > _g1;		HX_STACK_VAR(_g1,"_g1");
		struct _Function_1_1{
			inline static Array< ::Dynamic > Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",130,0x087e5c05)
				{
					HX_STACK_LINE(130)
					Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(130)
					Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new()->__SetSizeExact((int)7);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(130)
					this1 = _g;
					HX_STACK_LINE(130)
					return this1;
				}
				return null();
			}
		};
		HX_STACK_LINE(130)
		_g1 = _Function_1_1::Block();
		HX_STACK_LINE(130)
		this->_cVec = _g1;
		HX_STACK_LINE(132)
		::openfl::display::BitmapData _g2 = this->gBM(HX_CSTRING("img/FOUR/400X400_FOUR_BASE_SOLID.png"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(133)
		::openfl::display::BitmapData _g3 = this->gBM(HX_CSTRING("img/FOUR/400X400_FOUR_BASE_GLOW.png"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(134)
		::openfl::display::BitmapData _g4 = this->gBM(HX_CSTRING("img/FOUR/400X400_FOUR_EYES_OPEN.png"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(135)
		::openfl::display::BitmapData _g5 = this->gBM(HX_CSTRING("img/FOUR/400X400_FOUR_EYES_CLOSED.png"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(132)
		::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace _g6 = this->bomKatMaker(_g2,_g3,_g4,_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(132)
		this->_chibi_FOUR = _g6;
		HX_STACK_LINE(139)
		::openfl::display::BitmapData _g7 = this->gBM(HX_CSTRING("img/HORZ/400X400_HORZ_BASE_SOLID.png"));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(140)
		::openfl::display::BitmapData _g8 = this->gBM(HX_CSTRING("img/HORZ/400X400_HORZ_BASE_GLOW.png"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(141)
		::openfl::display::BitmapData _g9 = this->gBM(HX_CSTRING("img/HORZ/400X400_HORZ_EYES_OPEN.png"));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(142)
		::openfl::display::BitmapData _g10 = this->gBM(HX_CSTRING("img/HORZ/400X400_HORZ_EYES_CLOSED.png"));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(139)
		::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace _g11 = this->bomKatMaker(_g7,_g8,_g9,_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(139)
		this->_chibi_HORZ = _g11;
		HX_STACK_LINE(144)
		::openfl::display::BitmapData _g12 = this->gBM(HX_CSTRING("img/LEFT/400X400_LEFT_BASE_SOLID.png"));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(145)
		::openfl::display::BitmapData _g13 = this->gBM(HX_CSTRING("img/LEFT/400X400_LEFT_BASE_GLOW.png"));		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(146)
		::openfl::display::BitmapData _g14 = this->gBM(HX_CSTRING("img/LEFT/400X400_LEFT_EYES_OPEN.png"));		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(147)
		::openfl::display::BitmapData _g15 = this->gBM(HX_CSTRING("img/LEFT/400X400_LEFT_EYES_CLOSED.png"));		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(144)
		::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace _g16 = this->bomKatMaker(_g12,_g13,_g14,_g15);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(144)
		this->_chibi_LEFT = _g16;
		HX_STACK_LINE(149)
		::openfl::display::BitmapData _g17 = this->gBM(HX_CSTRING("img/RGHT/400X400_RGHT_BASE_SOLID.png"));		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(150)
		::openfl::display::BitmapData _g18 = this->gBM(HX_CSTRING("img/RGHT/400X400_RGHT_BASE_GLOW.png"));		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(151)
		::openfl::display::BitmapData _g19 = this->gBM(HX_CSTRING("img/RGHT/400X400_RGHT_EYES_OPEN.png"));		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(152)
		::openfl::display::BitmapData _g20 = this->gBM(HX_CSTRING("img/RGHT/400X400_RGHT_EYES_CLOSED.png"));		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(149)
		::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace _g21 = this->bomKatMaker(_g17,_g18,_g19,_g20);		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(149)
		this->_chibi_RGHT = _g21;
		HX_STACK_LINE(157)
		::openfl::display::BitmapData _g22 = this->gBM(HX_CSTRING("img/VERT/400X400_VERT_BASE_SOLID.png"));		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(158)
		::openfl::display::BitmapData _g23 = this->gBM(HX_CSTRING("img/VERT/400X400_VERT_BASE_GLOW.png"));		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(159)
		::openfl::display::BitmapData _g24 = this->gBM(HX_CSTRING("img/VERT/400X400_VERT_EYES_OPEN.png"));		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(160)
		::openfl::display::BitmapData _g25 = this->gBM(HX_CSTRING("img/VERT/400X400_VERT_EYES_CLOSED.png"));		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(157)
		::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace _g26 = this->bomKatMaker(_g22,_g23,_g24,_g25);		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(157)
		this->_chibi_VERT = _g26;
		HX_STACK_LINE(162)
		::openfl::display::BitmapData _g27 = this->gBM(HX_CSTRING("img/ABOV/400X400_ABOV_BASE_SOLID.png"));		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(163)
		::openfl::display::BitmapData _g28 = this->gBM(HX_CSTRING("img/ABOV/400X400_ABOV_BASE_GLOW.png"));		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(164)
		::openfl::display::BitmapData _g29 = this->gBM(HX_CSTRING("img/ABOV/400X400_ABOV_EYES_OPEN.png"));		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(165)
		::openfl::display::BitmapData _g30 = this->gBM(HX_CSTRING("img/ABOV/400X400_ABOV_EYES_CLOSED.png"));		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(162)
		::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace _g31 = this->bomKatMaker(_g27,_g28,_g29,_g30);		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(162)
		this->_chibi_ABOV = _g31;
		HX_STACK_LINE(167)
		::openfl::display::BitmapData _g32 = this->gBM(HX_CSTRING("img/DOWN/400X400_DOWN_BASE_SOLID.png"));		HX_STACK_VAR(_g32,"_g32");
		HX_STACK_LINE(168)
		::openfl::display::BitmapData _g33 = this->gBM(HX_CSTRING("img/DOWN/400X400_DOWN_BASE_GLOW.png"));		HX_STACK_VAR(_g33,"_g33");
		HX_STACK_LINE(169)
		::openfl::display::BitmapData _g34 = this->gBM(HX_CSTRING("img/DOWN/400X400_DOWN_EYES_OPEN.png"));		HX_STACK_VAR(_g34,"_g34");
		HX_STACK_LINE(170)
		::openfl::display::BitmapData _g35 = this->gBM(HX_CSTRING("img/DOWN/400X400_DOWN_EYES_CLOSED.png"));		HX_STACK_VAR(_g35,"_g35");
		HX_STACK_LINE(167)
		::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace _g36 = this->bomKatMaker(_g32,_g33,_g34,_g35);		HX_STACK_VAR(_g36,"_g36");
		HX_STACK_LINE(167)
		this->_chibi_DOWN = _g36;
		HX_STACK_LINE(172)
		this->_cVec->__unsafe_set((int)0,this->_chibi_FOUR);
		HX_STACK_LINE(174)
		this->_cVec->__unsafe_set((int)1,this->_chibi_HORZ);
		HX_STACK_LINE(175)
		this->_cVec->__unsafe_set((int)2,this->_chibi_LEFT);
		HX_STACK_LINE(176)
		this->_cVec->__unsafe_set((int)3,this->_chibi_RGHT);
		HX_STACK_LINE(178)
		this->_cVec->__unsafe_set((int)4,this->_chibi_VERT);
		HX_STACK_LINE(179)
		this->_cVec->__unsafe_set((int)5,this->_chibi_ABOV);
		HX_STACK_LINE(180)
		this->_cVec->__unsafe_set((int)6,this->_chibi_DOWN);
		HX_STACK_LINE(184)
		this->_cPTR = (int)0;
		HX_STACK_LINE(185)
		::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace _g37 = this->_cVec->__unsafe_get(this->_cPTR);		HX_STACK_VAR(_g37,"_g37");
		HX_STACK_LINE(185)
		this->addChild(_g37);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init,(void))

Void Main_obj::onChibiClickFN( ){
{
		HX_STACK_FRAME("Main","onChibiClickFN",0x5c2c2219,"Main.onChibiClickFN","Main.hx",218,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(222)
		::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace _g = this->_cVec->__unsafe_get(this->_cPTR);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(222)
		this->removeChild(_g);
		HX_STACK_LINE(225)
		(this->_cPTR)++;
		HX_STACK_LINE(226)
		if (((this->_cPTR >= this->_cVec->length))){
			HX_STACK_LINE(228)
			this->_cPTR = (int)0;
		}
		HX_STACK_LINE(232)
		::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace _g1 = this->_cVec->__unsafe_get(this->_cPTR);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(232)
		this->addChild(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,onChibiClickFN,(void))

::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite Main_obj::makeBody( ){
	HX_STACK_FRAME("Main","makeBody",0x7ec21665,"Main.makeBody","Main.hx",238,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_LINE(239)
	Array< ::Dynamic > ba;		HX_STACK_VAR(ba,"ba");
	struct _Function_1_1{
		inline static Array< ::Dynamic > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",239,0x087e5c05)
			{
				HX_STACK_LINE(239)
				Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(239)
				Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new()->__SetSizeExact((int)2);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(239)
				this1 = _g;
				HX_STACK_LINE(239)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(239)
	ba = _Function_1_1::Block();
	HX_STACK_LINE(240)
	{
		HX_STACK_LINE(240)
		::openfl::display::BitmapData val = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("img/BODY_01.PNG"),null());		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(240)
		ba->__unsafe_set((int)0,val);
	}
	HX_STACK_LINE(241)
	{
		HX_STACK_LINE(241)
		::openfl::display::BitmapData val = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("img/BODY_02.PNG"),null());		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(241)
		ba->__unsafe_set((int)1,val);
	}
	HX_STACK_LINE(242)
	::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite op = ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite_obj::__new();		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(243)
	op->loadFrames(ba,true);
	HX_STACK_LINE(244)
	return op;
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,makeBody,return )

::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite Main_obj::makeEyes( ){
	HX_STACK_FRAME("Main","makeEyes",0x80c551a5,"Main.makeEyes","Main.hx",249,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_LINE(250)
	Array< ::Dynamic > ba;		HX_STACK_VAR(ba,"ba");
	struct _Function_1_1{
		inline static Array< ::Dynamic > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",250,0x087e5c05)
			{
				HX_STACK_LINE(250)
				Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(250)
				Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new()->__SetSizeExact((int)5);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(250)
				this1 = _g;
				HX_STACK_LINE(250)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(250)
	ba = _Function_1_1::Block();
	HX_STACK_LINE(251)
	{
		HX_STACK_LINE(251)
		::openfl::display::BitmapData val = this->gBM(HX_CSTRING("img/IDLE_EYES_01.PNG"));		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(251)
		ba->__unsafe_set((int)0,val);
	}
	HX_STACK_LINE(252)
	{
		HX_STACK_LINE(252)
		::openfl::display::BitmapData val = this->gBM(HX_CSTRING("img/IDLE_EYES_02.PNG"));		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(252)
		ba->__unsafe_set((int)1,val);
	}
	HX_STACK_LINE(253)
	{
		HX_STACK_LINE(253)
		::openfl::display::BitmapData val = this->gBM(HX_CSTRING("img/BLINK_EYES_01.PNG"));		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(253)
		ba->__unsafe_set((int)2,val);
	}
	HX_STACK_LINE(254)
	{
		HX_STACK_LINE(254)
		::openfl::display::BitmapData val = this->gBM(HX_CSTRING("img/BLINK_EYES_02.PNG"));		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(254)
		ba->__unsafe_set((int)3,val);
	}
	HX_STACK_LINE(255)
	{
		HX_STACK_LINE(255)
		::openfl::display::BitmapData val = this->gBM(HX_CSTRING("img/BLINK_EYES_03.PNG"));		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(255)
		ba->__unsafe_set((int)4,val);
	}
	HX_STACK_LINE(256)
	::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite op = ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite_obj::__new();		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(257)
	op->loadFrames(ba,true);
	HX_STACK_LINE(258)
	return op;
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,makeEyes,return )

::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite Main_obj::MakeMouth( ){
	HX_STACK_FRAME("Main","MakeMouth",0x6259a5c4,"Main.MakeMouth","Main.hx",263,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_LINE(264)
	Array< ::Dynamic > ba;		HX_STACK_VAR(ba,"ba");
	struct _Function_1_1{
		inline static Array< ::Dynamic > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",264,0x087e5c05)
			{
				HX_STACK_LINE(264)
				Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(264)
				Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new()->__SetSizeExact((int)3);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(264)
				this1 = _g;
				HX_STACK_LINE(264)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(264)
	ba = _Function_1_1::Block();
	HX_STACK_LINE(265)
	{
		HX_STACK_LINE(265)
		::openfl::display::BitmapData val = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("img/MOUTH_01.PNG"),null());		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(265)
		ba->__unsafe_set((int)0,val);
	}
	HX_STACK_LINE(266)
	{
		HX_STACK_LINE(266)
		::openfl::display::BitmapData val = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("img/MOUTH_02.PNG"),null());		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(266)
		ba->__unsafe_set((int)1,val);
	}
	HX_STACK_LINE(267)
	{
		HX_STACK_LINE(267)
		::openfl::display::BitmapData val = ::openfl::Assets_obj::getBitmapData(HX_CSTRING("img/MOUTH_03.PNG"),null());		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(267)
		ba->__unsafe_set((int)2,val);
	}
	HX_STACK_LINE(268)
	::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite op = ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite_obj::__new();		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(269)
	op->loadFrames(ba,true);
	HX_STACK_LINE(270)
	return op;
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,MakeMouth,return )

::openfl::display::BitmapData Main_obj::gBM( ::String inName){
	HX_STACK_FRAME("Main","gBM",0x6611375d,"Main.gBM","Main.hx",275,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inName,"inName")
	HX_STACK_LINE(284)
	::openfl::display::BitmapData op = ::openfl::Assets_obj::getBitmapData(inName,null());		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(285)
	return op;
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,gBM,return )

Void Main_obj::added( Dynamic e){
{
		HX_STACK_FRAME("Main","added",0x98771aeb,"Main.added","Main.hx",295,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(296)
		this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null());
		HX_STACK_LINE(297)
		this->get_stage()->addEventListener(::openfl::events::Event_obj::RESIZE,this->resize_dyn(),null(),null(),null());
		HX_STACK_LINE(301)
		this->init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,added,(void))

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",306,0x087e5c05)
		HX_STACK_LINE(308)
		::openfl::Lib_obj::get_current()->get_stage()->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(309)
		::openfl::Lib_obj::get_current()->get_stage()->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(310)
		::Main _g = ::Main_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(310)
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
	HX_MARK_MEMBER_NAME(_cVec,"_cVec");
	HX_MARK_MEMBER_NAME(_cPTR,"_cPTR");
	HX_MARK_MEMBER_NAME(_chibi_FOUR,"_chibi_FOUR");
	HX_MARK_MEMBER_NAME(_chibi_HORZ,"_chibi_HORZ");
	HX_MARK_MEMBER_NAME(_chibi_LEFT,"_chibi_LEFT");
	HX_MARK_MEMBER_NAME(_chibi_RGHT,"_chibi_RGHT");
	HX_MARK_MEMBER_NAME(_chibi_VERT,"_chibi_VERT");
	HX_MARK_MEMBER_NAME(_chibi_ABOV,"_chibi_ABOV");
	HX_MARK_MEMBER_NAME(_chibi_DOWN,"_chibi_DOWN");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(_cVec,"_cVec");
	HX_VISIT_MEMBER_NAME(_cPTR,"_cPTR");
	HX_VISIT_MEMBER_NAME(_chibi_FOUR,"_chibi_FOUR");
	HX_VISIT_MEMBER_NAME(_chibi_HORZ,"_chibi_HORZ");
	HX_VISIT_MEMBER_NAME(_chibi_LEFT,"_chibi_LEFT");
	HX_VISIT_MEMBER_NAME(_chibi_RGHT,"_chibi_RGHT");
	HX_VISIT_MEMBER_NAME(_chibi_VERT,"_chibi_VERT");
	HX_VISIT_MEMBER_NAME(_chibi_ABOV,"_chibi_ABOV");
	HX_VISIT_MEMBER_NAME(_chibi_DOWN,"_chibi_DOWN");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gBM") ) { return gBM_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_cVec") ) { return _cVec; }
		if (HX_FIELD_EQ(inName,"_cPTR") ) { return _cPTR; }
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"makeBody") ) { return makeBody_dyn(); }
		if (HX_FIELD_EQ(inName,"makeEyes") ) { return makeEyes_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"MakeMouth") ) { return MakeMouth_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_chibi_FOUR") ) { return _chibi_FOUR; }
		if (HX_FIELD_EQ(inName,"_chibi_HORZ") ) { return _chibi_HORZ; }
		if (HX_FIELD_EQ(inName,"_chibi_LEFT") ) { return _chibi_LEFT; }
		if (HX_FIELD_EQ(inName,"_chibi_RGHT") ) { return _chibi_RGHT; }
		if (HX_FIELD_EQ(inName,"_chibi_VERT") ) { return _chibi_VERT; }
		if (HX_FIELD_EQ(inName,"_chibi_ABOV") ) { return _chibi_ABOV; }
		if (HX_FIELD_EQ(inName,"_chibi_DOWN") ) { return _chibi_DOWN; }
		if (HX_FIELD_EQ(inName,"bomKatMaker") ) { return bomKatMaker_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onChibiClickFN") ) { return onChibiClickFN_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_cVec") ) { _cVec=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cPTR") ) { _cPTR=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_chibi_FOUR") ) { _chibi_FOUR=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_chibi_HORZ") ) { _chibi_HORZ=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_chibi_LEFT") ) { _chibi_LEFT=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_chibi_RGHT") ) { _chibi_RGHT=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_chibi_VERT") ) { _chibi_VERT=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_chibi_ABOV") ) { _chibi_ABOV=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_chibi_DOWN") ) { _chibi_DOWN=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("inited"));
	outFields->push(HX_CSTRING("_cVec"));
	outFields->push(HX_CSTRING("_cPTR"));
	outFields->push(HX_CSTRING("_chibi_FOUR"));
	outFields->push(HX_CSTRING("_chibi_HORZ"));
	outFields->push(HX_CSTRING("_chibi_LEFT"));
	outFields->push(HX_CSTRING("_chibi_RGHT"));
	outFields->push(HX_CSTRING("_chibi_VERT"));
	outFields->push(HX_CSTRING("_chibi_ABOV"));
	outFields->push(HX_CSTRING("_chibi_DOWN"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Main_obj,inited),HX_CSTRING("inited")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,_cVec),HX_CSTRING("_cVec")},
	{hx::fsInt,(int)offsetof(Main_obj,_cPTR),HX_CSTRING("_cPTR")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace*/ ,(int)offsetof(Main_obj,_chibi_FOUR),HX_CSTRING("_chibi_FOUR")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace*/ ,(int)offsetof(Main_obj,_chibi_HORZ),HX_CSTRING("_chibi_HORZ")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace*/ ,(int)offsetof(Main_obj,_chibi_LEFT),HX_CSTRING("_chibi_LEFT")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace*/ ,(int)offsetof(Main_obj,_chibi_RGHT),HX_CSTRING("_chibi_RGHT")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace*/ ,(int)offsetof(Main_obj,_chibi_VERT),HX_CSTRING("_chibi_VERT")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace*/ ,(int)offsetof(Main_obj,_chibi_ABOV),HX_CSTRING("_chibi_ABOV")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace*/ ,(int)offsetof(Main_obj,_chibi_DOWN),HX_CSTRING("_chibi_DOWN")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("inited"),
	HX_CSTRING("_cVec"),
	HX_CSTRING("_cPTR"),
	HX_CSTRING("_chibi_FOUR"),
	HX_CSTRING("_chibi_HORZ"),
	HX_CSTRING("_chibi_LEFT"),
	HX_CSTRING("_chibi_RGHT"),
	HX_CSTRING("_chibi_VERT"),
	HX_CSTRING("_chibi_ABOV"),
	HX_CSTRING("_chibi_DOWN"),
	HX_CSTRING("resize"),
	HX_CSTRING("bomKatMaker"),
	HX_CSTRING("init"),
	HX_CSTRING("onChibiClickFN"),
	HX_CSTRING("makeBody"),
	HX_CSTRING("makeEyes"),
	HX_CSTRING("MakeMouth"),
	HX_CSTRING("gBM"),
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

