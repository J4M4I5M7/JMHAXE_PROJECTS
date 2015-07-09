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
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapDims_TileMapDims
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapDims/TileMapDims.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_helpers_ScrollZoomAnimHelper
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/helpers/ScrollZoomAnimHelper.h>
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
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_geom_primitives_NumPoint
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/NumPoint.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_geom_primitives_PointPair
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/PointPair.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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

Void TileMapViewPortRenderEr_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr","new",0x4bc43827,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr.new","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",42,0xc433736e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(374)
	this->_ft_hasBeenLinked = false;
	HX_STACK_LINE(371)
	this->_fetcher_hasBeenLinked = false;
	HX_STACK_LINE(369)
	this->_d_hasBeenLinked = false;
	HX_STACK_LINE(366)
	this->_a_hasBeenLinked = false;
	HX_STACK_LINE(362)
	this->_buf_hasBeenLinked = false;
	HX_STACK_LINE(331)
	this->clearBufferEachFrame = false;
	HX_STACK_LINE(259)
	this->slowPanSpeed = (int)2;
	HX_STACK_LINE(258)
	this->fastPanSpeed = (int)20;
	HX_STACK_LINE(696)
	::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileChunkFetcher _g = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileChunkFetcher_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(696)
	this->_fetcher = _g;
	HX_STACK_LINE(701)
	::openfl::display::BitmapData _g1 = ::openfl::display::BitmapData_obj::__new((int)1,(int)1,true,(int)0,null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(701)
	this->_FBUF = _g1;
	HX_STACK_LINE(702)
	::openfl::display::BitmapData _g2 = ::openfl::display::BitmapData_obj::__new((int)1,(int)1,true,(int)0,null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(702)
	this->_F2 = _g2;
	HX_STACK_LINE(703)
	this->_fBufMax_HIG = (int)8;
	HX_STACK_LINE(704)
	this->_fBufMax_WID = (int)8;
	HX_STACK_LINE(707)
	this->_zm = (int)1;
	HX_STACK_LINE(711)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _g3 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(711)
	this->_tsd = _g3;
	HX_STACK_LINE(713)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _g4 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(713)
	this->_v0_prev = _g4;
	HX_STACK_LINE(715)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _g5 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint_obj::__new();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(715)
	this->_vpDEL = _g5;
	HX_STACK_LINE(717)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _g6 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint_obj::__new();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(717)
	this->_vpCEN = _g6;
	HX_STACK_LINE(721)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _g7 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint_obj::__new();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(721)
	this->_n1 = _g7;
	HX_STACK_LINE(724)
	this->_sWX = (int)0;
	HX_STACK_LINE(725)
	this->_sHY = (int)0;
	HX_STACK_LINE(728)
	this->_wxI = (int)0;
	HX_STACK_LINE(729)
	this->_hyI = (int)0;
	HX_STACK_LINE(732)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _g8 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint_obj::__new();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(732)
	this->_v0 = _g8;
	HX_STACK_LINE(733)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _g9 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint_obj::__new();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(733)
	this->_v1 = _g9;
	HX_STACK_LINE(737)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _g10 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint_obj::__new();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(737)
	this->_vT = _g10;
	HX_STACK_LINE(740)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _g11 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint_obj::__new();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(740)
	this->_vRf = _g11;
	HX_STACK_LINE(743)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _g12 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint_obj::__new();		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(743)
	this->_p0 = _g12;
	HX_STACK_LINE(746)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _g13 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint_obj::__new();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(746)
	this->_p1 = _g13;
	HX_STACK_LINE(750)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _g14 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint_obj::__new();		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(750)
	this->_r0 = _g14;
	HX_STACK_LINE(754)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _g15 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint_obj::__new();		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(754)
	this->_ma = _g15;
	HX_STACK_LINE(766)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair _g16 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::__new();		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(766)
	this->_fA = _g16;
	HX_STACK_LINE(767)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair _g17 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::__new();		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(767)
	this->_prev_FA = _g17;
	HX_STACK_LINE(768)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair _g18 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::__new();		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(768)
	this->_overFA = _g18;
	HX_STACK_LINE(776)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint _g19 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint_obj::__new();		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(776)
	this->_oRecMaker = _g19;
	HX_STACK_LINE(777)
	::openfl::geom::Rectangle _g20 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(777)
	this->_oRec = _g20;
	HX_STACK_LINE(778)
	::openfl::geom::Point _g21 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(778)
	this->_oPT = _g21;
	HX_STACK_LINE(782)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint _g22 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint_obj::__new();		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(782)
	this->_fSpan = _g22;
	HX_STACK_LINE(785)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _g23 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint_obj::__new();		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(785)
	this->_f0 = _g23;
	HX_STACK_LINE(788)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _g24 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint_obj::__new();		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(788)
	this->_f1 = _g24;
	HX_STACK_LINE(793)
	::openfl::geom::Matrix _g25 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(793)
	this->_mat = _g25;
	HX_STACK_LINE(794)
	::openfl::geom::ColorTransform _g26 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g26,"_g26");
	HX_STACK_LINE(794)
	this->_tran = _g26;
	HX_STACK_LINE(795)
	::openfl::geom::Point _g27 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g27,"_g27");
	HX_STACK_LINE(795)
	this->_dst = _g27;
	HX_STACK_LINE(796)
	::openfl::geom::Rectangle _g28 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g28,"_g28");
	HX_STACK_LINE(796)
	this->_bmRec = _g28;
	HX_STACK_LINE(797)
	::openfl::geom::Rectangle _g29 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g29,"_g29");
	HX_STACK_LINE(797)
	this->_cRec = _g29;
	HX_STACK_LINE(800)
	this->_tran->alphaMultiplier = 0.2;
}
;
	return null();
}

//TileMapViewPortRenderEr_obj::~TileMapViewPortRenderEr_obj() { }

Dynamic TileMapViewPortRenderEr_obj::__CreateEmpty() { return  new TileMapViewPortRenderEr_obj; }
hx::ObjectPtr< TileMapViewPortRenderEr_obj > TileMapViewPortRenderEr_obj::__new()
{  hx::ObjectPtr< TileMapViewPortRenderEr_obj > result = new TileMapViewPortRenderEr_obj();
	result->__construct();
	return result;}

Dynamic TileMapViewPortRenderEr_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileMapViewPortRenderEr_obj > result = new TileMapViewPortRenderEr_obj();
	result->__construct();
	return result;}

Void TileMapViewPortRenderEr_obj::linkFrameTracker( ::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString inFrameTracker){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr","linkFrameTracker",0x41f119fe,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr.linkFrameTracker","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",342,0xc433736e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inFrameTracker,"inFrameTracker")
		HX_STACK_LINE(344)
		if (((null() == inFrameTracker))){
			HX_STACK_LINE(344)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileMapViewPortRenderEr_obj::msg(HX_CSTRING("inFrameTracker is null"));
		}
		HX_STACK_LINE(348)
		if (((null() == this->_fetcher))){
			HX_STACK_LINE(348)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileMapViewPortRenderEr_obj::msg(HX_CSTRING("init order problem. _fetcher null"));
		}
		HX_STACK_LINE(350)
		this->_ft = inFrameTracker;
		HX_STACK_LINE(351)
		this->_ft_hasBeenLinked = true;
		HX_STACK_LINE(354)
		this->_fetcher->linkFrameTracker(inFrameTracker);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapViewPortRenderEr_obj,linkFrameTracker,(void))

Void TileMapViewPortRenderEr_obj::linkViewPortBuffer( ::openfl::display::BitmapData inBuf){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr","linkViewPortBuffer",0x5af62fd9,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr.linkViewPortBuffer","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",551,0xc433736e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inBuf,"inBuf")
		HX_STACK_LINE(552)
		if (((null() == inBuf))){
			HX_STACK_LINE(552)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileMapViewPortRenderEr_obj::msg(HX_CSTRING("linking null buffer"));
		}
		HX_STACK_LINE(553)
		int _g = inBuf->get_width();		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static bool Block( ::openfl::display::BitmapData &inBuf){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",553,0xc433736e)
				{
					HX_STACK_LINE(553)
					int _g1 = inBuf->get_height();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(553)
					return (_g1 <= (int)0);
				}
				return null();
			}
		};
		HX_STACK_LINE(553)
		if (((  ((!(((_g <= (int)0))))) ? bool(_Function_1_1::Block(inBuf)) : bool(true) ))){
			HX_STACK_LINE(555)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileMapViewPortRenderEr_obj::msg(HX_CSTRING("linking DESTROYED buffer it seems."));
		}
		HX_STACK_LINE(558)
		this->_buf = inBuf;
		HX_STACK_LINE(559)
		int _g2 = inBuf->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(559)
		this->_buf_wid = _g2;
		HX_STACK_LINE(560)
		int _g3 = inBuf->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(560)
		this->_buf_hig = _g3;
		HX_STACK_LINE(561)
		this->_buf_hasBeenLinked = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapViewPortRenderEr_obj,linkViewPortBuffer,(void))

::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair TileMapViewPortRenderEr_obj::getOnScreenArea( ){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr","getOnScreenArea",0x12698715,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr.getOnScreenArea","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",570,0xc433736e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(570)
	return this->_fA;
}


HX_DEFINE_DYNAMIC_FUNC0(TileMapViewPortRenderEr_obj,getOnScreenArea,return )

Void TileMapViewPortRenderEr_obj::linkTMR_BoundSYS_FUNCS( Array< ::Dynamic > inReg,int inReg_length){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr","linkTMR_BoundSYS_FUNCS",0xbcef23b8,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr.linkTMR_BoundSYS_FUNCS","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",586,0xc433736e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inReg,"inReg")
		HX_STACK_ARG(inReg_length,"inReg_length")
		HX_STACK_LINE(592)
		if (((inReg == null()))){
			HX_STACK_LINE(592)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileMapViewPortRenderEr_obj::msg(HX_CSTRING("inReg is null!"));
		}
		HX_STACK_LINE(593)
		if (((inReg_length <= (int)0))){
			HX_STACK_LINE(593)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileMapViewPortRenderEr_obj::msg(HX_CSTRING("inReg_length should be greater than zero."));
		}
		HX_STACK_LINE(596)
		this->_fetcher->linkTMR_BoundSYS_FUNCS(inReg,inReg_length);
		HX_STACK_LINE(597)
		this->_fetcher_hasBeenLinked = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapViewPortRenderEr_obj,linkTMR_BoundSYS_FUNCS,(void))

