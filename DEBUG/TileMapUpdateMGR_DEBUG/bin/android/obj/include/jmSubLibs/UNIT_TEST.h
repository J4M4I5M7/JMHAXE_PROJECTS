#ifndef INCLUDED_jmSubLibs_UNIT_TEST
#define INCLUDED_jmSubLibs_UNIT_TEST

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(jmSubLibs,UNIT_TEST)
namespace jmSubLibs{


class HXCPP_CLASS_ATTRIBUTES  UNIT_TEST_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef UNIT_TEST_obj OBJ_;
		UNIT_TEST_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UNIT_TEST_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UNIT_TEST_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("UNIT_TEST"); }

		static Void unitTest( );
		static Dynamic unitTest_dyn();

		static bool test( bool b,::String onFailMSG);
		static Dynamic test_dyn();

		static Void unitTestFail( ::String inMSG);
		static Dynamic unitTestFail_dyn();

};

} // end namespace jmSubLibs

#endif /* INCLUDED_jmSubLibs_UNIT_TEST */ 
