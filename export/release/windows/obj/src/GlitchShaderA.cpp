#include <hxcpp.h>

#ifndef INCLUDED_GlitchShaderA
#include <GlitchShaderA.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_163a6584075ff730_6_new,"GlitchShaderA","new",0x0edd1e59,"GlitchShaderA.new","GlitchShader.hx",6,0x9ee975e4)
static const Float _hx_array_data_0ecefde7_1[] = {
	(Float)0,
};
static const Float _hx_array_data_0ecefde7_2[] = {
	(Float)0,(Float)0,
};
static const Float _hx_array_data_0ecefde7_3[] = {
	(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_163a6584075ff730_12_get_amount,"GlitchShaderA","get_amount",0x5885d4c8,"GlitchShaderA.get_amount","GlitchShader.hx",12,0x9ee975e4)
HX_LOCAL_STACK_FRAME(_hx_pos_163a6584075ff730_17_set_amount,"GlitchShaderA","set_amount",0x5c03733c,"GlitchShaderA.set_amount","GlitchShader.hx",17,0x9ee975e4)

void GlitchShaderA_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_163a6584075ff730_6_new)
HXLINE(   8)		this->amount = ((Float)0);
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n        varying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n        uniform vec2 iResolution;\n        uniform float GlitchAmount;\n        uniform float iTime;\n\n        vec4 posterize(vec4 color, float numColors)\n        {\n            return floor(color * numColors - 0.5) / numColors;\n        }\n\n        vec2 quantize(vec2 v, float steps)\n        {\n            return floor(v * steps) / steps;\n        }\n\n        float dist(vec2 a, vec2 b)\n        {\n            return sqrt(pow(b.x - a.x, 2.0) + pow(b.y - a.y, 2.0));\n        }\n\n        void main()\n        {   \n            vec2 uv = openfl_TextureCoordv;\n            float amount = pow(GlitchAmount, 2.0);\n            vec2 pixel = 1.0 / iResolution.xy;    \n            vec4 color = flixel_texture2D(bitmap, uv);\n            float t = mod(mod(iTime, amount * 100.0 * (amount - 0.5)) * 109.0, 1.0);\n            vec4 postColor = posterize(color, 16.0);\n            vec4 a = posterize(flixel_texture2D(bitmap, quantize(uv, 64.0 * t) + pixel * (postColor.rb - vec2(.5)) * 100.0), 5.0).rbga;\n            vec4 b = posterize(flixel_texture2D(bitmap, quantize(uv, 32.0 - t) + pixel * (postColor.rg - vec2(.5)) * 1000.0), 4.0).gbra;\n            vec4 c = posterize(flixel_texture2D(bitmap, quantize(uv, 16.0 + t) + pixel * (postColor.rg - vec2(.5)) * 20.0), 16.0).bgra;\n            gl_FragColor = mix(\n                            flixel_texture2D(bitmap, \n                                    uv + amount * (quantize((a * t - b + c - (t + t / 2.0) / 10.0).rg, 16.0) - vec2(.5)) * pixel * 100.0),\n                            (a + b + c) / 3.0,\n                            (0.5 - (dot(color, postColor) - 1.5)) * amount);\n        }\n    ",60,de,41,36);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE(  59)		super::__construct();
HXLINE(  60)		this->GlitchAmount->value = ::Array_obj< Float >::fromData( _hx_array_data_0ecefde7_1,1);
HXLINE(  61)		this->iResolution->value = ::Array_obj< Float >::fromData( _hx_array_data_0ecefde7_2,2);
HXLINE(  62)		this->iTime->value = ::Array_obj< Float >::fromData( _hx_array_data_0ecefde7_3,1);
HXLINE(   6)		this->_hx___isGenerated = true;
HXDLIN(   6)		this->_hx___initGL();
            	}

Dynamic GlitchShaderA_obj::__CreateEmpty() { return new GlitchShaderA_obj; }

void *GlitchShaderA_obj::_hx_vtable = 0;

