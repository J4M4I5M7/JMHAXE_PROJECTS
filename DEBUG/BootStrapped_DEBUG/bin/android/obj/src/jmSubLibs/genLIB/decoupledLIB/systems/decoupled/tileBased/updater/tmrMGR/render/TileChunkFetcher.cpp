#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_EU
#include <jmSubLibs/EU.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_consts_openfl_geom_PointZZ
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/consts/openfl/geom/PointZZ.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_TypedFunctionBase
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/TypedFunctionBase.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_TXTY_BOOL
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_TXTY_BOOL.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_TXTY_INT
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_TXTY_INT.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_TXTY_WIHI_BITMAPBOOL
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_TXTY_WIHI_BITMAPBOOL.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_genericBases_FN_i_i_bool
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/genericBases/FN_i_i_bool.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_genericBases_FN_i_i_i_i_bitmapBool
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/genericBases/FN_i_i_i_i_bitmapBool.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_genericBases_FN_i_i_int
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/genericBases/FN_i_i_int.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_structs_glue_BitMapBool
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/structs/glue/BitMapBool.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapDims_TileMapDims
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapDims/TileMapDims.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_helpers_TMR_BoundSYS_FUNCS
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/helpers/TMR_BoundSYS_FUNCS.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_render_TCF_Cache
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TCF_Cache.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_render_TileChunkFetcher
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileChunkFetcher.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_glue_IntString
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/glue/IntString.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
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
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace decoupled{
namespace tileBased{
namespace updater{
namespace tmrMGR{
namespace render{

Void TileChunkFetcher_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher","new",0x32bd723c,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher.new","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileChunkFetcher.hx",23,0x30df67cf)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(48)
	this->_has_funcs = false;
	HX_STACK_LINE(45)
	this->_has_dims = false;
	HX_STACK_LINE(166)
	::openfl::display::BitmapData _g = ::openfl::display::BitmapData_obj::__new((int)1,(int)1,true,(int)0,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(166)
	this->_blankerTile = _g;
	HX_STACK_LINE(167)
	::openfl::geom::Rectangle _g1 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(167)
	this->_bmRec = _g1;
	HX_STACK_LINE(168)
	::openfl::geom::Matrix _g2 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(168)
	this->_mat = _g2;
	HX_STACK_LINE(169)
	this->_zz = ::jmSubLibs::genLIB::decoupledLIB::helpers::data::consts::openfl::geom::PointZZ_obj::ZZ;
	HX_STACK_LINE(170)
	::openfl::geom::Rectangle _g3 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(170)
	this->_rect = _g3;
	HX_STACK_LINE(171)
	if (((bool((this->_zz->x != (int)0)) || bool((this->_zz->y != (int)0))))){
		HX_STACK_LINE(173)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileChunkFetcher_obj::msg(HX_CSTRING("_zz is corrupted"));
	}
	HX_STACK_LINE(179)
	::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TCF_Cache _g4 = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TCF_Cache_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(179)
	this->_empty_tile_tc = _g4;
	HX_STACK_LINE(180)
	this->_empty_tile_tc->bm = this->_blankerTile;
	HX_STACK_LINE(181)
	this->_empty_tile_tc->isBlankFlag = true;
	HX_STACK_LINE(182)
	this->_empty_tile_tc->tf = (int)-999;
}
;
	return null();
}

//TileChunkFetcher_obj::~TileChunkFetcher_obj() { }

Dynamic TileChunkFetcher_obj::__CreateEmpty() { return  new TileChunkFetcher_obj; }
hx::ObjectPtr< TileChunkFetcher_obj > TileChunkFetcher_obj::__new()
{  hx::ObjectPtr< TileChunkFetcher_obj > result = new TileChunkFetcher_obj();
	result->__construct();
	return result;}

Dynamic TileChunkFetcher_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileChunkFetcher_obj > result = new TileChunkFetcher_obj();
	result->__construct();
	return result;}

Void TileChunkFetcher_obj::linkFrameTracker( ::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString inFrameTracker){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher","linkFrameTracker",0xf07376c9,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher.linkFrameTracker","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileChunkFetcher.hx",33,0x30df67cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inFrameTracker,"inFrameTracker")
		HX_STACK_LINE(34)
		if (((null() == inFrameTracker))){
			HX_STACK_LINE(34)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileChunkFetcher_obj::msg(HX_CSTRING("inFrameTracker is null"));
		}
		HX_STACK_LINE(35)
		this->_frameTracker = inFrameTracker;
		HX_STACK_LINE(36)
		this->_hasFrameTracker = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileChunkFetcher_obj,linkFrameTracker,(void))

Void TileChunkFetcher_obj::linkDimsObject( ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims inD){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher","linkDimsObject",0xae339388,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher.linkDimsObject","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileChunkFetcher.hx",189,0x30df67cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inD,"inD")
		HX_STACK_LINE(198)
		this->_d = inD;
		HX_STACK_LINE(199)
		this->_has_dims = true;
		HX_STACK_LINE(202)
		this->_tileCache_numTiles = (this->_d->wid * this->_d->hig);
		HX_STACK_LINE(203)
		this->_tileCache_numTilesX = this->_d->wid;
		HX_STACK_LINE(204)
		this->_tileCache_numTilesY = this->_d->hig;
		HX_STACK_LINE(207)
		bool doIt = false;		HX_STACK_VAR(doIt,"doIt");
		HX_STACK_LINE(208)
		if (((null() == this->_tileCache))){
			HX_STACK_LINE(210)
			doIt = true;
		}
		else{
			HX_STACK_LINE(212)
			if (((this->_tileCache->length != this->_tileCache_numTiles))){
				HX_STACK_LINE(214)
				doIt = true;
			}
		}
		HX_STACK_LINE(217)
		if ((doIt)){
			HX_STACK_LINE(220)
			if (((null() != this->_tileCache))){
				HX_STACK_LINE(222)
				::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TCF_Cache_obj::destroyVector(this->_tileCache);
			}
			HX_STACK_LINE(226)
			Array< ::Dynamic > _g = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TCF_Cache_obj::makeVector(this->_tileCache_numTiles);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(226)
			this->_tileCache = _g;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileChunkFetcher_obj,linkDimsObject,(void))

Void TileChunkFetcher_obj::linkTMR_BoundSYS_FUNCS( Array< ::Dynamic > inReg,int inReg_length){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher","linkTMR_BoundSYS_FUNCS",0xe923aac3,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher.linkTMR_BoundSYS_FUNCS","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileChunkFetcher.hx",246,0x30df67cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inReg,"inReg")
		HX_STACK_ARG(inReg_length,"inReg_length")
		HX_STACK_LINE(247)
		this->_regFNS = inReg;
		HX_STACK_LINE(248)
		this->_regFNS_len = inReg_length;
		HX_STACK_LINE(250)
		this->_has_funcs = true;
		HX_STACK_LINE(253)
		if (((this->_regFNS_len != inReg_length))){
			HX_STACK_LINE(253)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileChunkFetcher_obj::msg(HX_CSTRING("lenNoMatch342"));
		}
		HX_STACK_LINE(254)
		if (((this->_regFNS_len <= (int)0))){
			HX_STACK_LINE(254)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileChunkFetcher_obj::msg(HX_CSTRING("badLen2233"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileChunkFetcher_obj,linkTMR_BoundSYS_FUNCS,(void))

int TileChunkFetcher_obj::getWrappedTileValueX( int inTileX){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher","getWrappedTileValueX",0xfe9a9868,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher.getWrappedTileValueX","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileChunkFetcher.hx",261,0x30df67cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inTileX,"inTileX")
	HX_STACK_LINE(262)
	int optX;		HX_STACK_VAR(optX,"optX");
	HX_STACK_LINE(263)
	if (((inTileX < (int)0))){
		HX_STACK_LINE(265)
		optX = hx::Mod(inTileX,this->_d->wid);
		HX_STACK_LINE(266)
		if ((((int)0 == optX))){
			HX_STACK_LINE(266)
			optX = (int)0;
		}
		else{
			HX_STACK_LINE(266)
			optX = (this->_d->wid + optX);
		}
	}
	else{
		HX_STACK_LINE(268)
		if (((inTileX >= this->_d->wid))){
			HX_STACK_LINE(270)
			optX = hx::Mod(inTileX,this->_d->wid);
		}
		else{
			HX_STACK_LINE(274)
			optX = inTileX;
		}
	}
	HX_STACK_LINE(277)
	return optX;
}


HX_DEFINE_DYNAMIC_FUNC1(TileChunkFetcher_obj,getWrappedTileValueX,return )

int TileChunkFetcher_obj::getWrappedTileValueY( int inTileY){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher","getWrappedTileValueY",0xfe9a9869,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher.getWrappedTileValueY","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileChunkFetcher.hx",283,0x30df67cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inTileY,"inTileY")
	HX_STACK_LINE(284)
	int optY;		HX_STACK_VAR(optY,"optY");
	HX_STACK_LINE(285)
	if (((inTileY < (int)0))){
		HX_STACK_LINE(287)
		optY = hx::Mod(inTileY,this->_d->hig);
		HX_STACK_LINE(288)
		if ((((int)0 == optY))){
			HX_STACK_LINE(288)
			optY = (int)0;
		}
		else{
			HX_STACK_LINE(288)
			optY = (this->_d->hig + optY);
		}
	}
	else{
		HX_STACK_LINE(290)
		if (((inTileY >= this->_d->hig))){
			HX_STACK_LINE(292)
			optY = hx::Mod(inTileY,this->_d->hig);
		}
		else{
			HX_STACK_LINE(297)
			optY = inTileY;
		}
	}
	HX_STACK_LINE(300)
	return optY;
}


HX_DEFINE_DYNAMIC_FUNC1(TileChunkFetcher_obj,getWrappedTileValueY,return )

Void TileChunkFetcher_obj::setTileToFetch( int inTileX,int inTileY){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher","setTileToFetch",0xfa4b0e53,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher.setTileToFetch","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileChunkFetcher.hx",308,0x30df67cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inTileX,"inTileX")
		HX_STACK_ARG(inTileY,"inTileY")
		HX_STACK_LINE(319)
		this->_returnBlankTile_OOB = false;
		HX_STACK_LINE(329)
		if (((inTileX < (int)0))){
			HX_STACK_LINE(331)
			if ((this->useWrappingX)){
				HX_STACK_LINE(334)
				this->_tx = hx::Mod(inTileX,this->_d->wid);
				HX_STACK_LINE(335)
				if ((((int)0 == this->_tx))){
					HX_STACK_LINE(335)
					this->_tx = (int)0;
				}
				else{
					HX_STACK_LINE(335)
					this->_tx = (this->_d->wid + this->_tx);
				}
			}
			else{
				HX_STACK_LINE(341)
				this->_returnBlankTile_OOB = true;
			}
		}
		else{
			HX_STACK_LINE(344)
			if (((inTileX >= this->_d->wid))){
				HX_STACK_LINE(346)
				if ((this->useWrappingX)){
					HX_STACK_LINE(348)
					this->_tx = hx::Mod(inTileX,this->_d->wid);
				}
				else{
					HX_STACK_LINE(354)
					this->_returnBlankTile_OOB = true;
				}
			}
			else{
				HX_STACK_LINE(360)
				this->_tx = inTileX;
			}
		}
		HX_STACK_LINE(365)
		if (((inTileY < (int)0))){
			HX_STACK_LINE(367)
			if ((this->useWrappingY)){
				HX_STACK_LINE(370)
				this->_ty = hx::Mod(inTileY,this->_d->hig);
				HX_STACK_LINE(371)
				if ((((int)0 == this->_ty))){
					HX_STACK_LINE(371)
					this->_ty = (int)0;
				}
				else{
					HX_STACK_LINE(371)
					this->_ty = (this->_d->hig + this->_ty);
				}
			}
			else{
				HX_STACK_LINE(377)
				this->_returnBlankTile_OOB = true;
			}
		}
		else{
			HX_STACK_LINE(380)
			if (((inTileY >= this->_d->hig))){
				HX_STACK_LINE(382)
				if ((this->useWrappingY)){
					HX_STACK_LINE(384)
					this->_ty = hx::Mod(inTileY,this->_d->hig);
				}
				else{
					HX_STACK_LINE(390)
					this->_returnBlankTile_OOB = true;
				}
			}
			else{
				HX_STACK_LINE(396)
				this->_ty = inTileY;
			}
		}
		HX_STACK_LINE(399)
		if (((false == this->_returnBlankTile_OOB))){
			HX_STACK_LINE(403)
			this->_ti = ((this->_ty * this->_d->wid) + this->_tx);
			HX_STACK_LINE(414)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TCF_Cache _g = this->_tileCache->__unsafe_get(this->_ti);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(414)
			this->_tc = _g;
		}
		else{
			HX_STACK_LINE(419)
			this->_ti = (int)-777;
			HX_STACK_LINE(427)
			this->_tc = this->_empty_tile_tc;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileChunkFetcher_obj,setTileToFetch,(void))

::openfl::display::BitmapData TileChunkFetcher_obj::getTileChunk( int opWID,int opHIG){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher","getTileChunk",0xae4e038d,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher.getTileChunk","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileChunkFetcher.hx",493,0x30df67cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(opWID,"opWID")
	HX_STACK_ARG(opHIG,"opHIG")
	HX_STACK_LINE(509)
	if ((this->_returnBlankTile_OOB)){
		HX_STACK_LINE(511)
		int _g = this->_blankerTile->get_width();		HX_STACK_VAR(_g,"_g");
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileChunkFetcher_obj > __this,int &opHIG){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileChunkFetcher.hx",511,0x30df67cf)
				{
					HX_STACK_LINE(511)
					int _g1 = __this->_blankerTile->get_height();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(511)
					return (_g1 != opHIG);
				}
				return null();
			}
		};
		HX_STACK_LINE(511)
		if (((  ((!(((_g != opWID))))) ? bool(_Function_2_1::Block(this,opHIG)) : bool(true) ))){
			HX_STACK_LINE(513)
			this->_blankerTile->dispose();
			HX_STACK_LINE(514)
			::openfl::display::BitmapData _g2 = ::openfl::display::BitmapData_obj::__new(opWID,opHIG,true,(int)0,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(514)
			this->_blankerTile = _g2;
		}
		HX_STACK_LINE(519)
		this->_empty_tile_tc->bm = this->_blankerTile;
		HX_STACK_LINE(520)
		this->_empty_tile_tc->tf = (int)-777;
		HX_STACK_LINE(521)
		this->_empty_tile_tc->isBlankFlag = true;
		HX_STACK_LINE(524)
		return this->_blankerTile;
	}
	HX_STACK_LINE(532)
	bool _g3 = this->hasTileChanged();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(532)
	this->_res = _g3;
	HX_STACK_LINE(539)
	if (((false == this->_res))){
		HX_STACK_LINE(542)
		int _g4 = this->_tc->bm->get_width();		HX_STACK_VAR(_g4,"_g4");
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileChunkFetcher_obj > __this,int &opHIG){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileChunkFetcher.hx",543,0x30df67cf)
				{
					HX_STACK_LINE(543)
					int _g5 = __this->_tc->bm->get_height();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(543)
					return (_g5 != opHIG);
				}
				return null();
			}
		};
		HX_STACK_LINE(542)
		if (((  ((!(((_g4 != opWID))))) ? bool(_Function_2_1::Block(this,opHIG)) : bool(true) ))){
			HX_STACK_LINE(549)
			this->_tc->bm->dispose();
			HX_STACK_LINE(550)
			::openfl::display::BitmapData _g6 = ::openfl::display::BitmapData_obj::__new(opWID,opHIG,true,(int)0,null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(550)
			this->_tc->bm = _g6;
		}
		else{
			HX_STACK_LINE(557)
			return this->_tc->bm;
		}
	}
	else{
		HX_STACK_LINE(563)
		int _g7 = this->_tc->bm->get_width();		HX_STACK_VAR(_g7,"_g7");
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileChunkFetcher_obj > __this,int &opHIG){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileChunkFetcher.hx",564,0x30df67cf)
				{
					HX_STACK_LINE(564)
					int _g8 = __this->_tc->bm->get_height();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(564)
					return (_g8 != opHIG);
				}
				return null();
			}
		};
		HX_STACK_LINE(563)
		if (((  ((!(((_g7 != opWID))))) ? bool(_Function_2_1::Block(this,opHIG)) : bool(true) ))){
			HX_STACK_LINE(566)
			this->_tc->bm->dispose();
			HX_STACK_LINE(567)
			::openfl::display::BitmapData _g9 = ::openfl::display::BitmapData_obj::__new(opWID,opHIG,true,(int)0,null());		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(567)
			this->_tc->bm = _g9;
		}
		else{
			HX_STACK_LINE(573)
			this->_rect->x = opWID;
			HX_STACK_LINE(574)
			this->_rect->y = opHIG;
			HX_STACK_LINE(575)
			this->_tc->bm->fillRect(this->_rect,(int)0);
		}
	}
	HX_STACK_LINE(587)
	this->_sDex = this->_oDex;
	HX_STACK_LINE(594)
	this->_fDex = (this->_sDex - (int)1);
	HX_STACK_LINE(595)
	while((true)){
		HX_STACK_LINE(597)
		(this->_fDex)++;
		HX_STACK_LINE(598)
		if (((this->_fDex >= this->_regFNS_len))){
			HX_STACK_LINE(598)
			break;
		}
		HX_STACK_LINE(609)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS _g10 = this->_regFNS->__unsafe_get(this->_fDex);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(609)
		this->_bnd = _g10;
		HX_STACK_LINE(612)
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::structs::glue::BitMapBool _g11 = this->_bnd->getGraphicsFN->f(this->_tx,this->_ty,opWID,opHIG);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(612)
		this->_bb = _g11;
		HX_STACK_LINE(613)
		if (((false == this->_bb->boo))){
			HX_STACK_LINE(613)
			continue;
		}
		HX_STACK_LINE(616)
		this->_bm = this->_bb->map;
		HX_STACK_LINE(619)
		int _g12 = this->_bm->get_width();		HX_STACK_VAR(_g12,"_g12");
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileChunkFetcher_obj > __this,int &opHIG){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileChunkFetcher.hx",619,0x30df67cf)
				{
					HX_STACK_LINE(619)
					int _g13 = __this->_bm->get_height();		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(619)
					return (_g13 != opHIG);
				}
				return null();
			}
		};
		HX_STACK_LINE(619)
		if (((  ((!(((_g12 != opWID))))) ? bool(_Function_2_1::Block(this,opHIG)) : bool(true) ))){
			HX_STACK_LINE(623)
			this->_mat->identity();
			HX_STACK_LINE(624)
			int _g14 = this->_bm->get_width();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(624)
			Float _g15 = (Float(opWID) / Float(_g14));		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(624)
			this->_s_x = _g15;
			HX_STACK_LINE(625)
			int _g16 = this->_bm->get_height();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(625)
			Float _g17 = (Float(opHIG) / Float(_g16));		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(625)
			this->_s_y = _g17;
			HX_STACK_LINE(626)
			this->_mat->scale(this->_s_x,this->_s_y);
			HX_STACK_LINE(627)
			this->_tc->bm->draw(this->_bm,this->_mat,null(),null(),null(),false);
		}
		else{
			HX_STACK_LINE(631)
			this->_bmRec->width = opWID;
			HX_STACK_LINE(632)
			this->_bmRec->height = opHIG;
			HX_STACK_LINE(633)
			this->_tc->bm->copyPixels(this->_bm,this->_bmRec,this->_zz,null(),null(),true);
		}
	}
	HX_STACK_LINE(640)
	this->_tc->tf = this->_frameTracker->i;
	HX_STACK_LINE(643)
	return this->_tc->bm;
}