Void TileMapViewPortRenderEr_obj::linkTileMapDims( ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims inDims){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr","linkTileMapDims",0x3083b9c6,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr.linkTileMapDims","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",608,0xc433736e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inDims,"inDims")
		HX_STACK_LINE(609)
		this->_d = inDims;
		HX_STACK_LINE(610)
		this->_d_hasBeenLinked = true;
		HX_STACK_LINE(616)
		if (((inDims->hig <= (int)0))){
			HX_STACK_LINE(616)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileMapViewPortRenderEr_obj::msg(HX_CSTRING("hig<=0, must init inDims before linkTileMapDims() call"));
		}
		HX_STACK_LINE(617)
		if (((inDims->wid <= (int)0))){
			HX_STACK_LINE(617)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileMapViewPortRenderEr_obj::msg(HX_CSTRING("wid<=0, must init inDims before linkTileMapDims() call"));
		}
		HX_STACK_LINE(618)
		if (((inDims->tWX <= (int)0))){
			HX_STACK_LINE(618)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileMapViewPortRenderEr_obj::msg(HX_CSTRING("tWX<=0, must init inDims before linkTileMapDims() call"));
		}
		HX_STACK_LINE(619)
		if (((inDims->tHY <= (int)0))){
			HX_STACK_LINE(619)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileMapViewPortRenderEr_obj::msg(HX_CSTRING("tHY<=0, must init inDims before linkTileMapDims() call"));
		}
		HX_STACK_LINE(621)
		this->tryAndSetInitialTilePrevScale();
		HX_STACK_LINE(624)
		this->_fetcher->linkDimsObject(inDims);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapViewPortRenderEr_obj,linkTileMapDims,(void))

Void TileMapViewPortRenderEr_obj::linkAnimHelper( ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::ScrollZoomAnimHelper inAnim){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr","linkAnimHelper",0x5f9ea292,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr.linkAnimHelper","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",629,0xc433736e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inAnim,"inAnim")
		HX_STACK_LINE(630)
		if (((null() == inAnim))){
			HX_STACK_LINE(630)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileMapViewPortRenderEr_obj::msg(HX_CSTRING("inAnim cannot be null!"));
		}
		HX_STACK_LINE(632)
		this->_a = inAnim;
		HX_STACK_LINE(633)
		this->_a_hasBeenLinked = true;
		HX_STACK_LINE(639)
		this->tryAndSetInitialTilePrevScale();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapViewPortRenderEr_obj,linkAnimHelper,(void))

Void TileMapViewPortRenderEr_obj::tryAndSetInitialTilePrevScale( ){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr","tryAndSetInitialTilePrevScale",0x588e86b2,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr.tryAndSetInitialTilePrevScale","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",645,0xc433736e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(645)
		if (((bool(this->_d_hasBeenLinked) && bool(this->_a_hasBeenLinked)))){
			HX_STACK_LINE(647)
			if (((this->_d->tWX <= (int)0))){
				HX_STACK_LINE(647)
				::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileMapViewPortRenderEr_obj::msg(HX_CSTRING("no worky man."));
			}
			HX_STACK_LINE(648)
			if (((this->_d->tHY <= (int)0))){
				HX_STACK_LINE(648)
				::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileMapViewPortRenderEr_obj::msg(HX_CSTRING("no worky man."));
			}
			HX_STACK_LINE(650)
			this->_tileScaledWID_prev = (this->_d->tWX * this->_a->zoom->cur);
			HX_STACK_LINE(651)
			this->_tileScaledHIG_prev = (this->_d->tHY * this->_a->zoom->cur);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileMapViewPortRenderEr_obj,tryAndSetInitialTilePrevScale,(void))

Void TileMapViewPortRenderEr_obj::setScreenWrapX( bool inB){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr","setScreenWrapX",0xdb100f59,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr.setScreenWrapX","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",658,0xc433736e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inB,"inB")
		HX_STACK_LINE(658)
		this->_fetcher->useWrappingX = inB;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapViewPortRenderEr_obj,setScreenWrapX,(void))

Void TileMapViewPortRenderEr_obj::setScreenWrapY( bool inB){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr","setScreenWrapY",0xdb100f5a,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr.setScreenWrapY","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",664,0xc433736e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inB,"inB")
		HX_STACK_LINE(664)
		this->_fetcher->useWrappingY = inB;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapViewPortRenderEr_obj,setScreenWrapY,(void))

int TileMapViewPortRenderEr_obj::getScaledHalfTileForTolerancesX( ){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr","getScaledHalfTileForTolerancesX",0xcc0b0ce1,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr.getScaledHalfTileForTolerancesX","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",671,0xc433736e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(672)
	int op = ::Std_obj::_int((Float(this->_wxI) / Float((int)2)));		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(673)
	return op;
}


HX_DEFINE_DYNAMIC_FUNC0(TileMapViewPortRenderEr_obj,getScaledHalfTileForTolerancesX,return )

int TileMapViewPortRenderEr_obj::getScaledHalfTileForTolerancesY( ){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr","getScaledHalfTileForTolerancesY",0xcc0b0ce2,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr.getScaledHalfTileForTolerancesY","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",679,0xc433736e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(680)
	int op = ::Std_obj::_int((Float(this->_hyI) / Float((int)2)));		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(681)
	return op;
}


HX_DEFINE_DYNAMIC_FUNC0(TileMapViewPortRenderEr_obj,getScaledHalfTileForTolerancesY,return )

