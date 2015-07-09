#include <hxcpp.h>

#ifndef INCLUDED_jmSubLibs_genLIB_decoupledLIB_systems_decoupled_tileBased_updater_tmrMGR_render_TCF_Cache
#include <jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TCF_Cache.h>
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
namespace render{

Void TCF_Cache_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TCF_Cache","new",0x644b9daa,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TCF_Cache.new","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TCF_Cache.hx",12,0x8869308b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(32)
	this->tf = (int)0;
}
;
	return null();
}

//TCF_Cache_obj::~TCF_Cache_obj() { }

Dynamic TCF_Cache_obj::__CreateEmpty() { return  new TCF_Cache_obj; }
hx::ObjectPtr< TCF_Cache_obj > TCF_Cache_obj::__new()
{  hx::ObjectPtr< TCF_Cache_obj > result = new TCF_Cache_obj();
	result->__construct();
	return result;}

Dynamic TCF_Cache_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TCF_Cache_obj > result = new TCF_Cache_obj();
	result->__construct();
	return result;}

Void TCF_Cache_obj::destroyVector( Array< ::Dynamic > v){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TCF_Cache","destroyVector",0x603c5727,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TCF_Cache.destroyVector","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TCF_Cache.hx",41,0x8869308b)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(42)
		int d = (int)-1;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(43)
		while((true)){
			HX_STACK_LINE(45)
			(d)++;
			HX_STACK_LINE(46)
			if (((d > v->length))){
				HX_STACK_LINE(46)
				break;
			}
			HX_STACK_LINE(53)
			v->__unsafe_get(d)->__Field(HX_CSTRING("bm"),true)->__Field(HX_CSTRING("dispose"),true)();
			HX_STACK_LINE(54)
			v->__unsafe_get(d)->__FieldRef(HX_CSTRING("bm")) = null();
			HX_STACK_LINE(55)
			v->__unsafe_get(d)->__FieldRef(HX_CSTRING("isBlankFlag")) = true;
			HX_STACK_LINE(56)
			v->__unsafe_get(d)->__FieldRef(HX_CSTRING("occludingIndex")) = (int)-4444;
			HX_STACK_LINE(57)
			v->__unsafe_set(d,null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TCF_Cache_obj,destroyVector,(void))

Array< ::Dynamic > TCF_Cache_obj::makeVector( int numTiles){
	HX_STACK_FRAME("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TCF_Cache","makeVector",0xf00e5547,"jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TCF_Cache.makeVector","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TCF_Cache.hx",64,0x8869308b)
	HX_STACK_ARG(numTiles,"numTiles")
	HX_STACK_LINE(69)
	Array< ::Dynamic > op;		HX_STACK_VAR(op,"op");
	struct _Function_1_1{
		inline static Array< ::Dynamic > Block( int &numTiles){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/genLIB/decoupledLIB/systems/decoupled/tileBased/updater/tmrMGR/render/TCF_Cache.hx",69,0x8869308b)
			{
				HX_STACK_LINE(69)
				Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(69)
				Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new()->__SetSizeExact(numTiles);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(69)
				this1 = _g;
				HX_STACK_LINE(69)
				return this1;
			}
			return null();
		}
	};
	HX_STACK_LINE(69)
	op = _Function_1_1::Block(numTiles);
	HX_STACK_LINE(71)
	::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TCF_Cache cur;		HX_STACK_VAR(cur,"cur");
	HX_STACK_LINE(72)
	int dex = (int)-1;		HX_STACK_VAR(dex,"dex");
	HX_STACK_LINE(73)
	while((true)){
		HX_STACK_LINE(75)
		(dex)++;
		HX_STACK_LINE(75)
		if (((dex >= numTiles))){
			HX_STACK_LINE(75)
			break;
		}
		HX_STACK_LINE(76)
		::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TCF_Cache _g1 = ::jmSubLibs::genLIB::decoupledLIB::systems::decoupled::tileBased::updater::tmrMGR::render::TCF_Cache_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(76)
		cur = _g1;
		HX_STACK_LINE(77)
		op->__unsafe_set(dex,cur);
		HX_STACK_LINE(78)
		::openfl::display::BitmapData _g2 = ::openfl::display::BitmapData_obj::__new((int)1,(int)1,true,(int)0,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(78)
		cur->bm = _g2;
		HX_STACK_LINE(79)
		cur->occludingIndex = (int)-123;
		HX_STACK_LINE(80)
		cur->isBlankFlag = true;
	}
	HX_STACK_LINE(92)
	return op;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TCF_Cache_obj,makeVector,return )


TCF_Cache_obj::TCF_Cache_obj()
{
}

void TCF_Cache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TCF_Cache);
	HX_MARK_MEMBER_NAME(bm,"bm");
	HX_MARK_MEMBER_NAME(occludingIndex,"occludingIndex");
	HX_MARK_MEMBER_NAME(isBlankFlag,"isBlankFlag");
	HX_MARK_MEMBER_NAME(tf,"tf");
	HX_MARK_END_CLASS();
}

void TCF_Cache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bm,"bm");
	HX_VISIT_MEMBER_NAME(occludingIndex,"occludingIndex");
	HX_VISIT_MEMBER_NAME(isBlankFlag,"isBlankFlag");
	HX_VISIT_MEMBER_NAME(tf,"tf");
}

Dynamic TCF_Cache_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bm") ) { return bm; }
		if (HX_FIELD_EQ(inName,"tf") ) { return tf; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"makeVector") ) { return makeVector_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isBlankFlag") ) { return isBlankFlag; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"destroyVector") ) { return destroyVector_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"occludingIndex") ) { return occludingIndex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TCF_Cache_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bm") ) { bm=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tf") ) { tf=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isBlankFlag") ) { isBlankFlag=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"occludingIndex") ) { occludingIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TCF_Cache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bm"));
	outFields->push(HX_CSTRING("occludingIndex"));
	outFields->push(HX_CSTRING("isBlankFlag"));
	outFields->push(HX_CSTRING("tf"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("destroyVector"),
	HX_CSTRING("makeVector"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(TCF_Cache_obj,bm),HX_CSTRING("bm")},
	{hx::fsInt,(int)offsetof(TCF_Cache_obj,occludingIndex),HX_CSTRING("occludingIndex")},
	{hx::fsBool,(int)offsetof(TCF_Cache_obj,isBlankFlag),HX_CSTRING("isBlankFlag")},
	{hx::fsInt,(int)offsetof(TCF_Cache_obj,tf),HX_CSTRING("tf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bm"),
	HX_CSTRING("occludingIndex"),
	HX_CSTRING("isBlankFlag"),
	HX_CSTRING("tf"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TCF_Cache_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TCF_Cache_obj::__mClass,"__mClass");
};

#endif

Class TCF_Cache_obj::__mClass;

void TCF_Cache_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.decoupledLIB.systems.decoupled.tileBased.updater.tmrMGR.render.TCF_Cache"), hx::TCanCast< TCF_Cache_obj> ,sStaticFields,sMemberFields,
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

void TCF_Cache_obj::__boot()
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
} // end namespace render
