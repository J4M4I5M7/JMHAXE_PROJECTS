#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_jmSubLibs_EU
#include <jmSubLibs/EU.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_geom_primitives_IntPoint
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/IntPoint.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_geom_primitives_PointPair
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/PointPair.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_glue_IntBool
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/glue/IntBool.h>
#endif
#ifndef INCLUDED_jmSubLibs_genLIB_freeBinaryLIB_structs_glue_IntFloat
#include <jmSubLibs/genLIB/freeBinaryLIB/structs/glue/IntFloat.h>
#endif
namespace jmSubLibs{
namespace genLIB{
namespace freeBinaryLIB{
namespace structs{
namespace geom{
namespace primitives{

Void PointPair_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair","new",0x34f8a570,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair.new","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/PointPair.hx",44,0x0f17b7c2)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//PointPair_obj::~PointPair_obj() { }

Dynamic PointPair_obj::__CreateEmpty() { return  new PointPair_obj; }
hx::ObjectPtr< PointPair_obj > PointPair_obj::__new()
{  hx::ObjectPtr< PointPair_obj > result = new PointPair_obj();
	result->__construct();
	return result;}

Dynamic PointPair_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PointPair_obj > result = new PointPair_obj();
	result->__construct();
	return result;}

int PointPair_obj::AXIS_INVALID;

int PointPair_obj::AXIS_IDENTICAL;

int PointPair_obj::AXIS_X;

int PointPair_obj::AXIS_Y;

::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair PointPair_obj::_Pr0;

::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair PointPair_obj::_Pr1;

int PointPair_obj::_p0;

int PointPair_obj::_p1;

::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair PointPair_obj::makeCopy( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair inPP){
	HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair","makeCopy",0x1acf81b3,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair.makeCopy","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/PointPair.hx",49,0x0f17b7c2)
	HX_STACK_ARG(inPP,"inPP")
	HX_STACK_LINE(50)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair theCopy = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::__new();		HX_STACK_VAR(theCopy,"theCopy");
	HX_STACK_LINE(52)
	theCopy->x0 = inPP->x0;
	HX_STACK_LINE(53)
	theCopy->x1 = inPP->x1;
	HX_STACK_LINE(56)
	theCopy->y0 = inPP->y0;
	HX_STACK_LINE(57)
	theCopy->y1 = inPP->y1;
	HX_STACK_LINE(60)
	return theCopy;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PointPair_obj,makeCopy,return )

bool PointPair_obj::areSameSize( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r0,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r1){
	HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair","areSameSize",0x734f8ecb,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair.areSameSize","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/PointPair.hx",65,0x0f17b7c2)
	HX_STACK_ARG(r0,"r0")
	HX_STACK_ARG(r1,"r1")
	HX_STACK_LINE(77)
	int d0X = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::calcDeltaX(r0,false);		HX_STACK_VAR(d0X,"d0X");
	HX_STACK_LINE(78)
	int d1X = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::calcDeltaX(r1,false);		HX_STACK_VAR(d1X,"d1X");
	HX_STACK_LINE(79)
	if (((d0X != d1X))){
		HX_STACK_LINE(107)
		return false;
	}
	HX_STACK_LINE(111)
	int d0Y = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::calcDeltaY(r0,false);		HX_STACK_VAR(d0Y,"d0Y");
	HX_STACK_LINE(112)
	int d1Y = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::calcDeltaY(r1,false);		HX_STACK_VAR(d1Y,"d1Y");
	HX_STACK_LINE(113)
	if (((d0Y != d1Y))){
		HX_STACK_LINE(140)
		return false;
	}
	HX_STACK_LINE(162)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PointPair_obj,areSameSize,return )

::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntBool PointPair_obj::findOverlappingOriginX0( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r0,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r1,::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntBool op){
	HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair","findOverlappingOriginX0",0x666f9b2e,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair.findOverlappingOriginX0","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/PointPair.hx",167,0x0f17b7c2)
	HX_STACK_ARG(r0,"r0")
	HX_STACK_ARG(r1,"r1")
	HX_STACK_ARG(op,"op")
	HX_STACK_LINE(178)
	if (((bool((r0->x0 >= r1->x0)) && bool((r0->x0 <= r1->x1))))){
		HX_STACK_LINE(189)
		op->b = true;
		HX_STACK_LINE(190)
		op->i = r0->x0;
		HX_STACK_LINE(191)
		return op;
	}
	HX_STACK_LINE(196)
	if (((bool((r1->x0 >= r0->x0)) && bool((r1->x0 <= r0->x1))))){
		HX_STACK_LINE(205)
		op->b = true;
		HX_STACK_LINE(206)
		op->i = r1->x0;
		HX_STACK_LINE(207)
		return op;
	}
	HX_STACK_LINE(214)
	op->b = false;
	HX_STACK_LINE(215)
	return op;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PointPair_obj,findOverlappingOriginX0,return )

::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntBool PointPair_obj::findOverlappingOriginY0( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r0,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r1,::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntBool op){
	HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair","findOverlappingOriginY0",0x666f9c0d,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair.findOverlappingOriginY0","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/PointPair.hx",221,0x0f17b7c2)
	HX_STACK_ARG(r0,"r0")
	HX_STACK_ARG(r1,"r1")
	HX_STACK_ARG(op,"op")
	HX_STACK_LINE(231)
	if (((bool((r0->y0 >= r1->y0)) && bool((r0->y0 <= r1->y1))))){
		HX_STACK_LINE(243)
		op->b = true;
		HX_STACK_LINE(244)
		op->i = r0->y0;
		HX_STACK_LINE(245)
		return op;
	}
	HX_STACK_LINE(250)
	if (((bool((r1->y0 >= r0->y0)) && bool((r1->y0 <= r0->y1))))){
		HX_STACK_LINE(261)
		op->b = true;
		HX_STACK_LINE(262)
		op->i = r1->y0;
		HX_STACK_LINE(263)
		return op;
	}
	HX_STACK_LINE(271)
	op->b = false;
	HX_STACK_LINE(272)
	return op;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PointPair_obj,findOverlappingOriginY0,return )

