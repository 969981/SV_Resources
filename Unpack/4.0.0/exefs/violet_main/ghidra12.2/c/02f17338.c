/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f17338; name: FUN_02f17338
 */


void FUN_02f17338(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 float *param_5,float *param_6,float *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
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
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x78) = param_2[1];
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  uVar3 = *param_3;
  *(undefined8 *)(param_1 + 0xb8) = param_3[1];
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  uVar10 = param_4[1];
  fVar24 = (float)uVar10;
  uVar3 = *param_4;
  fVar20 = (float)uVar3;
  fVar23 = (float)((ulong)uVar3 >> 0x20);
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  fVar26 = fVar20 * fVar20 + fVar23 * fVar23 + fVar24 * fVar24;
  fVar11 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  fVar12 = 0.0;
  fVar18 = 0.0;
  fVar16 = 0.0;
  fVar15 = 0.0;
  fVar17 = 0.0;
  if (fVar26 != 0.0) {
    fVar26 = SQRT(fVar26);
    fVar16 = SQRT(fVar20 * fVar20 + fVar23 * fVar23 + fVar24 * fVar24);
    fVar15 = fVar20 / fVar26;
    fVar17 = fVar23 / fVar16;
    fVar18 = fVar24 / fVar26;
    fVar16 = (float)((ulong)uVar10 >> 0x20) / fVar16;
  }
  *(ulong *)(param_1 + 0x48) = CONCAT44(fVar16,fVar18);
  *(ulong *)(param_1 + 0x40) = CONCAT44(fVar17,fVar15);
  fVar26 = *param_6;
  fVar20 = param_6[1];
  fVar23 = param_6[2];
  fVar24 = param_6[3];
  *(float *)(param_1 + 0x58) = fVar23;
  *(float *)(param_1 + 0x5c) = fVar24;
  *(float *)(param_1 + 0x50) = fVar26;
  *(float *)(param_1 + 0x54) = fVar20;
  fVar29 = fVar26 * fVar26 + fVar20 * fVar20 + fVar23 * fVar23;
  fVar25 = 0.0;
  fVar21 = 0.0;
  fVar19 = 0.0;
  fVar22 = 0.0;
  if (fVar29 != 0.0) {
    fVar29 = SQRT(fVar29);
    fVar21 = SQRT(fVar26 * fVar26 + fVar20 * fVar20 + fVar23 * fVar23);
    fVar19 = fVar26 / fVar29;
    fVar22 = fVar20 / fVar21;
    fVar25 = fVar23 / fVar29;
    fVar21 = fVar24 / fVar21;
  }
  auVar27._4_4_ = fVar17;
  auVar27._0_4_ = fVar15;
  auVar27._8_4_ = fVar18;
  auVar27._12_4_ = fVar16;
  auVar30._4_4_ = fVar17;
  auVar30._0_4_ = fVar15;
  auVar30._8_4_ = fVar18;
  auVar30._12_4_ = fVar16;
  auVar27 = NEON_ext(auVar27,auVar30,4,1);
  auVar4._4_4_ = fVar22;
  auVar4._0_4_ = fVar19;
  auVar4._8_4_ = fVar25;
  auVar4._12_4_ = fVar21;
  auVar5._4_4_ = fVar22;
  auVar5._0_4_ = fVar19;
  auVar5._8_4_ = fVar25;
  auVar5._12_4_ = fVar21;
  auVar30 = NEON_ext(auVar4,auVar5,4,1);
  auVar28._0_4_ = fVar15 * auVar30._0_4_ - auVar27._0_4_ * fVar19;
  auVar28._4_4_ = fVar17 * auVar30._4_4_ - auVar27._4_4_ * fVar22;
  auVar28._8_4_ = fVar18 * fVar19 - fVar15 * fVar25;
  auVar28._12_4_ = fVar16 * fVar22 - fVar17 * fVar21;
  auVar27 = NEON_ext(auVar28,auVar28,4,1);
  *(ulong *)(param_1 + 0x58) = CONCAT44(fVar21,fVar25);
  *(ulong *)(param_1 + 0x50) = CONCAT44(fVar22,fVar19);
  *(ulong *)(param_1 + 0x68) = (ulong)(uint)auVar28._0_4_;
  *(long *)(param_1 + 0x60) = auVar27._0_8_;
  fVar26 = *param_5;
  fVar15 = param_5[1];
  fVar16 = param_5[2];
  fVar17 = param_5[3];
  fVar18 = fVar26 * fVar26 + fVar15 * fVar15 + fVar16 * fVar16;
  fVar29 = 0.0;
  fVar23 = 0.0;
  fVar20 = 0.0;
  fVar24 = 0.0;
  *(float *)(param_1 + 0x88) = fVar16;
  *(float *)(param_1 + 0x8c) = fVar17;
  *(float *)(param_1 + 0x80) = fVar26;
  *(float *)(param_1 + 0x84) = fVar15;
  if (fVar18 != 0.0) {
    fVar18 = SQRT(fVar18);
    fVar23 = SQRT(fVar26 * fVar26 + fVar15 * fVar15 + fVar16 * fVar16);
    fVar20 = fVar26 / fVar18;
    fVar24 = fVar15 / fVar23;
    fVar29 = fVar16 / fVar18;
    fVar23 = fVar17 / fVar23;
  }
  *(ulong *)(param_1 + 0x88) = CONCAT44(fVar23,fVar29);
  *(ulong *)(param_1 + 0x80) = CONCAT44(fVar24,fVar20);
  fVar26 = *param_7;
  fVar15 = param_7[1];
  fVar16 = param_7[2];
  fVar17 = param_7[3];
  *(float *)(param_1 + 0x98) = fVar16;
  *(float *)(param_1 + 0x9c) = fVar17;
  *(float *)(param_1 + 0x90) = fVar26;
  *(float *)(param_1 + 0x94) = fVar15;
  fVar18 = fVar26 * fVar26 + fVar15 * fVar15 + fVar16 * fVar16;
  if (fVar18 != 0.0) {
    fVar18 = SQRT(fVar18);
    fVar12 = SQRT(fVar26 * fVar26 + fVar15 * fVar15 + fVar16 * fVar16);
    fVar11 = fVar26 / fVar18;
    fVar13 = fVar15 / fVar12;
    fVar14 = fVar16 / fVar18;
    fVar12 = fVar17 / fVar12;
  }
  auVar6._4_4_ = fVar24;
  auVar6._0_4_ = fVar20;
  auVar6._8_4_ = fVar29;
  auVar6._12_4_ = fVar23;
  auVar7._4_4_ = fVar24;
  auVar7._0_4_ = fVar20;
  auVar7._8_4_ = fVar29;
  auVar7._12_4_ = fVar23;
  auVar27 = NEON_ext(auVar6,auVar7,4,1);
  auVar1._4_4_ = fVar13;
  auVar1._0_4_ = fVar11;
  auVar1._8_4_ = fVar14;
  auVar1._12_4_ = fVar12;
  auVar2._4_4_ = fVar13;
  auVar2._0_4_ = fVar11;
  auVar2._8_4_ = fVar14;
  auVar2._12_4_ = fVar12;
  auVar30 = NEON_ext(auVar1,auVar2,4,1);
  fVar26 = fVar20 * auVar30._0_4_ - auVar27._0_4_ * fVar11;
  fVar15 = fVar24 * auVar30._4_4_ - auVar27._4_4_ * fVar13;
  fVar16 = fVar29 * fVar11 - fVar20 * fVar14;
  fVar17 = fVar23 * fVar13 - fVar24 * fVar12;
  auVar8._4_4_ = fVar15;
  auVar8._0_4_ = fVar26;
  auVar8._8_4_ = fVar16;
  auVar8._12_4_ = fVar17;
  auVar9._4_4_ = fVar15;
  auVar9._0_4_ = fVar26;
  auVar9._8_4_ = fVar16;
  auVar9._12_4_ = fVar17;
  auVar27 = NEON_ext(auVar8,auVar9,4,1);
  *(ulong *)(param_1 + 0x98) = CONCAT44(fVar12,fVar14);
  *(ulong *)(param_1 + 0x90) = CONCAT44(fVar13,fVar11);
  *(ulong *)(param_1 + 0xa8) = (ulong)(uint)fVar26;
  *(long *)(param_1 + 0xa0) = auVar27._0_8_;
  return;
}


