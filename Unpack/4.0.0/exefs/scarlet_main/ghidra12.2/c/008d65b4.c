/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008d65b4; name: FUN_008d65b4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_008d65b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 long param_5,undefined8 *param_6,float *param_7)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_40;
  float fStack_3c;
  float local_38;
  
  uVar11 = *param_6;
  uVar5 = param_4[1];
  fVar10 = (float)uVar11;
  param_4[1] = uVar5;
  *param_4 = CONCAT44((int)((ulong)*param_4 >> 0x20),fVar10);
  fVar8 = (float)((ulong)*param_6 >> 0x20);
  param_4[1] = uVar5;
  *param_4 = CONCAT44(fVar8,fVar10);
  uVar7 = param_6[1];
  uVar6 = uVar7 & 0xffffffff;
  param_4[1] = uVar6;
  *param_4 = CONCAT44(fVar8,fVar10);
  lVar3 = *(long *)(param_5 + 0x18);
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(lVar3 + 0x20) < 2) {
    fVar10 = *(float *)(lVar3 + 0x5b0) * fVar10;
    param_4[1] = uVar6;
    *param_4 = CONCAT44(fVar8,fVar10);
    uVar5 = CONCAT44(*(float *)(*(long *)(param_5 + 0x18) + 0x5b4) * fVar8,fVar10);
    param_4[1] = uVar6;
    *param_4 = uVar5;
    uVar6 = (ulong)(uint)(*(float *)(*(long *)(param_5 + 0x18) + 0x5b8) * (float)uVar7);
    param_4[1] = uVar6;
    *param_4 = uVar5;
    lVar3 = *(long *)(param_5 + 0x10);
    cVar1 = *(char *)(lVar3 + 0x9e5);
  }
  else {
    lVar4 = *(long *)(param_5 + 0x10);
    fVar8 = 0.0;
    if (*(char *)(lVar4 + 0x8dc) != '\0') {
      fVar8 = (float)*(int *)(lVar4 + 0x8f4);
    }
    uVar9 = NEON_ucvtf((uint)*(byte *)(lVar4 + 0x8e1));
    FUN_008d4b90(*param_7,param_2,fVar8,CONCAT44((int)((ulong)uVar11 >> 0x20),uVar9),param_1,param_3
                 ,&local_40,lVar3 + 0x5b0);
    uVar6 = (ulong)(uint)(local_38 * (float)param_4[1]);
    uVar5 = CONCAT44(fStack_3c * (float)((ulong)*param_4 >> 0x20),local_40 * (float)*param_4);
    param_4[1] = uVar6;
    *param_4 = uVar5;
    lVar3 = *(long *)(param_5 + 0x10);
    cVar1 = *(char *)(lVar3 + 0x9e5);
  }
  if (cVar1 == '\0') {
    return;
  }
  lVar4 = *(long *)(param_5 + 0x18);
  bVar2 = *(byte *)(lVar3 + 0x9e7) >> 4;
  fVar14 = *(float *)(lVar4 + 0x98);
  fVar10 = *(float *)(lVar4 + 0x9c);
  fVar13 = *(float *)(lVar4 + 0xa0);
  fVar8 = *(float *)(lVar4 + 0xa4);
  fVar16 = *(float *)(lVar4 + 0xa8);
  fVar12 = *(float *)(lVar4 + 0xac);
  fVar15 = (float)param_2;
  if (bVar2 == 2) {
    fVar14 = (fVar16 + fVar15) / fVar14 + fVar13 * *param_7;
    fVar13 = 1.0;
    if (0.5 <= fVar14 - (float)(int)fVar14) {
      fVar13 = 0.0;
    }
LAB_008d67f4:
    fVar13 = ABS(1.0 - *(float *)(lVar4 + 0x90) * fVar13);
    cVar1 = *(char *)(lVar3 + 0x9e6);
  }
  else {
    if (bVar2 == 1) {
      fVar13 = (fVar16 + fVar15) / fVar14 + fVar13 * *param_7;
      fVar13 = fVar13 - (float)(int)fVar13;
      goto LAB_008d67f4;
    }
    if (bVar2 == 0) {
      fVar14 = *(float *)PTR_FloatPi_047d2460 * ((fVar16 + fVar15) / fVar14 + fVar13 * *param_7);
      fVar14 = fVar14 + fVar14;
      fVar13 = 0.5;
      if (fVar14 < 0.0) {
        fVar13 = -0.5;
      }
      fVar14 = fVar14 - *(float *)PTR_Float2Pi_047d23e8 *
                        (float)(int)(*(float *)PTR_Float1Divided2Pi_047d23d0 * fVar14 + fVar13);
      if (fVar14 <= *(float *)PTR_FloatPiDivided2_047d23f0) {
        if (fVar14 < -*(float *)PTR_FloatPiDivided2_047d23f0) {
          fVar13 = -*(float *)PTR_FloatPi_047d23a0;
          goto LAB_008d6838;
        }
        fVar13 = 1.0;
      }
      else {
        fVar13 = *(float *)PTR_FloatPi_047d23a0;
LAB_008d6838:
        fVar14 = fVar13 - fVar14;
        fVar13 = -1.0;
      }
      fVar14 = fVar14 * fVar14;
      fVar13 = *(float *)(lVar4 + 0x90) *
               (fVar13 * (fVar14 * (fVar14 * (*(float *)((long)PTR_CosCoefficients_047d23e0 + 0xc) +
                                             fVar14 * (fVar14 * (*(float *)((long)
                                                  PTR_CosCoefficients_047d23e0 + 4) -
                                                  *(float *)PTR_CosCoefficients_047d23e0 * fVar14) -
                                                  *(float *)((long)PTR_CosCoefficients_047d23e0 + 8)
                                                  )) -
                                   *(float *)((long)PTR_CosCoefficients_047d23e0 + 0x10)) + 1.0) +
               1.0) * -0.5 + 1.0;
      cVar1 = *(char *)(lVar3 + 0x9e6);
    }
    else {
      fVar13 = 1.0;
      cVar1 = *(char *)(lVar3 + 0x9e6);
    }
  }
  fVar14 = fVar13;
  if (cVar1 == '\0') goto LAB_008d6a34;
  if (bVar2 == 2) {
    fVar10 = (fVar12 + fVar15) / fVar10 + fVar8 * *param_7;
    fVar8 = 1.0;
    if (0.5 <= fVar10 - (float)(int)fVar10) {
      fVar8 = 0.0;
    }
  }
  else {
    if (bVar2 != 1) {
      if (bVar2 != 0) goto LAB_008d6a34;
      fVar8 = *(float *)PTR_FloatPi_047d2460 * ((fVar12 + fVar15) / fVar10 + fVar8 * *param_7);
      fVar8 = fVar8 + fVar8;
      fVar10 = 0.5;
      if (fVar8 < 0.0) {
        fVar10 = -0.5;
      }
      fVar8 = fVar8 - *(float *)PTR_Float2Pi_047d23e8 *
                      (float)(int)(*(float *)PTR_Float1Divided2Pi_047d23d0 * fVar8 + fVar10);
      if (fVar8 <= *(float *)PTR_FloatPiDivided2_047d23f0) {
        if (fVar8 < -*(float *)PTR_FloatPiDivided2_047d23f0) {
          fVar10 = -*(float *)PTR_FloatPi_047d23a0;
          goto LAB_008d69cc;
        }
        fVar10 = 1.0;
      }
      else {
        fVar10 = *(float *)PTR_FloatPi_047d23a0;
LAB_008d69cc:
        fVar8 = fVar10 - fVar8;
        fVar10 = -1.0;
      }
      fVar8 = fVar8 * fVar8;
      fVar14 = *(float *)(lVar4 + 0x94) *
               (fVar10 * (fVar8 * (fVar8 * (*(float *)((long)PTR_CosCoefficients_047d23e0 + 0xc) +
                                           fVar8 * (fVar8 * (*(float *)((long)
                                                  PTR_CosCoefficients_047d23e0 + 4) -
                                                  *(float *)PTR_CosCoefficients_047d23e0 * fVar8) -
                                                  *(float *)((long)PTR_CosCoefficients_047d23e0 + 8)
                                                  )) -
                                  *(float *)((long)PTR_CosCoefficients_047d23e0 + 0x10)) + 1.0) +
               1.0) * -0.5 + 1.0;
      goto LAB_008d6a34;
    }
    fVar8 = (fVar12 + fVar15) / fVar10 + fVar8 * *param_7;
    fVar8 = fVar8 - (float)(int)fVar8;
  }
  fVar14 = ABS(1.0 - *(float *)(lVar4 + 0x94) * fVar8);
LAB_008d6a34:
  param_4[1] = uVar6;
  *param_4 = CONCAT44(fVar14 * (float)((ulong)uVar5 >> 0x20),fVar13 * (float)uVar5);
  return;
}


