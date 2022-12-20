#include <hxcpp.h>

#ifndef INCLUDED_GlitchShaderB
#include <GlitchShaderB.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3f37bec27e386f47_67_new,"GlitchShaderB","new",0xa243b2da,"GlitchShaderB.new","GlitchShader.hx",67,0x9ee975e4)
static const Float _hx_array_data_0ecefde8_1[] = {
	(Float)0,
};
static const Float _hx_array_data_0ecefde8_2[] = {
	(Float)0,
};
static const Float _hx_array_data_0ecefde8_3[] = {
	(Float)0,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_3f37bec27e386f47_71_get_amount,"GlitchShaderB","get_amount",0x9a454267,"GlitchShaderB.get_amount","GlitchShader.hx",71,0x9ee975e4)
HX_LOCAL_STACK_FRAME(_hx_pos_3f37bec27e386f47_75_set_amount,"GlitchShaderB","set_amount",0x9dc2e0db,"GlitchShaderB.set_amount","GlitchShader.hx",75,0x9ee975e4)

void GlitchShaderB_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3f37bec27e386f47_67_new)
HXLINE(  69)		this->amount = ((Float)0);
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n    varying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n    #define PI 3.14159265\n#define TILE_SIZE 16.0\n\nfloat wow;\nuniform float iTime;\nuniform vec2 iResolution;\nuniform float Amount;\n\nvec3 rgb2hsv(vec3 c)\n{\n    vec4 K = vec4(0.0, -1.0 / 3.0, 2.0 / 3.0, -1.0);\n    vec4 p = mix(vec4(c.bg, K.wz), vec4(c.gb, K.xy), step(c.b, c.g));\n    vec4 q = mix(vec4(p.xyw, c.r), vec4(c.r, p.yzx), step(p.x, c.r));\n\n    float d = q.x - min(q.w, q.y);\n    float e = 1.0e-10;\n    return vec3(abs(q.z + (q.w - q.y) / (6.0 * d + e)), d / (q.x + e), q.x);\n}\n\nvec3 hsv2rgb(vec3 c)\n{\n    vec4 K = vec4(1.0, 2.0 / 3.0, 1.0 / 3.0, 3.0);\n    vec3 p = abs(fract(c.xxx + K.xyz) * 6.0 - K.www);\n    return c.z * mix(K.xxx, clamp(p - K.xxx, 0.0, 1.0), c.y);\n}\n\nvec3 posterize(vec3 color, float steps)\n{\n    return floor(color * steps) / steps;\n}\n\nfloat quantize(float n, float steps)\n{\n    return floor(n * steps) / steps;\n}\n\nvec4 downsample(sampler2D sampler, vec2 uv, float pixelSize)\n{\n    return flixel_texture2D(sampler, uv - mod(uv, vec2(pixelSize) / iResolution.xy));\n}\n\nfloat rand(float n)\n{\n    return fract(sin(n) * 43758.5453123);\n}\n\nfloat noise(float p)\n{\n    float fl = floor(p);\n  \tfloat fc = fract(p);\n    return mix(rand(fl), rand(fl + 1.0), fc);\n}\n\nfloat rand(vec2 n) \n{ \n    return fract(sin(dot(n, vec2(12.9898, 4.1414))) * 43758.5453);\n}\n\nfloat noise(vec2 p)\n{\n    vec2 ip = floor(p);\n    vec2 u = fract(p);\n    u = u * u * (3.0 - 2.0 * u);\n\n    float res = mix(\n        mix(rand(ip), rand(ip + vec2(1.0, 0.0)), u.x),\n        mix(rand(ip + vec2(0.0,1.0)), rand(ip + vec2(1.0,1.0)), u.x), u.y);\n    return res * res;\n}\n\nvec3 edge(sampler2D sampler, vec2 uv, float sampleSize)\n{\n    float dx = sampleSize / iResolution.x;\n    float dy = sampleSize / iResolution.y;\n    return (\n    mix(downsample(sampler, uv - vec2(dx, 0.0), sampleSize), downsample(sampler, uv + vec2(dx, 0.0), sampleSize), mod(uv.x, dx) / dx) +\n    mix(downsample(sampler, uv - vec2(0.0, dy), sampleSize), downsample(sampler, uv + vec2(0.0, dy), sampleSize), mod(uv.y, dy) / dy)    \n    ).rgb / 2.0 - flixel_texture2D(sampler, uv).rgb;\n}\n\nvec4 distort(sampler2D sampler, vec2 uv, float edgeSize)\n{\n    vec2 pixel = vec2(1.0) / iResolution.xy;\n    vec3 field = rgb2hsv(edge(sampler, uv, edgeSize));\n    vec2 distort = pixel * sin((field.rb) * PI * 2.0);\n    float shiftx = noise(vec2(quantize(uv.y + 31.5, iResolution.y / TILE_SIZE) * iTime, fract(iTime) * 300.0));\n    float shifty = noise(vec2(quantize(uv.x + 11.5, iResolution.x / TILE_SIZE) * iTime, fract(iTime) * 100.0));\n    vec4 col = flixel_texture2D(sampler, uv + (distort + (pixel - pixel / 2.0) * vec2(shiftx, shifty) * (50.0 + 100.0 * Amount)) * Amount);\n    vec3 rgb = col.rgb;\n    vec3 hsv = rgb2hsv(rgb);\n    // hsv.y = mod(hsv.y + shifty * pow(Amount, 5.0) * 0.25, 1.0);\n    return vec4(posterize(hsv2rgb(hsv), floor(mix(256.0, pow(1.0 - hsv.z - 0.5, 2.0) * 64.0 * shiftx + 4.0, 1.0 - pow(1.0 - Amount, 5.0)))), col.a);\n}\n\nvoid main()\n{\n\tvec2 uv =  openfl_TextureCoordv;\n    if(Amount <= 0){\n        gl_FragColor = flixel_texture2D(bitmap, uv);\n    }else{\n        wow = clamp(mod(noise(iTime + uv.y), 1.0), 0.0, 1.0) * 2.0 - 1.0;    \n        vec4 finalColor;\n        finalColor += distort(bitmap, uv, 8.0);\n        gl_FragColor = finalColor;\n    }\n}\n\n    ",c8,42,9e,dc);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE( 188)		super::__construct();
HXLINE( 189)		this->Amount->value = ::Array_obj< Float >::fromData( _hx_array_data_0ecefde8_1,1);
HXLINE( 190)		this->iTime->value = ::Array_obj< Float >::fromData( _hx_array_data_0ecefde8_2,1);
HXLINE( 191)		this->iResolution->value = ::Array_obj< Float >::fromData( _hx_array_data_0ecefde8_3,2);
HXLINE(  67)		this->_hx___isGenerated = true;
HXDLIN(  67)		this->_hx___initGL();
            	}

