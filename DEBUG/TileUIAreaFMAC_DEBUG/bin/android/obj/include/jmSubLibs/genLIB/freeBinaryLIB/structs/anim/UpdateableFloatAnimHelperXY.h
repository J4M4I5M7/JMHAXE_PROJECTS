#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_UpdateableFloatAnimHelperXY
#define INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_UpdateableFloatAnimHelperXY

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(jmSubLibs,genLIB,freeBinaryLIB,structs,anim,FloatAnimHelper)
HX_DECLARE_CLASS5(jmSubLibs,genLIB,freeBinaryLIB,structs,anim,UpdateableFloatAnimHelper)
HX_DECLARE_CLASS5(jmSubLibs,genLIB,freeBinaryLIB,structs,anim,UpdateableFloatAnimHelperXY)
namespace jmSubLibs{
namespace genLIB{
namespace freeBinaryLIB{
namespace structs{
namespace anim{


class HXCPP_CLASS_ATTRIBUTES  UpdateableFloatAnimHelperXY_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef UpdateableFloatAnimHelperXY_obj OBJ_;
		UpdateableFloatAnimHelperXY_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UpdateableFloatAnimHelperXY_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UpdateableFloatAnimHelperXY_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UpdateableFloatAnimHelperXY"); }

		::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelper x;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelper y;
};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace freeBinaryLIB
} // end namespace structs
} // end namespace anim

#endif /* INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_UpdateableFloatAnimHelperXY */ 
