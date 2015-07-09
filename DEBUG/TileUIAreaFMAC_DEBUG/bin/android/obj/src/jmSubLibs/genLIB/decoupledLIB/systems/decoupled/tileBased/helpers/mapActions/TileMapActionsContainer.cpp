#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_TypedFunctionBase
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/TypedFunctionBase.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_PXPY_VOID
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_PXPY_VOID.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_TXTY_VOID
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_TXTY_VOID.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_X0Y0X1Y1_VOID
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_X0Y0X1Y1_VOID.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_ZOOM_VOID
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_ZOOM_VOID.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_genericBases_FN_f_void
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/genericBases/FN_f_void.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_genericBases_FN_i_i_i_i_void
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/genericBases/FN_i_i_i_i_void.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_genericBases_FN_i_i_void
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/genericBases/FN_i_i_void.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapActions_TileMapActionsContainer
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/TileMapActionsContainer.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapActions_components_TMAC_BoundActionsFUNCS
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/components/TMAC_BoundActionsFUNCS.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_geom_primitives_IntPoint
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/IntPoint.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_geom_primitives_PointPair
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/PointPair.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace decoupled{
namespace tileBased{
namespace helpers{
namespace mapActions{

Void TileMapActionsContainer_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer","new",0xa3526a54,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer.new","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/TileMapActionsContainer.hx",18,0x161d0f98)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(37)
	this->_fcd_SINGLE = (int)-1;
	HX_STACK_LINE(33)
	this->_fcd_MULTI = (int)-1;
	HX_STACK_LINE(29)
	this->_touchTimeOutFrameCount = (int)5;
	HX_STACK_LINE(49)
	::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::components::TMAC_BoundActionsFUNCS _g = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::components::TMAC_BoundActionsFUNCS_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(49)
	this->_bac = _g;
	HX_STACK_LINE(50)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint _g1 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(50)
	this->_dragPoint = _g1;
	HX_STACK_LINE(51)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair _g2 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(51)
	this->_pp = _g2;
}
;
	return null();
}

//TileMapActionsContainer_obj::~TileMapActionsContainer_obj() { }

Dynamic TileMapActionsContainer_obj::__CreateEmpty() { return  new TileMapActionsContainer_obj; }
hx::ObjectPtr< TileMapActionsContainer_obj > TileMapActionsContainer_obj::__new()
{  hx::ObjectPtr< TileMapActionsContainer_obj > result = new TileMapActionsContainer_obj();
	result->__construct();
	return result;}

Dynamic TileMapActionsContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileMapActionsContainer_obj > result = new TileMapActionsContainer_obj();
	result->__construct();
	return result;}

Void TileMapActionsContainer_obj::addClickTileFN( Dynamic inFN,::String inFuncName){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer","addClickTileFN",0x57bb9049,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer.addClickTileFN","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/TileMapActionsContainer.hx",57,0x161d0f98)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inFN,"inFN")
		HX_STACK_ARG(inFuncName,"inFuncName")
		HX_STACK_LINE(57)
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_VOID_obj::init(inFN,inFuncName,this->_bac->clickTileFN);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapActionsContainer_obj,addClickTileFN,(void))

Void TileMapActionsContainer_obj::addDragFN_START( Dynamic inFN,::String inFuncName){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer","addDragFN_START",0x4f28ba74,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer.addDragFN_START","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/TileMapActionsContainer.hx",64,0x161d0f98)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inFN,"inFN")
		HX_STACK_ARG(inFuncName,"inFuncName")
		HX_STACK_LINE(64)
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_PXPY_VOID_obj::init(inFN,inFuncName,this->_bac->dragFN_START);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapActionsContainer_obj,addDragFN_START,(void))

Void TileMapActionsContainer_obj::addDragFN_CONTINUE( Dynamic inFN,::String inFuncName){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer","addDragFN_CONTINUE",0xc788cd75,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer.addDragFN_CONTINUE","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/TileMapActionsContainer.hx",70,0x161d0f98)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inFN,"inFN")
		HX_STACK_ARG(inFuncName,"inFuncName")
		HX_STACK_LINE(70)
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_PXPY_VOID_obj::init(inFN,inFuncName,this->_bac->dragFN_CONTINUE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapActionsContainer_obj,addDragFN_CONTINUE,(void))

