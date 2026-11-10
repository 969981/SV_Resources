package dll_util;

/**
 * SV Violet 4.0.0 original dll_util.blua C→S static binding:
 * CE5FCD7D9D8F34718 / SB859A84B9E933D14;
 * root PC 243..245 -> child Proto 69, child PC [0,4).
 *
 * Native child (2 params) uses EQK/JMP/LOADK/RETURN0. Its original
 * high-level Haxe expression/intent has not been proven. Only an extern
 * ABI declaration is provided, not a fabricated body.
 */
@:keep
@:hashAbi("CE5FCD7D9D8F34718")
@:native("CE5FCD7D9D8F34718")
extern class Assert {
    @:hashAbi("SB859A84B9E933D14")
    @:native("SB859A84B9E933D14")
    public static function IsNull(arg0:Dynamic, arg1:Dynamic):Void;
}
