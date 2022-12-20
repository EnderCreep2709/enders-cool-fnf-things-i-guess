#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_addons_plugin_screengrab_FlxScreenGrab
#include <flixel/addons/plugin/screengrab/FlxScreenGrab.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Void
#include <lime/app/_Event_String_Void.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_FileDialog
#include <lime/ui/FileDialog.h>
#endif
#ifndef INCLUDED_lime_ui_FileDialogType
#include <lime/ui/FileDialogType.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_PNGEncoderOptions
#include <openfl/display/PNGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_729dc677b45cd42a_28_new,"flixel.addons.plugin.screengrab.FlxScreenGrab","new",0x81cbe3f8,"flixel.addons.plugin.screengrab.FlxScreenGrab.new","flixel/addons/plugin/screengrab/FlxScreenGrab.hx",28,0x9a172a38)
HX_LOCAL_STACK_FRAME(_hx_pos_729dc677b45cd42a_221_update,"flixel.addons.plugin.screengrab.FlxScreenGrab","update",0x3413c171,"flixel.addons.plugin.screengrab.FlxScreenGrab.update","flixel/addons/plugin/screengrab/FlxScreenGrab.hx",221,0x9a172a38)
HX_LOCAL_STACK_FRAME(_hx_pos_729dc677b45cd42a_229_destroy,"flixel.addons.plugin.screengrab.FlxScreenGrab","destroy",0xe3ebec92,"flixel.addons.plugin.screengrab.FlxScreenGrab.destroy","flixel/addons/plugin/screengrab/FlxScreenGrab.hx",229,0x9a172a38)
HX_LOCAL_STACK_FRAME(_hx_pos_729dc677b45cd42a_49_defineCaptureRegion,"flixel.addons.plugin.screengrab.FlxScreenGrab","defineCaptureRegion",0xe39e7c77,"flixel.addons.plugin.screengrab.FlxScreenGrab.defineCaptureRegion","flixel/addons/plugin/screengrab/FlxScreenGrab.hx",49,0x9a172a38)
HX_LOCAL_STACK_FRAME(_hx_pos_729dc677b45cd42a_57_clearCaptureRegion,"flixel.addons.plugin.screengrab.FlxScreenGrab","clearCaptureRegion",0xff120fb5,"flixel.addons.plugin.screengrab.FlxScreenGrab.clearCaptureRegion","flixel/addons/plugin/screengrab/FlxScreenGrab.hx",57,0x9a172a38)
HX_LOCAL_STACK_FRAME(_hx_pos_729dc677b45cd42a_69_defineHotKeys,"flixel.addons.plugin.screengrab.FlxScreenGrab","defineHotKeys",0xb9029ebe,"flixel.addons.plugin.screengrab.FlxScreenGrab.defineHotKeys","flixel/addons/plugin/screengrab/FlxScreenGrab.hx",69,0x9a172a38)
HX_LOCAL_STACK_FRAME(_hx_pos_729dc677b45cd42a_79_clearHotKeys,"flixel.addons.plugin.screengrab.FlxScreenGrab","clearHotKeys",0x60d40f7c,"flixel.addons.plugin.screengrab.FlxScreenGrab.clearHotKeys","flixel/addons/plugin/screengrab/FlxScreenGrab.hx",79,0x9a172a38)
HX_LOCAL_STACK_FRAME(_hx_pos_729dc677b45cd42a_94_grab,"flixel.addons.plugin.screengrab.FlxScreenGrab","grab",0x0c04e134,"flixel.addons.plugin.screengrab.FlxScreenGrab.grab","flixel/addons/plugin/screengrab/FlxScreenGrab.hx",94,0x9a172a38)
HX_LOCAL_STACK_FRAME(_hx_pos_729dc677b45cd42a_141_fixFilename,"flixel.addons.plugin.screengrab.FlxScreenGrab","fixFilename",0x4d087554,"flixel.addons.plugin.screengrab.FlxScreenGrab.fixFilename","flixel/addons/plugin/screengrab/FlxScreenGrab.hx",141,0x9a172a38)
HX_LOCAL_STACK_FRAME(_hx_pos_729dc677b45cd42a_191_save,"flixel.addons.plugin.screengrab.FlxScreenGrab","save",0x13e69ca5,"flixel.addons.plugin.screengrab.FlxScreenGrab.save","flixel/addons/plugin/screengrab/FlxScreenGrab.hx",191,0x9a172a38)
HX_LOCAL_STACK_FRAME(_hx_pos_729dc677b45cd42a_158_save,"flixel.addons.plugin.screengrab.FlxScreenGrab","save",0x13e69ca5,"flixel.addons.plugin.screengrab.FlxScreenGrab.save","flixel/addons/plugin/screengrab/FlxScreenGrab.hx",158,0x9a172a38)
static const ::String _hx_array_data_a8a4c806_11[] = {
	HX_("",00,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_729dc677b45cd42a_33_boot,"flixel.addons.plugin.screengrab.FlxScreenGrab","boot",0x08b4959a,"flixel.addons.plugin.screengrab.FlxScreenGrab.boot","flixel/addons/plugin/screengrab/FlxScreenGrab.hx",33,0x9a172a38)
HX_LOCAL_STACK_FRAME(_hx_pos_729dc677b45cd42a_34_boot,"flixel.addons.plugin.screengrab.FlxScreenGrab","boot",0x08b4959a,"flixel.addons.plugin.screengrab.FlxScreenGrab.boot","flixel/addons/plugin/screengrab/FlxScreenGrab.hx",34,0x9a172a38)
namespace flixel{
namespace addons{
namespace plugin{
namespace screengrab{

void FlxScreenGrab_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_729dc677b45cd42a_28_new)
HXDLIN(  28)		super::__construct();
            	}

Dynamic FlxScreenGrab_obj::__CreateEmpty() { return new FlxScreenGrab_obj; }

void *FlxScreenGrab_obj::_hx_vtable = 0;

Dynamic FlxScreenGrab_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxScreenGrab_obj > _hx_result = new FlxScreenGrab_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxScreenGrab_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7162c0c8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7162c0c8;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void FlxScreenGrab_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_729dc677b45cd42a_221_update)
HXDLIN( 221)		if (::flixel::FlxG_obj::keys->checkKeyArrayState(::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::_hotkeys,-1)) {
HXLINE( 223)			::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::grab(null(),::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::_autoSave,::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::_autoHideMouse);
            		}
            	}


void FlxScreenGrab_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_729dc677b45cd42a_229_destroy)
HXLINE( 230)		::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::clearCaptureRegion();
HXLINE( 231)		::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::clearHotKeys();
            	}


 ::openfl::display::Bitmap FlxScreenGrab_obj::screenshot;

