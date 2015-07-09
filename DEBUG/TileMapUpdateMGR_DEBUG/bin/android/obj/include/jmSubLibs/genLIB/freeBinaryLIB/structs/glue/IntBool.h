#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_glue_IntBool
#define INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_glue_IntBool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(jmSubLibs,genLIB,freeBinaryLIB,structs,glue,IntBool)
namespace jmSubLibs{
namespace genLIB{
namespace freeBinaryLIB{
namespace structs{
namespace glue{


class HXCPP_CLASS_ATTRIBUTES  IntBool_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IntBool_obj OBJ_;
		IntBool_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< IntBool_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IntBool_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("IntBool"); }

		int i;
		bool b;
};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace freeBinaryLIB
} // end namespace structs
} // end namespace glue

#endif /* INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_glue_IntBool */ 
