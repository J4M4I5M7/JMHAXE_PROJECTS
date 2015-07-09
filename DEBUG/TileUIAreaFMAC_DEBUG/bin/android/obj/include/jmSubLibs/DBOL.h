#ifndef INCLUDED_jmSubLibs_DBOL
#define INCLUDED_jmSubLibs_DBOL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(jmSubLibs,DBOL)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)
namespace jmSubLibs{


class HXCPP_CLASS_ATTRIBUTES  DBOL_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DBOL_obj OBJ_;
		DBOL_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DBOL_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DBOL_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		static void __init__();

		::String __ToString() const { return HX_CSTRING("DBOL"); }

		static Void doStaticInit( );
		static Dynamic doStaticInit_dyn();

		static ::openfl::display::Stage _stage;
		static ::openfl::display::Sprite _overlay;
		static ::openfl::text::TextField _textArea;
		static Void setStage( ::openfl::display::Stage inStage);
		static Dynamic setStage_dyn();

		static Void textMSG( ::String inMSG);
		static Dynamic textMSG_dyn();

		static Void colorMSG( int inRGB);
		static Dynamic colorMSG_dyn();

};

} // end namespace jmSubLibs

#endif /* INCLUDED_jmSubLibs_DBOL */ 
