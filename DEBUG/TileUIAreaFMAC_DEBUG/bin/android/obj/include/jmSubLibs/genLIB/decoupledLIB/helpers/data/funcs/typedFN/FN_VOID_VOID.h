#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_VOID_VOID
#define INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_VOID_VOID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/TypedFunctionBase.h>
HX_DECLARE_CLASS6(jmSubLibs,genLIB,decoupledLIB,helpers,data,funcs,TypedFunctionBase)
HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,helpers,data,funcs,typedFN,FN_VOID_VOID)
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace helpers{
namespace data{
namespace funcs{
namespace typedFN{


class HXCPP_CLASS_ATTRIBUTES  FN_VOID_VOID_obj : public ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::TypedFunctionBase_obj{
	public:
		typedef ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::TypedFunctionBase_obj super;
		typedef FN_VOID_VOID_obj OBJ_;
		FN_VOID_VOID_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FN_VOID_VOID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FN_VOID_VOID_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FN_VOID_VOID"); }

		Dynamic f;
		Dynamic &f_dyn() { return f;}
		static ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_VOID_VOID make( Dynamic inFunc,::String inName);
		static Dynamic make_dyn();

		static ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_VOID_VOID init( Dynamic inFunc,::String inName,::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_VOID_VOID op);
		static Dynamic init_dyn();

};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace helpers
} // end namespace data
} // end namespace funcs
} // end namespace typedFN

#endif /* INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_VOID_VOID */ 
