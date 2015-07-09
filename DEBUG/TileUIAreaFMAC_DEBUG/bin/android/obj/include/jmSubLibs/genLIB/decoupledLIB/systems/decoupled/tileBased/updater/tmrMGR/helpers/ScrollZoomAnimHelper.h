#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_helpers_ScrollZoomAnimHelper
#define INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_helpers_ScrollZoomAnimHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS9(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,updater,tmrMGR,helpers,ScrollZoomAnimHelper)
HX_DECLARE_CLASS5(jmSubLibs,genLIB,freeBinaryLIB,structs,anim,FloatAnimHelper)
HX_DECLARE_CLASS5(jmSubLibs,genLIB,freeBinaryLIB,structs,anim,UpdateableFloatAnimHelper)
HX_DECLARE_CLASS5(jmSubLibs,genLIB,freeBinaryLIB,structs,anim,UpdateableFloatAnimHelperXY)
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace decoupled{
namespace tileBased{
namespace updater{
namespace tmrMGR{
namespace helpers{


class HXCPP_CLASS_ATTRIBUTES  ScrollZoomAnimHelper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ScrollZoomAnimHelper_obj OBJ_;
		ScrollZoomAnimHelper_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ScrollZoomAnimHelper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScrollZoomAnimHelper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ScrollZoomAnimHelper"); }

		::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelperXY focal;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelperXY scroll;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelper zoom;
		virtual Void update( );
		Dynamic update_dyn();

};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace decoupled
} // end namespace tileBased
} // end namespace updater
} // end namespace tmrMGR
} // end namespace helpers

#endif /* INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_helpers_ScrollZoomAnimHelper */ 
