#include <hxcpp.h>

#ifndef INCLUDED_ManifestResources
#include <ManifestResources.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__assets_fonts_pixel_otf
#include <__ASSET__OPENFL__assets_fonts_pixel_otf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__assets_fonts_vcr_ttf
#include <__ASSET__OPENFL__assets_fonts_vcr_ttf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__flixel_fonts_monsterrat_ttf
#include <__ASSET__OPENFL__flixel_fonts_monsterrat_ttf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__flixel_fonts_nokiafc22_ttf
#include <__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__mods__fatalerrorsweep_fonts_fnf1_ttf
#include <__ASSET__OPENFL__mods__fatalerrorsweep_fonts_fnf1_ttf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__mods__fatalerrorsweep_fonts_fnf_ttf
#include <__ASSET__OPENFL__mods__fatalerrorsweep_fonts_fnf_ttf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__mods__fatalerrorsweep_fonts_sonic2_ttf
#include <__ASSET__OPENFL__mods__fatalerrorsweep_fonts_sonic2_ttf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__mods__fatalerrorsweep_fonts_sonic_hud_ttf
#include <__ASSET__OPENFL__mods__fatalerrorsweep_fonts_sonic_hud_ttf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__mods__fatalerrorsweep_fonts_sonic_text_ttf
#include <__ASSET__OPENFL__mods__fatalerrorsweep_fonts_sonic_text_ttf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__mods_red_fonts_vcr_ttf
#include <__ASSET__OPENFL__mods_red_fonts_vcr_ttf.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6b0b98c45b3017d4_36_init,"ManifestResources","init",0xc8e10c68,"ManifestResources.init","ManifestResources.hx",36,0xf77aa668)

void ManifestResources_obj::__construct() { }

Dynamic ManifestResources_obj::__CreateEmpty() { return new ManifestResources_obj; }

void *ManifestResources_obj::_hx_vtable = 0;

Dynamic ManifestResources_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ManifestResources_obj > _hx_result = new ManifestResources_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ManifestResources_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f5bd976;
}

::Array< ::Dynamic> ManifestResources_obj::preloadLibraries;

::Array< ::String > ManifestResources_obj::preloadLibraryNames;

::String ManifestResources_obj::rootPath;