Dynamic GlitchShaderA_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GlitchShaderA_obj > _hx_result = new GlitchShaderA_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GlitchShaderA_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x5786437b || inClassId==(int)0x78d8d737;
	}
}

Float GlitchShaderA_obj::get_amount(){
            	HX_STACKFRAME(&_hx_pos_163a6584075ff730_12_get_amount)
HXDLIN(  12)		return this->GlitchAmount->value->__get(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlitchShaderA_obj,get_amount,return )

Float GlitchShaderA_obj::set_amount(Float val){
            	HX_STACKFRAME(&_hx_pos_163a6584075ff730_17_set_amount)
HXDLIN(  17)		return (this->GlitchAmount->value[0] = val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlitchShaderA_obj,set_amount,return )


::hx::ObjectPtr< GlitchShaderA_obj > GlitchShaderA_obj::__new() {
	::hx::ObjectPtr< GlitchShaderA_obj > __this = new GlitchShaderA_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GlitchShaderA_obj > GlitchShaderA_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GlitchShaderA_obj *__this = (GlitchShaderA_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GlitchShaderA_obj), true, "GlitchShaderA"));
	*(void **)__this = GlitchShaderA_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GlitchShaderA_obj::GlitchShaderA_obj()
{
}

void GlitchShaderA_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GlitchShaderA);
	HX_MARK_MEMBER_NAME(amount,"amount");
	HX_MARK_MEMBER_NAME(iResolution,"iResolution");
	HX_MARK_MEMBER_NAME(GlitchAmount,"GlitchAmount");
	HX_MARK_MEMBER_NAME(iTime,"iTime");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GlitchShaderA_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(amount,"amount");
	HX_VISIT_MEMBER_NAME(iResolution,"iResolution");
	HX_VISIT_MEMBER_NAME(GlitchAmount,"GlitchAmount");
	HX_VISIT_MEMBER_NAME(iTime,"iTime");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GlitchShaderA_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { return ::hx::Val( iTime ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"amount") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_amount() : amount ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_amount") ) { return ::hx::Val( get_amount_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_amount") ) { return ::hx::Val( set_amount_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iResolution") ) { return ::hx::Val( iResolution ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"GlitchAmount") ) { return ::hx::Val( GlitchAmount ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GlitchShaderA_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { iTime=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"amount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_amount(inValue.Cast< Float >()) );amount=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iResolution") ) { iResolution=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"GlitchAmount") ) { GlitchAmount=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GlitchShaderA_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("amount",d8,11,03,d5));
	outFields->push(HX_("iResolution",f5,36,34,3f));
	outFields->push(HX_("GlitchAmount",cd,4b,ad,1a));
	outFields->push(HX_("iTime",16,e1,e8,ac));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GlitchShaderA_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(GlitchShaderA_obj,amount),HX_("amount",d8,11,03,d5)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(GlitchShaderA_obj,iResolution),HX_("iResolution",f5,36,34,3f)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(GlitchShaderA_obj,GlitchAmount),HX_("GlitchAmount",cd,4b,ad,1a)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(GlitchShaderA_obj,iTime),HX_("iTime",16,e1,e8,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GlitchShaderA_obj_sStaticStorageInfo = 0;
#endif

static ::String GlitchShaderA_obj_sMemberFields[] = {
	HX_("amount",d8,11,03,d5),
	HX_("get_amount",a1,81,8a,c5),
	HX_("set_amount",15,20,08,c9),
	HX_("iResolution",f5,36,34,3f),
	HX_("GlitchAmount",cd,4b,ad,1a),
	HX_("iTime",16,e1,e8,ac),
	::String(null()) };

::hx::Class GlitchShaderA_obj::__mClass;

void GlitchShaderA_obj::__register()
{
	GlitchShaderA_obj _hx_dummy;
	GlitchShaderA_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GlitchShaderA",e7,fd,ce,0e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GlitchShaderA_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GlitchShaderA_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlitchShaderA_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlitchShaderA_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

