#include <hxcpp.h>

#ifndef INCLUDED_bas_consts_openfl_geom_PointZZ
#include <bas/consts/openfl/geom/PointZZ.h>
#endif
#ifndef INCLUDED_bas_refactor_ProtoTapSprite
#include <bas/refactor/ProtoTapSprite.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_ind_structs_geom_primitives_IntPoint
#include <ind/structs/geom/primitives/IntPoint.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace bas{
namespace refactor{

Void ProtoTapSprite_obj::__construct()
{
HX_STACK_FRAME("bas.refactor.ProtoTapSprite","new",0x77a1b264,"bas.refactor.ProtoTapSprite.new","bas/refactor/ProtoTapSprite.hx",27,0xc18451ac)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(51)
	this->_isLoopingAnimation = false;
	HX_STACK_LINE(50)
	this->_isPlaying = false;
	HX_STACK_LINE(48)
	this->_curFrame = (int)0;
	HX_STACK_LINE(70)
	super::__construct();
	HX_STACK_LINE(71)
	::ind::structs::geom::primitives::IntPoint _g = ::ind::structs::geom::primitives::IntPoint_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(71)
	this->_dir = _g;
	HX_STACK_LINE(72)
	::openfl::display::Bitmap _g1 = ::openfl::display::Bitmap_obj::__new(null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(72)
	this->_disp_vis = _g1;
	HX_STACK_LINE(73)
	this->addChild(this->_disp_vis);
	HX_STACK_LINE(75)
	this->addEventListener(::openfl::events::Event_obj::ENTER_FRAME,this->onEnterFrameUpdate_dyn(),null(),null(),null());
	HX_STACK_LINE(76)
	this->addEventListener(::openfl::events::MouseEvent_obj::CLICK,this->onClick_dyn(),null(),null(),null());
}
;
	return null();
}

//ProtoTapSprite_obj::~ProtoTapSprite_obj() { }

Dynamic ProtoTapSprite_obj::__CreateEmpty() { return  new ProtoTapSprite_obj; }
hx::ObjectPtr< ProtoTapSprite_obj > ProtoTapSprite_obj::__new()
{  hx::ObjectPtr< ProtoTapSprite_obj > result = new ProtoTapSprite_obj();
	result->__construct();
	return result;}

Dynamic ProtoTapSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProtoTapSprite_obj > result = new ProtoTapSprite_obj();
	result->__construct();
	return result;}

