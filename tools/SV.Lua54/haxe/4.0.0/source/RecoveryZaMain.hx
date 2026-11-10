import main.util.CompositionCamera;
import main.util.StrUtil;

/**
 * ABI integration probe, not original SV root or gameplay loader.
 * Keep mapped statics referenced so -dce full can retain their type.
 */
class RecoveryZaMain {
    static function main():Void {
        var angle:Float = CompositionCamera.CalcXFov(1.0);
        var format:String = StrUtil.Format("%s:%d", "SV", 400);
        if (untyped __lua__("false")) {
            trace(angle);
            trace(format);
        }
    }
}
