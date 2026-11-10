/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012b1674; name: FUN_012b1674
 */


void FUN_012b1674(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  *param_1 = &PTR_FUN_045ac8f0;
  param_1[1] = 0;
  param_1[2] = &PTR_FUN_045ac910;
  param_1[0x48] = 0x3f0000003f4f04ff;
  param_1[0x47] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  *(undefined2 *)(param_1 + 0x49) = 0;
  *(undefined4 *)((long)param_1 + 0x24c) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FUN_012b1750(&local_40,param_2);
  uVar1 = local_40;
  local_40 = 0;
  lVar2 = param_1[0x44];
  param_1[0x44] = uVar1;
  if (lVar2 != 0) {
    FUN_012dad78(param_1 + 0x45);
  }
  param_1[0x45] = local_38;
  param_1[0x46] = uStack_30;
  param_1[0x47] = local_28;
  return;
}


