#ifndef INCLUDED_jmSubLibs_decoupledLIB_doll_ChibiSpace
#define INCLUDED_jmSubLibs_decoupledLIB_doll_ChibiSpace

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS3(jmSubLibs,decoupledLIB,doll,ChibiSpace)
HX_DECLARE_CLASS3(jmSubLibs,decoupledLIB,refactor,BMDollSprite)
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
namespace jmSubLibs{
namespace decoupledLIB{
namespace doll{


class HXCPP_CLASS_ATTRIBUTES  ChibiSpace_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef ChibiSpace_obj OBJ_;
		ChibiSpace_obj();
		Void __construct(int inPixelWid,int inPixelHig);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ChibiSpace_obj > __new(int inPixelWid,int inPixelHig);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ChibiSpace_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ChibiSpace"); }

		::openfl::display::BitmapData _buf;
		::openfl::display::Bitmap _dsp;
		Array< ::Dynamic > _stack;
		int _stackLen;
		::jmSubLibs::decoupledLIB::refactor::BMDollSprite _cur;
		int _u;
		int heldFrames;
		int _holdCount;
		Dynamic _clickFN;
		Dynamic &_clickFN_dyn() { return _clickFN;}
		bool _hasClickFN;
		virtual Void add( ::jmSubLibs::decoupledLIB::refactor::BMDollSprite inCMP);
		Dynamic add_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void onEnterFrameUpdate( ::openfl::events::Event evt);
		Dynamic onEnterFrameUpdate_dyn();

		virtual Void setClickFN( Dynamic inFN);
		Dynamic setClickFN_dyn();

		virtual Void onClick( ::openfl::events::Event evt);
		Dynamic onClick_dyn();

};

} // end namespace jmSubLibs
} // end namespace decoupledLIB
} // end namespace doll

#endif /* INCLUDED_jmSubLibs_decoupledLIB_doll_ChibiSpace */ 
