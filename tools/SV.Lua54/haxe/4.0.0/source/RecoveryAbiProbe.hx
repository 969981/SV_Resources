/**
 * Stock Haxe→Lua smoke entry point.  Pure reconstructed utilities only.
 * This is not a game loader, full 4.0.0 Haxe source, or native runtime parity.
 */
class RecoveryAbiProbe {
    static function main():Void {
        var angle:Float = main.util.CompositionCamera.CalcXFov(1.0);
        var text:String = main.util.StrUtil.Format("%s:%d", "SV", 400);
        var clamped:Float = dll_util.MathUtil.Clamp(1.5, 0.0, 1.0);
        trace(angle);
        trace(text);
        trace(clamped);
        // dll_util.Assert.IsNull is extern-only and deliberately not invoked.
    }
}
