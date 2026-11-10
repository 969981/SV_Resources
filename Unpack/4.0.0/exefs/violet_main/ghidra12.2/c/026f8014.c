/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f8014; name: FUN_026f8014
 */


bool FUN_026f8014(undefined1 param_1 [16],undefined8 param_2)

{
  float extraout_s0;
  float extraout_var;
  float extraout_var_01;
  float extraout_s0_00;
  float extraout_var_00;
  float extraout_var_02;
  float extraout_var_03;
  float extraout_var_04;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  FUN_026fe444();
  auVar2._4_4_ = param_1._4_4_ - extraout_var;
  auVar2._0_4_ = param_1._0_4_ - extraout_s0;
  FUN_026fe44c(param_2);
  auVar1._0_4_ = extraout_s0_00 - param_1._0_4_;
  auVar1._4_4_ = extraout_var_00 - param_1._4_4_;
  auVar1._8_4_ = extraout_var_02 - param_1._8_4_;
  auVar1._12_4_ = extraout_var_04 - param_1._12_4_;
  auVar2._8_4_ = param_1._8_4_ - extraout_var_01;
  auVar2._12_4_ = param_1._12_4_ - extraout_var_03;
  auVar2 = NEON_fmin(auVar2,auVar1,4);
  return 0.0 <= auVar2._0_4_ && 0.0 <= auVar2._4_4_;
}


