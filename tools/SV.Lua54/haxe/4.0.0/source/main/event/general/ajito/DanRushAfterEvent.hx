package main.event.general.ajito;

/** R12 native SV400 method; other members are NOT recovered.
 * Original main.blua SHA-256: c1a4f4e2625912cf0b739a642a79ba3357df0557a544b92da22a6cb139de2815
 * Native C class: C9B7934A3811EE858; original Proto/PC in methods.jsonl.
 */
@:keep
@:chunk("main")
@:hashAbi("C9B7934A3811EE858")
@:expose("C9B7934A3811EE858")
@:native("C9B7934A3811EE858")
class DanRushAfterEvent {
    // R12 original Child Proto 2183: min_max_clamp
    // Child code SHA-256: 36f6a140fa6b6ca678fe4fc9034cf1041ecc065e985f18eac6a47f3b791df3a8
    // Raw opcode words: 000200BA 80000038 00020080 000101BA 80000038 00030080 000200C8 00010247
    @:hashAbi("FC578F301CC83391C")
    @:native("FC578F301CC83391C")
    public function clamp(value:Dynamic,min:Dynamic,max:Dynamic):Dynamic {
        if (value < min) value = min;
        if (max < value) value = max;
        return value;
    }

}
