#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_render_TileChunkFetcher
#define INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_render_TileChunkFetcher

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,helpers,data,structs,glue,BitMapBool)
HX_DECLARE_CLASS8(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,helpers,mapDims,TileMapDims)
HX_DECLARE_CLASS9(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,updater,tmrMGR,helpers,TMR_BoundSYS_FUNCS)
HX_DECLARE_CLASS9(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,updater,tmrMGR,render,TCF_Cache)
HX_DECLARE_CLASS9(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,updater,tmrMGR,render,TileChunkFetcher)
HX_DECLARE_CLASS5(jmSubLibs,genLIB,freeBinaryLIB,structs,glue,IntString)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
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


class HXCPP_CLASS_ATTRIBUTES  TileChunkFetcher_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TileChunkFetcher_obj OBJ_;
		TileChunkFetcher_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TileChunkFetcher_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileChunkFetcher_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TileChunkFetcher"); }

		::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString _frameTracker;
		bool _hasFrameTracker;
		virtual Void linkFrameTracker( ::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString inFrameTracker);
		Dynamic linkFrameTracker_dyn();

		::openfl::display::BitmapData _blankerTile;
		bool _has_dims;
		bool _has_funcs;
		bool _returnBlankTile_OOB;
		int _tx;
		int _ty;
		int _ti;
		::openfl::geom::Point _zz;
		bool _hasTileChanged_outputVar;
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims _d;
		Array< ::Dynamic > _regFNS;
		int _regFNS_len;
		int _fDex;
		bool _res;
		int _oDex;
		int _sDex;
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::structs::glue::BitMapBool _bb;
		::openfl::display::BitmapData _bm;
		::openfl::geom::Rectangle _bmRec;
		::openfl::geom::Matrix _mat;
		Float _s_x;
		Float _s_y;
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS _bnd;
		Array< ::Dynamic > _tileCache;
		int _tileCache_numTiles;
		int _tileCache_numTilesX;
		int _tileCache_numTilesY;
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TCF_Cache _tc;
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TCF_Cache _empty_tile_tc;
		::openfl::geom::Rectangle _rect;
		bool useWrappingX;
		bool useWrappingY;
		virtual Void linkDimsObject( ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims inD);
		Dynamic linkDimsObject_dyn();

		virtual Void linkTMR_BoundSYS_FUNCS( Array< ::Dynamic > inReg,int inReg_length);
		Dynamic linkTMR_BoundSYS_FUNCS_dyn();

		virtual int getWrappedTileValueX( int inTileX);
		Dynamic getWrappedTileValueX_dyn();

		virtual int getWrappedTileValueY( int inTileY);
		Dynamic getWrappedTileValueY_dyn();

		virtual Void setTileToFetch( int inTileX,int inTileY);
		Dynamic setTileToFetch_dyn();

		virtual ::openfl::display::BitmapData getTileChunk( int opWID,int opHIG);
		Dynamic getTileChunk_dyn();

		virtual bool hasTileChanged( );
		Dynamic hasTileChanged_dyn();

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

#endif /* INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_render_TileChunkFetcher */ 