Void TileMapActionsContainer_obj::addDragFN_END( Dynamic inFN,::String inFuncName){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer","addDragFN_END",0x51f35d6d,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer.addDragFN_END","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/TileMapActionsContainer.hx",76,0x161d0f98)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inFN,"inFN")
		HX_STACK_ARG(inFuncName,"inFuncName")
		HX_STACK_LINE(76)
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_PXPY_VOID_obj::init(inFN,inFuncName,this->_bac->dragFN_END);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapActionsContainer_obj,addDragFN_END,(void))

Void TileMapActionsContainer_obj::addPinchFN_START( Dynamic inFN,::String inFuncName){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer","addPinchFN_START",0x30da69b0,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer.addPinchFN_START","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/TileMapActionsContainer.hx",83,0x161d0f98)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inFN,"inFN")
		HX_STACK_ARG(inFuncName,"inFuncName")
		HX_STACK_LINE(83)
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID_obj::init(inFN,inFuncName,this->_bac->pinchFN_START);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapActionsContainer_obj,addPinchFN_START,(void))

Void TileMapActionsContainer_obj::addPinchFN_CONTINUE( Dynamic inFN,::String inFuncName){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer","addPinchFN_CONTINUE",0x1e774bb9,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer.addPinchFN_CONTINUE","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/TileMapActionsContainer.hx",89,0x161d0f98)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inFN,"inFN")
		HX_STACK_ARG(inFuncName,"inFuncName")
		HX_STACK_LINE(89)
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID_obj::init(inFN,inFuncName,this->_bac->pinchFN_CONTINUE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapActionsContainer_obj,addPinchFN_CONTINUE,(void))

Void TileMapActionsContainer_obj::addPinchFN_END( Dynamic inFN,::String inFuncName){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer","addPinchFN_END",0x169d85a9,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer.addPinchFN_END","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/TileMapActionsContainer.hx",95,0x161d0f98)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inFN,"inFN")
		HX_STACK_ARG(inFuncName,"inFuncName")
		HX_STACK_LINE(95)
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID_obj::init(inFN,inFuncName,this->_bac->pinchFN_END);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapActionsContainer_obj,addPinchFN_END,(void))

Void TileMapActionsContainer_obj::addGestureFN_ZOOM( Dynamic inFN,::String inFuncName){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer","addGestureFN_ZOOM",0xf603d836,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer.addGestureFN_ZOOM","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/TileMapActionsContainer.hx",102,0x161d0f98)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inFN,"inFN")
		HX_STACK_ARG(inFuncName,"inFuncName")
		HX_STACK_LINE(102)
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_ZOOM_VOID_obj::init(inFN,inFuncName,this->_bac->gestureFN_ZOOM);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapActionsContainer_obj,addGestureFN_ZOOM,(void))

Void TileMapActionsContainer_obj::readZoomOffset( Float inScale){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer","readZoomOffset",0x12775888,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer.readZoomOffset","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/TileMapActionsContainer.hx",108,0x161d0f98)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inScale,"inScale")
		HX_STACK_LINE(108)
		if ((this->_bac->gestureFN_ZOOM->b)){
			HX_STACK_LINE(110)
			this->_bac->gestureFN_ZOOM->f(inScale);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapActionsContainer_obj,readZoomOffset,(void))

Void TileMapActionsContainer_obj::readTileClick( int inTileX,int inTileY){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer","readTileClick",0xb5be66f8,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer.readTileClick","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/TileMapActionsContainer.hx",121,0x161d0f98)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inTileX,"inTileX")
		HX_STACK_ARG(inTileY,"inTileY")
		HX_STACK_LINE(121)
		if ((this->_bac->clickTileFN->b)){
			HX_STACK_LINE(123)
			this->_bac->clickTileFN->f(inTileX,inTileY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapActionsContainer_obj,readTileClick,(void))

Void TileMapActionsContainer_obj::readPinch( int x0,int y0,int x1,int y1){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer","readPinch",0x7f7003f8,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer.readPinch","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/TileMapActionsContainer.hx",136,0x161d0f98)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x0,"x0")
		HX_STACK_ARG(y0,"y0")
		HX_STACK_ARG(x1,"x1")
		HX_STACK_ARG(y1,"y1")
		HX_STACK_LINE(143)
		this->_pp->x0 = x0;
		HX_STACK_LINE(144)
		this->_pp->y0 = y0;
		HX_STACK_LINE(145)
		this->_pp->x1 = x1;
		HX_STACK_LINE(146)
		this->_pp->y1 = y1;
		HX_STACK_LINE(149)
		if (((this->_fcd_MULTI < (int)0))){
			HX_STACK_LINE(152)
			if ((this->_bac->pinchFN_START->b)){
				HX_STACK_LINE(154)
				this->_bac->pinchFN_START->f(this->_pp->x0,this->_pp->y0,this->_pp->x1,this->_pp->y1);
			}
		}
		else{
			HX_STACK_LINE(160)
			if ((this->_bac->pinchFN_CONTINUE->b)){
				HX_STACK_LINE(162)
				this->_bac->pinchFN_CONTINUE->f(this->_pp->x0,this->_pp->y0,this->_pp->x1,this->_pp->y1);
			}
		}
		HX_STACK_LINE(167)
		this->_fcd_MULTI = this->_touchTimeOutFrameCount;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TileMapActionsContainer_obj,readPinch,(void))

