/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f26430; name: FUN_02f26430
 */


void FUN_02f26430(undefined1 (*param_1) [16],long param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float *pfVar12;
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
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar37 [16];
  undefined8 uVar42;
  undefined1 auVar43 [16];
  float fVar44;
  
  fVar15 = -*(float *)(param_2 + 0x1c);
  fVar24 = *(float *)(param_1[3] + 8);
  fVar13 = *(float *)param_1[3];
  fVar14 = *(float *)(param_1[3] + 4);
  fVar17 = *(float *)(param_2 + 8);
  fVar19 = *(float *)(param_2 + 0x74);
  pfVar12 = (float *)*param_3;
  lVar2 = *(long *)(param_2 + 0x30);
  lVar3 = *(long *)(param_2 + 0x38);
  fVar16 = *(float *)(param_2 + 0x70);
  fVar18 = fVar19;
  if ((0.0 <= fVar24) && (0.0 <= *(float *)(param_1[3] + 0xc))) {
    fVar15 = fVar17 * -fVar24;
    fVar16 = fVar24;
    fVar18 = *(float *)(param_1[3] + 0xc);
  }
  auVar26 = *param_1;
  fVar22 = (float)*(undefined8 *)param_1[1];
  fVar24 = fVar22 - (float)*(undefined8 *)(lVar3 + 0x70);
  fVar27 = (float)((ulong)*(undefined8 *)param_1[1] >> 0x20);
  fVar30 = fVar27 - (float)((ulong)*(undefined8 *)(lVar3 + 0x70) >> 0x20);
  fVar28 = (float)*(undefined8 *)(param_1[1] + 8);
  fVar32 = fVar28 - (float)*(undefined8 *)(lVar3 + 0x78);
  fVar29 = (float)((ulong)*(undefined8 *)(param_1[1] + 8) >> 0x20);
  fVar33 = fVar29 - (float)((ulong)*(undefined8 *)(lVar3 + 0x78) >> 0x20);
  pauVar1 = param_1 + 2;
  fVar25 = (float)*(undefined8 *)(param_1[2] + 8);
  fVar23 = (float)((ulong)*(undefined8 *)(param_1[2] + 8) >> 0x20);
  uVar6 = *(undefined8 *)*pauVar1;
  fVar20 = (float)uVar6;
  fVar21 = (float)((ulong)uVar6 >> 0x20);
  auVar37 = NEON_ext(auVar26,auVar26,8,1);
  uVar36 = NEON_ext(auVar26._0_8_,auVar37._0_8_,4,1);
  auVar4._12_4_ = fVar23;
  auVar4._0_12_ = *(undefined1 (*) [12])*pauVar1;
  auVar5._12_4_ = fVar23;
  auVar5._0_12_ = *(undefined1 (*) [12])*pauVar1;
  auVar37 = NEON_ext(auVar4,auVar5,8,1);
  uVar42 = NEON_ext(uVar6,auVar37._0_8_,4,1);
  fVar40 = auVar26._0_4_;
  fVar31 = (float)((ulong)uVar42 >> 0x20);
  fVar34 = fVar40 * (float)uVar42 - fVar20 * (float)uVar36;
  fVar38 = auVar26._4_4_ * fVar31 - fVar21 * (float)((ulong)uVar36 >> 0x20);
  fVar41 = auVar26._8_4_ * fVar20 - fVar25 * fVar40;
  auVar7._4_4_ = fVar30;
  auVar7._0_4_ = fVar24;
  auVar7._8_4_ = fVar32;
  auVar7._12_4_ = fVar33;
  auVar8._4_4_ = fVar30;
  auVar8._0_4_ = fVar24;
  auVar8._8_4_ = fVar32;
  auVar8._12_4_ = fVar33;
  auVar37 = NEON_ext(auVar7,auVar8,4,1);
  fVar33 = fVar20 * auVar37._0_4_ - (float)uVar42 * fVar24;
  fVar31 = fVar21 * auVar37._4_4_ - fVar31 * fVar30;
  fVar24 = fVar25 * fVar24 - fVar20 * fVar32;
  fVar35 = (float)*(undefined8 *)(lVar2 + 0x60) * fVar34 +
           *(float *)(lVar2 + 0x40) * fVar38 + (float)*(undefined8 *)(lVar2 + 0x50) * fVar41;
  fVar39 = (float)((ulong)*(undefined8 *)(lVar2 + 0x60) >> 0x20) * fVar34 +
           *(float *)(lVar2 + 0x44) * fVar38 +
           (float)((ulong)*(undefined8 *)(lVar2 + 0x50) >> 0x20) * fVar41;
  fVar34 = (float)*(undefined8 *)(lVar2 + 0x68) * fVar34 +
           *(float *)(lVar2 + 0x48) * fVar38 + (float)*(undefined8 *)(lVar2 + 0x58) * fVar41;
  fVar44 = (float)*(undefined8 *)(lVar3 + 0x38);
  fVar38 = (float)*(undefined8 *)(lVar3 + 0x30);
  fVar41 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
  fVar30 = (float)*(undefined8 *)(lVar3 + 0x60) * fVar33 +
           *(float *)(lVar3 + 0x40) * fVar31 + (float)*(undefined8 *)(lVar3 + 0x50) * fVar24;
  fVar32 = (float)((ulong)*(undefined8 *)(lVar3 + 0x60) >> 0x20) * fVar33 +
           *(float *)(lVar3 + 0x44) * fVar31 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x50) >> 0x20) * fVar24;
  fVar33 = (float)*(undefined8 *)(lVar3 + 0x68) * fVar33 +
           *(float *)(lVar3 + 0x48) * fVar31 + (float)*(undefined8 *)(lVar3 + 0x58) * fVar24;
  auVar43._0_4_ = *(float *)(lVar2 + 0x30) + fVar38;
  auVar43._4_4_ = *(float *)(lVar2 + 0x34) + fVar41;
  auVar43._8_4_ = *(float *)(lVar2 + 0x38) + fVar44;
  auVar43._12_4_ = *(float *)(lVar2 + 0x3c) + (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
  fVar24 = fVar35 * fVar35 * *(float *)(lVar2 + 0x30) + fVar38 * fVar30 * fVar30;
  fVar31 = fVar39 * fVar39 * *(float *)(lVar2 + 0x34) + fVar41 * fVar32 * fVar32;
  uVar36 = CONCAT44(fVar31,fVar24);
  fVar38 = fVar34 * fVar34 * *(float *)(lVar2 + 0x38) + fVar44 * fVar33 * fVar33;
  auVar9._8_4_ = 0x28800000;
  auVar9._0_8_ = 0x2880000028800000;
  auVar9._12_4_ = 0x28800000;
  auVar37 = NEON_fmax(auVar43,auVar9,4);
  auVar10._8_4_ = fVar38;
  auVar10._0_8_ = uVar36;
  auVar10._12_4_ = auVar37._12_4_;
  auVar11._8_4_ = fVar38;
  auVar11._0_8_ = uVar36;
  auVar11._12_4_ = auVar37._12_4_;
  auVar37 = NEON_ext(auVar10,auVar11,8,1);
  fVar24 = fVar24 + fVar31 + auVar37._0_4_ + auVar37._4_4_;
  fVar20 = fVar20 * (fVar22 - fVar40);
  fVar21 = fVar21 * (fVar27 - auVar26._4_4_);
  fVar22 = fVar25 * (fVar28 - auVar26._8_4_);
  fVar23 = fVar23 * (fVar29 - auVar26._12_4_);
  auVar26._4_4_ = fVar21;
  auVar26._0_4_ = fVar20;
  auVar26._8_4_ = fVar22;
  auVar26._12_4_ = fVar23;
  auVar37._4_4_ = fVar21;
  auVar37._0_4_ = fVar20;
  auVar37._8_4_ = fVar22;
  auVar37._12_4_ = fVar23;
  auVar26 = NEON_ext(auVar26,auVar37,8,1);
  pfVar12[6] = fVar34;
  pfVar12[7] = fVar19 / fVar24;
  pfVar12[4] = fVar35;
  pfVar12[5] = fVar39;
  *(ulong *)(pfVar12 + 10) = CONCAT44(fVar24,fVar33);
  *(ulong *)(pfVar12 + 8) = CONCAT44(fVar32,fVar30);
  *(ulong *)(pfVar12 + 2) = CONCAT44(fVar17 * (auVar26._0_4_ + fVar20 + fVar21),fVar25);
  *(undefined8 *)pfVar12 = uVar6;
  *param_3 = pfVar12 + 0x10;
  pfVar12[0xc] = fVar13 * fVar15;
  pfVar12[0xd] = fVar14 * fVar15;
  pfVar12[0xe] = fVar16;
  pfVar12[0xf] = fVar18;
  *pfVar12 = *pfVar12 + 1.1920929e-07;
  *(undefined1 *)pfVar12 = 7;
  return;
}