bool PointPair_obj::findOverlappingX0Y0Origin( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r0,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r1,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::IntPoint op){
	HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair","findOverlappingX0Y0Origin",0x67c66aa5,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair.findOverlappingX0Y0Origin","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/PointPair.hx",285,0x0f17b7c2)
	HX_STACK_ARG(r0,"r0")
	HX_STACK_ARG(r1,"r1")
	HX_STACK_ARG(op,"op")
	HX_STACK_LINE(297)
	if (((bool((bool((bool((r0->x0 >= r1->x0)) && bool((r0->x0 <= r1->x1)))) && bool((r0->y0 >= r1->y0)))) && bool((r0->y0 <= r1->y1))))){
		HX_STACK_LINE(309)
		op->ix = r0->x0;
		HX_STACK_LINE(310)
		op->iy = r0->y0;
		HX_STACK_LINE(311)
		return true;
	}
	HX_STACK_LINE(315)
	if (((bool((bool((bool((r1->x0 >= r0->x0)) && bool((r1->x0 <= r0->x1)))) && bool((r1->y0 >= r0->y0)))) && bool((r1->y0 <= r0->y1))))){
		HX_STACK_LINE(325)
		op->ix = r1->x0;
		HX_STACK_LINE(326)
		op->iy = r1->y0;
		HX_STACK_LINE(327)
		return true;
	}
	HX_STACK_LINE(352)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PointPair_obj,findOverlappingX0Y0Origin,return )

int PointPair_obj::calcDeltaX( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair inst,bool inAbs){
	HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair","calcDeltaX",0x13c9a8c5,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair.calcDeltaX","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/PointPair.hx",363,0x0f17b7c2)
	HX_STACK_ARG(inst,"inst")
	HX_STACK_ARG(inAbs,"inAbs")
	HX_STACK_LINE(364)
	int op = (int)0;		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(365)
	op = (inst->x1 - inst->x0);
	HX_STACK_LINE(366)
	if (((bool(inAbs) && bool((op < (int)0))))){
		HX_STACK_LINE(371)
		op = ((int)0 - op);
	}
	HX_STACK_LINE(373)
	return op;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PointPair_obj,calcDeltaX,return )

int PointPair_obj::calcDeltaY( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair inst,bool inAbs){
	HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair","calcDeltaY",0x13c9a8c6,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair.calcDeltaY","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/PointPair.hx",384,0x0f17b7c2)
	HX_STACK_ARG(inst,"inst")
	HX_STACK_ARG(inAbs,"inAbs")
	HX_STACK_LINE(385)
	int op = (inst->y1 - inst->y0);		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(386)
	if (((bool(inAbs) && bool((op < (int)0))))){
		HX_STACK_LINE(388)
		op = ((int)0 - op);
	}
	HX_STACK_LINE(396)
	return op;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PointPair_obj,calcDeltaY,return )

