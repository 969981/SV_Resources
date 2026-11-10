/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010496e4; name: FUN_010496e4
 */


undefined1  [16] FUN_010496e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_88 = *param_1;
  uStack_80 = param_1[1];
  local_78 = param_1[2];
  local_70 = param_1[3];
  uStack_68 = param_1[4];
  local_60 = param_1[5];
  uStack_58 = param_1[6];
  local_50 = param_1[7];
  uStack_48 = param_1[8];
  local_40 = param_1[9];
  uStack_38 = param_1[10];
  local_30 = param_1[0xb];
  uStack_28 = param_1[0xc];
  auVar1 = FUN_0088ba30(&local_88,param_2,param_3,0,0,0);
  uVar2 = auVar1._8_8_;
  *(undefined4 *)((long)param_1 + 0x14) = local_78._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)local_70;
  FUN_00884284(&local_88);
  auVar1._8_8_ = uVar2;
  return auVar1;
}


