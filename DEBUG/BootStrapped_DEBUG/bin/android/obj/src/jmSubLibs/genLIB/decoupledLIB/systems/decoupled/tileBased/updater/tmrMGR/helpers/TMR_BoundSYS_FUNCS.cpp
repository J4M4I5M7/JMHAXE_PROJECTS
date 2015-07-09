#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_EU
#include <jmSubLibs/EU.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_TypedFunctionBase
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/TypedFunctionBase.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_TXTY_BOOL
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_TXTY_BOOL.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_TXTY_INT
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_TXTY_INT.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_TXTY_WIHI_BITMAPBOOL
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_TXTY_WIHI_BITMAPBOOL.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_VOID_VOID
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_VOID_VOID.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_FN_WIHI_VOID
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/FN_WIHI_VOID.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_genericBases_FN_i_i_bool
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/genericBases/FN_i_i_bool.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_genericBases_FN_i_i_i_i_bitmapBool
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/genericBases/FN_i_i_i_i_bitmapBool.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_genericBases_FN_i_i_int
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/genericBases/FN_i_i_int.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_funcs_typedFN_genericBases_FN_i_i_void
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/funcs/typedFN/genericBases/FN_i_i_void.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_helpers_data_structs_glue_BitMapBool
#include <jmSubLibs/genLIB/decoupledLIB/helpers/data/structs/glue/BitMapBool.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_helpers_TMR_BoundSYS_FUNCS
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/helpers/TMR_BoundSYS_FUNCS.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace decoupled{
namespace tileBased{
namespace updater{
namespace tmrMGR{
namespace helpers{

Void TMR_BoundSYS_FUNCS_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.TMR_BoundSYS_FUNCS","new",0x7b07ddd6,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.TMR_BoundSYS_FUNCS.new","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/helpers/TMR_BoundSYS_FUNCS.hx",76,0x957613bd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(77)
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_WIHI_BITMAPBOOL _g = ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_WIHI_BITMAPBOOL_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(77)
	this->getGraphicsFN = _g;
	HX_STACK_LINE(78)
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_INT _g1 = ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_INT_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(78)
	this->getTileFrameIDFN = _g1;
	HX_STACK_LINE(81)
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_VOID_VOID _g2 = ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_VOID_VOID_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(81)
	this->modelUpdateFN = _g2;
	HX_STACK_LINE(82)
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_WIHI_VOID _g3 = ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_WIHI_VOID_obj::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(82)
	this->resizeBMapsFN = _g3;
	HX_STACK_LINE(85)
	::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_BOOL _g4 = ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_BOOL_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(85)
	this->doesTileOcclude100FN = _g4;
}
;
	return null();
}

//TMR_BoundSYS_FUNCS_obj::~TMR_BoundSYS_FUNCS_obj() { }

Dynamic TMR_BoundSYS_FUNCS_obj::__CreateEmpty() { return  new TMR_BoundSYS_FUNCS_obj; }
hx::ObjectPtr< TMR_BoundSYS_FUNCS_obj > TMR_BoundSYS_FUNCS_obj::__new()
{  hx::ObjectPtr< TMR_BoundSYS_FUNCS_obj > result = new TMR_BoundSYS_FUNCS_obj();
	result->__construct();
	return result;}

Dynamic TMR_BoundSYS_FUNCS_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TMR_BoundSYS_FUNCS_obj > result = new TMR_BoundSYS_FUNCS_obj();
	result->__construct();
	return result;}

Void TMR_BoundSYS_FUNCS_obj::addFN_GetGraphics( Array< ::Dynamic > vec,Dynamic funct,::String fnName,::String systID){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.TMR_BoundSYS_FUNCS","addFN_GetGraphics",0x5eec8481,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.TMR_BoundSYS_FUNCS.addFN_GetGraphics","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/helpers/TMR_BoundSYS_FUNCS.hx",96,0x957613bd)
		HX_STACK_ARG(vec,"vec")
		HX_STACK_ARG(funct,"funct")
		HX_STACK_ARG(fnName,"fnName")
		HX_STACK_ARG(systID,"systID")
		HX_STACK_LINE(99)
		::String from = HX_CSTRING("TMR_BoundSYS_FUNCS.addFN_GetGraphics");		HX_STACK_VAR(from,"from");
		HX_STACK_LINE(100)
		::jmSubLibs::EU_obj::sid(fnName,from);
		HX_STACK_LINE(101)
		::jmSubLibs::EU_obj::sid(systID,from);
		HX_STACK_LINE(103)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS con;		HX_STACK_VAR(con,"con");
		HX_STACK_LINE(104)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS _g = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS_obj::getOrMakeEntryBySystemID(vec,systID);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(104)
		con = _g;
		HX_STACK_LINE(107)
		if ((con->getGraphicsFN->b)){
			HX_STACK_LINE(107)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("[ERROR_CODE:#0002-GRAPHICS]"));
		}
		HX_STACK_LINE(108)
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_WIHI_BITMAPBOOL_obj::init(funct,fnName,con->getGraphicsFN);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(TMR_BoundSYS_FUNCS_obj,addFN_GetGraphics,(void))

Void TMR_BoundSYS_FUNCS_obj::addFN_GetTileFrameID( Array< ::Dynamic > vec,Dynamic funct,::String fnName,::String systID){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.TMR_BoundSYS_FUNCS","addFN_GetTileFrameID",0x9ec945c4,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.TMR_BoundSYS_FUNCS.addFN_GetTileFrameID","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/helpers/TMR_BoundSYS_FUNCS.hx",119,0x957613bd)
		HX_STACK_ARG(vec,"vec")
		HX_STACK_ARG(funct,"funct")
		HX_STACK_ARG(fnName,"fnName")
		HX_STACK_ARG(systID,"systID")
		HX_STACK_LINE(122)
		::String from = HX_CSTRING("TMR_BoundSYS_FUNCS.addFN_GetTileFrameID");		HX_STACK_VAR(from,"from");
		HX_STACK_LINE(123)
		::jmSubLibs::EU_obj::sid(fnName,from);
		HX_STACK_LINE(124)
		::jmSubLibs::EU_obj::sid(systID,from);
		HX_STACK_LINE(127)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS con;		HX_STACK_VAR(con,"con");
		HX_STACK_LINE(128)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS _g = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS_obj::getOrMakeEntryBySystemID(vec,systID);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(128)
		con = _g;
		HX_STACK_LINE(131)
		if ((con->getTileFrameIDFN->b)){
			HX_STACK_LINE(131)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("[ERROR_CODE:#0013-FID]"));
		}
		HX_STACK_LINE(132)
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_INT_obj::init(funct,fnName,con->getTileFrameIDFN);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(TMR_BoundSYS_FUNCS_obj,addFN_GetTileFrameID,(void))

