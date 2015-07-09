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
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_TypedFunctionBase
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/TypedFunctionBase.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_TXTY_WIHI_BITMAPBOOL
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_TXTY_WIHI_BITMAPBOOL.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_genericBases_FN_i_i_i_i_bitmapBool
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/genericBases/FN_i_i_i_i_bitmapBool.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_structs_glue_BitMapBool
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/structs/glue/BitMapBool.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapActions_TileMapActionsContainer
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapActions/TileMapActionsContainer.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapDims_TileMapDims
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapDims/TileMapDims.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_TileMapUpdateMGR
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_helpers_ScrollZoomAnimHelper
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/helpers/ScrollZoomAnimHelper.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_helpers_TMR_BoundSYS_FUNCS
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/helpers/TMR_BoundSYS_FUNCS.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_render_TileMapViewPortRenderEr
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_FloatAnimHelper
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/anim/FloatAnimHelper.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_UpdateableFloatAnimHelper
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/anim/UpdateableFloatAnimHelper.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_UpdateableFloatAnimHelperXY
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/anim/UpdateableFloatAnimHelperXY.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_geom_primitives_IntPoint
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/IntPoint.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_geom_primitives_PointPair
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/PointPair.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_glue_IntFloat
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/glue/IntFloat.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_glue_IntString
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/glue/IntString.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace decoupled{
namespace tileBased{
namespace updater{
namespace tmrMGR{

Void TileMapUpdateMGR_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","new",0x7525a329,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.new","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",38,0xa450226b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(54)
	this->_inited = false;
	HX_STACK_LINE(53)
	this->_initPhase = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::NOT_INITED;
	HX_STACK_LINE(205)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString _g = ::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(205)
	this->_ft = _g;
	HX_STACK_LINE(206)
	this->_ft->i = (int)-1;
	HX_STACK_LINE(207)
	this->_ft->s = HX_CSTRING("TileMapUpdateMGR.hx_FrameTracker_ft");
	HX_STACK_LINE(211)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint _g1 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(211)
	this->_tp = _g1;
	HX_STACK_LINE(212)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint _g2 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(212)
	this->_tp_tile_on_down = _g2;
	HX_STACK_LINE(215)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair _g3 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(215)
	this->_mt0 = _g3;
	HX_STACK_LINE(216)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair _g4 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(216)
	this->_mt1 = _g4;
	HX_STACK_LINE(217)
	this->_mt0z = (int)1;
	HX_STACK_LINE(220)
	this->_isTP = false;
	HX_STACK_LINE(221)
	this->_isMT = false;
	HX_STACK_LINE(223)
	::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::TileMapActionsContainer _g5 = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::TileMapActionsContainer_obj::__new();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(223)
	this->_act = _g5;
	HX_STACK_LINE(226)
	this->_act->addDragFN_START(this->readTouch_DEFAULT_START_dyn(),HX_CSTRING("TileMapUpdateMGR.readTouch_DEFAULT_START"));
	HX_STACK_LINE(227)
	this->_act->addDragFN_CONTINUE(this->readTouch_DEFAULT_CONTINUE_dyn(),HX_CSTRING("TileMapUpdateMGR.readTouch_DEFAULT_CONTINUE"));
	HX_STACK_LINE(228)
	this->_act->addDragFN_END(this->readTouch_DEFAULT_END_dyn(),HX_CSTRING("TileMapUpdateMGR.readTouch_DEFAULT_END"));
	HX_STACK_LINE(234)
	this->_act->addPinchFN_START(this->readPinch_DEFAULT_START_dyn(),HX_CSTRING("TileMapUpdateMGR.readPinch_DEFAULT_START"));
	HX_STACK_LINE(235)
	this->_act->addPinchFN_CONTINUE(this->readPinch_DEFAULT_CONTINUE_dyn(),HX_CSTRING("TileMapUpdateMGR.readPinch_DEFAULT_CONTINUE"));
	HX_STACK_LINE(236)
	this->_act->addPinchFN_END(this->readPinch_DEFAULT_END_dyn(),HX_CSTRING("TileMapUpdateMGR.readPinch_DEFAULT_END"));
	HX_STACK_LINE(240)
	::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::ScrollZoomAnimHelper _g6 = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::ScrollZoomAnimHelper_obj::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(240)
	this->_anim = _g6;
	HX_STACK_LINE(241)
	this->_anim->scroll->x->speed = (int)8;
	HX_STACK_LINE(242)
	this->_anim->scroll->y->speed = (int)8;
	HX_STACK_LINE(244)
	::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims _g7 = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(244)
	this->_d = _g7;
	HX_STACK_LINE(250)
	::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileMapViewPortRenderEr _g8 = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileMapViewPortRenderEr_obj::__new();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(250)
	this->_vpRen = _g8;
	HX_STACK_LINE(257)
	this->_vpRen->linkAnimHelper(this->_anim);
	HX_STACK_LINE(259)
	this->_vpRen->linkFrameTracker(this->_ft);
}
;
	return null();
}

//TileMapUpdateMGR_obj::~TileMapUpdateMGR_obj() { }

Dynamic TileMapUpdateMGR_obj::__CreateEmpty() { return  new TileMapUpdateMGR_obj; }
hx::ObjectPtr< TileMapUpdateMGR_obj > TileMapUpdateMGR_obj::__new()
{  hx::ObjectPtr< TileMapUpdateMGR_obj > result = new TileMapUpdateMGR_obj();
	result->__construct();
	return result;}

Dynamic TileMapUpdateMGR_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileMapUpdateMGR_obj > result = new TileMapUpdateMGR_obj();
	result->__construct();
	return result;}

::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString TileMapUpdateMGR_obj::getFrameTracker( ){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","getFrameTracker",0xe0e5510a,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.getFrameTracker","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",86,0xa450226b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(87)
	if (((null() == this->_ft))){
		HX_STACK_LINE(87)
		::jmSubLibs::EU_obj::msg(HX_CSTRING("Frame Tracker is null. TileMapUpdateMGR.getFrameTracker()"));
	}
	HX_STACK_LINE(88)
	return this->_ft;
}


HX_DEFINE_DYNAMIC_FUNC0(TileMapUpdateMGR_obj,getFrameTracker,return )

Void TileMapUpdateMGR_obj::setScreenWrapX( bool inB){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","setScreenWrapX",0x619f5f97,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.setScreenWrapX","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",112,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inB,"inB")
		HX_STACK_LINE(112)
		this->_vpRen->setScreenWrapX(inB);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapUpdateMGR_obj,setScreenWrapX,(void))

Void TileMapUpdateMGR_obj::setScreenWrapY( bool inB){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","setScreenWrapY",0x619f5f98,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.setScreenWrapY","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",119,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inB,"inB")
		HX_STACK_LINE(119)
		this->_vpRen->setScreenWrapY(inB);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapUpdateMGR_obj,setScreenWrapY,(void))

