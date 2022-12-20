#ifndef INCLUDED_flixel_addons_plugin_screengrab_FlxScreenGrab
#define INCLUDED_flixel_addons_plugin_screengrab_FlxScreenGrab

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS4(flixel,addons,plugin,screengrab,FlxScreenGrab)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{
namespace addons{
namespace plugin{
namespace screengrab{


class HXCPP_CLASS_ATTRIBUTES FlxScreenGrab_obj : public  ::flixel::FlxBasic_obj
{
	public:
		typedef  ::flixel::FlxBasic_obj super;
		typedef FlxScreenGrab_obj OBJ_;
		FlxScreenGrab_obj();

	public:
		enum { _hx_ClassId = 0x7162c0c8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.plugin.screengrab.FlxScreenGrab")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.plugin.screengrab.FlxScreenGrab"); }
		static ::hx::ObjectPtr< FlxScreenGrab_obj > __new();
		static ::hx::ObjectPtr< FlxScreenGrab_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxScreenGrab_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxScreenGrab",4a,38,fa,ea); }

		static void __boot();
		static  ::openfl::display::Bitmap screenshot;
		static ::Array< int > _hotkeys;
		static bool _autoSave;
		static bool _autoHideMouse;
		static  ::openfl::geom::Rectangle _region;
		static void defineCaptureRegion(int X,int Y,int Width,int Height);
		static ::Dynamic defineCaptureRegion_dyn();

		static void clearCaptureRegion();
		static ::Dynamic clearCaptureRegion_dyn();

		static void defineHotKeys(::Array< int > Keys,::hx::Null< bool >  SaveToFile,::hx::Null< bool >  HideMouse);
		static ::Dynamic defineHotKeys_dyn();

		static void clearHotKeys();
		static ::Dynamic clearHotKeys_dyn();

		static  ::openfl::display::Bitmap grab( ::openfl::geom::Rectangle CaptureRegion, ::Dynamic SaveToFile,::hx::Null< bool >  HideMouse);
		static ::Dynamic grab_dyn();

		static ::String fixFilename(::String Filename);
		static ::Dynamic fixFilename_dyn();

		static void save(::String Filename);
		static ::Dynamic save_dyn();

		void update(Float elapsed);

		void destroy();

};

} // end namespace flixel
} // end namespace addons
} // end namespace plugin
} // end namespace screengrab

#endif /* INCLUDED_flixel_addons_plugin_screengrab_FlxScreenGrab */ 
