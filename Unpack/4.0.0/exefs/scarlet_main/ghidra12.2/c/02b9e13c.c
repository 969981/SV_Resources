/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b9e13c; name: FUN_02b9e13c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b9e13c(undefined1 param_1 [16],undefined1 (*param_2) [16])

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar13 [16];
  undefined1 auVar12 [16];
  undefined1 auVar11 [16];
  undefined1 auVar10 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar17 [16];
  undefined1 auVar16 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  fVar31 = param_1._8_4_;
  fVar30 = param_1._4_4_;
  fVar2 = param_1._0_4_;
  auVar24 = *param_2;
  auVar15._4_4_ = fVar31;
  auVar15._0_4_ = fVar31;
  auVar15._8_4_ = fVar31;
  auVar15._12_4_ = fVar31;
  auVar16._4_12_ = auVar15._4_12_;
  auVar16._0_4_ = fVar2;
  auVar18._0_8_ = auVar16._0_8_;
  auVar18._8_4_ = fVar30;
  auVar18._12_4_ = fVar31;
  auVar17._8_8_ = auVar18._8_8_;
  auVar17._4_4_ = fVar31;
  auVar17._0_4_ = fVar2;
  auVar19._0_12_ = auVar17._0_12_;
  auVar19._12_4_ = fVar31;
  fVar8 = auVar24._12_4_;
  fVar5 = auVar24._0_4_;
  auVar10._0_4_ = -fVar5;
  fVar6 = auVar24._4_4_;
  fVar7 = auVar24._8_4_;
  auVar9._8_4_ = -fVar7;
  auVar26._4_4_ = fVar7;
  auVar26._0_4_ = fVar7;
  auVar26._8_4_ = fVar7;
  auVar26._12_4_ = fVar7;
  auVar27 = NEON_ext(auVar26,auVar24,0xc,1);
  auVar28._4_4_ = fVar6;
  auVar28._0_4_ = fVar6;
  auVar28._8_4_ = fVar6;
  auVar28._12_4_ = fVar6;
  auVar3 = NEON_ext(auVar28,auVar27,0xc,1);
  auVar29 = NEON_ext(auVar19,auVar19,8,1);
  fVar1 = auVar29._0_4_;
  auVar20._4_12_ = auVar19._4_12_;
  auVar20._0_4_ = fVar1;
  auVar22._0_8_ = auVar20._0_8_;
  auVar22._8_4_ = auVar29._8_4_;
  auVar22._12_4_ = fVar31;
  auVar21._8_8_ = auVar22._8_8_;
  auVar21._4_4_ = fVar2;
  auVar21._0_4_ = fVar1;
  auVar23._0_12_ = auVar21._0_12_;
  auVar23._12_4_ = fVar30;
  auVar24 = NEON_ext(auVar23,auVar29,8,1);
  auVar25 = NEON_ext(auVar24,auVar24,0xc,1);
  fVar32 = (float)((ulong)_DAT_03cab640 >> 0x20);
  fVar33 = (float)((ulong)_UNK_03cab648 >> 0x20);
  fVar30 = (fVar30 * fVar8 + fVar6 * fVar32 * 0.0 + auVar25._4_4_ * auVar3._4_4_ * fVar32) -
           auVar27._4_4_ * auVar29._4_4_;
  fVar31 = (fVar31 * fVar8 + fVar7 * (float)_UNK_03cab648 * 0.0 +
           auVar25._8_4_ * auVar3._8_4_ * (float)_UNK_03cab648) - auVar27._8_4_ * auVar29._8_4_;
  auVar4._4_4_ = fVar31;
  auVar4._0_4_ = fVar31;
  auVar4._8_4_ = fVar31;
  auVar4._12_4_ = fVar31;
  auVar9._4_4_ = auVar9._8_4_;
  auVar9._0_4_ = auVar9._8_4_;
  auVar9._12_4_ = auVar9._8_4_;
  auVar14._4_4_ = fVar30;
  auVar14._0_4_ = fVar30;
  auVar14._8_4_ = fVar30;
  auVar14._12_4_ = fVar30;
  auVar10._4_12_ = auVar9._4_12_;
  auVar12._0_8_ = auVar10._0_8_;
  auVar12._8_4_ = -fVar6;
  auVar12._12_4_ = auVar9._8_4_;
  auVar11._8_8_ = auVar12._8_8_;
  auVar11._4_4_ = auVar9._8_4_;
  auVar11._0_4_ = auVar10._0_4_;
  auVar13._0_12_ = auVar11._0_12_;
  auVar13._12_4_ = auVar9._8_4_;
  auVar24._4_4_ = fVar30;
  auVar24._0_4_ =
       (fVar2 * fVar8 + fVar5 * (float)_DAT_03cab640 * 0.0 +
       auVar25._0_4_ * auVar3._0_4_ * (float)_DAT_03cab640) - auVar27._0_4_ * fVar1;
  auVar24._8_4_ = fVar31;
  auVar24._12_4_ =
       (fVar8 * 0.0 + fVar2 * fVar5 * fVar33 + auVar25._12_4_ * auVar3._12_4_ * fVar33) -
       auVar27._12_4_ * auVar29._12_4_;
  auVar24 = NEON_ext(auVar4,auVar24,0xc,1);
  NEON_ext(auVar14,auVar24,0xc,1);
  auVar24 = NEON_ext(auVar13,auVar13,8,1);
  auVar3._4_12_ = auVar13._4_12_;
  auVar3._0_4_ = auVar24._0_4_;
  auVar27._0_8_ = auVar3._0_8_;
  auVar27._8_4_ = auVar24._8_4_;
  auVar27._12_4_ = auVar9._8_4_;
  auVar25._8_8_ = auVar27._8_8_;
  auVar25._4_4_ = auVar10._0_4_;
  auVar25._0_4_ = auVar24._0_4_;
  auVar29._0_12_ = auVar25._0_12_;
  auVar29._12_4_ = -fVar6;
  auVar24 = NEON_ext(auVar29,auVar24,8,1);
  NEON_ext(auVar24,auVar24,0xc,1);
  return;
}


