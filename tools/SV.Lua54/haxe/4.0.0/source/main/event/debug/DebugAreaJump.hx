package main.event.debug;

/** SV400 original Child Lua54 exact named-field AST; other methods not recovered.
 * main.blua SHA256 c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815
 * Original Proto 11176, Root PC 141665, Key skipPlayerStuckCheck
 */
@:keep
@:chunk("main")
@:hashAbi("CB35C3643C0F161F3")
@:expose("CB35C3643C0F161F3")
@:native("CB35C3643C0F161F3")
class DebugAreaJump {
    // R12 original Child Proto 11176: self_field_set_true
    // Child code SHA-256: d4551392fe32f1eaa3dfd7076f932739329954a1ed6dacf0a1ab9d99868d1360
    // Raw opcode words: 1600008D 01008092 000100C7
    @:hashAbi("FC87C731D11C58354")
    @:native("FC87C731D11C58354")
    public function onCreate():Void {
        untyped this[22]["skipPlayerStuckCheck"] = true;
    }

}
