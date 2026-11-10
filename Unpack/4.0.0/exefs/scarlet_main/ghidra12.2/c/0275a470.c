/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0275a470; name: FUN_0275a470
 */


void FUN_0275a470(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
                 undefined8 param_4,undefined4 param_5,long param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar2 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_98;
  long lStack_90;
  float *local_88;
  undefined4 *puStack_80;
  undefined8 *local_78;
  undefined4 *puStack_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  float local_50 [4];
  float fStack_40;
  undefined8 local_30;
  undefined8 uStack_20;
  
  fStack_40 = param_2._0_4_;
  local_50[0] = param_1._0_4_;
  fVar6 = param_1._4_4_ * param_1._4_4_;
  fVar7 = param_1._8_4_ * param_1._8_4_;
  fVar8 = param_1._12_4_ * param_1._12_4_;
  local_88 = local_50;
  fVar3 = param_2._4_4_ * param_2._4_4_;
  fVar4 = param_2._8_4_ * param_2._8_4_;
  fVar5 = param_2._12_4_ * param_2._12_4_;
  puStack_80 = &local_54;
  auVar1._0_4_ = local_50[0] * local_50[0] + fVar6;
  auVar1._4_4_ = fVar7 + fVar8;
  auVar1._8_4_ = local_50[0] * local_50[0] + fVar6;
  auVar1._12_4_ = fVar7 + fVar8;
  auVar2._0_4_ = fStack_40 * fStack_40 + fVar3;
  auVar2._4_4_ = fVar4 + fVar5;
  auVar2._8_4_ = fStack_40 * fStack_40 + fVar3;
  auVar2._12_4_ = fVar4 + fVar5;
  auVar2 = NEON_ext(auVar2,auVar2,4,1);
  auVar1 = NEON_ext(auVar1,auVar1,4,1);
  local_60 = CONCAT44(SQRT(auVar2._0_4_ + auVar2._4_4_),SQRT(auVar1._0_4_ + auVar1._4_4_));
  local_64 = 0;
  if (*(char *)(param_6 + 200) != '\0') {
    local_64 = 0x3f800000;
  }
  local_78 = &local_60;
  puStack_70 = &local_64;
  local_98 = param_7;
  lStack_90 = param_6;
  local_54 = param_5;
  local_30 = param_3;
  uStack_20 = param_4;
  FUN_0275b4b0(*(undefined8 *)(param_6 + 0x30),&local_98);
  return;
}