Float PointPair_obj::calcLength( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair inst){
	HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair","calcLength",0x47ed2c4b,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair.calcLength","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/PointPair.hx",401,0x0f17b7c2)
	HX_STACK_ARG(inst,"inst")
	HX_STACK_LINE(402)
	int deltX = (inst->x1 - inst->x0);		HX_STACK_VAR(deltX,"deltX");
	HX_STACK_LINE(403)
	int deltY = (inst->y1 - inst->y0);		HX_STACK_VAR(deltY,"deltY");
	HX_STACK_LINE(404)
	int d2X = (deltX * deltX);		HX_STACK_VAR(d2X,"d2X");
	HX_STACK_LINE(405)
	int d2Y = (deltY * deltY);		HX_STACK_VAR(d2Y,"d2Y");
	HX_STACK_LINE(406)
	Float dist = ::Math_obj::sqrt((d2X + d2Y));		HX_STACK_VAR(dist,"dist");
	HX_STACK_LINE(407)
	return dist;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PointPair_obj,calcLength,return )

bool PointPair_obj::getOverlap( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r0,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r1,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair op){
	HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair","getOverlap",0xec68b681,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair.getOverlap","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/PointPair.hx",416,0x0f17b7c2)
	HX_STACK_ARG(r0,"r0")
	HX_STACK_ARG(r1,"r1")
	HX_STACK_ARG(op,"op")
	HX_STACK_LINE(432)
	bool resX;		HX_STACK_VAR(resX,"resX");
	HX_STACK_LINE(433)
	bool resY;		HX_STACK_VAR(resY,"resY");
	HX_STACK_LINE(434)
	bool _g = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::getOverlapX(r0,r1,op);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(434)
	resX = _g;
	HX_STACK_LINE(435)
	bool _g1 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::getOverlapY(r0,r1,op);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(435)
	resY = _g1;
	HX_STACK_LINE(458)
	return (bool(resX) && bool(resY));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PointPair_obj,getOverlap,return )

bool PointPair_obj::getOverlapX( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r0,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r1,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair op){
	HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair","getOverlapX",0xef36fab7,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair.getOverlapX","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/PointPair.hx",462,0x0f17b7c2)
	HX_STACK_ARG(r0,"r0")
	HX_STACK_ARG(r1,"r1")
	HX_STACK_ARG(op,"op")
	HX_STACK_LINE(464)
	if (((r0->x0 < r1->x0))){
		HX_STACK_LINE(466)
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr0 = r0;
		HX_STACK_LINE(467)
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr1 = r1;
	}
	else{
		HX_STACK_LINE(471)
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr0 = r1;
		HX_STACK_LINE(472)
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr1 = r0;
	}
	HX_STACK_LINE(476)
	if (((::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr1->x0 > ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr0->x1))){
		HX_STACK_LINE(486)
		return false;
	}
	HX_STACK_LINE(502)
	if (((::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr0->x0 > ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr1->x0))){
		HX_STACK_LINE(502)
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_p0 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr0->x0;
	}
	else{
		HX_STACK_LINE(502)
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_p0 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr1->x0;
	}
	HX_STACK_LINE(503)
	if (((::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr0->x1 < ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr1->x1))){
		HX_STACK_LINE(503)
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_p1 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr0->x1;
	}
	else{
		HX_STACK_LINE(503)
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_p1 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr1->x1;
	}
	HX_STACK_LINE(506)
	op->x0 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_p0;
	HX_STACK_LINE(507)
	op->x1 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_p1;
	HX_STACK_LINE(523)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PointPair_obj,getOverlapX,return )

bool PointPair_obj::getOverlapY( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r0,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r1,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair op){
	HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair","getOverlapY",0xef36fab8,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair.getOverlapY","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/PointPair.hx",527,0x0f17b7c2)
	HX_STACK_ARG(r0,"r0")
	HX_STACK_ARG(r1,"r1")
	HX_STACK_ARG(op,"op")
	HX_STACK_LINE(532)
	if (((r0->y0 < r1->y1))){
		HX_STACK_LINE(534)
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr0 = r0;
		HX_STACK_LINE(535)
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr1 = r1;
	}
	else{
		HX_STACK_LINE(539)
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr0 = r1;
		HX_STACK_LINE(540)
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr1 = r0;
	}
	HX_STACK_LINE(544)
	if (((::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr1->y0 > ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr0->y1))){
		HX_STACK_LINE(553)
		return false;
	}
	HX_STACK_LINE(567)
	if (((::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr0->y0 > ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr1->y0))){
		HX_STACK_LINE(567)
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_p0 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr0->y0;
	}
	else{
		HX_STACK_LINE(567)
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_p0 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr1->y0;
	}
	HX_STACK_LINE(568)
	if (((::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr0->y1 < ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr1->y1))){
		HX_STACK_LINE(568)
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_p1 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr0->y1;
	}
	else{
		HX_STACK_LINE(568)
		::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_p1 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_Pr1->y1;
	}
	HX_STACK_LINE(571)
	op->y0 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_p0;
	HX_STACK_LINE(572)
	op->y1 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::_p1;
	HX_STACK_LINE(589)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PointPair_obj,getOverlapY,return )