HX_DEFINE_DYNAMIC_FUNC2(TileChunkFetcher_obj,getTileChunk,return )

bool TileChunkFetcher_obj::hasTileChanged( ){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher","hasTileChanged",0x466565d0,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher.hasTileChanged","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileChunkFetcher.hx",671,0x30df67cf)
	HX_STACK_THIS(this)
	HX_STACK_LINE(679)
	this->_hasTileChanged_outputVar = false;
	HX_STACK_LINE(685)
	if ((this->_returnBlankTile_OOB)){
		HX_STACK_LINE(691)
		return false;
		HX_STACK_LINE(711)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileChunkFetcher_obj::msg(HX_CSTRING("we should never get here"));
	}
	else{
		HX_STACK_LINE(717)
		if ((this->_tc->isBlankFlag)){
			HX_STACK_LINE(719)
			this->_hasTileChanged_outputVar = true;
			HX_STACK_LINE(720)
			this->_tc->isBlankFlag = false;
		}
	}
	HX_STACK_LINE(732)
	this->_fDex = this->_regFNS_len;
	HX_STACK_LINE(733)
	while((true)){
		HX_STACK_LINE(735)
		(this->_fDex)--;
		HX_STACK_LINE(736)
		if (((this->_fDex < (int)0))){
			HX_STACK_LINE(736)
			break;
		}
		HX_STACK_LINE(737)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS _g = this->_regFNS->__unsafe_get(this->_fDex);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(737)
		this->_bnd = _g;
		HX_STACK_LINE(741)
		if (((false == this->_hasTileChanged_outputVar))){
			HX_STACK_LINE(743)
			if ((this->_bnd->getTileFrameIDFN->b)){
				HX_STACK_LINE(753)
				int _g1 = this->_bnd->getTileFrameIDFN->f(this->_tx,this->_ty);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(753)
				bool _g2 = (_g1 > this->_tc->tf);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(753)
				this->_res = _g2;
				HX_STACK_LINE(754)
				if ((this->_res)){
					HX_STACK_LINE(756)
					this->_hasTileChanged_outputVar = true;
				}
			}
			else{
				HX_STACK_LINE(765)
				this->_hasTileChanged_outputVar = true;
			}
		}
		HX_STACK_LINE(801)
		if ((this->_bnd->doesTileOcclude100FN->b)){
			HX_STACK_LINE(803)
			bool _g3 = this->_bnd->doesTileOcclude100FN->f(this->_tx,this->_ty);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(803)
			this->_res = _g3;
			HX_STACK_LINE(807)
			if ((this->_res)){
				HX_STACK_LINE(810)
				break;
			}
		}
	}
	HX_STACK_LINE(837)
	{
		HX_STACK_LINE(841)
		this->_oDex = this->_fDex;
		HX_STACK_LINE(842)
		if (((this->_oDex < (int)0))){
			HX_STACK_LINE(842)
			this->_oDex = (int)0;
		}
		HX_STACK_LINE(847)
		if (((this->_tc->occludingIndex != this->_oDex))){
			HX_STACK_LINE(849)
			this->_tc->occludingIndex = this->_oDex;
			HX_STACK_LINE(850)
			this->_hasTileChanged_outputVar = true;
		}
	}
	HX_STACK_LINE(859)
	return this->_hasTileChanged_outputVar;
}


