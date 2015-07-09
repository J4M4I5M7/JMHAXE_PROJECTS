#include <hxcpp.h>

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
namespace freeBinaryLIB{
namespace structs{
namespace anim{

Void UpdateableFloatAnimHelperXY_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.anim.UpdateableFloatAnimHelperXY","new",0x95b7ef8a,"jmSubLibs.genLIB.freeBinaryLIB.structs.anim.UpdateableFloatAnimHelperXY.new","jmSubLibs/genLIB/freeBinaryLIB/structs/anim/UpdateableFloatAnimHelperXY.hx",19,0xa492a705)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelper _g = ::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelper_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(20)
	this->x = _g;
	HX_STACK_LINE(21)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelper _g1 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelper_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(21)
	this->y = _g1;
}
;
	return null();
}

//UpdateableFloatAnimHelperXY_obj::~UpdateableFloatAnimHelperXY_obj() { }

Dynamic UpdateableFloatAnimHelperXY_obj::__CreateEmpty() { return  new UpdateableFloatAnimHelperXY_obj; }
hx::ObjectPtr< UpdateableFloatAnimHelperXY_obj > UpdateableFloatAnimHelperXY_obj::__new()
{  hx::ObjectPtr< UpdateableFloatAnimHelperXY_obj > result = new UpdateableFloatAnimHelperXY_obj();
	result->__construct();
	return result;}

Dynamic UpdateableFloatAnimHelperXY_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UpdateableFloatAnimHelperXY_obj > result = new UpdateableFloatAnimHelperXY_obj();
	result->__construct();
	return result;}


UpdateableFloatAnimHelperXY_obj::UpdateableFloatAnimHelperXY_obj()
{
}

void UpdateableFloatAnimHelperXY_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UpdateableFloatAnimHelperXY);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_END_CLASS();
}

void UpdateableFloatAnimHelperXY_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
}

Dynamic UpdateableFloatAnimHelperXY_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UpdateableFloatAnimHelperXY_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelper >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelper >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UpdateableFloatAnimHelperXY_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelper*/ ,(int)offsetof(UpdateableFloatAnimHelperXY_obj,x),HX_CSTRING("x")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::UpdateableFloatAnimHelper*/ ,(int)offsetof(UpdateableFloatAnimHelperXY_obj,y),HX_CSTRING("y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UpdateableFloatAnimHelperXY_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UpdateableFloatAnimHelperXY_obj::__mClass,"__mClass");
};

#endif

Class UpdateableFloatAnimHelperXY_obj::__mClass;

void UpdateableFloatAnimHelperXY_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.freeBinaryLIB.structs.anim.UpdateableFloatAnimHelperXY"), hx::TCanCast< UpdateableFloatAnimHelperXY_obj> ,sStaticFields,sMemberFields,
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

void UpdateableFloatAnimHelperXY_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace freeBinaryLIB
} // end namespace structs
} // end namespace anim
