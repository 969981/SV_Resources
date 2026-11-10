/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01762ce0; name: FUN_01762ce0
 */


void FUN_01762ce0(long param_1)

{
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  char *local_58;
  char *local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined *local_8;
  
  local_8 = &DAT_03c491f1;
  local_50 = "Player";
  puStack_48 = &DAT_03c4270d;
  local_58 = "Common";
  local_60 = "Event";
  local_40 = *(undefined8 *)(param_1 + 8);
  local_28 = 0;
  local_38 = 0x7ffffffffffffff;
  uStack_30 = 0;
  FUN_01762e74(&local_98,&local_40);
  FUN_01763798(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x50) = local_70;
  *(undefined8 *)(param_1 + 0x58) = uStack_68;
  *(undefined8 *)(param_1 + 0x40) = local_80;
  *(undefined8 *)(param_1 + 0x48) = uStack_78;
  *(undefined8 *)(param_1 + 0x28) = local_98;
  *(undefined8 *)(param_1 + 0x30) = local_90;
  *(undefined8 *)(param_1 + 0x38) = local_88;
  local_40 = *(undefined8 *)(param_1 + 8);
  local_28 = 0;
  local_38 = 0xffffffffffffffff;
  uStack_30 = 0;
  FUN_01762df0(&local_98,&local_40);
  FUN_01762f08(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x88) = local_70;
  *(undefined8 *)(param_1 + 0x90) = uStack_68;
  *(undefined8 *)(param_1 + 0x78) = local_80;
  *(undefined8 *)(param_1 + 0x80) = uStack_78;
  *(undefined8 *)(param_1 + 0x60) = local_98;
  *(undefined8 *)(param_1 + 0x68) = local_90;
  *(undefined8 *)(param_1 + 0x70) = local_88;
  FUN_017631b4(*(undefined8 *)(param_1 + 0x28),&local_8,&puStack_48,&local_50,&local_58,&local_60);
  return;
}


