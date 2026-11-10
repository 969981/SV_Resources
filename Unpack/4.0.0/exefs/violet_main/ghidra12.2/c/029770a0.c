/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029770a0; name: FUN_029770a0
 */


bool FUN_029770a0(long param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined2 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  plVar3 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_3);
  uVar4 = FUN_029771b0(param_1,plVar3);
  bVar1 = (uVar4 & 1) != 0;
  if (bVar1) {
    local_88 = 0;
    local_84 = CONCAT26(local_84._6_2_,0x10001010000);
    local_7c = 0;
    local_74 = 0;
    local_6c = 0;
    local_64 = 0;
    uStack_60 = 0;
    uStack_5f = 0;
    uStack_5e = 0;
    uStack_5c = 0;
    uStack_5a = 0;
    local_90 = param_2;
    local_8c = param_3;
    uVar2 = (**(code **)(*plVar3 + 0x140))(plVar3);
    uVar2 = FUN_02944940(uVar2,4);
    local_88 = CONCAT22(local_88._2_2_,uVar2);
    local_7c = CONCAT44(param_3,0x820082);
    FUN_0293dcd0(param_1,&local_90);
    uStack_5e = 0;
    uStack_5c = 0;
    local_84 = 0;
    local_7c = 0;
    local_74 = 0;
    local_6c = 0;
    local_64 = 0;
    local_38 = 0;
    uStack_60 = 1;
    local_8c = 0x31;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_90 = param_2;
    local_88 = param_3;
    FUN_01852330(param_1,&local_90);
  }
  return bVar1;
}


