#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_geom_primitives_IntPoint
#define INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_geom_primitives_IntPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(jmSubLibs,genLIB,freeBinaryLIB,structs,geom,primitives,IntPoint)
namespace jmSubLibs{
namespace genLIB{
namespace freeBinaryLIB{
namespace structs{
namespace geom{
namespace primitives{


class HXCPP_CLASS_ATTRIBUTES  IntPoint_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IntPoint_obj OBJ_;
		IntPoint_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< IntPoint_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IntPoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("IntPoint"); }

		int ix;
		int iy;
		static ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint make( int inX,int inY);
		static Dynamic make_dyn();

		static ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint addTwo( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint ptA,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint ptB,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint out);
		static Dynamic addTwo_dyn();

		static ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint makeCopy( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint ip);
		static Dynamic makeCopy_dyn();

		static ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint makeFrom1D( int inOneDimensionalIndexPosition,int width,int height);
		static Dynamic makeFrom1D_dyn();

		static bool compare( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint ptA,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint ptB);
		static Dynamic compare_dyn();

};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace freeBinaryLIB
} // end namespace structs
} // end namespace geom
} // end namespace primitives

#endif /* INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_geom_primitives_IntPoint */ 