Void TileMapUpdateMGR_obj::setTileDims( int inWidInTiles,int inHigInTiles,int inTileWid,int inTileHig){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","setTileDims",0x824f9604,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.setTileDims","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",167,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inWidInTiles,"inWidInTiles")
		HX_STACK_ARG(inHigInTiles,"inHigInTiles")
		HX_STACK_ARG(inTileWid,"inTileWid")
		HX_STACK_ARG(inTileHig,"inTileHig")
		HX_STACK_LINE(169)
		if (((inWidInTiles <= (int)0))){
			HX_STACK_LINE(169)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::msg(HX_CSTRING("ERROR#0012-TDIM_WID"));
		}
		HX_STACK_LINE(170)
		if (((inHigInTiles <= (int)0))){
			HX_STACK_LINE(170)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::msg(HX_CSTRING("ERROR#0013-TDIM_HIG"));
		}
		HX_STACK_LINE(171)
		if (((inTileWid <= (int)0))){
			HX_STACK_LINE(171)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::msg(HX_CSTRING("ERROR#0014-TILE_WID"));
		}
		HX_STACK_LINE(172)
		if (((inTileHig <= (int)0))){
			HX_STACK_LINE(172)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::msg(HX_CSTRING("ERROR#0015-TILE_HIG"));
		}
		HX_STACK_LINE(176)
		this->_d->wid = inWidInTiles;
		HX_STACK_LINE(177)
		this->_d->hig = inHigInTiles;
		HX_STACK_LINE(182)
		this->_d->tWX = inTileWid;
		HX_STACK_LINE(183)
		this->_d->tHY = inTileHig;
		HX_STACK_LINE(187)
		this->_vpRen->linkTileMapDims(this->_d);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TileMapUpdateMGR_obj,setTileDims,(void))

::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::TileMapActionsContainer TileMapUpdateMGR_obj::getActionsContainer( ){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","getActionsContainer",0x02048703,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.getActionsContainer","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",195,0xa450226b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	if (((null() == this->_act))){
		HX_STACK_LINE(196)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::msg(HX_CSTRING("_act is null"));
	}
	HX_STACK_LINE(197)
	return this->_act;
}


HX_DEFINE_DYNAMIC_FUNC0(TileMapUpdateMGR_obj,getActionsContainer,return )

Void TileMapUpdateMGR_obj::readTileClick( int inTileX,int inTileY){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","readTileClick",0x0dd6dc0d,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.readTileClick","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",273,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inTileX,"inTileX")
		HX_STACK_ARG(inTileY,"inTileY")
		HX_STACK_LINE(273)
		this->_act->readTileClick(inTileX,inTileY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapUpdateMGR_obj,readTileClick,(void))

Void TileMapUpdateMGR_obj::readGestureZoom_DEFAULT( Float inZoomAmt){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","readGestureZoom_DEFAULT",0x26666bf1,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.readGestureZoom_DEFAULT","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",282,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inZoomAmt,"inZoomAmt")
		HX_STACK_LINE(282)
		this->setZoom(inZoomAmt,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapUpdateMGR_obj,readGestureZoom_DEFAULT,(void))

Void TileMapUpdateMGR_obj::readTouch_DEFAULT_START( int inBufX,int inBufY){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","readTouch_DEFAULT_START",0xd6776eb7,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.readTouch_DEFAULT_START","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",291,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inBufX,"inBufX")
		HX_STACK_ARG(inBufY,"inBufY")
		HX_STACK_LINE(292)
		this->_tp->ix = inBufX;
		HX_STACK_LINE(293)
		this->_tp->iy = inBufY;
		HX_STACK_LINE(295)
		int _g = this->getTileUnderPixelX(inBufX,false);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(295)
		this->_tp_tile_on_down->ix = _g;
		HX_STACK_LINE(296)
		int _g1 = this->getTileUnderPixelY(inBufY,false);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(296)
		this->_tp_tile_on_down->iy = _g1;
		HX_STACK_LINE(299)
		this->_isTP = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapUpdateMGR_obj,readTouch_DEFAULT_START,(void))

Void TileMapUpdateMGR_obj::readTouch_DEFAULT_CONTINUE( int inBufX,int inBufY){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","readTouch_DEFAULT_CONTINUE",0x6babe512,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.readTouch_DEFAULT_CONTINUE","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",306,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inBufX,"inBufX")
		HX_STACK_ARG(inBufY,"inBufY")
		HX_STACK_LINE(313)
		this->panTileToScreenPixelX(this->_tp_tile_on_down->ix,inBufX,false);
		HX_STACK_LINE(314)
		this->panTileToScreenPixelY(this->_tp_tile_on_down->iy,inBufY,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapUpdateMGR_obj,readTouch_DEFAULT_CONTINUE,(void))

Void TileMapUpdateMGR_obj::readPinch_DEFAULT_START( int inX0,int inY0,int inX1,int inY1){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","readPinch_DEFAULT_START",0xbf40c672,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.readPinch_DEFAULT_START","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",325,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX0,"inX0")
		HX_STACK_ARG(inY0,"inY0")
		HX_STACK_ARG(inX1,"inX1")
		HX_STACK_ARG(inY1,"inY1")
		HX_STACK_LINE(332)
		this->_mt0z = this->_anim->zoom->cur;
		HX_STACK_LINE(335)
		this->_mt0->x0 = inX0;
		HX_STACK_LINE(336)
		this->_mt0->y0 = inY0;
		HX_STACK_LINE(337)
		this->_mt0->x1 = inX1;
		HX_STACK_LINE(338)
		this->_mt0->y1 = inY1;
		HX_STACK_LINE(341)
		this->_mt1->x0 = inX0;
		HX_STACK_LINE(342)
		this->_mt1->y0 = inY0;
		HX_STACK_LINE(343)
		this->_mt1->x1 = inX1;
		HX_STACK_LINE(344)
		this->_mt1->y1 = inY1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TileMapUpdateMGR_obj,readPinch_DEFAULT_START,(void))