void ManifestResources_obj::init( ::Dynamic config){
            	HX_STACKFRAME(&_hx_pos_6b0b98c45b3017d4_36_init)
HXLINE(  38)		::ManifestResources_obj::preloadLibraries = ::Array_obj< ::Dynamic>::__new();
HXLINE(  39)		::ManifestResources_obj::preloadLibraryNames = ::Array_obj< ::String >::__new();
HXLINE(  41)		::ManifestResources_obj::rootPath = null();
HXLINE(  43)		bool _hx_tmp;
HXDLIN(  43)		if (::hx::IsNotNull( config )) {
HXLINE(  43)			_hx_tmp = ::Reflect_obj::hasField(config,HX_("rootPath",e7,b8,88,e1));
            		}
            		else {
HXLINE(  43)			_hx_tmp = false;
            		}
HXDLIN(  43)		if (_hx_tmp) {
HXLINE(  45)			::ManifestResources_obj::rootPath = ( (::String)(::Reflect_obj::field(config,HX_("rootPath",e7,b8,88,e1))) );
            		}
HXLINE(  49)		if (::hx::IsNull( ::ManifestResources_obj::rootPath )) {
HXLINE(  58)			::ManifestResources_obj::rootPath = HX_("./",41,28,00,00);
            		}
HXLINE(  64)		::openfl::text::Font_obj::registerFont(::hx::ClassOf< ::__ASSET__OPENFL__mods__fatalerrorsweep_fonts_fnf_ttf >());
HXLINE(  65)		::openfl::text::Font_obj::registerFont(::hx::ClassOf< ::__ASSET__OPENFL__mods__fatalerrorsweep_fonts_fnf1_ttf >());
HXLINE(  66)		::openfl::text::Font_obj::registerFont(::hx::ClassOf< ::__ASSET__OPENFL__mods__fatalerrorsweep_fonts_sonic_hud_ttf >());
HXLINE(  67)		::openfl::text::Font_obj::registerFont(::hx::ClassOf< ::__ASSET__OPENFL__mods__fatalerrorsweep_fonts_sonic_text_ttf >());
HXLINE(  68)		::openfl::text::Font_obj::registerFont(::hx::ClassOf< ::__ASSET__OPENFL__mods__fatalerrorsweep_fonts_sonic2_ttf >());
HXLINE(  69)		::openfl::text::Font_obj::registerFont(::hx::ClassOf< ::__ASSET__OPENFL__mods_red_fonts_vcr_ttf >());
HXLINE(  70)		::openfl::text::Font_obj::registerFont(::hx::ClassOf< ::__ASSET__OPENFL__assets_fonts_pixel_otf >());
HXLINE(  71)		::openfl::text::Font_obj::registerFont(::hx::ClassOf< ::__ASSET__OPENFL__assets_fonts_vcr_ttf >());
HXLINE(  72)		::openfl::text::Font_obj::registerFont(::hx::ClassOf< ::__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf >());
HXLINE(  73)		::openfl::text::Font_obj::registerFont(::hx::ClassOf< ::__ASSET__OPENFL__flixel_fonts_monsterrat_ttf >());
HXLINE(  77)		 ::Dynamic data;
HXDLIN(  77)		 ::Dynamic manifest;
HXDLIN(  77)		 ::Dynamic bundle;
HXLINE(  90)		{
HXLINE(  90)			::String v = (::ManifestResources_obj::rootPath + HX_("manifest/videos.json",1e,f9,65,67));
HXDLIN(  90)			::lime::utils::Assets_obj::libraryPaths->set(HX_("videos",98,d7,95,e5),v);
            		}
HXLINE(  91)		{
HXLINE(  91)			::String v1 = (::ManifestResources_obj::rootPath + HX_("manifest/songs.json",38,27,75,ee));
HXDLIN(  91)			::lime::utils::Assets_obj::libraryPaths->set(HX_("songs",fe,36,c7,80),v1);
            		}
HXLINE(  92)		{
HXLINE(  92)			::String v2 = (::ManifestResources_obj::rootPath + HX_("manifest/shared.json",f1,c2,0a,f4));
HXDLIN(  92)			::lime::utils::Assets_obj::libraryPaths->set(HX_("shared",a5,5e,2b,1d),v2);
            		}
HXLINE(  93)		{
HXLINE(  93)			::String v3 = (::ManifestResources_obj::rootPath + HX_("manifest/week2.json",78,50,8e,58));
HXDLIN(  93)			::lime::utils::Assets_obj::libraryPaths->set(HX_("week2",be,95,be,c7),v3);
            		}
HXLINE(  94)		{
HXLINE(  94)			::String v4 = (::ManifestResources_obj::rootPath + HX_("manifest/week3.json",d7,ac,e9,be));
HXDLIN(  94)			::lime::utils::Assets_obj::libraryPaths->set(HX_("week3",bf,95,be,c7),v4);
            		}
HXLINE(  95)		{
HXLINE(  95)			::String v5 = (::ManifestResources_obj::rootPath + HX_("manifest/week4.json",36,09,45,25));
HXDLIN(  95)			::lime::utils::Assets_obj::libraryPaths->set(HX_("week4",c0,95,be,c7),v5);
            		}
HXLINE(  96)		{
HXLINE(  96)			::String v6 = (::ManifestResources_obj::rootPath + HX_("manifest/week5.json",95,65,a0,8b));
HXDLIN(  96)			::lime::utils::Assets_obj::libraryPaths->set(HX_("week5",c1,95,be,c7),v6);
            		}
HXLINE(  97)		{
HXLINE(  97)			::String v7 = (::ManifestResources_obj::rootPath + HX_("manifest/week6.json",f4,c1,fb,f1));
HXDLIN(  97)			::lime::utils::Assets_obj::libraryPaths->set(HX_("week6",c2,95,be,c7),v7);
            		}
HXLINE(  98)		{
HXLINE(  98)			::String v8 = (::ManifestResources_obj::rootPath + HX_("manifest/week7.json",53,1e,57,58));
HXDLIN(  98)			::lime::utils::Assets_obj::libraryPaths->set(HX_("week7",c3,95,be,c7),v8);
            		}
HXLINE(  99)		{
HXLINE(  99)			::String v9 = (::ManifestResources_obj::rootPath + HX_("manifest/default.json",95,ea,cc,42));
HXDLIN(  99)			::lime::utils::Assets_obj::libraryPaths->set(HX_("default",c1,d8,c3,9b),v9);
            		}
HXLINE(  77)		 ::lime::utils::AssetLibrary library = ::lime::utils::Assets_obj::getLibrary(HX_("videos",98,d7,95,e5));
HXLINE( 103)		if (::hx::IsNotNull( library )) {
HXLINE( 103)			::ManifestResources_obj::preloadLibraries->push(library);
            		}
            		else {
HXLINE( 104)			::ManifestResources_obj::preloadLibraryNames->push(HX_("videos",98,d7,95,e5));
            		}
HXLINE( 105)		library = ::lime::utils::Assets_obj::getLibrary(HX_("songs",fe,36,c7,80));
HXLINE( 106)		if (::hx::IsNotNull( library )) {
HXLINE( 106)			::ManifestResources_obj::preloadLibraries->push(library);
            		}
            		else {
HXLINE( 107)			::ManifestResources_obj::preloadLibraryNames->push(HX_("songs",fe,36,c7,80));
            		}
HXLINE( 108)		library = ::lime::utils::Assets_obj::getLibrary(HX_("shared",a5,5e,2b,1d));
HXLINE( 109)		if (::hx::IsNotNull( library )) {
HXLINE( 109)			::ManifestResources_obj::preloadLibraries->push(library);
            		}
            		else {
HXLINE( 110)			::ManifestResources_obj::preloadLibraryNames->push(HX_("shared",a5,5e,2b,1d));
            		}
HXLINE( 111)		library = ::lime::utils::Assets_obj::getLibrary(HX_("week2",be,95,be,c7));
HXLINE( 112)		if (::hx::IsNotNull( library )) {
HXLINE( 112)			::ManifestResources_obj::preloadLibraries->push(library);
            		}
            		else {
HXLINE( 113)			::ManifestResources_obj::preloadLibraryNames->push(HX_("week2",be,95,be,c7));
            		}
HXLINE( 114)		library = ::lime::utils::Assets_obj::getLibrary(HX_("week3",bf,95,be,c7));
HXLINE( 115)		if (::hx::IsNotNull( library )) {
HXLINE( 115)			::ManifestResources_obj::preloadLibraries->push(library);
            		}
            		else {
HXLINE( 116)			::ManifestResources_obj::preloadLibraryNames->push(HX_("week3",bf,95,be,c7));
            		}
HXLINE( 117)		library = ::lime::utils::Assets_obj::getLibrary(HX_("week4",c0,95,be,c7));
HXLINE( 118)		if (::hx::IsNotNull( library )) {
HXLINE( 118)			::ManifestResources_obj::preloadLibraries->push(library);
            		}
            		else {
HXLINE( 119)			::ManifestResources_obj::preloadLibraryNames->push(HX_("week4",c0,95,be,c7));
            		}
HXLINE( 120)		library = ::lime::utils::Assets_obj::getLibrary(HX_("week5",c1,95,be,c7));
HXLINE( 121)		if (::hx::IsNotNull( library )) {
HXLINE( 121)			::ManifestResources_obj::preloadLibraries->push(library);
            		}
            		else {
HXLINE( 122)			::ManifestResources_obj::preloadLibraryNames->push(HX_("week5",c1,95,be,c7));
            		}
HXLINE( 123)		library = ::lime::utils::Assets_obj::getLibrary(HX_("week6",c2,95,be,c7));
HXLINE( 124)		if (::hx::IsNotNull( library )) {
HXLINE( 124)			::ManifestResources_obj::preloadLibraries->push(library);
            		}
            		else {
HXLINE( 125)			::ManifestResources_obj::preloadLibraryNames->push(HX_("week6",c2,95,be,c7));
            		}
HXLINE( 126)		library = ::lime::utils::Assets_obj::getLibrary(HX_("week7",c3,95,be,c7));
HXLINE( 127)		if (::hx::IsNotNull( library )) {
HXLINE( 127)			::ManifestResources_obj::preloadLibraries->push(library);
            		}
            		else {
HXLINE( 128)			::ManifestResources_obj::preloadLibraryNames->push(HX_("week7",c3,95,be,c7));
            		}
HXLINE( 129)		library = ::lime::utils::Assets_obj::getLibrary(HX_("default",c1,d8,c3,9b));
HXLINE( 130)		if (::hx::IsNotNull( library )) {
HXLINE( 130)			::ManifestResources_obj::preloadLibraries->push(library);
            		}
            		else {
HXLINE( 131)			::ManifestResources_obj::preloadLibraryNames->push(HX_("default",c1,d8,c3,9b));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ManifestResources_obj,init,(void))


ManifestResources_obj::ManifestResources_obj()
{
}

bool ManifestResources_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { outValue = ( rootPath ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"preloadLibraries") ) { outValue = ( preloadLibraries ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"preloadLibraryNames") ) { outValue = ( preloadLibraryNames ); return true; }
	}
	return false;
}

