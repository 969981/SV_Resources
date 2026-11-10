/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c6a138; name: FUN_00c6a138
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c6a138(undefined1 param_1 [16],long param_2)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined4 uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  undefined1 auVar16 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  float fVar18;
  float fVar24;
  float fVar25;
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar26 [16];
  
  if (ABS(param_1._0_4_) < 1e-12) {
    param_1._0_4_ = 0x2b8cbccc;
  }
  if (ABS(param_1._4_4_) < 1e-12) {
    param_1._4_4_ = 0x2b8cbccc;
  }
  if (ABS(param_1._8_4_) < 1e-12) {
    param_1._8_4_ = 0x2b8cbccc;
  }
  pauVar1 = (undefined1 (*) [12])(param_2 + 0x10);
  fVar25 = (float)*(undefined8 *)(param_2 + 0x18);
  fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  fVar18 = (float)*(undefined8 *)*pauVar1;
  fVar24 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar18 = fVar18 * fVar18;
  fVar24 = fVar24 * fVar24;
  fVar25 = fVar25 * fVar25;
  auVar13._12_4_ = fVar12;
  auVar13._0_12_ = *pauVar1;
  auVar26._12_4_ = fVar12;
  auVar26._0_12_ = *pauVar1;
  auVar13 = NEON_ext(auVar13,auVar26,0xc,1);
  uVar5 = SUB124(*pauVar1,0);
  auVar14._4_12_ = auVar13._4_12_;
  auVar14._0_4_ = uVar5;
  auVar16._12_4_ = auVar13._12_4_;
  auVar16._0_8_ = auVar14._0_8_;
  auVar16._8_4_ = SUB124(*pauVar1,4);
  auVar15._8_8_ = auVar16._8_8_;
  auVar15._4_4_ = auVar13._0_4_;
  auVar15._0_4_ = uVar5;
  auVar17._0_12_ = auVar15._0_12_;
  auVar17._12_4_ = auVar13._4_4_;
  NEON_ext(auVar17,auVar17,8,1);
  auVar13 = NEON_fmov(0x3f800000,4);
  auVar19._0_4_ = auVar13._0_4_ - (fVar18 + fVar18);
  auVar19._4_4_ = auVar13._4_4_ - (fVar24 + fVar24);
  auVar19._8_4_ = auVar13._8_4_ - (fVar25 + fVar25);
  auVar19._12_4_ = auVar13._12_4_ - (fVar12 * fVar12 + fVar12 * fVar12);
  auVar20._4_12_ = auVar19._4_12_;
  auVar20._0_4_ = auVar19._0_4_;
  auVar22._0_8_ = auVar20._0_8_;
  auVar22._8_4_ = auVar19._4_4_;
  auVar22._12_4_ = auVar19._12_4_;
  auVar21._8_8_ = auVar22._8_8_;
  auVar21._4_4_ = auVar19._0_4_;
  auVar21._0_4_ = auVar19._0_4_;
  auVar23._0_12_ = auVar21._0_12_;
  auVar23._12_4_ = auVar19._4_4_;
  NEON_ext(auVar23,auVar23,0xc,1);
  auVar13 = NEON_frecpe(param_1,4);
  auVar26 = NEON_frecps(auVar13,param_1,4);
  auVar10._0_4_ = auVar13._0_4_ * auVar26._0_4_;
  auVar10._4_4_ = auVar13._4_4_ * auVar26._4_4_;
  auVar10._8_4_ = auVar13._8_4_ * auVar26._8_4_;
  auVar10._12_4_ = auVar13._12_4_ * auVar26._12_4_;
  auVar13 = NEON_frecps(auVar10,param_1,4);
  auVar6._0_4_ = auVar10._0_4_ * auVar13._0_4_;
  auVar6._4_4_ = auVar10._4_4_ * auVar13._4_4_;
  auVar6._8_4_ = auVar10._8_4_ * auVar13._8_4_;
  auVar7._12_4_ = auVar10._12_4_ * auVar13._12_4_;
  auVar7._0_12_ = auVar6;
  auVar26 = ZEXT816(0);
  auVar13 = NEON_ext(ZEXT816(0),auVar7,4,1);
  NEON_ext(auVar13,auVar26,0xc,1);
  auVar8._0_8_ = auVar6._4_8_ << 0x20;
  auVar8._8_4_ = 0;
  auVar8._12_4_ = auVar7._12_4_;
  auVar4._4_8_ = auVar8._8_8_;
  auVar4._0_4_ = auVar6._8_4_;
  auVar9._0_12_ = auVar4 << 0x20;
  auVar9._12_4_ = auVar7._12_4_;
  auVar2._4_4_ = auVar6._4_4_;
  auVar2._0_4_ = auVar6._0_4_;
  auVar2._8_4_ = auVar6._4_4_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = auVar2._4_8_;
  auVar11._0_12_ = SUB1612(auVar3 << 0x40,0);
  auVar11._12_4_ = 0;
  NEON_ext(auVar11,auVar26,4,1);
  NEON_ext(auVar26,auVar9,0xc,1);
  return;
}


