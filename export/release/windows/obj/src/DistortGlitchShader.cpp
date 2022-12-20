#include <hxcpp.h>

#ifndef INCLUDED_DistortGlitchShader
#include <DistortGlitchShader.h>
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
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0020d2f48354edf8_179_new,"DistortGlitchShader","new",0xec3cf737,"DistortGlitchShader.new","DistortGlitchShader.hx",179,0xf7e01c19)

void DistortGlitchShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0020d2f48354edf8_179_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\nvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\nuniform float iTime;\nuniform bool enabled;\nuniform vec2 iResolution;\nuniform float alpha;\n\nprecision highp float;\n                  \n          varying vec2 vUv;\n          \n          float random(vec2 c){\n            return fract(sin(dot(c.xy ,vec2(12.9898,78.233))) * 43758.5453);\n          }\n\n          //\n          // Description : Array and textureless GLSL 2D/3D/4D simplex\n          //               noise functions.\n          //      Author : Ian McEwan, Ashima Arts.\n          //  Maintainer : ijm\n          //     Lastmod : 20110822 (ijm)\n          //     License : Copyright (C) 2011 Ashima Arts. All rights reserved.\n          //               Distributed under the MIT License. See LICENSE file.\n          //               https://github.com/ashima/webgl-noise\n          //\n\n          vec3 mod289(vec3 x) {\n            return x - floor(x * (1.0 / 289.0)) * 289.0;\n          }\n\n          vec4 mod289(vec4 x) {\n            return x - floor(x * (1.0 / 289.0)) * 289.0;\n          }\n\n          vec4 permute(vec4 x) {\n               return mod289(((x*34.0)+1.0)*x);\n          }\n\n          vec4 taylorInvSqrt(vec4 r)\n          {\n            return 1.79284291400159 - 0.85373472095314 * r;\n          }\n\n          float snoise3(vec3 v)\n            {\n            const vec2  C = vec2(1.0/6.0, 1.0/3.0) ;\n            const vec4  D = vec4(0.0, 0.5, 1.0, 2.0);\n\n          // First corner\n            vec3 i  = floor(v + dot(v, C.yyy) );\n            vec3 x0 =   v - i + dot(i, C.xxx) ;\n\n          // Other corners\n            vec3 g = step(x0.yzx, x0.xyz);\n            vec3 l = 1.0 - g;\n            vec3 i1 = min( g.xyz, l.zxy );\n            vec3 i2 = max( g.xyz, l.zxy );\n\n            //   x0 = x0 - 0.0 + 0.0 * C.xxx;\n            //   x1 = x0 - i1  + 1.0 * C.xxx;\n            //   x2 = x0 - i2  + 2.0 * C.xxx;\n            //   x3 = x0 - 1.0 + 3.0 * C.xxx;\n            vec3 x1 = x0 - i1 + C.xxx;\n            vec3 x2 = x0 - i2 + C.yyy; // 2.0*C.x = 1/3 = C.y\n            vec3 x3 = x0 - D.yyy;      // -1.0+3.0*C.x = -0.5 = -D.y\n\n          // Permutations\n            i = mod289(i);\n            vec4 p = permute( permute( permute(\n                       i.z + vec4(0.0, i1.z, i2.z, 1.0 ))\n                     + i.y + vec4(0.0, i1.y, i2.y, 1.0 ))\n                     + i.x + vec4(0.0, i1.x, i2.x, 1.0 ));\n\n          // Gradients: 7x7 points over a square, mapped onto an octahedron.\n          // The ring size 17*17 = 289 is close to a multiple of 49 (49*6 = 294)\n            float n_ = 0.142857142857; // 1.0/7.0\n            vec3  ns = n_ * D.wyz - D.xzx;\n\n            vec4 j = p - 49.0 * floor(p * ns.z * ns.z);  //  mod(p,7*7)\n\n            vec4 x_ = floor(j * ns.z);\n            vec4 y_ = floor(j - 7.0 * x_ );    // mod(j,N)\n\n            vec4 x = x_ *ns.x + ns.yyyy;\n            vec4 y = y_ *ns.x + ns.yyyy;\n            vec4 h = 1.0 - abs(x) - abs(y);\n\n            vec4 b0 = vec4( x.xy, y.xy );\n            vec4 b1 = vec4( x.zw, y.zw );\n\n            //vec4 s0 = vec4(lessThan(b0,0.0))*2.0 - 1.0;\n            //vec4 s1 = vec4(lessThan(b1,0.0))*2.0 - 1.0;\n            vec4 s0 = floor(b0)*2.0 + 1.0;\n            vec4 s1 = floor(b1)*2.0 + 1.0;\n            vec4 sh = -step(h, vec4(0.0));\n\n            vec4 a0 = b0.xzyw + s0.xzyw*sh.xxyy ;\n            vec4 a1 = b1.xzyw + s1.xzyw*sh.zzww ;\n\n            vec3 p0 = vec3(a0.xy,h.x);\n            vec3 p1 = vec3(a0.zw,h.y);\n            vec3 p2 = vec3(a1.xy,h.z);\n            vec3 p3 = vec3(a1.zw,h.w);\n\n          //Normalise gradients\n            vec4 norm = taylorInvSqrt(vec4(dot(p0,p0), dot(p1,p1), dot(p2, p2), dot(p3,p3)));\n            p0 *= norm.x;\n            p1 *= norm.y;\n            p2 *= norm.z;\n            p3 *= norm.w;\n\n          // Mix final noise value\n            vec4 m = max(0.6 - vec4(dot(x0,x0), dot(x1,x1), dot(x2,x2), dot(x3,x3)), 0.0);\n            m = m * m;\n            return 42.0 * dot( m*m, vec4( dot(p0,x0), dot(p1,x1),\n                                          dot(p2,x2), dot(p3,x3) ) );\n            }\n                    \n          const float interval = 3.0;\n          \n          void main(void){\n            float strength = smoothstep(interval * 0.5, interval, interval - mod(iTime, interval));\n            vec2 shake = vec2(strength * 8.0 + 0.5) * vec2(\n              random(vec2(iTime)) * 2.0 - 1.0,\n              random(vec2(iTime * 2.0)) * 2.0 - 1.0\n            ) / iResolution;\n          \n            float y = vUv.y * iResolution.y;\n            float rgbWave = (\n                snoise3(vec3(0.0, y * 0.01, iTime * 400.0)) * (2.0 + strength * 32.0)\n                * snoise3(vec3(0.0, y * 0.02, iTime * 200.0)) * (1.0 + strength * 4.0)\n                + step(0.9995, sin(y * 0.005 + iTime * 1.6)) * 12.0\n                + step(0.9999, sin(y * 0.005 + iTime * 2.0)) * -18.0\n              ) / iResolution.x;\n            float rgbDiff = (6.0 + sin(iTime * 500.0 + vUv.y * 40.0) * (20.0 * strength + 1.0)) / iResolution.x;\n            float rgbUvX = vUv.x + rgbWave;\n            float r = texture2D(bitmap, vec2(rgbUvX + rgbDiff, vUv.y) + shake).r;\n            float g = texture2D(bitmap, vec2(rgbUvX, vUv.y) + shake).g;\n            float b = texture2D(bitmap, vec2(rgbUvX - rgbDiff, vUv.y) + shake).b;\n          \n            float whiteNoise = (random(vUv + mod(iTime, 10.0)) * 2.0 - 1.0) * (0.15 + strength * 0.15);\n          \n            float bniTime = floor(iTime * 20.0) * 200.0;\n            float noiseX = step((snoise3(vec3(0.0, vUv.x * 3.0, bniTime)) + 1.0) / 2.0, 0.12 + strength * 0.3);\n            float noiseY = step((snoise3(vec3(0.0, vUv.y * 3.0, bniTime)) + 1.0) / 2.0, 0.12 + strength * 0.3);\n            float bnMask = noiseX * noiseY;\n            float bnUvX = vUv.x + sin(bniTime) * 0.2 + rgbWave;\n            float bnR = texture2D(bitmap, vec2(bnUvX + rgbDiff, vUv.y)).r * bnMask;\n            float bnG = texture2D(bitmap, vec2(bnUvX, vUv.y)).g * bnMask;\n            float bnB = texture2D(bitmap, vec2(bnUvX - rgbDiff, vUv.y)).b * bnMask;\n            vec4 blockNoise = vec4(bnR, bnG, bnB, 1.0);\n          \n            float bniTime2 = floor(iTime * 25.0) * 300.0;\n            float noiseX2 = step((snoise3(vec3(0.0, vUv.x * 2.0, bniTime2)) + 1.0) / 2.0, 0.12 + strength * 0.5);\n            float noiseY2 = step((snoise3(vec3(0.0, vUv.y * 8.0, bniTime2)) + 1.0) / 2.0, 0.12 + strength * 0.3);\n            float bnMask2 = noiseX2 * noiseY2;\n            float bnR2 = texture2D(bitmap, vec2(bnUvX + rgbDiff, vUv.y)).r * bnMask2;\n            float bnG2 = texture2D(bitmap, vec2(bnUvX, vUv.y)).g * bnMask2;\n            float bnB2 = texture2D(bitmap, vec2(bnUvX - rgbDiff, vUv.y)).b * bnMask2;\n            vec4 blockNoise2 = vec4(bnR2, bnG2, bnB2, 1.0);\n          \n            float waveNoise = (sin(vUv.y * 1200.0) + 1.0) / 2.0 * (0.15 + strength * 0.2);\n          \n            gl_FragColor = vec4(r, g, b, 1.0) * (1.0 - bnMask - bnMask2) + (whiteNoise + blockNoise + blockNoise2 - waveNoise);\n          }\n  ",61,fb,46,5d);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE( 180)		super::__construct();
HXLINE(  10)		this->_hx___isGenerated = true;
HXDLIN(  10)		this->_hx___initGL();
            	}

