/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0340ae50; name: FUN_0340ae50
 */


void FUN_0340ae50(int param_1,int param_2,int param_3,int param_4,long param_5,long param_6,
                 long param_7,long param_8,float *param_9,undefined8 param_10,int param_11,
                 int param_12)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  bool bVar17;
  bool bVar18;
  long lVar19;
  ulong uVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  long lVar25;
  float *pfVar26;
  undefined1 (*pauVar27) [16];
  long lVar28;
  float *pfVar29;
  long lVar30;
  undefined1 (*pauVar31) [16];
  ulong uVar32;
  ulong uVar33;
  float *pfVar34;
  float *pfVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uVar38;
  undefined8 uVar39;
  
  bVar17 = param_4 == 0;
  bVar18 = param_3 == 0;
  iVar3 = param_2 >> 2;
  iVar4 = param_1 >> 2;
  iVar6 = iVar3;
  if (bVar18) {
    iVar6 = iVar4;
  }
  iVar7 = iVar3;
  if (bVar18 || bVar17) {
    iVar7 = iVar4;
  }
  iVar3 = iVar3 - iVar4;
  pauVar27 = (undefined1 (*) [16])(param_6 + (long)iVar6 * 4);
  lVar25 = param_8 + (long)(param_2 >> 1) * 4;
  if (bVar18 || bVar17) {
    lVar25 = param_7 + (long)(param_1 >> 1) * 4;
    param_8 = param_7;
  }
  iVar4 = iVar3;
  if (!bVar18 || bVar17) {
    iVar4 = 0;
  }
  if (((iVar3 != 0) && (param_3 != 0)) && (param_4 == 0)) {
    iVar6 = param_12;
    if (iVar3 <= param_12) {
      iVar6 = iVar3;
    }
    iVar5 = param_11;
    if (iVar3 <= param_11) {
      iVar5 = iVar3;
    }
    pauVar31 = (undefined1 (*) [16])((long)pauVar27 + (long)iVar6 * -4);
    pauVar27 = (undefined1 (*) [16])((long)pauVar27 + (long)iVar5 * -4);
    param_11 = param_11 - iVar5;
    param_12 = param_12 - iVar6;
    if (((((ulong)param_9 & 0xf) == 0) && (((ulong)pauVar27 & 0xf) == 0)) &&
       (((ulong)pauVar31 & 0xf) == 0)) {
      pfVar22 = param_9;
      if (iVar5 < iVar6) {
        do {
          pauVar27 = pauVar27 + -1;
          auVar36 = NEON_rev64(*pauVar27,4);
          auVar36 = NEON_ext(auVar36,auVar36,8,1);
          param_9 = pfVar22 + 4;
          *(long *)(pfVar22 + 2) = auVar36._8_8_;
          *(long *)pfVar22 = auVar36._0_8_;
          pfVar22 = param_9;
        } while (pauVar31 < pauVar27);
      }
    }
    else {
      pfVar22 = param_9;
      if (iVar5 < iVar6) {
        do {
          pauVar27 = (undefined1 (*) [16])(pauVar27[-1] + 0xc);
          param_9 = pfVar22 + 1;
          *pfVar22 = *(float *)*pauVar27;
          pfVar22 = param_9;
        } while (pauVar31 < pauVar27);
      }
    }
  }
  iVar3 = param_12;
  if (iVar7 <= param_12) {
    iVar3 = iVar7;
  }
  iVar6 = param_11;
  if (iVar7 <= param_11) {
    iVar6 = iVar7;
  }
  uVar32 = (long)pauVar27 + (long)iVar3 * -4;
  uVar33 = (long)pauVar27 + (long)iVar6 * -4;
  lVar28 = param_5 + (long)iVar7 * 4 + (long)iVar6 * -4;
  lVar25 = lVar25 + (long)iVar6 * -4;
  param_11 = param_11 - iVar6;
  param_12 = param_12 - iVar3;
  param_8 = param_8 + (long)iVar6 * 4;
  if (((((ulong)param_9 & 0xf) == 0) && ((uVar33 & 0xf) == 0)) && ((uVar32 & 0xf) == 0)) {
    if (iVar3 <= iVar6) goto LAB_0340afb0;
    lVar19 = 0;
    lVar30 = 0;
    do {
      lVar2 = lVar30 + -0x10;
      lVar14 = lVar30 + -0xc;
      lVar15 = lVar30 + -8;
      lVar16 = lVar30 + -4;
      lVar1 = lVar25 + lVar30;
      auVar36 = NEON_rev64(*(undefined1 (*) [16])(param_8 + lVar19),4);
      uVar39 = *(undefined8 *)(lVar28 + lVar30 + -8);
      uVar38 = *(undefined8 *)(lVar28 + lVar30 + -0x10);
      lVar30 = lVar30 + -0x10;
      uVar20 = uVar33 + lVar30;
      auVar36 = NEON_ext(auVar36,auVar36,8,1);
      auVar37._0_4_ =
           auVar36._0_4_ * (float)uVar38 + *(float *)(lVar1 + -0x10) * *(float *)(uVar33 + lVar2);
      auVar37._4_4_ =
           auVar36._4_4_ * (float)((ulong)uVar38 >> 0x20) +
           *(float *)(lVar1 + -0xc) * *(float *)(uVar33 + lVar14);
      auVar37._8_4_ =
           auVar36._8_4_ * (float)uVar39 + *(float *)(lVar1 + -8) * *(float *)(uVar33 + lVar15);
      auVar37._12_4_ =
           auVar36._12_4_ * (float)((ulong)uVar39 >> 0x20) +
           *(float *)(lVar1 + -4) * *(float *)(uVar33 + lVar16);
      auVar36 = NEON_rev64(auVar37,4);
      auVar36 = NEON_ext(auVar36,auVar36,8,1);
      ((undefined8 *)((long)param_9 + lVar19))[1] = auVar36._8_8_;
      *(undefined8 *)((long)param_9 + lVar19) = auVar36._0_8_;
      lVar19 = lVar19 + 0x10;
    } while (uVar32 < uVar20);
  }
  else {
    if (iVar3 <= iVar6) goto LAB_0340afb0;
    lVar19 = 0;
    lVar30 = 0;
    do {
      lVar1 = lVar25 + lVar30;
      lVar14 = lVar30 + -4;
      lVar2 = lVar28 + lVar30;
      lVar30 = lVar30 + -4;
      uVar20 = uVar33 + lVar30;
      *(float *)((long)param_9 + lVar19) =
           *(float *)(lVar1 + -4) * *(float *)(uVar33 + lVar14) +
           *(float *)(lVar2 + -4) * *(float *)(param_8 + lVar19);
      lVar19 = lVar19 + 4;
    } while (uVar32 < uVar20);
  }
  param_9 = (float *)((long)param_9 - lVar30);
  lVar28 = lVar28 + lVar30;
  lVar25 = lVar25 + lVar30;
  param_8 = param_8 - lVar30;
  uVar33 = uVar20;
