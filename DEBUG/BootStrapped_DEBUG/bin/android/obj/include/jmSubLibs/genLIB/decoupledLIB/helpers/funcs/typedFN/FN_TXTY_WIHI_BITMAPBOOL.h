#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_typedFN_FN_TXTY_WIHI_BITMAPBOOL
#define INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_typedFN_FN_TXTY_WIHI_BITMAPBOOL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <jmSubLibs/genLIB/decoupledLIB/helpers/funcs/typedFN/genericBases/FN_i_i_i_i_bitmapBool.h>
HX_DECLARE_CLASS5(jmSubLibs,genLIB,decoupledLIB,helpers,funcs,TypedFunctionBase)
HX_DECLARE_CLASS6(jmSubLibs,genLIB,decoupledLIB,helpers,funcs,typedFN,FN_TXTY_WIHI_BITMAPBOOL)
HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,helpers,funcs,typedFN,genericBases,FN_i_i_i_i_bitmapBool)
HX_DECLARE_CLASS6(jmSubLibs,genLIB,decoupledLIB,helpers,structs,glue,BitMapBool)
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace helpers{
namespace funcs{
namespace typedFN{


class HXCPP_CLASS_ATTRIBUTES  FN_TXTY_WIHI_BITMAPBOOL_obj : public ::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::genericBases::FN_i_i_i_i_bitmapBool_obj{
	public:
		typedef ::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::genericBases::FN_i_i_i_i_bitmapBool_obj super;
		typedef FN_TXTY_WIHI_BITMAPBOOL_obj OBJ_;
		FN_TXTY_WIHI_BITMAPBOOL_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FN_TXTY_WIHI_BITMAPBOOL_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FN_TXTY_WIHI_BITMAPBOOL_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FN_TXTY_WIHI_BITMAPBOOL"); }

		static ::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_WIHI_BITMAPBOOL make( Dynamic inFunc,::String inName);
		static Dynamic make_dyn();

		static ::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_WIHI_BITMAPBOOL init( Dynamic inFunc,::String inName,::jmSubLibs::genLIB::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_WIHI_BITMAPBOOL op);
		static Dynamic init_dyn();

};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace helpers
} // end namespace funcs
} // end namespace typedFN

#endif /* INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_funcs_typedFN_FN_TXTY_WIHI_BITMAPBOOL */ 