Void ProtoTapSprite_obj::onEnterFrameUpdate( ::openfl::events::Event evt){
{
		HX_STACK_FRAME("bas.refactor.ProtoTapSprite","onEnterFrameUpdate",0xa6cd9199,"bas.refactor.ProtoTapSprite.onEnterFrameUpdate","bas/refactor/ProtoTapSprite.hx",81,0xc18451ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_LINE(81)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ProtoTapSprite_obj,onEnterFrameUpdate,(void))

Void ProtoTapSprite_obj::update( ){
{
		HX_STACK_FRAME("bas.refactor.ProtoTapSprite","update",0x42b5be85,"bas.refactor.ProtoTapSprite.update","bas/refactor/ProtoTapSprite.hx",85,0xc18451ac)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		this->soundUpdate();
		HX_STACK_LINE(88)
		this->frameUpdate();
		HX_STACK_LINE(89)
		this->displayCurrentFrame();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ProtoTapSprite_obj,update,(void))

Void ProtoTapSprite_obj::soundUpdate( ){
{
		HX_STACK_FRAME("bas.refactor.ProtoTapSprite","soundUpdate",0xb0f8123c,"bas.refactor.ProtoTapSprite.soundUpdate","bas/refactor/ProtoTapSprite.hx",94,0xc18451ac)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ProtoTapSprite_obj,soundUpdate,(void))

Void ProtoTapSprite_obj::onClick( ::openfl::events::Event evt){
{
		HX_STACK_FRAME("bas.refactor.ProtoTapSprite","onClick",0x5d1d4ead,"bas.refactor.ProtoTapSprite.onClick","bas/refactor/ProtoTapSprite.hx",104,0xc18451ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_LINE(114)
		this->_curFrame = (int)0;
		HX_STACK_LINE(115)
		this->_isPlaying = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ProtoTapSprite_obj,onClick,(void))

Void ProtoTapSprite_obj::onSoundComplete( ::openfl::events::Event evt){
{
		HX_STACK_FRAME("bas.refactor.ProtoTapSprite","onSoundComplete",0x6105700d,"bas.refactor.ProtoTapSprite.onSoundComplete","bas/refactor/ProtoTapSprite.hx",119,0xc18451ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(evt,"evt")
		HX_STACK_LINE(120)
		this->_curFrame = (int)0;
		HX_STACK_LINE(121)
		this->_isPlaying = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ProtoTapSprite_obj,onSoundComplete,(void))

Void ProtoTapSprite_obj::frameUpdate( ){
{
		HX_STACK_FRAME("bas.refactor.ProtoTapSprite","frameUpdate",0xdc12d81a,"bas.refactor.ProtoTapSprite.frameUpdate","bas/refactor/ProtoTapSprite.hx",127,0xc18451ac)
		HX_STACK_THIS(this)
		HX_STACK_LINE(127)
		if ((this->_isPlaying)){
			HX_STACK_LINE(129)
			this->_curFrame = (this->_curFrame + (int)1);
			HX_STACK_LINE(130)
			if (((this->_curFrame > this->_numFrames))){
				HX_STACK_LINE(132)
				if ((this->_isLoopingAnimation)){
					HX_STACK_LINE(134)
					this->_curFrame = (int)0;
				}
				else{
					HX_STACK_LINE(138)
					this->_curFrame = this->_numFrames;
					HX_STACK_LINE(139)
					this->_isPlaying = false;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ProtoTapSprite_obj,frameUpdate,(void))

Void ProtoTapSprite_obj::displayCurrentFrame( ){
{
		HX_STACK_FRAME("bas.refactor.ProtoTapSprite","displayCurrentFrame",0x14a4589a,"bas.refactor.ProtoTapSprite.displayCurrentFrame","bas/refactor/ProtoTapSprite.hx",147,0xc18451ac)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		if (((null() == this->_dir))){
			HX_STACK_LINE(150)
			::bas::refactor::ProtoTapSprite_obj::customError(HX_CSTRING("dir is null"));
		}
		HX_STACK_LINE(153)
		if (((null() == this->_rec))){
			HX_STACK_LINE(155)
			::bas::refactor::ProtoTapSprite_obj::customError(HX_CSTRING("rec is null"));
		}
		HX_STACK_LINE(174)
		::haxe::Log_obj::trace(HX_CSTRING("android"),hx::SourceInfo(HX_CSTRING("ProtoTapSprite.hx"),174,HX_CSTRING("bas.refactor.ProtoTapSprite"),HX_CSTRING("displayCurrentFrame")));
		HX_STACK_LINE(201)
		this->_rec->x = ((this->_dir->ix * this->_curFrame) * this->_widHig);
		HX_STACK_LINE(202)
		this->_rec->y = ((this->_dir->iy * this->_curFrame) * this->_widHig);
		HX_STACK_LINE(203)
		this->_disp->copyPixels(this->_strip,this->_rec,::bas::refactor::ProtoTapSprite_obj::ZZ,null(),null(),false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ProtoTapSprite_obj,displayCurrentFrame,(void))

Void ProtoTapSprite_obj::load( ::openfl::display::BitmapData inStrip){
{
		HX_STACK_FRAME("bas.refactor.ProtoTapSprite","load",0x348f7ba2,"bas.refactor.ProtoTapSprite.load","bas/refactor/ProtoTapSprite.hx",227,0xc18451ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inStrip,"inStrip")
		HX_STACK_LINE(231)
		int wid = inStrip->get_width();		HX_STACK_VAR(wid,"wid");
		HX_STACK_LINE(232)
		int hig = inStrip->get_height();		HX_STACK_VAR(hig,"hig");
		HX_STACK_LINE(233)
		if (((wid < hig))){
			HX_STACK_LINE(235)
			this->_widHig = wid;
			HX_STACK_LINE(236)
			this->_dir->ix = (int)0;
			HX_STACK_LINE(237)
			this->_dir->iy = (int)1;
			HX_STACK_LINE(238)
			int _g = ::Math_obj::floor((Float(hig) / Float(wid)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(238)
			this->_numFrames = _g;
		}
		else{
			HX_STACK_LINE(241)
			if (((hig < wid))){
				HX_STACK_LINE(243)
				this->_widHig = hig;
				HX_STACK_LINE(244)
				this->_dir->ix = (int)1;
				HX_STACK_LINE(245)
				this->_dir->iy = (int)0;
				HX_STACK_LINE(246)
				int _g1 = ::Math_obj::floor((Float(wid) / Float(hig)));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(246)
				this->_numFrames = _g1;
			}
			else{
				HX_STACK_LINE(251)
				this->_widHig = wid;
				HX_STACK_LINE(252)
				this->_dir->ix = (int)0;
				HX_STACK_LINE(253)
				this->_dir->iy = (int)0;
				HX_STACK_LINE(254)
				this->_numFrames = (int)1;
			}
		}
		HX_STACK_LINE(258)
		this->_strip = inStrip;
		HX_STACK_LINE(259)
		::openfl::geom::Rectangle _g2 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(259)
		this->_rec = _g2;
		HX_STACK_LINE(260)
		this->_rec->width = this->_widHig;
		HX_STACK_LINE(261)
		this->_rec->height = this->_widHig;
		HX_STACK_LINE(264)
		::openfl::display::BitmapData _g3 = ::openfl::display::BitmapData_obj::__new(this->_widHig,this->_widHig,true,(int)0,null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(264)
		this->_disp = _g3;
		HX_STACK_LINE(265)
		this->_disp_vis->set_bitmapData(this->_disp);
		HX_STACK_LINE(268)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ProtoTapSprite_obj,load,(void))

::openfl::geom::Point ProtoTapSprite_obj::ZZ;

Void ProtoTapSprite_obj::customError( ::String msg){
{
		HX_STACK_FRAME("bas.refactor.ProtoTapSprite","customError",0x7f2bb85b,"bas.refactor.ProtoTapSprite.customError","bas/refactor/ProtoTapSprite.hx",216,0xc18451ac)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_LINE(217)
		::haxe::Log_obj::trace((HX_CSTRING("ERROR!: ") + msg),hx::SourceInfo(HX_CSTRING("ProtoTapSprite.hx"),217,HX_CSTRING("bas.refactor.ProtoTapSprite"),HX_CSTRING("customError")));
		HX_STACK_LINE(221)
		::haxe::Log_obj::trace(HX_CSTRING("hi"),hx::SourceInfo(HX_CSTRING("ProtoTapSprite.hx"),221,HX_CSTRING("bas.refactor.ProtoTapSprite"),HX_CSTRING("customError")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ProtoTapSprite_obj,customError,(void))

::bas::refactor::ProtoTapSprite ProtoTapSprite_obj::make( ::openfl::display::BitmapData inStrip){
	HX_STACK_FRAME("bas.refactor.ProtoTapSprite","make",0x352e1b6a,"bas.refactor.ProtoTapSprite.make","bas/refactor/ProtoTapSprite.hx",274,0xc18451ac)
	HX_STACK_ARG(inStrip,"inStrip")
	HX_STACK_LINE(275)
	::bas::refactor::ProtoTapSprite op = ::bas::refactor::ProtoTapSprite_obj::__new();		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(276)
	op->load(inStrip);
	HX_STACK_LINE(277)
	return op;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ProtoTapSprite_obj,make,return )


ProtoTapSprite_obj::ProtoTapSprite_obj()
{
}

void ProtoTapSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProtoTapSprite);
	HX_MARK_MEMBER_NAME(_strip,"_strip");
	HX_MARK_MEMBER_NAME(_disp,"_disp");
	HX_MARK_MEMBER_NAME(_disp_vis,"_disp_vis");
	HX_MARK_MEMBER_NAME(_rec,"_rec");
	HX_MARK_MEMBER_NAME(_numFrames,"_numFrames");
	HX_MARK_MEMBER_NAME(_dir,"_dir");
	HX_MARK_MEMBER_NAME(_curFrame,"_curFrame");
	HX_MARK_MEMBER_NAME(_isPlaying,"_isPlaying");
	HX_MARK_MEMBER_NAME(_isLoopingAnimation,"_isLoopingAnimation");
	HX_MARK_MEMBER_NAME(_widHig,"_widHig");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ProtoTapSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_strip,"_strip");
	HX_VISIT_MEMBER_NAME(_disp,"_disp");
	HX_VISIT_MEMBER_NAME(_disp_vis,"_disp_vis");
	HX_VISIT_MEMBER_NAME(_rec,"_rec");
	HX_VISIT_MEMBER_NAME(_numFrames,"_numFrames");
	HX_VISIT_MEMBER_NAME(_dir,"_dir");
	HX_VISIT_MEMBER_NAME(_curFrame,"_curFrame");
	HX_VISIT_MEMBER_NAME(_isPlaying,"_isPlaying");
	HX_VISIT_MEMBER_NAME(_isLoopingAnimation,"_isLoopingAnimation");
	HX_VISIT_MEMBER_NAME(_widHig,"_widHig");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ProtoTapSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ZZ") ) { return ZZ; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		if (HX_FIELD_EQ(inName,"_rec") ) { return _rec; }
		if (HX_FIELD_EQ(inName,"_dir") ) { return _dir; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_disp") ) { return _disp; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_strip") ) { return _strip; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_widHig") ) { return _widHig; }
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_disp_vis") ) { return _disp_vis; }
		if (HX_FIELD_EQ(inName,"_curFrame") ) { return _curFrame; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_numFrames") ) { return _numFrames; }
		if (HX_FIELD_EQ(inName,"_isPlaying") ) { return _isPlaying; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"customError") ) { return customError_dyn(); }
		if (HX_FIELD_EQ(inName,"soundUpdate") ) { return soundUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"frameUpdate") ) { return frameUpdate_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onSoundComplete") ) { return onSoundComplete_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onEnterFrameUpdate") ) { return onEnterFrameUpdate_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_isLoopingAnimation") ) { return _isLoopingAnimation; }
		if (HX_FIELD_EQ(inName,"displayCurrentFrame") ) { return displayCurrentFrame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ProtoTapSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ZZ") ) { ZZ=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_rec") ) { _rec=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dir") ) { _dir=inValue.Cast< ::ind::structs::geom::primitives::IntPoint >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_disp") ) { _disp=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_strip") ) { _strip=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_widHig") ) { _widHig=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_disp_vis") ) { _disp_vis=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curFrame") ) { _curFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_numFrames") ) { _numFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isPlaying") ) { _isPlaying=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_isLoopingAnimation") ) { _isLoopingAnimation=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProtoTapSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_strip"));
	outFields->push(HX_CSTRING("_disp"));
	outFields->push(HX_CSTRING("_disp_vis"));
	outFields->push(HX_CSTRING("_rec"));
	outFields->push(HX_CSTRING("_numFrames"));
	outFields->push(HX_CSTRING("_dir"));
	outFields->push(HX_CSTRING("_curFrame"));
	outFields->push(HX_CSTRING("_isPlaying"));
	outFields->push(HX_CSTRING("_isLoopingAnimation"));
	outFields->push(HX_CSTRING("_widHig"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ZZ"),
	HX_CSTRING("customError"),
	HX_CSTRING("make"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(ProtoTapSprite_obj,_strip),HX_CSTRING("_strip")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(ProtoTapSprite_obj,_disp),HX_CSTRING("_disp")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(ProtoTapSprite_obj,_disp_vis),HX_CSTRING("_disp_vis")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(ProtoTapSprite_obj,_rec),HX_CSTRING("_rec")},
	{hx::fsInt,(int)offsetof(ProtoTapSprite_obj,_numFrames),HX_CSTRING("_numFrames")},
	{hx::fsObject /*::ind::structs::geom::primitives::IntPoint*/ ,(int)offsetof(ProtoTapSprite_obj,_dir),HX_CSTRING("_dir")},
	{hx::fsInt,(int)offsetof(ProtoTapSprite_obj,_curFrame),HX_CSTRING("_curFrame")},
	{hx::fsBool,(int)offsetof(ProtoTapSprite_obj,_isPlaying),HX_CSTRING("_isPlaying")},
	{hx::fsBool,(int)offsetof(ProtoTapSprite_obj,_isLoopingAnimation),HX_CSTRING("_isLoopingAnimation")},
	{hx::fsInt,(int)offsetof(ProtoTapSprite_obj,_widHig),HX_CSTRING("_widHig")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_strip"),
	HX_CSTRING("_disp"),
	HX_CSTRING("_disp_vis"),
	HX_CSTRING("_rec"),
	HX_CSTRING("_numFrames"),
	HX_CSTRING("_dir"),
	HX_CSTRING("_curFrame"),
	HX_CSTRING("_isPlaying"),
	HX_CSTRING("_isLoopingAnimation"),
	HX_CSTRING("_widHig"),
	HX_CSTRING("onEnterFrameUpdate"),
	HX_CSTRING("update"),
	HX_CSTRING("soundUpdate"),
	HX_CSTRING("onClick"),
	HX_CSTRING("onSoundComplete"),
	HX_CSTRING("frameUpdate"),
	HX_CSTRING("displayCurrentFrame"),
	HX_CSTRING("load"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProtoTapSprite_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ProtoTapSprite_obj::ZZ,"ZZ");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProtoTapSprite_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ProtoTapSprite_obj::ZZ,"ZZ");
};

#endif

Class ProtoTapSprite_obj::__mClass;

void ProtoTapSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("bas.refactor.ProtoTapSprite"), hx::TCanCast< ProtoTapSprite_obj> ,sStaticFields,sMemberFields,
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

void ProtoTapSprite_obj::__boot()
{
	ZZ= ::bas::consts::openfl::geom::PointZZ_obj::ZZ;
}

} // end namespace bas
} // end namespace refactor