::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntFloat PointPair_obj::calcLargestPinchDeltaAxis( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair p0,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair p1){
	HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair","calcLargestPinchDeltaAxis",0x5d9d3396,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair.calcLargestPinchDeltaAxis","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/PointPair.hx",605,0x0f17b7c2)
	HX_STACK_ARG(p0,"p0")
	HX_STACK_ARG(p1,"p1")
	HX_STACK_LINE(606)
	int dx0 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::calcDeltaX(p0,true);		HX_STACK_VAR(dx0,"dx0");
	HX_STACK_LINE(607)
	int dx1 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::calcDeltaX(p1,true);		HX_STACK_VAR(dx1,"dx1");
	HX_STACK_LINE(608)
	int xDelta = (dx1 - dx0);		HX_STACK_VAR(xDelta,"xDelta");
	HX_STACK_LINE(609)
	int absX;		HX_STACK_VAR(absX,"absX");
	HX_STACK_LINE(609)
	if (((xDelta < (int)0))){
		HX_STACK_LINE(609)
		absX = ((int)0 - xDelta);
	}
	else{
		HX_STACK_LINE(609)
		absX = xDelta;
	}
	HX_STACK_LINE(611)
	int dy0 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::calcDeltaY(p0,true);		HX_STACK_VAR(dy0,"dy0");
	HX_STACK_LINE(612)
	int dy1 = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::calcDeltaY(p1,true);		HX_STACK_VAR(dy1,"dy1");
	HX_STACK_LINE(613)
	int yDelta = (dy1 - dy0);		HX_STACK_VAR(yDelta,"yDelta");
	HX_STACK_LINE(614)
	int absY;		HX_STACK_VAR(absY,"absY");
	HX_STACK_LINE(614)
	if (((yDelta < (int)0))){
		HX_STACK_LINE(614)
		absY = ((int)0 - yDelta);
	}
	else{
		HX_STACK_LINE(614)
		absY = yDelta;
	}
	HX_STACK_LINE(616)
	::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntFloat op = ::jmSubLibs::genLIB::freeBinaryLIB::structs::glue::IntFloat_obj::__new();		HX_STACK_VAR(op,"op");
	HX_STACK_LINE(620)
	if (((absX > absY))){
		HX_STACK_LINE(623)
		op->f = xDelta;
		HX_STACK_LINE(624)
		op->i = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::AXIS_X;
	}
	else{
		HX_STACK_LINE(627)
		if (((absY > absX))){
			HX_STACK_LINE(630)
			op->f = yDelta;
			HX_STACK_LINE(631)
			op->i = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::AXIS_Y;
		}
		else{
			HX_STACK_LINE(639)
			if (((bool((bool((xDelta >= (int)0)) && bool((yDelta >= (int)0)))) || bool((bool((xDelta <= (int)0)) && bool((yDelta <= (int)0))))))){
				HX_STACK_LINE(643)
				op->f = xDelta;
				HX_STACK_LINE(644)
				op->i = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::AXIS_IDENTICAL;
			}
			else{
				HX_STACK_LINE(650)
				op->f = (int)0;
				HX_STACK_LINE(651)
				op->i = ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair_obj::AXIS_INVALID;
			}
		}
	}
	HX_STACK_LINE(655)
	::jmSubLibs::EU_obj::msg(HX_CSTRING("We should never get here. PointPair.hx calcLargestPinchDeltaAxis()"));
	HX_STACK_LINE(656)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PointPair_obj,calcLargestPinchDeltaAxis,return )

