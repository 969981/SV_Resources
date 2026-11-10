import dll_util.MathUtil;
import cppbindings.C016374C1;

/**
 * Typecheck the pinned upstream cppbindings interface but do not invoke
 * the native engine.  The ZA native C++ ABI has NOT been checked for SV400.
 */
class RecoveryZaDllUtil {
    static function acceptNativeReference(value:C016374C1):Void {}

    static function main():Void {
        var value:Float = MathUtil.Clamp(1.5, 0.0, 1.0);
        if (untyped __lua__("false")) {
            trace(value);
            acceptNativeReference(null);
        }
    }
}
