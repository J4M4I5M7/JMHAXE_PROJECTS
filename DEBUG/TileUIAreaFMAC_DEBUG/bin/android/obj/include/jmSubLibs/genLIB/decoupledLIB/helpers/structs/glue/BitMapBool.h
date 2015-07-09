#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_structs_glue_BitMapBool
#define INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_structs_glue_BitMapBool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(jmSubLibs,genLIB,decoupledLIB,helpers,structs,glue,BitMapBool)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace helpers{
namespace structs{
namespace glue{


class HXCPP_CLASS_ATTRIBUTES  BitMapBool_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitMapBool_obj OBJ_;
		BitMapBool_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BitMapBool_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitMapBool_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BitMapBool"); }

		::openfl::display::BitmapData map;
		bool boo;
};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace helpers
} // end namespace structs
} // end namespace glue

#endif /* INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_structs_glue_BitMapBool */ 
