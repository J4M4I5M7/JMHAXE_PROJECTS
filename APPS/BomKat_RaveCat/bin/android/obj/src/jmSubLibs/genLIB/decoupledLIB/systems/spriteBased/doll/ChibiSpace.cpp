#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_spriteBased_doll_ChibiSpace
#include <jmSubLibs/genLIB/decoupledLIB/systems/spriteBased/doll/ChibiSpace.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_spriteBased_doll_components_BMDollSprite
#include <jmSubLibs/genLIB/decoupledLIB/systems/spriteBased/doll/components/BMDollSprite.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace spriteBased{
namespace doll{

Void ChibiSpace_obj::__construct(int inPixelWid,int inPixelHig)
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.spriteBased.doll.ChibiSpace","new",0x860e0f70,"jmSubLibs.genLIB.decoupledLIB.systems.spriteBased.doll.ChibiSpace.new","jmSubLibs/genLIB/decoupledLIB/systems/spriteBased/doll/ChibiSpace.hx",22,0x141d0402)
HX_STACK_THIS(this)
HX_STACK_ARG(inPixelWid,"inPixelWid")
HX_STACK_ARG(inPixelHig,"inPixelHig")
{
	HX_STACK_LINE(48)
	this->_holdCount = (int)0;
	HX_STACK_LINE(45)
	this->heldFrames = (int)1;
	HX_STACK_LINE(40)
	this->_u = (int)0;
	HX_STACK_LINE(34)
	this->_stackLen = (int)0;
	HX_STACK_LINE(58)
	super::__construct();
	HX_STACK_LINE(61)
	Array< ::Dynamic > _g1;		HX_STACK_VAR(_g1,"_g1");
	struct _Function_1_1{
		inline static Array< ::Dynamic > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/genLIB/decoupledLIB/systems/spriteBased/doll/ChibiSpace.hx",61,0x141d0402)
			{
				HX_STACK_LINE(61)
				Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(61)
				Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new()->__SetSizeExact((int)0);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(61)
				this1 = _g;
				HX_STACK_LINE(61)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(61)
	_g1 = _Function_1_1::Block();
	HX_STACK_LINE(61)
	this->_stack = _g1;
	HX_STACK_LINE(64)
	::openfl::display::BitmapData _g2 = ::openfl::display::BitmapData_obj::__new(inPixelWid,inPixelHig,true,(int)0,null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(64)
	this->_buf = _g2;
	HX_STACK_LINE(67)
	::openfl::display::Bitmap _g3 = ::openfl::display::Bitmap_obj::__new(null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(67)
	this->_dsp = _g3;
	HX_STACK_LINE(68)
	this->_dsp->set_bitmapData(this->_buf);
	HX_STACK_LINE(69)
	this->addChild(this->_dsp);
	HX_STACK_LINE(72)
	this->addEventListener(::openfl::events::Event_obj::ENTER_FRAME,this->onEnterFrameUpdate_dyn(),null(),null(),null());
	HX_STACK_LINE(73)
	this->addEventListener(::openfl::events::MouseEvent_obj::CLICK,this->onClick_dyn(),null(),null(),null());
}
;
	return null();
}

//ChibiSpace_obj::~ChibiSpace_obj() { }

Dynamic ChibiSpace_obj::__CreateEmpty() { return  new ChibiSpace_obj; }
hx::ObjectPtr< ChibiSpace_obj > ChibiSpace_obj::__new(int inPixelWid,int inPixelHig)
{  hx::ObjectPtr< ChibiSpace_obj > result = new ChibiSpace_obj();
	result->__construct(inPixelWid,inPixelHig);
	return result;}

Dynamic ChibiSpace_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ChibiSpace_obj > result = new ChibiSpace_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void ChibiSpace_obj::add( ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite inCMP){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.spriteBased.doll.ChibiSpace","add",0x86043131,"jmSubLibs.genLIB.decoupledLIB.systems.spriteBased.doll.ChibiSpace.add","jmSubLibs/genLIB/decoupledLIB/systems/spriteBased/doll/ChibiSpace.hx",78,0x141d0402)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inCMP,"inCMP")
		HX_STACK_LINE(83)
		Array< ::Dynamic > s2;		HX_STACK_VAR(s2,"s2");
		struct _Function_1_1{
			inline static Array< ::Dynamic > Block( hx::ObjectPtr< ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/genLIB/decoupledLIB/systems/spriteBased/doll/ChibiSpace.hx",83,0x141d0402)
				{
					HX_STACK_LINE(83)
					Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(83)
					Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new()->__SetSizeExact((__this->_stackLen + (int)1));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(83)
					this1 = _g;
					HX_STACK_LINE(83)
					return this1;
				}
				return null();
			}
		};
		HX_STACK_LINE(83)
		s2 = _Function_1_1::Block(this);
		HX_STACK_LINE(84)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(85)
			int _g = this->_stackLen;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(85)
			while((true)){
				HX_STACK_LINE(85)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(85)
					break;
				}
				HX_STACK_LINE(85)
				int i1 = (_g1)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(87)
				{
					HX_STACK_LINE(87)
					::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite val = this->_stack->__unsafe_get(i1);		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(87)
					s2->__unsafe_set(i1,val);
				}
				HX_STACK_LINE(88)
				this->_stack->__unsafe_set(i1,null());
			}
		}
		HX_STACK_LINE(92)
		this->_stack = s2;
		HX_STACK_LINE(95)
		this->_stack->__unsafe_set(this->_stackLen,inCMP);
		HX_STACK_LINE(98)
		this->_stackLen = this->_stack->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ChibiSpace_obj,add,(void))

Void ChibiSpace_obj::update( ){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.spriteBased.doll.ChibiSpace","update",0x809010f9,"jmSubLibs.genLIB.decoupledLIB.systems.spriteBased.doll.ChibiSpace.update","jmSubLibs/genLIB/decoupledLIB/systems/spriteBased/doll/ChibiSpace.hx",106,0x141d0402)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		::openfl::geom::Rectangle _g = this->_buf->get_rect();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(108)
		this->_buf->fillRect(_g,(int)0);
		HX_STACK_LINE(113)
		this->_u = (int)-1;
		HX_STACK_LINE(114)
		while((true)){
			HX_STACK_LINE(117)
			(this->_u)++;
			HX_STACK_LINE(118)
			if (((this->_u >= this->_stackLen))){
				HX_STACK_LINE(118)
				break;
			}
			HX_STACK_LINE(121)
			::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite _g1 = this->_stack->__unsafe_get(this->_u);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(121)
			this->_cur = _g1;
			HX_STACK_LINE(122)
			this->_cur->update();
			HX_STACK_LINE(123)
			this->_cur->renderTo(this->_buf);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ChibiSpace_obj,update,(void))

Void ChibiSpace_obj::onEnterFrameUpdate( ::openfl::events::Event evt){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.spriteBased.doll.ChibiSpace","onEnterFrameUpdate",0x8713c20d,"jmSubLibs.genLIB.decoupledLIB.systems.spriteBased.doll.ChibiSpace.onEnterFrameUpdate","jmSubLibs/genLIB/decoupledLIB/systems/spriteBased/doll/ChibiSpace.hx",128,0x141d0402)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_LINE(129)
		(this->_holdCount)++;
		HX_STACK_LINE(130)
		if (((this->_holdCount >= this->heldFrames))){
			HX_STACK_LINE(132)
			this->_holdCount = (int)0;
			HX_STACK_LINE(133)
			this->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ChibiSpace_obj,onEnterFrameUpdate,(void))

Void ChibiSpace_obj::setClickFN( Dynamic inFN){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.spriteBased.doll.ChibiSpace","setClickFN",0x4fce42fe,"jmSubLibs.genLIB.decoupledLIB.systems.spriteBased.doll.ChibiSpace.setClickFN","jmSubLibs/genLIB/decoupledLIB/systems/spriteBased/doll/ChibiSpace.hx",140,0x141d0402)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inFN,"inFN")
		HX_STACK_LINE(141)
		this->_clickFN = inFN;
		HX_STACK_LINE(142)
		this->_hasClickFN = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ChibiSpace_obj,setClickFN,(void))

Void ChibiSpace_obj::onClick( ::openfl::events::Event evt){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.spriteBased.doll.ChibiSpace","onClick",0x3e4b21b9,"jmSubLibs.genLIB.decoupledLIB.systems.spriteBased.doll.ChibiSpace.onClick","jmSubLibs/genLIB/decoupledLIB/systems/spriteBased/doll/ChibiSpace.hx",152,0x141d0402)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_LINE(152)
		if ((this->_hasClickFN)){
			HX_STACK_LINE(158)
			this->_clickFN();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ChibiSpace_obj,onClick,(void))


ChibiSpace_obj::ChibiSpace_obj()
{
}

void ChibiSpace_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ChibiSpace);
	HX_MARK_MEMBER_NAME(_buf,"_buf");
	HX_MARK_MEMBER_NAME(_dsp,"_dsp");
	HX_MARK_MEMBER_NAME(_stack,"_stack");
	HX_MARK_MEMBER_NAME(_stackLen,"_stackLen");
	HX_MARK_MEMBER_NAME(_cur,"_cur");
	HX_MARK_MEMBER_NAME(_u,"_u");
	HX_MARK_MEMBER_NAME(heldFrames,"heldFrames");
	HX_MARK_MEMBER_NAME(_holdCount,"_holdCount");
	HX_MARK_MEMBER_NAME(_clickFN,"_clickFN");
	HX_MARK_MEMBER_NAME(_hasClickFN,"_hasClickFN");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ChibiSpace_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_buf,"_buf");
	HX_VISIT_MEMBER_NAME(_dsp,"_dsp");
	HX_VISIT_MEMBER_NAME(_stack,"_stack");
	HX_VISIT_MEMBER_NAME(_stackLen,"_stackLen");
	HX_VISIT_MEMBER_NAME(_cur,"_cur");
	HX_VISIT_MEMBER_NAME(_u,"_u");
	HX_VISIT_MEMBER_NAME(heldFrames,"heldFrames");
	HX_VISIT_MEMBER_NAME(_holdCount,"_holdCount");
	HX_VISIT_MEMBER_NAME(_clickFN,"_clickFN");
	HX_VISIT_MEMBER_NAME(_hasClickFN,"_hasClickFN");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ChibiSpace_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_u") ) { return _u; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_buf") ) { return _buf; }
		if (HX_FIELD_EQ(inName,"_dsp") ) { return _dsp; }
		if (HX_FIELD_EQ(inName,"_cur") ) { return _cur; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_stack") ) { return _stack; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_clickFN") ) { return _clickFN; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_stackLen") ) { return _stackLen; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"heldFrames") ) { return heldFrames; }
		if (HX_FIELD_EQ(inName,"_holdCount") ) { return _holdCount; }
		if (HX_FIELD_EQ(inName,"setClickFN") ) { return setClickFN_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_hasClickFN") ) { return _hasClickFN; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onEnterFrameUpdate") ) { return onEnterFrameUpdate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ChibiSpace_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_u") ) { _u=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_buf") ) { _buf=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dsp") ) { _dsp=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cur") ) { _cur=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_stack") ) { _stack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_clickFN") ) { _clickFN=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_stackLen") ) { _stackLen=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"heldFrames") ) { heldFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_holdCount") ) { _holdCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_hasClickFN") ) { _hasClickFN=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ChibiSpace_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_buf"));
	outFields->push(HX_CSTRING("_dsp"));
	outFields->push(HX_CSTRING("_stack"));
	outFields->push(HX_CSTRING("_stackLen"));
	outFields->push(HX_CSTRING("_cur"));
	outFields->push(HX_CSTRING("_u"));
	outFields->push(HX_CSTRING("heldFrames"));
	outFields->push(HX_CSTRING("_holdCount"));
	outFields->push(HX_CSTRING("_hasClickFN"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(ChibiSpace_obj,_buf),HX_CSTRING("_buf")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(ChibiSpace_obj,_dsp),HX_CSTRING("_dsp")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ChibiSpace_obj,_stack),HX_CSTRING("_stack")},
	{hx::fsInt,(int)offsetof(ChibiSpace_obj,_stackLen),HX_CSTRING("_stackLen")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite*/ ,(int)offsetof(ChibiSpace_obj,_cur),HX_CSTRING("_cur")},
	{hx::fsInt,(int)offsetof(ChibiSpace_obj,_u),HX_CSTRING("_u")},
	{hx::fsInt,(int)offsetof(ChibiSpace_obj,heldFrames),HX_CSTRING("heldFrames")},
	{hx::fsInt,(int)offsetof(ChibiSpace_obj,_holdCount),HX_CSTRING("_holdCount")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ChibiSpace_obj,_clickFN),HX_CSTRING("_clickFN")},
	{hx::fsBool,(int)offsetof(ChibiSpace_obj,_hasClickFN),HX_CSTRING("_hasClickFN")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_buf"),
	HX_CSTRING("_dsp"),
	HX_CSTRING("_stack"),
	HX_CSTRING("_stackLen"),
	HX_CSTRING("_cur"),
	HX_CSTRING("_u"),
	HX_CSTRING("heldFrames"),
	HX_CSTRING("_holdCount"),
	HX_CSTRING("_clickFN"),
	HX_CSTRING("_hasClickFN"),
	HX_CSTRING("add"),
	HX_CSTRING("update"),
	HX_CSTRING("onEnterFrameUpdate"),
	HX_CSTRING("setClickFN"),
	HX_CSTRING("onClick"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ChibiSpace_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ChibiSpace_obj::__mClass,"__mClass");
};

#endif

Class ChibiSpace_obj::__mClass;

void ChibiSpace_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.systems.spriteBased.doll.ChibiSpace"), hx::TCanCast< ChibiSpace_obj> ,sStaticFields,sMemberFields,
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

void ChibiSpace_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace spriteBased
} // end namespace doll
