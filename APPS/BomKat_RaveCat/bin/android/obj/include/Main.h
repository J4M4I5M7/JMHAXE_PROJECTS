#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS6(jmSubLibs,genLIB,decoupledLIB,systems,spriteBased,doll,ChibiSpace)
HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,systems,spriteBased,doll,components,BMDollSprite)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


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

		bool inited;
		Array< ::Dynamic > _cVec;
		int _cPTR;
		::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace _chibi_FOUR;
		::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace _chibi_HORZ;
		::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace _chibi_LEFT;
		::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace _chibi_RGHT;
		::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace _chibi_VERT;
		::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace _chibi_ABOV;
		::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace _chibi_DOWN;
		virtual Void resize( Dynamic e);
		Dynamic resize_dyn();

		virtual ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::ChibiSpace bomKatMaker( ::openfl::display::BitmapData b0,::openfl::display::BitmapData b1,::openfl::display::BitmapData e0,::openfl::display::BitmapData e1);
		Dynamic bomKatMaker_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void onChibiClickFN( );
		Dynamic onChibiClickFN_dyn();

		virtual ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite makeBody( );
		Dynamic makeBody_dyn();

		virtual ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite makeEyes( );
		Dynamic makeEyes_dyn();

		virtual ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite MakeMouth( );
		Dynamic MakeMouth_dyn();

		virtual ::openfl::display::BitmapData gBM( ::String inName);
		Dynamic gBM_dyn();

		virtual Void added( Dynamic e);
		Dynamic added_dyn();

		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_Main */ 