::Array< int > FlxScreenGrab_obj::_hotkeys;

bool FlxScreenGrab_obj::_autoSave;

bool FlxScreenGrab_obj::_autoHideMouse;

 ::openfl::geom::Rectangle FlxScreenGrab_obj::_region;

void FlxScreenGrab_obj::defineCaptureRegion(int X,int Y,int Width,int Height){
            	HX_GC_STACKFRAME(&_hx_pos_729dc677b45cd42a_49_defineCaptureRegion)
HXDLIN(  49)		::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::_region =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,X,Y,Width,Height);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxScreenGrab_obj,defineCaptureRegion,(void))

void FlxScreenGrab_obj::clearCaptureRegion(){
            	HX_STACKFRAME(&_hx_pos_729dc677b45cd42a_57_clearCaptureRegion)
HXDLIN(  57)		::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::_region = null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxScreenGrab_obj,clearCaptureRegion,(void))

void FlxScreenGrab_obj::defineHotKeys(::Array< int > Keys,::hx::Null< bool >  __o_SaveToFile,::hx::Null< bool >  __o_HideMouse){
            		bool SaveToFile = __o_SaveToFile.Default(false);
            		bool HideMouse = __o_HideMouse.Default(false);
            	HX_STACKFRAME(&_hx_pos_729dc677b45cd42a_69_defineHotKeys)
HXLINE(  70)		::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::_hotkeys = Keys;
HXLINE(  71)		::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::_autoSave = SaveToFile;
HXLINE(  72)		::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::_autoHideMouse = HideMouse;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxScreenGrab_obj,defineHotKeys,(void))