Void TMR_BoundSYS_FUNCS_obj::addFN_ModelUpdate( Array< ::Dynamic > vec,Dynamic funct,::String fnName,::String systID){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.TMR_BoundSYS_FUNCS","addFN_ModelUpdate",0xa36a8b92,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.TMR_BoundSYS_FUNCS.addFN_ModelUpdate","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/helpers/TMR_BoundSYS_FUNCS.hx",152,0x957613bd)
		HX_STACK_ARG(vec,"vec")
		HX_STACK_ARG(funct,"funct")
		HX_STACK_ARG(fnName,"fnName")
		HX_STACK_ARG(systID,"systID")
		HX_STACK_LINE(155)
		::String from = HX_CSTRING("TMR_BoundSYS_FUNCS.addFN_ModelUpdate");		HX_STACK_VAR(from,"from");
		HX_STACK_LINE(156)
		::jmSubLibs::EU_obj::sid(fnName,from);
		HX_STACK_LINE(157)
		::jmSubLibs::EU_obj::sid(systID,from);
		HX_STACK_LINE(159)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS con;		HX_STACK_VAR(con,"con");
		HX_STACK_LINE(160)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS _g = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS_obj::getOrMakeEntryBySystemID(vec,systID);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(160)
		con = _g;
		HX_STACK_LINE(163)
		if ((con->modelUpdateFN->b)){
			HX_STACK_LINE(163)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("[ERROR_CODE:#0006-MODELUPDATE]"));
		}
		HX_STACK_LINE(164)
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_VOID_VOID_obj::init(funct,fnName,con->modelUpdateFN);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(TMR_BoundSYS_FUNCS_obj,addFN_ModelUpdate,(void))

