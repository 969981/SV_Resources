package dll_util;

/**
 * Recovered from SV Violet 4.0.0 original dll_util.blua.
 * CED59418C4CAB0EC4 / S05B90B9B5A6DE6BC.
 * Root PC 270 GETTABUP, 271 CLOSURE, 272 SETFIELD
 * -> Proto 76 (8 native instructions, byte offset 13663).
 * Stock Haxe 4.3.7 Lua smoke compiled/ran; native game semantics and bytecode differential NOT verified.
 */
@:keep
@:chunk("dll_util")
@:hashAbi("CED59418C4CAB0EC4")
@:expose("CED59418C4CAB0EC4")
@:native("CED59418C4CAB0EC4")
class MathUtil {
    @:hashAbi("S05B90B9B5A6DE6BC")
    @:native("S05B90B9B5A6DE6BC")
    public static function Clamp(value:Float, min:Float, max:Float):Float {
        if (value < min) {
            value = min;
        }
        if (max < value) {
            value = max;
        }
        return value;
    }
}
