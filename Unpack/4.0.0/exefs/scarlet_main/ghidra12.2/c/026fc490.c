/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026fc490; name: FUN_026fc490
 */


undefined1  [16] FUN_026fc490(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  float fVar3;
  undefined1 auVar2 [16];
  float local_30;
  float fStack_2c;
  float fStack_28;
  undefined1 auStack_20 [8];
  float fStack_18;
  
  FUN_026fc280(param_1,param_2,auStack_20,0,&local_30,0);
  local_30 = auStack_20._0_4_ - local_30;
  fStack_2c = auStack_20._4_4_ - fStack_2c;
  local_30 = local_30 * local_30;
  fStack_2c = fStack_2c * fStack_2c;
  fVar3 = (fStack_18 - fStack_28) * (fStack_18 - fStack_28);
  auVar2._0_4_ = local_30 + fStack_2c;
  auVar2._4_4_ = fVar3 + 0.0;
  auVar2._8_4_ = local_30 + fStack_2c;
  auVar2._12_4_ = fVar3 + 0.0;
  auVar2 = NEON_ext(auVar2,auVar2,4,1);
  auVar1._0_4_ = auVar2._0_4_ + auVar2._4_4_;
  auVar1._4_4_ = auVar2._8_4_ + auVar2._12_4_;
  auVar1._8_4_ = auVar2._0_4_ + auVar2._4_4_;
  auVar1._12_4_ = auVar2._8_4_ + auVar2._12_4_;
  return auVar1;
}