Void TileMapViewPortRenderEr_obj::drawViewPortToBuffer( ){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr","drawViewPortToBuffer",0x224547fe,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr.drawViewPortToBuffer","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",805,0xc433736e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(973)
		this->_zm = this->_a->zoom->cur;
		HX_STACK_LINE(974)
		this->_v0->x = this->_a->scroll->x->cur;
		HX_STACK_LINE(975)
		this->_v0->y = this->_a->scroll->y->cur;
		HX_STACK_LINE(978)
		this->_n1->x = ((this->_v0->x + this->_buf_wid) - (int)1);
		HX_STACK_LINE(979)
		this->_n1->y = ((this->_v0->y + this->_buf_hig) - (int)1);
		HX_STACK_LINE(995)
		this->_p0->x = (this->_v0->x * this->_zm);
		HX_STACK_LINE(996)
		this->_p1->x = (this->_n1->x * this->_zm);
		HX_STACK_LINE(999)
		this->_p0->y = (this->_v0->y * this->_zm);
		HX_STACK_LINE(1000)
		this->_p1->y = (this->_n1->y * this->_zm);
		HX_STACK_LINE(1011)
		this->_r0->x = (this->_buf_wid * this->_zm);
		HX_STACK_LINE(1012)
		this->_r0->y = (this->_buf_hig * this->_zm);
		HX_STACK_LINE(1042)
		this->_ma->x = (this->_r0->x - this->_buf_wid);
		HX_STACK_LINE(1043)
		this->_ma->y = (this->_r0->y - this->_buf_hig);
		HX_STACK_LINE(1048)
		this->_v1->x = (this->_p0->x + (this->_ma->x * this->_a->focal->x->cur));
		HX_STACK_LINE(1049)
		this->_v1->y = (this->_p0->y + (this->_ma->y * this->_a->focal->y->cur));
		HX_STACK_LINE(1090)
		this->_sWX = (this->_d->tWX * this->_a->zoom->cur);
		HX_STACK_LINE(1091)
		this->_sHY = (this->_d->tHY * this->_a->zoom->cur);
		HX_STACK_LINE(1098)
		int _g = ::Std_obj::_int(this->_sWX);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1098)
		this->_wxI = _g;
		HX_STACK_LINE(1099)
		int _g1 = ::Std_obj::_int(this->_sHY);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1099)
		this->_hyI = _g1;
		HX_STACK_LINE(1177)
		this->_vT->x = ((this->_v1->x + this->_buf_wid) - (int)1);
		HX_STACK_LINE(1178)
		this->_vT->y = ((this->_v1->y + this->_buf_hig) - (int)1);
		HX_STACK_LINE(1182)
		int _g2 = ::Std_obj::_int((Float(this->_v1->x) / Float(this->_sWX)));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1182)
		this->_fA->x0 = _g2;
		HX_STACK_LINE(1183)
		int _g3 = ::Std_obj::_int((Float(this->_vT->x) / Float(this->_sWX)));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1183)
		this->_fA->x1 = _g3;
		HX_STACK_LINE(1186)
		int _g4 = ::Std_obj::_int((Float(this->_v1->y) / Float(this->_sHY)));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(1186)
		this->_fA->y0 = _g4;
		HX_STACK_LINE(1187)
		int _g5 = ::Std_obj::_int((Float(this->_vT->y) / Float(this->_sHY)));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(1187)
		this->_fA->y1 = _g5;
		HX_STACK_LINE(1239)
		if (((this->_v1->x < (int)0))){
			HX_STACK_LINE(1239)
			hx::SubEq(this->_fA->x0,(int)1);
		}
		HX_STACK_LINE(1240)
		if (((this->_v1->y < (int)0))){
			HX_STACK_LINE(1240)
			hx::SubEq(this->_fA->y0,(int)1);
		}
		HX_STACK_LINE(1242)
		if (((this->_vT->x < (int)0))){
			HX_STACK_LINE(1242)
			hx::SubEq(this->_fA->x1,(int)1);
		}
		HX_STACK_LINE(1243)
		if (((this->_vT->y < (int)0))){
			HX_STACK_LINE(1243)
			hx::SubEq(this->_fA->y1,(int)1);
		}
		HX_STACK_LINE(1290)
		this->_f0->x = (this->_fA->x0 * this->_sWX);
		HX_STACK_LINE(1291)
		this->_f0->y = (this->_fA->y0 * this->_sHY);
		HX_STACK_LINE(1297)
		this->_f1->x = (((this->_fA->x1 * this->_sWX) + this->_sWX) - this->_zm);
		HX_STACK_LINE(1298)
		this->_f1->y = (((this->_fA->y1 * this->_sHY) + this->_sHY) - this->_zm);
		HX_STACK_LINE(1317)
		this->_vRf->x = (this->_v1->x - this->_f0->x);
		HX_STACK_LINE(1318)
		this->_vRf->y = (this->_v1->y - this->_f0->y);
		HX_STACK_LINE(1369)
		this->calcFSPAN();
		HX_STACK_LINE(1379)
		this->_fWID_FLOAT = (this->_fSpan->ix * this->_sWX);
		HX_STACK_LINE(1380)
		this->_fHIG_FLOAT = (this->_fSpan->iy * this->_sHY);
		HX_STACK_LINE(1382)
		int _g6 = ::Math_obj::ceil(this->_fWID_FLOAT);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(1382)
		this->_fWID = _g6;
		HX_STACK_LINE(1383)
		int _g7 = ::Math_obj::ceil(this->_fHIG_FLOAT);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(1383)
		this->_fHIG = _g7;
		HX_STACK_LINE(1387)
		this->_fWID_FLOOR = (this->_fSpan->ix * this->_wxI);
		HX_STACK_LINE(1388)
		this->_fHIG_FLOOR = (this->_fSpan->iy * this->_hyI);
		HX_STACK_LINE(1394)
		int _g8 = this->_FBUF->get_width();		HX_STACK_VAR(_g8,"_g8");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileMapViewPortRenderEr_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",1394,0xc433736e)
				{
					HX_STACK_LINE(1394)
					int _g9 = __this->_FBUF->get_height();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(1394)
					return (_g9 < __this->_fHIG);
				}
				return null();
			}
		};
		HX_STACK_LINE(1394)
		if (((  ((!(((_g8 < this->_fWID))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))){
			HX_STACK_LINE(1396)
			this->remakeBuffer_F();
		}
		else{
			HX_STACK_LINE(1402)
			int _g10 = ::Std_obj::_int((this->_fWID + (this->_sWX * (int)2)));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(1402)
			this->_fBufMax_WID = _g10;
			HX_STACK_LINE(1403)
			int _g11 = ::Std_obj::_int((this->_fHIG + (this->_sHY * (int)2)));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1403)
			this->_fBufMax_HIG = _g11;
			HX_STACK_LINE(1405)
			int _g12 = this->_FBUF->get_width();		HX_STACK_VAR(_g12,"_g12");
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileMapViewPortRenderEr_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",1406,0xc433736e)
					{
						HX_STACK_LINE(1406)
						int _g13 = __this->_FBUF->get_height();		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(1406)
						return (_g13 > __this->_fBufMax_HIG);
					}
					return null();
				}
			};
			HX_STACK_LINE(1405)
			if (((  ((!(((_g12 > this->_fBufMax_WID))))) ? bool(_Function_2_1::Block(this)) : bool(true) ))){
				HX_STACK_LINE(1408)
				this->remakeBuffer_F();
			}
		}
		HX_STACK_LINE(1460)
		if (((bool((this->_wxI != this->_prev_wxI)) || bool((this->_hyI != this->_prev_hyI))))){
			HX_STACK_LINE(1463)
			this->_salvageF = false;
		}
		else{
			HX_STACK_LINE(1472)
			bool _g14 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::getOverlap(this->_fA,this->_prev_FA,this->_overFA);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(1472)
			this->_salvageF = _g14;
		}
		HX_STACK_LINE(1476)
		if ((this->_salvageF)){
			HX_STACK_LINE(1594)
			this->_oRecMaker->ix = ((this->_overFA->x1 - this->_overFA->x0) + (int)1);
			HX_STACK_LINE(1595)
			this->_oRecMaker->iy = ((this->_overFA->y1 - this->_overFA->y0) + (int)1);
			HX_STACK_LINE(1618)
			if (((bool((this->_fA->x0 >= this->_prev_FA->x0)) && bool((this->_fA->x0 <= this->_prev_FA->x1))))){
				HX_STACK_LINE(1651)
				this->_trainMovingFWD_X = true;
			}
			else{
				HX_STACK_LINE(1668)
				this->_trainMovingFWD_X = false;
			}
			HX_STACK_LINE(1674)
			if (((bool((this->_fA->y0 >= this->_prev_FA->y0)) && bool((this->_fA->y0 <= this->_prev_FA->y1))))){
				HX_STACK_LINE(1707)
				this->_trainMovingFWD_Y = true;
			}
			else{
				HX_STACK_LINE(1727)
				this->_trainMovingFWD_Y = false;
			}
			HX_STACK_LINE(1752)
			if ((this->_trainMovingFWD_X)){
				HX_STACK_LINE(1754)
				this->_cutTileX = (this->_fA->x0 - this->_prev_FA->x0);
				HX_STACK_LINE(1755)
				this->_pasteTileX = (int)0;
			}
			else{
				HX_STACK_LINE(1759)
				this->_cutTileX = (int)0;
				HX_STACK_LINE(1760)
				this->_pasteTileX = ((int)0 - ((this->_fA->x0 - this->_prev_FA->x0)));
			}
			HX_STACK_LINE(1763)
			if ((this->_trainMovingFWD_Y)){
				HX_STACK_LINE(1765)
				this->_cutTileY = (this->_fA->y0 - this->_prev_FA->y0);
				HX_STACK_LINE(1766)
				this->_pasteTileY = (int)0;
			}
			else{
				HX_STACK_LINE(1770)
				this->_cutTileY = (int)0;
				HX_STACK_LINE(1771)
				this->_pasteTileY = ((int)0 - ((this->_fA->y0 - this->_prev_FA->y0)));
			}
			HX_STACK_LINE(1808)
			this->_oPT->x = (this->_pasteTileX * this->_wxI);
			HX_STACK_LINE(1809)
			this->_oPT->y = (this->_pasteTileY * this->_hyI);
			HX_STACK_LINE(1812)
			this->_oRec->width = (this->_oRecMaker->ix * this->_wxI);
			HX_STACK_LINE(1813)
			this->_oRec->height = (this->_oRecMaker->iy * this->_hyI);
			HX_STACK_LINE(1814)
			this->_oRec->x = (this->_cutTileX * this->_wxI);
			HX_STACK_LINE(1815)
			this->_oRec->y = (this->_cutTileY * this->_hyI);
			HX_STACK_LINE(1830)
			this->_F2->copyPixels(this->_FBUF,this->_oRec,this->_oPT,null(),null(),false);
			HX_STACK_LINE(1839)
			this->_SB = this->_F2;
			HX_STACK_LINE(1840)
			this->_F2 = this->_FBUF;
			HX_STACK_LINE(1841)
			this->_FBUF = this->_SB;
		}
		HX_STACK_LINE(1881)
		this->_screenIndex_Y = (int)-1;
		HX_STACK_LINE(1882)
		this->_ty = (this->_fA->y0 - (int)1);
		HX_STACK_LINE(1883)
		while((true)){
			HX_STACK_LINE(1883)
			(this->_ty)++;
			HX_STACK_LINE(1883)
			if (((this->_ty > this->_fA->y1))){
				HX_STACK_LINE(1883)
				break;
			}
			HX_STACK_LINE(1885)
			(this->_screenIndex_Y)++;
			HX_STACK_LINE(1886)
			this->_dst->y = (this->_screenIndex_Y * this->_hyI);
			HX_STACK_LINE(1888)
			this->_screenIndex_X = (int)-1;
			HX_STACK_LINE(1889)
			this->_tx = (this->_fA->x0 - (int)1);
			HX_STACK_LINE(1890)
			while((true)){
				HX_STACK_LINE(1890)
				(this->_tx)++;
				HX_STACK_LINE(1890)
				if (((this->_tx > this->_fA->x1))){
					HX_STACK_LINE(1890)
					break;
				}
				HX_STACK_LINE(1892)
				(this->_screenIndex_X)++;
				HX_STACK_LINE(1893)
				this->_dst->x = (this->_screenIndex_X * this->_wxI);
				HX_STACK_LINE(1896)
				this->_layTileThisTime = false;
				HX_STACK_LINE(1897)
				this->_bmfilt = true;
				HX_STACK_LINE(1901)
				this->_fetcher->setTileToFetch(this->_tx,this->_ty);
				HX_STACK_LINE(1906)
				if (((bool((bool((bool((this->_tx >= this->_overFA->x0)) && bool((this->_tx <= this->_overFA->x1)))) && bool((this->_ty >= this->_overFA->y0)))) && bool((this->_ty <= this->_overFA->y1))))){
					HX_STACK_LINE(1909)
					if ((this->_fetcher->hasTileChanged())){
						HX_STACK_LINE(1911)
						this->_layTileThisTime = true;
					}
					else{
						HX_STACK_LINE(1918)
						if (((this->_fetcher->_tc->tf == this->_ft->i))){
							HX_STACK_LINE(1920)
							this->_layTileThisTime = true;
							HX_STACK_LINE(1921)
							this->_bm = this->_fetcher->_tc->bm;
							HX_STACK_LINE(1922)
							this->_bmfilt = false;
						}
					}
				}
				else{
					HX_STACK_LINE(1932)
					this->_layTileThisTime = true;
				}
				HX_STACK_LINE(1963)
				if ((this->_layTileThisTime)){
					HX_STACK_LINE(1967)
					if ((this->_bmfilt)){
						HX_STACK_LINE(1969)
						::openfl::display::BitmapData _g15 = this->_fetcher->getTileChunk(this->_wxI,this->_hyI);		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(1969)
						this->_bm = _g15;
						HX_STACK_LINE(1970)
						int _g16 = this->_bm->get_width();		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(1970)
						this->_bmRec->width = _g16;
						HX_STACK_LINE(1971)
						int _g17 = this->_bm->get_height();		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(1971)
						this->_bmRec->height = _g17;
					}
					HX_STACK_LINE(1975)
					this->_FBUF->copyPixels(this->_bm,this->_bmRec,this->_dst,null(),null(),false);
				}
			}
		}
		HX_STACK_LINE(2000)
		this->_stretchScaleX = (Float(this->_fWID_FLOAT) / Float(this->_fWID_FLOOR));
		HX_STACK_LINE(2001)
		this->_stretchScaleY = (Float(this->_fHIG_FLOAT) / Float(this->_fHIG_FLOOR));
		HX_STACK_LINE(2110)
		if ((this->clearBufferEachFrame)){
			HX_STACK_LINE(2112)
			this->_cRec->x = (int)0;
			HX_STACK_LINE(2113)
			this->_cRec->y = (int)0;
			HX_STACK_LINE(2114)
			this->_cRec->width = this->_buf_wid;
			HX_STACK_LINE(2115)
			this->_cRec->height = this->_buf_hig;
			HX_STACK_LINE(2116)
			this->_buf->fillRect(this->_cRec,(int)0);
			HX_STACK_LINE(2123)
			this->_tran->alphaMultiplier = (int)1;
		}
		else{
			HX_STACK_LINE(2128)
			this->doBlurrCalcs();
		}
		HX_STACK_LINE(2132)
		this->_mat->identity();
		HX_STACK_LINE(2136)
		this->_mat->tx = ((int)0 - this->_vRf->x);
		HX_STACK_LINE(2137)
		this->_mat->ty = ((int)0 - this->_vRf->y);
		HX_STACK_LINE(2141)
		this->_mat->scale(this->_stretchScaleX,this->_stretchScaleY);
		HX_STACK_LINE(2142)
		this->_buf->draw(this->_FBUF,this->_mat,this->_tran,null(),null(),true);
		HX_STACK_LINE(2150)
		this->_tileScaledWID_prev = this->_sWX;
		HX_STACK_LINE(2151)
		this->_tileScaledHIG_prev = this->_sHY;
		HX_STACK_LINE(2155)
		this->_v0_prev->x = this->_vpCEN->x;
		HX_STACK_LINE(2156)
		this->_v0_prev->y = this->_vpCEN->y;
		HX_STACK_LINE(2162)
		this->_prev_wxI = this->_wxI;
		HX_STACK_LINE(2163)
		this->_prev_hyI = this->_hyI;
		HX_STACK_LINE(2166)
		this->_prev_FA->x0 = this->_fA->x0;
		HX_STACK_LINE(2167)
		this->_prev_FA->y0 = this->_fA->y0;
		HX_STACK_LINE(2168)
		this->_prev_FA->x1 = this->_fA->x1;
		HX_STACK_LINE(2169)
		this->_prev_FA->y1 = this->_fA->y1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileMapViewPortRenderEr_obj,drawViewPortToBuffer,(void))