HX_DEFINE_DYNAMIC_FUNC0(TileChunkFetcher_obj,hasTileChanged,return )

Void TileChunkFetcher_obj::msg( ::String inMSG){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher","msg",0x32bcbc1d,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher.msg","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileChunkFetcher.hx",866,0x30df67cf)
		HX_STACK_ARG(inMSG,"inMSG")
		HX_STACK_LINE(866)
		::jmSubLibs::EU_obj::msg((HX_CSTRING("TileChunkFetcher.hx msg==") + inMSG));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileChunkFetcher_obj,msg,(void))


TileChunkFetcher_obj::TileChunkFetcher_obj()
{
}

void TileChunkFetcher_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileChunkFetcher);
	HX_MARK_MEMBER_NAME(_frameTracker,"_frameTracker");
	HX_MARK_MEMBER_NAME(_hasFrameTracker,"_hasFrameTracker");
	HX_MARK_MEMBER_NAME(_blankerTile,"_blankerTile");
	HX_MARK_MEMBER_NAME(_has_dims,"_has_dims");
	HX_MARK_MEMBER_NAME(_has_funcs,"_has_funcs");
	HX_MARK_MEMBER_NAME(_returnBlankTile_OOB,"_returnBlankTile_OOB");
	HX_MARK_MEMBER_NAME(_tx,"_tx");
	HX_MARK_MEMBER_NAME(_ty,"_ty");
	HX_MARK_MEMBER_NAME(_ti,"_ti");
	HX_MARK_MEMBER_NAME(_zz,"_zz");
	HX_MARK_MEMBER_NAME(_hasTileChanged_outputVar,"_hasTileChanged_outputVar");
	HX_MARK_MEMBER_NAME(_d,"_d");
	HX_MARK_MEMBER_NAME(_regFNS,"_regFNS");
	HX_MARK_MEMBER_NAME(_regFNS_len,"_regFNS_len");
	HX_MARK_MEMBER_NAME(_fDex,"_fDex");
	HX_MARK_MEMBER_NAME(_res,"_res");
	HX_MARK_MEMBER_NAME(_oDex,"_oDex");
	HX_MARK_MEMBER_NAME(_sDex,"_sDex");
	HX_MARK_MEMBER_NAME(_bb,"_bb");
	HX_MARK_MEMBER_NAME(_bm,"_bm");
	HX_MARK_MEMBER_NAME(_bmRec,"_bmRec");
	HX_MARK_MEMBER_NAME(_mat,"_mat");
	HX_MARK_MEMBER_NAME(_s_x,"_s_x");
	HX_MARK_MEMBER_NAME(_s_y,"_s_y");
	HX_MARK_MEMBER_NAME(_bnd,"_bnd");
	HX_MARK_MEMBER_NAME(_tileCache,"_tileCache");
	HX_MARK_MEMBER_NAME(_tileCache_numTiles,"_tileCache_numTiles");
	HX_MARK_MEMBER_NAME(_tileCache_numTilesX,"_tileCache_numTilesX");
	HX_MARK_MEMBER_NAME(_tileCache_numTilesY,"_tileCache_numTilesY");
	HX_MARK_MEMBER_NAME(_tc,"_tc");
	HX_MARK_MEMBER_NAME(_empty_tile_tc,"_empty_tile_tc");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(useWrappingX,"useWrappingX");
	HX_MARK_MEMBER_NAME(useWrappingY,"useWrappingY");
	HX_MARK_END_CLASS();
}

