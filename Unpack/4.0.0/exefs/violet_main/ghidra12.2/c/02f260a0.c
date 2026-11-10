/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f260a0; name: FUN_02f260a0
 */


void FUN_02f260a0(undefined1 (*param_1) [12],long param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  float fVar27;
  undefined1 auVar26 [16];
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  pauVar1 = (undefined1 (*) [12])(param_1[1] + 4);
  uVar5 = *(undefined8 *)param_1[2];
  uVar16 = (undefined4)((ulong)uVar5 >> 0x20);
  uVar24 = *(undefined8 *)*pauVar1;
  fVar15 = (float)uVar24;
  fVar13 = (float)((ulong)uVar24 >> 0x20);
  auVar25._12_4_ = uVar16;
  auVar25._0_12_ = *pauVar1;
  auVar4._12_4_ = uVar16;
  auVar4._0_12_ = *pauVar1;
  auVar25 = NEON_ext(auVar25,auVar4,8,1);
  pfVar10 = (float *)*param_3;
  lVar2 = *(long *)(param_2 + 0x30);
  lVar3 = *(long *)(param_2 + 0x38);
  fVar11 = *(float *)(param_2 + 0x74);
  *(undefined8 *)(pfVar10 + 2) = uVar5;
  *(undefined8 *)pfVar10 = uVar24;
  fVar18 = (float)*(undefined8 *)(*param_1 + 8);
  fVar17 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  uVar28 = *(undefined8 *)*param_1;
  fVar12 = (float)uVar28;
  fVar14 = (float)((ulong)uVar28 >> 0x20);
  uVar24 = NEON_ext(uVar24,auVar25._0_8_,4,1);
  fVar20 = fVar12 - (float)*(undefined8 *)(lVar3 + 0x70);
  fVar21 = fVar14 - (float)((ulong)*(undefined8 *)(lVar3 + 0x70) >> 0x20);
  fVar22 = fVar18 - (float)*(undefined8 *)(lVar3 + 0x78);
  fVar23 = fVar17 - (float)((ulong)*(undefined8 *)(lVar3 + 0x78) >> 0x20);
  auVar6._12_4_ = fVar17;
  auVar6._0_12_ = *param_1;
  auVar7._12_4_ = fVar17;
  auVar7._0_12_ = *param_1;
  auVar25 = NEON_ext(auVar6,auVar7,8,1);
  uVar28 = NEON_ext(uVar28,auVar25._0_8_,4,1);
  auVar8._4_4_ = fVar21;
  auVar8._0_4_ = fVar20;
  auVar8._8_4_ = fVar22;
  auVar8._12_4_ = fVar23;
  auVar9._4_4_ = fVar21;
  auVar9._0_4_ = fVar20;
  auVar9._8_4_ = fVar22;
  auVar9._12_4_ = fVar23;
  auVar25 = NEON_ext(auVar8,auVar9,4,1);
  fVar27 = (float)((ulong)uVar24 >> 0x20);
  fVar17 = fVar12 * (float)uVar24 - fVar15 * (float)uVar28;
  fVar23 = fVar14 * fVar27 - fVar13 * (float)((ulong)uVar28 >> 0x20);
  fVar19 = fVar18 * fVar15 - (float)uVar5 * fVar12;
  fVar12 = fVar15 * auVar25._0_4_ - (float)uVar24 * fVar20;
  fVar14 = fVar13 * auVar25._4_4_ - fVar27 * fVar21;
  fVar15 = (float)uVar5 * fVar20 - fVar15 * fVar22;
  fVar18 = *(float *)(lVar2 + 0x60) * fVar17 +
           (float)*(undefined8 *)(lVar2 + 0x40) * fVar23 + *(float *)(lVar2 + 0x50) * fVar19;
  fVar20 = *(float *)(lVar2 + 100) * fVar17 +
           (float)((ulong)*(undefined8 *)(lVar2 + 0x40) >> 0x20) * fVar23 +
           *(float *)(lVar2 + 0x54) * fVar19;
  fVar21 = *(float *)(lVar2 + 0x68) * fVar17 +
           (float)*(undefined8 *)(lVar2 + 0x48) * fVar23 + *(float *)(lVar2 + 0x58) * fVar19;
  fVar19 = *(float *)(lVar2 + 0x6c) * fVar17 +
           (float)((ulong)*(undefined8 *)(lVar2 + 0x48) >> 0x20) * fVar23 +
           *(float *)(lVar2 + 0x5c) * fVar19;
  auVar31._8_4_ = 0x28800000;
  auVar31._0_8_ = 0x2880000028800000;
  auVar31._12_4_ = 0x28800000;
  fVar13 = (float)*(undefined8 *)(lVar3 + 0x60) * fVar12 +
           (float)*(undefined8 *)(lVar3 + 0x40) * fVar14 +
           (float)*(undefined8 *)(lVar3 + 0x50) * fVar15;
  fVar17 = (float)((ulong)*(undefined8 *)(lVar3 + 0x60) >> 0x20) * fVar12 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x40) >> 0x20) * fVar14 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x50) >> 0x20) * fVar15;
  fVar23 = (float)*(undefined8 *)(lVar3 + 0x68) * fVar12 +
           (float)*(undefined8 *)(lVar3 + 0x48) * fVar14 +
           (float)*(undefined8 *)(lVar3 + 0x58) * fVar15;
  fVar15 = (float)((ulong)*(undefined8 *)(lVar3 + 0x68) >> 0x20) * fVar12 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x48) >> 0x20) * fVar14 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x58) >> 0x20) * fVar15;
  fVar12 = (float)*(undefined8 *)(lVar3 + 0x30);
  auVar26._0_4_ = *(float *)(lVar2 + 0x30) + fVar12;
  fVar14 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
  auVar26._4_4_ = *(float *)(lVar2 + 0x34) + fVar14;
  fVar22 = (float)*(undefined8 *)(lVar3 + 0x38);
  auVar26._8_4_ = *(float *)(lVar2 + 0x38) + fVar22;
  fVar27 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
  auVar26._12_4_ = *(float *)(lVar2 + 0x3c) + fVar27;
  auVar25 = NEON_fmax(auVar26,auVar31,4);
  fVar12 = *(float *)(lVar2 + 0x30) * fVar18 * fVar18 + fVar12 * fVar13 * fVar13;
  fVar14 = *(float *)(lVar2 + 0x34) * fVar20 * fVar20 + fVar14 * fVar17 * fVar17;
  auVar29._12_4_ = *(float *)(lVar2 + 0x3c) * fVar19 * fVar19 + fVar27 * fVar15 * fVar15;
  auVar29._8_4_ = *(float *)(lVar2 + 0x38) * fVar21 * fVar21 + fVar22 * fVar23 * fVar23;
  auVar29._4_4_ = fVar14;
  auVar29._0_4_ = fVar12;
  auVar30._0_12_ = auVar29._0_12_;
  auVar30._12_4_ = auVar25._12_4_;
  auVar25 = NEON_ext(auVar30,auVar30,8,1);
  fVar15 = fVar12 + fVar14 + auVar25._0_4_ + auVar25._4_4_;
  *(ulong *)(pfVar10 + 6) = CONCAT44(fVar11 / fVar15,fVar21);
  *(ulong *)(pfVar10 + 4) = CONCAT44(fVar20,fVar18);
  *(ulong *)(pfVar10 + 10) = CONCAT44(fVar15,fVar23);
  *(ulong *)(pfVar10 + 8) = CONCAT44(fVar17,fVar13);
  pfVar10[3] = *(float *)(*(long *)(param_1[3] + 4) + 4) * *(float *)(param_2 + 0x1c);
  *param_3 = pfVar10 + 0x10;
  pfVar10[0xc] = *(float *)(param_1[2] + 8) * *(float *)(param_2 + 4);
  *pfVar10 = *pfVar10 + 1.1920929e-07;
  *(undefined1 *)pfVar10 = 8;
  return;
}