Void TMR_BoundSYS_FUNCS_obj::addFN_ResizeBMapsFN( Array< ::Dynamic > vec,Dynamic funct,::String fnName,::String systID){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.TMR_BoundSYS_FUNCS","addFN_ResizeBMapsFN",0x03fca6cd,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.TMR_BoundSYS_FUNCS.addFN_ResizeBMapsFN","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/helpers/TMR_BoundSYS_FUNCS.hx",187,0x957613bd)
		HX_STACK_ARG(vec,"vec")
		HX_STACK_ARG(funct,"funct")
		HX_STACK_ARG(fnName,"fnName")
		HX_STACK_ARG(systID,"systID")
		HX_STACK_LINE(190)
		::String from = HX_CSTRING("TMR_BoundSYS_FUNCS.addFN_ModelUpdate");		HX_STACK_VAR(from,"from");
		HX_STACK_LINE(191)
		::jmSubLibs::EU_obj::sid(fnName,from);
		HX_STACK_LINE(192)
		::jmSubLibs::EU_obj::sid(systID,from);
		HX_STACK_LINE(194)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS con;		HX_STACK_VAR(con,"con");
		HX_STACK_LINE(195)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS _g = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS_obj::getOrMakeEntryBySystemID(vec,systID);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(195)
		con = _g;
		HX_STACK_LINE(198)
		if ((con->resizeBMapsFN->b)){
			HX_STACK_LINE(198)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("[ERROR_CODE:#0007-BMAPS]"));
		}
		HX_STACK_LINE(199)
		::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_WIHI_VOID_obj::init(funct,fnName,con->resizeBMapsFN);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(TMR_BoundSYS_FUNCS_obj,addFN_ResizeBMapsFN,(void))

::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS TMR_BoundSYS_FUNCS_obj::getOrMakeEntryBySystemID( Array< ::Dynamic > vec,::String systID){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.TMR_BoundSYS_FUNCS","getOrMakeEntryBySystemID",0xb2e2f136,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.TMR_BoundSYS_FUNCS.getOrMakeEntryBySystemID","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/helpers/TMR_BoundSYS_FUNCS.hx",207,0x957613bd)
	HX_STACK_ARG(vec,"vec")
	HX_STACK_ARG(systID,"systID")
	HX_STACK_LINE(208)
	::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS con;		HX_STACK_VAR(con,"con");
	HX_STACK_LINE(209)
	int dexOf = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS_obj::findIndexBySystemID(vec,systID);		HX_STACK_VAR(dexOf,"dexOf");
	HX_STACK_LINE(210)
	if (((dexOf >= (int)0))){
		HX_STACK_LINE(212)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS _g = vec->__unsafe_get(dexOf);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(212)
		con = _g;
	}
	else{
		HX_STACK_LINE(216)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS _g1 = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(216)
		con = _g1;
		HX_STACK_LINE(217)
		con->sysID = systID;
		HX_STACK_LINE(218)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS_obj::insertIntoFirstNonNullSlot(vec,con);
	}
	HX_STACK_LINE(222)
	return con;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TMR_BoundSYS_FUNCS_obj,getOrMakeEntryBySystemID,return )

