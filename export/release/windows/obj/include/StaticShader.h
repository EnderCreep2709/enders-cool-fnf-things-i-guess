#ifndef INCLUDED_StaticShader
#define INCLUDED_StaticShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
HX_DECLARE_CLASS0(StaticShader)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderInput_openfl_display_BitmapData)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Bool)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)



class HXCPP_CLASS_ATTRIBUTES StaticShader_obj : public  ::flixel::graphics::tile::FlxGraphicsShader_obj
{
	public:
		typedef  ::flixel::graphics::tile::FlxGraphicsShader_obj super;
		typedef StaticShader_obj OBJ_;
		StaticShader_obj();

	public:
		enum { _hx_ClassId = 0x1ed2ccb7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="StaticShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"StaticShader"); }
		static ::hx::ObjectPtr< StaticShader_obj > __new();
		static ::hx::ObjectPtr< StaticShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StaticShader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StaticShader",93,12,a7,03); }

		 ::openfl::display::ShaderParameter_Float iTime;
		 ::openfl::display::ShaderParameter_Bool vignetteOn;
		 ::openfl::display::ShaderParameter_Bool perspectiveOn;
		 ::openfl::display::ShaderParameter_Bool distortionOn;
		 ::openfl::display::ShaderParameter_Bool scanlinesOn;
		 ::openfl::display::ShaderParameter_Bool vignetteMoving;
		 ::openfl::display::ShaderParameter_Bool enabled;
		 ::openfl::display::ShaderInput_openfl_display_BitmapData noiseTex;
		 ::openfl::display::ShaderParameter_Float glitchModifier;
		 ::openfl::display::ShaderParameter_Float iResolution;
};


#endif /* INCLUDED_StaticShader */ 