Void TileMapViewPortRenderEr_obj::doBlurrCalcs( ){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr","doBlurrCalcs",0x68857517,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr.doBlurrCalcs","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",2179,0xc433736e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2188)
		this->_vpCEN->x = (((this->_v1->x + this->_vT->x)) * 0.5);
		HX_STACK_LINE(2189)
		this->_vpCEN->y = (((this->_v1->y + this->_vT->y)) * 0.5);
		HX_STACK_LINE(2191)
		this->_vpDEL->x = (this->_vpCEN->x - this->_v0_prev->x);
		HX_STACK_LINE(2192)
		this->_vpDEL->y = (this->_vpCEN->y - this->_v0_prev->y);
		HX_STACK_LINE(2193)
		if (((this->_vpDEL->x < (int)0))){
			HX_STACK_LINE(2193)
			this->_vpDEL->x = ((int)0 - this->_vpDEL->x);
		}
		HX_STACK_LINE(2194)
		if (((this->_vpDEL->y < (int)0))){
			HX_STACK_LINE(2194)
			this->_vpDEL->y = ((int)0 - this->_vpDEL->y);
		}
		HX_STACK_LINE(2195)
		Float _g = ::Math_obj::max(this->_vpDEL->x,this->_vpDEL->y);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2195)
		this->_vpd_max = _g;
		HX_STACK_LINE(2216)
		this->_tsd->x = (this->_sWX - this->_tileScaledWID_prev);
		HX_STACK_LINE(2217)
		this->_tsd->y = (this->_sHY - this->_tileScaledHIG_prev);
		HX_STACK_LINE(2218)
		if (((this->_tsd->x < (int)0))){
			HX_STACK_LINE(2218)
			this->_tsd->x = ((int)0 - this->_tsd->x);
		}
		HX_STACK_LINE(2219)
		if (((this->_tsd->y < (int)0))){
			HX_STACK_LINE(2219)
			this->_tsd->y = ((int)0 - this->_tsd->y);
		}
		HX_STACK_LINE(2261)
		if (((bool((this->_vpd_max < this->slowPanSpeed)) && bool(((bool((this->_tsd->x > (int)0)) || bool((this->_tsd->y > (int)0)))))))){
			HX_STACK_LINE(2264)
			this->_tran->alphaMultiplier = 0.1;
		}
		else{
			HX_STACK_LINE(2267)
			if (((this->_vpd_max != (int)0))){
				HX_STACK_LINE(2273)
				if (((this->_vpd_max < this->slowPanSpeed))){
					HX_STACK_LINE(2275)
					this->_tran->alphaMultiplier = 0.1;
				}
				else{
					HX_STACK_LINE(2277)
					if (((this->_vpd_max < this->fastPanSpeed))){
						HX_STACK_LINE(2280)
						Float per = (Float(((this->_vpd_max - this->slowPanSpeed))) / Float(((this->fastPanSpeed - this->slowPanSpeed))));		HX_STACK_VAR(per,"per");
						HX_STACK_LINE(2281)
						this->_tran->alphaMultiplier = (0.9 - (per * 0.8));
					}
				}
			}
			else{
				HX_STACK_LINE(2292)
				this->_tran->alphaMultiplier = (int)1;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileMapViewPortRenderEr_obj,doBlurrCalcs,(void))

Void TileMapViewPortRenderEr_obj::calcFSPAN( ){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr","calcFSPAN",0xda68e062,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr.calcFSPAN","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",2297,0xc433736e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2299)
		this->_fSpan->ix = ((this->_fA->x1 - this->_fA->x0) + (int)1);
		HX_STACK_LINE(2300)
		this->_fSpan->iy = ((this->_fA->y1 - this->_fA->y0) + (int)1);
		HX_STACK_LINE(2317)
		if (((this->_wxI != this->_prev_wxI))){
			HX_STACK_LINE(2319)
			this->_wxI_evenly = ((int)0 == hx::Mod(this->_buf_wid,this->_wxI));
			HX_STACK_LINE(2323)
			int _g = ::Math_obj::ceil((Float(this->_buf_wid) / Float(this->_wxI)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2323)
			int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2323)
			int _g2 = (_g1 + (int)1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(2323)
			this->_fstX = _g2;
		}
		HX_STACK_LINE(2331)
		if (((this->_hyI != this->_prev_hyI))){
			HX_STACK_LINE(2333)
			this->_hyI_evenly = ((int)0 == hx::Mod(this->_buf_hig,this->_hyI));
			HX_STACK_LINE(2336)
			int _g3 = ::Math_obj::ceil((Float(this->_buf_hig) / Float(this->_hyI)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(2336)
			int _g4 = ::Std_obj::_int(_g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(2336)
			int _g5 = (_g4 + (int)1);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(2336)
			this->_fstY = _g5;
		}
		HX_STACK_LINE(2355)
		if (((this->_fSpan->ix != this->_fstX))){
			HX_STACK_LINE(2357)
			(this->_fA->x1)++;
			HX_STACK_LINE(2358)
			(this->_fSpan->ix)++;
		}
		HX_STACK_LINE(2361)
		if (((this->_fSpan->iy != this->_fstY))){
			HX_STACK_LINE(2363)
			(this->_fA->y1)++;
			HX_STACK_LINE(2364)
			(this->_fSpan->iy)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileMapViewPortRenderEr_obj,calcFSPAN,(void))

int TileMapViewPortRenderEr_obj::getTileUnderPixelX( int inBufX,bool inReturnWrapped){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr","getTileUnderPixelX",0x5c0245df,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr.getTileUnderPixelX","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",2415,0xc433736e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inBufX,"inBufX")
	HX_STACK_ARG(inReturnWrapped,"inReturnWrapped")
	HX_STACK_LINE(2423)
	Float ppOSX = (this->_v1->x + inBufX);		HX_STACK_VAR(ppOSX,"ppOSX");
	HX_STACK_LINE(2433)
	int tileX = ::Std_obj::_int((Float(ppOSX) / Float(this->_sWX)));		HX_STACK_VAR(tileX,"tileX");
	HX_STACK_LINE(2438)
	if (((ppOSX < (int)0))){
		HX_STACK_LINE(2438)
		tileX = (tileX - (int)1);
	}
	HX_STACK_LINE(2440)
	if ((inReturnWrapped)){
		HX_STACK_LINE(2442)
		int _g = this->_fetcher->getWrappedTileValueX(tileX);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2442)
		tileX = _g;
	}
	HX_STACK_LINE(2446)
	return tileX;
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapViewPortRenderEr_obj,getTileUnderPixelX,return )

int TileMapViewPortRenderEr_obj::getTileUnderPixelY( int inBufY,bool inReturnWrapped){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr","getTileUnderPixelY",0x5c0245e0,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr.getTileUnderPixelY","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",2458,0xc433736e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inBufY,"inBufY")
	HX_STACK_ARG(inReturnWrapped,"inReturnWrapped")
	HX_STACK_LINE(2463)
	Float ppOSY = (this->_v1->y + inBufY);		HX_STACK_VAR(ppOSY,"ppOSY");
	HX_STACK_LINE(2466)
	int tileY = ::Std_obj::_int((Float(ppOSY) / Float(this->_sHY)));		HX_STACK_VAR(tileY,"tileY");
	HX_STACK_LINE(2476)
	if (((ppOSY < (int)0))){
		HX_STACK_LINE(2476)
		tileY = (tileY - (int)1);
	}
	HX_STACK_LINE(2479)
	if ((inReturnWrapped)){
		HX_STACK_LINE(2481)
		int _g = this->_fetcher->getWrappedTileValueY(tileY);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2481)
		tileY = _g;
	}
	HX_STACK_LINE(2485)
	return tileY;
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapViewPortRenderEr_obj,getTileUnderPixelY,return )

Void TileMapViewPortRenderEr_obj::remakeBuffer_F( ){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr","remakeBuffer_F",0xd370b7e1,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr.remakeBuffer_F","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",2490,0xc433736e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2493)
		this->_FBUF->dispose();
		HX_STACK_LINE(2494)
		this->_F2->dispose();
		HX_STACK_LINE(2499)
		::openfl::display::BitmapData _g = ::openfl::display::BitmapData_obj::__new((this->_fWID + this->_wxI),(this->_fHIG + this->_hyI),true,(int)0,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2499)
		this->_FBUF = _g;
		HX_STACK_LINE(2500)
		int _g1 = this->_FBUF->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2500)
		int _g2 = this->_FBUF->get_height();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(2500)
		::openfl::display::BitmapData _g3 = ::openfl::display::BitmapData_obj::__new(_g1,_g2,true,(int)0,null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(2500)
		this->_F2 = _g3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileMapViewPortRenderEr_obj,remakeBuffer_F,(void))

Void TileMapViewPortRenderEr_obj::msg( ::String inMSG){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr","msg",0x4bc38208,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr.msg","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TileMapViewPortRenderEr.hx",2508,0xc433736e)
		HX_STACK_ARG(inMSG,"inMSG")
		HX_STACK_LINE(2508)
		::jmSubLibs::EU_obj::msg((HX_CSTRING("TileMapViewPortRenderEr.hx msg==") + inMSG));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileMapViewPortRenderEr_obj,msg,(void))


TileMapViewPortRenderEr_obj::TileMapViewPortRenderEr_obj()
{
}

