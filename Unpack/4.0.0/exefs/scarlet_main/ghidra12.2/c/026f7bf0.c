/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f7bf0; name: FUN_026f7bf0
 */


bool FUN_026f7bf0(undefined1 param_1 [16],undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._0_4_ = (float)param_2[2] - param_1._0_4_;
  auVar1._4_4_ = (float)((ulong)param_2[2] >> 0x20) - param_1._4_4_;
  auVar1._8_4_ = (float)param_2[3] - param_1._8_4_;
  auVar1._12_4_ = 0.0 - param_1._12_4_;
  auVar2._4_4_ = param_1._4_4_ - (float)((ulong)*param_2 >> 0x20);
  auVar2._0_4_ = param_1._0_4_ - (float)*param_2;
  auVar2._8_4_ = param_1._8_4_ - (float)param_2[1];
  auVar2._12_4_ = param_1._12_4_ - 0.0;
  auVar2 = NEON_fmin(auVar2,auVar1,4);
  if ((0.0 <= auVar2._0_4_) && (0.0 <= auVar2._4_4_)) {
    return 0.0 <= auVar2._8_4_;
  }
  return false;
}


