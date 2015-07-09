#ifndef INCLUDED_ind_structs_geom_primitives_IntPoint
#define INCLUDED_ind_structs_geom_primitives_IntPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(ind,structs,geom,primitives,IntPoint)
namespace ind{
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
		static ::ind::structs::geom::primitives::IntPoint make( int inX,int inY);
		static Dynamic make_dyn();

		static ::ind::structs::geom::primitives::IntPoint addTwo( ::ind::structs::geom::primitives::IntPoint ptA,::ind::structs::geom::primitives::IntPoint ptB,::ind::structs::geom::primitives::IntPoint out);
		static Dynamic addTwo_dyn();

		static ::ind::structs::geom::primitives::IntPoint makeCopy( ::ind::structs::geom::primitives::IntPoint ip);
		static Dynamic makeCopy_dyn();

		static ::ind::structs::geom::primitives::IntPoint makeFrom1D( int inOneDimensionalIndexPosition,int width,int height);
		static Dynamic makeFrom1D_dyn();

		static bool compare( ::ind::structs::geom::primitives::IntPoint ptA,::ind::structs::geom::primitives::IntPoint ptB);
		static Dynamic compare_dyn();

};

} // end namespace ind
} // end namespace structs
} // end namespace geom
} // end namespace primitives

#endif /* INCLUDED_ind_structs_geom_primitives_IntPoint */ 
