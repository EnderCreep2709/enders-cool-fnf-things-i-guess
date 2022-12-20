#include <hxcpp.h>

#ifndef INCLUDED_StaticShader
#include <StaticShader.h>
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
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_84c95b733feade7d_155_new,"StaticShader","new",0x5c3af905,"StaticShader.new","StaticShader.hx",155,0xc5ddce0b)

void StaticShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_84c95b733feade7d_155_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n  varying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n\n  uniform float iTime;\n  uniform bool vignetteOn;\n  uniform bool perspectiveOn;\n  uniform bool distortionOn;\n  uniform bool scanlinesOn;\n  uniform bool vignetteMoving;\n  uniform bool enabled;\n  uniform sampler2D noiseTex;\n  uniform float glitchModifier;\n  uniform vec3 iResolution;\n  uniform float alpha;\n\n  float vertJerkOpt = 1.0;\n  float vertMovementOpt = 1.0;\n  float bottomStaticOpt = 1.0;\n  float scalinesOpt = 1.0;\n  float rgbOffsetOpt = 1.0;\n  float horzFuzzOpt = 1.0;\n\n  // Noise generation functions borrowed from:\n  // https://github.com/ashima/webgl-noise/blob/master/src/noise2D.glsl\n\n  vec3 mod289(vec3 x) {\n    return x - floor(x * (1.0 / 289.0)) * 289.0;\n  }\n\n  vec2 mod289(vec2 x) {\n    return x - floor(x * (1.0 / 289.0)) * 289.0;\n  }\n\n  vec3 permute(vec3 x) {\n    return mod289(((x*34.0)+1.0)*x);\n  }\n\n  float snoise(vec2 v)\n    {\n    const vec4 C = vec4(0.211324865405187,  // (3.0-sqrt(3.0))/6.0\n                        0.366025403784439,  // 0.5*(sqrt(3.0)-1.0)\n                       -0.577350269189626,  // -1.0 + 2.0 * C.x\n                        0.024390243902439); // 1.0 / 41.0\n  // First corner\n    vec2 i  = floor(v + dot(v, C.yy) );\n    vec2 x0 = v -   i + dot(i, C.xx);\n\n  // Other corners\n    vec2 i1;\n    //i1.x = step( x0.y, x0.x ); // x0.x > x0.y ? 1.0 : 0.0\n    //i1.y = 1.0 - i1.x;\n    i1 = (x0.x > x0.y) ? vec2(1.0, 0.0) : vec2(0.0, 1.0);\n    // x0 = x0 - 0.0 + 0.0 * C.xx ;\n    // x1 = x0 - i1 + 1.0 * C.xx ;\n    // x2 = x0 - 1.0 + 2.0 * C.xx ;\n    vec4 x12 = x0.xyxy + C.xxzz;\n    x12.xy -= i1;\n\n  // Permutations\n    i = mod289(i); // Avoid truncation effects in permutation\n    vec3 p = permute( permute( i.y + vec3(0.0, i1.y, 1.0 ))\n      + i.x + vec3(0.0, i1.x, 1.0 ));\n\n    vec3 m = max(0.5 - vec3(dot(x0,x0), dot(x12.xy,x12.xy), dot(x12.zw,x12.zw)), 0.0);\n    m = m*m ;\n    m = m*m ;\n\n  // Gradients: 41 points uniformly over a line, mapped onto a diamond.\n  // The ring size 17*17 = 289 is close to a multiple of 41 (41*7 = 287)\n\n    vec3 x = 2.0 * fract(p * C.www) - 1.0;\n    vec3 h = abs(x) - 0.5;\n    vec3 ox = floor(x + 0.5);\n    vec3 a0 = x - ox;\n\n  // Normalise gradients implicitly by scaling m\n  // Approximation of: m *= inversesqrt( a0*a0 + h*h );\n    m *= 1.79284291400159 - 0.85373472095314 * ( a0*a0 + h*h );\n\n  // Compute final noise value at P\n    vec3 g;\n    g.x  = a0.x  * x0.x  + h.x  * x0.y;\n    g.yz = a0.yz * x12.xz + h.yz * x12.yw;\n    return 130.0 * dot(m, g);\n  }\n\n  float staticV(vec2 uv) {\n      float staticHeight = snoise(vec2(9.0,iTime*1.2+3.0))*0.3+5.0;\n      float staticAmount = snoise(vec2(1.0,iTime*1.2-6.0))*0.1+0.3;\n      float staticStrength = snoise(vec2(-9.75,iTime*0.6-3.0))*2.0+2.0;\n    return (1.0-step(snoise(vec2(5.0*pow(iTime,2.0)+pow(uv.x*7.0,1.2),pow((mod(iTime,100.0)+100.0)*uv.y*0.3+3.0,staticHeight))),staticAmount))*staticStrength;\n  }\n\n\n  void main()\n  {\n    vec2 uv =  openfl_TextureCoordv.xy;\n\n    if(!enabled){\n      gl_FragColor = flixel_texture2D(bitmap, uv);\n      }else{\n\nfloat jerkOffset = (1.0-step(snoise(vec2(iTime*1.3,5.0)),0.8))*0.05;\n\nfloat fuzzOffset = snoise(vec2(iTime*15.0,uv.y*80.0))*0.003;\nfloat largeFuzzOffset = snoise(vec2(iTime*1.0,uv.y*25.0))*0.004;\n\n  float vertMovementOn = (1.0-step(snoise(vec2(iTime*0.2,8.0)),0.4))*vertMovementOpt;\n  float vertJerk = (1.0-step(snoise(vec2(iTime*1.5,5.0)),0.6))*vertJerkOpt;\n  float vertJerk2 = (1.0-step(snoise(vec2(iTime*5.5,5.0)),0.2))*vertJerkOpt;\n  float yOffset = abs(sin(iTime)*4.0)*vertMovementOn+vertJerk*vertJerk2*0.3;\n  float y = mod(uv.y+yOffset,1.0);\n\n\nfloat xOffset = (fuzzOffset + largeFuzzOffset) * horzFuzzOpt;\n\n  float staticVal = 0.0;\n\n  for (float y = -1.0; y <= 1.0; y += 1.0) {\n      float maxDist = 5.0/200.0;\n      float dist = y/200.0;\n    staticVal += staticV(vec2(uv.x,uv.y+dist))*(maxDist-abs(dist))*1.5;\n  }\n\n  staticVal *= bottomStaticOpt;\n\nfloat red \t=   flixel_texture2D(\tbitmap, \tvec2(uv.x + xOffset -0.01*rgbOffsetOpt,y)).r+staticVal;\nfloat green = \tflixel_texture2D(\tbitmap, \tvec2(uv.x + xOffset,\t  y)).g+staticVal;\nfloat blue \t=\tflixel_texture2D(\tbitmap, \tvec2(uv.x + xOffset +0.01*rgbOffsetOpt,y)).b+staticVal;\n\nvec3 color = vec3(red,green,blue);\nfloat scanline = sin(uv.y*800.0)*0.04*scalinesOpt;\ncolor -= scanline;\n\nvec4 baseColor = flixel_texture2D(bitmap,uv);\ngl_FragColor = mix(vec4(color,1.0), baseColor, alpha) * baseColor.a;\n}\n}\n\n\n    ",c4,81,a7,56);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE( 156)		super::__construct();
HXLINE(  10)		this->_hx___isGenerated = true;
HXDLIN(  10)		this->_hx___initGL();
            	}

