#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_helpers_TMR_BoundSYS_FUNCS
#define INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_helpers_TMR_BoundSYS_FUNCS

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(jmSubLibs,genLIB,decoupledLIB,helpers,data,funcs,TypedFunctionBase)
HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,helpers,data,funcs,typedFN,FN_TXTY_BOOL)
HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,helpers,data,funcs,typedFN,FN_TXTY_INT)
HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,helpers,data,funcs,typedFN,FN_TXTY_WIHI_BITMAPBOOL)
HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,helpers,data,funcs,typedFN,FN_VOID_VOID)
HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,helpers,data,funcs,typedFN,FN_WIHI_VOID)
HX_DECLARE_CLASS8(jmSubLibs,genLIB,decoupledLIB,helpers,data,funcs,typedFN,genericBases,FN_i_i_bool)
HX_DECLARE_CLASS8(jmSubLibs,genLIB,decoupledLIB,helpers,data,funcs,typedFN,genericBases,FN_i_i_i_i_bitmapBool)
HX_DECLARE_CLASS8(jmSubLibs,genLIB,decoupledLIB,helpers,data,funcs,typedFN,genericBases,FN_i_i_int)
HX_DECLARE_CLASS8(jmSubLibs,genLIB,decoupledLIB,helpers,data,funcs,typedFN,genericBases,FN_i_i_void)
HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,helpers,data,structs,glue,BitMapBool)
HX_DECLARE_CLASS9(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,updater,tmrMGR,helpers,TMR_BoundSYS_FUNCS)
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace decoupled{
namespace tileBased{
namespace updater{
namespace tmrMGR{
namespace helpers{


class HXCPP_CLASS_ATTRIBUTES  TMR_BoundSYS_FUNCS_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TMR_BoundSYS_FUNCS_obj OBJ_;
		TMR_BoundSYS_FUNCS_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TMR_BoundSYS_FUNCS_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TMR_BoundSYS_FUNCS_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TMR_BoundSYS_FUNCS"); }

		::String sysID;
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_WIHI_BITMAPBOOL getGraphicsFN;
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_INT getTileFrameIDFN;
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_BOOL doesTileOcclude100FN;
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_VOID_VOID modelUpdateFN;
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_WIHI_VOID resizeBMapsFN;
		static Void addFN_GetGraphics( Array< ::Dynamic > vec,Dynamic funct,::String fnName,::String systID);
		static Dynamic addFN_GetGraphics_dyn();

		static Void addFN_GetTileFrameID( Array< ::Dynamic > vec,Dynamic funct,::String fnName,::String systID);
		static Dynamic addFN_GetTileFrameID_dyn();

		static Void addFN_ModelUpdate( Array< ::Dynamic > vec,Dynamic funct,::String fnName,::String systID);
		static Dynamic addFN_ModelUpdate_dyn();

		static Void addFN_ResizeBMapsFN( Array< ::Dynamic > vec,Dynamic funct,::String fnName,::String systID);
		static Dynamic addFN_ResizeBMapsFN_dyn();

		static ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS getOrMakeEntryBySystemID( Array< ::Dynamic > vec,::String systID);
		static Dynamic getOrMakeEntryBySystemID_dyn();

		static Void errorIfNullSlots( Array< ::Dynamic > inVec);
		static Dynamic errorIfNullSlots_dyn();

		static Void insertIntoFirstNonNullSlot( Array< ::Dynamic > inVec,::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS entry);
		static Dynamic insertIntoFirstNonNullSlot_dyn();

		static int findIndexBySystemID( Array< ::Dynamic > vec,::String sysID);
		static Dynamic findIndexBySystemID_dyn();

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

#endif /* INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_helpers_TMR_BoundSYS_FUNCS */ 
