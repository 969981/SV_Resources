/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f1473c; name: FUN_02f1473c
 */


void FUN_02f1473c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 float *param_5,float *param_6,float *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  
  uVar4 = param_4[1];
  fVar22 = (float)uVar4;
  uVar3 = *param_4;
  fVar18 = (float)uVar3;
  fVar21 = (float)((ulong)uVar3 >> 0x20);
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  fVar24 = fVar18 * fVar18 + fVar21 * fVar21 + fVar22 * fVar22;
  fVar9 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar10 = 0.0;
  fVar16 = 0.0;
  fVar14 = 0.0;
  fVar13 = 0.0;
  fVar15 = 0.0;
  if (fVar24 != 0.0) {
    fVar24 = SQRT(fVar24);
    fVar14 = SQRT(fVar18 * fVar18 + fVar21 * fVar21 + fVar22 * fVar22);
    fVar13 = fVar18 / fVar24;
    fVar15 = fVar21 / fVar14;
    fVar16 = fVar22 / fVar24;
    fVar14 = (float)((ulong)uVar4 >> 0x20) / fVar14;
  }
  *(ulong *)(param_1 + 0x68) = CONCAT44(fVar14,fVar16);
  *(ulong *)(param_1 + 0x60) = CONCAT44(fVar15,fVar13);
  fVar24 = *param_6;
  fVar18 = param_6[1];
  fVar21 = param_6[2];
  fVar22 = param_6[3];
  *(float *)(param_1 + 0x78) = fVar21;
  *(float *)(param_1 + 0x7c) = fVar22;
  *(float *)(param_1 + 0x70) = fVar24;
  *(float *)(param_1 + 0x74) = fVar18;
  fVar28 = fVar24 * fVar24 + fVar18 * fVar18 + fVar21 * fVar21;
  fVar23 = 0.0;
  fVar19 = 0.0;
  fVar17 = 0.0;
  fVar20 = 0.0;
  if (fVar28 != 0.0) {
    fVar28 = SQRT(fVar28);
    fVar19 = SQRT(fVar24 * fVar24 + fVar18 * fVar18 + fVar21 * fVar21);
    fVar17 = fVar24 / fVar28;
    fVar20 = fVar18 / fVar19;
    fVar23 = fVar21 / fVar28;
    fVar19 = fVar22 / fVar19;
  }
  auVar25._4_4_ = fVar15;
  auVar25._0_4_ = fVar13;
  auVar25._8_4_ = fVar16;
  auVar25._12_4_ = fVar14;
  auVar29._4_4_ = fVar15;
  auVar29._0_4_ = fVar13;
  auVar29._8_4_ = fVar16;
  auVar29._12_4_ = fVar14;
  auVar25 = NEON_ext(auVar25,auVar29,4,1);
  auVar5._4_4_ = fVar20;
  auVar5._0_4_ = fVar17;
  auVar5._8_4_ = fVar23;
  auVar5._12_4_ = fVar19;
  auVar6._4_4_ = fVar20;
  auVar6._0_4_ = fVar17;
  auVar6._8_4_ = fVar23;
  auVar6._12_4_ = fVar19;
  auVar29 = NEON_ext(auVar5,auVar6,4,1);
  auVar26._0_4_ = fVar13 * auVar29._0_4_ - auVar25._0_4_ * fVar17;
  auVar26._4_4_ = fVar15 * auVar29._4_4_ - auVar25._4_4_ * fVar20;
  auVar26._8_4_ = fVar16 * fVar17 - fVar13 * fVar23;
  auVar26._12_4_ = fVar14 * fVar20 - fVar15 * fVar19;
  auVar25 = NEON_ext(auVar26,auVar26,4,1);
  *(ulong *)(param_1 + 0x78) = CONCAT44(fVar19,fVar23);
  *(ulong *)(param_1 + 0x70) = CONCAT44(fVar20,fVar17);
  *(ulong *)(param_1 + 0x88) = (ulong)(uint)auVar26._0_4_;
  *(long *)(param_1 + 0x80) = auVar25._0_8_;
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x98) = param_2[1];
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  fVar24 = *param_5;
  fVar13 = param_5[1];
  fVar14 = param_5[2];
  fVar15 = param_5[3];
  *(float *)(param_1 + 0xa8) = fVar14;
  *(float *)(param_1 + 0xac) = fVar15;
  *(float *)(param_1 + 0xa0) = fVar24;
  *(float *)(param_1 + 0xa4) = fVar13;
  fVar16 = fVar24 * fVar24 + fVar13 * fVar13 + fVar14 * fVar14;
  fVar28 = 0.0;
  fVar21 = 0.0;
  fVar18 = 0.0;
  fVar22 = 0.0;
  if (fVar16 != 0.0) {
    fVar16 = SQRT(fVar16);
    fVar21 = SQRT(fVar24 * fVar24 + fVar13 * fVar13 + fVar14 * fVar14);
    fVar18 = fVar24 / fVar16;
    fVar22 = fVar13 / fVar21;
    fVar28 = fVar14 / fVar16;
    fVar21 = fVar15 / fVar21;
  }
  *(ulong *)(param_1 + 0xa8) = CONCAT44(fVar21,fVar28);
  *(ulong *)(param_1 + 0xa0) = CONCAT44(fVar22,fVar18);
  fVar24 = *param_7;
  fVar13 = param_7[1];
  fVar14 = param_7[2];
  fVar15 = param_7[3];
  *(float *)(param_1 + 0xb8) = fVar14;
  *(float *)(param_1 + 0xbc) = fVar15;
  *(float *)(param_1 + 0xb0) = fVar24;
  *(float *)(param_1 + 0xb4) = fVar13;
  fVar16 = fVar24 * fVar24 + fVar13 * fVar13 + fVar14 * fVar14;
  if (fVar16 != 0.0) {
    fVar16 = SQRT(fVar16);
    fVar10 = SQRT(fVar24 * fVar24 + fVar13 * fVar13 + fVar14 * fVar14);
    fVar9 = fVar24 / fVar16;
    fVar11 = fVar13 / fVar10;
    fVar12 = fVar14 / fVar16;
    fVar10 = fVar15 / fVar10;
  }
  auVar7._4_4_ = fVar22;
  auVar7._0_4_ = fVar18;
  auVar7._8_4_ = fVar28;
  auVar7._12_4_ = fVar21;
  auVar8._4_4_ = fVar22;
  auVar8._0_4_ = fVar18;
  auVar8._8_4_ = fVar28;
  auVar8._12_4_ = fVar21;
  auVar25 = NEON_ext(auVar7,auVar8,4,1);
  auVar1._4_4_ = fVar11;
  auVar1._0_4_ = fVar9;
  auVar1._8_4_ = fVar12;
  auVar1._12_4_ = fVar10;
  auVar2._4_4_ = fVar11;
  auVar2._0_4_ = fVar9;
  auVar2._8_4_ = fVar12;
  auVar2._12_4_ = fVar10;
  auVar29 = NEON_ext(auVar1,auVar2,4,1);
  auVar27._0_4_ = fVar18 * auVar29._0_4_ - auVar25._0_4_ * fVar9;
  auVar27._4_4_ = fVar22 * auVar29._4_4_ - auVar25._4_4_ * fVar11;
  auVar27._8_4_ = fVar28 * fVar9 - fVar18 * fVar12;
  auVar27._12_4_ = fVar21 * fVar11 - fVar22 * fVar10;
  auVar25 = NEON_ext(auVar27,auVar27,4,1);
  *(ulong *)(param_1 + 0xb8) = CONCAT44(fVar10,fVar12);
  *(ulong *)(param_1 + 0xb0) = CONCAT44(fVar11,fVar9);
  *(ulong *)(param_1 + 200) = (ulong)(uint)auVar27._0_4_;
  *(long *)(param_1 + 0xc0) = auVar25._0_8_;
  uVar4 = param_3[1];
  uVar3 = *param_3;
  *(ulong *)(param_1 + 0x108) = CONCAT44(fVar21,fVar28);
  *(ulong *)(param_1 + 0x100) = CONCAT44(fVar22,fVar18);
  *(ulong *)(param_1 + 0x118) = CONCAT44(fVar10,fVar12);
  *(ulong *)(param_1 + 0x110) = CONCAT44(fVar11,fVar9);
  *(undefined1 *)(param_1 + 0x300) = 1;
  *(ulong *)(param_1 + 0x128) = (ulong)(uint)auVar27._0_4_;
  *(long *)(param_1 + 0x120) = auVar25._0_8_;
  *(undefined8 *)(param_1 + 0xd8) = uVar4;
  *(undefined8 *)(param_1 + 0xd0) = uVar3;
  return;
}


