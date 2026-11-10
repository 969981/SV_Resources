package main.battle.ui;

/** Evidence-gated SV400 original native F method, other members not recovered.
 * Source main.blua SHA256 c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815; Child Proto 8129; Root PC 115070.
 */
@:keep
@:chunk("main")
@:hashAbi("C4F1A34491D82F27A")
@:expose("C4F1A34491D82F27A")
@:native("C4F1A34491D82F27A")
class BattleUiTokuseiWindow {
    // R14 original Child Proto 8129: integer_or_two_branches
    // native child SHA-256: 99316620dd8035761b87b521b3415b0d6c810fca1fa09bd5b3fd0b61f009d70d
    // native opcode words: 008080BD 800000B8 008200BD 800000B8 00000107 00020148 00000105 00020148 00010147
    @:hashAbi("F6AB89754286E2CDB")
    @:native("F6AB89754286E2CDB")
    public function IsEnemy(value:Dynamic):Bool {
        return value == 1 || value == 3;
    }

}
