package main.util;

/**
 * SV Violet 4.0.0 ORIGINAL native root C->S closure binding is proven.
 * Class CFEA9C3BFB3FCD429, static CalcXFov S424E3EA0446070E7.
 * main.blua SHA c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815
 * Root PC 426666-426671 -> child Proto 36158, child PC 0-15 (16 opcodes).
 *
 * Native expression agrees structurally with prior SV Lua reference.
 * Haxe compilation, emitted Lua parity and game runtime parity are NOT_RUN.
 */
@:keep
@:hashAbi("CFEA9C3BFB3FCD429")
@:native("CFEA9C3BFB3FCD429")
class CompositionCamera {
    @:hashAbi("S424E3EA0446070E7")
    @:native("S424E3EA0446070E7")
    public static function CalcXFov(fovy:Float):Float {
        // 4.0.0 native PC 0..14:
        // math.atan2(960.0, 540.0 / math.tan(fovy / 2)) * 2
        return lua.Math.atan2(960.0, 540.0 / lua.Math.tan(fovy / 2.0)) * 2.0;
    }
}