Void TileMapActionsContainer_obj::readTouch( int bufX,int bufY){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer","readTouch",0xd106ed7d,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer.readTouch","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/TileMapActionsContainer.hx",181,0x161d0f98)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bufX,"bufX")
		HX_STACK_ARG(bufY,"bufY")
		HX_STACK_LINE(185)
		this->_dragPoint->ix = bufX;
		HX_STACK_LINE(186)
		this->_dragPoint->iy = bufY;
		HX_STACK_LINE(188)
		if (((this->_fcd_SINGLE < (int)0))){
			HX_STACK_LINE(191)
			if ((this->_bac->dragFN_START->b)){
				HX_STACK_LINE(193)
				this->_bac->dragFN_START->f(bufX,bufY);
			}
		}
		else{
			HX_STACK_LINE(199)
			if ((this->_bac->dragFN_CONTINUE->b)){
				HX_STACK_LINE(201)
				this->_bac->dragFN_CONTINUE->f(bufX,bufY);
			}
		}
		HX_STACK_LINE(206)
		this->_fcd_SINGLE = this->_touchTimeOutFrameCount;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapActionsContainer_obj,readTouch,(void))

Void TileMapActionsContainer_obj::update( ){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer","update",0x19b49c95,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer.update","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/TileMapActionsContainer.hx",212,0x161d0f98)
		HX_STACK_THIS(this)
		HX_STACK_LINE(213)
		(this->_fcd_SINGLE)--;
		HX_STACK_LINE(214)
		(this->_fcd_MULTI)--;
		HX_STACK_LINE(219)
		if (((this->_fcd_SINGLE == (int)0))){
			HX_STACK_LINE(221)
			if ((this->_bac->dragFN_END->b)){
				HX_STACK_LINE(223)
				this->_bac->dragFN_END->f(this->_dragPoint->ix,this->_dragPoint->iy);
			}
		}
		HX_STACK_LINE(228)
		if (((this->_fcd_MULTI == (int)0))){
			HX_STACK_LINE(230)
			if ((this->_bac->pinchFN_END->b)){
				HX_STACK_LINE(232)
				this->_bac->pinchFN_END->f(this->_pp->x0,this->_pp->y0,this->_pp->x1,this->_pp->y1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileMapActionsContainer_obj,update,(void))


TileMapActionsContainer_obj::TileMapActionsContainer_obj()
{
}

void TileMapActionsContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileMapActionsContainer);
	HX_MARK_MEMBER_NAME(_touchTimeOutFrameCount,"_touchTimeOutFrameCount");
	HX_MARK_MEMBER_NAME(_fcd_MULTI,"_fcd_MULTI");
	HX_MARK_MEMBER_NAME(_fcd_SINGLE,"_fcd_SINGLE");
	HX_MARK_MEMBER_NAME(_dragPoint,"_dragPoint");
	HX_MARK_MEMBER_NAME(_pp,"_pp");
	HX_MARK_MEMBER_NAME(_bac,"_bac");
	HX_MARK_END_CLASS();
}

void TileMapActionsContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_touchTimeOutFrameCount,"_touchTimeOutFrameCount");
	HX_VISIT_MEMBER_NAME(_fcd_MULTI,"_fcd_MULTI");
	HX_VISIT_MEMBER_NAME(_fcd_SINGLE,"_fcd_SINGLE");
	HX_VISIT_MEMBER_NAME(_dragPoint,"_dragPoint");
	HX_VISIT_MEMBER_NAME(_pp,"_pp");
	HX_VISIT_MEMBER_NAME(_bac,"_bac");
}