Dynamic GlitchShaderB_obj::__CreateEmpty() { return new GlitchShaderB_obj; }

void *GlitchShaderB_obj::_hx_vtable = 0;

Dynamic GlitchShaderB_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GlitchShaderB_obj > _hx_result = new GlitchShaderB_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GlitchShaderB_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x5786437c || inClassId==(int)0x78d8d737;
	}
}

Float GlitchShaderB_obj::get_amount(){
            	HX_STACKFRAME(&_hx_pos_3f37bec27e386f47_71_get_amount)
HXDLIN(  71)		return this->Amount->value->__get(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(GlitchShaderB_obj,get_amount,return )

Float GlitchShaderB_obj::set_amount(Float val){
            	HX_STACKFRAME(&_hx_pos_3f37bec27e386f47_75_set_amount)
HXDLIN(  75)		return (this->Amount->value[0] = val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GlitchShaderB_obj,set_amount,return )


::hx::ObjectPtr< GlitchShaderB_obj > GlitchShaderB_obj::__new() {
	::hx::ObjectPtr< GlitchShaderB_obj > __this = new GlitchShaderB_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GlitchShaderB_obj > GlitchShaderB_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GlitchShaderB_obj *__this = (GlitchShaderB_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GlitchShaderB_obj), true, "GlitchShaderB"));
	*(void **)__this = GlitchShaderB_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GlitchShaderB_obj::GlitchShaderB_obj()
{
}

void GlitchShaderB_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GlitchShaderB);
	HX_MARK_MEMBER_NAME(amount,"amount");
	HX_MARK_MEMBER_NAME(iTime,"iTime");
	HX_MARK_MEMBER_NAME(iResolution,"iResolution");
	HX_MARK_MEMBER_NAME(Amount,"Amount");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GlitchShaderB_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(amount,"amount");
	HX_VISIT_MEMBER_NAME(iTime,"iTime");
	HX_VISIT_MEMBER_NAME(iResolution,"iResolution");
	HX_VISIT_MEMBER_NAME(Amount,"Amount");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GlitchShaderB_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { return ::hx::Val( iTime ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"amount") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_amount() : amount ); }
		if (HX_FIELD_EQ(inName,"Amount") ) { return ::hx::Val( Amount ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_amount") ) { return ::hx::Val( get_amount_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_amount") ) { return ::hx::Val( set_amount_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iResolution") ) { return ::hx::Val( iResolution ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GlitchShaderB_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { iTime=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"amount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_amount(inValue.Cast< Float >()) );amount=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Amount") ) { Amount=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iResolution") ) { iResolution=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GlitchShaderB_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("amount",d8,11,03,d5));
	outFields->push(HX_("iTime",16,e1,e8,ac));
	outFields->push(HX_("iResolution",f5,36,34,3f));
	outFields->push(HX_("Amount",f8,85,97,09));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GlitchShaderB_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(GlitchShaderB_obj,amount),HX_("amount",d8,11,03,d5)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(GlitchShaderB_obj,iTime),HX_("iTime",16,e1,e8,ac)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(GlitchShaderB_obj,iResolution),HX_("iResolution",f5,36,34,3f)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(GlitchShaderB_obj,Amount),HX_("Amount",f8,85,97,09)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GlitchShaderB_obj_sStaticStorageInfo = 0;
#endif

static ::String GlitchShaderB_obj_sMemberFields[] = {
	HX_("amount",d8,11,03,d5),
	HX_("get_amount",a1,81,8a,c5),
	HX_("set_amount",15,20,08,c9),
	HX_("iTime",16,e1,e8,ac),
	HX_("iResolution",f5,36,34,3f),
	HX_("Amount",f8,85,97,09),
	::String(null()) };

::hx::Class GlitchShaderB_obj::__mClass;

void GlitchShaderB_obj::__register()
{
	GlitchShaderB_obj _hx_dummy;
	GlitchShaderB_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GlitchShaderB",e8,fd,ce,0e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GlitchShaderB_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GlitchShaderB_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlitchShaderB_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlitchShaderB_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

