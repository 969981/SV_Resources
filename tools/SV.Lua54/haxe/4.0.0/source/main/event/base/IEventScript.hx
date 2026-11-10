package main.event.base;

/**
 * Evidence-gated SV 4.0.0 Haxe source (restricted CFG/HIR/AST backend).
 * Class: main.event.base.IEventScript / C84BB2B6259521D93
 * Original main.blua SHA-256: c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815
 * Only the listed methods are restored; other original class methods
 * are NOT represented. Original ROM bytes are never modified.
 */
@:keep
@:chunk("main")
@:hashAbi("C84BB2B6259521D93")
@:expose("C84BB2B6259521D93")
@:native("C84BB2B6259521D93")
class IEventScript {
    // Original Child Proto 639, PC [0,3),
    // code SHA-256 e9f48d387cd2b22b8450386cf2338edcdd12a60d4de74e3a1d85798327704c2a; root PC held in methods.jsonl.
    // Raw opcode words: 00000087 000200C8 000100C7
    @:hashAbi("FE9E24103D8C29D2C")
    @:native("FE9E24103D8C29D2C")
    public function checkBootCondition():Bool {
        return true;
    }

    // R12 original Child Proto 669: self_field_get
    // Child code SHA-256: 9f76534abc0d64513c1e2f8228acc2349606ecd9cccd8b5cd1b2919be0791eb7
    // Raw opcode words: 1600008D 0001008E 000200C8 000100C7
    @:hashAbi("F77BBD39690411500")
    @:native("F77BBD39690411500")
    public function get_CallFromReserve():Dynamic {
        return untyped this[22]["callFromReserve"];
    }

}
