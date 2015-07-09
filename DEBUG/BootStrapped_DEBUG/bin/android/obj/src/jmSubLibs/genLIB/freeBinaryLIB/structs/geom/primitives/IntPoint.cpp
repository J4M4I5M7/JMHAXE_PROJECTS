#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_geom_primitives_IntPoint
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/IntPoint.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace freeBinaryLIB{
namespace structs{
namespace geom{
namespace primitives{

Void IntPoint_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.IntPoint","new",0xc57dc1df,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.IntPoint.new","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/IntPoint.hx",42,0x357f2cef)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//IntPoint_obj::~IntPoint_obj() { }

Dynamic IntPoint_obj::__CreateEmpty() { return  new IntPoint_obj; }
hx::ObjectPtr< IntPoint_obj > IntPoint_obj::__new()
{  hx::ObjectPtr< IntPoint_obj > result = new IntPoint_obj();
	result->__construct();
	return result;}

Dynamic IntPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntPoint_obj > result = new IntPoint_obj();
	result->__construct();
	return result;}

::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint IntPoint_obj::make( int inX,int inY){
	HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.IntPoint","make",0x07df978f,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.IntPoint.make","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/IntPoint.hx",45,0x357f2cef)
	HX_STACK_ARG(inX,"inX")
	HX_STACK_ARG(inY,"inY")
	HX_STACK_LINE(46)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint newPt = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint_obj::__new();		HX_STACK_VAR(newPt,"newPt");
	HX_STACK_LINE(47)
	newPt->ix = inX;
	HX_STACK_LINE(48)
	newPt->iy = inY;
	HX_STACK_LINE(49)
	return newPt;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IntPoint_obj,make,return )

::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint IntPoint_obj::addTwo( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint ptA,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint ptB,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint out){
	HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.IntPoint","addTwo",0x59de45cc,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.IntPoint.addTwo","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/IntPoint.hx",56,0x357f2cef)
	HX_STACK_ARG(ptA,"ptA")
	HX_STACK_ARG(ptB,"ptB")
	HX_STACK_ARG(out,"out")
	HX_STACK_LINE(57)
	if (((out == null()))){
		HX_STACK_LINE(57)
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint _g = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(57)
		out = _g;
	}
	HX_STACK_LINE(59)
	out->ix = (ptA->ix + ptB->ix);
	HX_STACK_LINE(60)
	out->iy = (ptA->iy + ptB->iy);
	HX_STACK_LINE(62)
	return out;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(IntPoint_obj,addTwo,return )

::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint IntPoint_obj::makeCopy( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint ip){
	HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.IntPoint","makeCopy",0xe7e1f2e4,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.IntPoint.makeCopy","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/IntPoint.hx",68,0x357f2cef)
	HX_STACK_ARG(ip,"ip")
	HX_STACK_LINE(69)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint out = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint_obj::__new();		HX_STACK_VAR(out,"out");
	HX_STACK_LINE(70)
	out->ix = ip->ix;
	HX_STACK_LINE(71)
	out->iy = ip->iy;
	HX_STACK_LINE(80)
	return out;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IntPoint_obj,makeCopy,return )

::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint IntPoint_obj::makeFrom1D( int inOneDimensionalIndexPosition,int width,int height){
	HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.IntPoint","makeFrom1D",0x07031fcc,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.IntPoint.makeFrom1D","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/IntPoint.hx",85,0x357f2cef)
	HX_STACK_ARG(inOneDimensionalIndexPosition,"inOneDimensionalIndexPosition")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(86)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint newPt = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint_obj::__new();		HX_STACK_VAR(newPt,"newPt");
	HX_STACK_LINE(89)
	int _g = ::Math_obj::floor((Float(inOneDimensionalIndexPosition) / Float(width)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(89)
	newPt->iy = _g;
	HX_STACK_LINE(92)
	newPt->ix = (inOneDimensionalIndexPosition - (newPt->iy * width));
	HX_STACK_LINE(94)
	return newPt;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(IntPoint_obj,makeFrom1D,return )

bool IntPoint_obj::compare( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint ptA,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint ptB){
	HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.IntPoint","compare",0x42c335a4,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.IntPoint.compare","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/IntPoint.hx",102,0x357f2cef)
	HX_STACK_ARG(ptA,"ptA")
	HX_STACK_ARG(ptB,"ptB")
	HX_STACK_LINE(103)
	if (((ptA->ix != ptB->ix))){
		HX_STACK_LINE(103)
		return false;
	}
	HX_STACK_LINE(104)
	if (((ptA->iy != ptB->iy))){
		HX_STACK_LINE(104)
		return false;
	}
	HX_STACK_LINE(105)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IntPoint_obj,compare,return )


IntPoint_obj::IntPoint_obj()
{
}

Dynamic IntPoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ix") ) { return ix; }
		if (HX_FIELD_EQ(inName,"iy") ) { return iy; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addTwo") ) { return addTwo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"makeCopy") ) { return makeCopy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"makeFrom1D") ) { return makeFrom1D_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IntPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ix") ) { ix=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iy") ) { iy=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ix"));
	outFields->push(HX_CSTRING("iy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("make"),
	HX_CSTRING("addTwo"),
	HX_CSTRING("makeCopy"),
	HX_CSTRING("makeFrom1D"),
	HX_CSTRING("compare"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(IntPoint_obj,ix),HX_CSTRING("ix")},
	{hx::fsInt,(int)offsetof(IntPoint_obj,iy),HX_CSTRING("iy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("ix"),
	HX_CSTRING("iy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntPoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntPoint_obj::__mClass,"__mClass");
};

#endif

Class IntPoint_obj::__mClass;

void IntPoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.IntPoint"), hx::TCanCast< IntPoint_obj> ,sStaticFields,sMemberFields,
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

void IntPoint_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace freeBinaryLIB
} // end namespace structs
} // end namespace geom
} // end namespace primitives
