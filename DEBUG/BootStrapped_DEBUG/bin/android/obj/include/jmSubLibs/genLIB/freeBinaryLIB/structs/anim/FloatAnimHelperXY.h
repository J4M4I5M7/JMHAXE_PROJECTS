#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_FloatAnimHelperXY
#define INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_FloatAnimHelperXY

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(jmSubLibs,genLIB,freeBinaryLIB,structs,anim,FloatAnimHelper)
HX_DECLARE_CLASS5(jmSubLibs,genLIB,freeBinaryLIB,structs,anim,FloatAnimHelperXY)
namespace jmSubLibs{
namespace genLIB{
namespace freeBinaryLIB{
namespace structs{
namespace anim{


class HXCPP_CLASS_ATTRIBUTES  FloatAnimHelperXY_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FloatAnimHelperXY_obj OBJ_;
		FloatAnimHelperXY_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FloatAnimHelperXY_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FloatAnimHelperXY_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FloatAnimHelperXY"); }

		::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::FloatAnimHelper x;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::FloatAnimHelper y;
};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace freeBinaryLIB
} // end namespace structs
} // end namespace anim

#endif /* INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_FloatAnimHelperXY */ 