void TileChunkFetcher_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_frameTracker,"_frameTracker");
	HX_VISIT_MEMBER_NAME(_hasFrameTracker,"_hasFrameTracker");
	HX_VISIT_MEMBER_NAME(_blankerTile,"_blankerTile");
	HX_VISIT_MEMBER_NAME(_has_dims,"_has_dims");
	HX_VISIT_MEMBER_NAME(_has_funcs,"_has_funcs");
	HX_VISIT_MEMBER_NAME(_returnBlankTile_OOB,"_returnBlankTile_OOB");
	HX_VISIT_MEMBER_NAME(_tx,"_tx");
	HX_VISIT_MEMBER_NAME(_ty,"_ty");
	HX_VISIT_MEMBER_NAME(_ti,"_ti");
	HX_VISIT_MEMBER_NAME(_zz,"_zz");
	HX_VISIT_MEMBER_NAME(_hasTileChanged_outputVar,"_hasTileChanged_outputVar");
	HX_VISIT_MEMBER_NAME(_d,"_d");
	HX_VISIT_MEMBER_NAME(_regFNS,"_regFNS");
	HX_VISIT_MEMBER_NAME(_regFNS_len,"_regFNS_len");
	HX_VISIT_MEMBER_NAME(_fDex,"_fDex");
	HX_VISIT_MEMBER_NAME(_res,"_res");
	HX_VISIT_MEMBER_NAME(_oDex,"_oDex");
	HX_VISIT_MEMBER_NAME(_sDex,"_sDex");
	HX_VISIT_MEMBER_NAME(_bb,"_bb");
	HX_VISIT_MEMBER_NAME(_bm,"_bm");
	HX_VISIT_MEMBER_NAME(_bmRec,"_bmRec");
	HX_VISIT_MEMBER_NAME(_mat,"_mat");
	HX_VISIT_MEMBER_NAME(_s_x,"_s_x");
	HX_VISIT_MEMBER_NAME(_s_y,"_s_y");
	HX_VISIT_MEMBER_NAME(_bnd,"_bnd");
	HX_VISIT_MEMBER_NAME(_tileCache,"_tileCache");
	HX_VISIT_MEMBER_NAME(_tileCache_numTiles,"_tileCache_numTiles");
	HX_VISIT_MEMBER_NAME(_tileCache_numTilesX,"_tileCache_numTilesX");
	HX_VISIT_MEMBER_NAME(_tileCache_numTilesY,"_tileCache_numTilesY");
	HX_VISIT_MEMBER_NAME(_tc,"_tc");
	HX_VISIT_MEMBER_NAME(_empty_tile_tc,"_empty_tile_tc");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(useWrappingX,"useWrappingX");
	HX_VISIT_MEMBER_NAME(useWrappingY,"useWrappingY");
}

