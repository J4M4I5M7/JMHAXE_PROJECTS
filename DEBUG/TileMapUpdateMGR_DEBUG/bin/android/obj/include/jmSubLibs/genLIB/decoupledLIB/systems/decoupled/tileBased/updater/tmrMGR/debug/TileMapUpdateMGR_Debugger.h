#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_debug_TileMapUpdateMGR_Debugger
#define INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_debug_TileMapUpdateMGR_Debugger

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,helpers,data,structs,glue,BitMapBool)
HX_DECLARE_CLASS9(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,updater,tmrMGR,debug,TileMapUpdateMGR_Debugger)
HX_DECLARE_CLASS5(jmSubLibs,genLIB,freeBinaryLIB,structs,glue,IntString)
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
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  TileMapUpdateMGR_Debugger_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TileMapUpdateMGR_Debugger_obj OBJ_;
		TileMapUpdateMGR_Debugger_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TileMapUpdateMGR_Debugger_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileMapUpdateMGR_Debugger_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TileMapUpdateMGR_Debugger"); }

		::openfl::display::BitmapData _opBM;
		::openfl::display::BitmapData _opBM_001;
		::openfl::display::BitmapData _opBM_002;
		::openfl::display::BitmapData _opBM_003;
		int _cTileLastUpdateFrame;
		::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString _frameTracker;
		bool _hasFrameTracker;
		virtual Void linkSharedFrameTimeTracker( ::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString inTT);
		Dynamic linkSharedFrameTimeTracker_dyn();

		::jmSubLibs::genLIB::decoupledLIB::helpers::data::structs::glue::BitMapBool _opBB;
		virtual int getTileFrameID( int inTileX,int inTileY);
		Dynamic getTileFrameID_dyn();

		virtual ::jmSubLibs::genLIB::decoupledLIB::helpers::data::structs::glue::BitMapBool getTileBMFuncFAST( int inTileX,int inTileY,int wid,int hig);
		Dynamic getTileBMFuncFAST_dyn();

		virtual ::jmSubLibs::genLIB::decoupledLIB::helpers::data::structs::glue::BitMapBool getTileBMFunc( int inTileX,int inTileY,int wid,int hig);
		Dynamic getTileBMFunc_dyn();

		virtual Void resizeInternalsFunc( int inWid,int inHig);
		Dynamic resizeInternalsFunc_dyn();

		virtual Void modelUpdateFunc( );
		Dynamic modelUpdateFunc_dyn();

		static bool useFastBitmapGetterFunc;
		static ::openfl::display::BitmapData remakeBitmapMaybe( ::openfl::display::BitmapData inBM,int inWid,int inHig,int inFillColor);
		static Dynamic remakeBitmapMaybe_dyn();

};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace decoupled
} // end namespace tileBased
} // end namespace updater
} // end namespace tmrMGR
} // end namespace debug

#endif /* INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_debug_TileMapUpdateMGR_Debugger */ 