void FlxScreenGrab_obj::clearHotKeys(){
            	HX_STACKFRAME(&_hx_pos_729dc677b45cd42a_79_clearHotKeys)
HXLINE(  80)		::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::_hotkeys = ::Array_obj< int >::__new(0);
HXLINE(  81)		::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::_autoSave = false;
HXLINE(  82)		::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::_autoHideMouse = false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxScreenGrab_obj,clearHotKeys,(void))

 ::openfl::display::Bitmap FlxScreenGrab_obj::grab( ::openfl::geom::Rectangle CaptureRegion, ::Dynamic __o_SaveToFile,::hx::Null< bool >  __o_HideMouse){
            		 ::Dynamic SaveToFile = __o_SaveToFile;
            		if (::hx::IsNull(__o_SaveToFile)) SaveToFile = false;
            		bool HideMouse = __o_HideMouse.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_729dc677b45cd42a_94_grab)
HXLINE(  95)		 ::openfl::geom::Rectangle bounds;
HXLINE(  97)		if (::hx::IsNotNull( CaptureRegion )) {
HXLINE(  99)			bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,CaptureRegion->x,CaptureRegion->y,CaptureRegion->width,CaptureRegion->height);
            		}
            		else {
HXLINE( 101)			if (::hx::IsNotNull( ::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::_region )) {
HXLINE( 103)				bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::_region->x,::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::_region->y,::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::_region->width,::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::_region->height);
            			}
            			else {
HXLINE( 107)				int bounds1 = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXDLIN( 107)				bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,bounds1,::openfl::Lib_obj::get_current()->stage->stageHeight);
            			}
            		}
HXLINE( 110)		 ::openfl::display::Bitmap theBitmap =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,::Math_obj::floor(bounds->width),::Math_obj::floor(bounds->height),true,0),null(),null());
HXLINE( 112)		 ::openfl::geom::Matrix m =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,1,0,0,1,-(bounds->x),-(bounds->y));
HXLINE( 115)		if (HideMouse) {
HXLINE( 117)			::flixel::FlxG_obj::mouse->set_visible(false);
            		}
HXLINE( 121)		 ::openfl::display::BitmapData _hx_tmp = theBitmap->get_bitmapData();
HXDLIN( 121)		_hx_tmp->draw(::openfl::Lib_obj::get_current()->stage,m,null(),null(),null(),null());
HXLINE( 124)		if (HideMouse) {
HXLINE( 126)			::flixel::FlxG_obj::mouse->set_visible(true);
            		}
HXLINE( 130)		::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::screenshot = theBitmap;
HXLINE( 132)		if (( (bool)(SaveToFile) )) {
HXLINE( 134)			::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::save(null());
            		}
HXLINE( 137)		return theBitmap;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxScreenGrab_obj,grab,return )

::String FlxScreenGrab_obj::fixFilename(::String Filename){
            	HX_STACKFRAME(&_hx_pos_729dc677b45cd42a_141_fixFilename)
HXLINE( 142)		if ((Filename == HX_("",00,00,00,00))) {
HXLINE( 144)			::String date = ::Date_obj::now()->toString();
HXLINE( 145)			::Array< ::String > nameArray = date.split(HX_(":",3a,00,00,00));
HXLINE( 146)			date = nameArray->join(HX_("-",2d,00,00,00));
HXLINE( 148)			Filename = ((HX_("grab-",e1,02,ea,99) + date) + HX_(".png",3b,2d,bd,1e));
            		}
            		else {
HXLINE( 150)			if ((Filename.substr(-4,null()) != HX_(".png",3b,2d,bd,1e))) {
HXLINE( 152)				Filename = (Filename + HX_(".png",3b,2d,bd,1e));
            			}
            		}
HXLINE( 154)		return Filename;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxScreenGrab_obj,fixFilename,return )

