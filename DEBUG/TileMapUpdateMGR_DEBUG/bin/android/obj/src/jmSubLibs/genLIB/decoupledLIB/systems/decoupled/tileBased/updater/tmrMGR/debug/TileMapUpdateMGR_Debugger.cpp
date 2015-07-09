#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_EU
#include <jmSubLibs/EU.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_structs_glue_BitMapBool
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/structs/glue/BitMapBool.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_debug_TileMapUpdateMGR_Debugger
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/debug/TileMapUpdateMGR_Debugger.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_utils_staticUtils_graphics_bitmap_fill_BitmapFillPatternUtil
#include <jmSubLibs/genLIB/decoupledLIB/utils/staticUtils/graphics/bitmap/fill/BitmapFillPatternUtil.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_glue_IntString
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/glue/IntString.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace decoupled{
namespace tileBased{
namespace updater{
namespace tmrMGR{
namespace debug{

Void TileMapUpdateMGR_Debugger_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.debug.TileMapUpdateMGR_Debugger","new",0x607f1da0,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.debug.TileMapUpdateMGR_Debugger.new","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/debug/TileMapUpdateMGR_Debugger.hx",20,0x960cbbcd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	this->_cTileLastUpdateFrame = (int)0;
	HX_STACK_LINE(27)
	this->_opBM_003 = ::openfl::display::BitmapData_obj::__new((int)1,(int)1,true,(int)65535,null());
	HX_STACK_LINE(26)
	this->_opBM_002 = ::openfl::display::BitmapData_obj::__new((int)1,(int)1,true,(int)65535,null());
	HX_STACK_LINE(25)
	this->_opBM_001 = ::openfl::display::BitmapData_obj::__new((int)1,(int)1,true,(int)65535,null());
	HX_STACK_LINE(57)
	::openfl::display::BitmapData _g = ::openfl::display::BitmapData_obj::__new((int)16,(int)16,true,(int)0,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(57)
	this->_opBM = _g;
	HX_STACK_LINE(58)
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::structs::glue::BitMapBool _g1 = ::jmSubLibs::genLIB::decoupledLIB::helpers::data::structs::glue::BitMapBool_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(58)
	this->_opBB = _g1;
	HX_STACK_LINE(61)
	this->_opBB->map = this->_opBM;
	HX_STACK_LINE(64)
	this->_opBB->boo = true;
}
;
	return null();
}

//TileMapUpdateMGR_Debugger_obj::~TileMapUpdateMGR_Debugger_obj() { }

Dynamic TileMapUpdateMGR_Debugger_obj::__CreateEmpty() { return  new TileMapUpdateMGR_Debugger_obj; }
hx::ObjectPtr< TileMapUpdateMGR_Debugger_obj > TileMapUpdateMGR_Debugger_obj::__new()
{  hx::ObjectPtr< TileMapUpdateMGR_Debugger_obj > result = new TileMapUpdateMGR_Debugger_obj();
	result->__construct();
	return result;}

Dynamic TileMapUpdateMGR_Debugger_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileMapUpdateMGR_Debugger_obj > result = new TileMapUpdateMGR_Debugger_obj();
	result->__construct();
	return result;}

Void TileMapUpdateMGR_Debugger_obj::linkSharedFrameTimeTracker( ::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString inTT){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.debug.TileMapUpdateMGR_Debugger","linkSharedFrameTimeTracker",0x2800f31d,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.debug.TileMapUpdateMGR_Debugger.linkSharedFrameTimeTracker","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/debug/TileMapUpdateMGR_Debugger.hx",42,0x960cbbcd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inTT,"inTT")
		HX_STACK_LINE(43)
		if (((null() == inTT))){
			HX_STACK_LINE(43)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("linkSharedFrameTimeTracker input null"));
		}
		HX_STACK_LINE(44)
		this->_frameTracker = inTT;
		HX_STACK_LINE(45)
		this->_hasFrameTracker = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapUpdateMGR_Debugger_obj,linkSharedFrameTimeTracker,(void))

int TileMapUpdateMGR_Debugger_obj::getTileFrameID( int inTileX,int inTileY){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.debug.TileMapUpdateMGR_Debugger","getTileFrameID",0x7cffa984,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.debug.TileMapUpdateMGR_Debugger.getTileFrameID","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/debug/TileMapUpdateMGR_Debugger.hx",92,0x960cbbcd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inTileX,"inTileX")
	HX_STACK_ARG(inTileY,"inTileY")
	HX_STACK_LINE(98)
	int op;		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(100)
	if ((this->_hasFrameTracker)){
		HX_STACK_LINE(102)
		if (((bool((inTileX == (int)0)) && bool((inTileY == (int)0))))){
			HX_STACK_LINE(105)
			if ((((int)0 == hx::Mod(this->_frameTracker->i,(int)23)))){
				HX_STACK_LINE(108)
				this->_cTileLastUpdateFrame = this->_frameTracker->i;
				HX_STACK_LINE(109)
				op = this->_cTileLastUpdateFrame;
			}
			else{
				HX_STACK_LINE(113)
				op = this->_cTileLastUpdateFrame;
			}
		}
		else{
			HX_STACK_LINE(120)
			op = (int)0;
		}
	}
	else{
		HX_STACK_LINE(125)
		op = (int)0;
	}
	HX_STACK_LINE(128)
	return op;
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapUpdateMGR_Debugger_obj,getTileFrameID,return )

