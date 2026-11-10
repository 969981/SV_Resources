/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dfcd7c; name: FUN_00dfcd7c
 */


undefined1  [16] FUN_00dfcd7c(ulong *param_1)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar4 [16];
  float fVar13;
  float fVar14;
  undefined1 auVar8 [16];
  undefined1 auVar12 [16];
  undefined1 auVar11 [16];
  undefined1 auVar10 [16];
  undefined1 auVar9 [16];
  ulong uVar15;
  float fVar16;
  float fVar22;
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  
  uVar15 = *param_1;
  if (ABS((float)uVar15) < 1e-12) {
    uVar15 = CONCAT44((int)(uVar15 >> 0x20),0x2b8cbccc);
  }
  if (ABS((float)(uVar15 >> 0x20)) < 1e-12) {
    uVar15 = uVar15 & 0xffffffff;
  }
  pauVar1 = (undefined1 (*) [12])(param_1 + 2);
  fVar6 = (float)param_1[3];
  fVar7 = (float)(param_1[3] >> 0x20);
  fVar16 = (float)*(undefined8 *)*pauVar1;
  fVar5 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar16 = fVar16 * fVar16;
  auVar8._12_4_ = fVar7;
  auVar8._0_12_ = *pauVar1;
  auVar2._12_4_ = fVar7;
  auVar2._0_12_ = *pauVar1;
  auVar8 = NEON_ext(auVar8,auVar2,0xc,1);
  uVar3 = SUB124(*pauVar1,0);
  auVar9._4_12_ = auVar8._4_12_;
  auVar9._0_4_ = uVar3;
  auVar11._12_4_ = auVar8._12_4_;
  auVar11._0_8_ = auVar9._0_8_;
  auVar11._8_4_ = SUB124(*pauVar1,4);
  auVar10._8_8_ = auVar11._8_8_;
  auVar10._4_4_ = auVar8._0_4_;
  auVar10._0_4_ = uVar3;
  auVar12._0_12_ = auVar10._0_12_;
  auVar12._12_4_ = auVar8._4_4_;
  fVar22 = fVar6 * fVar6 + fVar6 * fVar6;
  auVar8 = NEON_ext(auVar12,auVar12,8,1);
  fVar13 = auVar8._4_4_ * SUB124(*pauVar1,8);
  fVar14 = auVar8._8_4_ * fVar5;
  auVar8 = NEON_fmov(0x3f800000,4);
  auVar17._0_4_ = auVar8._0_4_ - (fVar16 + fVar16);
  auVar17._4_4_ = auVar8._4_4_ - (fVar5 * fVar5 + fVar5 * fVar5);
  auVar17._8_4_ = auVar8._8_4_ - fVar22;
  auVar17._12_4_ = auVar8._12_4_ - (fVar7 * fVar7 + fVar7 * fVar7);
  auVar18._4_12_ = auVar17._4_12_;
  auVar18._0_4_ = auVar17._0_4_;
  auVar20._0_8_ = auVar18._0_8_;
  auVar20._8_4_ = auVar17._4_4_;
  auVar20._12_4_ = auVar17._12_4_;
  auVar19._8_8_ = auVar20._8_8_;
  auVar19._4_4_ = auVar17._0_4_;
  auVar19._0_4_ = auVar17._0_4_;
  auVar21._0_12_ = auVar19._0_12_;
  auVar21._12_4_ = auVar17._4_4_;
  auVar8 = NEON_ext(auVar21,auVar21,0xc,1);
  fVar16 = (float)uVar15;
  auVar4._0_4_ = (auVar8._0_4_ - fVar22) * fVar16;
  auVar4._4_4_ = (fVar14 + fVar14 + fVar6 * fVar7 + fVar6 * fVar7) * fVar16;
  auVar4._8_4_ = ((fVar13 + fVar13) - (fVar5 * fVar7 + fVar5 * fVar7)) * fVar16;
  auVar4._12_4_ = fVar16 * 0.0;
  return auVar4;
}


