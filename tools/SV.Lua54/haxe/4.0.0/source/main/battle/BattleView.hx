package main.battle;

/**
 * Evidence-gated SV 4.0.0 Haxe source (restricted CFG/HIR/AST backend).
 * Class: main.battle.BattleView / CA5A5606298DDCB29
 * Original main.blua SHA-256: c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815
 * Only the listed methods are restored; other original class methods
 * are NOT represented. Original ROM bytes are never modified.
 */
@:keep
@:chunk("main")
@:hashAbi("CA5A5606298DDCB29")
@:expose("CA5A5606298DDCB29")
@:native("CA5A5606298DDCB29")
class BattleView {
    // Original Child Proto 6349, PC [0,3),
    // code SHA-256 d2731e8256d7b336ff736938eb340653322d3f969bea1f6e9fec39540042ec30; root PC held in methods.jsonl.
    // Raw opcode words: 80958081 000200C8 000100C7
    @:hashAbi("F1E76EA24E515CC0D")
    @:native("F1E76EA24E515CC0D")
    public function GetIntervalAddPopup():Int {
        return 300;
    }

    // R12 original Child Proto 6367: self_slot_get
    // Child code SHA-256: b2eef9b8c325ae98d1130b402580959d50f45fe7f0a6747c29280d0530163f06
    // Raw opcode words: 5600008D 000200C8 000100C7
    @:hashAbi("FC4F4F6E68A4F6294")
    @:native("FC4F4F6E68A4F6294")
    public function GetGemEnableCount():Dynamic {
        return untyped this[86];
    }

    // R12 original Child Proto 6366: self_slot_set
    // Child code SHA-256: 53fce11104fa62b498c2bad96134fa01c515915bedb1bf028a4853ba1611b585
    // Raw opcode words: 01560011 00010147
    @:hashAbi("FC38443D88FBF1318")
    @:native("FC38443D88FBF1318")
    public function SetGemEnableCount(value:Dynamic):Void {
        untyped this[86] = value;
    }

}
