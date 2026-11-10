package main.util;

/**
 * SV Violet 4.0.0 original main.blua: C23E5342B132D5323 /
 * S042B860498E558B2 static Format.
 * Root PC 427562..427567 -> Proto 36271, child PC 0..9 (10 ops).
 * Native child: string.format(format, a, b, c, d) via TAILCALL.
 *
 * This is a Haxe expression-level reconstruction; the generated Lua
 * and original game runtime are NOT verified equivalent.
 */
@:keep
@:hashAbi("C23E5342B132D5323")
@:native("C23E5342B132D5323")
class StrUtil {
    @:hashAbi("S042B860498E558B2")
    @:native("S042B860498E558B2")
    public static function Format(format:String, ?a:Dynamic, ?b:Dynamic,
                                  ?c:Dynamic, ?d:Dynamic):String {
        return lua.NativeStringTools.format(format, a, b, c, d);
    }
}
