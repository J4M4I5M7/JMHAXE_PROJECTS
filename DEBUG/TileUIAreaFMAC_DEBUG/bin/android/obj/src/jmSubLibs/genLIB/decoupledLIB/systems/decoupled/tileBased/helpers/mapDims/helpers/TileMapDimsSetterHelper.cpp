#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_EU
#include <jmSubLibs/EU.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapDims_TileMapDims
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapDims/TileMapDims.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_helpers_mapDims_helpers_TileMapDimsSetterHelper
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapDims/helpers/TileMapDimsSetterHelper.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace decoupled{
namespace tileBased{
namespace helpers{
namespace mapDims{
namespace helpers{

Void TileMapDimsSetterHelper_obj::__construct(::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims inMD)
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapDims.helpers.TileMapDimsSetterHelper","new",0x979aae4b,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapDims.helpers.TileMapDimsSetterHelper.new","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapDims/helpers/TileMapDimsSetterHelper.hx",34,0x001daa6c)
HX_STACK_THIS(this)
HX_STACK_ARG(inMD,"inMD")
{
	HX_STACK_LINE(34)
	this->_md = inMD;
}
;
	return null();
}

//TileMapDimsSetterHelper_obj::~TileMapDimsSetterHelper_obj() { }

Dynamic TileMapDimsSetterHelper_obj::__CreateEmpty() { return  new TileMapDimsSetterHelper_obj; }
hx::ObjectPtr< TileMapDimsSetterHelper_obj > TileMapDimsSetterHelper_obj::__new(::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims inMD)
{  hx::ObjectPtr< TileMapDimsSetterHelper_obj > result = new TileMapDimsSetterHelper_obj();
	result->__construct(inMD);
	return result;}

Dynamic TileMapDimsSetterHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileMapDimsSetterHelper_obj > result = new TileMapDimsSetterHelper_obj();
	result->__construct(inArgs[0]);
	return result;}

Void TileMapDimsSetterHelper_obj::setDims( int inWid,int inHig,int inTilePixWid,int inTilePixHig){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapDims.helpers.TileMapDimsSetterHelper","setDims",0x97915258,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapDims.helpers.TileMapDimsSetterHelper.setDims","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapDims/helpers/TileMapDimsSetterHelper.hx",21,0x001daa6c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inWid,"inWid")
		HX_STACK_ARG(inHig,"inHig")
		HX_STACK_ARG(inTilePixWid,"inTilePixWid")
		HX_STACK_ARG(inTilePixHig,"inTilePixHig")
		HX_STACK_LINE(23)
		this->setWidInTiles(inWid);
		HX_STACK_LINE(24)
		this->setHigInTiles(inHig);
		HX_STACK_LINE(27)
		this->setTileWid(inTilePixWid);
		HX_STACK_LINE(28)
		this->setTileHig(inTilePixHig);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TileMapDimsSetterHelper_obj,setDims,(void))

Void TileMapDimsSetterHelper_obj::setWidInTiles( int val){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapDims.helpers.TileMapDimsSetterHelper","setWidInTiles",0x549b295b,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapDims.helpers.TileMapDimsSetterHelper.setWidInTiles","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapDims/helpers/TileMapDimsSetterHelper.hx",39,0x001daa6c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(40)
		if (((val <= (int)0))){
			HX_STACK_LINE(40)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::helpers::TileMapDimsSetterHelper_obj::msg(HX_CSTRING("setWidInTiles(val<=0) is bad input"));
		}
		HX_STACK_LINE(41)
		this->_md->wid = val;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapDimsSetterHelper_obj,setWidInTiles,(void))

Void TileMapDimsSetterHelper_obj::setHigInTiles( int val){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapDims.helpers.TileMapDimsSetterHelper","setHigInTiles",0xbbd579a7,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapDims.helpers.TileMapDimsSetterHelper.setHigInTiles","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapDims/helpers/TileMapDimsSetterHelper.hx",46,0x001daa6c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(47)
		if (((val <= (int)0))){
			HX_STACK_LINE(47)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::helpers::TileMapDimsSetterHelper_obj::msg(HX_CSTRING("setHigInTiles(val<=0) is bad input"));
		}
		HX_STACK_LINE(48)
		this->_md->hig = val;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapDimsSetterHelper_obj,setHigInTiles,(void))

Void TileMapDimsSetterHelper_obj::setTileWid( int val){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapDims.helpers.TileMapDimsSetterHelper","setTileWid",0x23aaef77,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapDims.helpers.TileMapDimsSetterHelper.setTileWid","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapDims/helpers/TileMapDimsSetterHelper.hx",53,0x001daa6c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(54)
		if (((val <= (int)0))){
			HX_STACK_LINE(54)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::helpers::TileMapDimsSetterHelper_obj::msg(HX_CSTRING("setTileWid(val<=0) is bad input"));
		}
		HX_STACK_LINE(55)
		this->_md->tWX = val;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapDimsSetterHelper_obj,setTileWid,(void))

Void TileMapDimsSetterHelper_obj::setTileHig( int val){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapDims.helpers.TileMapDimsSetterHelper","setTileHig",0x239f8dab,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapDims.helpers.TileMapDimsSetterHelper.setTileHig","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapDims/helpers/TileMapDimsSetterHelper.hx",60,0x001daa6c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(val,"val")
		HX_STACK_LINE(61)
		if (((val <= (int)0))){
			HX_STACK_LINE(61)
			::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::helpers::TileMapDimsSetterHelper_obj::msg(HX_CSTRING("setTileHig(val<=0) is bad input"));
		}
		HX_STACK_LINE(62)
		this->_md->tHY = val;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TileMapDimsSetterHelper_obj,setTileHig,(void))

Void TileMapDimsSetterHelper_obj::msg( ::String inMSG){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapDims.helpers.TileMapDimsSetterHelper","msg",0x9799f82c,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapDims.helpers.TileMapDimsSetterHelper.msg","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/helpers/mapDims/helpers/TileMapDimsSetterHelper.hx",118,0x001daa6c)
		HX_STACK_ARG(inMSG,"inMSG")
		HX_STACK_LINE(118)
		::jmSubLibs::EU_obj::msg((HX_CSTRING("TileMapDimsSetterHelper.hx msg==") + inMSG));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileMapDimsSetterHelper_obj,msg,(void))


