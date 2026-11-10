/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026e29d8; name: FUN_026e29d8
 */


void FUN_026e29d8(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined2 param_4)

{
  FUN_026d505c();
  *param_1 = &PTR_FUN_045cccf8;
  param_1[4] = &PTR_LAB_045cce98;
  param_1[5] = &DAT_045ccfc0;
  param_1[6] = &PTR_LAB_045cd018;
  param_1[7] = &PTR_LAB_045cd040;
  *(undefined4 *)((long)param_1 + 0x134) = 1;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x27) = param_3;
  *(undefined2 *)((long)param_1 + 0x13a) = param_4;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = param_1[1];
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0xfffffffffffffff;
  param_1[0x33] = 0;
  FUN_00c6a514(param_1 + 7,0x82);
  return;
}


