#ifndef INCLUDED_jmSubLibs_decoupledLIB_helpers_funcs_typedFN_FN_TXTY_VOID
#define INCLUDED_jmSubLibs_decoupledLIB_helpers_funcs_typedFN_FN_TXTY_VOID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <jmSubLibs/decoupledLIB/helpers/funcs/TypedFunctionBase.h>
HX_DECLARE_CLASS4(jmSubLibs,decoupledLIB,helpers,funcs,TypedFunctionBase)
HX_DECLARE_CLASS5(jmSubLibs,decoupledLIB,helpers,funcs,typedFN,FN_TXTY_VOID)
namespace jmSubLibs{
namespace decoupledLIB{
namespace helpers{
namespace funcs{
namespace typedFN{


class HXCPP_CLASS_ATTRIBUTES  FN_TXTY_VOID_obj : public ::jmSubLibs::decoupledLIB::helpers::funcs::TypedFunctionBase_obj{
	public:
		typedef ::jmSubLibs::decoupledLIB::helpers::funcs::TypedFunctionBase_obj super;
		typedef FN_TXTY_VOID_obj OBJ_;
		FN_TXTY_VOID_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FN_TXTY_VOID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FN_TXTY_VOID_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FN_TXTY_VOID"); }

		Dynamic f;
		Dynamic &f_dyn() { return f;}
		static ::jmSubLibs::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_VOID make( Dynamic inFunc,::String inName);
		static Dynamic make_dyn();

};

} // end namespace jmSubLibs
} // end namespace decoupledLIB
} // end namespace helpers
} // end namespace funcs
} // end namespace typedFN

#endif /* INCLUDED_jmSubLibs_decoupledLIB_helpers_funcs_typedFN_FN_TXTY_VOID */ 