Dynamic DistortGlitchShader_obj::__CreateEmpty() { return new DistortGlitchShader_obj; }

void *DistortGlitchShader_obj::_hx_vtable = 0;

Dynamic DistortGlitchShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DistortGlitchShader_obj > _hx_result = new DistortGlitchShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DistortGlitchShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x62552221 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< DistortGlitchShader_obj > DistortGlitchShader_obj::__new() {
	::hx::ObjectPtr< DistortGlitchShader_obj > __this = new DistortGlitchShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DistortGlitchShader_obj > DistortGlitchShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DistortGlitchShader_obj *__this = (DistortGlitchShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DistortGlitchShader_obj), true, "DistortGlitchShader"));
	*(void **)__this = DistortGlitchShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DistortGlitchShader_obj::DistortGlitchShader_obj()
{
}

void DistortGlitchShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DistortGlitchShader);
	HX_MARK_MEMBER_NAME(iTime,"iTime");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(iResolution,"iResolution");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DistortGlitchShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(iTime,"iTime");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(iResolution,"iResolution");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DistortGlitchShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { return ::hx::Val( iTime ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return ::hx::Val( enabled ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iResolution") ) { return ::hx::Val( iResolution ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DistortGlitchShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { iTime=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iResolution") ) { iResolution=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DistortGlitchShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("iTime",16,e1,e8,ac));
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("iResolution",f5,36,34,3f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DistortGlitchShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(DistortGlitchShader_obj,iTime),HX_("iTime",16,e1,e8,ac)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(DistortGlitchShader_obj,enabled),HX_("enabled",81,04,31,7e)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(DistortGlitchShader_obj,iResolution),HX_("iResolution",f5,36,34,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DistortGlitchShader_obj_sStaticStorageInfo = 0;
#endif

static ::String DistortGlitchShader_obj_sMemberFields[] = {
	HX_("iTime",16,e1,e8,ac),
	HX_("enabled",81,04,31,7e),
	HX_("iResolution",f5,36,34,3f),
	::String(null()) };

::hx::Class DistortGlitchShader_obj::__mClass;

void DistortGlitchShader_obj::__register()
{
	DistortGlitchShader_obj _hx_dummy;
	DistortGlitchShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DistortGlitchShader",c5,8f,1d,40);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DistortGlitchShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DistortGlitchShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DistortGlitchShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DistortGlitchShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

