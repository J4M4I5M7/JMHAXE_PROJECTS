#ifndef INCLUDED_jmSubLibs_decoupledLIB_utils_staticUtils_graphics_bitmap_fill_BitmapFillPatternUtil
#define INCLUDED_jmSubLibs_decoupledLIB_utils_staticUtils_graphics_bitmap_fill_BitmapFillPatternUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS7(jmSubLibs,decoupledLIB,utils,staticUtils,graphics,bitmap,fill,BitmapFillPatternUtil)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
namespace jmSubLibs{
namespace decoupledLIB{
namespace utils{
namespace staticUtils{
namespace graphics{
namespace bitmap{
namespace fill{


class HXCPP_CLASS_ATTRIBUTES  BitmapFillPatternUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapFillPatternUtil_obj OBJ_;
		BitmapFillPatternUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BitmapFillPatternUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapFillPatternUtil_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("BitmapFillPatternUtil"); }

		static Void makeRectangularGradient( ::openfl::display::BitmapData inBm,int centerColor,int edgeColor,hx::Null< bool >  clearBitmapFirst);
		static Dynamic makeRectangularGradient_dyn();

};

} // end namespace jmSubLibs
} // end namespace decoupledLIB
} // end namespace utils
} // end namespace staticUtils
} // end namespace graphics
} // end namespace bitmap
} // end namespace fill

#endif /* INCLUDED_jmSubLibs_decoupledLIB_utils_staticUtils_graphics_bitmap_fill_BitmapFillPatternUtil */ 