LAB_0340afb0:
  iVar3 = param_12;
  if (iVar7 <= param_12) {
    iVar3 = iVar7;
  }
  iVar6 = param_11;
  if (iVar7 <= param_11) {
    iVar6 = iVar7;
  }
  pfVar22 = (float *)(uVar33 + (long)iVar3 * 4);
  pfVar35 = (float *)(uVar33 + (long)iVar6 * 4);
  pfVar24 = (float *)(lVar28 + (long)iVar6 * 4);
  pfVar29 = (float *)(param_8 + (long)iVar6 * 4);
  if (((((ulong)param_9 & 0xf) == 0) && (((ulong)pfVar35 & 0xf) == 0)) &&
     (((ulong)pfVar22 & 0xf) == 0)) {
    if (iVar6 < iVar3) {
      pfVar21 = param_9;
      pfVar23 = pfVar24;
      pauVar27 = (undefined1 (*) [16])(lVar25 + (-4 - (long)iVar6) * 4);
      do {
        pfVar26 = pfVar35 + 4;
        fVar8 = *pfVar35;
        fVar9 = pfVar35[1];
        fVar10 = pfVar35[3];
        auVar36 = NEON_rev64(*pauVar27,4);
        pfVar24 = pfVar23 + 4;
        fVar11 = *pfVar23;
        fVar12 = pfVar23[1];
        fVar13 = pfVar23[3];
        auVar36 = NEON_ext(auVar36,auVar36,8,1);
        uVar39 = *(undefined8 *)(pfVar29 + 2);
        uVar38 = *(undefined8 *)pfVar29;
        param_9 = pfVar21 + 4;
        pfVar21[2] = -((float)uVar39 * pfVar23[2]) + pfVar35[2] * auVar36._8_4_;
        pfVar21[3] = -((float)((ulong)uVar39 >> 0x20) * fVar13) + fVar10 * auVar36._12_4_;
        *pfVar21 = -((float)uVar38 * fVar11) + fVar8 * auVar36._0_4_;
        pfVar21[1] = -((float)((ulong)uVar38 >> 0x20) * fVar12) + fVar9 * auVar36._4_4_;
        pfVar21 = param_9;
        pfVar23 = pfVar24;
        pauVar27 = pauVar27 + -1;
        pfVar29 = pfVar29 + 4;
        pfVar35 = pfVar26;
      } while (pfVar26 < pfVar22);
    }
  }
  else if (iVar6 < iVar3) {
    pfVar21 = param_9;
    pfVar23 = pfVar24;
    pfVar26 = (float *)(lVar25 + ~(long)iVar6 * 4);
    do {
      pfVar34 = pfVar35 + 1;
      pfVar24 = pfVar23 + 1;
      param_9 = pfVar21 + 1;
      *pfVar21 = *pfVar26 * *pfVar35 - *pfVar29 * *pfVar23;
      pfVar21 = param_9;
      pfVar23 = pfVar24;
      pfVar26 = pfVar26 + -1;
      pfVar29 = pfVar29 + 1;
      pfVar35 = pfVar34;
    } while (pfVar34 < pfVar22);
  }
  if (iVar4 != 0) {
    iVar7 = param_12 - iVar3;
    if (iVar4 <= param_12 - iVar3) {
      iVar7 = iVar4;
    }
    iVar3 = param_11 - iVar6;
    if (iVar4 <= param_11 - iVar6) {
      iVar3 = iVar4;
    }
    pfVar22 = pfVar24 + iVar7;
    pfVar24 = pfVar24 + iVar3;
    if ((((ulong)param_9 & 0xf) == 0 && ((ulong)pfVar24 & 0xf) == 0) && ((ulong)pfVar22 & 0xf) == 0)
    {
      if (iVar3 < iVar7) {
        do {
          pfVar35 = pfVar24 + 4;
          fVar8 = *pfVar24;
          fVar9 = pfVar24[1];
          fVar10 = pfVar24[3];
          param_9[2] = -pfVar24[2];
          param_9[3] = -fVar10;
          *param_9 = -fVar8;
          param_9[1] = -fVar9;
          param_9 = param_9 + 4;
          pfVar24 = pfVar35;
        } while (pfVar35 < pfVar22);
      }
    }
    else if (iVar3 < iVar7) {
      do {
        pfVar35 = pfVar24 + 1;
        *param_9 = -*pfVar24;
        param_9 = param_9 + 1;
        pfVar24 = pfVar35;
      } while (pfVar35 < pfVar22);
    }
  }
  return;
}


