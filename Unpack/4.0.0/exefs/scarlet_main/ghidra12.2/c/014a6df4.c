/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014a6df4; name: FUN_014a6df4
 */


void FUN_014a6df4(long param_1,uint param_2,int param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  long local_88;
  char local_80 [64];
  
  local_80[0x30] = '\0';
  local_80[0x31] = '\0';
  local_80[0x32] = '\0';
  local_80[0x33] = '\0';
  local_80[0x34] = '\0';
  local_80[0x35] = '\0';
  local_80[0x36] = '\0';
  local_80[0x37] = '\0';
  local_80[0x38] = '\0';
  local_80[0x39] = '\0';
  local_80[0x3a] = '\0';
  local_80[0x3b] = '\0';
  local_80[0x3c] = '\0';
  local_80[0x3d] = '\0';
  local_80[0x3e] = '\0';
  local_80[0x3f] = '\0';
  local_80[0x20] = '\0';
  local_80[0x21] = '\0';
  local_80[0x22] = '\0';
  local_80[0x23] = '\0';
  local_80[0x24] = '\0';
  local_80[0x25] = '\0';
  local_80[0x26] = '\0';
  local_80[0x27] = '\0';
  local_80[0x28] = '\0';
  local_80[0x29] = '\0';
  local_80[0x2a] = '\0';
  local_80[0x2b] = '\0';
  local_80[0x2c] = '\0';
  local_80[0x2d] = '\0';
  local_80[0x2e] = '\0';
  local_80[0x2f] = '\0';
  local_80[0x10] = '\0';
  local_80[0x11] = '\0';
  local_80[0x12] = '\0';
  local_80[0x13] = '\0';
  local_80[0x14] = '\0';
  local_80[0x15] = '\0';
  local_80[0x16] = '\0';
  local_80[0x17] = '\0';
  local_80[0x18] = '\0';
  local_80[0x19] = '\0';
  local_80[0x1a] = '\0';
  local_80[0x1b] = '\0';
  local_80[0x1c] = '\0';
  local_80[0x1d] = '\0';
  local_80[0x1e] = '\0';
  local_80[0x1f] = '\0';
  local_80[0] = '\0';
  local_80[1] = '\0';
  local_80[2] = '\0';
  local_80[3] = '\0';
  local_80[4] = '\0';
  local_80[5] = '\0';
  local_80[6] = '\0';
  local_80[7] = '\0';
  local_80[8] = '\0';
  local_80[9] = '\0';
  local_80[10] = '\0';
  local_80[0xb] = '\0';
  local_80[0xc] = '\0';
  local_80[0xd] = '\0';
  local_80[0xe] = '\0';
  local_80[0xf] = '\0';
  snprintf(local_80,0x40,"L_icon_box_%03d/N_icon_item_00",param_3);
  FUN_01343c78(&local_88,local_80);
  plVar2 = (long *)(param_1 + (ulong)param_2 * 0x10 + 0x38);
  plVar1 = (long *)*plVar2;
  *plVar2 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *plVar2 = local_88;
  snprintf(local_80,0x40,"L_icon_box_%03d/P_icon_item_00",param_3);
  FUN_01343c78(&local_88,local_80);
  plVar2 = (long *)(param_1 + (ulong)param_2 * 0x10 + 0x40);
  plVar1 = (long *)*plVar2;
  *plVar2 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *plVar2 = local_88;
  *(char *)(param_1 + 0xb38 + (ulong)param_2) = (char)param_2;
  *(char *)(param_1 + 0xb38 + (ulong)param_4) = (char)param_2;
  return;
}


