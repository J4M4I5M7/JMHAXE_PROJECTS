#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_utils_staticUtils_builtInTypes_vector_VectorUtil
#define INCLUDED_jmSubLibs_genLIB_decoupledLIB_utils_staticUtils_builtInTypes_vector_VectorUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,utils,staticUtils,builtInTypes,vector,VectorUtil)
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace utils{
namespace staticUtils{
namespace builtInTypes{
namespace vector{


class HXCPP_CLASS_ATTRIBUTES  VectorUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VectorUtil_obj OBJ_;
		VectorUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< VectorUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VectorUtil_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("VectorUtil"); }

		static bool unitTest( );
		static Dynamic unitTest_dyn();

		static bool unitTestMatchFN( Dynamic stringFromVector,Dynamic matcherArg);
		static Dynamic unitTestMatchFN_dyn();

};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace utils
} // end namespace staticUtils
} // end namespace builtInTypes
} // end namespace vector

#endif /* INCLUDED_jmSubLibs_genLIB_decoupledLIB_utils_staticUtils_builtInTypes_vector_VectorUtil */ 
