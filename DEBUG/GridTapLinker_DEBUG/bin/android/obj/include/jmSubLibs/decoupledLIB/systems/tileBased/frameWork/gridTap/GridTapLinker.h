#ifndef INCLUDED_jmSubLibs_decoupledLIB_systems_tileBased_frameWork_gridTap_GridTapLinker
#define INCLUDED_jmSubLibs_decoupledLIB_systems_tileBased_frameWork_gridTap_GridTapLinker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(jmSubLibs,decoupledLIB,helpers,funcs,TypedFunctionBase)
HX_DECLARE_CLASS5(jmSubLibs,decoupledLIB,helpers,funcs,typedFN,FN_TXTY_VOID)
HX_DECLARE_CLASS6(jmSubLibs,decoupledLIB,systems,tileBased,frameWork,gridTap,GridTapLinker)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
namespace jmSubLibs{
namespace decoupledLIB{
namespace systems{
namespace tileBased{
namespace frameWork{
namespace gridTap{


class HXCPP_CLASS_ATTRIBUTES  GridTapLinker_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GridTapLinker_obj OBJ_;
		GridTapLinker_obj();
		Void __construct(int inNumberOfBoundFunctionsToRegister);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GridTapLinker_obj > __new(int inNumberOfBoundFunctionsToRegister);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GridTapLinker_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GridTapLinker"); }

		::openfl::display::BitmapData _debug_buf;
		bool _has_debug_buf;
		int _wid;
		int _hig;
		int _tWX;
		int _tHY;
		bool _isLinked;
		Array< ::Dynamic > _fVec;
		int _maxi;
		int _fui;
		::jmSubLibs::decoupledLIB::helpers::funcs::typedFN::FN_TXTY_VOID _cur;
		int _ex;
		int _yi;
		int _fp;
		virtual Void setDims( int inWidInTiles,int inHigInTiles,int inTileWid,int inTileHig);
		Dynamic setDims_dyn();

		virtual Void setSize_TMap( int inWidInTiles,int inHigInTiles);
		Dynamic setSize_TMap_dyn();

		virtual Void setSize_Tile( int inTileWid,int inTileHig);
		Dynamic setSize_Tile_dyn();

		virtual Void linkUpEventListeners( ::openfl::display::DisplayObject inDisplayObject);
		Dynamic linkUpEventListeners_dyn();

		virtual Void addFN( Dynamic inFunc,::String inName);
		Dynamic addFN_dyn();

		virtual Void setDebugBuffer( ::openfl::display::BitmapData inBM);
		Dynamic setDebugBuffer_dyn();

		virtual Void debugBufferClick( int inTileX,int inTileY);
		Dynamic debugBufferClick_dyn();

		virtual Void onClick( ::openfl::events::MouseEvent mev);
		Dynamic onClick_dyn();

};

} // end namespace jmSubLibs
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace tileBased
} // end namespace frameWork
} // end namespace gridTap

#endif /* INCLUDED_jmSubLibs_decoupledLIB_systems_tileBased_frameWork_gridTap_GridTapLinker */ 
