#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_FloatAnimHelper
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/anim/FloatAnimHelper.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_FloatAnimHelperXY
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/anim/FloatAnimHelperXY.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace freeBinaryLIB{
namespace structs{
namespace anim{

Void FloatAnimHelperXY_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.anim.FloatAnimHelperXY","new",0x5e1a43ed,"jmSubLibs.genLIB.freeBinaryLIB.structs.anim.FloatAnimHelperXY.new","jmSubLibs/genLIB/freeBinaryLIB/structs/anim/FloatAnimHelperXY.hx",16,0xd0497342)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::FloatAnimHelper _g = ::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::FloatAnimHelper_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(17)
	this->x = _g;
	HX_STACK_LINE(18)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::FloatAnimHelper _g1 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::FloatAnimHelper_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(18)
	this->y = _g1;
}
;
	return null();
}

//FloatAnimHelperXY_obj::~FloatAnimHelperXY_obj() { }

Dynamic FloatAnimHelperXY_obj::__CreateEmpty() { return  new FloatAnimHelperXY_obj; }
hx::ObjectPtr< FloatAnimHelperXY_obj > FloatAnimHelperXY_obj::__new()
{  hx::ObjectPtr< FloatAnimHelperXY_obj > result = new FloatAnimHelperXY_obj();
	result->__construct();
	return result;}

Dynamic FloatAnimHelperXY_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FloatAnimHelperXY_obj > result = new FloatAnimHelperXY_obj();
	result->__construct();
	return result;}


FloatAnimHelperXY_obj::FloatAnimHelperXY_obj()
{
}

void FloatAnimHelperXY_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FloatAnimHelperXY);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_END_CLASS();
}

void FloatAnimHelperXY_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
}

Dynamic FloatAnimHelperXY_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FloatAnimHelperXY_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::FloatAnimHelper >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::FloatAnimHelper >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FloatAnimHelperXY_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::FloatAnimHelper*/ ,(int)offsetof(FloatAnimHelperXY_obj,x),HX_CSTRING("x")},
	{hx::fsObject /*::jmSubLibs::genLIB::freeBinaryLIB::structs::anim::FloatAnimHelper*/ ,(int)offsetof(FloatAnimHelperXY_obj,y),HX_CSTRING("y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FloatAnimHelperXY_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FloatAnimHelperXY_obj::__mClass,"__mClass");
};

#endif

Class FloatAnimHelperXY_obj::__mClass;

void FloatAnimHelperXY_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.freeBinaryLIB.structs.anim.FloatAnimHelperXY"), hx::TCanCast< FloatAnimHelperXY_obj> ,sStaticFields,sMemberFields,
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

void FloatAnimHelperXY_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace freeBinaryLIB
} // end namespace structs
} // end namespace anim
