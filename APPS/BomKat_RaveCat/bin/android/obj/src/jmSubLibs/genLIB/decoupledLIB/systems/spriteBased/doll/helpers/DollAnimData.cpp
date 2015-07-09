#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_spriteBased_doll_helpers_DollAnimData
#include <jmSubLibs/genLIB/decoupledLIB/systems/spriteBased/doll/helpers/DollAnimData.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace decoupledLIB{
namespace systems{
namespace spriteBased{
namespace doll{
namespace helpers{

Void DollAnimData_obj::__construct(::String inName,Array< int > inAnim,bool inLoop)
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.spriteBased.doll.helpers.DollAnimData","new",0xdc5850e4,"jmSubLibs.genLIB.decoupledLIB.systems.spriteBased.doll.helpers.DollAnimData.new","jmSubLibs/genLIB/decoupledLIB/systems/spriteBased/doll/helpers/DollAnimData.hx",7,0x90bb2cad)
HX_STACK_THIS(this)
HX_STACK_ARG(inName,"inName")
HX_STACK_ARG(inAnim,"inAnim")
HX_STACK_ARG(inLoop,"inLoop")
{
	HX_STACK_LINE(24)
	this->loop = false;
	HX_STACK_LINE(21)
	this->maxFrame = (int)0;
	HX_STACK_LINE(18)
	this->curFrame = (int)0;
	HX_STACK_LINE(32)
	this->name = inName;
	HX_STACK_LINE(33)
	this->anim = inAnim;
	HX_STACK_LINE(34)
	this->loop = inLoop;
	HX_STACK_LINE(35)
	this->curFrame = (int)0;
	HX_STACK_LINE(36)
	this->maxFrame = (inAnim->length - (int)1);
}
;
	return null();
}

//DollAnimData_obj::~DollAnimData_obj() { }

Dynamic DollAnimData_obj::__CreateEmpty() { return  new DollAnimData_obj; }
hx::ObjectPtr< DollAnimData_obj > DollAnimData_obj::__new(::String inName,Array< int > inAnim,bool inLoop)
{  hx::ObjectPtr< DollAnimData_obj > result = new DollAnimData_obj();
	result->__construct(inName,inAnim,inLoop);
	return result;}

Dynamic DollAnimData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DollAnimData_obj > result = new DollAnimData_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


DollAnimData_obj::DollAnimData_obj()
{
}

void DollAnimData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DollAnimData);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(anim,"anim");
	HX_MARK_MEMBER_NAME(curFrame,"curFrame");
	HX_MARK_MEMBER_NAME(maxFrame,"maxFrame");
	HX_MARK_MEMBER_NAME(loop,"loop");
	HX_MARK_END_CLASS();
}

void DollAnimData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(anim,"anim");
	HX_VISIT_MEMBER_NAME(curFrame,"curFrame");
	HX_VISIT_MEMBER_NAME(maxFrame,"maxFrame");
	HX_VISIT_MEMBER_NAME(loop,"loop");
}

Dynamic DollAnimData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"anim") ) { return anim; }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curFrame") ) { return curFrame; }
		if (HX_FIELD_EQ(inName,"maxFrame") ) { return maxFrame; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DollAnimData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"anim") ) { anim=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loop") ) { loop=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"curFrame") ) { curFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxFrame") ) { maxFrame=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DollAnimData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("anim"));
	outFields->push(HX_CSTRING("curFrame"));
	outFields->push(HX_CSTRING("maxFrame"));
	outFields->push(HX_CSTRING("loop"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(DollAnimData_obj,name),HX_CSTRING("name")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(DollAnimData_obj,anim),HX_CSTRING("anim")},
	{hx::fsInt,(int)offsetof(DollAnimData_obj,curFrame),HX_CSTRING("curFrame")},
	{hx::fsInt,(int)offsetof(DollAnimData_obj,maxFrame),HX_CSTRING("maxFrame")},
	{hx::fsBool,(int)offsetof(DollAnimData_obj,loop),HX_CSTRING("loop")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("anim"),
	HX_CSTRING("curFrame"),
	HX_CSTRING("maxFrame"),
	HX_CSTRING("loop"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DollAnimData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DollAnimData_obj::__mClass,"__mClass");
};

#endif

Class DollAnimData_obj::__mClass;

void DollAnimData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.systems.spriteBased.doll.helpers.DollAnimData"), hx::TCanCast< DollAnimData_obj> ,sStaticFields,sMemberFields,
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

void DollAnimData_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace decoupledLIB
} // end namespace systems
} // end namespace spriteBased
} // end namespace doll
} // end namespace helpers
