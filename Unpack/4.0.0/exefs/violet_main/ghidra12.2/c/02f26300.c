/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f26300; name: FUN_02f26300
 */


void FUN_02f26300(undefined1 (*param_1) [12],long param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float *pfVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  
  pauVar1 = (undefined1 (*) [12])(param_1[2] + 8);
  uVar28 = *(undefined8 *)(param_1[3] + 4);
  fVar10 = (float)uVar28;
  uVar11 = (undefined4)((ulong)uVar28 >> 0x20);
  uVar5 = *(undefined8 *)*pauVar1;
  fVar9 = (float)uVar5;
  fVar19 = (float)((ulong)uVar5 >> 0x20);
  auVar26._12_4_ = uVar11;
  auVar26._0_12_ = *pauVar1;
  auVar4._12_4_ = uVar11;
  auVar4._0_12_ = *pauVar1;
  auVar26 = NEON_ext(auVar26,auVar4,8,1);
  pfVar8 = (float *)*param_3;
  lVar2 = *(long *)(param_2 + 0x30);
  lVar3 = *(long *)(param_2 + 0x38);
  fVar12 = *(float *)(param_2 + 8);
  *(undefined8 *)(pfVar8 + 2) = uVar28;
  *(undefined8 *)pfVar8 = uVar5;
  fVar16 = (float)*(undefined8 *)(*param_1 + 8);
  fVar13 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  uVar28 = *(undefined8 *)*param_1;
  fVar14 = (float)uVar28;
  fVar15 = (float)((ulong)uVar28 >> 0x20);
  uVar25 = NEON_ext(uVar5,auVar26._0_8_,4,1);
  auVar21._0_4_ = fVar14 - *(float *)(lVar3 + 0x70);
  auVar21._4_4_ = fVar15 - *(float *)(lVar3 + 0x74);
  auVar21._8_4_ = fVar16 - *(float *)(lVar3 + 0x78);
  auVar21._12_4_ = fVar13 - *(float *)(lVar3 + 0x7c);
  auVar6._12_4_ = fVar13;
  auVar6._0_12_ = *param_1;
  auVar7._12_4_ = fVar13;
  auVar7._0_12_ = *param_1;
  auVar26 = NEON_ext(auVar6,auVar7,8,1);
  uVar28 = NEON_ext(uVar28,auVar26._0_8_,4,1);
  auVar26 = NEON_ext(auVar21,auVar21,4,1);
  fVar18 = (float)((ulong)uVar25 >> 0x20);
  fVar13 = fVar14 * (float)uVar25 - fVar9 * (float)uVar28;
  fVar15 = fVar15 * fVar18 - fVar19 * (float)((ulong)uVar28 >> 0x20);
  fVar17 = fVar16 * fVar9 - fVar10 * fVar14;
  fVar20 = fVar9 * auVar26._0_4_ - (float)uVar25 * auVar21._0_4_;
  fVar23 = fVar19 * auVar26._4_4_ - fVar18 * auVar21._4_4_;
  fVar24 = fVar10 * auVar21._0_4_ - fVar9 * auVar21._8_4_;
  fVar14 = *(float *)(lVar2 + 0x60) * fVar13 +
           *(float *)(lVar2 + 0x40) * fVar15 + *(float *)(lVar2 + 0x50) * fVar17;
  fVar16 = *(float *)(lVar2 + 100) * fVar13 +
           *(float *)(lVar2 + 0x44) * fVar15 + *(float *)(lVar2 + 0x54) * fVar17;
  fVar18 = *(float *)(lVar2 + 0x68) * fVar13 +
           *(float *)(lVar2 + 0x48) * fVar15 + *(float *)(lVar2 + 0x58) * fVar17;
  fVar19 = *(float *)(lVar2 + 0x6c) * fVar13 +
           *(float *)(lVar2 + 0x4c) * fVar15 + *(float *)(lVar2 + 0x5c) * fVar17;
  auVar30._8_4_ = 0x28800000;
  auVar30._0_8_ = 0x2880000028800000;
  auVar30._12_4_ = 0x28800000;
  fVar13 = (float)*(undefined8 *)(lVar3 + 0x60) * fVar20 +
           (float)*(undefined8 *)(lVar3 + 0x40) * fVar23 +
           (float)*(undefined8 *)(lVar3 + 0x50) * fVar24;
  fVar15 = (float)((ulong)*(undefined8 *)(lVar3 + 0x60) >> 0x20) * fVar20 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x40) >> 0x20) * fVar23 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x50) >> 0x20) * fVar24;
  fVar17 = (float)*(undefined8 *)(lVar3 + 0x68) * fVar20 +
           (float)*(undefined8 *)(lVar3 + 0x48) * fVar23 +
           (float)*(undefined8 *)(lVar3 + 0x58) * fVar24;
  fVar20 = (float)((ulong)*(undefined8 *)(lVar3 + 0x68) >> 0x20) * fVar20 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x48) >> 0x20) * fVar23 +
           (float)((ulong)*(undefined8 *)(lVar3 + 0x58) >> 0x20) * fVar24;
  fVar23 = (float)*(undefined8 *)(lVar3 + 0x30);
  auVar29._0_4_ = *(float *)(lVar2 + 0x30) + fVar23;
  fVar24 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
  auVar29._4_4_ = *(float *)(lVar2 + 0x34) + fVar24;
  fVar33 = (float)*(undefined8 *)(lVar3 + 0x38);
  auVar29._8_4_ = *(float *)(lVar2 + 0x38) + fVar33;
  fVar34 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
  auVar29._12_4_ = *(float *)(lVar2 + 0x3c) + fVar34;
  auVar26 = NEON_fmax(auVar29,auVar30,4);
  fVar23 = *(float *)(lVar2 + 0x30) * fVar14 * fVar14 + fVar23 * fVar13 * fVar13;
  fVar24 = *(float *)(lVar2 + 0x34) * fVar16 * fVar16 + fVar24 * fVar15 * fVar15;
  auVar27._0_8_ = CONCAT44(fVar24,fVar23);
  auVar27._8_4_ = *(float *)(lVar2 + 0x38) * fVar18 * fVar18 + fVar33 * fVar17 * fVar17;
  auVar27._12_4_ = *(float *)(lVar2 + 0x3c) * fVar19 * fVar19 + fVar34 * fVar20 * fVar20;
  uVar28 = NEON_fmov(0x3f800000,4);
  auVar31._8_8_ = auVar27._8_8_;
  auVar31._0_8_ = auVar27._0_8_;
  auVar32._0_12_ = auVar31._0_12_;
  auVar32._12_4_ = auVar26._12_4_;
  auVar26 = NEON_ext(auVar32,auVar32,8,1);
  fVar19 = fVar23 + fVar24 + auVar26._0_4_ + auVar26._4_4_;
  *(ulong *)(pfVar8 + 6) = CONCAT44((float)uVar28 / fVar19,fVar18);
  *(ulong *)(pfVar8 + 4) = CONCAT44(fVar16,fVar14);
  pfVar8[10] = fVar17;
  pfVar8[0xb] = fVar19;
  pfVar8[8] = fVar13;
  pfVar8[9] = fVar15;
  auVar22._0_4_ = (*(float *)(param_1[1] + 4) - *(float *)*param_1) * *(float *)(param_1[2] + 8);
  auVar22._4_4_ = (*(float *)(param_1[1] + 8) - *(float *)(*param_1 + 4)) * *(float *)param_1[3];
  auVar22._8_4_ = (*(float *)param_1[2] - *(float *)(*param_1 + 8)) * *(float *)(param_1[3] + 4);
  auVar22._12_4_ = (*(float *)(param_1[2] + 4) - *(float *)param_1[1]) * *(float *)(param_1[3] + 8);
  auVar26 = NEON_ext(auVar22,auVar22,8,1);
  *(ulong *)(pfVar8 + 2) = CONCAT44(fVar12 * (auVar22._0_4_ + auVar22._4_4_ + auVar26._0_4_),fVar10)
  ;
  *(undefined8 *)pfVar8 = uVar5;
  fVar19 = *(float *)param_1[4];
  fVar10 = *(float *)(param_1[4] + 4);
  *pfVar8 = fVar9 + 1.1920929e-07;
  pfVar8[0xc] = fVar19;
  pfVar8[0xd] = fVar10;
  *(undefined1 *)pfVar8 = 6;
  *param_3 = pfVar8 + 0x10;
  return;
}