::jmSubLibs::genLIB::decoupledLIB::helpers::data::structs::glue::BitMapBool TileMapUpdateMGR_Debugger_obj::getTileBMFuncFAST( int inTileX,int inTileY,int wid,int hig){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.debug.TileMapUpdateMGR_Debugger","getTileBMFuncFAST",0xd2211def,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.debug.TileMapUpdateMGR_Debugger.getTileBMFuncFAST","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/debug/TileMapUpdateMGR_Debugger.hx",132,0x960cbbcd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inTileX,"inTileX")
	HX_STACK_ARG(inTileY,"inTileY")
	HX_STACK_ARG(wid,"wid")
	HX_STACK_ARG(hig,"hig")
	HX_STACK_LINE(140)
	::openfl::display::BitmapData _g = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::debug::TileMapUpdateMGR_Debugger_obj::remakeBitmapMaybe(this->_opBM,wid,hig,(int)-16711936);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(140)
	this->_opBM = _g;
	HX_STACK_LINE(141)
	::openfl::display::BitmapData _g1 = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::debug::TileMapUpdateMGR_Debugger_obj::remakeBitmapMaybe(this->_opBM_001,wid,hig,(int)-65536);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(141)
	this->_opBM_001 = _g1;
	HX_STACK_LINE(142)
	::openfl::display::BitmapData _g2 = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::debug::TileMapUpdateMGR_Debugger_obj::remakeBitmapMaybe(this->_opBM_002,wid,hig,(int)-16711936);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(142)
	this->_opBM_002 = _g2;
	HX_STACK_LINE(143)
	::openfl::display::BitmapData _g3 = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::debug::TileMapUpdateMGR_Debugger_obj::remakeBitmapMaybe(this->_opBM_003,wid,hig,(int)-16776961);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(143)
	this->_opBM_003 = _g3;
	HX_STACK_LINE(147)
	int c1;		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(148)
	int c2;		HX_STACK_VAR(c2,"c2");
	HX_STACK_LINE(151)
	if (((bool((inTileX == (int)0)) && bool((inTileY == (int)0))))){
		HX_STACK_LINE(154)
		bool even = ((int)0 == ((int(this->_cTileLastUpdateFrame) & int((int)1))));		HX_STACK_VAR(even,"even");
		HX_STACK_LINE(155)
		if ((even)){
			HX_STACK_LINE(157)
			::jmSubLibs::genLIB::decoupledLIB::utils::staticUtils::graphics::bitmap::fill::BitmapFillPatternUtil_obj::makeRectangularGradient(this->_opBM,(int)-16776961,(int)-16772864,true);
		}
		else{
			HX_STACK_LINE(161)
			::jmSubLibs::genLIB::decoupledLIB::utils::staticUtils::graphics::bitmap::fill::BitmapFillPatternUtil_obj::makeRectangularGradient(this->_opBM,(int)-65536,(int)-15663104,true);
		}
		HX_STACK_LINE(164)
		this->_opBB->map = this->_opBM;
	}
	else{
		HX_STACK_LINE(170)
		if (((bool((inTileX == (int)0)) || bool((inTileY == (int)0))))){
			HX_STACK_LINE(172)
			this->_opBB->map = this->_opBM_001;
		}
		else{
			HX_STACK_LINE(180)
			int flip1 = (int(inTileX) & int((int)1));		HX_STACK_VAR(flip1,"flip1");
			HX_STACK_LINE(181)
			int flip2 = (int(inTileY) & int((int)1));		HX_STACK_VAR(flip2,"flip2");
			HX_STACK_LINE(182)
			int flipSum = (flip1 + flip2);		HX_STACK_VAR(flipSum,"flipSum");
			HX_STACK_LINE(187)
			if ((this->_hasFrameTracker)){
				HX_STACK_LINE(189)
				flipSum = (flipSum + this->_frameTracker->i);
			}
			HX_STACK_LINE(192)
			bool checker;		HX_STACK_VAR(checker,"checker");
			HX_STACK_LINE(192)
			{
				HX_STACK_LINE(192)
				int a = (int(flipSum) & int((int)1));		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(192)
				bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
				HX_STACK_LINE(192)
				bool bNeg = ((int)0 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
				HX_STACK_LINE(192)
				if (((aNeg != bNeg))){
					HX_STACK_LINE(192)
					checker = aNeg;
				}
				else{
					HX_STACK_LINE(192)
					checker = (a > (int)0);
				}
			}
			HX_STACK_LINE(193)
			if ((checker)){
				HX_STACK_LINE(195)
				this->_opBB->map = this->_opBM_002;
			}
			else{
				HX_STACK_LINE(199)
				this->_opBB->map = this->_opBM_003;
			}
		}
	}
	HX_STACK_LINE(206)
	this->_opBB->boo = true;
	HX_STACK_LINE(207)
	return this->_opBB;
}


