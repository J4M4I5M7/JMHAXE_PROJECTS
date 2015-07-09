#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_typedFN_FN_TXTY_BOOL
#define INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_typedFN_FN_TXTY_BOOL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <jmSubLibs/genLIB/decoupledLIB/helpers/funcs/typedFN/genericBases/FN_i_i_bool.h>
HX_DECLARE_CLASS5(jmSubLibs,genLIB,decoupledLIB,helpers,funcs,TypedFunctionBase)
HX_DECLARE_CLASS6(jmSubLibs,genLIB,decoupledLIB,helpers,funcs,typedFN,FN_TXTY_BOOL)
HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,helpers,funcs,typedFN,genericBases,FN_i_i_bool)
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace helpers{
namespace funcs{
namespace typedFN{


class HXCPP_CLASS_ATTRIBUTES  FN_TXTY_BOOL_obj : public ::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::genericBases::FN_i_i_bool_obj{
	public:
		typedef ::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::genericBases::FN_i_i_bool_obj super;
		typedef FN_TXTY_BOOL_obj OBJ_;
		FN_TXTY_BOOL_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FN_TXTY_BOOL_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FN_TXTY_BOOL_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FN_TXTY_BOOL"); }

};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace helpers
} // end namespace funcs
} // end namespace typedFN

#endif /* INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_typedFN_FN_TXTY_BOOL */ 
