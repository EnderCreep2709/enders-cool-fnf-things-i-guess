#include <hxcpp.h>

#ifndef INCLUDED_Fuck
#include <Fuck.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5b72a7b6ffb6f303_194_new,"Fuck","new",0xf50ae649,"Fuck.new","GlitchShader.hx",194,0x9ee975e4)
static const Float _hx_array_data_2e9e0dd7_1[] = {
	(Float)0,
};
static const Float _hx_array_data_2e9e0dd7_2[] = {
	0.6,
};
static const Float _hx_array_data_2e9e0dd7_3[] = {
	(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_5b72a7b6ffb6f303_202_get_amount,"Fuck","get_amount",0x17f9ead8,"Fuck.get_amount","GlitchShader.hx",202,0x9ee975e4)
HX_LOCAL_STACK_FRAME(_hx_pos_5b72a7b6ffb6f303_207_set_amount,"Fuck","set_amount",0x1b77894c,"Fuck.set_amount","GlitchShader.hx",207,0x9ee975e4)
HX_LOCAL_STACK_FRAME(_hx_pos_5b72a7b6ffb6f303_212_get_speed,"Fuck","get_speed",0xb8d0de87,"Fuck.get_speed","GlitchShader.hx",212,0x9ee975e4)
HX_LOCAL_STACK_FRAME(_hx_pos_5b72a7b6ffb6f303_217_set_speed,"Fuck","set_speed",0x9c21ca93,"Fuck.set_speed","GlitchShader.hx",217,0x9ee975e4)

void Fuck_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5b72a7b6ffb6f303_194_new)
HXLINE( 198)		this->speed = ((Float)0);
HXLINE( 196)		this->amount = ((Float)0);
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n    varying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\n    //inputs\n    uniform float AMT; //0 - 1 glitch amount\n    uniform float SPEED; //0 - 1 speed\n    uniform float iTime;\n    //2D (returns 0 - 1)\nfloat random2d(vec2 n) { \n    return fract(sin(dot(n, vec2(12.9898, 4.1414))) * 43758.5453);\n}\n\nfloat randomRange (in vec2 seed, in float min, in float max) {\n\t\treturn min + random2d(seed) * (max - min);\n}\n\n// return 1 if v inside 1d range\nfloat insideRange(float v, float bottom, float top) {\n   return step(bottom, v) - step(top, v);\n}\n\n\n   \nvoid main()\n{\n    \n    float time = floor(iTime * SPEED * 60.0);    \n\tvec2 uv = openfl_TextureCoordv;\n    \n    //copy orig\n    vec4 outCol = flixel_texture2D(bitmap, uv);\n    \n    //randomly offset slices horizontally\n    float maxOffset = AMT/2.0;\n    for (float i = 0.0; i < 10.0 * AMT; i += 1.0) {\n        float sliceY = random2d(vec2(time , 2345.0 + float(i)));\n        float sliceH = random2d(vec2(time , 9035.0 + float(i))) * 0.25;\n        float hOffset = randomRange(vec2(time , 9625.0 + float(i)), -maxOffset, maxOffset);\n        vec2 uvOff = uv;\n        uvOff.x += hOffset;\n        if (insideRange(uv.y, sliceY, fract(sliceY+sliceH)) == 1.0 ){\n        \toutCol = flixel_texture2D(bitmap, uvOff);\n        }\n    }\n    \n    //do slight offset on one entire channel\n    float maxColOffset = AMT/6.0;\n    float rnd = random2d(vec2(time , 9545.0));\n    vec2 colOffset = vec2(randomRange(vec2(time , 9545.0),-maxColOffset,maxColOffset), \n                       randomRange(vec2(time , 7205.0),-maxColOffset,maxColOffset));\n    if (rnd < 0.33){\n        outCol.r = flixel_texture2D(bitmap, uv + colOffset).r;\n        \n    }else if (rnd < 0.66){\n        outCol.g = flixel_texture2D(bitmap, uv + colOffset).g;\n        \n    } else{\n        outCol.b = flixel_texture2D(bitmap, uv + colOffset).b;  \n    }\n       \n\tgl_FragColor = outCol;\n}\n",07,94,43,4b);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE( 284)		super::__construct();
HXLINE( 285)		this->AMT->value = ::Array_obj< Float >::fromData( _hx_array_data_2e9e0dd7_1,1);
HXLINE( 286)		this->SPEED->value = ::Array_obj< Float >::fromData( _hx_array_data_2e9e0dd7_2,1);
HXLINE( 287)		this->iTime->value = ::Array_obj< Float >::fromData( _hx_array_data_2e9e0dd7_3,1);
HXLINE( 194)		this->_hx___isGenerated = true;
HXDLIN( 194)		this->_hx___initGL();
            	}

