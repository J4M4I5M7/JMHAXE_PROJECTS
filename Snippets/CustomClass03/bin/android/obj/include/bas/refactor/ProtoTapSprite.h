#ifndef INCLUDED_bas_refactor_ProtoTapSprite
#define INCLUDED_bas_refactor_ProtoTapSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS2(bas,refactor,ProtoTapSprite)
HX_DECLARE_CLASS4(ind,structs,geom,primitives,IntPoint)
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
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace bas{
namespace refactor{


class HXCPP_CLASS_ATTRIBUTES  ProtoTapSprite_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef ProtoTapSprite_obj OBJ_;
		ProtoTapSprite_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ProtoTapSprite_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ProtoTapSprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ProtoTapSprite"); }

		::openfl::display::BitmapData _strip;
		::openfl::display::BitmapData _disp;
		::openfl::display::Bitmap _disp_vis;
		::openfl::geom::Rectangle _rec;
		int _numFrames;
		::ind::structs::geom::primitives::IntPoint _dir;
		int _curFrame;
		bool _isPlaying;
		bool _isLoopingAnimation;
		int _widHig;
		virtual Void onEnterFrameUpdate( ::openfl::events::Event evt);
		Dynamic onEnterFrameUpdate_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void soundUpdate( );
		Dynamic soundUpdate_dyn();

		virtual Void onClick( ::openfl::events::Event evt);
		Dynamic onClick_dyn();

		virtual Void onSoundComplete( ::openfl::events::Event evt);
		Dynamic onSoundComplete_dyn();

		virtual Void frameUpdate( );
		Dynamic frameUpdate_dyn();

		virtual Void displayCurrentFrame( );
		Dynamic displayCurrentFrame_dyn();

		virtual Void load( ::openfl::display::BitmapData inStrip);
		Dynamic load_dyn();

		static ::openfl::geom::Point ZZ;
		static Void customError( ::String msg);
		static Dynamic customError_dyn();

		static ::bas::refactor::ProtoTapSprite make( ::openfl::display::BitmapData inStrip);
		static Dynamic make_dyn();

};

} // end namespace bas
} // end namespace refactor

#endif /* INCLUDED_bas_refactor_ProtoTapSprite */ 
