package main.battle;

/**
 * Verified SV Violet 4.0.0 native instance no-op.
 * Class C2391C1B3E531D954 / F727F99876D3FB086 StartIdleCamera.
 * Root C->prototype[F] PC 90878; child Proto 6073, PC [0,1).
 * Raw native instruction 000100C7 = RETURN0. This does not claim
 * the remaining BattleViewBase methods are restored.
 */
@:keep
@:chunk("main")
@:hashAbi("C2391C1B3E531D954")
@:expose("C2391C1B3E531D954")
@:native("C2391C1B3E531D954")
class BattleViewBase {
    @:hashAbi("F727F99876D3FB086")
    @:native("F727F99876D3FB086")
    public function StartIdleCamera():Void {}
    // Original Child Proto 6063, PC [0,3),
    // code SHA-256 4d5ed3a67288f2780daa61419cd391da0d75b4af9c4e3e186c235c2dd3534b00; root PC held in methods.jsonl.
    // Raw opcode words: 7FFF8081 000200C8 000100C7
    @:hashAbi("FC95685167B63F601")
    @:native("FC95685167B63F601")
    public function GetBattleSystemId():Int {
        return 0;
    }

    // Original Child Proto 6070, PC [0,3),
    // code SHA-256 4d5ed3a67288f2780daa61419cd391da0d75b4af9c4e3e186c235c2dd3534b00; root PC held in methods.jsonl.
    // Raw opcode words: 7FFF8081 000200C8 000100C7
    @:hashAbi("F7F46BD950A5A80E5")
    @:native("F7F46BD950A5A80E5")
    public function GetClientID():Int {
        return 0;
    }

    // Original Child Proto 6071, PC [0,3),
    // code SHA-256 4d5ed3a67288f2780daa61419cd391da0d75b4af9c4e3e186c235c2dd3534b00; root PC held in methods.jsonl.
    // Raw opcode words: 7FFF8081 000200C8 000100C7
    @:hashAbi("F4D058594D675E2A9")
    @:native("F4D058594D675E2A9")
    public function GetFriendCleintID():Int {
        return 0;
    }

    // Original Child Proto 6072, PC [0,3),
    // code SHA-256 4d5ed3a67288f2780daa61419cd391da0d75b4af9c4e3e186c235c2dd3534b00; root PC held in methods.jsonl.
    // Raw opcode words: 7FFF8081 000200C8 000100C7
    @:hashAbi("FD0828652DFC8293C")
    @:native("FD0828652DFC8293C")
    public function GetGameTime():Int {
        return 0;
    }

    // Original Child Proto 6075, PC [0,3),
    // code SHA-256 91732133a4bcf6dfe447c828111fb263dd03fb27df5609606d0b32709141868f; root PC held in methods.jsonl.
    // Raw opcode words: 00000085 000200C8 000100C7
    @:hashAbi("FB3C8B5D3FCDD8782")
    @:native("FB3C8B5D3FCDD8782")
    public function IsIdleCameraPlaying():Bool {
        return false;
    }

    // Original Child Proto 6029, PC [0,3),
    // code SHA-256 91732133a4bcf6dfe447c828111fb263dd03fb27df5609606d0b32709141868f; root PC held in methods.jsonl.
    // Raw opcode words: 00000085 000200C8 000100C7
    @:hashAbi("F2AFD78788A638BDF")
    @:native("F2AFD78788A638BDF")
    public function IsViewer():Bool {
        return false;
    }

    // R14 original Child Proto 6088: two_ordered_self_writes
    // native child SHA-256: 4a3c346a885cc52f4e2d103a4c50f22239bfe3b4c5187a0f147a944fe5b8969b
    // native opcode words: 01240011 02250011 000101C7
    @:hashAbi("FB84018749A6E841C")
    @:native("FB84018749A6E841C")
    public function SetShowBattleMessageState(first:Dynamic,second:Dynamic):Void {
        untyped this[36] = first;
        untyped this[37] = second;
    }

}