HX_DEFINE_DYNAMIC_FUNC4(TileMapUpdateMGR_Debugger_obj,getTileBMFuncFAST,return )

::jmSubLibs::genLIB::decoupledLIB::helpers::data::structs::glue::BitMapBool TileMapUpdateMGR_Debugger_obj::getTileBMFunc( int inTileX,int inTileY,int wid,int hig){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.debug.TileMapUpdateMGR_Debugger","getTileBMFunc",0xf643add3,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.debug.TileMapUpdateMGR_Debugger.getTileBMFunc","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/debug/TileMapUpdateMGR_Debugger.hx",226,0x960cbbcd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inTileX,"inTileX")
	HX_STACK_ARG(inTileY,"inTileY")
	HX_STACK_ARG(wid,"wid")
	HX_STACK_ARG(hig,"hig")
	HX_STACK_LINE(230)
	if ((::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::debug::TileMapUpdateMGR_Debugger_obj::useFastBitmapGetterFunc)){
		HX_STACK_LINE(232)
		return this->getTileBMFuncFAST(inTileX,inTileY,wid,hig);
	}
	HX_STACK_LINE(236)
	int _g = this->_opBM->get_width();		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::debug::TileMapUpdateMGR_Debugger_obj > __this,int &hig){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/debug/TileMapUpdateMGR_Debugger.hx",236,0x960cbbcd)
			{
				HX_STACK_LINE(236)
				int _g1 = __this->_opBM->get_height();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(236)
				return (_g1 != hig);
			}
			return null();
		}
	};
	HX_STACK_LINE(236)
	if (((  ((!(((_g != wid))))) ? bool(_Function_1_1::Block(this,hig)) : bool(true) ))){
		HX_STACK_LINE(238)
		this->_opBM->dispose();
		HX_STACK_LINE(239)
		::openfl::display::BitmapData _g2 = ::openfl::display::BitmapData_obj::__new(wid,hig,true,(int)0,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(239)
		this->_opBM = _g2;
	}
	HX_STACK_LINE(242)
	int c1;		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(243)
	int c2;		HX_STACK_VAR(c2,"c2");
	HX_STACK_LINE(244)
	if (((bool((inTileX == (int)0)) && bool((inTileY == (int)0))))){
		HX_STACK_LINE(247)
		c1 = (int)-2013265920;
		HX_STACK_LINE(248)
		c2 = (int)-1427181842;
	}
	else{
		HX_STACK_LINE(250)
		if (((inTileX == (int)0))){
			HX_STACK_LINE(253)
			c1 = (int)-2011037662;
			HX_STACK_LINE(254)
			c2 = (int)-1427243008;
		}
		else{
			HX_STACK_LINE(256)
			if (((inTileY == (int)0))){
				HX_STACK_LINE(259)
				c1 = (int)-2011033310;
				HX_STACK_LINE(260)
				c2 = (int)-1427177728;
			}
			else{
				HX_STACK_LINE(268)
				int flip1 = (int(inTileX) & int((int)1));		HX_STACK_VAR(flip1,"flip1");
				HX_STACK_LINE(269)
				int flip2 = (int(inTileY) & int((int)1));		HX_STACK_VAR(flip2,"flip2");
				HX_STACK_LINE(270)
				int flipSum = (flip1 + flip2);		HX_STACK_VAR(flipSum,"flipSum");
				HX_STACK_LINE(271)
				bool checker;		HX_STACK_VAR(checker,"checker");
				HX_STACK_LINE(271)
				{
					HX_STACK_LINE(271)
					int a = (int(flipSum) & int((int)1));		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(271)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(271)
					bool bNeg = ((int)0 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(271)
					if (((aNeg != bNeg))){
						HX_STACK_LINE(271)
						checker = aNeg;
					}
					else{
						HX_STACK_LINE(271)
						checker = (a > (int)0);
					}
				}
				HX_STACK_LINE(272)
				if ((checker)){
					HX_STACK_LINE(274)
					c1 = ((int)-16777199 - (inTileX * (int)3));
					HX_STACK_LINE(275)
					c2 = (int)-16776961;
				}
				else{
					HX_STACK_LINE(279)
					c1 = (int)-16772864;
					HX_STACK_LINE(280)
					c2 = (((int)-16711936 * inTileY) * (int)3);
				}
			}
		}
	}
	HX_STACK_LINE(287)
	::jmSubLibs::genLIB::decoupledLIB::utils::staticUtils::graphics::bitmap::fill::BitmapFillPatternUtil_obj::makeRectangularGradient(this->_opBM,c1,c2,true);
	HX_STACK_LINE(293)
	this->_opBB->map = this->_opBM;
	HX_STACK_LINE(294)
	this->_opBB->boo = true;
	HX_STACK_LINE(295)
	return this->_opBB;
}


HX_DEFINE_DYNAMIC_FUNC4(TileMapUpdateMGR_Debugger_obj,getTileBMFunc,return )

Void TileMapUpdateMGR_Debugger_obj::resizeInternalsFunc( int inWid,int inHig){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.debug.TileMapUpdateMGR_Debugger","resizeInternalsFunc",0xce7aa3a6,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.debug.TileMapUpdateMGR_Debugger.resizeInternalsFunc","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/debug/TileMapUpdateMGR_Debugger.hx",308,0x960cbbcd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inWid,"inWid")
		HX_STACK_ARG(inHig,"inHig")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TileMapUpdateMGR_Debugger_obj,resizeInternalsFunc,(void))

