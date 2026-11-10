/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f94510; name: FUN_01f94510
 */


undefined1  [16] FUN_01f94510(long param_1)

{
  float extraout_s0;
  float extraout_s0_00;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  float extraout_var_02;
  float extraout_var_03;
  float extraout_var_04;
  undefined1 auVar1 [16];
  float fVar2;
  
  FUN_01f93708();
  FUN_01f8c150(param_1 + 0xa0);
  fVar2 = *(float *)(param_1 + 0x138);
  auVar1._0_4_ = extraout_s0 + (extraout_s0_00 - extraout_s0) * fVar2;
  auVar1._4_4_ = extraout_var + (extraout_var_00 - extraout_var) * fVar2;
  auVar1._8_4_ = extraout_var_01 + (extraout_var_02 - extraout_var_01) * fVar2;
  auVar1._12_4_ = extraout_var_03 + (extraout_var_04 - extraout_var_03) * fVar2;
  return auVar1;
}


