/** Optional Lua-target build smoke test only; not native game verification. */
class RecoveryAbiProbe {
    static function main():Void {
        var angle:Float = main.util.CompositionCamera.CalcXFov(1.0);
        trace(angle);
    }
}
