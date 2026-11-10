/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017484d4; name: FUN_017484d4
 */


void FUN_017484d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_01748590();
  *param_1 = &DAT_045546a0;
  param_1[4] = &PTR_LAB_045546f0;
  param_1[5] = &PTR_LAB_04554710;
  param_1[6] = &PTR_LAB_04554728;
  param_1[7] = &PTR_LAB_04554740;
  nn::os::InitializeMutex((MutexType *)(param_1 + 8),true,0);
  uVar1 = param_1[1];
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0xaaaaaaaaaaaaaaa;
  param_1[0x13] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = uVar1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = uVar1;
  param_1[0x19] = 0xaaaaaaaaaaaaaaa;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = uVar1;
  param_1[0x20] = 0xaaaaaaaaaaaaaaa;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = uVar1;
  param_1[0x27] = 0x7ffffffffffffff;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = uVar1;
  param_1[0x2e] = 0xaaaaaaaaaaaaaaa;
  param_1[0x2f] = 0;
  return;
}


