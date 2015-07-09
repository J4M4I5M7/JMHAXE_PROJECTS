#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_jmSubLibs_decoupledLIB_utils_staticUtils_graphics_bitmap_fill_funcs_BFPU_MakeRectangularGradient
#include <jmSubLibs/decoupledLIB/utils/staticUtils/graphics/bitmap/fill/funcs/BFPU_MakeRectangularGradient.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace jmSubLibs{
namespace decoupledLIB{
namespace utils{
namespace staticUtils{
namespace graphics{
namespace bitmap{
namespace fill{
namespace funcs{

Void BFPU_MakeRectangularGradient_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.decoupledLIB.utils.staticUtils.graphics.bitmap.fill.funcs.BFPU_MakeRectangularGradient","new",0xb935c639,"jmSubLibs.decoupledLIB.utils.staticUtils.graphics.bitmap.fill.funcs.BFPU_MakeRectangularGradient.new","jmSubLibs/decoupledLIB/utils/staticUtils/graphics/bitmap/fill/funcs/BFPU_MakeRectangularGradient.hx",12,0x74ea5057)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BFPU_MakeRectangularGradient_obj::~BFPU_MakeRectangularGradient_obj() { }

Dynamic BFPU_MakeRectangularGradient_obj::__CreateEmpty() { return  new BFPU_MakeRectangularGradient_obj; }
hx::ObjectPtr< BFPU_MakeRectangularGradient_obj > BFPU_MakeRectangularGradient_obj::__new()
{  hx::ObjectPtr< BFPU_MakeRectangularGradient_obj > result = new BFPU_MakeRectangularGradient_obj();
	result->__construct();
	return result;}

Dynamic BFPU_MakeRectangularGradient_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BFPU_MakeRectangularGradient_obj > result = new BFPU_MakeRectangularGradient_obj();
	result->__construct();
	return result;}

Void BFPU_MakeRectangularGradient_obj::func( ::openfl::display::BitmapData inBm,int centerColor,int edgeColor,hx::Null< bool >  __o_clearBitmapFirst){
bool clearBitmapFirst = __o_clearBitmapFirst.Default(true);
	HX_STACK_FRAME("jmSubLibs.decoupledLIB.utils.staticUtils.graphics.bitmap.fill.funcs.BFPU_MakeRectangularGradient","func",0x509a134b,"jmSubLibs.decoupledLIB.utils.staticUtils.graphics.bitmap.fill.funcs.BFPU_MakeRectangularGradient.func","jmSubLibs/decoupledLIB/utils/staticUtils/graphics/bitmap/fill/funcs/BFPU_MakeRectangularGradient.hx",21,0x74ea5057)
	HX_STACK_ARG(inBm,"inBm")
	HX_STACK_ARG(centerColor,"centerColor")
	HX_STACK_ARG(edgeColor,"edgeColor")
	HX_STACK_ARG(clearBitmapFirst,"clearBitmapFirst")
{
		HX_STACK_LINE(25)
		if ((clearBitmapFirst)){
			HX_STACK_LINE(25)
			::openfl::geom::Rectangle _g = inBm->get_rect();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(25)
			inBm->fillRect(_g,(int)0);
		}
		HX_STACK_LINE(30)
		int a0 = (int((int)255) & int((int(centerColor) >> int((int)24))));		HX_STACK_VAR(a0,"a0");
		HX_STACK_LINE(31)
		int r0 = (int((int)255) & int((int(centerColor) >> int((int)16))));		HX_STACK_VAR(r0,"r0");
		HX_STACK_LINE(32)
		int g0 = (int((int)255) & int((int(centerColor) >> int((int)8))));		HX_STACK_VAR(g0,"g0");
		HX_STACK_LINE(33)
		int b0 = (int((int)255) & int(centerColor));		HX_STACK_VAR(b0,"b0");
		HX_STACK_LINE(36)
		int a1 = (int((int)255) & int((int(edgeColor) >> int((int)24))));		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(37)
		int r1 = (int((int)255) & int((int(edgeColor) >> int((int)16))));		HX_STACK_VAR(r1,"r1");
		HX_STACK_LINE(38)
		int g1 = (int((int)255) & int((int(edgeColor) >> int((int)8))));		HX_STACK_VAR(g1,"g1");
		HX_STACK_LINE(39)
		int b1 = (int((int)255) & int(edgeColor));		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(44)
		int newColor;		HX_STACK_VAR(newColor,"newColor");
		HX_STACK_LINE(45)
		int aN;		HX_STACK_VAR(aN,"aN");
		HX_STACK_LINE(46)
		int rN;		HX_STACK_VAR(rN,"rN");
		HX_STACK_LINE(47)
		int gN;		HX_STACK_VAR(gN,"gN");
		HX_STACK_LINE(48)
		int bN;		HX_STACK_VAR(bN,"bN");
		HX_STACK_LINE(50)
		Float maxPer;		HX_STACK_VAR(maxPer,"maxPer");
		HX_STACK_LINE(53)
		int x0 = (int)0;		HX_STACK_VAR(x0,"x0");
		HX_STACK_LINE(54)
		int y0 = (int)0;		HX_STACK_VAR(y0,"y0");
		HX_STACK_LINE(55)
		int _g1 = inBm->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(55)
		int x1 = (_g1 - (int)1);		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(56)
		int _g2 = inBm->get_height();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(56)
		int y1 = (_g2 - (int)1);		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(61)
		int cenX = ::Std_obj::_int((((x0 + x1)) * 0.5));		HX_STACK_VAR(cenX,"cenX");
		HX_STACK_LINE(62)
		int cenY = ::Std_obj::_int((((y0 + y1)) * 0.5));		HX_STACK_VAR(cenY,"cenY");
		HX_STACK_LINE(75)
		int inX0 = ((int)0 - ((x0 - cenX)));		HX_STACK_VAR(inX0,"inX0");
		HX_STACK_LINE(76)
		int inY0 = ((int)0 - ((y0 - cenY)));		HX_STACK_VAR(inY0,"inY0");
		HX_STACK_LINE(77)
		int inX1 = (x1 - cenX);		HX_STACK_VAR(inX1,"inX1");
		HX_STACK_LINE(78)
		int inY1 = (y1 - cenY);		HX_STACK_VAR(inY1,"inY1");
		HX_STACK_LINE(80)
		int deltaX;		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(81)
		int deltaY;		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(83)
		Float deltaPerX;		HX_STACK_VAR(deltaPerX,"deltaPerX");
		HX_STACK_LINE(84)
		Float deltaPerY;		HX_STACK_VAR(deltaPerY,"deltaPerY");
		HX_STACK_LINE(86)
		bool xNeg;		HX_STACK_VAR(xNeg,"xNeg");
		HX_STACK_LINE(87)
		bool yNeg;		HX_STACK_VAR(yNeg,"yNeg");
		HX_STACK_LINE(89)
		int sx;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(90)
		int sy;		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(97)
		sx = (x0 - (int)1);
		HX_STACK_LINE(97)
		while((true)){
			HX_STACK_LINE(97)
			if ((!(((sx <= x1))))){
				HX_STACK_LINE(97)
				break;
			}
			HX_STACK_LINE(97)
			(sx)++;
			HX_STACK_LINE(98)
			sy = (y0 - (int)1);
			HX_STACK_LINE(98)
			while((true)){
				HX_STACK_LINE(98)
				if ((!(((sy <= y1))))){
					HX_STACK_LINE(98)
					break;
				}
				HX_STACK_LINE(98)
				(sy)++;
				HX_STACK_LINE(101)
				xNeg = false;
				HX_STACK_LINE(102)
				yNeg = false;
				HX_STACK_LINE(103)
				deltaX = (sx - cenX);
				HX_STACK_LINE(103)
				if (((deltaX < (int)0))){
					HX_STACK_LINE(103)
					deltaX = ((int)0 - deltaX);
					HX_STACK_LINE(103)
					xNeg = true;
				}
				HX_STACK_LINE(104)
				deltaY = (sy - cenY);
				HX_STACK_LINE(104)
				if (((deltaY < (int)0))){
					HX_STACK_LINE(104)
					deltaY = ((int)0 - deltaY);
					HX_STACK_LINE(104)
					yNeg = true;
				}
				HX_STACK_LINE(107)
				if ((xNeg)){
					HX_STACK_LINE(107)
					deltaPerX = (Float(deltaX) / Float(inX0));
				}
				else{
					HX_STACK_LINE(108)
					deltaPerX = (Float(deltaX) / Float(inX1));
				}
				HX_STACK_LINE(110)
				if ((yNeg)){
					HX_STACK_LINE(110)
					deltaPerY = (Float(deltaY) / Float(inY0));
				}
				else{
					HX_STACK_LINE(111)
					deltaPerY = (Float(deltaY) / Float(inY1));
				}
				HX_STACK_LINE(113)
				if (((deltaPerX > deltaPerY))){
					HX_STACK_LINE(113)
					maxPer = ((int)1 - deltaPerX);
				}
				else{
					HX_STACK_LINE(114)
					maxPer = ((int)1 - deltaPerY);
				}
				HX_STACK_LINE(117)
				Float invPer = ((int)1 - maxPer);		HX_STACK_VAR(invPer,"invPer");
				struct _Function_3_1{
					inline static Float Block( int &a0){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/decoupledLIB/utils/staticUtils/graphics/bitmap/fill/funcs/BFPU_MakeRectangularGradient.hx",123,0x74ea5057)
						{
							HX_STACK_LINE(123)
							int _int = a0;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(123)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(123)
				int _g3 = ::Std_obj::_int((_Function_3_1::Block(a0) * maxPer));		HX_STACK_VAR(_g3,"_g3");
				struct _Function_3_2{
					inline static Float Block( int &a1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/decoupledLIB/utils/staticUtils/graphics/bitmap/fill/funcs/BFPU_MakeRectangularGradient.hx",123,0x74ea5057)
						{
							HX_STACK_LINE(123)
							int _int = a1;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(123)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(123)
				int _g4 = ::Std_obj::_int((_Function_3_2::Block(a1) * invPer));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(123)
				int _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(123)
				aN = _g5;
				struct _Function_3_3{
					inline static Float Block( int &r0){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/decoupledLIB/utils/staticUtils/graphics/bitmap/fill/funcs/BFPU_MakeRectangularGradient.hx",124,0x74ea5057)
						{
							HX_STACK_LINE(124)
							int _int = r0;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(124)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(124)
				int _g6 = ::Std_obj::_int((_Function_3_3::Block(r0) * maxPer));		HX_STACK_VAR(_g6,"_g6");
				struct _Function_3_4{
					inline static Float Block( int &r1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/decoupledLIB/utils/staticUtils/graphics/bitmap/fill/funcs/BFPU_MakeRectangularGradient.hx",124,0x74ea5057)
						{
							HX_STACK_LINE(124)
							int _int = r1;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(124)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(124)
				int _g7 = ::Std_obj::_int((_Function_3_4::Block(r1) * invPer));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(124)
				int _g8 = (_g6 + _g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(124)
				rN = _g8;
				struct _Function_3_5{
					inline static Float Block( int &g0){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/decoupledLIB/utils/staticUtils/graphics/bitmap/fill/funcs/BFPU_MakeRectangularGradient.hx",125,0x74ea5057)
						{
							HX_STACK_LINE(125)
							int _int = g0;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(125)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(125)
				int _g9 = ::Std_obj::_int((_Function_3_5::Block(g0) * maxPer));		HX_STACK_VAR(_g9,"_g9");
				struct _Function_3_6{
					inline static Float Block( int &g1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/decoupledLIB/utils/staticUtils/graphics/bitmap/fill/funcs/BFPU_MakeRectangularGradient.hx",125,0x74ea5057)
						{
							HX_STACK_LINE(125)
							int _int = g1;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(125)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(125)
				int _g10 = ::Std_obj::_int((_Function_3_6::Block(g1) * invPer));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(125)
				int _g11 = (_g9 + _g10);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(125)
				gN = _g11;
				struct _Function_3_7{
					inline static Float Block( int &b0){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/decoupledLIB/utils/staticUtils/graphics/bitmap/fill/funcs/BFPU_MakeRectangularGradient.hx",126,0x74ea5057)
						{
							HX_STACK_LINE(126)
							int _int = b0;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(126)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(126)
				int _g12 = ::Std_obj::_int((_Function_3_7::Block(b0) * maxPer));		HX_STACK_VAR(_g12,"_g12");
				struct _Function_3_8{
					inline static Float Block( int &b1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","jmSubLibs/decoupledLIB/utils/staticUtils/graphics/bitmap/fill/funcs/BFPU_MakeRectangularGradient.hx",126,0x74ea5057)
						{
							HX_STACK_LINE(126)
							int _int = b1;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(126)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(126)
				int _g13 = ::Std_obj::_int((_Function_3_8::Block(b1) * invPer));		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(126)
				int _g14 = (_g12 + _g13);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(126)
				bN = _g14;
				HX_STACK_LINE(129)
				newColor = (int((int((int((int(aN) << int((int)24))) | int((int(rN) << int((int)16))))) | int((int(gN) << int((int)8))))) | int(bN));
				HX_STACK_LINE(131)
				inBm->setPixel32(sx,sy,newColor);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(BFPU_MakeRectangularGradient_obj,func,(void))


BFPU_MakeRectangularGradient_obj::BFPU_MakeRectangularGradient_obj()
{
}

Dynamic BFPU_MakeRectangularGradient_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"func") ) { return func_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BFPU_MakeRectangularGradient_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BFPU_MakeRectangularGradient_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("func"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BFPU_MakeRectangularGradient_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BFPU_MakeRectangularGradient_obj::__mClass,"__mClass");
};

#endif

Class BFPU_MakeRectangularGradient_obj::__mClass;

void BFPU_MakeRectangularGradient_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.decoupledLIB.utils.staticUtils.graphics.bitmap.fill.funcs.BFPU_MakeRectangularGradient"), hx::TCanCast< BFPU_MakeRectangularGradient_obj> ,sStaticFields,sMemberFields,
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

void BFPU_MakeRectangularGradient_obj::__boot()
{
}

} // end namespace jmSubLibs
} // end namespace decoupledLIB
} // end namespace utils
} // end namespace staticUtils
} // end namespace graphics
} // end namespace bitmap
} // end namespace fill
} // end namespace funcs