bool PointPair_obj::equals( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r0,::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair r1){
	HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair","equals",0xded4a32f,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair.equals","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/PointPair.hx",663,0x0f17b7c2)
	HX_STACK_ARG(r0,"r0")
	HX_STACK_ARG(r1,"r1")
	HX_STACK_LINE(670)
	if (((r0->x0 != r1->x0))){
		HX_STACK_LINE(670)
		return false;
	}
	HX_STACK_LINE(671)
	if (((r0->x1 != r1->x1))){
		HX_STACK_LINE(671)
		return false;
	}
	HX_STACK_LINE(674)
	if (((r0->y0 != r1->y0))){
		HX_STACK_LINE(674)
		return false;
	}
	HX_STACK_LINE(675)
	if (((r0->y1 != r1->y1))){
		HX_STACK_LINE(675)
		return false;
	}
	HX_STACK_LINE(678)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(PointPair_obj,equals,return )

Void PointPair_obj::validatePointOrder( ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair inPP){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair","validatePointOrder",0x8cc01344,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair.validatePointOrder","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/PointPair.hx",683,0x0f17b7c2)
		HX_STACK_ARG(inPP,"inPP")
		HX_STACK_LINE(684)
		if (((inPP->x0 > inPP->x1))){
			HX_STACK_LINE(684)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("validate fail. PointPair.hx. X"));
		}
		HX_STACK_LINE(685)
		if (((inPP->y0 > inPP->y1))){
			HX_STACK_LINE(685)
			::jmSubLibs::EU_obj::msg(HX_CSTRING("validate fail. PointPair.hx. Y"));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PointPair_obj,validatePointOrder,(void))

