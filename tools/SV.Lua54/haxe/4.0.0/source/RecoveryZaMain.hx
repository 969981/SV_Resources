import main.util.CompositionCamera;
import main.util.StrUtil;
import main.field.action.ActionChair;
import main.battle.BattleViewBase;
import main.event.base.BaseBattleTalkEvent;
import main.field.behaviour.DanPartnerPokemon;
import main.field.behaviour.DanPokemonBehavior;
import main.battle.BattleView;
import main.event.base.BaseScenarioEvent;

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
        var partnerClass:Class<DanPartnerPokemon> = DanPartnerPokemon;
        var pokemonBehaviorClass:Class<DanPokemonBehavior> = DanPokemonBehavior;
        var battleViewClass:Class<BattleView> = BattleView;
        var scenarioClass:Class<BaseScenarioEvent> = BaseScenarioEvent;
        if (untyped __lua__("false")) {
            trace(chairClass);
            trace(battleClass);
            trace(eventClass);
            trace(partnerClass);
            trace(pokemonBehaviorClass);
            trace(battleViewClass);
            trace(scenarioClass);
            trace(angle);
            trace(format);
        }
    }
}
