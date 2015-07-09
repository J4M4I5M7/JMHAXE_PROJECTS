#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_jmSubLibs_EU
#include <jmSubLibs/EU.h>
#endif
#ifndef INCLUDED_jmSubLibs_decoupledLIB_helpers_funcs_TypedFunctionBase
#include <jmSubLibs/decoupledLIB/helpers/funcs/TypedFunctionBase.h>
#endif
#ifndef INCLUDED_jmSubLibs_decoupledLIB_helpers_funcs_typedFN_FN_TXTY_VOID
#include <jmSubLibs/decoupledLIB/helpers/funcs/typedFN/FN_TXTY_VOID.h>
#endif
#ifndef INCLUDED_jmSubLibs_decoupledLIB_systems_tileBased_frameWork_gridTap_GridTapLinker
#include <jmSubLibs/decoupledLIB/systems/tileBased/frameWork/gridTap/GridTapLinker.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
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
namespace decoupledLIB{
namespace systems{
namespace tileBased{
namespace frameWork{
namespace gridTap{

Void GridTapLinker_obj::__construct(int inNumberOfBoundFunctionsToRegister)
{
HX_STACK_FRAME("jmSubLibs.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker","new",0x1a7b1539,"jmSubLibs.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker.new","jmSubLibs/decoupledLIB/systems/tileBased/frameWork/gridTap/GridTapLinker.hx",28,0x23fa8c7b)
HX_STACK_THIS(this)
HX_STACK_ARG(inNumberOfBoundFunctionsToRegister,"inNumberOfBoundFunctionsToRegister")
{
	HX_STACK_LINE(68)
	this->_fui = (int)0;
	HX_STACK_LINE(55)
	this->_isLinked = false;
	HX_STACK_LINE(36)
	this->_has_debug_buf = false;
	HX_STACK_LINE(87)
	Array< ::Dynamic > _g1;		HX_STACK_VAR(_g1,"_g1");
	struct _Function_1_1{
		inline static Array< ::Dynamic > Block( int &inNumberOfBoundFunctionsToRegister){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/decoupledLIB/systems/tileBased/frameWork/gridTap/GridTapLinker.hx",87,0x23fa8c7b)
			{
				HX_STACK_LINE(87)
				Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(87)
				Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new()->__SetSizeExact(inNumberOfBoundFunctionsToRegister);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(87)
				this1 = _g;
				HX_STACK_LINE(87)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(87)
	_g1 = _Function_1_1::Block(inNumberOfBoundFunctionsToRegister);
	HX_STACK_LINE(87)
	this->_fVec = _g1;
	HX_STACK_LINE(88)
	this->_maxi = this->_fVec->length;
}
;
	return null();
}

//GridTapLinker_obj::~GridTapLinker_obj() { }

Dynamic GridTapLinker_obj::__CreateEmpty() { return  new GridTapLinker_obj; }
hx::ObjectPtr< GridTapLinker_obj > GridTapLinker_obj::__new(int inNumberOfBoundFunctionsToRegister)
{  hx::ObjectPtr< GridTapLinker_obj > result = new GridTapLinker_obj();
	result->__construct(inNumberOfBoundFunctionsToRegister);
	return result;}

Dynamic GridTapLinker_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GridTapLinker_obj > result = new GridTapLinker_obj();
	result->__construct(inArgs[0]);
	return result;}

Void GridTapLinker_obj::setDims( int inWidInTiles,int inHigInTiles,int inTileWid,int inTileHig){
{
		HX_STACK_FRAME("jmSubLibs.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker","setDims",0xf2fac846,"jmSubLibs.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker.setDims","jmSubLibs/decoupledLIB/systems/tileBased/frameWork/gridTap/GridTapLinker.hx",95,0x23fa8c7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inWidInTiles,"inWidInTiles")
		HX_STACK_ARG(inHigInTiles,"inHigInTiles")
		HX_STACK_ARG(inTileWid,"inTileWid")
		HX_STACK_ARG(inTileHig,"inTileHig")
		HX_STACK_LINE(96)
		this->setSize_TMap(inWidInTiles,inHigInTiles);
		HX_STACK_LINE(97)
		this->setSize_Tile(inTileWid,inTileHig);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GridTapLinker_obj,setDims,(void))

Void GridTapLinker_obj::setSize_TMap( int inWidInTiles,int inHigInTiles){
{
		HX_STACK_FRAME("jmSubLibs.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker","setSize_TMap",0x2a7a662b,"jmSubLibs.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker.setSize_TMap","jmSubLibs/decoupledLIB/systems/tileBased/frameWork/gridTap/GridTapLinker.hx",102,0x23fa8c7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inWidInTiles,"inWidInTiles")
		HX_STACK_ARG(inHigInTiles,"inHigInTiles")
		HX_STACK_LINE(111)
		this->_wid = inWidInTiles;
		HX_STACK_LINE(112)
		this->_hig = inHigInTiles;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GridTapLinker_obj,setSize_TMap,(void))

Void GridTapLinker_obj::setSize_Tile( int inTileWid,int inTileHig){
{
		HX_STACK_FRAME("jmSubLibs.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker","setSize_Tile",0x2a8faed1,"jmSubLibs.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker.setSize_Tile","jmSubLibs/decoupledLIB/systems/tileBased/frameWork/gridTap/GridTapLinker.hx",117,0x23fa8c7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inTileWid,"inTileWid")
		HX_STACK_ARG(inTileHig,"inTileHig")
		HX_STACK_LINE(127)
		this->_tWX = inTileWid;
		HX_STACK_LINE(128)
		this->_tHY = inTileHig;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GridTapLinker_obj,setSize_Tile,(void))

Void GridTapLinker_obj::linkUpEventListeners( ::openfl::display::DisplayObject inDisplayObject){
{
		HX_STACK_FRAME("jmSubLibs.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker","linkUpEventListeners",0x0b8aace1,"jmSubLibs.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker.linkUpEventListeners","jmSubLibs/decoupledLIB/systems/tileBased/frameWork/gridTap/GridTapLinker.hx",133,0x23fa8c7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inDisplayObject,"inDisplayObject")
		HX_STACK_LINE(134)
		if ((this->_isLinked)){
			HX_STACK_LINE(136)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("Already Linked! GridTapLinker.hx"));
		}
		HX_STACK_LINE(139)
		inDisplayObject->addEventListener(::openfl::events::MouseEvent_obj::CLICK,this->onClick_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GridTapLinker_obj,linkUpEventListeners,(void))

Void GridTapLinker_obj::addFN( Dynamic inFunc,::String inName){
{
		HX_STACK_FRAME("jmSubLibs.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker","addFN",0x8268a6c2,"jmSubLibs.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker.addFN","jmSubLibs/decoupledLIB/systems/tileBased/frameWork/gridTap/GridTapLinker.hx",145,0x23fa8c7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inFunc,"inFunc")
		HX_STACK_ARG(inName,"inName")
		HX_STACK_LINE(149)
		if (((this->_fui > this->_maxi))){
			HX_STACK_LINE(151)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("GridTapLinker.hx:: addFN:: _fui > _maxi. AKA: OOB"));
		}
		HX_STACK_LINE(155)
		::jmSubLibs::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_VOID entry = ::jmSubLibs::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_VOID_obj::__new();		HX_STACK_VAR(entry,"entry");
		HX_STACK_LINE(156)
		::jmSubLibs::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_VOID _g = ::jmSubLibs::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_VOID_obj::make(inFunc,inName);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(156)
		entry = _g;
		HX_STACK_LINE(159)
		this->_fVec->__unsafe_set(this->_fui,entry);
		HX_STACK_LINE(160)
		(this->_fui)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GridTapLinker_obj,addFN,(void))

Void GridTapLinker_obj::setDebugBuffer( ::openfl::display::BitmapData inBM){
{
		HX_STACK_FRAME("jmSubLibs.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker","setDebugBuffer",0xee60e6f8,"jmSubLibs.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker.setDebugBuffer","jmSubLibs/decoupledLIB/systems/tileBased/frameWork/gridTap/GridTapLinker.hx",169,0x23fa8c7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inBM,"inBM")
		HX_STACK_LINE(170)
		this->_debug_buf = inBM;
		HX_STACK_LINE(171)
		this->_has_debug_buf = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GridTapLinker_obj,setDebugBuffer,(void))

Void GridTapLinker_obj::debugBufferClick( int inTileX,int inTileY){
{
		HX_STACK_FRAME("jmSubLibs.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker","debugBufferClick",0xa3d5071c,"jmSubLibs.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker.debugBufferClick","jmSubLibs/decoupledLIB/systems/tileBased/frameWork/gridTap/GridTapLinker.hx",177,0x23fa8c7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inTileX,"inTileX")
		HX_STACK_ARG(inTileY,"inTileY")
		HX_STACK_LINE(178)
		::openfl::geom::Rectangle rec = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(rec,"rec");
		HX_STACK_LINE(179)
		rec->x = (inTileX * this->_tWX);
		HX_STACK_LINE(180)
		rec->y = (inTileY * this->_tHY);
		HX_STACK_LINE(181)
		rec->width = this->_tWX;
		HX_STACK_LINE(182)
		rec->height = this->_tHY;
		HX_STACK_LINE(186)
		int randColor = (int)0;		HX_STACK_VAR(randColor,"randColor");
		HX_STACK_LINE(189)
		Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(189)
		Float _g1 = (_g * (int)16777215);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(189)
		int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(189)
		int _g3 = (int(_g2) | int((int)-16777216));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(189)
		randColor = _g3;
		HX_STACK_LINE(193)
		this->_debug_buf->fillRect(rec,randColor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GridTapLinker_obj,debugBufferClick,(void))

Void GridTapLinker_obj::onClick( ::openfl::events::MouseEvent mev){
{
		HX_STACK_FRAME("jmSubLibs.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker","onClick",0xc9a94002,"jmSubLibs.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker.onClick","jmSubLibs/decoupledLIB/systems/tileBased/frameWork/gridTap/GridTapLinker.hx",199,0x23fa8c7b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mev,"mev")
		HX_STACK_LINE(213)
		int _g = ::Std_obj::_int((Float(mev->stageX) / Float(this->_tWX)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(213)
		this->_ex = _g;
		HX_STACK_LINE(214)
		int _g1 = ::Std_obj::_int((Float(mev->stageY) / Float(this->_tHY)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(214)
		this->_yi = _g1;
		HX_STACK_LINE(217)
		if (((bool((bool((bool((this->_ex < (int)0)) || bool((this->_yi < (int)0)))) || bool((this->_ex >= this->_wid)))) || bool((this->_yi >= this->_hig))))){
			HX_STACK_LINE(219)
			return null();
		}
		HX_STACK_LINE(223)
		if ((this->_has_debug_buf)){
			HX_STACK_LINE(225)
			this->debugBufferClick(this->_ex,this->_yi);
		}
		HX_STACK_LINE(229)
		if (((this->_fui <= (int)0))){
			HX_STACK_LINE(229)
			return null();
		}
		HX_STACK_LINE(232)
		this->_fp = (int)-1;
		HX_STACK_LINE(232)
		while((true)){
			HX_STACK_LINE(232)
			if ((!(((this->_fp < this->_fui))))){
				HX_STACK_LINE(232)
				break;
			}
			HX_STACK_LINE(232)
			(this->_fp)++;
			HX_STACK_LINE(240)
			::jmSubLibs::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_VOID _g2 = this->_fVec->__unsafe_get(this->_fp);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(240)
			this->_cur = _g2;
			HX_STACK_LINE(243)
			this->_cur->f(this->_ex,this->_yi);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GridTapLinker_obj,onClick,(void))


GridTapLinker_obj::GridTapLinker_obj()
{
}

void GridTapLinker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GridTapLinker);
	HX_MARK_MEMBER_NAME(_debug_buf,"_debug_buf");
	HX_MARK_MEMBER_NAME(_has_debug_buf,"_has_debug_buf");
	HX_MARK_MEMBER_NAME(_wid,"_wid");
	HX_MARK_MEMBER_NAME(_hig,"_hig");
	HX_MARK_MEMBER_NAME(_tWX,"_tWX");
	HX_MARK_MEMBER_NAME(_tHY,"_tHY");
	HX_MARK_MEMBER_NAME(_isLinked,"_isLinked");
	HX_MARK_MEMBER_NAME(_fVec,"_fVec");
	HX_MARK_MEMBER_NAME(_maxi,"_maxi");
	HX_MARK_MEMBER_NAME(_fui,"_fui");
	HX_MARK_MEMBER_NAME(_cur,"_cur");
	HX_MARK_MEMBER_NAME(_ex,"_ex");
	HX_MARK_MEMBER_NAME(_yi,"_yi");
	HX_MARK_MEMBER_NAME(_fp,"_fp");
	HX_MARK_END_CLASS();
}

void GridTapLinker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_debug_buf,"_debug_buf");
	HX_VISIT_MEMBER_NAME(_has_debug_buf,"_has_debug_buf");
	HX_VISIT_MEMBER_NAME(_wid,"_wid");
	HX_VISIT_MEMBER_NAME(_hig,"_hig");
	HX_VISIT_MEMBER_NAME(_tWX,"_tWX");
	HX_VISIT_MEMBER_NAME(_tHY,"_tHY");
	HX_VISIT_MEMBER_NAME(_isLinked,"_isLinked");
	HX_VISIT_MEMBER_NAME(_fVec,"_fVec");
	HX_VISIT_MEMBER_NAME(_maxi,"_maxi");
	HX_VISIT_MEMBER_NAME(_fui,"_fui");
	HX_VISIT_MEMBER_NAME(_cur,"_cur");
	HX_VISIT_MEMBER_NAME(_ex,"_ex");
	HX_VISIT_MEMBER_NAME(_yi,"_yi");
	HX_VISIT_MEMBER_NAME(_fp,"_fp");
}

Dynamic GridTapLinker_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ex") ) { return _ex; }
		if (HX_FIELD_EQ(inName,"_yi") ) { return _yi; }
		if (HX_FIELD_EQ(inName,"_fp") ) { return _fp; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_wid") ) { return _wid; }
		if (HX_FIELD_EQ(inName,"_hig") ) { return _hig; }
		if (HX_FIELD_EQ(inName,"_tWX") ) { return _tWX; }
		if (HX_FIELD_EQ(inName,"_tHY") ) { return _tHY; }
		if (HX_FIELD_EQ(inName,"_fui") ) { return _fui; }
		if (HX_FIELD_EQ(inName,"_cur") ) { return _cur; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_fVec") ) { return _fVec; }
		if (HX_FIELD_EQ(inName,"_maxi") ) { return _maxi; }
		if (HX_FIELD_EQ(inName,"addFN") ) { return addFN_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setDims") ) { return setDims_dyn(); }
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_isLinked") ) { return _isLinked; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_debug_buf") ) { return _debug_buf; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setSize_TMap") ) { return setSize_TMap_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize_Tile") ) { return setSize_Tile_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_has_debug_buf") ) { return _has_debug_buf; }
		if (HX_FIELD_EQ(inName,"setDebugBuffer") ) { return setDebugBuffer_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"debugBufferClick") ) { return debugBufferClick_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"linkUpEventListeners") ) { return linkUpEventListeners_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GridTapLinker_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ex") ) { _ex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_yi") ) { _yi=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fp") ) { _fp=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_wid") ) { _wid=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hig") ) { _hig=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tWX") ) { _tWX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tHY") ) { _tHY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fui") ) { _fui=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cur") ) { _cur=inValue.Cast< ::jmSubLibs::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_VOID >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_fVec") ) { _fVec=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxi") ) { _maxi=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_isLinked") ) { _isLinked=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_debug_buf") ) { _debug_buf=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_has_debug_buf") ) { _has_debug_buf=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GridTapLinker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_debug_buf"));
	outFields->push(HX_CSTRING("_has_debug_buf"));
	outFields->push(HX_CSTRING("_wid"));
	outFields->push(HX_CSTRING("_hig"));
	outFields->push(HX_CSTRING("_tWX"));
	outFields->push(HX_CSTRING("_tHY"));
	outFields->push(HX_CSTRING("_isLinked"));
	outFields->push(HX_CSTRING("_fVec"));
	outFields->push(HX_CSTRING("_maxi"));
	outFields->push(HX_CSTRING("_fui"));
	outFields->push(HX_CSTRING("_cur"));
	outFields->push(HX_CSTRING("_ex"));
	outFields->push(HX_CSTRING("_yi"));
	outFields->push(HX_CSTRING("_fp"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(GridTapLinker_obj,_debug_buf),HX_CSTRING("_debug_buf")},
	{hx::fsBool,(int)offsetof(GridTapLinker_obj,_has_debug_buf),HX_CSTRING("_has_debug_buf")},
	{hx::fsInt,(int)offsetof(GridTapLinker_obj,_wid),HX_CSTRING("_wid")},
	{hx::fsInt,(int)offsetof(GridTapLinker_obj,_hig),HX_CSTRING("_hig")},
	{hx::fsInt,(int)offsetof(GridTapLinker_obj,_tWX),HX_CSTRING("_tWX")},
	{hx::fsInt,(int)offsetof(GridTapLinker_obj,_tHY),HX_CSTRING("_tHY")},
	{hx::fsBool,(int)offsetof(GridTapLinker_obj,_isLinked),HX_CSTRING("_isLinked")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GridTapLinker_obj,_fVec),HX_CSTRING("_fVec")},
	{hx::fsInt,(int)offsetof(GridTapLinker_obj,_maxi),HX_CSTRING("_maxi")},
	{hx::fsInt,(int)offsetof(GridTapLinker_obj,_fui),HX_CSTRING("_fui")},
	{hx::fsObject /*::jmSubLibs::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_VOID*/ ,(int)offsetof(GridTapLinker_obj,_cur),HX_CSTRING("_cur")},
	{hx::fsInt,(int)offsetof(GridTapLinker_obj,_ex),HX_CSTRING("_ex")},
	{hx::fsInt,(int)offsetof(GridTapLinker_obj,_yi),HX_CSTRING("_yi")},
	{hx::fsInt,(int)offsetof(GridTapLinker_obj,_fp),HX_CSTRING("_fp")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_debug_buf"),
	HX_CSTRING("_has_debug_buf"),
	HX_CSTRING("_wid"),
	HX_CSTRING("_hig"),
	HX_CSTRING("_tWX"),
	HX_CSTRING("_tHY"),
	HX_CSTRING("_isLinked"),
	HX_CSTRING("_fVec"),
	HX_CSTRING("_maxi"),
	HX_CSTRING("_fui"),
	HX_CSTRING("_cur"),
	HX_CSTRING("_ex"),
	HX_CSTRING("_yi"),
	HX_CSTRING("_fp"),
	HX_CSTRING("setDims"),
	HX_CSTRING("setSize_TMap"),
	HX_CSTRING("setSize_Tile"),
	HX_CSTRING("linkUpEventListeners"),
	HX_CSTRING("addFN"),
	HX_CSTRING("setDebugBuffer"),
	HX_CSTRING("debugBufferClick"),
	HX_CSTRING("onClick"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GridTapLinker_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GridTapLinker_obj::__mClass,"__mClass");
};

#endif

Class GridTapLinker_obj::__mClass;

void GridTapLinker_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.decoupledLIB.systems.tileBased.frameWork.gridTap.GridTapLinker"), hx::TCanCast< GridTapLinker_obj> ,sStaticFields,sMemberFields,
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

void GridTapLinker_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace tileBased
} // end namespace frameWork
} // end namespace gridTap
