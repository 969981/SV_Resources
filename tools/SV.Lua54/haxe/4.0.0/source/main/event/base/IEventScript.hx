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

    // R14 original Child Proto 670: write_field_return_argument
    // native child SHA-256: 2d0914043a4535ecab0476d5f819692b8476f19f9a861a9b6f61885689ad6f79
    // native opcode words: 1600010D 01000112 000200C8 00010147
    @:hashAbi("FA44A9D9B3415C01C")
    @:native("FA44A9D9B3415C01C")
    public function set_CallFromReserve(value:Dynamic):Dynamic {
        untyped this[22]["callFromReserve"] = value;
        return value;
    }

    // R14 original Child Proto 674: write_field_readback
    // native child SHA-256: 34155c7931b8ff40cab04a5e5839e90737cbd95fa0b32d777698d6c6f9992daa
    // native opcode words: 1600010D 01000112 1600010D 0002010E 00020148 00010147
    @:hashAbi("F275008C3DA7BD42B")
    @:native("F275008C3DA7BD42B")
    public function set_DisableFieldCamera(value:Dynamic):Dynamic {
        untyped this[22]["disableFieldCamera"] = value;
        return untyped this[22]["disableFieldCamera"];
    }

}