Dynamic TileMapActionsContainer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_pp") ) { return _pp; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_bac") ) { return _bac; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readPinch") ) { return readPinch_dyn(); }
		if (HX_FIELD_EQ(inName,"readTouch") ) { return readTouch_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_fcd_MULTI") ) { return _fcd_MULTI; }
		if (HX_FIELD_EQ(inName,"_dragPoint") ) { return _dragPoint; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_fcd_SINGLE") ) { return _fcd_SINGLE; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addDragFN_END") ) { return addDragFN_END_dyn(); }
		if (HX_FIELD_EQ(inName,"readTileClick") ) { return readTileClick_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addClickTileFN") ) { return addClickTileFN_dyn(); }
		if (HX_FIELD_EQ(inName,"addPinchFN_END") ) { return addPinchFN_END_dyn(); }
		if (HX_FIELD_EQ(inName,"readZoomOffset") ) { return readZoomOffset_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addDragFN_START") ) { return addDragFN_START_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addPinchFN_START") ) { return addPinchFN_START_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"addGestureFN_ZOOM") ) { return addGestureFN_ZOOM_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addDragFN_CONTINUE") ) { return addDragFN_CONTINUE_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addPinchFN_CONTINUE") ) { return addPinchFN_CONTINUE_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_touchTimeOutFrameCount") ) { return _touchTimeOutFrameCount; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileMapActionsContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_pp") ) { _pp=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_bac") ) { _bac=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::components::TMAC_BoundActionsFUNCS >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_fcd_MULTI") ) { _fcd_MULTI=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragPoint") ) { _dragPoint=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_fcd_SINGLE") ) { _fcd_SINGLE=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_touchTimeOutFrameCount") ) { _touchTimeOutFrameCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileMapActionsContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_touchTimeOutFrameCount"));
	outFields->push(HX_CSTRING("_fcd_MULTI"));
	outFields->push(HX_CSTRING("_fcd_SINGLE"));
	outFields->push(HX_CSTRING("_dragPoint"));
	outFields->push(HX_CSTRING("_pp"));
	outFields->push(HX_CSTRING("_bac"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TileMapActionsContainer_obj,_touchTimeOutFrameCount),HX_CSTRING("_touchTimeOutFrameCount")},
	{hx::fsInt,(int)offsetof(TileMapActionsContainer_obj,_fcd_MULTI),HX_CSTRING("_fcd_MULTI")},
	{hx::fsInt,(int)offsetof(TileMapActionsContainer_obj,_fcd_SINGLE),HX_CSTRING("_fcd_SINGLE")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint*/ ,(int)offsetof(TileMapActionsContainer_obj,_dragPoint),HX_CSTRING("_dragPoint")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair*/ ,(int)offsetof(TileMapActionsContainer_obj,_pp),HX_CSTRING("_pp")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::components::TMAC_BoundActionsFUNCS*/ ,(int)offsetof(TileMapActionsContainer_obj,_bac),HX_CSTRING("_bac")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_touchTimeOutFrameCount"),
	HX_CSTRING("_fcd_MULTI"),
	HX_CSTRING("_fcd_SINGLE"),
	HX_CSTRING("_dragPoint"),
	HX_CSTRING("_pp"),
	HX_CSTRING("_bac"),
	HX_CSTRING("addClickTileFN"),
	HX_CSTRING("addDragFN_START"),
	HX_CSTRING("addDragFN_CONTINUE"),
	HX_CSTRING("addDragFN_END"),
	HX_CSTRING("addPinchFN_START"),
	HX_CSTRING("addPinchFN_CONTINUE"),
	HX_CSTRING("addPinchFN_END"),
	HX_CSTRING("addGestureFN_ZOOM"),
	HX_CSTRING("readZoomOffset"),
	HX_CSTRING("readTileClick"),
	HX_CSTRING("readPinch"),
	HX_CSTRING("readTouch"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileMapActionsContainer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileMapActionsContainer_obj::__mClass,"__mClass");
};

#endif

Class TileMapActionsContainer_obj::__mClass;

void TileMapActionsContainer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapActions.TileMapActionsContainer"), hx::TCanCast< TileMapActionsContainer_obj> ,sStaticFields,sMemberFields,
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

void TileMapActionsContainer_obj::__boot()
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
