/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02965670; name: FUN_02965670
 */


void FUN_02965670(long param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5e;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  local_8c = 0x1a;
  local_5e = 0;
  local_84 = 0;
  local_7c = 0;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  local_38 = 0;
  local_60 = 1;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_90 = param_2;
  uStack_88 = param_2;
  FUN_01852330(param_1,&local_90);
  local_5e = 0;
  local_84 = 0;
  local_7c = 0;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  local_38 = 0;
  local_60 = 1;
  local_8c = 0x28;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_90 = param_2;
  uStack_88 = param_2;
  FUN_01852330(param_1,&local_90);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  plVar3 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 8) + 0x30),param_2);
  uVar1 = *(undefined2 *)(*(long *)(param_1 + 0x48) + 0x30);
  uVar2 = (**(code **)(*plVar3 + 0x98))();
  FUN_02960d60(uVar4,uVar2,uVar1);
  return;
}


