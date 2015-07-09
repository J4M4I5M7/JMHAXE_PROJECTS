#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapDims_TileMapDims
#define INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapDims_TileMapDims

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS8(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,helpers,mapDims,TileMapDims)
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace decoupled{
namespace tileBased{
namespace helpers{
namespace mapDims{


class HXCPP_CLASS_ATTRIBUTES  TileMapDims_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TileMapDims_obj OBJ_;
		TileMapDims_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TileMapDims_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileMapDims_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TileMapDims"); }

		int wid;
		int hig;
		int tWX;
		int tHY;
};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace decoupled
} // end namespace tileBased
} // end namespace helpers
} // end namespace mapDims

#endif /* INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapDims_TileMapDims */ 