Void TileMapUpdateMGR_obj::readPinch_DEFAULT_CONTINUE( int inX0,int inY0,int inX1,int inY1){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","readPinch_DEFAULT_CONTINUE",0x63add437,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.readPinch_DEFAULT_CONTINUE","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",349,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX0,"inX0")
		HX_STACK_ARG(inY0,"inY0")
		HX_STACK_ARG(inX1,"inX1")
		HX_STACK_ARG(inY1,"inY1")
		HX_STACK_LINE(351)
		this->_mt1->x0 = inX0;
		HX_STACK_LINE(352)
		this->_mt1->y0 = inY0;
		HX_STACK_LINE(353)
		this->_mt1->x1 = inX1;
		HX_STACK_LINE(354)
		this->_mt1->y1 = inY1;
		HX_STACK_LINE(377)
		::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntFloat largestDeltaAxis = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::calcLargestPinchDeltaAxis(this->_mt0,this->_mt1);		HX_STACK_VAR(largestDeltaAxis,"largestDeltaAxis");
		HX_STACK_LINE(379)
		bool doScale = false;		HX_STACK_VAR(doScale,"doScale");
		HX_STACK_LINE(380)
		Float perPlusMinus = (int)0;		HX_STACK_VAR(perPlusMinus,"perPlusMinus");
		HX_STACK_LINE(381)
		if (((largestDeltaAxis->i == ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::AXIS_X))){
			HX_STACK_LINE(383)
			doScale = true;
			HX_STACK_LINE(384)
			perPlusMinus = (Float(largestDeltaAxis->f) / Float(this->_buf_wid));
		}
		else{
			HX_STACK_LINE(387)
			if (((largestDeltaAxis->i == ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::AXIS_Y))){
				HX_STACK_LINE(389)
				doScale = true;
				HX_STACK_LINE(390)
				perPlusMinus = (Float(largestDeltaAxis->f) / Float(this->_buf_hig));
			}
			else{
				HX_STACK_LINE(392)
				if (((largestDeltaAxis->i == ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::AXIS_IDENTICAL))){
					HX_STACK_LINE(394)
					doScale = true;
					HX_STACK_LINE(395)
					Float diagSpan = ::Math_obj::sqrt(((this->_buf_wid * this->_buf_wid) + (this->_buf_hig * this->_buf_hig)));		HX_STACK_VAR(diagSpan,"diagSpan");
					HX_STACK_LINE(396)
					perPlusMinus = (Float(largestDeltaAxis->f) / Float(diagSpan));
				}
				else{
					HX_STACK_LINE(398)
					if (((largestDeltaAxis->i == ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::AXIS_INVALID))){
						HX_STACK_LINE(400)
						doScale = false;
						HX_STACK_LINE(401)
						return null();
					}
					else{
						HX_STACK_LINE(405)
						::jmSubLibs::EU_obj::msg(HX_CSTRING("Bad delta code. TileMapUpdateMGR.hx"));
					}
				}
			}
		}
		HX_STACK_LINE(409)
		if ((doScale)){
			HX_STACK_LINE(413)
			Float scaleFactor = (this->_mt0z + perPlusMinus);		HX_STACK_VAR(scaleFactor,"scaleFactor");
			HX_STACK_LINE(417)
			if (((scaleFactor <= (int)1))){
				HX_STACK_LINE(417)
				scaleFactor = (int)1;
			}
			HX_STACK_LINE(419)
			this->setZoom(scaleFactor,false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TileMapUpdateMGR_obj,readPinch_DEFAULT_CONTINUE,(void))

Void TileMapUpdateMGR_obj::readPinch_DEFAULT_END( int inX0,int inY0,int inX1,int inY1){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","readPinch_DEFAULT_END",0x05afcdeb,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.readPinch_DEFAULT_END","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",427,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX0,"inX0")
		HX_STACK_ARG(inY0,"inY0")
		HX_STACK_ARG(inX1,"inX1")
		HX_STACK_ARG(inY1,"inY1")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TileMapUpdateMGR_obj,readPinch_DEFAULT_END,(void))

int TileMapUpdateMGR_obj::getTileUnderPixelX( int inBufX,bool inReturnWrapped){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","getTileUnderPixelX",0x97518d1d,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.getTileUnderPixelX","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",442,0xa450226b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inBufX,"inBufX")
	HX_STACK_ARG(inReturnWrapped,"inReturnWrapped")
	HX_STACK_LINE(443)
	int opX = this->_vpRen->getTileUnderPixelX(inBufX,inReturnWrapped);		HX_STACK_VAR(opX,"opX");
	HX_STACK_LINE(444)
	return opX;
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapUpdateMGR_obj,getTileUnderPixelX,return )

int TileMapUpdateMGR_obj::getTileUnderPixelY( int inBufY,bool inReturnWrapped){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","getTileUnderPixelY",0x97518d1e,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.getTileUnderPixelY","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",457,0xa450226b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inBufY,"inBufY")
	HX_STACK_ARG(inReturnWrapped,"inReturnWrapped")
	HX_STACK_LINE(458)
	int opY = this->_vpRen->getTileUnderPixelY(inBufY,inReturnWrapped);		HX_STACK_VAR(opY,"opY");
	HX_STACK_LINE(459)
	return opY;
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapUpdateMGR_obj,getTileUnderPixelY,return )

Void TileMapUpdateMGR_obj::panTileToCenterScreenX( int inTileX,bool inDoAnim){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","panTileToCenterScreenX",0xc9a07788,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.panTileToCenterScreenX","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",472,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inTileX,"inTileX")
		HX_STACK_ARG(inDoAnim,"inDoAnim")
		HX_STACK_LINE(473)
		int _g = ::Std_obj::_int((Float(this->_buf_wid) / Float((int)2)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(473)
		this->panTileToScreenPixelX(inTileX,_g,inDoAnim);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapUpdateMGR_obj,panTileToCenterScreenX,(void))

Void TileMapUpdateMGR_obj::panTileToScreenPixelX( int inTileX,int inScreenBufferPosX,bool inDoAnim){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","panTileToScreenPixelX",0x4144134d,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.panTileToScreenPixelX","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",478,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inTileX,"inTileX")
		HX_STACK_ARG(inScreenBufferPosX,"inScreenBufferPosX")
		HX_STACK_ARG(inDoAnim,"inDoAnim")
		HX_STACK_LINE(480)
		Float pp = ((inTileX * this->_d->tWX) + (this->_d->tWX * 0.5));		HX_STACK_VAR(pp,"pp");
		HX_STACK_LINE(487)
		Float ppS;		HX_STACK_VAR(ppS,"ppS");
		HX_STACK_LINE(489)
		ppS = (pp - inScreenBufferPosX);
		HX_STACK_LINE(492)
		if (((this->_anim->focal->x->cur < 0.5))){
			HX_STACK_LINE(494)
			hx::AddEq(ppS,(this->_buf_wid * 0.25));
		}
		else{
			HX_STACK_LINE(496)
			if (((this->_anim->focal->x->cur > 0.5))){
				HX_STACK_LINE(498)
				hx::SubEq(ppS,(this->_buf_wid * 0.25));
			}
		}
		HX_STACK_LINE(502)
		this->_anim->scroll->x->setDest(ppS,inDoAnim);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TileMapUpdateMGR_obj,panTileToScreenPixelX,(void))

Void TileMapUpdateMGR_obj::panTileToScreenPixelY( int inTileY,int inScreenBufferPosY,bool inDoAnim){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","panTileToScreenPixelY",0x4144134e,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.panTileToScreenPixelY","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",506,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inTileY,"inTileY")
		HX_STACK_ARG(inScreenBufferPosY,"inScreenBufferPosY")
		HX_STACK_ARG(inDoAnim,"inDoAnim")
		HX_STACK_LINE(508)
		Float pp = ((inTileY * this->_d->tHY) + (this->_d->tHY * 0.5));		HX_STACK_VAR(pp,"pp");
		HX_STACK_LINE(515)
		Float ppS;		HX_STACK_VAR(ppS,"ppS");
		HX_STACK_LINE(517)
		ppS = (pp - inScreenBufferPosY);
		HX_STACK_LINE(521)
		if (((this->_anim->focal->x->cur < 0.5))){
			HX_STACK_LINE(523)
			hx::AddEq(ppS,(this->_buf_hig * 0.25));
		}
		else{
			HX_STACK_LINE(525)
			if (((this->_anim->focal->x->cur > 0.5))){
				HX_STACK_LINE(527)
				hx::SubEq(ppS,(this->_buf_hig * 0.25));
			}
		}
		HX_STACK_LINE(531)
		this->_anim->scroll->y->setDest(ppS,inDoAnim);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TileMapUpdateMGR_obj,panTileToScreenPixelY,(void))

