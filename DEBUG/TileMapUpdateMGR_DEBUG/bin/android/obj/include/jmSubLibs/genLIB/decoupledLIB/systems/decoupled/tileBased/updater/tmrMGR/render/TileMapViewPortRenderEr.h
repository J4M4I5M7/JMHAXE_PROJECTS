#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_render_TileMapViewPortRenderEr
#define INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_render_TileMapViewPortRenderEr

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS8(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,helpers,mapDims,TileMapDims)
HX_DECLARE_CLASS9(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,updater,tmrMGR,helpers,ScrollZoomAnimHelper)
HX_DECLARE_CLASS9(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,updater,tmrMGR,helpers,TMR_BoundSYS_FUNCS)
HX_DECLARE_CLASS9(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,updater,tmrMGR,render,TileChunkFetcher)
HX_DECLARE_CLASS9(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,updater,tmrMGR,render,TileMapViewPortRenderEr)
HX_DECLARE_CLASS6(jmSubLibs,genLIB,freeBinaryLIB,structs,geom,primitives,IntPoint)
HX_DECLARE_CLASS6(jmSubLibs,genLIB,freeBinaryLIB,structs,geom,primitives,NumPoint)
HX_DECLARE_CLASS6(jmSubLibs,genLIB,freeBinaryLIB,structs,geom,primitives,PointPair)
HX_DECLARE_CLASS5(jmSubLibs,genLIB,freeBinaryLIB,structs,glue,IntString)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace decoupled{
namespace tileBased{
namespace updater{
namespace tmrMGR{
namespace render{


class HXCPP_CLASS_ATTRIBUTES  TileMapViewPortRenderEr_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TileMapViewPortRenderEr_obj OBJ_;
		TileMapViewPortRenderEr_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TileMapViewPortRenderEr_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileMapViewPortRenderEr_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TileMapViewPortRenderEr"); }

		::openfl::display::Graphics _g;
		bool _layTileThisTime;
		bool _bmfilt;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair _prev_FA;
		int _prev_wxI;
		int _prev_hyI;
		bool _salvageF;
		bool _wxI_evenly;
		bool _hyI_evenly;
		int _fstX;
		int _fstY;
		bool _trainMovingFWD_X;
		bool _trainMovingFWD_Y;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint _oRecMaker;
		::openfl::geom::Rectangle _oRec;
		::openfl::geom::Point _oPT;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair _overFA;
		int _cutTileX;
		int _cutTileY;
		int _pasteTileX;
		int _pasteTileY;
		int fastPanSpeed;
		int slowPanSpeed;
		int _tx;
		int _ty;
		Float _stretchScaleX;
		Float _stretchScaleY;
		Float _fWID_FLOAT;
		Float _fHIG_FLOAT;
		int _fWID_FLOOR;
		int _fHIG_FLOOR;
		int _screenIndex_X;
		int _screenIndex_Y;
		::openfl::display::BitmapData _bm;
		::openfl::geom::Rectangle _bmRec;
		::openfl::geom::Rectangle _cRec;
		::openfl::geom::Point _dst;
		::openfl::geom::Matrix _mat;
		::openfl::geom::ColorTransform _tran;
		bool clearBufferEachFrame;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString _ft;
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileChunkFetcher _fetcher;
		virtual Void linkFrameTracker( ::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString inFrameTracker);
		Dynamic linkFrameTracker_dyn();

		bool _buf_hasBeenLinked;
		bool _a_hasBeenLinked;
		bool _d_hasBeenLinked;
		bool _fetcher_hasBeenLinked;
		bool _ft_hasBeenLinked;
		::openfl::display::BitmapData _buf;
		int _buf_wid;
		int _buf_hig;
		::openfl::display::BitmapData _FBUF;
		int _fWID;
		int _fHIG;
		int _fBufMax_WID;
		int _fBufMax_HIG;
		::openfl::display::BitmapData _F2;
		::openfl::display::BitmapData _SB;
		Float _sWX;
		Float _sHY;
		int _wxI;
		int _hyI;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _v0;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _p0;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _p1;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _r0;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _ma;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _vRf;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _v1;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _vT;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair _fA;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint _fSpan;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _f0;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _f1;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _n1;
		Float _zm;
		Float _tileScaledWID_prev;
		Float _tileScaledHIG_prev;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _tsd;
		Float _tsd_min;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _vpDEL;
		Float _vpd_max;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _v0_prev;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::NumPoint _vpCEN;
		Float _alpha_pan;
		bool _panningSlow;
		Float _alpha_zoom;
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::ScrollZoomAnimHelper _a;
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims _d;
		virtual Void linkViewPortBuffer( ::openfl::display::BitmapData inBuf);
		Dynamic linkViewPortBuffer_dyn();

		virtual ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair getOnScreenArea( );
		Dynamic getOnScreenArea_dyn();

		virtual Void linkTMR_BoundSYS_FUNCS( Array< ::Dynamic > inReg,int inReg_length);
		Dynamic linkTMR_BoundSYS_FUNCS_dyn();

		virtual Void linkTileMapDims( ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims inDims);
		Dynamic linkTileMapDims_dyn();

		virtual Void linkAnimHelper( ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::ScrollZoomAnimHelper inAnim);
		Dynamic linkAnimHelper_dyn();

		virtual Void tryAndSetInitialTilePrevScale( );
		Dynamic tryAndSetInitialTilePrevScale_dyn();

		virtual Void setScreenWrapX( bool inB);
		Dynamic setScreenWrapX_dyn();

		virtual Void setScreenWrapY( bool inB);
		Dynamic setScreenWrapY_dyn();

		virtual int getScaledHalfTileForTolerancesX( );
		Dynamic getScaledHalfTileForTolerancesX_dyn();

		virtual int getScaledHalfTileForTolerancesY( );
		Dynamic getScaledHalfTileForTolerancesY_dyn();

		virtual Void drawViewPortToBuffer( );
		Dynamic drawViewPortToBuffer_dyn();

		virtual Void doBlurrCalcs( );
		Dynamic doBlurrCalcs_dyn();

		virtual Void calcFSPAN( );
		Dynamic calcFSPAN_dyn();

		virtual int getTileUnderPixelX( int inBufX,bool inReturnWrapped);
		Dynamic getTileUnderPixelX_dyn();

		virtual int getTileUnderPixelY( int inBufY,bool inReturnWrapped);
		Dynamic getTileUnderPixelY_dyn();

		virtual Void remakeBuffer_F( );
		Dynamic remakeBuffer_F_dyn();

		static Void msg( ::String inMSG);
		static Dynamic msg_dyn();

};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace decoupled
} // end namespace tileBased
} // end namespace updater
} // end namespace tmrMGR
} // end namespace render

#endif /* INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_render_TileMapViewPortRenderEr */ 
