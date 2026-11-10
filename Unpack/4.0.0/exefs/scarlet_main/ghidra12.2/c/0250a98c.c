/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0250a98c; name: FUN_0250a98c
 */


void FUN_0250a98c(undefined1 param_1 [16],uint param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  fVar6 = param_1._12_4_;
  fVar5 = param_1._8_4_;
  fVar4 = param_1._4_4_;
  fVar3 = param_1._0_4_;
  auVar8._0_4_ = fVar3 * fVar3 + fVar4 * fVar4;
  auVar8._4_4_ = fVar5 * fVar5 + fVar6 * fVar6;
  auVar8._8_4_ = fVar3 * fVar3 + fVar4 * fVar4;
  auVar8._12_4_ = fVar5 * fVar5 + fVar6 * fVar6;
  auVar8 = NEON_ext(auVar8,auVar8,4,1);
  fVar7 = SQRT(auVar8._0_4_ + auVar8._4_4_);
  bVar2 = false;
  if ((-1.1920929e-07 < fVar7) && (bVar2 = false, !NAN(fVar7))) {
    bVar2 = fVar7 < 1.1920929e-07;
  }
  uVar1 = -(uint)bVar2;
  param_3[4] = param_2;
  param_3[2] = (uint)fVar5 ^
               ((uint)fVar5 ^ (uint)(fVar5 / SQRT(auVar8._0_4_ + auVar8._4_4_))) & ~uVar1;
  param_3[3] = (uint)fVar6 ^
               ((uint)fVar6 ^ (uint)(fVar6 / SQRT(auVar8._8_4_ + auVar8._12_4_))) & ~uVar1;
  *param_3 = (uint)fVar3 ^ ((uint)fVar3 ^ (uint)(fVar3 / fVar7)) & ~uVar1;
  param_3[1] = (uint)fVar4 ^
               ((uint)fVar4 ^ (uint)(fVar4 / SQRT(auVar8._8_4_ + auVar8._12_4_))) & ~uVar1;
  return;
}