void TileMapViewPortRenderEr_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileMapViewPortRenderEr);
	HX_MARK_MEMBER_NAME(_g,"_g");
	HX_MARK_MEMBER_NAME(_layTileThisTime,"_layTileThisTime");
	HX_MARK_MEMBER_NAME(_bmfilt,"_bmfilt");
	HX_MARK_MEMBER_NAME(_prev_FA,"_prev_FA");
	HX_MARK_MEMBER_NAME(_prev_wxI,"_prev_wxI");
	HX_MARK_MEMBER_NAME(_prev_hyI,"_prev_hyI");
	HX_MARK_MEMBER_NAME(_salvageF,"_salvageF");
	HX_MARK_MEMBER_NAME(_wxI_evenly,"_wxI_evenly");
	HX_MARK_MEMBER_NAME(_hyI_evenly,"_hyI_evenly");
	HX_MARK_MEMBER_NAME(_fstX,"_fstX");
	HX_MARK_MEMBER_NAME(_fstY,"_fstY");
	HX_MARK_MEMBER_NAME(_trainMovingFWD_X,"_trainMovingFWD_X");
	HX_MARK_MEMBER_NAME(_trainMovingFWD_Y,"_trainMovingFWD_Y");
	HX_MARK_MEMBER_NAME(_oRecMaker,"_oRecMaker");
	HX_MARK_MEMBER_NAME(_oRec,"_oRec");
	HX_MARK_MEMBER_NAME(_oPT,"_oPT");
	HX_MARK_MEMBER_NAME(_overFA,"_overFA");
	HX_MARK_MEMBER_NAME(_cutTileX,"_cutTileX");
	HX_MARK_MEMBER_NAME(_cutTileY,"_cutTileY");
	HX_MARK_MEMBER_NAME(_pasteTileX,"_pasteTileX");
	HX_MARK_MEMBER_NAME(_pasteTileY,"_pasteTileY");
	HX_MARK_MEMBER_NAME(fastPanSpeed,"fastPanSpeed");
	HX_MARK_MEMBER_NAME(slowPanSpeed,"slowPanSpeed");
	HX_MARK_MEMBER_NAME(_tx,"_tx");
	HX_MARK_MEMBER_NAME(_ty,"_ty");
	HX_MARK_MEMBER_NAME(_stretchScaleX,"_stretchScaleX");
	HX_MARK_MEMBER_NAME(_stretchScaleY,"_stretchScaleY");
	HX_MARK_MEMBER_NAME(_fWID_FLOAT,"_fWID_FLOAT");
	HX_MARK_MEMBER_NAME(_fHIG_FLOAT,"_fHIG_FLOAT");
	HX_MARK_MEMBER_NAME(_fWID_FLOOR,"_fWID_FLOOR");
	HX_MARK_MEMBER_NAME(_fHIG_FLOOR,"_fHIG_FLOOR");
	HX_MARK_MEMBER_NAME(_screenIndex_X,"_screenIndex_X");
	HX_MARK_MEMBER_NAME(_screenIndex_Y,"_screenIndex_Y");
	HX_MARK_MEMBER_NAME(_bm,"_bm");
	HX_MARK_MEMBER_NAME(_bmRec,"_bmRec");
	HX_MARK_MEMBER_NAME(_cRec,"_cRec");
	HX_MARK_MEMBER_NAME(_dst,"_dst");
	HX_MARK_MEMBER_NAME(_mat,"_mat");
	HX_MARK_MEMBER_NAME(_tran,"_tran");
	HX_MARK_MEMBER_NAME(clearBufferEachFrame,"clearBufferEachFrame");
	HX_MARK_MEMBER_NAME(_ft,"_ft");
	HX_MARK_MEMBER_NAME(_fetcher,"_fetcher");
	HX_MARK_MEMBER_NAME(_buf_hasBeenLinked,"_buf_hasBeenLinked");
	HX_MARK_MEMBER_NAME(_a_hasBeenLinked,"_a_hasBeenLinked");
	HX_MARK_MEMBER_NAME(_d_hasBeenLinked,"_d_hasBeenLinked");
	HX_MARK_MEMBER_NAME(_fetcher_hasBeenLinked,"_fetcher_hasBeenLinked");
	HX_MARK_MEMBER_NAME(_ft_hasBeenLinked,"_ft_hasBeenLinked");
	HX_MARK_MEMBER_NAME(_buf,"_buf");
	HX_MARK_MEMBER_NAME(_buf_wid,"_buf_wid");
	HX_MARK_MEMBER_NAME(_buf_hig,"_buf_hig");
	HX_MARK_MEMBER_NAME(_FBUF,"_FBUF");
	HX_MARK_MEMBER_NAME(_fWID,"_fWID");
	HX_MARK_MEMBER_NAME(_fHIG,"_fHIG");
	HX_MARK_MEMBER_NAME(_fBufMax_WID,"_fBufMax_WID");
	HX_MARK_MEMBER_NAME(_fBufMax_HIG,"_fBufMax_HIG");
	HX_MARK_MEMBER_NAME(_F2,"_F2");
	HX_MARK_MEMBER_NAME(_SB,"_SB");
	HX_MARK_MEMBER_NAME(_sWX,"_sWX");
	HX_MARK_MEMBER_NAME(_sHY,"_sHY");
	HX_MARK_MEMBER_NAME(_wxI,"_wxI");
	HX_MARK_MEMBER_NAME(_hyI,"_hyI");
	HX_MARK_MEMBER_NAME(_v0,"_v0");
	HX_MARK_MEMBER_NAME(_p0,"_p0");
	HX_MARK_MEMBER_NAME(_p1,"_p1");
	HX_MARK_MEMBER_NAME(_r0,"_r0");
	HX_MARK_MEMBER_NAME(_ma,"_ma");
	HX_MARK_MEMBER_NAME(_vRf,"_vRf");
	HX_MARK_MEMBER_NAME(_v1,"_v1");
	HX_MARK_MEMBER_NAME(_vT,"_vT");
	HX_MARK_MEMBER_NAME(_fA,"_fA");
	HX_MARK_MEMBER_NAME(_fSpan,"_fSpan");
	HX_MARK_MEMBER_NAME(_f0,"_f0");
	HX_MARK_MEMBER_NAME(_f1,"_f1");
	HX_MARK_MEMBER_NAME(_n1,"_n1");
	HX_MARK_MEMBER_NAME(_zm,"_zm");
	HX_MARK_MEMBER_NAME(_tileScaledWID_prev,"_tileScaledWID_prev");
	HX_MARK_MEMBER_NAME(_tileScaledHIG_prev,"_tileScaledHIG_prev");
	HX_MARK_MEMBER_NAME(_tsd,"_tsd");
	HX_MARK_MEMBER_NAME(_tsd_min,"_tsd_min");
	HX_MARK_MEMBER_NAME(_vpDEL,"_vpDEL");
	HX_MARK_MEMBER_NAME(_vpd_max,"_vpd_max");
	HX_MARK_MEMBER_NAME(_v0_prev,"_v0_prev");
	HX_MARK_MEMBER_NAME(_vpCEN,"_vpCEN");
	HX_MARK_MEMBER_NAME(_alpha_pan,"_alpha_pan");
	HX_MARK_MEMBER_NAME(_panningSlow,"_panningSlow");
	HX_MARK_MEMBER_NAME(_alpha_zoom,"_alpha_zoom");
	HX_MARK_MEMBER_NAME(_a,"_a");
	HX_MARK_MEMBER_NAME(_d,"_d");
	HX_MARK_END_CLASS();
}

void TileMapViewPortRenderEr_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_g,"_g");
	HX_VISIT_MEMBER_NAME(_layTileThisTime,"_layTileThisTime");
	HX_VISIT_MEMBER_NAME(_bmfilt,"_bmfilt");
	HX_VISIT_MEMBER_NAME(_prev_FA,"_prev_FA");
	HX_VISIT_MEMBER_NAME(_prev_wxI,"_prev_wxI");
	HX_VISIT_MEMBER_NAME(_prev_hyI,"_prev_hyI");
	HX_VISIT_MEMBER_NAME(_salvageF,"_salvageF");
	HX_VISIT_MEMBER_NAME(_wxI_evenly,"_wxI_evenly");
	HX_VISIT_MEMBER_NAME(_hyI_evenly,"_hyI_evenly");
	HX_VISIT_MEMBER_NAME(_fstX,"_fstX");
	HX_VISIT_MEMBER_NAME(_fstY,"_fstY");
	HX_VISIT_MEMBER_NAME(_trainMovingFWD_X,"_trainMovingFWD_X");
	HX_VISIT_MEMBER_NAME(_trainMovingFWD_Y,"_trainMovingFWD_Y");
	HX_VISIT_MEMBER_NAME(_oRecMaker,"_oRecMaker");
	HX_VISIT_MEMBER_NAME(_oRec,"_oRec");
	HX_VISIT_MEMBER_NAME(_oPT,"_oPT");
	HX_VISIT_MEMBER_NAME(_overFA,"_overFA");
	HX_VISIT_MEMBER_NAME(_cutTileX,"_cutTileX");
	HX_VISIT_MEMBER_NAME(_cutTileY,"_cutTileY");
	HX_VISIT_MEMBER_NAME(_pasteTileX,"_pasteTileX");
	HX_VISIT_MEMBER_NAME(_pasteTileY,"_pasteTileY");
	HX_VISIT_MEMBER_NAME(fastPanSpeed,"fastPanSpeed");
	HX_VISIT_MEMBER_NAME(slowPanSpeed,"slowPanSpeed");
	HX_VISIT_MEMBER_NAME(_tx,"_tx");
	HX_VISIT_MEMBER_NAME(_ty,"_ty");
	HX_VISIT_MEMBER_NAME(_stretchScaleX,"_stretchScaleX");
	HX_VISIT_MEMBER_NAME(_stretchScaleY,"_stretchScaleY");
	HX_VISIT_MEMBER_NAME(_fWID_FLOAT,"_fWID_FLOAT");
	HX_VISIT_MEMBER_NAME(_fHIG_FLOAT,"_fHIG_FLOAT");
	HX_VISIT_MEMBER_NAME(_fWID_FLOOR,"_fWID_FLOOR");
	HX_VISIT_MEMBER_NAME(_fHIG_FLOOR,"_fHIG_FLOOR");
	HX_VISIT_MEMBER_NAME(_screenIndex_X,"_screenIndex_X");
	HX_VISIT_MEMBER_NAME(_screenIndex_Y,"_screenIndex_Y");
	HX_VISIT_MEMBER_NAME(_bm,"_bm");
	HX_VISIT_MEMBER_NAME(_bmRec,"_bmRec");
	HX_VISIT_MEMBER_NAME(_cRec,"_cRec");
	HX_VISIT_MEMBER_NAME(_dst,"_dst");
	HX_VISIT_MEMBER_NAME(_mat,"_mat");
	HX_VISIT_MEMBER_NAME(_tran,"_tran");
	HX_VISIT_MEMBER_NAME(clearBufferEachFrame,"clearBufferEachFrame");
	HX_VISIT_MEMBER_NAME(_ft,"_ft");
	HX_VISIT_MEMBER_NAME(_fetcher,"_fetcher");
	HX_VISIT_MEMBER_NAME(_buf_hasBeenLinked,"_buf_hasBeenLinked");
	HX_VISIT_MEMBER_NAME(_a_hasBeenLinked,"_a_hasBeenLinked");
	HX_VISIT_MEMBER_NAME(_d_hasBeenLinked,"_d_hasBeenLinked");
	HX_VISIT_MEMBER_NAME(_fetcher_hasBeenLinked,"_fetcher_hasBeenLinked");
	HX_VISIT_MEMBER_NAME(_ft_hasBeenLinked,"_ft_hasBeenLinked");
	HX_VISIT_MEMBER_NAME(_buf,"_buf");
	HX_VISIT_MEMBER_NAME(_buf_wid,"_buf_wid");
	HX_VISIT_MEMBER_NAME(_buf_hig,"_buf_hig");
	HX_VISIT_MEMBER_NAME(_FBUF,"_FBUF");
	HX_VISIT_MEMBER_NAME(_fWID,"_fWID");
	HX_VISIT_MEMBER_NAME(_fHIG,"_fHIG");
	HX_VISIT_MEMBER_NAME(_fBufMax_WID,"_fBufMax_WID");
	HX_VISIT_MEMBER_NAME(_fBufMax_HIG,"_fBufMax_HIG");
	HX_VISIT_MEMBER_NAME(_F2,"_F2");
	HX_VISIT_MEMBER_NAME(_SB,"_SB");
	HX_VISIT_MEMBER_NAME(_sWX,"_sWX");
	HX_VISIT_MEMBER_NAME(_sHY,"_sHY");
	HX_VISIT_MEMBER_NAME(_wxI,"_wxI");
	HX_VISIT_MEMBER_NAME(_hyI,"_hyI");
	HX_VISIT_MEMBER_NAME(_v0,"_v0");
	HX_VISIT_MEMBER_NAME(_p0,"_p0");
	HX_VISIT_MEMBER_NAME(_p1,"_p1");
	HX_VISIT_MEMBER_NAME(_r0,"_r0");
	HX_VISIT_MEMBER_NAME(_ma,"_ma");
	HX_VISIT_MEMBER_NAME(_vRf,"_vRf");
	HX_VISIT_MEMBER_NAME(_v1,"_v1");
	HX_VISIT_MEMBER_NAME(_vT,"_vT");
	HX_VISIT_MEMBER_NAME(_fA,"_fA");
	HX_VISIT_MEMBER_NAME(_fSpan,"_fSpan");
	HX_VISIT_MEMBER_NAME(_f0,"_f0");
	HX_VISIT_MEMBER_NAME(_f1,"_f1");
	HX_VISIT_MEMBER_NAME(_n1,"_n1");
	HX_VISIT_MEMBER_NAME(_zm,"_zm");
	HX_VISIT_MEMBER_NAME(_tileScaledWID_prev,"_tileScaledWID_prev");
	HX_VISIT_MEMBER_NAME(_tileScaledHIG_prev,"_tileScaledHIG_prev");
	HX_VISIT_MEMBER_NAME(_tsd,"_tsd");
	HX_VISIT_MEMBER_NAME(_tsd_min,"_tsd_min");
	HX_VISIT_MEMBER_NAME(_vpDEL,"_vpDEL");
	HX_VISIT_MEMBER_NAME(_vpd_max,"_vpd_max");
	HX_VISIT_MEMBER_NAME(_v0_prev,"_v0_prev");
	HX_VISIT_MEMBER_NAME(_vpCEN,"_vpCEN");
	HX_VISIT_MEMBER_NAME(_alpha_pan,"_alpha_pan");
	HX_VISIT_MEMBER_NAME(_panningSlow,"_panningSlow");
	HX_VISIT_MEMBER_NAME(_alpha_zoom,"_alpha_zoom");
	HX_VISIT_MEMBER_NAME(_a,"_a");
	HX_VISIT_MEMBER_NAME(_d,"_d");
}

