#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_TileMapUpdateMGR
#define INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_TileMapUpdateMGR

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,helpers,data,structs,glue,BitMapBool)
HX_DECLARE_CLASS8(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,helpers,mapActions,TileMapActionsContainer)
HX_DECLARE_CLASS8(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,helpers,mapDims,TileMapDims)
HX_DECLARE_CLASS8(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,updater,tmrMGR,TileMapUpdateMGR)
HX_DECLARE_CLASS9(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,updater,tmrMGR,helpers,ScrollZoomAnimHelper)
HX_DECLARE_CLASS9(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,updater,tmrMGR,helpers,TMR_BoundSYS_FUNCS)
HX_DECLARE_CLASS9(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,updater,tmrMGR,render,TileMapViewPortRenderEr)
HX_DECLARE_CLASS6(jmSubLibs,genLIB,freeBinaryLIB,structs,geom,primitives,IntPoint)
HX_DECLARE_CLASS6(jmSubLibs,genLIB,freeBinaryLIB,structs,geom,primitives,PointPair)
HX_DECLARE_CLASS5(jmSubLibs,genLIB,freeBinaryLIB,structs,glue,IntString)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace decoupled{
namespace tileBased{
namespace updater{
namespace tmrMGR{


class HXCPP_CLASS_ATTRIBUTES  TileMapUpdateMGR_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TileMapUpdateMGR_obj OBJ_;
		TileMapUpdateMGR_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TileMapUpdateMGR_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileMapUpdateMGR_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TileMapUpdateMGR"); }

		::String _initPhase;
		bool _inited;
		int _buf_hig;
		int _buf_wid;
		bool _hasBuf;
		::openfl::display::BitmapData _buf;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint _tp;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint _tp_tile_on_down;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString _ft;
		virtual ::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString getFrameTracker( );
		Dynamic getFrameTracker_dyn();

		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair _mt0;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair _mt1;
		Float _mt0z;
		bool _isTP;
		bool _isMT;
		virtual Void setScreenWrapX( bool inB);
		Dynamic setScreenWrapX_dyn();

		virtual Void setScreenWrapY( bool inB);
		Dynamic setScreenWrapY_dyn();

		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::TileMapActionsContainer _act;
		Array< ::Dynamic > _reg;
		int _reg_len;
		int _dex;
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS _bnd;
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TileMapViewPortRenderEr _vpRen;
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::ScrollZoomAnimHelper _anim;
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims _d;
		virtual Void setTileDims( int inWidInTiles,int inHigInTiles,int inTileWid,int inTileHig);
		Dynamic setTileDims_dyn();

		virtual ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::TileMapActionsContainer getActionsContainer( );
		Dynamic getActionsContainer_dyn();

		virtual Void readTileClick( int inTileX,int inTileY);
		Dynamic readTileClick_dyn();

		virtual Void readGestureZoom_DEFAULT( Float inZoomAmt);
		Dynamic readGestureZoom_DEFAULT_dyn();

		virtual Void readTouch_DEFAULT_START( int inBufX,int inBufY);
		Dynamic readTouch_DEFAULT_START_dyn();

		virtual Void readTouch_DEFAULT_CONTINUE( int inBufX,int inBufY);
		Dynamic readTouch_DEFAULT_CONTINUE_dyn();

		virtual Void readPinch_DEFAULT_START( int inX0,int inY0,int inX1,int inY1);
		Dynamic readPinch_DEFAULT_START_dyn();

		virtual Void readPinch_DEFAULT_CONTINUE( int inX0,int inY0,int inX1,int inY1);
		Dynamic readPinch_DEFAULT_CONTINUE_dyn();

		virtual Void readPinch_DEFAULT_END( int inX0,int inY0,int inX1,int inY1);
		Dynamic readPinch_DEFAULT_END_dyn();

		virtual int getTileUnderPixelX( int inBufX,bool inReturnWrapped);
		Dynamic getTileUnderPixelX_dyn();

		virtual int getTileUnderPixelY( int inBufY,bool inReturnWrapped);
		Dynamic getTileUnderPixelY_dyn();

		virtual Void panTileToCenterScreenX( int inTileX,bool inDoAnim);
		Dynamic panTileToCenterScreenX_dyn();

		virtual Void panTileToScreenPixelX( int inTileX,int inScreenBufferPosX,bool inDoAnim);
		Dynamic panTileToScreenPixelX_dyn();

		virtual Void panTileToScreenPixelY( int inTileY,int inScreenBufferPosY,bool inDoAnim);
		Dynamic panTileToScreenPixelY_dyn();

		virtual Void panTileToCenterScreenY( int inTileY,bool inDoAnim);
		Dynamic panTileToCenterScreenY_dyn();

		virtual Void readTouch_DEFAULT_END( int inBufX,int inBufY);
		Dynamic readTouch_DEFAULT_END_dyn();

		virtual Void readPinch( int inX0,int inY0,int inX1,int inY1);
		Dynamic readPinch_dyn();

		virtual Void beginInit( int inNumBoundFuncEntries);
		Dynamic beginInit_dyn();

		virtual Void setViewPortBuffer( ::openfl::display::BitmapData inBuf);
		Dynamic setViewPortBuffer_dyn();

		virtual Void addFN_GetGraphics( Dynamic inFunc,::String inFuncName,::String inSYS_ID);
		Dynamic addFN_GetGraphics_dyn();

		virtual Void addFN_GetTileFrameID( Dynamic inFunc,::String inFuncName,::String inSYS_ID);
		Dynamic addFN_GetTileFrameID_dyn();

		virtual Void addFN_ModelUpdate( Dynamic inFunc,::String inFuncName,::String inSYS_ID);
		Dynamic addFN_ModelUpdate_dyn();

		virtual Void addFN_ResizeBMaps( Dynamic inFunc,::String inFuncName,::String inSYS_ID);
		Dynamic addFN_ResizeBMaps_dyn();

		virtual Void endInit( );
		Dynamic endInit_dyn();

		virtual Void setZoomSpeed( Float spd);
		Dynamic setZoomSpeed_dyn();

		virtual Void setZoom( Float inZoomAmount,bool inDoAnimate);
		Dynamic setZoom_dyn();

		virtual Float getZoom( );
		Dynamic getZoom_dyn();

		virtual Void setZoomFocalX( Float inPerX,bool inDoAnimate);
		Dynamic setZoomFocalX_dyn();

		virtual Void setZoomFocalY( Float inPerY,bool inDoAnimate);
		Dynamic setZoomFocalY_dyn();

		virtual Void setScrollX( Float inScrollAmtX,bool inDoAnimate);
		Dynamic setScrollX_dyn();

		virtual Void setScrollY( Float inScrollAmtY,bool inDoAnimate);
		Dynamic setScrollY_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair getOnScreenArea( );
		Dynamic getOnScreenArea_dyn();

		static ::String NOT_INITED;
		static ::String INIT_BEGIN;
		static ::String INIT_FINAL;
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

#endif /* INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_TileMapUpdateMGR */ 
