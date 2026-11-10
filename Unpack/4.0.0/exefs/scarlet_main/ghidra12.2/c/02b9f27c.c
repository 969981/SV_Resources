/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b9f27c; name: FUN_02b9f27c
 */


undefined1  [16] FUN_02b9f27c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_4_ = ABS((float)*param_1);
  auVar1._4_4_ = ABS((float)((ulong)*param_1 >> 0x20));
  auVar1._8_4_ = ABS((float)param_1[1]);
  auVar1._12_4_ = ABS((float)((ulong)param_1[1] >> 0x20));
  return auVar1;
}