Dynamic TileMapViewPortRenderEr_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_g") ) { return _g; }
		if (HX_FIELD_EQ(inName,"_a") ) { return _a; }
		if (HX_FIELD_EQ(inName,"_d") ) { return _d; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"msg") ) { return msg_dyn(); }
		if (HX_FIELD_EQ(inName,"_tx") ) { return _tx; }
		if (HX_FIELD_EQ(inName,"_ty") ) { return _ty; }
		if (HX_FIELD_EQ(inName,"_bm") ) { return _bm; }
		if (HX_FIELD_EQ(inName,"_ft") ) { return _ft; }
		if (HX_FIELD_EQ(inName,"_F2") ) { return _F2; }
		if (HX_FIELD_EQ(inName,"_SB") ) { return _SB; }
		if (HX_FIELD_EQ(inName,"_v0") ) { return _v0; }
		if (HX_FIELD_EQ(inName,"_p0") ) { return _p0; }
		if (HX_FIELD_EQ(inName,"_p1") ) { return _p1; }
		if (HX_FIELD_EQ(inName,"_r0") ) { return _r0; }
		if (HX_FIELD_EQ(inName,"_ma") ) { return _ma; }
		if (HX_FIELD_EQ(inName,"_v1") ) { return _v1; }
		if (HX_FIELD_EQ(inName,"_vT") ) { return _vT; }
		if (HX_FIELD_EQ(inName,"_fA") ) { return _fA; }
		if (HX_FIELD_EQ(inName,"_f0") ) { return _f0; }
		if (HX_FIELD_EQ(inName,"_f1") ) { return _f1; }
		if (HX_FIELD_EQ(inName,"_n1") ) { return _n1; }
		if (HX_FIELD_EQ(inName,"_zm") ) { return _zm; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_oPT") ) { return _oPT; }
		if (HX_FIELD_EQ(inName,"_dst") ) { return _dst; }
		if (HX_FIELD_EQ(inName,"_mat") ) { return _mat; }
		if (HX_FIELD_EQ(inName,"_buf") ) { return _buf; }
		if (HX_FIELD_EQ(inName,"_sWX") ) { return _sWX; }
		if (HX_FIELD_EQ(inName,"_sHY") ) { return _sHY; }
		if (HX_FIELD_EQ(inName,"_wxI") ) { return _wxI; }
		if (HX_FIELD_EQ(inName,"_hyI") ) { return _hyI; }
		if (HX_FIELD_EQ(inName,"_vRf") ) { return _vRf; }
		if (HX_FIELD_EQ(inName,"_tsd") ) { return _tsd; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_fstX") ) { return _fstX; }
		if (HX_FIELD_EQ(inName,"_fstY") ) { return _fstY; }
		if (HX_FIELD_EQ(inName,"_oRec") ) { return _oRec; }
		if (HX_FIELD_EQ(inName,"_cRec") ) { return _cRec; }
		if (HX_FIELD_EQ(inName,"_tran") ) { return _tran; }
		if (HX_FIELD_EQ(inName,"_FBUF") ) { return _FBUF; }
		if (HX_FIELD_EQ(inName,"_fWID") ) { return _fWID; }
		if (HX_FIELD_EQ(inName,"_fHIG") ) { return _fHIG; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_bmRec") ) { return _bmRec; }
		if (HX_FIELD_EQ(inName,"_fSpan") ) { return _fSpan; }
		if (HX_FIELD_EQ(inName,"_vpDEL") ) { return _vpDEL; }
		if (HX_FIELD_EQ(inName,"_vpCEN") ) { return _vpCEN; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_bmfilt") ) { return _bmfilt; }
		if (HX_FIELD_EQ(inName,"_overFA") ) { return _overFA; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_prev_FA") ) { return _prev_FA; }
		if (HX_FIELD_EQ(inName,"_fetcher") ) { return _fetcher; }
		if (HX_FIELD_EQ(inName,"_buf_wid") ) { return _buf_wid; }
		if (HX_FIELD_EQ(inName,"_buf_hig") ) { return _buf_hig; }
		if (HX_FIELD_EQ(inName,"_tsd_min") ) { return _tsd_min; }
		if (HX_FIELD_EQ(inName,"_vpd_max") ) { return _vpd_max; }
		if (HX_FIELD_EQ(inName,"_v0_prev") ) { return _v0_prev; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_prev_wxI") ) { return _prev_wxI; }
		if (HX_FIELD_EQ(inName,"_prev_hyI") ) { return _prev_hyI; }
		if (HX_FIELD_EQ(inName,"_salvageF") ) { return _salvageF; }
		if (HX_FIELD_EQ(inName,"_cutTileX") ) { return _cutTileX; }
		if (HX_FIELD_EQ(inName,"_cutTileY") ) { return _cutTileY; }
		if (HX_FIELD_EQ(inName,"calcFSPAN") ) { return calcFSPAN_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_oRecMaker") ) { return _oRecMaker; }
		if (HX_FIELD_EQ(inName,"_alpha_pan") ) { return _alpha_pan; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_wxI_evenly") ) { return _wxI_evenly; }
		if (HX_FIELD_EQ(inName,"_hyI_evenly") ) { return _hyI_evenly; }
		if (HX_FIELD_EQ(inName,"_pasteTileX") ) { return _pasteTileX; }
		if (HX_FIELD_EQ(inName,"_pasteTileY") ) { return _pasteTileY; }
		if (HX_FIELD_EQ(inName,"_fWID_FLOAT") ) { return _fWID_FLOAT; }
		if (HX_FIELD_EQ(inName,"_fHIG_FLOAT") ) { return _fHIG_FLOAT; }
		if (HX_FIELD_EQ(inName,"_fWID_FLOOR") ) { return _fWID_FLOOR; }
		if (HX_FIELD_EQ(inName,"_fHIG_FLOOR") ) { return _fHIG_FLOOR; }
		if (HX_FIELD_EQ(inName,"_alpha_zoom") ) { return _alpha_zoom; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fastPanSpeed") ) { return fastPanSpeed; }
		if (HX_FIELD_EQ(inName,"slowPanSpeed") ) { return slowPanSpeed; }
		if (HX_FIELD_EQ(inName,"_fBufMax_WID") ) { return _fBufMax_WID; }
		if (HX_FIELD_EQ(inName,"_fBufMax_HIG") ) { return _fBufMax_HIG; }
		if (HX_FIELD_EQ(inName,"_panningSlow") ) { return _panningSlow; }
		if (HX_FIELD_EQ(inName,"doBlurrCalcs") ) { return doBlurrCalcs_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_stretchScaleX") ) { return _stretchScaleX; }
		if (HX_FIELD_EQ(inName,"_stretchScaleY") ) { return _stretchScaleY; }
		if (HX_FIELD_EQ(inName,"_screenIndex_X") ) { return _screenIndex_X; }
		if (HX_FIELD_EQ(inName,"_screenIndex_Y") ) { return _screenIndex_Y; }
		if (HX_FIELD_EQ(inName,"linkAnimHelper") ) { return linkAnimHelper_dyn(); }
		if (HX_FIELD_EQ(inName,"setScreenWrapX") ) { return setScreenWrapX_dyn(); }
		if (HX_FIELD_EQ(inName,"setScreenWrapY") ) { return setScreenWrapY_dyn(); }
		if (HX_FIELD_EQ(inName,"remakeBuffer_F") ) { return remakeBuffer_F_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getOnScreenArea") ) { return getOnScreenArea_dyn(); }
		if (HX_FIELD_EQ(inName,"linkTileMapDims") ) { return linkTileMapDims_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_layTileThisTime") ) { return _layTileThisTime; }
		if (HX_FIELD_EQ(inName,"linkFrameTracker") ) { return linkFrameTracker_dyn(); }
		if (HX_FIELD_EQ(inName,"_a_hasBeenLinked") ) { return _a_hasBeenLinked; }
		if (HX_FIELD_EQ(inName,"_d_hasBeenLinked") ) { return _d_hasBeenLinked; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_trainMovingFWD_X") ) { return _trainMovingFWD_X; }
		if (HX_FIELD_EQ(inName,"_trainMovingFWD_Y") ) { return _trainMovingFWD_Y; }
		if (HX_FIELD_EQ(inName,"_ft_hasBeenLinked") ) { return _ft_hasBeenLinked; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_buf_hasBeenLinked") ) { return _buf_hasBeenLinked; }
		if (HX_FIELD_EQ(inName,"linkViewPortBuffer") ) { return linkViewPortBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileUnderPixelX") ) { return getTileUnderPixelX_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileUnderPixelY") ) { return getTileUnderPixelY_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_tileScaledWID_prev") ) { return _tileScaledWID_prev; }
		if (HX_FIELD_EQ(inName,"_tileScaledHIG_prev") ) { return _tileScaledHIG_prev; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"clearBufferEachFrame") ) { return clearBufferEachFrame; }
		if (HX_FIELD_EQ(inName,"drawViewPortToBuffer") ) { return drawViewPortToBuffer_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_fetcher_hasBeenLinked") ) { return _fetcher_hasBeenLinked; }
		if (HX_FIELD_EQ(inName,"linkTMR_BoundSYS_FUNCS") ) { return linkTMR_BoundSYS_FUNCS_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"tryAndSetInitialTilePrevScale") ) { return tryAndSetInitialTilePrevScale_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"getScaledHalfTileForTolerancesX") ) { return getScaledHalfTileForTolerancesX_dyn(); }
		if (HX_FIELD_EQ(inName,"getScaledHalfTileForTolerancesY") ) { return getScaledHalfTileForTolerancesY_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileMapViewPortRenderEr_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_g") ) { _g=inValue.Cast< ::openfl::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_a") ) { _a=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::ScrollZoomAnimHelper >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_d") ) { _d=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_tx") ) { _tx=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ty") ) { _ty=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bm") ) { _bm=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ft") ) { _ft=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_F2") ) { _F2=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_SB") ) { _SB=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_v0") ) { _v0=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_p0") ) { _p0=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_p1") ) { _p1=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_r0") ) { _r0=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ma") ) { _ma=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_v1") ) { _v1=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vT") ) { _vT=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fA") ) { _fA=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_f0") ) { _f0=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_f1") ) { _f1=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_n1") ) { _n1=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_zm") ) { _zm=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_oPT") ) { _oPT=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dst") ) { _dst=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mat") ) { _mat=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buf") ) { _buf=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sWX") ) { _sWX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sHY") ) { _sHY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_wxI") ) { _wxI=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hyI") ) { _hyI=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vRf") ) { _vRf=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tsd") ) { _tsd=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_fstX") ) { _fstX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fstY") ) { _fstY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_oRec") ) { _oRec=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cRec") ) { _cRec=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tran") ) { _tran=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_FBUF") ) { _FBUF=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fWID") ) { _fWID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fHIG") ) { _fHIG=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_bmRec") ) { _bmRec=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fSpan") ) { _fSpan=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vpDEL") ) { _vpDEL=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vpCEN") ) { _vpCEN=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_bmfilt") ) { _bmfilt=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_overFA") ) { _overFA=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_prev_FA") ) { _prev_FA=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fetcher") ) { _fetcher=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileChunkFetcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buf_wid") ) { _buf_wid=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buf_hig") ) { _buf_hig=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tsd_min") ) { _tsd_min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vpd_max") ) { _vpd_max=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_v0_prev") ) { _v0_prev=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_prev_wxI") ) { _prev_wxI=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prev_hyI") ) { _prev_hyI=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_salvageF") ) { _salvageF=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cutTileX") ) { _cutTileX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cutTileY") ) { _cutTileY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_oRecMaker") ) { _oRecMaker=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alpha_pan") ) { _alpha_pan=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_wxI_evenly") ) { _wxI_evenly=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hyI_evenly") ) { _hyI_evenly=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pasteTileX") ) { _pasteTileX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pasteTileY") ) { _pasteTileY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fWID_FLOAT") ) { _fWID_FLOAT=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fHIG_FLOAT") ) { _fHIG_FLOAT=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fWID_FLOOR") ) { _fWID_FLOOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fHIG_FLOOR") ) { _fHIG_FLOOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alpha_zoom") ) { _alpha_zoom=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fastPanSpeed") ) { fastPanSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slowPanSpeed") ) { slowPanSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fBufMax_WID") ) { _fBufMax_WID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fBufMax_HIG") ) { _fBufMax_HIG=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_panningSlow") ) { _panningSlow=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_stretchScaleX") ) { _stretchScaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stretchScaleY") ) { _stretchScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_screenIndex_X") ) { _screenIndex_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_screenIndex_Y") ) { _screenIndex_Y=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_layTileThisTime") ) { _layTileThisTime=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_a_hasBeenLinked") ) { _a_hasBeenLinked=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_d_hasBeenLinked") ) { _d_hasBeenLinked=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_trainMovingFWD_X") ) { _trainMovingFWD_X=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_trainMovingFWD_Y") ) { _trainMovingFWD_Y=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ft_hasBeenLinked") ) { _ft_hasBeenLinked=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_buf_hasBeenLinked") ) { _buf_hasBeenLinked=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_tileScaledWID_prev") ) { _tileScaledWID_prev=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileScaledHIG_prev") ) { _tileScaledHIG_prev=inValue.Cast< Float >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"clearBufferEachFrame") ) { clearBufferEachFrame=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_fetcher_hasBeenLinked") ) { _fetcher_hasBeenLinked=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileMapViewPortRenderEr_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_g"));
	outFields->push(HX_CSTRING("_layTileThisTime"));
	outFields->push(HX_CSTRING("_bmfilt"));
	outFields->push(HX_CSTRING("_prev_FA"));
	outFields->push(HX_CSTRING("_prev_wxI"));
	outFields->push(HX_CSTRING("_prev_hyI"));
	outFields->push(HX_CSTRING("_salvageF"));
	outFields->push(HX_CSTRING("_wxI_evenly"));
	outFields->push(HX_CSTRING("_hyI_evenly"));
	outFields->push(HX_CSTRING("_fstX"));
	outFields->push(HX_CSTRING("_fstY"));
	outFields->push(HX_CSTRING("_trainMovingFWD_X"));
	outFields->push(HX_CSTRING("_trainMovingFWD_Y"));
	outFields->push(HX_CSTRING("_oRecMaker"));
	outFields->push(HX_CSTRING("_oRec"));
	outFields->push(HX_CSTRING("_oPT"));
	outFields->push(HX_CSTRING("_overFA"));
	outFields->push(HX_CSTRING("_cutTileX"));
	outFields->push(HX_CSTRING("_cutTileY"));
	outFields->push(HX_CSTRING("_pasteTileX"));
	outFields->push(HX_CSTRING("_pasteTileY"));
	outFields->push(HX_CSTRING("fastPanSpeed"));
	outFields->push(HX_CSTRING("slowPanSpeed"));
	outFields->push(HX_CSTRING("_tx"));
	outFields->push(HX_CSTRING("_ty"));
	outFields->push(HX_CSTRING("_stretchScaleX"));
	outFields->push(HX_CSTRING("_stretchScaleY"));
	outFields->push(HX_CSTRING("_fWID_FLOAT"));
	outFields->push(HX_CSTRING("_fHIG_FLOAT"));
	outFields->push(HX_CSTRING("_fWID_FLOOR"));
	outFields->push(HX_CSTRING("_fHIG_FLOOR"));
	outFields->push(HX_CSTRING("_screenIndex_X"));
	outFields->push(HX_CSTRING("_screenIndex_Y"));
	outFields->push(HX_CSTRING("_bm"));
	outFields->push(HX_CSTRING("_bmRec"));
	outFields->push(HX_CSTRING("_cRec"));
	outFields->push(HX_CSTRING("_dst"));
	outFields->push(HX_CSTRING("_mat"));
	outFields->push(HX_CSTRING("_tran"));
	outFields->push(HX_CSTRING("clearBufferEachFrame"));
	outFields->push(HX_CSTRING("_ft"));
	outFields->push(HX_CSTRING("_fetcher"));
	outFields->push(HX_CSTRING("_buf_hasBeenLinked"));
	outFields->push(HX_CSTRING("_a_hasBeenLinked"));
	outFields->push(HX_CSTRING("_d_hasBeenLinked"));
	outFields->push(HX_CSTRING("_fetcher_hasBeenLinked"));
	outFields->push(HX_CSTRING("_ft_hasBeenLinked"));
	outFields->push(HX_CSTRING("_buf"));
	outFields->push(HX_CSTRING("_buf_wid"));
	outFields->push(HX_CSTRING("_buf_hig"));
	outFields->push(HX_CSTRING("_FBUF"));
	outFields->push(HX_CSTRING("_fWID"));
	outFields->push(HX_CSTRING("_fHIG"));
	outFields->push(HX_CSTRING("_fBufMax_WID"));
	outFields->push(HX_CSTRING("_fBufMax_HIG"));
	outFields->push(HX_CSTRING("_F2"));
	outFields->push(HX_CSTRING("_SB"));
	outFields->push(HX_CSTRING("_sWX"));
	outFields->push(HX_CSTRING("_sHY"));
	outFields->push(HX_CSTRING("_wxI"));
	outFields->push(HX_CSTRING("_hyI"));
	outFields->push(HX_CSTRING("_v0"));
	outFields->push(HX_CSTRING("_p0"));
	outFields->push(HX_CSTRING("_p1"));
	outFields->push(HX_CSTRING("_r0"));
	outFields->push(HX_CSTRING("_ma"));
	outFields->push(HX_CSTRING("_vRf"));
	outFields->push(HX_CSTRING("_v1"));
	outFields->push(HX_CSTRING("_vT"));
	outFields->push(HX_CSTRING("_fA"));
	outFields->push(HX_CSTRING("_fSpan"));
	outFields->push(HX_CSTRING("_f0"));
	outFields->push(HX_CSTRING("_f1"));
	outFields->push(HX_CSTRING("_n1"));
	outFields->push(HX_CSTRING("_zm"));
	outFields->push(HX_CSTRING("_tileScaledWID_prev"));
	outFields->push(HX_CSTRING("_tileScaledHIG_prev"));
	outFields->push(HX_CSTRING("_tsd"));
	outFields->push(HX_CSTRING("_tsd_min"));
	outFields->push(HX_CSTRING("_vpDEL"));
	outFields->push(HX_CSTRING("_vpd_max"));
	outFields->push(HX_CSTRING("_v0_prev"));
	outFields->push(HX_CSTRING("_vpCEN"));
	outFields->push(HX_CSTRING("_alpha_pan"));
	outFields->push(HX_CSTRING("_panningSlow"));
	outFields->push(HX_CSTRING("_alpha_zoom"));
	outFields->push(HX_CSTRING("_a"));
	outFields->push(HX_CSTRING("_d"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("msg"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Graphics*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_g),HX_CSTRING("_g")},
	{hx::fsBool,(int)offsetof(TileMapViewPortRenderEr_obj,_layTileThisTime),HX_CSTRING("_layTileThisTime")},
	{hx::fsBool,(int)offsetof(TileMapViewPortRenderEr_obj,_bmfilt),HX_CSTRING("_bmfilt")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_prev_FA),HX_CSTRING("_prev_FA")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_prev_wxI),HX_CSTRING("_prev_wxI")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_prev_hyI),HX_CSTRING("_prev_hyI")},
	{hx::fsBool,(int)offsetof(TileMapViewPortRenderEr_obj,_salvageF),HX_CSTRING("_salvageF")},
	{hx::fsBool,(int)offsetof(TileMapViewPortRenderEr_obj,_wxI_evenly),HX_CSTRING("_wxI_evenly")},
	{hx::fsBool,(int)offsetof(TileMapViewPortRenderEr_obj,_hyI_evenly),HX_CSTRING("_hyI_evenly")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_fstX),HX_CSTRING("_fstX")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_fstY),HX_CSTRING("_fstY")},
	{hx::fsBool,(int)offsetof(TileMapViewPortRenderEr_obj,_trainMovingFWD_X),HX_CSTRING("_trainMovingFWD_X")},
	{hx::fsBool,(int)offsetof(TileMapViewPortRenderEr_obj,_trainMovingFWD_Y),HX_CSTRING("_trainMovingFWD_Y")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_oRecMaker),HX_CSTRING("_oRecMaker")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_oRec),HX_CSTRING("_oRec")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_oPT),HX_CSTRING("_oPT")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_overFA),HX_CSTRING("_overFA")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_cutTileX),HX_CSTRING("_cutTileX")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_cutTileY),HX_CSTRING("_cutTileY")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_pasteTileX),HX_CSTRING("_pasteTileX")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_pasteTileY),HX_CSTRING("_pasteTileY")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,fastPanSpeed),HX_CSTRING("fastPanSpeed")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,slowPanSpeed),HX_CSTRING("slowPanSpeed")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_tx),HX_CSTRING("_tx")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_ty),HX_CSTRING("_ty")},
	{hx::fsFloat,(int)offsetof(TileMapViewPortRenderEr_obj,_stretchScaleX),HX_CSTRING("_stretchScaleX")},
	{hx::fsFloat,(int)offsetof(TileMapViewPortRenderEr_obj,_stretchScaleY),HX_CSTRING("_stretchScaleY")},
	{hx::fsFloat,(int)offsetof(TileMapViewPortRenderEr_obj,_fWID_FLOAT),HX_CSTRING("_fWID_FLOAT")},
	{hx::fsFloat,(int)offsetof(TileMapViewPortRenderEr_obj,_fHIG_FLOAT),HX_CSTRING("_fHIG_FLOAT")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_fWID_FLOOR),HX_CSTRING("_fWID_FLOOR")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_fHIG_FLOOR),HX_CSTRING("_fHIG_FLOOR")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_screenIndex_X),HX_CSTRING("_screenIndex_X")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_screenIndex_Y),HX_CSTRING("_screenIndex_Y")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_bm),HX_CSTRING("_bm")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_bmRec),HX_CSTRING("_bmRec")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_cRec),HX_CSTRING("_cRec")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_dst),HX_CSTRING("_dst")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_mat),HX_CSTRING("_mat")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_tran),HX_CSTRING("_tran")},
	{hx::fsBool,(int)offsetof(TileMapViewPortRenderEr_obj,clearBufferEachFrame),HX_CSTRING("clearBufferEachFrame")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_ft),HX_CSTRING("_ft")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileChunkFetcher*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_fetcher),HX_CSTRING("_fetcher")},
	{hx::fsBool,(int)offsetof(TileMapViewPortRenderEr_obj,_buf_hasBeenLinked),HX_CSTRING("_buf_hasBeenLinked")},
	{hx::fsBool,(int)offsetof(TileMapViewPortRenderEr_obj,_a_hasBeenLinked),HX_CSTRING("_a_hasBeenLinked")},
	{hx::fsBool,(int)offsetof(TileMapViewPortRenderEr_obj,_d_hasBeenLinked),HX_CSTRING("_d_hasBeenLinked")},
	{hx::fsBool,(int)offsetof(TileMapViewPortRenderEr_obj,_fetcher_hasBeenLinked),HX_CSTRING("_fetcher_hasBeenLinked")},
	{hx::fsBool,(int)offsetof(TileMapViewPortRenderEr_obj,_ft_hasBeenLinked),HX_CSTRING("_ft_hasBeenLinked")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_buf),HX_CSTRING("_buf")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_buf_wid),HX_CSTRING("_buf_wid")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_buf_hig),HX_CSTRING("_buf_hig")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_FBUF),HX_CSTRING("_FBUF")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_fWID),HX_CSTRING("_fWID")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_fHIG),HX_CSTRING("_fHIG")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_fBufMax_WID),HX_CSTRING("_fBufMax_WID")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_fBufMax_HIG),HX_CSTRING("_fBufMax_HIG")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_F2),HX_CSTRING("_F2")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_SB),HX_CSTRING("_SB")},
	{hx::fsFloat,(int)offsetof(TileMapViewPortRenderEr_obj,_sWX),HX_CSTRING("_sWX")},
	{hx::fsFloat,(int)offsetof(TileMapViewPortRenderEr_obj,_sHY),HX_CSTRING("_sHY")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_wxI),HX_CSTRING("_wxI")},
	{hx::fsInt,(int)offsetof(TileMapViewPortRenderEr_obj,_hyI),HX_CSTRING("_hyI")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_v0),HX_CSTRING("_v0")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_p0),HX_CSTRING("_p0")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_p1),HX_CSTRING("_p1")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_r0),HX_CSTRING("_r0")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_ma),HX_CSTRING("_ma")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_vRf),HX_CSTRING("_vRf")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_v1),HX_CSTRING("_v1")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_vT),HX_CSTRING("_vT")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_fA),HX_CSTRING("_fA")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_fSpan),HX_CSTRING("_fSpan")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_f0),HX_CSTRING("_f0")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_f1),HX_CSTRING("_f1")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_n1),HX_CSTRING("_n1")},
	{hx::fsFloat,(int)offsetof(TileMapViewPortRenderEr_obj,_zm),HX_CSTRING("_zm")},
	{hx::fsFloat,(int)offsetof(TileMapViewPortRenderEr_obj,_tileScaledWID_prev),HX_CSTRING("_tileScaledWID_prev")},
	{hx::fsFloat,(int)offsetof(TileMapViewPortRenderEr_obj,_tileScaledHIG_prev),HX_CSTRING("_tileScaledHIG_prev")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_tsd),HX_CSTRING("_tsd")},
	{hx::fsFloat,(int)offsetof(TileMapViewPortRenderEr_obj,_tsd_min),HX_CSTRING("_tsd_min")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_vpDEL),HX_CSTRING("_vpDEL")},
	{hx::fsFloat,(int)offsetof(TileMapViewPortRenderEr_obj,_vpd_max),HX_CSTRING("_vpd_max")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_v0_prev),HX_CSTRING("_v0_prev")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_vpCEN),HX_CSTRING("_vpCEN")},
	{hx::fsFloat,(int)offsetof(TileMapViewPortRenderEr_obj,_alpha_pan),HX_CSTRING("_alpha_pan")},
	{hx::fsBool,(int)offsetof(TileMapViewPortRenderEr_obj,_panningSlow),HX_CSTRING("_panningSlow")},
	{hx::fsFloat,(int)offsetof(TileMapViewPortRenderEr_obj,_alpha_zoom),HX_CSTRING("_alpha_zoom")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::ScrollZoomAnimHelper*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_a),HX_CSTRING("_a")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims*/ ,(int)offsetof(TileMapViewPortRenderEr_obj,_d),HX_CSTRING("_d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_g"),
	HX_CSTRING("_layTileThisTime"),
	HX_CSTRING("_bmfilt"),
	HX_CSTRING("_prev_FA"),
	HX_CSTRING("_prev_wxI"),
	HX_CSTRING("_prev_hyI"),
	HX_CSTRING("_salvageF"),
	HX_CSTRING("_wxI_evenly"),
	HX_CSTRING("_hyI_evenly"),
	HX_CSTRING("_fstX"),
	HX_CSTRING("_fstY"),
	HX_CSTRING("_trainMovingFWD_X"),
	HX_CSTRING("_trainMovingFWD_Y"),
	HX_CSTRING("_oRecMaker"),
	HX_CSTRING("_oRec"),
	HX_CSTRING("_oPT"),
	HX_CSTRING("_overFA"),
	HX_CSTRING("_cutTileX"),
	HX_CSTRING("_cutTileY"),
	HX_CSTRING("_pasteTileX"),
	HX_CSTRING("_pasteTileY"),
	HX_CSTRING("fastPanSpeed"),
	HX_CSTRING("slowPanSpeed"),
	HX_CSTRING("_tx"),
	HX_CSTRING("_ty"),
	HX_CSTRING("_stretchScaleX"),
	HX_CSTRING("_stretchScaleY"),
	HX_CSTRING("_fWID_FLOAT"),
	HX_CSTRING("_fHIG_FLOAT"),
	HX_CSTRING("_fWID_FLOOR"),
	HX_CSTRING("_fHIG_FLOOR"),
	HX_CSTRING("_screenIndex_X"),
	HX_CSTRING("_screenIndex_Y"),
	HX_CSTRING("_bm"),
	HX_CSTRING("_bmRec"),
	HX_CSTRING("_cRec"),
	HX_CSTRING("_dst"),
	HX_CSTRING("_mat"),
	HX_CSTRING("_tran"),
	HX_CSTRING("clearBufferEachFrame"),
	HX_CSTRING("_ft"),
	HX_CSTRING("_fetcher"),
	HX_CSTRING("linkFrameTracker"),
	HX_CSTRING("_buf_hasBeenLinked"),
	HX_CSTRING("_a_hasBeenLinked"),
	HX_CSTRING("_d_hasBeenLinked"),
	HX_CSTRING("_fetcher_hasBeenLinked"),
	HX_CSTRING("_ft_hasBeenLinked"),
	HX_CSTRING("_buf"),
	HX_CSTRING("_buf_wid"),
	HX_CSTRING("_buf_hig"),
	HX_CSTRING("_FBUF"),
	HX_CSTRING("_fWID"),
	HX_CSTRING("_fHIG"),
	HX_CSTRING("_fBufMax_WID"),
	HX_CSTRING("_fBufMax_HIG"),
	HX_CSTRING("_F2"),
	HX_CSTRING("_SB"),
	HX_CSTRING("_sWX"),
	HX_CSTRING("_sHY"),
	HX_CSTRING("_wxI"),
	HX_CSTRING("_hyI"),
	HX_CSTRING("_v0"),
	HX_CSTRING("_p0"),
	HX_CSTRING("_p1"),
	HX_CSTRING("_r0"),
	HX_CSTRING("_ma"),
	HX_CSTRING("_vRf"),
	HX_CSTRING("_v1"),
	HX_CSTRING("_vT"),
	HX_CSTRING("_fA"),
	HX_CSTRING("_fSpan"),
	HX_CSTRING("_f0"),
	HX_CSTRING("_f1"),
	HX_CSTRING("_n1"),
	HX_CSTRING("_zm"),
	HX_CSTRING("_tileScaledWID_prev"),
	HX_CSTRING("_tileScaledHIG_prev"),
	HX_CSTRING("_tsd"),
	HX_CSTRING("_tsd_min"),
	HX_CSTRING("_vpDEL"),
	HX_CSTRING("_vpd_max"),
	HX_CSTRING("_v0_prev"),
	HX_CSTRING("_vpCEN"),
	HX_CSTRING("_alpha_pan"),
	HX_CSTRING("_panningSlow"),
	HX_CSTRING("_alpha_zoom"),
	HX_CSTRING("_a"),
	HX_CSTRING("_d"),
	HX_CSTRING("linkViewPortBuffer"),
	HX_CSTRING("getOnScreenArea"),
	HX_CSTRING("linkTMR_BoundSYS_FUNCS"),
	HX_CSTRING("linkTileMapDims"),
	HX_CSTRING("linkAnimHelper"),
	HX_CSTRING("tryAndSetInitialTilePrevScale"),
	HX_CSTRING("setScreenWrapX"),
	HX_CSTRING("setScreenWrapY"),
	HX_CSTRING("getScaledHalfTileForTolerancesX"),
	HX_CSTRING("getScaledHalfTileForTolerancesY"),
	HX_CSTRING("drawViewPortToBuffer"),
	HX_CSTRING("doBlurrCalcs"),
	HX_CSTRING("calcFSPAN"),
	HX_CSTRING("getTileUnderPixelX"),
	HX_CSTRING("getTileUnderPixelY"),
	HX_CSTRING("remakeBuffer_F"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileMapViewPortRenderEr_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileMapViewPortRenderEr_obj::__mClass,"__mClass");
};

#endif

Class TileMapViewPortRenderEr_obj::__mClass;

void TileMapViewPortRenderEr_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TileMapViewPortRenderEr"), hx::TCanCast< TileMapViewPortRenderEr_obj> ,sStaticFields,sMemberFields,
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

void TileMapViewPortRenderEr_obj::__boot()
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
