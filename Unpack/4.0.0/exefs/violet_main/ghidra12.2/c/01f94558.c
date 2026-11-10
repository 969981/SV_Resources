/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f94558; name: FUN_01f94558
 */


void FUN_01f94558(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  float extraout_s0;
  float fVar2;
  float extraout_var;
  float fVar4;
  float extraout_var_00;
  float fVar5;
  undefined1 auVar3 [16];
  float extraout_var_01;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  auVar3 = FUN_01f94510();
  FUN_01f93708(param_1,param_2);
  local_30 = auVar3._0_4_;
  fStack_2c = auVar3._4_4_;
  fStack_28 = auVar3._8_4_;
  fStack_24 = auVar3._12_4_;
  fVar2 = (local_30 - extraout_s0) * (local_30 - extraout_s0);
  fVar4 = (fStack_2c - extraout_var) * (fStack_2c - extraout_var);
  fVar5 = (fStack_28 - extraout_var_00) * (fStack_28 - extraout_var_00);
  fVar6 = (fStack_24 - extraout_var_01) * (fStack_24 - extraout_var_01);
  fVar7 = *(float *)(param_1 + 0x140) * *(float *)(param_1 + 0x140);
  fVar8 = *(float *)(param_1 + 0x144) * *(float *)(param_1 + 0x144);
  fVar9 = *(float *)(param_1 + 0x148) * *(float *)(param_1 + 0x148);
  fVar10 = *(float *)(param_1 + 0x14c) * *(float *)(param_1 + 0x14c);
  auVar3._0_4_ = fVar2 + fVar4;
  auVar3._4_4_ = fVar5 + fVar6;
  auVar3._8_4_ = fVar2 + fVar4;
  auVar3._12_4_ = fVar5 + fVar6;
  auVar1._0_4_ = fVar7 + fVar8;
  auVar1._4_4_ = fVar9 + fVar10;
  auVar1._8_4_ = fVar7 + fVar8;
  auVar1._12_4_ = fVar9 + fVar10;
  NEON_ext(auVar1,auVar1,4,1);
  NEON_ext(auVar3,auVar3,4,1);
  return;
}