Void TMR_BoundSYS_FUNCS_obj::errorIfNullSlots( Array< ::Dynamic > inVec){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.TMR_BoundSYS_FUNCS","errorIfNullSlots",0x25255af3,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.TMR_BoundSYS_FUNCS.errorIfNullSlots","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/helpers/TMR_BoundSYS_FUNCS.hx",229,0x957613bd)
		HX_STACK_ARG(inVec,"inVec")
		HX_STACK_LINE(230)
		int len = inVec->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(231)
		int ptr = (int)-1;		HX_STACK_VAR(ptr,"ptr");
		HX_STACK_LINE(232)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS cur;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(233)
		while((true)){
			HX_STACK_LINE(234)
			(ptr)++;
			HX_STACK_LINE(234)
			if (((ptr >= len))){
				HX_STACK_LINE(234)
				break;
			}
			HX_STACK_LINE(236)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS _g = inVec->__unsafe_get(ptr);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(236)
			cur = _g;
			HX_STACK_LINE(237)
			if (((null() == cur))){
				HX_STACK_LINE(239)
				::jmSubLibs::EU_obj::msg(HX_CSTRING("[TRM_BoundSYS_FUNCS.errorIfNullSlots()]"));
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TMR_BoundSYS_FUNCS_obj,errorIfNullSlots,(void))

Void TMR_BoundSYS_FUNCS_obj::insertIntoFirstNonNullSlot( Array< ::Dynamic > inVec,::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS entry){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.TMR_BoundSYS_FUNCS","insertIntoFirstNonNullSlot",0x8726d3e5,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.TMR_BoundSYS_FUNCS.insertIntoFirstNonNullSlot","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/helpers/TMR_BoundSYS_FUNCS.hx",248,0x957613bd)
		HX_STACK_ARG(inVec,"inVec")
		HX_STACK_ARG(entry,"entry")
		HX_STACK_LINE(249)
		int len = inVec->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(250)
		int ptr = (int)-1;		HX_STACK_VAR(ptr,"ptr");
		HX_STACK_LINE(251)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS cur;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(252)
		while((true)){
			HX_STACK_LINE(253)
			(ptr)++;
			HX_STACK_LINE(253)
			if (((ptr >= len))){
				HX_STACK_LINE(253)
				break;
			}
			HX_STACK_LINE(255)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS _g = inVec->__unsafe_get(ptr);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(255)
			cur = _g;
			HX_STACK_LINE(256)
			if (((null() == cur))){
				HX_STACK_LINE(258)
				inVec->__unsafe_set(ptr,entry);
				HX_STACK_LINE(259)
				return null();
			}
		}
		HX_STACK_LINE(264)
		::jmSubLibs::EU_obj::msg(HX_CSTRING("TMR_BoundSYS_FUNCS.hx :: insertIntoFirstNonNullSlot() :: no null slot available"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TMR_BoundSYS_FUNCS_obj,insertIntoFirstNonNullSlot,(void))

int TMR_BoundSYS_FUNCS_obj::findIndexBySystemID( Array< ::Dynamic > vec,::String sysID){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.TMR_BoundSYS_FUNCS","findIndexBySystemID",0xbfa51470,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.TMR_BoundSYS_FUNCS.findIndexBySystemID","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/helpers/TMR_BoundSYS_FUNCS.hx",270,0x957613bd)
	HX_STACK_ARG(vec,"vec")
	HX_STACK_ARG(sysID,"sysID")
	HX_STACK_LINE(271)
	int len = vec->length;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(272)
	int ptr = (int)-1;		HX_STACK_VAR(ptr,"ptr");
	HX_STACK_LINE(273)
	::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS cur;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(274)
	while((true)){
		HX_STACK_LINE(275)
		(ptr)++;
		HX_STACK_LINE(275)
		if (((ptr >= len))){
			HX_STACK_LINE(275)
			break;
		}
		HX_STACK_LINE(277)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::helpers::TMR_BoundSYS_FUNCS _g = vec->__unsafe_get(ptr);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(277)
		cur = _g;
		HX_STACK_LINE(278)
		if (((null() == cur))){
			HX_STACK_LINE(278)
			continue;
		}
		HX_STACK_LINE(280)
		if (((cur->sysID == sysID))){
			HX_STACK_LINE(282)
			return ptr;
		}
	}
	HX_STACK_LINE(287)
	return (int)-1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TMR_BoundSYS_FUNCS_obj,findIndexBySystemID,return )


TMR_BoundSYS_FUNCS_obj::TMR_BoundSYS_FUNCS_obj()
{
}

void TMR_BoundSYS_FUNCS_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TMR_BoundSYS_FUNCS);
	HX_MARK_MEMBER_NAME(sysID,"sysID");
	HX_MARK_MEMBER_NAME(getGraphicsFN,"getGraphicsFN");
	HX_MARK_MEMBER_NAME(getTileFrameIDFN,"getTileFrameIDFN");
	HX_MARK_MEMBER_NAME(doesTileOcclude100FN,"doesTileOcclude100FN");
	HX_MARK_MEMBER_NAME(modelUpdateFN,"modelUpdateFN");
	HX_MARK_MEMBER_NAME(resizeBMapsFN,"resizeBMapsFN");
	HX_MARK_END_CLASS();
}

void TMR_BoundSYS_FUNCS_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sysID,"sysID");
	HX_VISIT_MEMBER_NAME(getGraphicsFN,"getGraphicsFN");
	HX_VISIT_MEMBER_NAME(getTileFrameIDFN,"getTileFrameIDFN");
	HX_VISIT_MEMBER_NAME(doesTileOcclude100FN,"doesTileOcclude100FN");
	HX_VISIT_MEMBER_NAME(modelUpdateFN,"modelUpdateFN");
	HX_VISIT_MEMBER_NAME(resizeBMapsFN,"resizeBMapsFN");
}