bool ManifestResources_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { rootPath=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"preloadLibraries") ) { preloadLibraries=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"preloadLibraryNames") ) { preloadLibraryNames=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ManifestResources_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ManifestResources_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &ManifestResources_obj::preloadLibraries,HX_("preloadLibraries",10,27,df,e6)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &ManifestResources_obj::preloadLibraryNames,HX_("preloadLibraryNames",36,48,52,5c)},
	{::hx::fsString,(void *) &ManifestResources_obj::rootPath,HX_("rootPath",e7,b8,88,e1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ManifestResources_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ManifestResources_obj::preloadLibraries,"preloadLibraries");
	HX_MARK_MEMBER_NAME(ManifestResources_obj::preloadLibraryNames,"preloadLibraryNames");
	HX_MARK_MEMBER_NAME(ManifestResources_obj::rootPath,"rootPath");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ManifestResources_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ManifestResources_obj::preloadLibraries,"preloadLibraries");
	HX_VISIT_MEMBER_NAME(ManifestResources_obj::preloadLibraryNames,"preloadLibraryNames");
	HX_VISIT_MEMBER_NAME(ManifestResources_obj::rootPath,"rootPath");
};

#endif

::hx::Class ManifestResources_obj::__mClass;

static ::String ManifestResources_obj_sStaticFields[] = {
	HX_("preloadLibraries",10,27,df,e6),
	HX_("preloadLibraryNames",36,48,52,5c),
	HX_("rootPath",e7,b8,88,e1),
	HX_("init",10,3b,bb,45),
	::String(null())
};

void ManifestResources_obj::__register()
{
	ManifestResources_obj _hx_dummy;
	ManifestResources_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ManifestResources",16,0e,30,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ManifestResources_obj::__GetStatic;
	__mClass->mSetStaticField = &ManifestResources_obj::__SetStatic;
	__mClass->mMarkFunc = ManifestResources_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ManifestResources_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ManifestResources_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ManifestResources_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ManifestResources_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ManifestResources_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
