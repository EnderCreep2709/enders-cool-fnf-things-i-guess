#include <hxcpp.h>

#ifndef INCLUDED_ManifestResources
#include <ManifestResources.h>
#endif
#ifndef INCLUDED___ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf
#include <__ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cd3dbc8acc3c87b8_1790_new,"__ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf","new",0xd7584392,"__ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf.new","ManifestResources.hx",1790,0xf77aa668)

void __ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cd3dbc8acc3c87b8_1790_new)
HXDLIN(1790)		this->_hx___fontPath = (::ManifestResources_obj::rootPath + HX_("mods/#FATALERRORSWEEP/fonts/sonic2.ttf",15,92,a0,72));
HXDLIN(1790)		this->name = HX_("Needlemouse Slant Regular",a0,59,bf,bb);
HXDLIN(1790)		super::__construct(null());
            	}

Dynamic __ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj::__CreateEmpty() { return new __ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj; }

void *__ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj::_hx_vtable = 0;

Dynamic __ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< __ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj > _hx_result = new __ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool __ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x40cee131) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x40cee131;
	} else {
		return inClassId==(int)0x73ddf6fc;
	}
}


::hx::ObjectPtr< __ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj > __ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj::__new() {
	::hx::ObjectPtr< __ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj > __this = new __ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< __ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj > __ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj::__alloc(::hx::Ctx *_hx_ctx) {
	__ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj *__this = (__ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(__ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj), true, "__ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf"));
	*(void **)__this = __ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

__ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj::__ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *__ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *__ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj_sStaticStorageInfo = 0;
#endif

::hx::Class __ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj::__mClass;

void __ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj::__register()
{
	__ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj _hx_dummy;
	__ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("__ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf",a0,d2,ae,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< __ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = __ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = __ASSET__mods__fatalerrorsweep_fonts_sonic2_ttf_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

