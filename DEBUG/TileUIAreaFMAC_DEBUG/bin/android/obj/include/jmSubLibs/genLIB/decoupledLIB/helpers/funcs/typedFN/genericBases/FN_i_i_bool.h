#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_typedFN_genericBases_FN_i_i_bool
#define INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_typedFN_genericBases_FN_i_i_bool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <jmSubLibs/genLIB/decoupledLIB/helpers/funcs/TypedFunctionBase.h>
HX_DECLARE_CLASS5(jmSubLibs,genLIB,decoupledLIB,helpers,funcs,TypedFunctionBase)
HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,helpers,funcs,typedFN,genericBases,FN_i_i_bool)
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace helpers{
namespace funcs{
namespace typedFN{
namespace genericBases{


class HXCPP_CLASS_ATTRIBUTES  FN_i_i_bool_obj : public ::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::TypedFunctionBase_obj{
	public:
		typedef ::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::TypedFunctionBase_obj super;
		typedef FN_i_i_bool_obj OBJ_;
		FN_i_i_bool_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FN_i_i_bool_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FN_i_i_bool_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FN_i_i_bool"); }

		Dynamic f;
		Dynamic &f_dyn() { return f;}
};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace helpers
} // end namespace funcs
} // end namespace typedFN
} // end namespace genericBases

#endif /* INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_typedFN_genericBases_FN_i_i_bool */ 
