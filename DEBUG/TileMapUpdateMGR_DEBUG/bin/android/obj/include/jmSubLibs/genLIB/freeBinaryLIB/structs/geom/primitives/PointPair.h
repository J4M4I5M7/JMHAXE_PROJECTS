#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_geom_primitives_PointPair
#define INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_geom_primitives_PointPair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(jmSubLibs,genLIB,freeBinaryLIB,structs,geom,primitives,IntPoint)
HX_DECLARE_CLASS6(jmSubLibs,genLIB,freeBinaryLIB,structs,geom,primitives,PointPair)
HX_DECLARE_CLASS5(jmSubLibs,genLIB,freeBinaryLIB,structs,glue,IntBool)
HX_DECLARE_CLASS5(jmSubLibs,genLIB,freeBinaryLIB,structs,glue,IntFloat)
namespace jmSubLibs{
namespace genLIB{
namespace freeBinaryLIB{
namespace structs{
namespace geom{
namespace primitives{


class HXCPP_CLASS_ATTRIBUTES  PointPair_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PointPair_obj OBJ_;
		PointPair_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PointPair_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PointPair_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PointPair"); }

		int x0;
		int y0;
		int x1;
		int y1;
		static int AXIS_INVALID;
		static int AXIS_IDENTICAL;
		static int AXIS_X;
		static int AXIS_Y;
		static ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair _Pr0;
		static ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair _Pr1;
		static int _p0;
		static int _p1;
		static ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair makeCopy( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair inPP);
		static Dynamic makeCopy_dyn();

		static bool areSameSize( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r0,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r1);
		static Dynamic areSameSize_dyn();

		static ::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntBool findOverlappingOriginX0( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r0,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r1,::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntBool op);
		static Dynamic findOverlappingOriginX0_dyn();

		static ::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntBool findOverlappingOriginY0( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r0,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r1,::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntBool op);
		static Dynamic findOverlappingOriginY0_dyn();

		static bool findOverlappingX0Y0Origin( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r0,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r1,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint op);
		static Dynamic findOverlappingX0Y0Origin_dyn();

		static int calcDeltaX( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair inst,bool inAbs);
		static Dynamic calcDeltaX_dyn();

		static int calcDeltaY( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair inst,bool inAbs);
		static Dynamic calcDeltaY_dyn();

		static Float calcLength( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair inst);
		static Dynamic calcLength_dyn();

		static bool getOverlap( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r0,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r1,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair op);
		static Dynamic getOverlap_dyn();

		static bool getOverlapX( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r0,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r1,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair op);
		static Dynamic getOverlapX_dyn();

		static bool getOverlapY( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r0,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r1,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair op);
		static Dynamic getOverlapY_dyn();

		static ::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntFloat calcLargestPinchDeltaAxis( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair p0,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair p1);
		static Dynamic calcLargestPinchDeltaAxis_dyn();

		static bool equals( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r0,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r1);
		static Dynamic equals_dyn();

		static Void validatePointOrder( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair inPP);
		static Dynamic validatePointOrder_dyn();

		static Void msg( ::String inMSG);
		static Dynamic msg_dyn();

};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace freeBinaryLIB
} // end namespace structs
} // end namespace geom
} // end namespace primitives

#endif /* INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_geom_primitives_PointPair */ 
