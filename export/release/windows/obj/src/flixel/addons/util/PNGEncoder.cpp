#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_util_PNGEncoder
#include <flixel/addons/util/PNGEncoder.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_27d2e2f923554749_58_encode,"flixel.addons.util.PNGEncoder","encode",0x8eb70a2e,"flixel.addons.util.PNGEncoder.encode","flixel/addons/util/PNGEncoder.hx",58,0x833654a7)
HX_LOCAL_STACK_FRAME(_hx_pos_27d2e2f923554749_104_writeChunk,"flixel.addons.util.PNGEncoder","writeChunk",0x4461c526,"flixel.addons.util.PNGEncoder.writeChunk","flixel/addons/util/PNGEncoder.hx",104,0x833654a7)
namespace flixel{
namespace addons{
namespace util{

void PNGEncoder_obj::__construct() { }

Dynamic PNGEncoder_obj::__CreateEmpty() { return new PNGEncoder_obj; }

void *PNGEncoder_obj::_hx_vtable = 0;

Dynamic PNGEncoder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PNGEncoder_obj > _hx_result = new PNGEncoder_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PNGEncoder_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2d1b6324;
}

::Array< int > PNGEncoder_obj::crcTable;

bool PNGEncoder_obj::crcTableComputed;

 ::openfl::utils::ByteArrayData PNGEncoder_obj::encode( ::openfl::display::BitmapData img){
            	HX_GC_STACKFRAME(&_hx_pos_27d2e2f923554749_58_encode)
HXLINE(  60)		 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN(  60)		 ::openfl::utils::ByteArrayData png = this1;
HXLINE(  62)		png->writeUnsignedInt((int)-1991225785);
HXLINE(  63)		png->writeUnsignedInt(218765834);
HXLINE(  65)		 ::openfl::utils::ByteArrayData this2 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN(  65)		 ::openfl::utils::ByteArrayData IHDR = this2;
HXLINE(  66)		IHDR->writeInt(img->width);
HXLINE(  67)		IHDR->writeInt(img->height);
HXLINE(  68)		IHDR->writeUnsignedInt(134610944);
HXLINE(  69)		IHDR->writeByte(0);
HXLINE(  70)		::flixel::addons::util::PNGEncoder_obj::writeChunk(png,(int)1229472850,IHDR);
HXLINE(  72)		 ::openfl::utils::ByteArrayData this3 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN(  72)		 ::openfl::utils::ByteArrayData IDAT = this3;
HXLINE(  73)		{
HXLINE(  73)			int _g = 0;
HXDLIN(  73)			int _g1 = img->height;
HXDLIN(  73)			while((_g < _g1)){
HXLINE(  73)				_g = (_g + 1);
HXDLIN(  73)				int i = (_g - 1);
HXLINE(  76)				IDAT->writeByte(0);
HXLINE(  77)				int p;
HXLINE(  78)				if (!(img->transparent)) {
HXLINE(  80)					int _g = 0;
HXDLIN(  80)					int _g1 = img->width;
HXDLIN(  80)					while((_g < _g1)){
HXLINE(  80)						_g = (_g + 1);
HXDLIN(  80)						int j = (_g - 1);
HXLINE(  82)						p = img->getPixel(j,i);
HXLINE(  83)						IDAT->writeUnsignedInt((((p & 16777215) << 8) | 255));
            					}
            				}
            				else {
HXLINE(  88)					int _g = 0;
HXDLIN(  88)					int _g1 = img->width;
HXDLIN(  88)					while((_g < _g1)){
HXLINE(  88)						_g = (_g + 1);
HXDLIN(  88)						int j = (_g - 1);
HXLINE(  90)						p = img->getPixel32(j,i);
HXLINE(  91)						IDAT->writeUnsignedInt((((p & 16777215) << 8) | ::hx::UShr(p,24)));
            					}
            				}
            			}
            		}
HXLINE(  95)		{
HXLINE(  95)			 ::Dynamic algorithm = null();
HXDLIN(  95)			IDAT->compress(algorithm);
            		}
HXLINE(  96)		::flixel::addons::util::PNGEncoder_obj::writeChunk(png,(int)1229209940,IDAT);
HXLINE(  98)		::flixel::addons::util::PNGEncoder_obj::writeChunk(png,(int)1229278788,null());
HXLINE( 100)		return png;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PNGEncoder_obj,encode,return )

void PNGEncoder_obj::writeChunk( ::openfl::utils::ByteArrayData png,int type, ::openfl::utils::ByteArrayData data){
            	HX_STACKFRAME(&_hx_pos_27d2e2f923554749_104_writeChunk)
HXLINE( 105)		int c;
HXLINE( 107)		if (!(::flixel::addons::util::PNGEncoder_obj::crcTableComputed)) {
HXLINE( 109)			::flixel::addons::util::PNGEncoder_obj::crcTableComputed = true;
HXLINE( 110)			::flixel::addons::util::PNGEncoder_obj::crcTable = ::Array_obj< int >::__new(0);
HXLINE( 112)			{
HXLINE( 112)				int _g = 0;
HXDLIN( 112)				while((_g < 256)){
HXLINE( 112)					_g = (_g + 1);
HXDLIN( 112)					int n = (_g - 1);
HXLINE( 114)					c = n;
HXLINE( 115)					{
HXLINE( 117)						if (((c & 1) != 0)) {
HXLINE( 119)							c = (-306674912 ^ ::hx::UShr(c,1));
            						}
            						else {
HXLINE( 123)							c = ::hx::UShr(c,1);
            						}
HXLINE( 117)						if (((c & 1) != 0)) {
HXLINE( 119)							c = (-306674912 ^ ::hx::UShr(c,1));
            						}
            						else {
HXLINE( 123)							c = ::hx::UShr(c,1);
            						}
HXLINE( 117)						if (((c & 1) != 0)) {
HXLINE( 119)							c = (-306674912 ^ ::hx::UShr(c,1));
            						}
            						else {
HXLINE( 123)							c = ::hx::UShr(c,1);
            						}
HXLINE( 117)						if (((c & 1) != 0)) {
HXLINE( 119)							c = (-306674912 ^ ::hx::UShr(c,1));
            						}
            						else {
HXLINE( 123)							c = ::hx::UShr(c,1);
            						}
HXLINE( 117)						if (((c & 1) != 0)) {
HXLINE( 119)							c = (-306674912 ^ ::hx::UShr(c,1));
            						}
            						else {
HXLINE( 123)							c = ::hx::UShr(c,1);
            						}
HXLINE( 117)						if (((c & 1) != 0)) {
HXLINE( 119)							c = (-306674912 ^ ::hx::UShr(c,1));
            						}
            						else {
HXLINE( 123)							c = ::hx::UShr(c,1);
            						}
HXLINE( 117)						if (((c & 1) != 0)) {
HXLINE( 119)							c = (-306674912 ^ ::hx::UShr(c,1));
            						}
            						else {
HXLINE( 123)							c = ::hx::UShr(c,1);
            						}
HXLINE( 117)						if (((c & 1) != 0)) {
HXLINE( 119)							c = (-306674912 ^ ::hx::UShr(c,1));
            						}
            						else {
HXLINE( 123)							c = ::hx::UShr(c,1);
            						}
            					}
HXLINE( 126)					::flixel::addons::util::PNGEncoder_obj::crcTable[n] = c;
            				}
            			}
            		}
HXLINE( 129)		int len = 0;
HXLINE( 130)		if (::hx::IsNotNull( data )) {
HXLINE( 132)			len = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(data);
            		}
HXLINE( 134)		png->writeUnsignedInt(len);
HXLINE( 135)		int p = png->position;
HXLINE( 136)		png->writeUnsignedInt(type);
HXLINE( 137)		if (::hx::IsNotNull( data )) {
HXLINE( 139)			png->writeBytes(data,0,0);
            		}
HXLINE( 141)		int e = png->position;
HXLINE( 142)		png->position = p;
HXLINE( 143)		c = -1;
HXLINE( 144)		{
HXLINE( 144)			int _g = 0;
HXDLIN( 144)			int _g1 = (e - p);
HXDLIN( 144)			while((_g < _g1)){
HXLINE( 144)				_g = (_g + 1);
HXDLIN( 144)				int i = (_g - 1);
HXLINE( 146)				c = (::flixel::addons::util::PNGEncoder_obj::crcTable->__get(((c ^ png->readUnsignedByte()) & 255)) ^ ::hx::UShr(c,8));
            			}
            		}
HXLINE( 148)		c = (c ^ -1);
HXLINE( 149)		png->position = e;
HXLINE( 150)		png->writeUnsignedInt(c);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(PNGEncoder_obj,writeChunk,(void))


PNGEncoder_obj::PNGEncoder_obj()
{
}

bool PNGEncoder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"crcTable") ) { outValue = ( crcTable ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeChunk") ) { outValue = writeChunk_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"crcTableComputed") ) { outValue = ( crcTableComputed ); return true; }
	}
	return false;
}

bool PNGEncoder_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"crcTable") ) { crcTable=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"crcTableComputed") ) { crcTableComputed=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PNGEncoder_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo PNGEncoder_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(void *) &PNGEncoder_obj::crcTable,HX_("crcTable",9a,e4,76,d6)},
	{::hx::fsBool,(void *) &PNGEncoder_obj::crcTableComputed,HX_("crcTableComputed",c7,0b,ac,82)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void PNGEncoder_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PNGEncoder_obj::crcTable,"crcTable");
	HX_MARK_MEMBER_NAME(PNGEncoder_obj::crcTableComputed,"crcTableComputed");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PNGEncoder_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PNGEncoder_obj::crcTable,"crcTable");
	HX_VISIT_MEMBER_NAME(PNGEncoder_obj::crcTableComputed,"crcTableComputed");
};

#endif

::hx::Class PNGEncoder_obj::__mClass;

static ::String PNGEncoder_obj_sStaticFields[] = {
	HX_("crcTable",9a,e4,76,d6),
	HX_("crcTableComputed",c7,0b,ac,82),
	HX_("encode",16,f2,e3,f9),
	HX_("writeChunk",0e,c1,84,da),
	::String(null())
};

void PNGEncoder_obj::__register()
{
	PNGEncoder_obj _hx_dummy;
	PNGEncoder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.util.PNGEncoder",56,35,fb,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PNGEncoder_obj::__GetStatic;
	__mClass->mSetStaticField = &PNGEncoder_obj::__SetStatic;
	__mClass->mMarkFunc = PNGEncoder_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PNGEncoder_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PNGEncoder_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PNGEncoder_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PNGEncoder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PNGEncoder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace util
