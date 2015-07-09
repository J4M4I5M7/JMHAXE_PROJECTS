#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_render_TCF_Cache
#define INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_render_TCF_Cache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS9(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,updater,tmrMGR,render,TCF_Cache)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace decoupled{
namespace tileBased{
namespace updater{
namespace tmrMGR{
namespace render{


class HXCPP_CLASS_ATTRIBUTES  TCF_Cache_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TCF_Cache_obj OBJ_;
		TCF_Cache_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TCF_Cache_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TCF_Cache_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TCF_Cache"); }

		::openfl::display::BitmapData bm;
		int occludingIndex;
		bool isBlankFlag;
		int tf;
		static Void destroyVector( Array< ::Dynamic > v);
		static Dynamic destroyVector_dyn();

		static Array< ::Dynamic > makeVector( int numTiles);
		static Dynamic makeVector_dyn();

};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace decoupled
} // end namespace tileBased
} // end namespace updater
} // end namespace tmrMGR
} // end namespace render

#endif /* INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_render_TCF_Cache */ 