Dynamic Fuck_obj::__CreateEmpty() { return new Fuck_obj; }

void *Fuck_obj::_hx_vtable = 0;

Dynamic Fuck_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Fuck_obj > _hx_result = new Fuck_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Fuck_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x04f93fcd) {
		if (inClassId<=(int)0x02f103fb) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x02f103fb;
		} else {
			return inClassId==(int)0x04f93fcd;
		}
	} else {
		return inClassId==(int)0x1efca5b6 || inClassId==(int)0x78d8d737;
	}
}

Float Fuck_obj::get_amount(){
            	HX_STACKFRAME(&_hx_pos_5b72a7b6ffb6f303_202_get_amount)
HXDLIN( 202)		return this->AMT->value->__get(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Fuck_obj,get_amount,return )

Float Fuck_obj::set_amount(Float val){
            	HX_STACKFRAME(&_hx_pos_5b72a7b6ffb6f303_207_set_amount)
HXDLIN( 207)		return (this->AMT->value[0] = val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Fuck_obj,set_amount,return )

Float Fuck_obj::get_speed(){
            	HX_STACKFRAME(&_hx_pos_5b72a7b6ffb6f303_212_get_speed)
HXDLIN( 212)		return this->SPEED->value->__get(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Fuck_obj,get_speed,return )

Float Fuck_obj::set_speed(Float val){
            	HX_STACKFRAME(&_hx_pos_5b72a7b6ffb6f303_217_set_speed)
HXDLIN( 217)		return (this->SPEED->value[0] = val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Fuck_obj,set_speed,return )


::hx::ObjectPtr< Fuck_obj > Fuck_obj::__new() {
	::hx::ObjectPtr< Fuck_obj > __this = new Fuck_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Fuck_obj > Fuck_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Fuck_obj *__this = (Fuck_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Fuck_obj), true, "Fuck"));
	*(void **)__this = Fuck_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Fuck_obj::Fuck_obj()
{
}

void Fuck_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Fuck);
	HX_MARK_MEMBER_NAME(amount,"amount");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(AMT,"AMT");
	HX_MARK_MEMBER_NAME(SPEED,"SPEED");
	HX_MARK_MEMBER_NAME(iTime,"iTime");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Fuck_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(amount,"amount");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(AMT,"AMT");
	HX_VISIT_MEMBER_NAME(SPEED,"SPEED");
	HX_VISIT_MEMBER_NAME(iTime,"iTime");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Fuck_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"AMT") ) { return ::hx::Val( AMT ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_speed() : speed ); }
		if (HX_FIELD_EQ(inName,"SPEED") ) { return ::hx::Val( SPEED ); }
		if (HX_FIELD_EQ(inName,"iTime") ) { return ::hx::Val( iTime ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"amount") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_amount() : amount ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_speed") ) { return ::hx::Val( get_speed_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_speed") ) { return ::hx::Val( set_speed_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_amount") ) { return ::hx::Val( get_amount_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_amount") ) { return ::hx::Val( set_amount_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Fuck_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"AMT") ) { AMT=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_speed(inValue.Cast< Float >()) );speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SPEED") ) { SPEED=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iTime") ) { iTime=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"amount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_amount(inValue.Cast< Float >()) );amount=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Fuck_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("amount",d8,11,03,d5));
	outFields->push(HX_("speed",87,97,69,81));
	outFields->push(HX_("AMT",e8,95,31,00));
	outFields->push(HX_("SPEED",67,cf,57,ff));
	outFields->push(HX_("iTime",16,e1,e8,ac));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Fuck_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Fuck_obj,amount),HX_("amount",d8,11,03,d5)},
	{::hx::fsFloat,(int)offsetof(Fuck_obj,speed),HX_("speed",87,97,69,81)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Fuck_obj,AMT),HX_("AMT",e8,95,31,00)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Fuck_obj,SPEED),HX_("SPEED",67,cf,57,ff)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(Fuck_obj,iTime),HX_("iTime",16,e1,e8,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Fuck_obj_sStaticStorageInfo = 0;
#endif

static ::String Fuck_obj_sMemberFields[] = {
	HX_("amount",d8,11,03,d5),
	HX_("speed",87,97,69,81),
	HX_("get_amount",a1,81,8a,c5),
	HX_("set_amount",15,20,08,c9),
	HX_("get_speed",de,f3,12,c5),
	HX_("set_speed",ea,df,63,a8),
	HX_("AMT",e8,95,31,00),
	HX_("SPEED",67,cf,57,ff),
	HX_("iTime",16,e1,e8,ac),
	::String(null()) };

::hx::Class Fuck_obj::__mClass;

void Fuck_obj::__register()
{
	Fuck_obj _hx_dummy;
	Fuck_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Fuck",d7,0d,9e,2e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Fuck_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Fuck_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Fuck_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Fuck_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

