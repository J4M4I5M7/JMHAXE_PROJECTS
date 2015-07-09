#ifndef INCLUDED_jmSubLibs_EU
#define INCLUDED_jmSubLibs_EU

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(jmSubLibs,EU)
namespace jmSubLibs{


class HXCPP_CLASS_ATTRIBUTES  EU_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EU_obj OBJ_;
		EU_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< EU_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EU_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("EU"); }

		static bool _configToCrash;
		static Void msg( ::String inMSG);
		static Dynamic msg_dyn();

};

} // end namespace jmSubLibs

#endif /* INCLUDED_jmSubLibs_EU */ 