void FlxScreenGrab_obj::save(::String __o_Filename){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< ::String >,path,::Array< ::Dynamic>,png) HXARGC(1)
            		void _hx_run(::String str){
            			HX_GC_STACKFRAME(&_hx_pos_729dc677b45cd42a_191_save)
HXLINE( 192)			path[0] = ::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::fixFilename(str);
HXLINE( 193)			 ::sys::io::FileOutput f = ::sys::io::File_obj::write(path->__get(0),true);
HXLINE( 194)			int length = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(png->__get(0).StaticCast<  ::openfl::utils::ByteArrayData >());
HXDLIN( 194)			f->writeString(png->__get(0).StaticCast<  ::openfl::utils::ByteArrayData >()->readUTFBytes(length),null());
HXLINE( 195)			f->close();
HXLINE( 196)			path[0] = null();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		::String Filename = __o_Filename;
            		if (::hx::IsNull(__o_Filename)) Filename = HX_("",00,00,00,00);
            	HX_GC_STACKFRAME(&_hx_pos_729dc677b45cd42a_158_save)
HXLINE( 159)		if (::hx::IsNull( ::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::screenshot->get_bitmapData() )) {
HXLINE( 161)			return;
            		}
HXLINE( 164)		Filename = ::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::fixFilename(Filename);
HXLINE( 166)		::Array< ::Dynamic> png = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 172)		::Array< ::Dynamic> png1 = png;
HXDLIN( 172)		 ::openfl::display::BitmapData _hx_tmp = ::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::screenshot->get_bitmapData();
HXDLIN( 172)		 ::openfl::geom::Rectangle _hx_tmp1 = ::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::screenshot->get_bitmapData()->rect;
HXDLIN( 172)		png1[0] = _hx_tmp->encode(_hx_tmp1, ::openfl::display::PNGEncoderOptions_obj::__alloc( HX_CTX ,null()),null());
HXLINE( 179)		::String documentsDirectory = HX_("",00,00,00,00);
HXLINE( 183)		documentsDirectory = ::lime::_hx_system::System_obj::get_documentsDirectory();
HXLINE( 186)		 ::lime::ui::FileDialog fd =  ::lime::ui::FileDialog_obj::__alloc( HX_CTX );
HXLINE( 188)		::Array< ::String > path = ::Array_obj< ::String >::fromData( _hx_array_data_a8a4c806_11,1);
HXLINE( 190)		fd->onSelect->add( ::Dynamic(new _hx_Closure_0(path,png)),null(),null());
HXLINE( 199)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 201)			fd->browse(::lime::ui::FileDialogType_obj::SAVE_dyn(),HX_("*.png",65,8a,91,4d),documentsDirectory,null());
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 203)				{
HXLINE( 203)					null();
            				}
HXLINE( 199)				if (::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::String >())) {
HXLINE( 205)					path[0] = Filename;
            				}
            				else {
HXLINE( 199)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 208)		bool _hx_tmp2;
HXDLIN( 208)		if ((path->__get(0) != HX_("",00,00,00,00))) {
HXLINE( 208)			_hx_tmp2 = ::hx::IsNotNull( path->__get(0) );
            		}
            		else {
HXLINE( 208)			_hx_tmp2 = false;
            		}
HXDLIN( 208)		if (_hx_tmp2) {
HXLINE( 210)			path[0] = ::flixel::addons::plugin::screengrab::FlxScreenGrab_obj::fixFilename(path->__get(0));
HXLINE( 211)			 ::sys::io::FileOutput f = ::sys::io::File_obj::write(path->__get(0),true);
HXLINE( 212)			int length = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(png->__get(0).StaticCast<  ::openfl::utils::ByteArrayData >());
HXDLIN( 212)			f->writeString(png->__get(0).StaticCast<  ::openfl::utils::ByteArrayData >()->readUTFBytes(length),null());
HXLINE( 213)			f->close();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxScreenGrab_obj,save,(void))


::hx::ObjectPtr< FlxScreenGrab_obj > FlxScreenGrab_obj::__new() {
	::hx::ObjectPtr< FlxScreenGrab_obj > __this = new FlxScreenGrab_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxScreenGrab_obj > FlxScreenGrab_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxScreenGrab_obj *__this = (FlxScreenGrab_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxScreenGrab_obj), true, "flixel.addons.plugin.screengrab.FlxScreenGrab"));
	*(void **)__this = FlxScreenGrab_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxScreenGrab_obj::FlxScreenGrab_obj()
{
}

