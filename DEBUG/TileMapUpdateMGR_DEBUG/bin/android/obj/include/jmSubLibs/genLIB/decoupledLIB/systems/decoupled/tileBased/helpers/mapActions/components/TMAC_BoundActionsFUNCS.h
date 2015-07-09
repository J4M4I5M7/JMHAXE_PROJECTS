#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapActions_components_TMAC_BoundActionsFUNCS
#define INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapActions_components_TMAC_BoundActionsFUNCS

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(jmSubLibs,genLIB,decoupledLIB,helpers,data,funcs,TypedFunctionBase)
HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,helpers,data,funcs,typedFN,FN_PXPY_VOID)
HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,helpers,data,funcs,typedFN,FN_TXTY_VOID)
HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,helpers,data,funcs,typedFN,FN_X0Y0X1Y1_VOID)
HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,helpers,data,funcs,typedFN,FN_ZOOM_VOID)
HX_DECLARE_CLASS8(jmSubLibs,genLIB,decoupledLIB,helpers,data,funcs,typedFN,genericBases,FN_f_void)
HX_DECLARE_CLASS8(jmSubLibs,genLIB,decoupledLIB,helpers,data,funcs,typedFN,genericBases,FN_i_i_i_i_void)
HX_DECLARE_CLASS8(jmSubLibs,genLIB,decoupledLIB,helpers,data,funcs,typedFN,genericBases,FN_i_i_void)
HX_DECLARE_CLASS9(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,helpers,mapActions,components,TMAC_BoundActionsFUNCS)
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace decoupled{
namespace tileBased{
namespace helpers{
namespace mapActions{
namespace components{


class HXCPP_CLASS_ATTRIBUTES  TMAC_BoundActionsFUNCS_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TMAC_BoundActionsFUNCS_obj OBJ_;
		TMAC_BoundActionsFUNCS_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TMAC_BoundActionsFUNCS_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TMAC_BoundActionsFUNCS_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TMAC_BoundActionsFUNCS"); }

		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_VOID clickTileFN;
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_PXPY_VOID dragFN_START;
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_PXPY_VOID dragFN_CONTINUE;
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_PXPY_VOID dragFN_END;
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID pinchFN_START;
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID pinchFN_CONTINUE;
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_X0Y0X1Y1_VOID pinchFN_END;
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_ZOOM_VOID gestureFN_ZOOM;
};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace decoupled
} // end namespace tileBased
} // end namespace helpers
} // end namespace mapActions
} // end namespace components

#endif /* INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapActions_components_TMAC_BoundActionsFUNCS */ 