Void TileMapUpdateMGR_obj::panTileToCenterScreenY( int inTileY,bool inDoAnim){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","panTileToCenterScreenY",0xc9a07789,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.panTileToCenterScreenY","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",544,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inTileY,"inTileY")
		HX_STACK_ARG(inDoAnim,"inDoAnim")
		HX_STACK_LINE(545)
		int _g = ::Std_obj::_int((Float(this->_buf_hig) / Float((int)2)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(545)
		this->panTileToScreenPixelY(inTileY,_g,inDoAnim);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapUpdateMGR_obj,panTileToCenterScreenY,(void))

Void TileMapUpdateMGR_obj::readTouch_DEFAULT_END( int inBufX,int inBufY){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","readTouch_DEFAULT_END",0xcf816af0,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.readTouch_DEFAULT_END","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",551,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inBufX,"inBufX")
		HX_STACK_ARG(inBufY,"inBufY")
		HX_STACK_LINE(552)
		this->_isTP = false;
		HX_STACK_LINE(569)
		int deltaX = (this->_tp->ix - inBufX);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(570)
		int deltaY = (this->_tp->iy - inBufY);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(571)
		if (((deltaX < (int)0))){
			HX_STACK_LINE(571)
			deltaX = ((int)0 - deltaX);
		}
		HX_STACK_LINE(572)
		if (((deltaY < (int)0))){
			HX_STACK_LINE(572)
			deltaY = ((int)0 - deltaY);
		}
		HX_STACK_LINE(574)
		int hX = this->_vpRen->getScaledHalfTileForTolerancesX();		HX_STACK_VAR(hX,"hX");
		HX_STACK_LINE(575)
		int hY = this->_vpRen->getScaledHalfTileForTolerancesY();		HX_STACK_VAR(hY,"hY");
		HX_STACK_LINE(581)
		if (((bool((deltaY < hX)) && bool((deltaY < hY))))){
			HX_STACK_LINE(584)
			int tileX0 = this->getTileUnderPixelX(this->_tp->ix,false);		HX_STACK_VAR(tileX0,"tileX0");
			HX_STACK_LINE(585)
			int tileY0 = this->getTileUnderPixelY(this->_tp->iy,false);		HX_STACK_VAR(tileY0,"tileY0");
			HX_STACK_LINE(587)
			this->panTileToCenterScreenX(tileX0,true);
			HX_STACK_LINE(588)
			this->panTileToCenterScreenY(tileY0,true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapUpdateMGR_obj,readTouch_DEFAULT_END,(void))

Void TileMapUpdateMGR_obj::readPinch( int inX0,int inY0,int inX1,int inY1){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","readPinch",0x3cd90a8d,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.readPinch","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",614,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX0,"inX0")
		HX_STACK_ARG(inY0,"inY0")
		HX_STACK_ARG(inX1,"inX1")
		HX_STACK_ARG(inY1,"inY1")
		HX_STACK_LINE(614)
		this->_act->readPinch(inX0,inY0,inX1,inY1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TileMapUpdateMGR_obj,readPinch,(void))

Void TileMapUpdateMGR_obj::beginInit( int inNumBoundFuncEntries){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","beginInit",0x37eaa962,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.beginInit","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",622,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inNumBoundFuncEntries,"inNumBoundFuncEntries")
		HX_STACK_LINE(625)
		if ((this->_inited)){
			HX_STACK_LINE(625)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("TileMapUpdateMGR.hx :: beginInit() :: NO RE-INIT!"));
		}
		HX_STACK_LINE(626)
		if (((this->_initPhase != ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::NOT_INITED))){
			HX_STACK_LINE(626)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("TileMapUpdateMGR.hx :: beginInit() FAIL"));
		}
		HX_STACK_LINE(628)
		this->_initPhase = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::INIT_BEGIN;
		HX_STACK_LINE(632)
		Array< ::Dynamic > _g1;		HX_STACK_VAR(_g1,"_g1");
		struct _Function_1_1{
			inline static Array< ::Dynamic > Block( int &inNumBoundFuncEntries){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",632,0xa450226b)
				{
					HX_STACK_LINE(632)
					Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(632)
					Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new()->__SetSizeExact(inNumBoundFuncEntries);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(632)
					this1 = _g;
					HX_STACK_LINE(632)
					return this1;
				}
				return null();
			}
		};
		HX_STACK_LINE(632)
		_g1 = _Function_1_1::Block(inNumBoundFuncEntries);
		HX_STACK_LINE(632)
		this->_reg = _g1;
		HX_STACK_LINE(635)
		this->_reg_len = inNumBoundFuncEntries;
		HX_STACK_LINE(646)
		this->_vpRen->linkTMR_BoundSYS_FUNCS(this->_reg,inNumBoundFuncEntries);
		HX_STACK_LINE(648)
		if (((inNumBoundFuncEntries <= (int)0))){
			HX_STACK_LINE(648)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::msg(HX_CSTRING("badInputLen!42432"));
		}
		HX_STACK_LINE(649)
		if (((this->_reg_len <= (int)0))){
			HX_STACK_LINE(649)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::msg(HX_CSTRING("bad reg len 23432"));
		}
		HX_STACK_LINE(650)
		if (((this->_reg_len != inNumBoundFuncEntries))){
			HX_STACK_LINE(650)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::msg(HX_CSTRING("lens dont match![3423]XX"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapUpdateMGR_obj,beginInit,(void))

Void TileMapUpdateMGR_obj::setViewPortBuffer( ::openfl::display::BitmapData inBuf){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","setViewPortBuffer",0xec1d19f1,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.setViewPortBuffer","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",670,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inBuf,"inBuf")
		HX_STACK_LINE(671)
		if (((this->_initPhase != ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::INIT_BEGIN))){
			HX_STACK_LINE(673)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("ERROR_CODE#0015_INIT"));
		}
		HX_STACK_LINE(677)
		this->_buf = inBuf;
		HX_STACK_LINE(678)
		int _g = inBuf->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(678)
		this->_buf_wid = _g;
		HX_STACK_LINE(679)
		int _g1 = inBuf->get_height();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(679)
		this->_buf_hig = _g1;
		HX_STACK_LINE(681)
		if (((bool((this->_buf_wid <= (int)0)) || bool((this->_buf_hig <= (int)0))))){
			HX_STACK_LINE(683)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("ERROR_CODE:#0014_IBUF_SIZE"));
		}
		HX_STACK_LINE(686)
		this->_hasBuf = true;
		HX_STACK_LINE(699)
		this->_vpRen->linkViewPortBuffer(inBuf);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapUpdateMGR_obj,setViewPortBuffer,(void))

Void TileMapUpdateMGR_obj::addFN_GetGraphics( Dynamic inFunc,::String inFuncName,::String inSYS_ID){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","addFN_GetGraphics",0xe14dd514,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.addFN_GetGraphics","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",715,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inFunc,"inFunc")
		HX_STACK_ARG(inFuncName,"inFuncName")
		HX_STACK_ARG(inSYS_ID,"inSYS_ID")
		HX_STACK_LINE(716)
		::jmSubLibs::EU_obj::sid(inFuncName,HX_CSTRING("ERROR_CODE#0014_GGFUN"));
		HX_STACK_LINE(717)
		::jmSubLibs::EU_obj::sid(inSYS_ID,HX_CSTRING("ERROR_CODE#0013_SYSID"));
		HX_STACK_LINE(720)
		if (((this->_initPhase != ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::INIT_BEGIN))){
			HX_STACK_LINE(720)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("ERRORID#0001-AAAA"));
		}
		HX_STACK_LINE(723)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS_obj::addFN_GetGraphics(this->_reg,inFunc,inFuncName,inSYS_ID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TileMapUpdateMGR_obj,addFN_GetGraphics,(void))

