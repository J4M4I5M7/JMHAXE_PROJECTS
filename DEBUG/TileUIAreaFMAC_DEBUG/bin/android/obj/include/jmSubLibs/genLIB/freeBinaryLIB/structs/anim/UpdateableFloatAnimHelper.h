#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_UpdateableFloatAnimHelper
#define INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_UpdateableFloatAnimHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <jmSubLibs/genLIB/freeBinaryLIB/structs/anim/FloatAnimHelper.h>
HX_DECLARE_CLASS5(jmSubLibs,genLIB,freeBinaryLIB,structs,anim,FloatAnimHelper)
HX_DECLARE_CLASS5(jmSubLibs,genLIB,freeBinaryLIB,structs,anim,UpdateableFloatAnimHelper)
namespace jmSubLibs{
namespace genLIB{
namespace freeBinaryLIB{
namespace structs{
namespace anim{


class HXCPP_CLASS_ATTRIBUTES  UpdateableFloatAnimHelper_obj : public ::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::FloatAnimHelper_obj{
	public:
		typedef ::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::FloatAnimHelper_obj super;
		typedef UpdateableFloatAnimHelper_obj OBJ_;
		UpdateableFloatAnimHelper_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UpdateableFloatAnimHelper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UpdateableFloatAnimHelper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("UpdateableFloatAnimHelper"); }

		Float speed;
		bool isAnimating;
		virtual bool setDest( Float inDestPT1,bool inDoAnimate);

		virtual Void update( );
		Dynamic update_dyn();

};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace freeBinaryLIB
} // end namespace structs
} // end namespace anim

#endif /* INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_UpdateableFloatAnimHelper */ 
