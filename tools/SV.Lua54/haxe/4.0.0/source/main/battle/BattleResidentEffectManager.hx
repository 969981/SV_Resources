package main.battle;

/** SV400 original Child Lua54 exact named-field AST; other methods not recovered.
 * main.blua SHA256 c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815
 * Original Proto 5683, Root PC 87331, Key length
 */
@:keep
@:chunk("main")
@:hashAbi("C46AA0D78DCA3D948")
@:expose("C46AA0D78DCA3D948")
@:native("C46AA0D78DCA3D948")
class BattleResidentEffectManager {
    // R12 original Child Proto 5683: self_field_get
    // Child code SHA-256: fab58ca90c556a4c00b014eb1af17c7a773099972e19c3b58c22198f38ed8268
    // Raw opcode words: 0100008D 0001008E 000200C8 000100C7
    @:hashAbi("FC3C074A28D3E9B8A")
    @:native("FC3C074A28D3E9B8A")
    public function GetResidentEffectNum():Dynamic {
        return untyped this[1]["length"];
    }

}
