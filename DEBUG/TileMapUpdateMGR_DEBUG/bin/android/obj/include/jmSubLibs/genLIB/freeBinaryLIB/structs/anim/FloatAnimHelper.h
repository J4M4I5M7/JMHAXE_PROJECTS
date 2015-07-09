#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_FloatAnimHelper
#define INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_FloatAnimHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(jmSubLibs,genLIB,freeBinaryLIB,structs,anim,FloatAnimHelper)
namespace jmSubLibs{
namespace genLIB{
namespace freeBinaryLIB{
namespace structs{
namespace anim{


class HXCPP_CLASS_ATTRIBUTES  FloatAnimHelper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FloatAnimHelper_obj OBJ_;
		FloatAnimHelper_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FloatAnimHelper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FloatAnimHelper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FloatAnimHelper"); }

		Float cur;
		Float pt0;
		Float pt1;
		virtual bool setDest( Float inDestPT1,bool inDoAnimate);
		Dynamic setDest_dyn();

};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace freeBinaryLIB
} // end namespace structs
} // end namespace anim

#endif /* INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_FloatAnimHelper */ 
