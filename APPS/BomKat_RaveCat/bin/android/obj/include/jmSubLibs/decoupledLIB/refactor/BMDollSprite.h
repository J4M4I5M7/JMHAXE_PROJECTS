#ifndef INCLUDED_jmSubLibs_decoupledLIB_refactor_BMDollSprite
#define INCLUDED_jmSubLibs_decoupledLIB_refactor_BMDollSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(jmSubLibs,decoupledLIB,doll,DollAnimData)
HX_DECLARE_CLASS3(jmSubLibs,decoupledLIB,refactor,BMDollSprite)
HX_DECLARE_CLASS5(jmSubLibs,freeBinaryLIB,structs,geom,primitives,IntPoint)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace jmSubLibs{
namespace decoupledLIB{
namespace refactor{


class HXCPP_CLASS_ATTRIBUTES  BMDollSprite_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BMDollSprite_obj OBJ_;
		BMDollSprite_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BMDollSprite_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BMDollSprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BMDollSprite"); }

		::openfl::display::BitmapData _strip;
		bool _hasStrip;
		::openfl::geom::Rectangle _rec;
		int ix;
		int iy;
		::openfl::geom::Point _pt;
		int _numFrames;
		int _maxFrameIndex;
		::jmSubLibs::freeBinaryLIB::structs::geom::primitives::IntPoint _dir;
		int _curFrame;
		int _wid;
		int _hig;
		Array< ::Dynamic > _anims;
		::jmSubLibs::decoupledLIB::doll::DollAnimData _activeAnim;
		bool _hasActiveAnim;
		::String _defaultAnimName;
		bool _hasDefaultAnimName;
		virtual Void setDefaultAnim( ::String inName);
		Dynamic setDefaultAnim_dyn();

		virtual Void addAnim( ::String inName,Array< int > inFrames,bool inLoop);
		Dynamic addAnim_dyn();

		virtual int getAnimIndex( ::String inName);
		Dynamic getAnimIndex_dyn();

		virtual Void playAnim( ::String inName);
		Dynamic playAnim_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void renderTo( ::openfl::display::BitmapData inDrawOnBM);
		Dynamic renderTo_dyn();

		virtual Void loadFrames( Array< ::Dynamic > inFrames,bool inDisposeWhenDoneLoading);
		Dynamic loadFrames_dyn();

		virtual Void loadStrip( ::openfl::display::BitmapData inStrip,int inNumberOfFrames);
		Dynamic loadStrip_dyn();

		static ::openfl::geom::Point ZZ;
};

} // end namespace jmSubLibs
} // end namespace decoupledLIB
} // end namespace refactor

#endif /* INCLUDED_jmSubLibs_decoupledLIB_refactor_BMDollSprite */ 