Void TileMapUpdateMGR_obj::addFN_GetTileFrameID( Dynamic inFunc,::String inFuncName,::String inSYS_ID){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","addFN_GetTileFrameID",0x51445311,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.addFN_GetTileFrameID","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",731,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inFunc,"inFunc")
		HX_STACK_ARG(inFuncName,"inFuncName")
		HX_STACK_ARG(inSYS_ID,"inSYS_ID")
		HX_STACK_LINE(733)
		::jmSubLibs::EU_obj::sid(inFuncName,HX_CSTRING("ERROR_CODE#0212_MODUP"));
		HX_STACK_LINE(734)
		::jmSubLibs::EU_obj::sid(inSYS_ID,HX_CSTRING("ERROR_CODE#0211_SYSID"));
		HX_STACK_LINE(737)
		if (((this->_initPhase != ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::INIT_BEGIN))){
			HX_STACK_LINE(737)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("ERRORID#0028-addFN"));
		}
		HX_STACK_LINE(740)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS_obj::addFN_GetTileFrameID(this->_reg,inFunc,inFuncName,inSYS_ID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TileMapUpdateMGR_obj,addFN_GetTileFrameID,(void))

Void TileMapUpdateMGR_obj::addFN_ModelUpdate( Dynamic inFunc,::String inFuncName,::String inSYS_ID){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","addFN_ModelUpdate",0x25cbdc25,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.addFN_ModelUpdate","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",754,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inFunc,"inFunc")
		HX_STACK_ARG(inFuncName,"inFuncName")
		HX_STACK_ARG(inSYS_ID,"inSYS_ID")
		HX_STACK_LINE(755)
		::jmSubLibs::EU_obj::sid(inFuncName,HX_CSTRING("ERROR_CODE#0012_MODUP"));
		HX_STACK_LINE(756)
		::jmSubLibs::EU_obj::sid(inSYS_ID,HX_CSTRING("ERROR_CODE#0011_SYSID"));
		HX_STACK_LINE(759)
		if (((this->_initPhase != ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::INIT_BEGIN))){
			HX_STACK_LINE(759)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("ERRORID#0008-addFN"));
		}
		HX_STACK_LINE(762)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS_obj::addFN_ModelUpdate(this->_reg,inFunc,inFuncName,inSYS_ID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TileMapUpdateMGR_obj,addFN_ModelUpdate,(void))

Void TileMapUpdateMGR_obj::addFN_ResizeBMaps( Dynamic inFunc,::String inFuncName,::String inSYS_ID){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","addFN_ResizeBMaps",0x8869ded8,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.addFN_ResizeBMaps","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",768,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inFunc,"inFunc")
		HX_STACK_ARG(inFuncName,"inFuncName")
		HX_STACK_ARG(inSYS_ID,"inSYS_ID")
		HX_STACK_LINE(769)
		::jmSubLibs::EU_obj::sid(inFuncName,HX_CSTRING("ERROR_CODE#0009_RBMAP"));
		HX_STACK_LINE(770)
		::jmSubLibs::EU_obj::sid(inSYS_ID,HX_CSTRING("ERROR_CODE#0010_SYSID"));
		HX_STACK_LINE(773)
		if (((this->_initPhase != ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::INIT_BEGIN))){
			HX_STACK_LINE(773)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("ERRORID#0008-addFN"));
		}
		HX_STACK_LINE(776)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS_obj::addFN_ResizeBMapsFN(this->_reg,inFunc,inFuncName,inSYS_ID);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TileMapUpdateMGR_obj,addFN_ResizeBMaps,(void))

Void TileMapUpdateMGR_obj::endInit( ){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","endInit",0xba8d5fd4,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.endInit","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",783,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(785)
		if ((this->_inited)){
			HX_STACK_LINE(785)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("TileMapUpdateMGR.hx :: endInit() :: NO RE-INIT!"));
		}
		HX_STACK_LINE(786)
		if (((this->_initPhase != ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::INIT_BEGIN))){
			HX_STACK_LINE(786)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("TileMapUpdateMGR.hx :: endInit() FAIL"));
		}
		HX_STACK_LINE(790)
		this->_initPhase = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::INIT_FINAL;
		HX_STACK_LINE(794)
		this->_inited = true;
		HX_STACK_LINE(798)
		if (((this->_d->tWX <= (int)0))){
			HX_STACK_LINE(798)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::msg(HX_CSTRING("@endInit() _d.tWX <= 0 is bad"));
		}
		HX_STACK_LINE(799)
		if (((this->_d->tHY <= (int)0))){
			HX_STACK_LINE(799)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::msg(HX_CSTRING("@endInit() _d.tHY <= 0 is bad"));
		}
		HX_STACK_LINE(800)
		if (((this->_anim->zoom->cur <= (int)0))){
			HX_STACK_LINE(800)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::msg(HX_CSTRING("@endInit() _anim.zoom.cur <= 0 is bad."));
		}
		HX_STACK_LINE(804)
		this->_dex = (int)-1;
		HX_STACK_LINE(805)
		while((true)){
			HX_STACK_LINE(806)
			(this->_dex)++;
			HX_STACK_LINE(806)
			if (((this->_dex >= this->_reg_len))){
				HX_STACK_LINE(806)
				break;
			}
			HX_STACK_LINE(808)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS _g = this->_reg->__unsafe_get(this->_dex);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(808)
			this->_bnd = _g;
			HX_STACK_LINE(811)
			if (((this->_bnd->getGraphicsFN->b != true))){
				HX_STACK_LINE(813)
				::jmSubLibs::EU_obj::msg(HX_CSTRING("ERROR_CODE:#0013_BND_REQ"));
			}
		}
		HX_STACK_LINE(821)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS_obj::errorIfNullSlots(this->_reg);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileMapUpdateMGR_obj,endInit,(void))

Void TileMapUpdateMGR_obj::setZoomSpeed( Float spd){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","setZoomSpeed",0x23632b89,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.setZoomSpeed","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",829,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(spd,"spd")
		HX_STACK_LINE(830)
		if (((spd <= (int)0))){
			HX_STACK_LINE(830)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::msg(HX_CSTRING("Zoom speed cannot be zero or negative."));
		}
		HX_STACK_LINE(832)
		this->_anim->zoom->speed = spd;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapUpdateMGR_obj,setZoomSpeed,(void))

Void TileMapUpdateMGR_obj::setZoom( Float inZoomAmount,bool inDoAnimate){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","setZoom",0xa92a4f1e,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.setZoom","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",843,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inZoomAmount,"inZoomAmount")
		HX_STACK_ARG(inDoAnimate,"inDoAnimate")
		HX_STACK_LINE(843)
		this->_anim->zoom->setDest(inZoomAmount,inDoAnimate);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapUpdateMGR_obj,setZoom,(void))

Float TileMapUpdateMGR_obj::getZoom( ){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","getZoom",0xb628be12,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.getZoom","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",848,0xa450226b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(848)
	return this->_anim->zoom->cur;
}


HX_DEFINE_DYNAMIC_FUNC0(TileMapUpdateMGR_obj,getZoom,return )

Void TileMapUpdateMGR_obj::setZoomFocalX( Float inPerX,bool inDoAnimate){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","setZoomFocalX",0x0c033811,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.setZoomFocalX","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",859,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inPerX,"inPerX")
		HX_STACK_ARG(inDoAnimate,"inDoAnimate")
		HX_STACK_LINE(861)
		if (((inPerX < (int)0))){
			HX_STACK_LINE(861)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::msg(HX_CSTRING("[setZoomFocalY()::[inPerX < 0]]"));
		}
		HX_STACK_LINE(862)
		if (((inPerX > (int)1))){
			HX_STACK_LINE(862)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::msg(HX_CSTRING("[setZoomFocalY()::[inPerX < 0]]"));
		}
		HX_STACK_LINE(864)
		this->_anim->focal->x->setDest(inPerX,inDoAnimate);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapUpdateMGR_obj,setZoomFocalX,(void))

