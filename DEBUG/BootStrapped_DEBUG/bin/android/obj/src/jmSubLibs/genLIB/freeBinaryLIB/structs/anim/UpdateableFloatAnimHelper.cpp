#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_FloatAnimHelper
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/anim/FloatAnimHelper.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_anim_UpdateableFloatAnimHelper
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/anim/UpdateableFloatAnimHelper.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace freeBinaryLIB{
namespace structs{
namespace anim{

Void UpdateableFloatAnimHelper_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.anim.UpdateableFloatAnimHelper","new",0x74284a49,"jmSubLibs.genLIB.freeBinaryLIB.structs.anim.UpdateableFloatAnimHelper.new","jmSubLibs/genLIB/freeBinaryLIB/structs/anim/UpdateableFloatAnimHelper.hx",9,0x5c042366)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	this->isAnimating = false;
	HX_STACK_LINE(12)
	this->speed = (int)1;
	HX_STACK_LINE(20)
	super::__construct();
}
;
	return null();
}

//UpdateableFloatAnimHelper_obj::~UpdateableFloatAnimHelper_obj() { }

Dynamic UpdateableFloatAnimHelper_obj::__CreateEmpty() { return  new UpdateableFloatAnimHelper_obj; }
hx::ObjectPtr< UpdateableFloatAnimHelper_obj > UpdateableFloatAnimHelper_obj::__new()
{  hx::ObjectPtr< UpdateableFloatAnimHelper_obj > result = new UpdateableFloatAnimHelper_obj();
	result->__construct();
	return result;}

Dynamic UpdateableFloatAnimHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UpdateableFloatAnimHelper_obj > result = new UpdateableFloatAnimHelper_obj();
	result->__construct();
	return result;}

bool UpdateableFloatAnimHelper_obj::setDest( Float inDestPT1,bool inDoAnimate){
	HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.anim.UpdateableFloatAnimHelper","setDest",0x9a4cc18d,"jmSubLibs.genLIB.freeBinaryLIB.structs.anim.UpdateableFloatAnimHelper.setDest","jmSubLibs/genLIB/freeBinaryLIB/structs/anim/UpdateableFloatAnimHelper.hx",25,0x5c042366)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inDestPT1,"inDestPT1")
	HX_STACK_ARG(inDoAnimate,"inDoAnimate")
	HX_STACK_LINE(26)
	bool _g = this->super::setDest(inDestPT1,inDoAnimate);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(26)
	this->isAnimating = _g;
	HX_STACK_LINE(27)
	return this->isAnimating;
}


Void UpdateableFloatAnimHelper_obj::update( ){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.anim.UpdateableFloatAnimHelper","update",0xc48563c0,"jmSubLibs.genLIB.freeBinaryLIB.structs.anim.UpdateableFloatAnimHelper.update","jmSubLibs/genLIB/freeBinaryLIB/structs/anim/UpdateableFloatAnimHelper.hx",32,0x5c042366)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		if (((false == this->isAnimating))){
			HX_STACK_LINE(73)
			return null();
		}
		HX_STACK_LINE(78)
		Float dirDelta = (this->pt1 - this->pt0);		HX_STACK_VAR(dirDelta,"dirDelta");
		HX_STACK_LINE(81)
		if (((dirDelta > (int)0))){
			HX_STACK_LINE(83)
			this->cur = (this->cur + this->speed);
		}
		else{
			HX_STACK_LINE(85)
			if (((dirDelta < (int)0))){
				HX_STACK_LINE(87)
				this->cur = (this->cur - this->speed);
			}
			else{
				HX_STACK_LINE(92)
				this->cur = this->pt0;
				HX_STACK_LINE(100)
				return null();
			}
		}
		HX_STACK_LINE(104)
		Float delta;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(105)
		delta = (this->pt1 - this->cur);
		HX_STACK_LINE(106)
		if (((dirDelta > (int)0))){
			HX_STACK_LINE(113)
			if (((this->cur >= this->pt1))){
				HX_STACK_LINE(115)
				this->isAnimating = false;
				HX_STACK_LINE(116)
				this->cur = this->pt1;
			}
		}
		else{
			HX_STACK_LINE(119)
			if (((dirDelta < (int)0))){
				HX_STACK_LINE(126)
				if (((this->cur <= this->pt1))){
					HX_STACK_LINE(128)
					this->isAnimating = false;
					HX_STACK_LINE(129)
					this->cur = this->pt1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UpdateableFloatAnimHelper_obj,update,(void))


UpdateableFloatAnimHelper_obj::UpdateableFloatAnimHelper_obj()
{
}

Dynamic UpdateableFloatAnimHelper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setDest") ) { return setDest_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isAnimating") ) { return isAnimating; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UpdateableFloatAnimHelper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isAnimating") ) { isAnimating=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UpdateableFloatAnimHelper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("isAnimating"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(UpdateableFloatAnimHelper_obj,speed),HX_CSTRING("speed")},
	{hx::fsBool,(int)offsetof(UpdateableFloatAnimHelper_obj,isAnimating),HX_CSTRING("isAnimating")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("speed"),
	HX_CSTRING("isAnimating"),
	HX_CSTRING("setDest"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UpdateableFloatAnimHelper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UpdateableFloatAnimHelper_obj::__mClass,"__mClass");
};

#endif

Class UpdateableFloatAnimHelper_obj::__mClass;

void UpdateableFloatAnimHelper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.freeBinaryLIB.structs.anim.UpdateableFloatAnimHelper"), hx::TCanCast< UpdateableFloatAnimHelper_obj> ,sStaticFields,sMemberFields,
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

void UpdateableFloatAnimHelper_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace freeBinaryLIB
} // end namespace structs
} // end namespace anim
