package main.util;

/**
 * SV-script reference translated from older SV Lua (not SV 4.0.0).
 * Reference: Martmists-GH/SV-Script-RE / Reisyukaku/ZAScripts.
 * No original 4.0.0 Proto ID or PC has been assigned.
 */
@:keep
@:hashAbi("CFEA9C3BFB3FCD429")
@:native("CFEA9C3BFB3FCD429")
class CompositionCamera {
    @:hashAbi("S424E3EA0446070E7")
    @:native("S424E3EA0446070E7")
    public static function CalcXFov(fovy:Float):Float {
        return Math.atan2(960.0, 540.0 / Math.tan(fovy / 2.0)) * 2.0;
    }
}