Void TileMapUpdateMGR_obj::setZoomFocalY( Float inPerY,bool inDoAnimate){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","setZoomFocalY",0x0c033812,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.setZoomFocalY","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",875,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inPerY,"inPerY")
		HX_STACK_ARG(inDoAnimate,"inDoAnimate")
		HX_STACK_LINE(877)
		if (((inPerY < (int)0))){
			HX_STACK_LINE(877)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::msg(HX_CSTRING("[setZoomFocalY()::[inPerY < 0]]"));
		}
		HX_STACK_LINE(878)
		if (((inPerY > (int)1))){
			HX_STACK_LINE(878)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR_obj::msg(HX_CSTRING("[setZoomFocalY()::[inPerY < 0]]"));
		}
		HX_STACK_LINE(880)
		this->_anim->focal->y->setDest(inPerY,inDoAnimate);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapUpdateMGR_obj,setZoomFocalY,(void))

Void TileMapUpdateMGR_obj::setScrollX( Float inScrollAmtX,bool inDoAnimate){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","setScrollX",0x053f6080,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.setScrollX","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",893,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inScrollAmtX,"inScrollAmtX")
		HX_STACK_ARG(inDoAnimate,"inDoAnimate")
		HX_STACK_LINE(893)
		this->_anim->scroll->x->setDest(inScrollAmtX,inDoAnimate);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapUpdateMGR_obj,setScrollX,(void))

Void TileMapUpdateMGR_obj::setScrollY( Float inScrollAmtY,bool inDoAnimate){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","setScrollY",0x053f6081,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.setScrollY","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",906,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inScrollAmtY,"inScrollAmtY")
		HX_STACK_ARG(inDoAnimate,"inDoAnimate")
		HX_STACK_LINE(906)
		this->_anim->scroll->y->setDest(inScrollAmtY,inDoAnimate);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapUpdateMGR_obj,setScrollY,(void))

Void TileMapUpdateMGR_obj::update( ){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","update",0x7e7ed6e0,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.update","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",913,0xa450226b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(932)
		(this->_ft->i)++;
		HX_STACK_LINE(935)
		this->_act->update();
		HX_STACK_LINE(938)
		this->_anim->update();
		HX_STACK_LINE(941)
		this->_buf->lock();
		HX_STACK_LINE(944)
		this->_vpRen->drawViewPortToBuffer();
		HX_STACK_LINE(946)
		this->_buf->unlock(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileMapUpdateMGR_obj,update,(void))

::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair TileMapUpdateMGR_obj::getOnScreenArea( ){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","getOnScreenArea",0x49406d17,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.getOnScreenArea","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",955,0xa450226b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(959)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair op = this->_vpRen->getOnScreenArea();		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(967)
	return op;
}


HX_DEFINE_DYNAMIC_FUNC0(TileMapUpdateMGR_obj,getOnScreenArea,return )

::String TileMapUpdateMGR_obj::NOT_INITED;

::String TileMapUpdateMGR_obj::INIT_BEGIN;

::String TileMapUpdateMGR_obj::INIT_FINAL;

Void TileMapUpdateMGR_obj::msg( ::String inMSG){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR","msg",0x7524ed0a,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR.msg","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/TileMapUpdateMGR.hx",974,0xa450226b)
		HX_STACK_ARG(inMSG,"inMSG")
		HX_STACK_LINE(974)
		::jmSubLibs::EU_obj::msg((HX_CSTRING("TileMapUpdateMGR.hx msg==") + inMSG));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileMapUpdateMGR_obj,msg,(void))


TileMapUpdateMGR_obj::TileMapUpdateMGR_obj()
{
}

void TileMapUpdateMGR_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileMapUpdateMGR);
	HX_MARK_MEMBER_NAME(_initPhase,"_initPhase");
	HX_MARK_MEMBER_NAME(_inited,"_inited");
	HX_MARK_MEMBER_NAME(_buf_hig,"_buf_hig");
	HX_MARK_MEMBER_NAME(_buf_wid,"_buf_wid");
	HX_MARK_MEMBER_NAME(_hasBuf,"_hasBuf");
	HX_MARK_MEMBER_NAME(_buf,"_buf");
	HX_MARK_MEMBER_NAME(_tp,"_tp");
	HX_MARK_MEMBER_NAME(_tp_tile_on_down,"_tp_tile_on_down");
	HX_MARK_MEMBER_NAME(_ft,"_ft");
	HX_MARK_MEMBER_NAME(_mt0,"_mt0");
	HX_MARK_MEMBER_NAME(_mt1,"_mt1");
	HX_MARK_MEMBER_NAME(_mt0z,"_mt0z");
	HX_MARK_MEMBER_NAME(_isTP,"_isTP");
	HX_MARK_MEMBER_NAME(_isMT,"_isMT");
	HX_MARK_MEMBER_NAME(_act,"_act");
	HX_MARK_MEMBER_NAME(_reg,"_reg");
	HX_MARK_MEMBER_NAME(_reg_len,"_reg_len");
	HX_MARK_MEMBER_NAME(_dex,"_dex");
	HX_MARK_MEMBER_NAME(_bnd,"_bnd");
	HX_MARK_MEMBER_NAME(_vpRen,"_vpRen");
	HX_MARK_MEMBER_NAME(_anim,"_anim");
	HX_MARK_MEMBER_NAME(_d,"_d");
	HX_MARK_END_CLASS();
}

void TileMapUpdateMGR_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_initPhase,"_initPhase");
	HX_VISIT_MEMBER_NAME(_inited,"_inited");
	HX_VISIT_MEMBER_NAME(_buf_hig,"_buf_hig");
	HX_VISIT_MEMBER_NAME(_buf_wid,"_buf_wid");
	HX_VISIT_MEMBER_NAME(_hasBuf,"_hasBuf");
	HX_VISIT_MEMBER_NAME(_buf,"_buf");
	HX_VISIT_MEMBER_NAME(_tp,"_tp");
	HX_VISIT_MEMBER_NAME(_tp_tile_on_down,"_tp_tile_on_down");
	HX_VISIT_MEMBER_NAME(_ft,"_ft");
	HX_VISIT_MEMBER_NAME(_mt0,"_mt0");
	HX_VISIT_MEMBER_NAME(_mt1,"_mt1");
	HX_VISIT_MEMBER_NAME(_mt0z,"_mt0z");
	HX_VISIT_MEMBER_NAME(_isTP,"_isTP");
	HX_VISIT_MEMBER_NAME(_isMT,"_isMT");
	HX_VISIT_MEMBER_NAME(_act,"_act");
	HX_VISIT_MEMBER_NAME(_reg,"_reg");
	HX_VISIT_MEMBER_NAME(_reg_len,"_reg_len");
	HX_VISIT_MEMBER_NAME(_dex,"_dex");
	HX_VISIT_MEMBER_NAME(_bnd,"_bnd");
	HX_VISIT_MEMBER_NAME(_vpRen,"_vpRen");
	HX_VISIT_MEMBER_NAME(_anim,"_anim");
	HX_VISIT_MEMBER_NAME(_d,"_d");
}

