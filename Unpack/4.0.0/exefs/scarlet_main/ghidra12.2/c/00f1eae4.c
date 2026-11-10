/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f1eae4; name: FUN_00f1eae4
 */


undefined1  [32] FUN_00f1eae4(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [32];
  
  auVar1._16_16_ = NEON_fmax(param_1[1],param_2[1],4);
  auVar1._0_16_ = NEON_fmin(*param_1,*param_2,4);
  return auVar1;
}


