/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017ec3a0; name: FUN_017ec3a0
 */


void FUN_017ec3a0(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_017ec4a4();
  *param_1 = &PTR_FUN_045683b0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar1 = PTR_DAT_047d8e88 + 0x10;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = puVar1;
  param_1[4] = &PTR_LAB_045683e0;
  param_1[5] = puVar1;
  param_1[0xc] = 0;
  param_1[0xd] = puVar1;
  param_1[0x1c] = 0;
  param_1[0x1d] = puVar1;
  param_1[0x26] = 0;
  param_1[0x27] = param_1[1];
  param_1[0x2b] = 0;
  param_1[0x2c] = param_1[1];
  *(undefined4 *)(param_1 + 0x31) = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0x492492492492492;
  param_1[0x29] = 0;
  param_1[0x2d] = 0x492492492492492;
  param_1[0x2e] = 0;
  FUN_017ec464(param_1 + 0x32);
  FUN_017ecc0c(param_1);
  return;
}


