#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_spriteBased_doll_ChibiSpace
#define INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_spriteBased_doll_ChibiSpace

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/display/Sprite.h>
HX_DECLARE_CLASS6(jmSubLibs,genLIB,decoupledLIB,systems,spriteBased,doll,ChibiSpace)
HX_DECLARE_CLASS7(jmSubLibs,genLIB,decoupledLIB,systems,spriteBased,doll,components,BMDollSprite)
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
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace spriteBased{
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
		::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite _cur;
		int _u;
		int heldFrames;
		int _holdCount;
		Dynamic _clickFN;
		Dynamic &_clickFN_dyn() { return _clickFN;}
		bool _hasClickFN;
		virtual Void add( ::jmSubLibs::genLIB::decoupledLIB::systems::spriteBased::doll::components::BMDollSprite inCMP);
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
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace spriteBased
} // end namespace doll

#endif /* INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_spriteBased_doll_ChibiSpace */ 