Dynamic TMR_BoundSYS_FUNCS_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sysID") ) { return sysID; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getGraphicsFN") ) { return getGraphicsFN; }
		if (HX_FIELD_EQ(inName,"modelUpdateFN") ) { return modelUpdateFN; }
		if (HX_FIELD_EQ(inName,"resizeBMapsFN") ) { return resizeBMapsFN; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"errorIfNullSlots") ) { return errorIfNullSlots_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileFrameIDFN") ) { return getTileFrameIDFN; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"addFN_GetGraphics") ) { return addFN_GetGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"addFN_ModelUpdate") ) { return addFN_ModelUpdate_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addFN_ResizeBMapsFN") ) { return addFN_ResizeBMapsFN_dyn(); }
		if (HX_FIELD_EQ(inName,"findIndexBySystemID") ) { return findIndexBySystemID_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addFN_GetTileFrameID") ) { return addFN_GetTileFrameID_dyn(); }
		if (HX_FIELD_EQ(inName,"doesTileOcclude100FN") ) { return doesTileOcclude100FN; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getOrMakeEntryBySystemID") ) { return getOrMakeEntryBySystemID_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"insertIntoFirstNonNullSlot") ) { return insertIntoFirstNonNullSlot_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TMR_BoundSYS_FUNCS_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sysID") ) { sysID=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getGraphicsFN") ) { getGraphicsFN=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_WIHI_BITMAPBOOL >(); return inValue; }
		if (HX_FIELD_EQ(inName,"modelUpdateFN") ) { modelUpdateFN=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_VOID_VOID >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resizeBMapsFN") ) { resizeBMapsFN=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_WIHI_VOID >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getTileFrameIDFN") ) { getTileFrameIDFN=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_INT >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"doesTileOcclude100FN") ) { doesTileOcclude100FN=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_BOOL >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TMR_BoundSYS_FUNCS_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("sysID"));
	outFields->push(HX_CSTRING("getGraphicsFN"));
	outFields->push(HX_CSTRING("getTileFrameIDFN"));
	outFields->push(HX_CSTRING("doesTileOcclude100FN"));
	outFields->push(HX_CSTRING("modelUpdateFN"));
	outFields->push(HX_CSTRING("resizeBMapsFN"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("addFN_GetGraphics"),
	HX_CSTRING("addFN_GetTileFrameID"),
	HX_CSTRING("addFN_ModelUpdate"),
	HX_CSTRING("addFN_ResizeBMapsFN"),
	HX_CSTRING("getOrMakeEntryBySystemID"),
	HX_CSTRING("errorIfNullSlots"),
	HX_CSTRING("insertIntoFirstNonNullSlot"),
	HX_CSTRING("findIndexBySystemID"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TMR_BoundSYS_FUNCS_obj,sysID),HX_CSTRING("sysID")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_WIHI_BITMAPBOOL*/ ,(int)offsetof(TMR_BoundSYS_FUNCS_obj,getGraphicsFN),HX_CSTRING("getGraphicsFN")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_INT*/ ,(int)offsetof(TMR_BoundSYS_FUNCS_obj,getTileFrameIDFN),HX_CSTRING("getTileFrameIDFN")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_TXTY_BOOL*/ ,(int)offsetof(TMR_BoundSYS_FUNCS_obj,doesTileOcclude100FN),HX_CSTRING("doesTileOcclude100FN")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_VOID_VOID*/ ,(int)offsetof(TMR_BoundSYS_FUNCS_obj,modelUpdateFN),HX_CSTRING("modelUpdateFN")},
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::helpers::data::funcs::typedFN::FN_WIHI_VOID*/ ,(int)offsetof(TMR_BoundSYS_FUNCS_obj,resizeBMapsFN),HX_CSTRING("resizeBMapsFN")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("sysID"),
	HX_CSTRING("getGraphicsFN"),
	HX_CSTRING("getTileFrameIDFN"),
	HX_CSTRING("doesTileOcclude100FN"),
	HX_CSTRING("modelUpdateFN"),
	HX_CSTRING("resizeBMapsFN"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TMR_BoundSYS_FUNCS_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TMR_BoundSYS_FUNCS_obj::__mClass,"__mClass");
};

#endif

Class TMR_BoundSYS_FUNCS_obj::__mClass;

void TMR_BoundSYS_FUNCS_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.TMR_BoundSYS_FUNCS"), hx::TCanCast< TMR_BoundSYS_FUNCS_obj> ,sStaticFields,sMemberFields,
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

void TMR_BoundSYS_FUNCS_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace decoupled
} // end namespace tileBased
} // end namespace updater
} // end namespace tmrMGR
} // end namespace helpers
