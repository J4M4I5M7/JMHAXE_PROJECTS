#ifndef INCLUDED_jmSubLibs_decoupledLIB_consts_openfl_geom_PointZZ
#define INCLUDED_jmSubLibs_decoupledLIB_consts_openfl_geom_PointZZ

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(jmSubLibs,decoupledLIB,consts,openfl,geom,PointZZ)
HX_DECLARE_CLASS2(openfl,geom,Point)
namespace jmSubLibs{
namespace decoupledLIB{
namespace consts{
namespace openfl{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  PointZZ_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PointZZ_obj OBJ_;
		PointZZ_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PointZZ_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PointZZ_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PointZZ"); }

		static ::openfl::geom::Point ZZ;
};

} // end namespace jmSubLibs
} // end namespace decoupledLIB
} // end namespace consts
} // end namespace openfl
} // end namespace geom

#endif /* INCLUDED_jmSubLibs_decoupledLIB_consts_openfl_geom_PointZZ */ 