Dynamic TileMapUpdateMGR_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_d") ) { return _d; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"msg") ) { return msg_dyn(); }
		if (HX_FIELD_EQ(inName,"_tp") ) { return _tp; }
		if (HX_FIELD_EQ(inName,"_ft") ) { return _ft; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_buf") ) { return _buf; }
		if (HX_FIELD_EQ(inName,"_mt0") ) { return _mt0; }
		if (HX_FIELD_EQ(inName,"_mt1") ) { return _mt1; }
		if (HX_FIELD_EQ(inName,"_act") ) { return _act; }
		if (HX_FIELD_EQ(inName,"_reg") ) { return _reg; }
		if (HX_FIELD_EQ(inName,"_dex") ) { return _dex; }
		if (HX_FIELD_EQ(inName,"_bnd") ) { return _bnd; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_mt0z") ) { return _mt0z; }
		if (HX_FIELD_EQ(inName,"_isTP") ) { return _isTP; }
		if (HX_FIELD_EQ(inName,"_isMT") ) { return _isMT; }
		if (HX_FIELD_EQ(inName,"_anim") ) { return _anim; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_vpRen") ) { return _vpRen; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inited") ) { return _inited; }
		if (HX_FIELD_EQ(inName,"_hasBuf") ) { return _hasBuf; }
		if (HX_FIELD_EQ(inName,"endInit") ) { return endInit_dyn(); }
		if (HX_FIELD_EQ(inName,"setZoom") ) { return setZoom_dyn(); }
		if (HX_FIELD_EQ(inName,"getZoom") ) { return getZoom_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buf_hig") ) { return _buf_hig; }
		if (HX_FIELD_EQ(inName,"_buf_wid") ) { return _buf_wid; }
		if (HX_FIELD_EQ(inName,"_reg_len") ) { return _reg_len; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readPinch") ) { return readPinch_dyn(); }
		if (HX_FIELD_EQ(inName,"beginInit") ) { return beginInit_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"NOT_INITED") ) { return NOT_INITED; }
		if (HX_FIELD_EQ(inName,"INIT_BEGIN") ) { return INIT_BEGIN; }
		if (HX_FIELD_EQ(inName,"INIT_FINAL") ) { return INIT_FINAL; }
		if (HX_FIELD_EQ(inName,"_initPhase") ) { return _initPhase; }
		if (HX_FIELD_EQ(inName,"setScrollX") ) { return setScrollX_dyn(); }
		if (HX_FIELD_EQ(inName,"setScrollY") ) { return setScrollY_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setTileDims") ) { return setTileDims_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setZoomSpeed") ) { return setZoomSpeed_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readTileClick") ) { return readTileClick_dyn(); }
		if (HX_FIELD_EQ(inName,"setZoomFocalX") ) { return setZoomFocalX_dyn(); }
		if (HX_FIELD_EQ(inName,"setZoomFocalY") ) { return setZoomFocalY_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setScreenWrapX") ) { return setScreenWrapX_dyn(); }
		if (HX_FIELD_EQ(inName,"setScreenWrapY") ) { return setScreenWrapY_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getFrameTracker") ) { return getFrameTracker_dyn(); }
		if (HX_FIELD_EQ(inName,"getOnScreenArea") ) { return getOnScreenArea_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_tp_tile_on_down") ) { return _tp_tile_on_down; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setViewPortBuffer") ) { return setViewPortBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"addFN_GetGraphics") ) { return addFN_GetGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"addFN_ModelUpdate") ) { return addFN_ModelUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"addFN_ResizeBMaps") ) { return addFN_ResizeBMaps_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getTileUnderPixelX") ) { return getTileUnderPixelX_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileUnderPixelY") ) { return getTileUnderPixelY_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getActionsContainer") ) { return getActionsContainer_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addFN_GetTileFrameID") ) { return addFN_GetTileFrameID_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"readPinch_DEFAULT_END") ) { return readPinch_DEFAULT_END_dyn(); }
		if (HX_FIELD_EQ(inName,"panTileToScreenPixelX") ) { return panTileToScreenPixelX_dyn(); }
		if (HX_FIELD_EQ(inName,"panTileToScreenPixelY") ) { return panTileToScreenPixelY_dyn(); }
		if (HX_FIELD_EQ(inName,"readTouch_DEFAULT_END") ) { return readTouch_DEFAULT_END_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"panTileToCenterScreenX") ) { return panTileToCenterScreenX_dyn(); }
		if (HX_FIELD_EQ(inName,"panTileToCenterScreenY") ) { return panTileToCenterScreenY_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"readGestureZoom_DEFAULT") ) { return readGestureZoom_DEFAULT_dyn(); }
		if (HX_FIELD_EQ(inName,"readTouch_DEFAULT_START") ) { return readTouch_DEFAULT_START_dyn(); }
		if (HX_FIELD_EQ(inName,"readPinch_DEFAULT_START") ) { return readPinch_DEFAULT_START_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"readTouch_DEFAULT_CONTINUE") ) { return readTouch_DEFAULT_CONTINUE_dyn(); }
		if (HX_FIELD_EQ(inName,"readPinch_DEFAULT_CONTINUE") ) { return readPinch_DEFAULT_CONTINUE_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileMapUpdateMGR_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_d") ) { _d=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_tp") ) { _tp=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ft") ) { _ft=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_buf") ) { _buf=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mt0") ) { _mt0=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mt1") ) { _mt1=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_act") ) { _act=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::TileMapActionsContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reg") ) { _reg=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dex") ) { _dex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bnd") ) { _bnd=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_mt0z") ) { _mt0z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isTP") ) { _isTP=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isMT") ) { _isMT=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_anim") ) { _anim=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::ScrollZoomAnimHelper >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_vpRen") ) { _vpRen=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileMapViewPortRenderEr >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_inited") ) { _inited=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hasBuf") ) { _hasBuf=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buf_hig") ) { _buf_hig=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buf_wid") ) { _buf_wid=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reg_len") ) { _reg_len=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"NOT_INITED") ) { NOT_INITED=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INIT_BEGIN") ) { INIT_BEGIN=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INIT_FINAL") ) { INIT_FINAL=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_initPhase") ) { _initPhase=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_tp_tile_on_down") ) { _tp_tile_on_down=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileMapUpdateMGR_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_initPhase"));
	outFields->push(HX_CSTRING("_inited"));
	outFields->push(HX_CSTRING("_buf_hig"));
	outFields->push(HX_CSTRING("_buf_wid"));
	outFields->push(HX_CSTRING("_hasBuf"));
	outFields->push(HX_CSTRING("_buf"));
	outFields->push(HX_CSTRING("_tp"));
	outFields->push(HX_CSTRING("_tp_tile_on_down"));
	outFields->push(HX_CSTRING("_ft"));
	outFields->push(HX_CSTRING("_mt0"));
	outFields->push(HX_CSTRING("_mt1"));
	outFields->push(HX_CSTRING("_mt0z"));
	outFields->push(HX_CSTRING("_isTP"));
	outFields->push(HX_CSTRING("_isMT"));
	outFields->push(HX_CSTRING("_act"));
	outFields->push(HX_CSTRING("_reg"));
	outFields->push(HX_CSTRING("_reg_len"));
	outFields->push(HX_CSTRING("_dex"));
	outFields->push(HX_CSTRING("_bnd"));
	outFields->push(HX_CSTRING("_vpRen"));
	outFields->push(HX_CSTRING("_anim"));
	outFields->push(HX_CSTRING("_d"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NOT_INITED"),
	HX_CSTRING("INIT_BEGIN"),
	HX_CSTRING("INIT_FINAL"),
	HX_CSTRING("msg"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TileMapUpdateMGR_obj,_initPhase),HX_CSTRING("_initPhase")},
	{hx::fsBool,(int)offsetof(TileMapUpdateMGR_obj,_inited),HX_CSTRING("_inited")},
	{hx::fsInt,(int)offsetof(TileMapUpdateMGR_obj,_buf_hig),HX_CSTRING("_buf_hig")},
	{hx::fsInt,(int)offsetof(TileMapUpdateMGR_obj,_buf_wid),HX_CSTRING("_buf_wid")},
	{hx::fsBool,(int)offsetof(TileMapUpdateMGR_obj,_hasBuf),HX_CSTRING("_hasBuf")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(TileMapUpdateMGR_obj,_buf),HX_CSTRING("_buf")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint*/ ,(int)offsetof(TileMapUpdateMGR_obj,_tp),HX_CSTRING("_tp")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint*/ ,(int)offsetof(TileMapUpdateMGR_obj,_tp_tile_on_down),HX_CSTRING("_tp_tile_on_down")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString*/ ,(int)offsetof(TileMapUpdateMGR_obj,_ft),HX_CSTRING("_ft")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair*/ ,(int)offsetof(TileMapUpdateMGR_obj,_mt0),HX_CSTRING("_mt0")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair*/ ,(int)offsetof(TileMapUpdateMGR_obj,_mt1),HX_CSTRING("_mt1")},
	{hx::fsFloat,(int)offsetof(TileMapUpdateMGR_obj,_mt0z),HX_CSTRING("_mt0z")},
	{hx::fsBool,(int)offsetof(TileMapUpdateMGR_obj,_isTP),HX_CSTRING("_isTP")},
	{hx::fsBool,(int)offsetof(TileMapUpdateMGR_obj,_isMT),HX_CSTRING("_isMT")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::TileMapActionsContainer*/ ,(int)offsetof(TileMapUpdateMGR_obj,_act),HX_CSTRING("_act")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TileMapUpdateMGR_obj,_reg),HX_CSTRING("_reg")},
	{hx::fsInt,(int)offsetof(TileMapUpdateMGR_obj,_reg_len),HX_CSTRING("_reg_len")},
	{hx::fsInt,(int)offsetof(TileMapUpdateMGR_obj,_dex),HX_CSTRING("_dex")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS*/ ,(int)offsetof(TileMapUpdateMGR_obj,_bnd),HX_CSTRING("_bnd")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileMapViewPortRenderEr*/ ,(int)offsetof(TileMapUpdateMGR_obj,_vpRen),HX_CSTRING("_vpRen")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::ScrollZoomAnimHelper*/ ,(int)offsetof(TileMapUpdateMGR_obj,_anim),HX_CSTRING("_anim")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims*/ ,(int)offsetof(TileMapUpdateMGR_obj,_d),HX_CSTRING("_d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_initPhase"),
	HX_CSTRING("_inited"),
	HX_CSTRING("_buf_hig"),
	HX_CSTRING("_buf_wid"),
	HX_CSTRING("_hasBuf"),
	HX_CSTRING("_buf"),
	HX_CSTRING("_tp"),
	HX_CSTRING("_tp_tile_on_down"),
	HX_CSTRING("_ft"),
	HX_CSTRING("getFrameTracker"),
	HX_CSTRING("_mt0"),
	HX_CSTRING("_mt1"),
	HX_CSTRING("_mt0z"),
	HX_CSTRING("_isTP"),
	HX_CSTRING("_isMT"),
	HX_CSTRING("setScreenWrapX"),
	HX_CSTRING("setScreenWrapY"),
	HX_CSTRING("_act"),
	HX_CSTRING("_reg"),
	HX_CSTRING("_reg_len"),
	HX_CSTRING("_dex"),
	HX_CSTRING("_bnd"),
	HX_CSTRING("_vpRen"),
	HX_CSTRING("_anim"),
	HX_CSTRING("_d"),
	HX_CSTRING("setTileDims"),
	HX_CSTRING("getActionsContainer"),
	HX_CSTRING("readTileClick"),
	HX_CSTRING("readGestureZoom_DEFAULT"),
	HX_CSTRING("readTouch_DEFAULT_START"),
	HX_CSTRING("readTouch_DEFAULT_CONTINUE"),
	HX_CSTRING("readPinch_DEFAULT_START"),
	HX_CSTRING("readPinch_DEFAULT_CONTINUE"),
	HX_CSTRING("readPinch_DEFAULT_END"),
	HX_CSTRING("getTileUnderPixelX"),
	HX_CSTRING("getTileUnderPixelY"),
	HX_CSTRING("panTileToCenterScreenX"),
	HX_CSTRING("panTileToScreenPixelX"),
	HX_CSTRING("panTileToScreenPixelY"),
	HX_CSTRING("panTileToCenterScreenY"),
	HX_CSTRING("readTouch_DEFAULT_END"),
	HX_CSTRING("readPinch"),
	HX_CSTRING("beginInit"),
	HX_CSTRING("setViewPortBuffer"),
	HX_CSTRING("addFN_GetGraphics"),
	HX_CSTRING("addFN_GetTileFrameID"),
	HX_CSTRING("addFN_ModelUpdate"),
	HX_CSTRING("addFN_ResizeBMaps"),
	HX_CSTRING("endInit"),
	HX_CSTRING("setZoomSpeed"),
	HX_CSTRING("setZoom"),
	HX_CSTRING("getZoom"),
	HX_CSTRING("setZoomFocalX"),
	HX_CSTRING("setZoomFocalY"),
	HX_CSTRING("setScrollX"),
	HX_CSTRING("setScrollY"),
	HX_CSTRING("update"),
	HX_CSTRING("getOnScreenArea"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileMapUpdateMGR_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TileMapUpdateMGR_obj::NOT_INITED,"NOT_INITED");
	HX_MARK_MEMBER_NAME(TileMapUpdateMGR_obj::INIT_BEGIN,"INIT_BEGIN");
	HX_MARK_MEMBER_NAME(TileMapUpdateMGR_obj::INIT_FINAL,"INIT_FINAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileMapUpdateMGR_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TileMapUpdateMGR_obj::NOT_INITED,"NOT_INITED");
	HX_VISIT_MEMBER_NAME(TileMapUpdateMGR_obj::INIT_BEGIN,"INIT_BEGIN");
	HX_VISIT_MEMBER_NAME(TileMapUpdateMGR_obj::INIT_FINAL,"INIT_FINAL");
};

#endif

Class TileMapUpdateMGR_obj::__mClass;

void TileMapUpdateMGR_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.TileMapUpdateMGR"), hx::TCanCast< TileMapUpdateMGR_obj> ,sStaticFields,sMemberFields,
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

void TileMapUpdateMGR_obj::__boot()
{
	NOT_INITED= HX_CSTRING("NOT_INITED");
	INIT_BEGIN= HX_CSTRING("INIT_BEGIN");
	INIT_FINAL= HX_CSTRING("INIT_FINAL");
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace decoupled
} // end namespace tileBased
} // end namespace updater
} // end namespace tmrMGR
