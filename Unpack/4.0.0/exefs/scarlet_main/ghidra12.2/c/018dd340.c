/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018dd340; name: FUN_018dd340
 */


void FUN_018dd340(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long local_130;
  undefined8 local_128 [2];
  undefined8 local_118 [4];
  undefined1 auStack_f8 [136];
  undefined1 local_70 [16];
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_28;
  
  auVar3 = FUN_018dd480();
  FUN_018dd650(&local_60,*(undefined8 *)(param_1 + 0x40));
  FUN_018dd988(auStack_f8);
  FUN_018dd980(auStack_f8);
  local_70 = auVar3;
  FUN_018dd540(local_118,&DAT_03bf391f);
  FUN_018dd768(local_128,auStack_f8,local_118);
  lVar2 = local_60;
  FUN_018dd4a4(local_60 + 0x28,auStack_f8);
  *(undefined1 (*) [16])(local_60 + 0xb0) = local_70;
  FUN_018dd4f0(local_118);
  FUN_018dd4c8(local_60 + 8,local_118);
  *(undefined1 *)(local_60 + 0x294) = 0;
  *(undefined8 *)(local_60 + 0x28c) = 0x3e800002710;
  *(undefined8 *)(local_60 + 0x20) = 0;
  local_60 = 0;
  lVar1 = *(long *)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = lVar2;
  if (lVar1 != 0) {
    FUN_0284d674(param_1 + 0x58);
    lVar2 = *(long *)(param_1 + 0x50);
  }
  *(undefined8 *)(param_1 + 0x58) = local_58;
  *(undefined8 *)(param_1 + 0x60) = uStack_50;
  *(undefined8 *)(param_1 + 0x68) = local_48;
  local_130 = param_1;
  local_28 = lVar2;
  FUN_018dd5b4(local_128,*(undefined8 *)(param_1 + 0x40),(undefined8 *)(param_1 + 0x40),&local_28,
               &local_130);
  local_118[0] = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_018dd220(local_118);
  *(undefined8 *)(param_1 + 0x48) = local_128[0];
  FUN_018dd490(auStack_f8);
  return;
}


