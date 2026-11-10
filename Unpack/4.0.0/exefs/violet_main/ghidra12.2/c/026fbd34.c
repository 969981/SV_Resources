/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026fbd34; name: FUN_026fbd34
 */


undefined8
FUN_026fbd34(undefined1 (*param_1) [16],undefined8 param_2,undefined8 *param_3,float *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar6;
  undefined4 extraout_s0_02;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  float fVar7;
  undefined4 extraout_var_02;
  float fVar8;
  float fVar9;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  float fVar10;
  undefined8 extraout_var_05;
  float fVar11;
  undefined8 extraout_var_06;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  float local_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  float local_40;
  
  FUN_026fe454(param_2);
  FUN_026fe45c(SUB164(*param_1,0) - extraout_s0,param_2);
  fVar8 = (float)extraout_var_03 + (float)extraout_var_04;
  fVar11 = (float)((ulong)extraout_var_03 >> 0x20);
  fVar10 = fVar11 + (float)((ulong)extraout_var_04 >> 0x20);
  FUN_026fe45c(((float)*(undefined8 *)*param_1 + SUB164(param_1[1],0) * *(float *)param_1[2]) -
               extraout_s0,param_2);
  fVar6 = (extraout_s0 + extraout_s0_01) - (extraout_s0 + extraout_s0_00);
  fVar7 = (extraout_var + extraout_var_01) - (extraout_var + extraout_var_00);
  fVar9 = ((float)extraout_var_03 + (float)extraout_var_05) - fVar8;
  fVar11 = (fVar11 + (float)((ulong)extraout_var_05 >> 0x20)) - fVar10;
  uStack_48 = CONCAT44(fVar11,fVar9);
  local_50 = CONCAT44(fVar7,fVar6);
  auVar12._0_4_ = fVar6 * fVar6 + fVar7 * fVar7;
  auVar12._4_4_ = fVar9 * fVar9 + fVar11 * fVar11;
  auVar12._8_4_ = fVar6 * fVar6 + fVar7 * fVar7;
  auVar12._12_4_ = fVar9 * fVar9 + fVar11 * fVar11;
  auVar12 = NEON_ext(auVar12,auVar12,4,1);
  auVar13._0_4_ = SQRT(auVar12._0_4_ + auVar12._4_4_);
  auVar13._4_4_ = SQRT(auVar12._8_4_ + auVar12._12_4_);
  auVar13._8_4_ = SQRT(auVar12._0_4_ + auVar12._4_4_);
  auVar13._12_4_ = SQRT(auVar12._8_4_ + auVar12._12_4_);
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (auVar13._0_4_ < 1.1920929e-07) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(auVar13._0_4_)) {
      bVar1 = auVar13._0_4_ < -1.1920929e-07;
      bVar2 = auVar13._0_4_ == -1.1920929e-07;
      bVar3 = false;
    }
  }
  auVar14 = auVar13;
  if (bVar2 || bVar1 != bVar3) {
    auVar14._4_4_ = auVar13._0_4_;
    auVar14._0_4_ = auVar13._0_4_;
    auVar14._8_4_ = auVar13._0_4_;
    auVar14._12_4_ = auVar13._0_4_;
    uStack_48 = CONCAT44(fVar11 / auVar13._0_4_,fVar9 / auVar13._0_4_);
    local_50 = CONCAT44(fVar7 / auVar13._0_4_,fVar6 / auVar13._0_4_);
  }
  local_60 = extraout_s0 + extraout_s0_00;
  fStack_5c = extraout_var + extraout_var_00;
  fStack_58 = fVar8;
  fStack_54 = fVar10;
  local_40 = auVar13._0_4_;
  FUN_026fcef8(param_2);
  local_90 = CONCAT44(extraout_var_02,extraout_s0_02);
  uStack_78 = auVar14._8_8_;
  uStack_80 = auVar14._0_8_;
  uStack_88 = extraout_var_06;
  uVar4 = FUN_026f7e64(&local_60,&local_90,param_3,&local_64);
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    if (param_3 != (undefined8 *)0x0) {
      fVar8 = *(float *)param_1[2];
      uVar5 = *(undefined8 *)*param_1;
      fVar6 = *(float *)param_1[1];
      fVar7 = *(float *)(param_1[1] + 4);
      param_3[1] = CONCAT44((float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20) +
                            *(float *)(param_1[1] + 0xc) * fVar8 * local_64,
                            (float)*(undefined8 *)(*param_1 + 8) +
                            *(float *)(param_1[1] + 8) * fVar8 * local_64);
      *param_3 = CONCAT44((float)((ulong)uVar5 >> 0x20) + fVar7 * fVar8 * local_64,
                          (float)uVar5 + fVar6 * fVar8 * local_64);
    }
    if (param_4 != (float *)0x0) {
      *param_4 = local_64;
    }
    uVar5 = 1;
  }
  return uVar5;
}