::hx::Val FlxScreenGrab_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxScreenGrab_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"grab") ) { outValue = grab_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"save") ) { outValue = save_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_region") ) { outValue = ( _region ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_hotkeys") ) { outValue = ( _hotkeys ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_autoSave") ) { outValue = ( _autoSave ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"screenshot") ) { outValue = ( screenshot ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fixFilename") ) { outValue = fixFilename_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clearHotKeys") ) { outValue = clearHotKeys_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"defineHotKeys") ) { outValue = defineHotKeys_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_autoHideMouse") ) { outValue = ( _autoHideMouse ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"clearCaptureRegion") ) { outValue = clearCaptureRegion_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"defineCaptureRegion") ) { outValue = defineCaptureRegion_dyn(); return true; }
	}
	return false;
}

bool FlxScreenGrab_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_region") ) { _region=ioValue.Cast<  ::openfl::geom::Rectangle >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_hotkeys") ) { _hotkeys=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_autoSave") ) { _autoSave=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"screenshot") ) { screenshot=ioValue.Cast<  ::openfl::display::Bitmap >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_autoHideMouse") ) { _autoHideMouse=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxScreenGrab_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxScreenGrab_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::Bitmap */ ,(void *) &FlxScreenGrab_obj::screenshot,HX_("screenshot",66,36,b0,d9)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &FlxScreenGrab_obj::_hotkeys,HX_("_hotkeys",82,d1,8f,91)},
	{::hx::fsBool,(void *) &FlxScreenGrab_obj::_autoSave,HX_("_autoSave",ab,71,09,77)},
	{::hx::fsBool,(void *) &FlxScreenGrab_obj::_autoHideMouse,HX_("_autoHideMouse",d5,dc,67,87)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(void *) &FlxScreenGrab_obj::_region,HX_("_region",93,d2,03,6f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxScreenGrab_obj_sMemberFields[] = {
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void FlxScreenGrab_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxScreenGrab_obj::screenshot,"screenshot");
	HX_MARK_MEMBER_NAME(FlxScreenGrab_obj::_hotkeys,"_hotkeys");
	HX_MARK_MEMBER_NAME(FlxScreenGrab_obj::_autoSave,"_autoSave");
	HX_MARK_MEMBER_NAME(FlxScreenGrab_obj::_autoHideMouse,"_autoHideMouse");
	HX_MARK_MEMBER_NAME(FlxScreenGrab_obj::_region,"_region");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxScreenGrab_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxScreenGrab_obj::screenshot,"screenshot");
	HX_VISIT_MEMBER_NAME(FlxScreenGrab_obj::_hotkeys,"_hotkeys");
	HX_VISIT_MEMBER_NAME(FlxScreenGrab_obj::_autoSave,"_autoSave");
	HX_VISIT_MEMBER_NAME(FlxScreenGrab_obj::_autoHideMouse,"_autoHideMouse");
	HX_VISIT_MEMBER_NAME(FlxScreenGrab_obj::_region,"_region");
};

#endif

::hx::Class FlxScreenGrab_obj::__mClass;

static ::String FlxScreenGrab_obj_sStaticFields[] = {
	HX_("screenshot",66,36,b0,d9),
	HX_("_hotkeys",82,d1,8f,91),
	HX_("_autoSave",ab,71,09,77),
	HX_("_autoHideMouse",d5,dc,67,87),
	HX_("_region",93,d2,03,6f),
	HX_("defineCaptureRegion",df,b8,cb,18),
	HX_("clearCaptureRegion",4d,58,e4,41),
	HX_("defineHotKeys",26,1d,85,ab),
	HX_("clearHotKeys",14,56,2f,1e),
	HX_("grab",cc,cf,6b,44),
	HX_("fixFilename",bc,09,6f,69),
	HX_("save",3d,8b,4d,4c),
	::String(null())
};

void FlxScreenGrab_obj::__register()
{
	FlxScreenGrab_obj _hx_dummy;
	FlxScreenGrab_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.plugin.screengrab.FlxScreenGrab",06,c8,a4,a8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxScreenGrab_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxScreenGrab_obj::__SetStatic;
	__mClass->mMarkFunc = FlxScreenGrab_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxScreenGrab_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxScreenGrab_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxScreenGrab_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxScreenGrab_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxScreenGrab_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxScreenGrab_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxScreenGrab_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_729dc677b45cd42a_33_boot)
HXDLIN(  33)		_autoSave = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_729dc677b45cd42a_34_boot)
HXDLIN(  34)		_autoHideMouse = false;
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace plugin
} // end namespace screengrab
