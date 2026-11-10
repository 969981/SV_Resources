package main.field.action.base;

/**
 * Evidence-gated SV 4.0.0 Haxe source (restricted CFG/HIR/AST backend).
 * Class: main.field.action.base.IAction / C4247142D7AED2C4E
 * Original main.blua SHA-256: c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815
 * Only the listed methods are restored; other original class methods
 * are NOT represented. Original ROM bytes are never modified.
 */
@:keep
@:chunk("main")
@:hashAbi("C4247142D7AED2C4E")
@:expose("C4247142D7AED2C4E")
@:native("C4247142D7AED2C4E")
class IAction {
    // Original Child Proto 12942, PC [0,3),
    // code SHA-256 e9f48d387cd2b22b8450386cf2338edcdd12a60d4de74e3a1d85798327704c2a; root PC held in methods.jsonl.
    // Raw opcode words: 00000087 000200C8 000100C7
    @:hashAbi("F22C7B81A049FA20D")
    @:native("F22C7B81A049FA20D")
    public function onSetup():Bool {
        return true;
    }

    // Original Child Proto 12948, PC [0,3),
    // code SHA-256 91732133a4bcf6dfe447c828111fb263dd03fb27df5609606d0b32709141868f; root PC held in methods.jsonl.
    // Raw opcode words: 00000085 000200C8 000100C7
    @:hashAbi("F97D80368ACC86AEF")
    @:native("F97D80368ACC86AEF")
    public function onTerminate():Bool {
        return false;
    }

}
