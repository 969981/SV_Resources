/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010711ec; name: FUN_010711ec
 */


void FUN_010711ec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_14;
  
  local_58 = FUN_015799ec();
  local_50 = FUN_01579924(param_1);
  local_48 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  local_40 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10);
  local_38 = FUN_0106f870(param_1);
  local_14 = 0;
  FUN_010713d0(&local_78,*(undefined8 *)(param_1 + 8),&local_14,&local_58);
  uVar1 = local_78;
  local_78 = 0;
  lVar2 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  if (lVar2 != 0) {
    FUN_01071564((undefined8 *)(param_1 + 0x60));
  }
  *(undefined8 *)(param_1 + 0x68) = uStack_68;
  *(undefined8 *)(param_1 + 0x70) = local_60;
  *(undefined8 *)(param_1 + 0x60) = local_70;
  local_14 = 1;
  FUN_010713d0(&local_78,*(undefined8 *)(param_1 + 8),&local_14,&local_58);
  uVar1 = local_78;
  local_78 = 0;
  lVar2 = *(long *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  if (lVar2 != 0) {
    FUN_01071564((undefined8 *)(param_1 + 0x80));
  }
  *(undefined8 *)(param_1 + 0x88) = uStack_68;
  *(undefined8 *)(param_1 + 0x90) = local_60;
  *(undefined8 *)(param_1 + 0x80) = local_70;
  local_14 = 2;
  FUN_010713d0(&local_78,*(undefined8 *)(param_1 + 8),&local_14,&local_58);
  uVar1 = local_78;
  local_78 = 0;
  lVar2 = *(long *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  if (lVar2 != 0) {
    FUN_01071564((undefined8 *)(param_1 + 0xa0));
  }
  *(undefined8 *)(param_1 + 0xa8) = uStack_68;
  *(undefined8 *)(param_1 + 0xb0) = local_60;
  *(undefined8 *)(param_1 + 0xa0) = local_70;
  local_14 = 3;
  FUN_010713d0(&local_78,*(undefined8 *)(param_1 + 8),&local_14,&local_58);
  uVar1 = local_78;
  local_78 = 0;
  lVar2 = *(long *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  if (lVar2 != 0) {
    FUN_01071564((undefined8 *)(param_1 + 0xc0));
  }
  *(undefined8 *)(param_1 + 200) = uStack_68;
  *(undefined8 *)(param_1 + 0xd0) = local_60;
  *(undefined8 *)(param_1 + 0xc0) = local_70;
  local_14 = 4;
  FUN_010713d0(&local_78,*(undefined8 *)(param_1 + 8),&local_14,&local_58);
  uVar1 = local_78;
  local_78 = 0;
  lVar2 = *(long *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  if (lVar2 != 0) {
    FUN_01071564((undefined8 *)(param_1 + 0xe0));
  }
  *(undefined8 *)(param_1 + 0xe8) = uStack_68;
  *(undefined8 *)(param_1 + 0xf0) = local_60;
  *(undefined8 *)(param_1 + 0xe0) = local_70;
  return;
}


