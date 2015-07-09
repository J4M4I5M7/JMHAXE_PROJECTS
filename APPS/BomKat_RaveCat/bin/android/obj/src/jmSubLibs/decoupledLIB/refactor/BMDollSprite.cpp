#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_jmSubLibs_decoupledLIB_consts_openfl_geom_PointZZ
#include <jmSubLibs/decoupledLIB/consts/openfl/geom/PointZZ.h>
#endif
#ifndef INCLUDED_jmSubLibs_decoupledLIB_doll_DollAnimData
#include <jmSubLibs/decoupledLIB/doll/DollAnimData.h>
#endif
#ifndef INCLUDED_jmSubLibs_decoupledLIB_refactor_BMDollSprite
#include <jmSubLibs/decoupledLIB/refactor/BMDollSprite.h>
#endif
#ifndef INCLUDED_jmSubLibs_freeBinaryLIB_structs_geom_primitives_IntPoint
#include <jmSubLibs/freeBinaryLIB/structs/geom/primitives/IntPoint.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace jmSubLibs{
namespace decoupledLIB{
namespace refactor{

Void BMDollSprite_obj::__construct()
{
HX_STACK_FRAME("jmSubLibs.decoupledLIB.refactor.BMDollSprite","new",0x71e546b0,"jmSubLibs.decoupledLIB.refactor.BMDollSprite.new","jmSubLibs/decoupledLIB/refactor/BMDollSprite.hx",29,0x8caebb3f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(92)
	this->_hasDefaultAnimName = false;
	HX_STACK_LINE(87)
	this->_hasActiveAnim = false;
	HX_STACK_LINE(69)
	this->_curFrame = (int)0;
	HX_STACK_LINE(40)
	this->_hasStrip = false;
	HX_STACK_LINE(104)
	::openfl::geom::Rectangle _g = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(104)
	this->_rec = _g;
	HX_STACK_LINE(105)
	::jmSubLibs::freeBinaryLIB::structs::geom::primitives::IntPoint _g1 = ::jmSubLibs::freeBinaryLIB::structs::geom::primitives::IntPoint_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(105)
	this->_dir = _g1;
	HX_STACK_LINE(106)
	::openfl::geom::Point _g2 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(106)
	this->_pt = _g2;
	HX_STACK_LINE(107)
	Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(107)
	this->_anims = _g3;
}
;
	return null();
}

//BMDollSprite_obj::~BMDollSprite_obj() { }

Dynamic BMDollSprite_obj::__CreateEmpty() { return  new BMDollSprite_obj; }
hx::ObjectPtr< BMDollSprite_obj > BMDollSprite_obj::__new()
{  hx::ObjectPtr< BMDollSprite_obj > result = new BMDollSprite_obj();
	result->__construct();
	return result;}

Dynamic BMDollSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BMDollSprite_obj > result = new BMDollSprite_obj();
	result->__construct();
	return result;}

Void BMDollSprite_obj::setDefaultAnim( ::String inName){
{
		HX_STACK_FRAME("jmSubLibs.decoupledLIB.refactor.BMDollSprite","setDefaultAnim",0xc85746a0,"jmSubLibs.decoupledLIB.refactor.BMDollSprite.setDefaultAnim","jmSubLibs/decoupledLIB/refactor/BMDollSprite.hx",113,0x8caebb3f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inName,"inName")
		HX_STACK_LINE(114)
		this->_defaultAnimName = inName;
		HX_STACK_LINE(115)
		this->_hasDefaultAnimName = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BMDollSprite_obj,setDefaultAnim,(void))

Void BMDollSprite_obj::addAnim( ::String inName,Array< int > inFrames,bool inLoop){
{
		HX_STACK_FRAME("jmSubLibs.decoupledLIB.refactor.BMDollSprite","addAnim",0xe341a722,"jmSubLibs.decoupledLIB.refactor.BMDollSprite.addAnim","jmSubLibs/decoupledLIB/refactor/BMDollSprite.hx",120,0x8caebb3f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inName,"inName")
		HX_STACK_ARG(inFrames,"inFrames")
		HX_STACK_ARG(inLoop,"inLoop")
		HX_STACK_LINE(122)
		::jmSubLibs::decoupledLIB::doll::DollAnimData tmpAnimDat = ::jmSubLibs::decoupledLIB::doll::DollAnimData_obj::__new(inName,inFrames,inLoop);		HX_STACK_VAR(tmpAnimDat,"tmpAnimDat");
		HX_STACK_LINE(123)
		this->_anims->push(tmpAnimDat);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BMDollSprite_obj,addAnim,(void))

int BMDollSprite_obj::getAnimIndex( ::String inName){
	HX_STACK_FRAME("jmSubLibs.decoupledLIB.refactor.BMDollSprite","getAnimIndex",0x43c7c37b,"jmSubLibs.decoupledLIB.refactor.BMDollSprite.getAnimIndex","jmSubLibs/decoupledLIB/refactor/BMDollSprite.hx",128,0x8caebb3f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inName,"inName")
	HX_STACK_LINE(129)
	::jmSubLibs::decoupledLIB::doll::DollAnimData tmpAnim;		HX_STACK_VAR(tmpAnim,"tmpAnim");
	HX_STACK_LINE(130)
	{
		HX_STACK_LINE(130)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(130)
		int _g = this->_anims->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(130)
		while((true)){
			HX_STACK_LINE(130)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(130)
				break;
			}
			HX_STACK_LINE(130)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(132)
			tmpAnim = this->_anims->__get(i).StaticCast< ::jmSubLibs::decoupledLIB::doll::DollAnimData >();
			HX_STACK_LINE(133)
			if (((tmpAnim->name == inName))){
				HX_STACK_LINE(133)
				return i;
			}
		}
	}
	HX_STACK_LINE(137)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(BMDollSprite_obj,getAnimIndex,return )

Void BMDollSprite_obj::playAnim( ::String inName){
{
		HX_STACK_FRAME("jmSubLibs.decoupledLIB.refactor.BMDollSprite","playAnim",0x8a7491d5,"jmSubLibs.decoupledLIB.refactor.BMDollSprite.playAnim","jmSubLibs/decoupledLIB/refactor/BMDollSprite.hx",142,0x8caebb3f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inName,"inName")
		HX_STACK_LINE(146)
		int tmpAnimIndex = this->getAnimIndex(inName);		HX_STACK_VAR(tmpAnimIndex,"tmpAnimIndex");
		HX_STACK_LINE(149)
		if (((tmpAnimIndex >= (int)0))){
			HX_STACK_LINE(151)
			this->_activeAnim = this->_anims->__get(tmpAnimIndex).StaticCast< ::jmSubLibs::decoupledLIB::doll::DollAnimData >();
			HX_STACK_LINE(152)
			this->_hasActiveAnim = true;
			HX_STACK_LINE(153)
			this->_activeAnim->curFrame = (int)0;
		}
		else{
			HX_STACK_LINE(157)
			::haxe::Log_obj::trace(HX_CSTRING("anim not found!"),hx::SourceInfo(HX_CSTRING("BMDollSprite.hx"),157,HX_CSTRING("jmSubLibs.decoupledLIB.refactor.BMDollSprite"),HX_CSTRING("playAnim")));
			HX_STACK_LINE(162)
			this->_activeAnim = null();
			HX_STACK_LINE(163)
			this->_hasActiveAnim = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BMDollSprite_obj,playAnim,(void))

Void BMDollSprite_obj::update( ){
{
		HX_STACK_FRAME("jmSubLibs.decoupledLIB.refactor.BMDollSprite","update",0xda22e1b9,"jmSubLibs.decoupledLIB.refactor.BMDollSprite.update","jmSubLibs/decoupledLIB/refactor/BMDollSprite.hx",169,0x8caebb3f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		if ((this->_hasActiveAnim)){
			HX_STACK_LINE(172)
			(this->_activeAnim->curFrame)++;
			HX_STACK_LINE(173)
			if (((this->_activeAnim->curFrame > this->_activeAnim->maxFrame))){
				HX_STACK_LINE(175)
				if (((bool(this->_activeAnim->loop) || bool((false == this->_hasDefaultAnimName))))){
					HX_STACK_LINE(178)
					this->_activeAnim->curFrame = (int)0;
				}
				else{
					HX_STACK_LINE(184)
					int tmpDex = this->getAnimIndex(this->_defaultAnimName);		HX_STACK_VAR(tmpDex,"tmpDex");
					HX_STACK_LINE(185)
					if (((tmpDex >= (int)0))){
						HX_STACK_LINE(187)
						this->_activeAnim = this->_anims->__get(tmpDex).StaticCast< ::jmSubLibs::decoupledLIB::doll::DollAnimData >();
						HX_STACK_LINE(188)
						this->_activeAnim->curFrame = (int)0;
					}
					else{
						HX_STACK_LINE(192)
						::haxe::Log_obj::trace(HX_CSTRING("Error: ANIM NOT FOUND!"),hx::SourceInfo(HX_CSTRING("BMDollSprite.hx"),192,HX_CSTRING("jmSubLibs.decoupledLIB.refactor.BMDollSprite"),HX_CSTRING("update")));
					}
				}
			}
			HX_STACK_LINE(198)
			this->_curFrame = this->_activeAnim->anim->__get(this->_activeAnim->curFrame);
		}
		else{
			HX_STACK_LINE(204)
			(this->_curFrame)++;
			HX_STACK_LINE(205)
			if (((this->_curFrame > this->_maxFrameIndex))){
				HX_STACK_LINE(207)
				this->_curFrame = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BMDollSprite_obj,update,(void))

Void BMDollSprite_obj::renderTo( ::openfl::display::BitmapData inDrawOnBM){
{
		HX_STACK_FRAME("jmSubLibs.decoupledLIB.refactor.BMDollSprite","renderTo",0x0ccb5e21,"jmSubLibs.decoupledLIB.refactor.BMDollSprite.renderTo","jmSubLibs/decoupledLIB/refactor/BMDollSprite.hx",216,0x8caebb3f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inDrawOnBM,"inDrawOnBM")
		HX_STACK_LINE(219)
		if (((false == this->_hasStrip))){
			HX_STACK_LINE(219)
			return null();
		}
		HX_STACK_LINE(222)
		this->_pt->x = this->ix;
		HX_STACK_LINE(223)
		this->_pt->y = this->iy;
		HX_STACK_LINE(224)
		this->_rec->x = ((this->_dir->ix * this->_curFrame) * this->_wid);
		HX_STACK_LINE(225)
		this->_rec->y = ((this->_dir->iy * this->_curFrame) * this->_hig);
		HX_STACK_LINE(226)
		inDrawOnBM->copyPixels(this->_strip,this->_rec,this->_pt,null(),null(),true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BMDollSprite_obj,renderTo,(void))

Void BMDollSprite_obj::loadFrames( Array< ::Dynamic > inFrames,bool inDisposeWhenDoneLoading){
{
		HX_STACK_FRAME("jmSubLibs.decoupledLIB.refactor.BMDollSprite","loadFrames",0xd49dd21c,"jmSubLibs.decoupledLIB.refactor.BMDollSprite.loadFrames","jmSubLibs/decoupledLIB/refactor/BMDollSprite.hx",233,0x8caebb3f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inFrames,"inFrames")
		HX_STACK_ARG(inDisposeWhenDoneLoading,"inDisposeWhenDoneLoading")
		HX_STACK_LINE(234)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(237)
		if (((inFrames == null()))){
			HX_STACK_LINE(239)
			HX_STACK_DO_THROW(HX_CSTRING("your frames are null!"));
			HX_STACK_LINE(240)
			return null();
		}
		HX_STACK_LINE(244)
		if (((inFrames->length <= (int)0))){
			HX_STACK_LINE(246)
			HX_STACK_DO_THROW(HX_CSTRING("you have no frames in here!"));
			HX_STACK_LINE(247)
			return null();
		}
		HX_STACK_LINE(250)
		this->_numFrames = inFrames->length;
		HX_STACK_LINE(251)
		this->_maxFrameIndex = (this->_numFrames - (int)1);
		HX_STACK_LINE(253)
		::openfl::display::BitmapData bm;		HX_STACK_VAR(bm,"bm");
		HX_STACK_LINE(257)
		int _g = inFrames->__unsafe_get((int)0)->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(257)
		this->_wid = _g;
		HX_STACK_LINE(258)
		int _g1 = inFrames->__unsafe_get((int)0)->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(258)
		this->_hig = _g1;
		HX_STACK_LINE(263)
		{
			HX_STACK_LINE(263)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(263)
			int _g2 = this->_numFrames;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(263)
			while((true)){
				HX_STACK_LINE(263)
				if ((!(((_g11 < _g2))))){
					HX_STACK_LINE(263)
					break;
				}
				HX_STACK_LINE(263)
				int i1 = (_g11)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(265)
				::openfl::display::BitmapData _g21 = inFrames->__unsafe_get(i1);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(265)
				bm = _g21;
				HX_STACK_LINE(266)
				int _g3 = bm->get_width();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(266)
				if (((_g3 != this->_wid))){
					HX_STACK_LINE(269)
					::haxe::Log_obj::trace(HX_CSTRING("ERROR!!!! Frame wid not uniform amongst frames."),hx::SourceInfo(HX_CSTRING("BMDollSprite.hx"),269,HX_CSTRING("jmSubLibs.decoupledLIB.refactor.BMDollSprite"),HX_CSTRING("loadFrames")));
				}
				else{
					HX_STACK_LINE(271)
					int _g4 = bm->get_height();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(271)
					if (((_g4 != this->_hig))){
						HX_STACK_LINE(274)
						::haxe::Log_obj::trace(HX_CSTRING("ERROR!!!! Frame wid not uniform amongst frames."),hx::SourceInfo(HX_CSTRING("BMDollSprite.hx"),274,HX_CSTRING("jmSubLibs.decoupledLIB.refactor.BMDollSprite"),HX_CSTRING("loadFrames")));
					}
				}
			}
		}
		HX_STACK_LINE(281)
		this->_dir->ix = (int)0;
		HX_STACK_LINE(282)
		this->_dir->iy = (int)1;
		HX_STACK_LINE(286)
		::openfl::geom::Rectangle copyRec = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(copyRec,"copyRec");
		HX_STACK_LINE(287)
		copyRec->width = this->_wid;
		HX_STACK_LINE(288)
		copyRec->height = this->_hig;
		HX_STACK_LINE(289)
		copyRec->x = (int)0;
		HX_STACK_LINE(290)
		copyRec->y = (int)0;
		HX_STACK_LINE(291)
		int stripWid = this->_wid;		HX_STACK_VAR(stripWid,"stripWid");
		HX_STACK_LINE(292)
		int stripHig = (this->_hig * this->_numFrames);		HX_STACK_VAR(stripHig,"stripHig");
		HX_STACK_LINE(295)
		::openfl::display::BitmapData _g5 = ::openfl::display::BitmapData_obj::__new(stripWid,stripHig,true,(int)-65536,null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(295)
		this->_strip = _g5;
		HX_STACK_LINE(297)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(299)
		{
			HX_STACK_LINE(299)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(299)
			int _g2 = this->_numFrames;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(299)
			while((true)){
				HX_STACK_LINE(299)
				if ((!(((_g11 < _g2))))){
					HX_STACK_LINE(299)
					break;
				}
				HX_STACK_LINE(299)
				int b1 = (_g11)++;		HX_STACK_VAR(b1,"b1");
				HX_STACK_LINE(301)
				::openfl::display::BitmapData _g6 = inFrames->__unsafe_get(b1);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(301)
				bm = _g6;
				HX_STACK_LINE(302)
				this->_pt->x = ((b1 * this->_dir->ix) * this->_wid);
				HX_STACK_LINE(303)
				this->_pt->y = ((b1 * this->_dir->iy) * this->_hig);
				HX_STACK_LINE(304)
				this->_strip->copyPixels(bm,copyRec,this->_pt,null(),null(),false);
				HX_STACK_LINE(308)
				if ((inDisposeWhenDoneLoading)){
					HX_STACK_LINE(310)
					bm->dispose();
				}
			}
		}
		HX_STACK_LINE(317)
		this->_rec->width = this->_wid;
		HX_STACK_LINE(318)
		this->_rec->height = this->_hig;
		HX_STACK_LINE(319)
		this->_hasStrip = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BMDollSprite_obj,loadFrames,(void))

Void BMDollSprite_obj::loadStrip( ::openfl::display::BitmapData inStrip,int inNumberOfFrames){
{
		HX_STACK_FRAME("jmSubLibs.decoupledLIB.refactor.BMDollSprite","loadStrip",0xf712b122,"jmSubLibs.decoupledLIB.refactor.BMDollSprite.loadStrip","jmSubLibs/decoupledLIB/refactor/BMDollSprite.hx",327,0x8caebb3f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inStrip,"inStrip")
		HX_STACK_ARG(inNumberOfFrames,"inNumberOfFrames")
		HX_STACK_LINE(330)
		this->_numFrames = inNumberOfFrames;
		HX_STACK_LINE(331)
		this->_maxFrameIndex = (inNumberOfFrames - (int)1);
		HX_STACK_LINE(333)
		Float frameAllocationErrorCheck = (int)0;		HX_STACK_VAR(frameAllocationErrorCheck,"frameAllocationErrorCheck");
		HX_STACK_LINE(338)
		int stripWid = inStrip->get_width();		HX_STACK_VAR(stripWid,"stripWid");
		HX_STACK_LINE(339)
		int stripHig = inStrip->get_height();		HX_STACK_VAR(stripHig,"stripHig");
		HX_STACK_LINE(340)
		if (((stripWid < stripHig))){
			HX_STACK_LINE(342)
			this->_dir->ix = (int)0;
			HX_STACK_LINE(343)
			this->_dir->iy = (int)1;
			HX_STACK_LINE(344)
			this->_wid = stripWid;
			HX_STACK_LINE(345)
			int _g = ::Math_obj::floor((Float(stripHig) / Float(this->_numFrames)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(345)
			this->_hig = _g;
			HX_STACK_LINE(347)
			frameAllocationErrorCheck = (this->_hig * this->_numFrames);
			HX_STACK_LINE(348)
			if (((frameAllocationErrorCheck != stripHig))){
				HX_STACK_LINE(351)
				::haxe::Log_obj::trace(HX_CSTRING("ERROR::doesn't go in evenly! VER / HIG"),hx::SourceInfo(HX_CSTRING("BMDollSprite.hx"),351,HX_CSTRING("jmSubLibs.decoupledLIB.refactor.BMDollSprite"),HX_CSTRING("loadStrip")));
			}
		}
		else{
			HX_STACK_LINE(355)
			if (((stripHig < stripWid))){
				HX_STACK_LINE(357)
				this->_dir->ix = (int)1;
				HX_STACK_LINE(358)
				this->_dir->iy = (int)0;
				HX_STACK_LINE(359)
				int _g1 = ::Math_obj::floor((Float(stripWid) / Float(this->_numFrames)));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(359)
				this->_wid = _g1;
				HX_STACK_LINE(360)
				this->_hig = stripHig;
				HX_STACK_LINE(362)
				frameAllocationErrorCheck = (this->_wid * this->_numFrames);
				HX_STACK_LINE(363)
				if (((frameAllocationErrorCheck != stripWid))){
					HX_STACK_LINE(366)
					::haxe::Log_obj::trace(HX_CSTRING("ERROR::doesn't go in evenly! HOR / WID"),hx::SourceInfo(HX_CSTRING("BMDollSprite.hx"),366,HX_CSTRING("jmSubLibs.decoupledLIB.refactor.BMDollSprite"),HX_CSTRING("loadStrip")));
				}
			}
			else{
				HX_STACK_LINE(373)
				this->_wid = stripWid;
				HX_STACK_LINE(374)
				this->_hig = stripHig;
				HX_STACK_LINE(375)
				this->_dir->ix = (int)0;
				HX_STACK_LINE(376)
				this->_dir->iy = (int)0;
				HX_STACK_LINE(377)
				this->_numFrames = (int)1;
			}
		}
		HX_STACK_LINE(380)
		this->_maxFrameIndex = (this->_numFrames - (int)1);
		HX_STACK_LINE(383)
		this->_strip = inStrip;
		HX_STACK_LINE(384)
		this->_rec->width = this->_wid;
		HX_STACK_LINE(385)
		this->_rec->height = this->_hig;
		HX_STACK_LINE(388)
		this->_hasStrip = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BMDollSprite_obj,loadStrip,(void))

::openfl::geom::Point BMDollSprite_obj::ZZ;


BMDollSprite_obj::BMDollSprite_obj()
{
}

void BMDollSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BMDollSprite);
	HX_MARK_MEMBER_NAME(_strip,"_strip");
	HX_MARK_MEMBER_NAME(_hasStrip,"_hasStrip");
	HX_MARK_MEMBER_NAME(_rec,"_rec");
	HX_MARK_MEMBER_NAME(ix,"ix");
	HX_MARK_MEMBER_NAME(iy,"iy");
	HX_MARK_MEMBER_NAME(_pt,"_pt");
	HX_MARK_MEMBER_NAME(_numFrames,"_numFrames");
	HX_MARK_MEMBER_NAME(_maxFrameIndex,"_maxFrameIndex");
	HX_MARK_MEMBER_NAME(_dir,"_dir");
	HX_MARK_MEMBER_NAME(_curFrame,"_curFrame");
	HX_MARK_MEMBER_NAME(_wid,"_wid");
	HX_MARK_MEMBER_NAME(_hig,"_hig");
	HX_MARK_MEMBER_NAME(_anims,"_anims");
	HX_MARK_MEMBER_NAME(_activeAnim,"_activeAnim");
	HX_MARK_MEMBER_NAME(_hasActiveAnim,"_hasActiveAnim");
	HX_MARK_MEMBER_NAME(_defaultAnimName,"_defaultAnimName");
	HX_MARK_MEMBER_NAME(_hasDefaultAnimName,"_hasDefaultAnimName");
	HX_MARK_END_CLASS();
}

void BMDollSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_strip,"_strip");
	HX_VISIT_MEMBER_NAME(_hasStrip,"_hasStrip");
	HX_VISIT_MEMBER_NAME(_rec,"_rec");
	HX_VISIT_MEMBER_NAME(ix,"ix");
	HX_VISIT_MEMBER_NAME(iy,"iy");
	HX_VISIT_MEMBER_NAME(_pt,"_pt");
	HX_VISIT_MEMBER_NAME(_numFrames,"_numFrames");
	HX_VISIT_MEMBER_NAME(_maxFrameIndex,"_maxFrameIndex");
	HX_VISIT_MEMBER_NAME(_dir,"_dir");
	HX_VISIT_MEMBER_NAME(_curFrame,"_curFrame");
	HX_VISIT_MEMBER_NAME(_wid,"_wid");
	HX_VISIT_MEMBER_NAME(_hig,"_hig");
	HX_VISIT_MEMBER_NAME(_anims,"_anims");
	HX_VISIT_MEMBER_NAME(_activeAnim,"_activeAnim");
	HX_VISIT_MEMBER_NAME(_hasActiveAnim,"_hasActiveAnim");
	HX_VISIT_MEMBER_NAME(_defaultAnimName,"_defaultAnimName");
	HX_VISIT_MEMBER_NAME(_hasDefaultAnimName,"_hasDefaultAnimName");
}

Dynamic BMDollSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ZZ") ) { return ZZ; }
		if (HX_FIELD_EQ(inName,"ix") ) { return ix; }
		if (HX_FIELD_EQ(inName,"iy") ) { return iy; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_pt") ) { return _pt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_rec") ) { return _rec; }
		if (HX_FIELD_EQ(inName,"_dir") ) { return _dir; }
		if (HX_FIELD_EQ(inName,"_wid") ) { return _wid; }
		if (HX_FIELD_EQ(inName,"_hig") ) { return _hig; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_strip") ) { return _strip; }
		if (HX_FIELD_EQ(inName,"_anims") ) { return _anims; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addAnim") ) { return addAnim_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playAnim") ) { return playAnim_dyn(); }
		if (HX_FIELD_EQ(inName,"renderTo") ) { return renderTo_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_hasStrip") ) { return _hasStrip; }
		if (HX_FIELD_EQ(inName,"_curFrame") ) { return _curFrame; }
		if (HX_FIELD_EQ(inName,"loadStrip") ) { return loadStrip_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_numFrames") ) { return _numFrames; }
		if (HX_FIELD_EQ(inName,"loadFrames") ) { return loadFrames_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_activeAnim") ) { return _activeAnim; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getAnimIndex") ) { return getAnimIndex_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_maxFrameIndex") ) { return _maxFrameIndex; }
		if (HX_FIELD_EQ(inName,"_hasActiveAnim") ) { return _hasActiveAnim; }
		if (HX_FIELD_EQ(inName,"setDefaultAnim") ) { return setDefaultAnim_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_defaultAnimName") ) { return _defaultAnimName; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_hasDefaultAnimName") ) { return _hasDefaultAnimName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BMDollSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ZZ") ) { ZZ=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ix") ) { ix=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iy") ) { iy=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_pt") ) { _pt=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_rec") ) { _rec=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dir") ) { _dir=inValue.Cast< ::jmSubLibs::freeBinaryLIB::structs::geom::primitives::IntPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_wid") ) { _wid=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hig") ) { _hig=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_strip") ) { _strip=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_anims") ) { _anims=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_hasStrip") ) { _hasStrip=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curFrame") ) { _curFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_numFrames") ) { _numFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_activeAnim") ) { _activeAnim=inValue.Cast< ::jmSubLibs::decoupledLIB::doll::DollAnimData >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_maxFrameIndex") ) { _maxFrameIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hasActiveAnim") ) { _hasActiveAnim=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_defaultAnimName") ) { _defaultAnimName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_hasDefaultAnimName") ) { _hasDefaultAnimName=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BMDollSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_strip"));
	outFields->push(HX_CSTRING("_hasStrip"));
	outFields->push(HX_CSTRING("_rec"));
	outFields->push(HX_CSTRING("ix"));
	outFields->push(HX_CSTRING("iy"));
	outFields->push(HX_CSTRING("_pt"));
	outFields->push(HX_CSTRING("_numFrames"));
	outFields->push(HX_CSTRING("_maxFrameIndex"));
	outFields->push(HX_CSTRING("_dir"));
	outFields->push(HX_CSTRING("_curFrame"));
	outFields->push(HX_CSTRING("_wid"));
	outFields->push(HX_CSTRING("_hig"));
	outFields->push(HX_CSTRING("_anims"));
	outFields->push(HX_CSTRING("_activeAnim"));
	outFields->push(HX_CSTRING("_hasActiveAnim"));
	outFields->push(HX_CSTRING("_defaultAnimName"));
	outFields->push(HX_CSTRING("_hasDefaultAnimName"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ZZ"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(BMDollSprite_obj,_strip),HX_CSTRING("_strip")},
	{hx::fsBool,(int)offsetof(BMDollSprite_obj,_hasStrip),HX_CSTRING("_hasStrip")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(BMDollSprite_obj,_rec),HX_CSTRING("_rec")},
	{hx::fsInt,(int)offsetof(BMDollSprite_obj,ix),HX_CSTRING("ix")},
	{hx::fsInt,(int)offsetof(BMDollSprite_obj,iy),HX_CSTRING("iy")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(BMDollSprite_obj,_pt),HX_CSTRING("_pt")},
	{hx::fsInt,(int)offsetof(BMDollSprite_obj,_numFrames),HX_CSTRING("_numFrames")},
	{hx::fsInt,(int)offsetof(BMDollSprite_obj,_maxFrameIndex),HX_CSTRING("_maxFrameIndex")},
	{hx::fsObject /*::jmSubLibs::freeBinaryLIB::structs::geom::primitives::IntPoint*/ ,(int)offsetof(BMDollSprite_obj,_dir),HX_CSTRING("_dir")},
	{hx::fsInt,(int)offsetof(BMDollSprite_obj,_curFrame),HX_CSTRING("_curFrame")},
	{hx::fsInt,(int)offsetof(BMDollSprite_obj,_wid),HX_CSTRING("_wid")},
	{hx::fsInt,(int)offsetof(BMDollSprite_obj,_hig),HX_CSTRING("_hig")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(BMDollSprite_obj,_anims),HX_CSTRING("_anims")},
	{hx::fsObject /*::jmSubLibs::decoupledLIB::doll::DollAnimData*/ ,(int)offsetof(BMDollSprite_obj,_activeAnim),HX_CSTRING("_activeAnim")},
	{hx::fsBool,(int)offsetof(BMDollSprite_obj,_hasActiveAnim),HX_CSTRING("_hasActiveAnim")},
	{hx::fsString,(int)offsetof(BMDollSprite_obj,_defaultAnimName),HX_CSTRING("_defaultAnimName")},
	{hx::fsBool,(int)offsetof(BMDollSprite_obj,_hasDefaultAnimName),HX_CSTRING("_hasDefaultAnimName")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_strip"),
	HX_CSTRING("_hasStrip"),
	HX_CSTRING("_rec"),
	HX_CSTRING("ix"),
	HX_CSTRING("iy"),
	HX_CSTRING("_pt"),
	HX_CSTRING("_numFrames"),
	HX_CSTRING("_maxFrameIndex"),
	HX_CSTRING("_dir"),
	HX_CSTRING("_curFrame"),
	HX_CSTRING("_wid"),
	HX_CSTRING("_hig"),
	HX_CSTRING("_anims"),
	HX_CSTRING("_activeAnim"),
	HX_CSTRING("_hasActiveAnim"),
	HX_CSTRING("_defaultAnimName"),
	HX_CSTRING("_hasDefaultAnimName"),
	HX_CSTRING("setDefaultAnim"),
	HX_CSTRING("addAnim"),
	HX_CSTRING("getAnimIndex"),
	HX_CSTRING("playAnim"),
	HX_CSTRING("update"),
	HX_CSTRING("renderTo"),
	HX_CSTRING("loadFrames"),
	HX_CSTRING("loadStrip"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BMDollSprite_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BMDollSprite_obj::ZZ,"ZZ");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BMDollSprite_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BMDollSprite_obj::ZZ,"ZZ");
};

#endif

Class BMDollSprite_obj::__mClass;

void BMDollSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("jmSubLibs.decoupledLIB.refactor.BMDollSprite"), hx::TCanCast< BMDollSprite_obj> ,sStaticFields,sMemberFields,
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

void BMDollSprite_obj::__boot()
{
	ZZ= ::jmSubLibs::decoupledLIB::consts::openfl::geom::PointZZ_obj::ZZ;
}

} // end namespace jmSubLibs
} // end namespace decoupledLIB
} // end namespace refactor
