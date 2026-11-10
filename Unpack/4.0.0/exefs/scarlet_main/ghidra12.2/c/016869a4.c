/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016869a4; name: FUN_016869a4
 */


void FUN_016869a4(undefined8 *param_1,undefined8 param_2)

{
  param_1[4] = 0x3fffffffffffffff;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  return;
}


