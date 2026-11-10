/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019b2e24; name: FUN_019b2e24
 */


void FUN_019b2e24(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  FUN_019b2e9c();
  *param_1 = &DAT_045ce578;
  param_1[10] = 0;
  param_1[4] = &PTR_LAB_045ce5f8;
  param_1[5] = &DAT_045ce648;
  param_1[9] = 0;
  FUN_019b2fbc(param_1 + 9,param_3);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_019de648(param_1 + 0xb,param_4);
  *(byte *)(param_1 + 0xd) = param_5 & 1;
  return;
}


