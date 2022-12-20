#ifndef INCLUDED_GlitchShaderA
#define INCLUDED_GlitchShaderA

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
HX_DECLARE_CLASS0(GlitchShaderA)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)



class HXCPP_CLASS_ATTRIBUTES GlitchShaderA_obj : public  ::flixel::graphics::tile::FlxGraphicsShader_obj
{
	public:
		typedef  ::flixel::graphics::tile::FlxGraphicsShader_obj super;
		typedef GlitchShaderA_obj OBJ_;
		GlitchShaderA_obj();

	public:
		enum { _hx_ClassId = 0x5786437b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="GlitchShaderA")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"GlitchShaderA"); }
		static ::hx::ObjectPtr< GlitchShaderA_obj > __new();
		static ::hx::ObjectPtr< GlitchShaderA_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GlitchShaderA_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GlitchShaderA",e7,fd,ce,0e); }

		Float amount;
		Float get_amount();
		::Dynamic get_amount_dyn();

		Float set_amount(Float val);
		::Dynamic set_amount_dyn();

		 ::openfl::display::ShaderParameter_Float iResolution;
		 ::openfl::display::ShaderParameter_Float GlitchAmount;
		 ::openfl::display::ShaderParameter_Float iTime;
};


#endif /* INCLUDED_GlitchShaderA */ 
