import main.util.CompositionCamera;
import main.util.StrUtil;
import main.field.action.ActionChair;
import main.battle.BattleViewBase;
import main.event.base.BaseBattleTalkEvent;

/**
 * ABI integration probe, not original SV root or gameplay loader.
 * Keep mapped statics referenced so -dce full can retain their type.
 */
class RecoveryZaMain {
    static function main():Void {
        var angle:Float = CompositionCamera.CalcXFov(1.0);
        var format:String = StrUtil.Format("%s:%d", "SV", 400);
        // Force Haxe typechecking/registration for three exact native
        // RETURN0 instance methods. No game API calls or constructors used.
        var chairClass:Class<ActionChair> = ActionChair;
        var battleClass:Class<BattleViewBase> = BattleViewBase;
        var eventClass:Class<BaseBattleTalkEvent> = BaseBattleTalkEvent;
        if (untyped __lua__("false")) {
            trace(chairClass);
            trace(battleClass);
            trace(eventClass);
            trace(angle);
            trace(format);
        }
    }
}
