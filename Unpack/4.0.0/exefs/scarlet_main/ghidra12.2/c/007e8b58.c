/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e8b58; name: FUN_007e8b58
 */


long * FUN_007e8b58(long *param_1)

{
  FUN_007e88d4();
  *param_1 = (long)(PTR_DAT_047d14c8 + 0x10);
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_007ed278(param_1 + 10);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = (long)param_1;
  param_1[0x1c] = 0;
  return param_1 + 0x1d;
}


