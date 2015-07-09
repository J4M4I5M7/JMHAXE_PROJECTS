#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapDims_helpers_TileMapDimsSetterHelper
#define INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapDims_helpers_TileMapDimsSetterHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS8(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,helpers,mapDims,TileMapDims)
HX_DECLARE_CLASS9(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,helpers,mapDims,helpers,TileMapDimsSetterHelper)
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace decoupled{
namespace tileBased{
namespace helpers{
namespace mapDims{
namespace helpers{


class HXCPP_CLASS_ATTRIBUTES  TileMapDimsSetterHelper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TileMapDimsSetterHelper_obj OBJ_;
		TileMapDimsSetterHelper_obj();
		Void __construct(::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims inMD);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TileMapDimsSetterHelper_obj > __new(::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims inMD);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileMapDimsSetterHelper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TileMapDimsSetterHelper"); }

		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims _md;
		virtual Void setDims( int inWid,int inHig,int inTilePixWid,int inTilePixHig);
		Dynamic setDims_dyn();

		virtual Void setWidInTiles( int val);
		Dynamic setWidInTiles_dyn();

		virtual Void setHigInTiles( int val);
		Dynamic setHigInTiles_dyn();

		virtual Void setTileWid( int val);
		Dynamic setTileWid_dyn();

		virtual Void setTileHig( int val);
		Dynamic setTileHig_dyn();

		static Void msg( ::String inMSG);
		static Dynamic msg_dyn();

};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace decoupled
} // end namespace tileBased
} // end namespace helpers
} // end namespace mapDims
} // end namespace helpers

#endif /* INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapDims_helpers_TileMapDimsSetterHelper */ 
