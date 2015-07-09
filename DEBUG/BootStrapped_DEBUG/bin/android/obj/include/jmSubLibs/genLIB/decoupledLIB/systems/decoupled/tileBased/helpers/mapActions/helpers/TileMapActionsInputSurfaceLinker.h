#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapActions_helpers_TileMapActionsInputSurfaceLinker
#define INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapActions_helpers_TileMapActionsInputSurfaceLinker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS8(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,helpers,mapActions,TileMapActionsContainer)
HX_DECLARE_CLASS9(jmSubLibs,genLIB,decoupledLIB,systems,decoupled,tileBased,helpers,mapActions,helpers,TileMapActionsInputSurfaceLinker)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,events,TouchEvent)
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace decoupled{
namespace tileBased{
namespace helpers{
namespace mapActions{
namespace helpers{


class HXCPP_CLASS_ATTRIBUTES  TileMapActionsInputSurfaceLinker_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef TileMapActionsInputSurfaceLinker_obj OBJ_;
		TileMapActionsInputSurfaceLinker_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TileMapActionsInputSurfaceLinker_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileMapActionsInputSurfaceLinker_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TileMapActionsInputSurfaceLinker"); }

		bool _multiTouchSupported;
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::TileMapActionsContainer _act;
		bool _hasAct;
		int _mx;
		int _my;
		bool _isMultiTouching;
		int _ppX0;
		int _ppY0;
		int _ppX1;
		int _ppY1;
		Array< ::Dynamic > _ppVec;
		int _ppVec_fui;
		int _ppVec_len;
		bool _isMouseDown;
		int _onEnterFrameTimer;
		int _isMouseDownTime;
		virtual Void linkActionsContainer( ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapActions::TileMapActionsContainer inAct);
		Dynamic linkActionsContainer_dyn();

		virtual Void onTouch_BEGIN( ::openfl::events::TouchEvent tev);
		Dynamic onTouch_BEGIN_dyn();

		virtual Void doPinchReadUsingPPVec( );
		Dynamic doPinchReadUsingPPVec_dyn();

		virtual Void onTouch_CONTINUE( ::openfl::events::TouchEvent tev);
		Dynamic onTouch_CONTINUE_dyn();

		virtual Void onTouch_END( ::openfl::events::TouchEvent tev);
		Dynamic onTouch_END_dyn();

		virtual Void onEnterFrame( ::openfl::events::Event evt);
		Dynamic onEnterFrame_dyn();

		virtual Void onMouseMove( ::openfl::events::MouseEvent mev);
		Dynamic onMouseMove_dyn();

		virtual Void onMouseUp( ::openfl::events::MouseEvent mev);
		Dynamic onMouseUp_dyn();

		virtual Void onMouseLeave( ::openfl::events::MouseEvent mev);
		Dynamic onMouseLeave_dyn();

		virtual Void onMouseDownCore( int mx,int my);
		Dynamic onMouseDownCore_dyn();

		virtual Void onMouseDown( ::openfl::events::MouseEvent mev);
		Dynamic onMouseDown_dyn();

		virtual Void setSize( int inPixelWIDX,int inPixelHIGY);
		Dynamic setSize_dyn();

};

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace decoupled
} // end namespace tileBased
} // end namespace helpers
} // end namespace mapActions
} // end namespace helpers

#endif /* INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapActions_helpers_TileMapActionsInputSurfaceLinker */ 
