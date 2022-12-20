#ifndef INCLUDED_Fuck
#define INCLUDED_Fuck

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
HX_DECLARE_CLASS0(Fuck)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)



class HXCPP_CLASS_ATTRIBUTES Fuck_obj : public  ::flixel::graphics::tile::FlxGraphicsShader_obj
{
	public:
		typedef  ::flixel::graphics::tile::FlxGraphicsShader_obj super;
		typedef Fuck_obj OBJ_;
		Fuck_obj();

	public:
		enum { _hx_ClassId = 0x02f103fb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Fuck")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Fuck"); }
		static ::hx::ObjectPtr< Fuck_obj > __new();
		static ::hx::ObjectPtr< Fuck_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Fuck_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Fuck",d7,0d,9e,2e); }

		Float amount;
		Float speed;
		Float get_amount();
		::Dynamic get_amount_dyn();

		Float set_amount(Float val);
		::Dynamic set_amount_dyn();

		Float get_speed();
		::Dynamic get_speed_dyn();

		Float set_speed(Float val);
		::Dynamic set_speed_dyn();

		 ::openfl::display::ShaderParameter_Float AMT;
		 ::openfl::display::ShaderParameter_Float SPEED;
		 ::openfl::display::ShaderParameter_Float iTime;
};


#endif /* INCLUDED_Fuck */ 