Dynamic StaticShader_obj::__CreateEmpty() { return new StaticShader_obj; }

void *StaticShader_obj::_hx_vtable = 0;

Dynamic StaticShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StaticShader_obj > _hx_result = new StaticShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StaticShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1ed2ccb7) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1ed2ccb7;
		}
	} else {
		return inClassId==(int)0x1efca5b6 || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< StaticShader_obj > StaticShader_obj::__new() {
	::hx::ObjectPtr< StaticShader_obj > __this = new StaticShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< StaticShader_obj > StaticShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	StaticShader_obj *__this = (StaticShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StaticShader_obj), true, "StaticShader"));
	*(void **)__this = StaticShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StaticShader_obj::StaticShader_obj()
{
}

void StaticShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StaticShader);
	HX_MARK_MEMBER_NAME(iTime,"iTime");
	HX_MARK_MEMBER_NAME(vignetteOn,"vignetteOn");
	HX_MARK_MEMBER_NAME(perspectiveOn,"perspectiveOn");
	HX_MARK_MEMBER_NAME(distortionOn,"distortionOn");
	HX_MARK_MEMBER_NAME(scanlinesOn,"scanlinesOn");
	HX_MARK_MEMBER_NAME(vignetteMoving,"vignetteMoving");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(noiseTex,"noiseTex");
	HX_MARK_MEMBER_NAME(glitchModifier,"glitchModifier");
	HX_MARK_MEMBER_NAME(iResolution,"iResolution");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StaticShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(iTime,"iTime");
	HX_VISIT_MEMBER_NAME(vignetteOn,"vignetteOn");
	HX_VISIT_MEMBER_NAME(perspectiveOn,"perspectiveOn");
	HX_VISIT_MEMBER_NAME(distortionOn,"distortionOn");
	HX_VISIT_MEMBER_NAME(scanlinesOn,"scanlinesOn");
	HX_VISIT_MEMBER_NAME(vignetteMoving,"vignetteMoving");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(noiseTex,"noiseTex");
	HX_VISIT_MEMBER_NAME(glitchModifier,"glitchModifier");
	HX_VISIT_MEMBER_NAME(iResolution,"iResolution");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StaticShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { return ::hx::Val( iTime ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return ::hx::Val( enabled ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noiseTex") ) { return ::hx::Val( noiseTex ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vignetteOn") ) { return ::hx::Val( vignetteOn ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scanlinesOn") ) { return ::hx::Val( scanlinesOn ); }
		if (HX_FIELD_EQ(inName,"iResolution") ) { return ::hx::Val( iResolution ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"distortionOn") ) { return ::hx::Val( distortionOn ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"perspectiveOn") ) { return ::hx::Val( perspectiveOn ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"vignetteMoving") ) { return ::hx::Val( vignetteMoving ); }
		if (HX_FIELD_EQ(inName,"glitchModifier") ) { return ::hx::Val( glitchModifier ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StaticShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"iTime") ) { iTime=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noiseTex") ) { noiseTex=inValue.Cast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vignetteOn") ) { vignetteOn=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scanlinesOn") ) { scanlinesOn=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iResolution") ) { iResolution=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"distortionOn") ) { distortionOn=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"perspectiveOn") ) { perspectiveOn=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"vignetteMoving") ) { vignetteMoving=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glitchModifier") ) { glitchModifier=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("iTime",16,e1,e8,ac));
	outFields->push(HX_("vignetteOn",79,a8,5c,82));
	outFields->push(HX_("perspectiveOn",bb,81,53,4d));
	outFields->push(HX_("distortionOn",dc,ca,71,f2));
	outFields->push(HX_("scanlinesOn",21,3d,91,e1));
	outFields->push(HX_("vignetteMoving",e8,ee,4b,f2));
	outFields->push(HX_("enabled",81,04,31,7e));
	outFields->push(HX_("noiseTex",6d,c2,0b,11));
	outFields->push(HX_("glitchModifier",6c,a8,96,1c));
	outFields->push(HX_("iResolution",f5,36,34,3f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StaticShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(StaticShader_obj,iTime),HX_("iTime",16,e1,e8,ac)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(StaticShader_obj,vignetteOn),HX_("vignetteOn",79,a8,5c,82)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(StaticShader_obj,perspectiveOn),HX_("perspectiveOn",bb,81,53,4d)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(StaticShader_obj,distortionOn),HX_("distortionOn",dc,ca,71,f2)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(StaticShader_obj,scanlinesOn),HX_("scanlinesOn",21,3d,91,e1)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(StaticShader_obj,vignetteMoving),HX_("vignetteMoving",e8,ee,4b,f2)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(StaticShader_obj,enabled),HX_("enabled",81,04,31,7e)},
	{::hx::fsObject /*  ::openfl::display::ShaderInput_openfl_display_BitmapData */ ,(int)offsetof(StaticShader_obj,noiseTex),HX_("noiseTex",6d,c2,0b,11)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(StaticShader_obj,glitchModifier),HX_("glitchModifier",6c,a8,96,1c)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(StaticShader_obj,iResolution),HX_("iResolution",f5,36,34,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StaticShader_obj_sStaticStorageInfo = 0;
#endif

static ::String StaticShader_obj_sMemberFields[] = {
	HX_("iTime",16,e1,e8,ac),
	HX_("vignetteOn",79,a8,5c,82),
	HX_("perspectiveOn",bb,81,53,4d),
	HX_("distortionOn",dc,ca,71,f2),
	HX_("scanlinesOn",21,3d,91,e1),
	HX_("vignetteMoving",e8,ee,4b,f2),
	HX_("enabled",81,04,31,7e),
	HX_("noiseTex",6d,c2,0b,11),
	HX_("glitchModifier",6c,a8,96,1c),
	HX_("iResolution",f5,36,34,3f),
	::String(null()) };

::hx::Class StaticShader_obj::__mClass;

void StaticShader_obj::__register()
{
	StaticShader_obj _hx_dummy;
	StaticShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("StaticShader",93,12,a7,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StaticShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StaticShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