Void TileMapUpdateMGR_Debugger_obj::modelUpdateFunc( ){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.debug.TileMapUpdateMGR_Debugger","modelUpdateFunc",0x238bb836,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.debug.TileMapUpdateMGR_Debugger.modelUpdateFunc","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/debug/TileMapUpdateMGR_Debugger.hx",316,0x960cbbcd)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TileMapUpdateMGR_Debugger_obj,modelUpdateFunc,(void))

bool TileMapUpdateMGR_Debugger_obj::useFastBitmapGetterFunc;

::openfl::display::BitmapData TileMapUpdateMGR_Debugger_obj::remakeBitmapMaybe( ::openfl::display::BitmapData inBM,int inWid,int inHig,int inFillColor){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.debug.TileMapUpdateMGR_Debugger","remakeBitmapMaybe",0x7c6df4d8,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.debug.TileMapUpdateMGR_Debugger.remakeBitmapMaybe","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/debug/TileMapUpdateMGR_Debugger.hx",69,0x960cbbcd)
	HX_STACK_ARG(inBM,"inBM")
	HX_STACK_ARG(inWid,"inWid")
	HX_STACK_ARG(inHig,"inHig")
	HX_STACK_ARG(inFillColor,"inFillColor")
	HX_STACK_LINE(72)
	int _g = inBM->get_width();		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static bool Block( int &inHig,::openfl::display::BitmapData &inBM){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/debug/TileMapUpdateMGR_Debugger.hx",72,0x960cbbcd)
			{
				HX_STACK_LINE(72)
				int _g1 = inBM->get_height();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(72)
				return (_g1 != inHig);
			}
			return null();
		}
	};
	HX_STACK_LINE(72)
	if (((  ((!(((_g != inWid))))) ? bool(_Function_1_1::Block(inHig,inBM)) : bool(true) ))){
		HX_STACK_LINE(74)
		inBM->dispose();
		HX_STACK_LINE(75)
		::openfl::display::BitmapData _g2 = ::openfl::display::BitmapData_obj::__new(inWid,inHig,true,inFillColor,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(75)
		inBM = _g2;
	}
	HX_STACK_LINE(79)
	return inBM;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(TileMapUpdateMGR_Debugger_obj,remakeBitmapMaybe,return )


TileMapUpdateMGR_Debugger_obj::TileMapUpdateMGR_Debugger_obj()
{
}

void TileMapUpdateMGR_Debugger_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileMapUpdateMGR_Debugger);
	HX_MARK_MEMBER_NAME(_opBM,"_opBM");
	HX_MARK_MEMBER_NAME(_opBM_001,"_opBM_001");
	HX_MARK_MEMBER_NAME(_opBM_002,"_opBM_002");
	HX_MARK_MEMBER_NAME(_opBM_003,"_opBM_003");
	HX_MARK_MEMBER_NAME(_cTileLastUpdateFrame,"_cTileLastUpdateFrame");
	HX_MARK_MEMBER_NAME(_frameTracker,"_frameTracker");
	HX_MARK_MEMBER_NAME(_hasFrameTracker,"_hasFrameTracker");
	HX_MARK_MEMBER_NAME(_opBB,"_opBB");
	HX_MARK_END_CLASS();
}

