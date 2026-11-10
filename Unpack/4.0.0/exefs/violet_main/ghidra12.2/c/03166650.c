/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03166650; name: FUN_03166650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03166650(float param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 (*param_4) [12],undefined8 param_5,undefined8 *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  undefined1 auVar16 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar26;
  undefined8 uVar25;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 local_18;
  
  fVar13 = param_3._12_4_;
  fVar22 = param_3._8_4_;
  fVar21 = param_3._4_4_;
  fVar20 = param_3._0_4_;
  uVar5 = *(ulong *)(*param_4 + 8);
  fVar23 = (float)uVar5;
  fVar12 = (float)(uVar5 >> 0x20);
  uVar4 = *(undefined8 *)*param_4;
  fVar10 = (float)uVar4;
  fVar11 = (float)((ulong)uVar4 >> 0x20);
  uVar1 = *(uint *)(param_6 + 1);
  pfVar7 = (float *)*param_6;
  if (0 < (int)uVar1) {
    pfVar8 = pfVar7 + (long)(int)(uVar1 - 1) * 4;
    fVar20 = *pfVar8;
    fVar21 = pfVar8[1];
    fVar22 = pfVar8[2];
    fVar13 = pfVar8[3];
    fVar14 = fVar23 * fVar22 + fVar10 * fVar20 + fVar11 * fVar21;
    fVar17 = fVar23 * fVar22 + fVar10 * fVar20 + fVar11 * fVar21;
    fVar15 = 0.0;
    fVar18 = 0.0;
    pfVar8 = pfVar7;
    uVar9 = (ulong)uVar1;
    fVar30 = fVar20 - fVar10 * fVar14;
    fVar34 = fVar21 - fVar11 * fVar17;
    fVar14 = fVar22 - fVar23 * fVar14;
    fVar17 = fVar13 - fVar12 * fVar17;
    do {
      uVar9 = uVar9 - 1;
      fVar24 = (float)*(undefined8 *)pfVar8;
      fVar28 = fVar10 * fVar24;
      fVar26 = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
      fVar33 = fVar11 * fVar26;
      fVar27 = (float)*(undefined8 *)(pfVar8 + 2);
      fVar35 = fVar23 * fVar27;
      fVar29 = fVar28 + fVar33 + fVar35;
      fVar35 = fVar28 + fVar33 + fVar35;
      fVar24 = fVar24 - fVar10 * fVar29;
      fVar26 = fVar26 - fVar11 * fVar35;
      fVar27 = fVar27 - fVar23 * fVar29;
      fVar33 = (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20) - fVar12 * fVar35;
      fVar30 = fVar24 - fVar30;
      fVar34 = fVar26 - fVar34;
      fVar14 = fVar27 - fVar14;
      fVar28 = fVar30 * fVar30 + fVar34 * fVar34 + fVar14 * fVar14;
      fVar29 = fVar30 * fVar30 + fVar34 * fVar34 + fVar14 * fVar14;
      uVar2 = (uint)(fVar15 < fVar28);
      uVar3 = (uint)(fVar18 < fVar29);
      fVar15 = (float)((uint)fVar15 ^ ((uint)fVar15 ^ (uint)fVar28) & -uVar2);
      fVar18 = (float)((uint)fVar18 ^ ((uint)fVar18 ^ (uint)fVar29) & -uVar3);
      fVar20 = (float)((uint)fVar20 ^
                      ((uint)fVar20 ^ (uint)fVar30) & (int)(uVar2 * -0x80000000) >> 0x1f);
      fVar21 = (float)((uint)fVar21 ^
                      ((uint)fVar21 ^ (uint)fVar34) & (int)(uVar3 * -0x80000000) >> 0x1f);
      fVar22 = (float)((uint)fVar22 ^
                      ((uint)fVar22 ^ (uint)fVar14) & (int)(uVar2 * -0x80000000) >> 0x1f);
      fVar13 = (float)((uint)fVar13 ^
                      ((uint)fVar13 ^ (uint)(fVar33 - fVar17)) & (int)(uVar3 * -0x80000000) >> 0x1f)
      ;
      pfVar8 = pfVar8 + 4;
      fVar30 = fVar24;
      fVar34 = fVar26;
      fVar14 = fVar27;
      fVar17 = fVar33;
    } while (uVar9 != 0);
  }
  fVar30 = fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22;
  if (fVar30 == 0.0) {
    auVar32 = ZEXT816(0);
  }
  else {
    fVar30 = SQRT(fVar30);
    fVar34 = SQRT(fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22);
    auVar32._0_4_ = fVar20 / fVar30;
    auVar32._4_4_ = fVar21 / fVar34;
    auVar32._8_4_ = fVar22 / fVar30;
    auVar32._12_4_ = fVar13 / fVar34;
  }
  auVar16._12_4_ = fVar12;
  auVar16._0_12_ = *param_4;
  auVar19._12_4_ = fVar12;
  auVar19._0_12_ = *param_4;
  auVar16 = NEON_ext(auVar16,auVar19,4,1);
  auVar19 = NEON_ext(auVar32,auVar32,4,1);
  fVar13 = auVar32._0_4_;
  auVar31._0_4_ = -fVar13;
  fVar30 = auVar32._4_4_;
  auVar31._4_4_ = -fVar30;
  fVar34 = auVar32._8_4_;
  auVar31._8_4_ = -fVar34;
  auVar31._12_4_ = -auVar32._12_4_;
  auVar41 = NEON_ext(auVar32,auVar32,8,1);
  auVar37._0_4_ = fVar10 * auVar19._0_4_ - auVar16._0_4_ * fVar13;
  auVar37._4_4_ = fVar11 * auVar19._4_4_ - auVar16._4_4_ * fVar30;
  auVar37._8_4_ = fVar23 * fVar13 - fVar10 * fVar34;
  auVar37._12_4_ = fVar12 * fVar30 - fVar11 * auVar32._12_4_;
  auVar16 = NEON_ext(auVar37,auVar37,4,1);
  auVar32 = NEON_ext(auVar31,auVar31,8,1);
  fVar10 = auVar16._0_4_;
  auVar40._0_4_ = -fVar10;
  fVar11 = auVar16._4_4_;
  auVar40._4_4_ = -fVar11;
  auVar40._8_4_ = -auVar37._0_4_;
  auVar40._12_4_ = 0x80000000;
  auVar16 = NEON_ext(auVar40,auVar40,8,1);
  fVar20 = *pfVar7;
  fVar21 = pfVar7[1];
  fVar22 = pfVar7[2];
  auVar38._0_4_ = auVar41._0_4_ * fVar22 + fVar13 * fVar20 + fVar30 * fVar21;
  auVar38._4_4_ = auVar32._0_4_ * fVar22 + auVar31._0_4_ * fVar20 + auVar31._4_4_ * fVar21;
  auVar38._8_4_ = auVar37._0_4_ * fVar22 + fVar10 * fVar20 + fVar11 * fVar21;
  auVar38._12_4_ = auVar16._0_4_ * fVar22 + auVar40._0_4_ * fVar20 + auVar40._4_4_ * fVar21;
  if (1 < (int)uVar1) {
    lVar6 = (ulong)uVar1 - 1;
    do {
      fVar20 = pfVar7[4];
      fVar21 = pfVar7[5];
      fVar22 = pfVar7[6];
      lVar6 = lVar6 + -1;
      auVar39._0_4_ = auVar41._0_4_ * fVar22 + fVar13 * fVar20 + fVar30 * fVar21;
      auVar39._4_4_ = auVar32._0_4_ * fVar22 + auVar31._0_4_ * fVar20 + auVar31._4_4_ * fVar21;
      auVar39._8_4_ = auVar37._0_4_ * fVar22 + fVar10 * fVar20 + fVar11 * fVar21;
      auVar39._12_4_ = auVar16._0_4_ * fVar22 + auVar40._0_4_ * fVar20 + auVar40._4_4_ * fVar21;
      auVar38 = NEON_fmin(auVar38,auVar39,4);
      pfVar7 = pfVar7 + 4;
    } while (lVar6 != 0);
  }
  fVar20 = auVar38._0_4_ * (float)_DAT_03cabc00;
  fVar21 = auVar38._4_4_ * (float)((ulong)_DAT_03cabc00 >> 0x20);
  fVar22 = auVar38._8_4_ * (float)_UNK_03cabc08;
  fVar23 = auVar38._12_4_ * (float)((ulong)_UNK_03cabc08 >> 0x20);
  uVar36 = NEON_fmax(CONCAT44((fVar21 - fVar20) * 6.103888e-05,(fVar21 - fVar20) * 6.103888e-05),
                     0x3400000034000000,4);
  uVar25 = NEON_fmax(CONCAT44((fVar23 - fVar22) * 6.103888e-05,(fVar23 - fVar22) * 6.103888e-05),
                     0x3400000034000000,4);
  if (0.0 < param_1) {
    uVar25 = CONCAT44(param_1,param_1);
    uVar36 = CONCAT44(param_1,param_1);
  }
  *(ulong *)(param_4[7] + 4) = (ulong)(uint)(fVar34 * (float)uVar36);
  *(ulong *)(param_4[6] + 8) =
       CONCAT44(fVar30 * (float)((ulong)uVar36 >> 0x20),fVar13 * (float)uVar36);
  *(ulong *)(param_4[8] + 8) = (ulong)(uint)(auVar37._0_4_ * (float)uVar25);
  *(ulong *)param_4[8] = CONCAT44(fVar11 * (float)((ulong)uVar25 >> 0x20),fVar10 * (float)uVar25);
  *(ulong *)param_4[10] = uVar5 & 0xffffffff;
  *(undefined8 *)(param_4[9] + 4) = uVar4;
  *(ulong *)(param_4[0xb] + 4) = CONCAT44(0x3f800000,fVar34 * fVar20 + auVar37._0_4_ * fVar22);
  *(ulong *)(param_4[10] + 8) =
       CONCAT44(fVar30 * fVar20 + fVar11 * fVar22,fVar13 * fVar20 + fVar10 * fVar22);
  local_18 = 0;
  FUN_031cbfe8(param_4[1] + 4,param_4[6] + 8,&local_18);
  return;
}


