#ifndef INCLUDED_jmSubLibs_decoupledLIB_doll_DollAnimData
#define INCLUDED_jmSubLibs_decoupledLIB_doll_DollAnimData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(jmSubLibs,decoupledLIB,doll,DollAnimData)
namespace jmSubLibs{
namespace decoupledLIB{
namespace doll{


class HXCPP_CLASS_ATTRIBUTES  DollAnimData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DollAnimData_obj OBJ_;
		DollAnimData_obj();
		Void __construct(::String inName,Array< int > inAnim,bool inLoop);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DollAnimData_obj > __new(::String inName,Array< int > inAnim,bool inLoop);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DollAnimData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DollAnimData"); }

		::String name;
		Array< int > anim;
		int curFrame;
		int maxFrame;
		bool loop;
};

} // end namespace jmSubLibs
} // end namespace decoupledLIB
} // end namespace doll

#endif /* INCLUDED_jmSubLibs_decoupledLIB_doll_DollAnimData */ 