void TileMapUpdateMGR_Debugger_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_opBM,"_opBM");
	HX_VISIT_MEMBER_NAME(_opBM_001,"_opBM_001");
	HX_VISIT_MEMBER_NAME(_opBM_002,"_opBM_002");
	HX_VISIT_MEMBER_NAME(_opBM_003,"_opBM_003");
	HX_VISIT_MEMBER_NAME(_cTileLastUpdateFrame,"_cTileLastUpdateFrame");
	HX_VISIT_MEMBER_NAME(_frameTracker,"_frameTracker");
	HX_VISIT_MEMBER_NAME(_hasFrameTracker,"_hasFrameTracker");
	HX_VISIT_MEMBER_NAME(_opBB,"_opBB");
}

Dynamic TileMapUpdateMGR_Debugger_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_opBM") ) { return _opBM; }
		if (HX_FIELD_EQ(inName,"_opBB") ) { return _opBB; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_opBM_001") ) { return _opBM_001; }
		if (HX_FIELD_EQ(inName,"_opBM_002") ) { return _opBM_002; }
		if (HX_FIELD_EQ(inName,"_opBM_003") ) { return _opBM_003; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameTracker") ) { return _frameTracker; }
		if (HX_FIELD_EQ(inName,"getTileBMFunc") ) { return getTileBMFunc_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getTileFrameID") ) { return getTileFrameID_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"modelUpdateFunc") ) { return modelUpdateFunc_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_hasFrameTracker") ) { return _hasFrameTracker; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"remakeBitmapMaybe") ) { return remakeBitmapMaybe_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileBMFuncFAST") ) { return getTileBMFuncFAST_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"resizeInternalsFunc") ) { return resizeInternalsFunc_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_cTileLastUpdateFrame") ) { return _cTileLastUpdateFrame; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"useFastBitmapGetterFunc") ) { return useFastBitmapGetterFunc; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"linkSharedFrameTimeTracker") ) { return linkSharedFrameTimeTracker_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileMapUpdateMGR_Debugger_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_opBM") ) { _opBM=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_opBB") ) { _opBB=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::helpers::data::structs::glue::BitMapBool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_opBM_001") ) { _opBM_001=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_opBM_002") ) { _opBM_002=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_opBM_003") ) { _opBM_003=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameTracker") ) { _frameTracker=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_hasFrameTracker") ) { _hasFrameTracker=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_cTileLastUpdateFrame") ) { _cTileLastUpdateFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"useFastBitmapGetterFunc") ) { useFastBitmapGetterFunc=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileMapUpdateMGR_Debugger_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_opBM"));
	outFields->push(HX_CSTRING("_opBM_001"));
	outFields->push(HX_CSTRING("_opBM_002"));
	outFields->push(HX_CSTRING("_opBM_003"));
	outFields->push(HX_CSTRING("_cTileLastUpdateFrame"));
	outFields->push(HX_CSTRING("_frameTracker"));
	outFields->push(HX_CSTRING("_hasFrameTracker"));
	outFields->push(HX_CSTRING("_opBB"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("useFastBitmapGetterFunc"),
	HX_CSTRING("remakeBitmapMaybe"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(TileMapUpdateMGR_Debugger_obj,_opBM),HX_CSTRING("_opBM")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(TileMapUpdateMGR_Debugger_obj,_opBM_001),HX_CSTRING("_opBM_001")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(TileMapUpdateMGR_Debugger_obj,_opBM_002),HX_CSTRING("_opBM_002")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(TileMapUpdateMGR_Debugger_obj,_opBM_003),HX_CSTRING("_opBM_003")},
	{hx::fsInt,(int)offsetof(TileMapUpdateMGR_Debugger_obj,_cTileLastUpdateFrame),HX_CSTRING("_cTileLastUpdateFrame")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntString*/ ,(int)offsetof(TileMapUpdateMGR_Debugger_obj,_frameTracker),HX_CSTRING("_frameTracker")},
	{hx::fsBool,(int)offsetof(TileMapUpdateMGR_Debugger_obj,_hasFrameTracker),HX_CSTRING("_hasFrameTracker")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::helpers::data::structs::glue::BitMapBool*/ ,(int)offsetof(TileMapUpdateMGR_Debugger_obj,_opBB),HX_CSTRING("_opBB")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_opBM"),
	HX_CSTRING("_opBM_001"),
	HX_CSTRING("_opBM_002"),
	HX_CSTRING("_opBM_003"),
	HX_CSTRING("_cTileLastUpdateFrame"),
	HX_CSTRING("_frameTracker"),
	HX_CSTRING("_hasFrameTracker"),
	HX_CSTRING("linkSharedFrameTimeTracker"),
	HX_CSTRING("_opBB"),
	HX_CSTRING("getTileFrameID"),
	HX_CSTRING("getTileBMFuncFAST"),
	HX_CSTRING("getTileBMFunc"),
	HX_CSTRING("resizeInternalsFunc"),
	HX_CSTRING("modelUpdateFunc"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileMapUpdateMGR_Debugger_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TileMapUpdateMGR_Debugger_obj::useFastBitmapGetterFunc,"useFastBitmapGetterFunc");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileMapUpdateMGR_Debugger_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TileMapUpdateMGR_Debugger_obj::useFastBitmapGetterFunc,"useFastBitmapGetterFunc");
};

#endif

Class TileMapUpdateMGR_Debugger_obj::__mClass;

void TileMapUpdateMGR_Debugger_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.debug.TileMapUpdateMGR_Debugger"), hx::TCanCast< TileMapUpdateMGR_Debugger_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void TileMapUpdateMGR_Debugger_obj::__boot()
{
	useFastBitmapGetterFunc= true;
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace decoupled
} // end namespace tileBased
} // end namespace updater
} // end namespace tmrMGR
} // end namespace debug
