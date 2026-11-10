/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017a5f1c; name: FUN_017a5f1c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_017a5f1c(undefined1 param_1 [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar9;
  float fVar10;
  undefined1 auVar5 [16];
  undefined1 auVar8 [16];
  undefined1 auVar7 [16];
  undefined1 auVar6 [16];
  float fVar17;
  undefined1 auVar11 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar13 [16];
  undefined1 auVar12 [16];
  undefined1 auVar16 [16];
  
  fVar4 = param_1._12_4_;
  fVar3 = param_1._8_4_;
  fVar2 = param_1._4_4_;
  fVar1 = param_1._0_4_;
  auVar5 = NEON_ext(param_1,param_1,0xc,1);
  fVar17 = fVar3 * fVar3 + fVar3 * fVar3;
  auVar16._4_12_ = auVar5._4_12_;
  auVar16._0_4_ = fVar1;
  auVar7._12_4_ = auVar5._12_4_;
  auVar7._0_8_ = auVar16._0_8_;
  auVar7._8_4_ = fVar2;
  auVar6._8_8_ = auVar7._8_8_;
  auVar6._4_4_ = auVar5._0_4_;
  auVar6._0_4_ = fVar1;
  auVar8._0_12_ = auVar6._0_12_;
  auVar8._12_4_ = auVar5._4_4_;
  auVar5 = NEON_ext(auVar8,auVar8,8,1);
  fVar9 = auVar5._4_4_ * fVar3;
  fVar10 = auVar5._8_4_ * fVar2;
  auVar5 = NEON_fmov(0x3f800000,4);
  auVar11._0_4_ = auVar5._0_4_ - (fVar1 * fVar1 + fVar1 * fVar1);
  auVar11._4_4_ = auVar5._4_4_ - (fVar2 * fVar2 + fVar2 * fVar2);
  auVar11._8_4_ = auVar5._8_4_ - fVar17;
  auVar11._12_4_ = auVar5._12_4_ - (fVar4 * fVar4 + fVar4 * fVar4);
  auVar12._4_12_ = auVar11._4_12_;
  auVar12._0_4_ = auVar11._0_4_;
  auVar14._0_8_ = auVar12._0_8_;
  auVar14._8_4_ = auVar11._4_4_;
  auVar14._12_4_ = auVar11._12_4_;
  auVar13._8_8_ = auVar14._8_8_;
  auVar13._4_4_ = auVar11._0_4_;
  auVar13._0_4_ = auVar11._0_4_;
  auVar15._0_12_ = auVar13._0_12_;
  auVar15._12_4_ = auVar11._4_4_;
  auVar16 = NEON_ext(auVar15,auVar15,0xc,1);
  auVar5._4_4_ = fVar10 + fVar10 + fVar3 * fVar4 + fVar3 * fVar4;
  auVar5._0_4_ = auVar16._0_4_ - fVar17;
  auVar5._8_4_ = (fVar9 + fVar9) - (fVar2 * fVar4 + fVar2 * fVar4);
  auVar5._12_4_ = 0;
  return auVar5;
}


