#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_helpers_ScrollZoomAnimHelper
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/helpers/ScrollZoomAnimHelper.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_FloatAnimHelper
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/anim/FloatAnimHelper.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_UpdateableFloatAnimHelper
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/anim/UpdateableFloatAnimHelper.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_UpdateableFloatAnimHelperXY
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/anim/UpdateableFloatAnimHelperXY.h>
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

Void ScrollZoomAnimHelper_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.ScrollZoomAnimHelper","new",0xb4500850,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.ScrollZoomAnimHelper.new","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/helpers/ScrollZoomAnimHelper.hx",48,0x4236b543)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(49)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelperXY _g = ::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelperXY_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(49)
	this->focal = _g;
	HX_STACK_LINE(52)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelperXY _g1 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelperXY_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(52)
	this->scroll = _g1;
	HX_STACK_LINE(56)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelper _g2 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelper_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(56)
	this->zoom = _g2;
	HX_STACK_LINE(60)
	this->scroll->x->setDest((int)0,false);
	HX_STACK_LINE(61)
	this->scroll->y->setDest((int)0,false);
	HX_STACK_LINE(62)
	this->zoom->setDest((int)1,false);
	HX_STACK_LINE(65)
	this->focal->x->setDest(0.5,false);
	HX_STACK_LINE(66)
	this->focal->y->setDest(0.5,false);
	HX_STACK_LINE(70)
	this->focal->x->speed = 0.01;
	HX_STACK_LINE(71)
	this->focal->y->speed = 0.01;
}
;
	return null();
}

//ScrollZoomAnimHelper_obj::~ScrollZoomAnimHelper_obj() { }

Dynamic ScrollZoomAnimHelper_obj::__CreateEmpty() { return  new ScrollZoomAnimHelper_obj; }
hx::ObjectPtr< ScrollZoomAnimHelper_obj > ScrollZoomAnimHelper_obj::__new()
{  hx::ObjectPtr< ScrollZoomAnimHelper_obj > result = new ScrollZoomAnimHelper_obj();
	result->__construct();
	return result;}

Dynamic ScrollZoomAnimHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScrollZoomAnimHelper_obj > result = new ScrollZoomAnimHelper_obj();
	result->__construct();
	return result;}

Void ScrollZoomAnimHelper_obj::update( ){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.ScrollZoomAnimHelper","update",0x71e8e419,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.ScrollZoomAnimHelper.update","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/helpers/ScrollZoomAnimHelper.hx",33,0x4236b543)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->scroll->x->update();
		HX_STACK_LINE(36)
		this->scroll->y->update();
		HX_STACK_LINE(39)
		this->zoom->update();
		HX_STACK_LINE(42)
		this->focal->x->update();
		HX_STACK_LINE(43)
		this->focal->y->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollZoomAnimHelper_obj,update,(void))


ScrollZoomAnimHelper_obj::ScrollZoomAnimHelper_obj()
{
}

void ScrollZoomAnimHelper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScrollZoomAnimHelper);
	HX_MARK_MEMBER_NAME(focal,"focal");
	HX_MARK_MEMBER_NAME(scroll,"scroll");
	HX_MARK_MEMBER_NAME(zoom,"zoom");
	HX_MARK_END_CLASS();
}

void ScrollZoomAnimHelper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(focal,"focal");
	HX_VISIT_MEMBER_NAME(scroll,"scroll");
	HX_VISIT_MEMBER_NAME(zoom,"zoom");
}

Dynamic ScrollZoomAnimHelper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { return zoom; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focal") ) { return focal; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScrollZoomAnimHelper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { zoom=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelper >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focal") ) { focal=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelperXY >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scroll") ) { scroll=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelperXY >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollZoomAnimHelper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("focal"));
	outFields->push(HX_CSTRING("scroll"));
	outFields->push(HX_CSTRING("zoom"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelperXY*/ ,(int)offsetof(ScrollZoomAnimHelper_obj,focal),HX_CSTRING("focal")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelperXY*/ ,(int)offsetof(ScrollZoomAnimHelper_obj,scroll),HX_CSTRING("scroll")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelper*/ ,(int)offsetof(ScrollZoomAnimHelper_obj,zoom),HX_CSTRING("zoom")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("focal"),
	HX_CSTRING("scroll"),
	HX_CSTRING("zoom"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScrollZoomAnimHelper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScrollZoomAnimHelper_obj::__mClass,"__mClass");
};

#endif

Class ScrollZoomAnimHelper_obj::__mClass;

void ScrollZoomAnimHelper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.helpers.ScrollZoomAnimHelper"), hx::TCanCast< ScrollZoomAnimHelper_obj> ,sStaticFields,sMemberFields,
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

void ScrollZoomAnimHelper_obj::__boot()
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