Void PointPair_obj::msg( ::String inMSG){
{
		HX_STACK_FRAME("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair","msg",0x34f7ef51,"jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair.msg","jmSubLibs/genLIB/freeBinaryLIB/structs/geom/primitives/PointPair.hx",690,0x0f17b7c2)
		HX_STACK_ARG(inMSG,"inMSG")
		HX_STACK_LINE(690)
		::jmSubLibs::EU_obj::msg(((HX_CSTRING("PointPair.hx inMSG==[") + inMSG) + HX_CSTRING("]")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PointPair_obj,msg,(void))


PointPair_obj::PointPair_obj()
{
}

Dynamic PointPair_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { return x0; }
		if (HX_FIELD_EQ(inName,"y0") ) { return y0; }
		if (HX_FIELD_EQ(inName,"x1") ) { return x1; }
		if (HX_FIELD_EQ(inName,"y1") ) { return y1; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_p0") ) { return _p0; }
		if (HX_FIELD_EQ(inName,"_p1") ) { return _p1; }
		if (HX_FIELD_EQ(inName,"msg") ) { return msg_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_Pr0") ) { return _Pr0; }
		if (HX_FIELD_EQ(inName,"_Pr1") ) { return _Pr1; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"AXIS_X") ) { return AXIS_X; }
		if (HX_FIELD_EQ(inName,"AXIS_Y") ) { return AXIS_Y; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"makeCopy") ) { return makeCopy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"calcDeltaX") ) { return calcDeltaX_dyn(); }
		if (HX_FIELD_EQ(inName,"calcDeltaY") ) { return calcDeltaY_dyn(); }
		if (HX_FIELD_EQ(inName,"calcLength") ) { return calcLength_dyn(); }
		if (HX_FIELD_EQ(inName,"getOverlap") ) { return getOverlap_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"areSameSize") ) { return areSameSize_dyn(); }
		if (HX_FIELD_EQ(inName,"getOverlapX") ) { return getOverlapX_dyn(); }
		if (HX_FIELD_EQ(inName,"getOverlapY") ) { return getOverlapY_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"AXIS_INVALID") ) { return AXIS_INVALID; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"AXIS_IDENTICAL") ) { return AXIS_IDENTICAL; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"validatePointOrder") ) { return validatePointOrder_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"findOverlappingOriginX0") ) { return findOverlappingOriginX0_dyn(); }
		if (HX_FIELD_EQ(inName,"findOverlappingOriginY0") ) { return findOverlappingOriginY0_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"findOverlappingX0Y0Origin") ) { return findOverlappingX0Y0Origin_dyn(); }
		if (HX_FIELD_EQ(inName,"calcLargestPinchDeltaAxis") ) { return calcLargestPinchDeltaAxis_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PointPair_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x0") ) { x0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y0") ) { y0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x1") ) { x1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y1") ) { y1=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_p0") ) { _p0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_p1") ) { _p1=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_Pr0") ) { _Pr0=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_Pr1") ) { _Pr1=inValue.Cast< ::jmSubLibs::genLIB::freeBinaryLIB::structs::geom::primitives::PointPair >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"AXIS_X") ) { AXIS_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"AXIS_Y") ) { AXIS_Y=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"AXIS_INVALID") ) { AXIS_INVALID=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"AXIS_IDENTICAL") ) { AXIS_IDENTICAL=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PointPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x0"));
	outFields->push(HX_CSTRING("y0"));
	outFields->push(HX_CSTRING("x1"));
	outFields->push(HX_CSTRING("y1"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("AXIS_INVALID"),
	HX_CSTRING("AXIS_IDENTICAL"),
	HX_CSTRING("AXIS_X"),
	HX_CSTRING("AXIS_Y"),
	HX_CSTRING("_Pr0"),
	HX_CSTRING("_Pr1"),
	HX_CSTRING("_p0"),
	HX_CSTRING("_p1"),
	HX_CSTRING("makeCopy"),
	HX_CSTRING("areSameSize"),
	HX_CSTRING("findOverlappingOriginX0"),
	HX_CSTRING("findOverlappingOriginY0"),
	HX_CSTRING("findOverlappingX0Y0Origin"),
	HX_CSTRING("calcDeltaX"),
	HX_CSTRING("calcDeltaY"),
	HX_CSTRING("calcLength"),
	HX_CSTRING("getOverlap"),
	HX_CSTRING("getOverlapX"),
	HX_CSTRING("getOverlapY"),
	HX_CSTRING("calcLargestPinchDeltaAxis"),
	HX_CSTRING("equals"),
	HX_CSTRING("validatePointOrder"),
	HX_CSTRING("msg"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(PointPair_obj,x0),HX_CSTRING("x0")},
	{hx::fsInt,(int)offsetof(PointPair_obj,y0),HX_CSTRING("y0")},
	{hx::fsInt,(int)offsetof(PointPair_obj,x1),HX_CSTRING("x1")},
	{hx::fsInt,(int)offsetof(PointPair_obj,y1),HX_CSTRING("y1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x0"),
	HX_CSTRING("y0"),
	HX_CSTRING("x1"),
	HX_CSTRING("y1"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PointPair_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PointPair_obj::AXIS_INVALID,"AXIS_INVALID");
	HX_MARK_MEMBER_NAME(PointPair_obj::AXIS_IDENTICAL,"AXIS_IDENTICAL");
	HX_MARK_MEMBER_NAME(PointPair_obj::AXIS_X,"AXIS_X");
	HX_MARK_MEMBER_NAME(PointPair_obj::AXIS_Y,"AXIS_Y");
	HX_MARK_MEMBER_NAME(PointPair_obj::_Pr0,"_Pr0");
	HX_MARK_MEMBER_NAME(PointPair_obj::_Pr1,"_Pr1");
	HX_MARK_MEMBER_NAME(PointPair_obj::_p0,"_p0");
	HX_MARK_MEMBER_NAME(PointPair_obj::_p1,"_p1");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PointPair_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PointPair_obj::AXIS_INVALID,"AXIS_INVALID");
	HX_VISIT_MEMBER_NAME(PointPair_obj::AXIS_IDENTICAL,"AXIS_IDENTICAL");
	HX_VISIT_MEMBER_NAME(PointPair_obj::AXIS_X,"AXIS_X");
	HX_VISIT_MEMBER_NAME(PointPair_obj::AXIS_Y,"AXIS_Y");
	HX_VISIT_MEMBER_NAME(PointPair_obj::_Pr0,"_Pr0");
	HX_VISIT_MEMBER_NAME(PointPair_obj::_Pr1,"_Pr1");
	HX_VISIT_MEMBER_NAME(PointPair_obj::_p0,"_p0");
	HX_VISIT_MEMBER_NAME(PointPair_obj::_p1,"_p1");
};

#endif

Class PointPair_obj::__mClass;

void PointPair_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.genLIB.freeBinaryLIB.structs.geom.primitives.PointPair"), hx::TCanCast< PointPair_obj> ,sStaticFields,sMemberFields,
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

void PointPair_obj::__boot()
{
	AXIS_INVALID= (int)-1;
	AXIS_IDENTICAL= (int)0;
	AXIS_X= (int)1;
	AXIS_Y= (int)2;
}

} // end namespace jmSubLibs
} // end namespace genLIB
} // end namespace freeBinaryLIB
} // end namespace structs
} // end namespace geom
} // end namespace primitives