TileMapDimsSetterHelper_obj::TileMapDimsSetterHelper_obj()
{
}

void TileMapDimsSetterHelper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileMapDimsSetterHelper);
	HX_MARK_MEMBER_NAME(_md,"_md");
	HX_MARK_END_CLASS();
}

void TileMapDimsSetterHelper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_md,"_md");
}

Dynamic TileMapDimsSetterHelper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"msg") ) { return msg_dyn(); }
		if (HX_FIELD_EQ(inName,"_md") ) { return _md; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setDims") ) { return setDims_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setTileWid") ) { return setTileWid_dyn(); }
		if (HX_FIELD_EQ(inName,"setTileHig") ) { return setTileHig_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setWidInTiles") ) { return setWidInTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"setHigInTiles") ) { return setHigInTiles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileMapDimsSetterHelper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_md") ) { _md=inValue.Cast< ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileMapDimsSetterHelper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_md"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("msg"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::helpers::mapDims::TileMapDims*/ ,(int)offsetof(TileMapDimsSetterHelper_obj,_md),HX_CSTRING("_md")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_md"),
	HX_CSTRING("setDims"),
	HX_CSTRING("setWidInTiles"),
	HX_CSTRING("setHigInTiles"),
	HX_CSTRING("setTileWid"),
	HX_CSTRING("setTileHig"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileMapDimsSetterHelper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileMapDimsSetterHelper_obj::__mClass,"__mClass");
};

#endif

Class TileMapDimsSetterHelper_obj::__mClass;

void TileMapDimsSetterHelper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.helpers.mapDims.helpers.TileMapDimsSetterHelper"), hx::TCanCast< TileMapDimsSetterHelper_obj> ,sStaticFields,sMemberFields,
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

void TileMapDimsSetterHelper_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace decoupled
} // end namespace tileBased
} // end namespace helpers
} // end namespace mapDims
} // end namespace helpers
