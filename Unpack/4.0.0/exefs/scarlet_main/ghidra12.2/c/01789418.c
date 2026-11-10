/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01789418; name: FUN_01789418
 */


void FUN_01789418(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_0178956c();
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = &DAT_045548c0;
  param_1[4] = &PTR_LAB_04554910;
  param_1[5] = &PTR_LAB_04554930;
  param_1[6] = &PTR_LAB_04554948;
  param_1[7] = &PTR_LAB_04554960;
  uVar1 = param_1[1];
  param_1[0xe] = 0x13b13b13b13b13b;
  param_1[0xf] = 0;
  param_1[0x15] = 0x155555555555555;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = uVar1;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = uVar1;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x82] = uVar1;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x89] = uVar1;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = uVar1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = uVar1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = uVar1;
  param_1[0x1d] = 0x7fffffffffffffff;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = uVar1;
  param_1[0x24] = 0x7fffffffffffffff;
  param_1[0x25] = 0;
  param_1[0x72] = 0xfffffffffffffff;
  param_1[0x79] = 0xfffffffffffffff;
  param_1[0x83] = 0xfffffffffffffff;
  param_1[0x8a] = 0xfffffffffffffff;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x8d),false,0);
  return;
}


