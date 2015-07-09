#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_geom_primitives_NumPoint
#define INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_geom_primitives_NumPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(jmSubLibs,genLIB,freeBinaryLIB,structs,geom,primitives,NumPoint)
namespace jmSubLibs{
namespace genLIB{
namespace freeBinaryLIB{
namespace structs{
namespace geom{
namespace primitives{


class HXCPP_CLASS_ATTRIBUTES  NumPoint_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NumPoint_obj OBJ_;
		NumPoint_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< NumPoint_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NumPoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("NumPoint"); }

		Float x;
		Float y;
};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace freeBinaryLIB
} // end namespace structs
} // end namespace geom
} // end namespace primitives

#endif /* INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_geom_primitives_NumPoint */ 
