#ifndef INCLUDED_jmSubLibs_decoupledLIB_utils_staticUtils_graphics_bitmap_fill_funcs_BFPU_MakeRectangularGradient
#define INCLUDED_jmSubLibs_decoupledLIB_utils_staticUtils_graphics_bitmap_fill_funcs_BFPU_MakeRectangularGradient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS8(jmSubLibs,decoupledLIB,utils,staticUtils,graphics,bitmap,fill,funcs,BFPU_MakeRectangularGradient)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
namespace jmSubLibs{
namespace decoupledLIB{
namespace utils{
namespace staticUtils{
namespace graphics{
namespace bitmap{
namespace fill{
namespace funcs{


class HXCPP_CLASS_ATTRIBUTES  BFPU_MakeRectangularGradient_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BFPU_MakeRectangularGradient_obj OBJ_;
		BFPU_MakeRectangularGradient_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BFPU_MakeRectangularGradient_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BFPU_MakeRectangularGradient_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("BFPU_MakeRectangularGradient"); }

		static Void func( ::openfl::display::BitmapData inBm,int centerColor,int edgeColor,hx::Null< bool >  clearBitmapFirst);
		static Dynamic func_dyn();

};

} // end namespace jmSubLibs
} // end namespace decoupledLIB
} // end namespace utils
} // end namespace staticUtils
} // end namespace graphics
} // end namespace bitmap
} // end namespace fill
} // end namespace funcs

#endif /* INCLUDED_jmSubLibs_decoupledLIB_utils_staticUtils_graphics_bitmap_fill_funcs_BFPU_MakeRectangularGradient */ 
