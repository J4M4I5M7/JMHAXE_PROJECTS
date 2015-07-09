#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapActions_TileMapActionsContainer
#define INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapActions_TileMapActionsContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS8(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,helpers,mapActions,TileMapActionsContainer)
HX_DECLARE_CLASS9(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,helpers,mapActions,components,TMAC_BoundActionsFUNCS)
HX_DECLARE_CLASS6(jmSubLibs,genLIB,freeBinaryLIB,structs,geom,primitives,IntPoint)
HX_DECLARE_CLASS6(jmSubLibs,genLIB,freeBinaryLIB,structs,geom,primitives,PointPair)
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace decoupled{
namespace tileBased{
namespace helpers{
namespace mapActions{


class HXCPP_CLASS_ATTRIBUTES  TileMapActionsContainer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TileMapActionsContainer_obj OBJ_;
		TileMapActionsContainer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TileMapActionsContainer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileMapActionsContainer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TileMapActionsContainer"); }

		int _touchTimeOutFrameCount;
		int _fcd_MULTI;
		int _fcd_SINGLE;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint _dragPoint;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair _pp;
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::components::TMAC_BoundActionsFUNCS _bac;
		virtual Void addClickTileFN( Dynamic inFN,::String inFuncName);
		Dynamic addClickTileFN_dyn();

		virtual Void addDragFN_START( Dynamic inFN,::String inFuncName);
		Dynamic addDragFN_START_dyn();

		virtual Void addDragFN_CONTINUE( Dynamic inFN,::String inFuncName);
		Dynamic addDragFN_CONTINUE_dyn();

		virtual Void addDragFN_END( Dynamic inFN,::String inFuncName);
		Dynamic addDragFN_END_dyn();

		virtual Void addPinchFN_START( Dynamic inFN,::String inFuncName);
		Dynamic addPinchFN_START_dyn();

		virtual Void addPinchFN_CONTINUE( Dynamic inFN,::String inFuncName);
		Dynamic addPinchFN_CONTINUE_dyn();

		virtual Void addPinchFN_END( Dynamic inFN,::String inFuncName);
		Dynamic addPinchFN_END_dyn();

		virtual Void addGestureFN_ZOOM( Dynamic inFN,::String inFuncName);
		Dynamic addGestureFN_ZOOM_dyn();

		virtual Void readZoomOffset( Float inScale);
		Dynamic readZoomOffset_dyn();

		virtual Void readTileClick( int inTileX,int inTileY);
		Dynamic readTileClick_dyn();

		virtual Void readPinch( int x0,int y0,int x1,int y1);
		Dynamic readPinch_dyn();

		virtual Void readTouch( int bufX,int bufY);
		Dynamic readTouch_dyn();

		virtual Void update( );
		Dynamic update_dyn();

};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace decoupled
} // end namespace tileBased
} // end namespace helpers
} // end namespace mapActions

#endif /* INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapActions_TileMapActionsContainer */ 
