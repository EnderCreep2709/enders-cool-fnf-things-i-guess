#ifndef INCLUDED_flixel_addons_util_PNGEncoder
#define INCLUDED_flixel_addons_util_PNGEncoder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,util,PNGEncoder)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace flixel{
namespace addons{
namespace util{


class HXCPP_CLASS_ATTRIBUTES PNGEncoder_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PNGEncoder_obj OBJ_;
		PNGEncoder_obj();

	public:
		enum { _hx_ClassId = 0x2d1b6324 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.addons.util.PNGEncoder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.addons.util.PNGEncoder"); }

		inline static ::hx::ObjectPtr< PNGEncoder_obj > __new() {
			::hx::ObjectPtr< PNGEncoder_obj > __this = new PNGEncoder_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PNGEncoder_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PNGEncoder_obj *__this = (PNGEncoder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PNGEncoder_obj), false, "flixel.addons.util.PNGEncoder"));
			*(void **)__this = PNGEncoder_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PNGEncoder_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PNGEncoder",13,24,b2,b4); }

		static ::Array< int > crcTable;
		static bool crcTableComputed;
		static  ::openfl::utils::ByteArrayData encode( ::openfl::display::BitmapData img);
		static ::Dynamic encode_dyn();

		static void writeChunk( ::openfl::utils::ByteArrayData png,int type, ::openfl::utils::ByteArrayData data);
		static ::Dynamic writeChunk_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace util

#endif /* INCLUDED_flixel_addons_util_PNGEncoder */ 
