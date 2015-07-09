#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS3(com,kircode,debug,FPS_Mem)
HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,helpers,data,structs,glue,BitMapBool)
HX_DECLARE_CLASS9(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,helpers,mapActions,helpers,TileMapActionsInputSurfaceLinker)
HX_DECLARE_CLASS8(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,updater,tmrMGR,TileMapUpdateMGR)
HX_DECLARE_CLASS9(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,updater,tmrMGR,debug,TileMapUpdateMGR_Debugger)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Main"); }

		int _wid;
		int _hig;
		int _tWX;
		int _tHY;
		int _sWID;
		int _sHIG;
		::com::kircode::debug::FPS_Mem _fpsMem;
		int _buf_wid;
		int _buf_hig;
		::openfl::display::BitmapData _buf;
		::openfl::display::Bitmap _buf_vis;
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::TileMapUpdateMGR _mgr;
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::debug::TileMapUpdateMGR_Debugger _debug;
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::helpers::TileMapActionsInputSurfaceLinker _tSurf;
		::openfl::display::Sprite _s;
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::structs::glue::BitMapBool _b;
		bool inited;
		virtual Void resize( Dynamic e);
		Dynamic resize_dyn();

		virtual Void init_buf( );
		Dynamic init_buf_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void onEnterFrame( ::openfl::events::Event evt);
		Dynamic onEnterFrame_dyn();

		virtual Void added( Dynamic e);
		Dynamic added_dyn();

		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_Main */ 
