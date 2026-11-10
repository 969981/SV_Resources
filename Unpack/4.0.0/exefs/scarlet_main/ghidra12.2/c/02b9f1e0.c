/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b9f1e0; name: FUN_02b9f1e0
 */


undefined1  [16] FUN_02b9f1e0(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 *param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._4_4_ = (float)((ulong)*param_3 >> 0x20) + param_2._4_4_ * param_1._4_4_;
  auVar1._0_4_ = (float)*param_3 + param_2._0_4_ * param_1._0_4_;
  auVar1._12_4_ = (float)((ulong)param_3[1] >> 0x20) + param_2._12_4_ * param_1._12_4_;
  auVar1._8_4_ = (float)param_3[1] + param_2._8_4_ * param_1._8_4_;
  return auVar1;
}


