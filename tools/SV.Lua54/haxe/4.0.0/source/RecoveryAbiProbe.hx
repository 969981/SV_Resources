import main.util.CompositionCamera;
import main.util.StrUtil;
import dll_util.MathUtil;

/**
 * Stock Haxe→Lua smoke entry point. Pure reconstructed utilities only.
 * No game loader or native gameplay equivalence is claimed.
 */
class RecoveryAbiProbe {
    static function main():Void {
        var angle:Float = CompositionCamera.CalcXFov(1.0);
        var text:String = StrUtil.Format("%s:%d", "SV", 400);
        var clamped:Float = MathUtil.Clamp(1.5, 0.0, 1.0);
        trace(angle);
        trace(text);
        trace(clamped);
        // dll_util.Assert.IsNull is extern-only; it is not invoked.
    }
}