Dynamic TileChunkFetcher_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_d") ) { return _d; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"msg") ) { return msg_dyn(); }
		if (HX_FIELD_EQ(inName,"_tx") ) { return _tx; }
		if (HX_FIELD_EQ(inName,"_ty") ) { return _ty; }
		if (HX_FIELD_EQ(inName,"_ti") ) { return _ti; }
		if (HX_FIELD_EQ(inName,"_zz") ) { return _zz; }
		if (HX_FIELD_EQ(inName,"_bb") ) { return _bb; }
		if (HX_FIELD_EQ(inName,"_bm") ) { return _bm; }
		if (HX_FIELD_EQ(inName,"_tc") ) { return _tc; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_res") ) { return _res; }
		if (HX_FIELD_EQ(inName,"_mat") ) { return _mat; }
		if (HX_FIELD_EQ(inName,"_s_x") ) { return _s_x; }
		if (HX_FIELD_EQ(inName,"_s_y") ) { return _s_y; }
		if (HX_FIELD_EQ(inName,"_bnd") ) { return _bnd; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_fDex") ) { return _fDex; }
		if (HX_FIELD_EQ(inName,"_oDex") ) { return _oDex; }
		if (HX_FIELD_EQ(inName,"_sDex") ) { return _sDex; }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_bmRec") ) { return _bmRec; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_regFNS") ) { return _regFNS; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_has_dims") ) { return _has_dims; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_has_funcs") ) { return _has_funcs; }
		if (HX_FIELD_EQ(inName,"_tileCache") ) { return _tileCache; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_regFNS_len") ) { return _regFNS_len; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_blankerTile") ) { return _blankerTile; }
		if (HX_FIELD_EQ(inName,"useWrappingX") ) { return useWrappingX; }
		if (HX_FIELD_EQ(inName,"useWrappingY") ) { return useWrappingY; }
		if (HX_FIELD_EQ(inName,"getTileChunk") ) { return getTileChunk_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameTracker") ) { return _frameTracker; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_empty_tile_tc") ) { return _empty_tile_tc; }
		if (HX_FIELD_EQ(inName,"linkDimsObject") ) { return linkDimsObject_dyn(); }
		if (HX_FIELD_EQ(inName,"setTileToFetch") ) { return setTileToFetch_dyn(); }
		if (HX_FIELD_EQ(inName,"hasTileChanged") ) { return hasTileChanged_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_hasFrameTracker") ) { return _hasFrameTracker; }
		if (HX_FIELD_EQ(inName,"linkFrameTracker") ) { return linkFrameTracker_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_tileCache_numTiles") ) { return _tileCache_numTiles; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_returnBlankTile_OOB") ) { return _returnBlankTile_OOB; }
		if (HX_FIELD_EQ(inName,"_tileCache_numTilesX") ) { return _tileCache_numTilesX; }
		if (HX_FIELD_EQ(inName,"_tileCache_numTilesY") ) { return _tileCache_numTilesY; }
		if (HX_FIELD_EQ(inName,"getWrappedTileValueX") ) { return getWrappedTileValueX_dyn(); }
		if (HX_FIELD_EQ(inName,"getWrappedTileValueY") ) { return getWrappedTileValueY_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"linkTMR_BoundSYS_FUNCS") ) { return linkTMR_BoundSYS_FUNCS_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_hasTileChanged_outputVar") ) { return _hasTileChanged_outputVar; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileChunkFetcher_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_d") ) { _d=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_tx") ) { _tx=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ty") ) { _ty=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ti") ) { _ti=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_zz") ) { _zz=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bb") ) { _bb=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::helpers::data::structs::glue::BitMapBool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bm") ) { _bm=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tc") ) { _tc=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TCF_Cache >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_res") ) { _res=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mat") ) { _mat=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_s_x") ) { _s_x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_s_y") ) { _s_y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bnd") ) { _bnd=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_fDex") ) { _fDex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_oDex") ) { _oDex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sDex") ) { _sDex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_bmRec") ) { _bmRec=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_regFNS") ) { _regFNS=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_has_dims") ) { _has_dims=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_has_funcs") ) { _has_funcs=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileCache") ) { _tileCache=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_regFNS_len") ) { _regFNS_len=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_blankerTile") ) { _blankerTile=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useWrappingX") ) { useWrappingX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useWrappingY") ) { useWrappingY=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameTracker") ) { _frameTracker=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_empty_tile_tc") ) { _empty_tile_tc=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TCF_Cache >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_hasFrameTracker") ) { _hasFrameTracker=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_tileCache_numTiles") ) { _tileCache_numTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_returnBlankTile_OOB") ) { _returnBlankTile_OOB=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileCache_numTilesX") ) { _tileCache_numTilesX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileCache_numTilesY") ) { _tileCache_numTilesY=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_hasTileChanged_outputVar") ) { _hasTileChanged_outputVar=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileChunkFetcher_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_frameTracker"));
	outFields->push(HX_CSTRING("_hasFrameTracker"));
	outFields->push(HX_CSTRING("_blankerTile"));
	outFields->push(HX_CSTRING("_has_dims"));
	outFields->push(HX_CSTRING("_has_funcs"));
	outFields->push(HX_CSTRING("_returnBlankTile_OOB"));
	outFields->push(HX_CSTRING("_tx"));
	outFields->push(HX_CSTRING("_ty"));
	outFields->push(HX_CSTRING("_ti"));
	outFields->push(HX_CSTRING("_zz"));
	outFields->push(HX_CSTRING("_hasTileChanged_outputVar"));
	outFields->push(HX_CSTRING("_d"));
	outFields->push(HX_CSTRING("_regFNS"));
	outFields->push(HX_CSTRING("_regFNS_len"));
	outFields->push(HX_CSTRING("_fDex"));
	outFields->push(HX_CSTRING("_res"));
	outFields->push(HX_CSTRING("_oDex"));
	outFields->push(HX_CSTRING("_sDex"));
	outFields->push(HX_CSTRING("_bb"));
	outFields->push(HX_CSTRING("_bm"));
	outFields->push(HX_CSTRING("_bmRec"));
	outFields->push(HX_CSTRING("_mat"));
	outFields->push(HX_CSTRING("_s_x"));
	outFields->push(HX_CSTRING("_s_y"));
	outFields->push(HX_CSTRING("_bnd"));
	outFields->push(HX_CSTRING("_tileCache"));
	outFields->push(HX_CSTRING("_tileCache_numTiles"));
	outFields->push(HX_CSTRING("_tileCache_numTilesX"));
	outFields->push(HX_CSTRING("_tileCache_numTilesY"));
	outFields->push(HX_CSTRING("_tc"));
	outFields->push(HX_CSTRING("_empty_tile_tc"));
	outFields->push(HX_CSTRING("_rect"));
	outFields->push(HX_CSTRING("useWrappingX"));
	outFields->push(HX_CSTRING("useWrappingY"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("msg"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString*/ ,(int)offsetof(TileChunkFetcher_obj,_frameTracker),HX_CSTRING("_frameTracker")},
	{hx::fsBool,(int)offsetof(TileChunkFetcher_obj,_hasFrameTracker),HX_CSTRING("_hasFrameTracker")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(TileChunkFetcher_obj,_blankerTile),HX_CSTRING("_blankerTile")},
	{hx::fsBool,(int)offsetof(TileChunkFetcher_obj,_has_dims),HX_CSTRING("_has_dims")},
	{hx::fsBool,(int)offsetof(TileChunkFetcher_obj,_has_funcs),HX_CSTRING("_has_funcs")},
	{hx::fsBool,(int)offsetof(TileChunkFetcher_obj,_returnBlankTile_OOB),HX_CSTRING("_returnBlankTile_OOB")},
	{hx::fsInt,(int)offsetof(TileChunkFetcher_obj,_tx),HX_CSTRING("_tx")},
	{hx::fsInt,(int)offsetof(TileChunkFetcher_obj,_ty),HX_CSTRING("_ty")},
	{hx::fsInt,(int)offsetof(TileChunkFetcher_obj,_ti),HX_CSTRING("_ti")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(TileChunkFetcher_obj,_zz),HX_CSTRING("_zz")},
	{hx::fsBool,(int)offsetof(TileChunkFetcher_obj,_hasTileChanged_outputVar),HX_CSTRING("_hasTileChanged_outputVar")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims*/ ,(int)offsetof(TileChunkFetcher_obj,_d),HX_CSTRING("_d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TileChunkFetcher_obj,_regFNS),HX_CSTRING("_regFNS")},
	{hx::fsInt,(int)offsetof(TileChunkFetcher_obj,_regFNS_len),HX_CSTRING("_regFNS_len")},
	{hx::fsInt,(int)offsetof(TileChunkFetcher_obj,_fDex),HX_CSTRING("_fDex")},
	{hx::fsBool,(int)offsetof(TileChunkFetcher_obj,_res),HX_CSTRING("_res")},
	{hx::fsInt,(int)offsetof(TileChunkFetcher_obj,_oDex),HX_CSTRING("_oDex")},
	{hx::fsInt,(int)offsetof(TileChunkFetcher_obj,_sDex),HX_CSTRING("_sDex")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::helpers::data::structs::glue::BitMapBool*/ ,(int)offsetof(TileChunkFetcher_obj,_bb),HX_CSTRING("_bb")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(TileChunkFetcher_obj,_bm),HX_CSTRING("_bm")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(TileChunkFetcher_obj,_bmRec),HX_CSTRING("_bmRec")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(TileChunkFetcher_obj,_mat),HX_CSTRING("_mat")},
	{hx::fsFloat,(int)offsetof(TileChunkFetcher_obj,_s_x),HX_CSTRING("_s_x")},
	{hx::fsFloat,(int)offsetof(TileChunkFetcher_obj,_s_y),HX_CSTRING("_s_y")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS*/ ,(int)offsetof(TileChunkFetcher_obj,_bnd),HX_CSTRING("_bnd")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TileChunkFetcher_obj,_tileCache),HX_CSTRING("_tileCache")},
	{hx::fsInt,(int)offsetof(TileChunkFetcher_obj,_tileCache_numTiles),HX_CSTRING("_tileCache_numTiles")},
	{hx::fsInt,(int)offsetof(TileChunkFetcher_obj,_tileCache_numTilesX),HX_CSTRING("_tileCache_numTilesX")},
	{hx::fsInt,(int)offsetof(TileChunkFetcher_obj,_tileCache_numTilesY),HX_CSTRING("_tileCache_numTilesY")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TCF_Cache*/ ,(int)offsetof(TileChunkFetcher_obj,_tc),HX_CSTRING("_tc")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TCF_Cache*/ ,(int)offsetof(TileChunkFetcher_obj,_empty_tile_tc),HX_CSTRING("_empty_tile_tc")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(TileChunkFetcher_obj,_rect),HX_CSTRING("_rect")},
	{hx::fsBool,(int)offsetof(TileChunkFetcher_obj,useWrappingX),HX_CSTRING("useWrappingX")},
	{hx::fsBool,(int)offsetof(TileChunkFetcher_obj,useWrappingY),HX_CSTRING("useWrappingY")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_frameTracker"),
	HX_CSTRING("_hasFrameTracker"),
	HX_CSTRING("linkFrameTracker"),
	HX_CSTRING("_blankerTile"),
	HX_CSTRING("_has_dims"),
	HX_CSTRING("_has_funcs"),
	HX_CSTRING("_returnBlankTile_OOB"),
	HX_CSTRING("_tx"),
	HX_CSTRING("_ty"),
	HX_CSTRING("_ti"),
	HX_CSTRING("_zz"),
	HX_CSTRING("_hasTileChanged_outputVar"),
	HX_CSTRING("_d"),
	HX_CSTRING("_regFNS"),
	HX_CSTRING("_regFNS_len"),
	HX_CSTRING("_fDex"),
	HX_CSTRING("_res"),
	HX_CSTRING("_oDex"),
	HX_CSTRING("_sDex"),
	HX_CSTRING("_bb"),
	HX_CSTRING("_bm"),
	HX_CSTRING("_bmRec"),
	HX_CSTRING("_mat"),
	HX_CSTRING("_s_x"),
	HX_CSTRING("_s_y"),
	HX_CSTRING("_bnd"),
	HX_CSTRING("_tileCache"),
	HX_CSTRING("_tileCache_numTiles"),
	HX_CSTRING("_tileCache_numTilesX"),
	HX_CSTRING("_tileCache_numTilesY"),
	HX_CSTRING("_tc"),
	HX_CSTRING("_empty_tile_tc"),
	HX_CSTRING("_rect"),
	HX_CSTRING("useWrappingX"),
	HX_CSTRING("useWrappingY"),
	HX_CSTRING("linkDimsObject"),
	HX_CSTRING("linkTMR_BoundSYS_FUNCS"),
	HX_CSTRING("getWrappedTileValueX"),
	HX_CSTRING("getWrappedTileValueY"),
	HX_CSTRING("setTileToFetch"),
	HX_CSTRING("getTileChunk"),
	HX_CSTRING("hasTileChanged"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileChunkFetcher_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileChunkFetcher_obj::__mClass,"__mClass");
};

#endif

Class TileChunkFetcher_obj::__mClass;

void TileChunkFetcher_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileChunkFetcher"), hx::TCanCast< TileChunkFetcher_obj> ,sStaticFields,sMemberFields,
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

void TileChunkFetcher_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace decoupled
} // end namespace tileBased
} // end namespace updater
} // end namespace tmrMGR
} // end namespace render
