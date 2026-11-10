/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026fb1fc; name: FUN_026fb1fc
 */


undefined1  [16] FUN_026fb1fc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  float fVar3;
  undefined1 auVar2 [16];
  float local_30;
  float fStack_2c;
  float fStack_28;
  undefined1 auStack_20 [8];
  float fStack_18;
  
  FUN_026faeec(param_1,param_2,auStack_20,0,&local_30,0);
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


