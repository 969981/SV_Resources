/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008d5208; name: FUN_008d5208
 */


void FUN_008d5208(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                 long param_5,int param_6)

{
  undefined *puVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_80 [4];
  float local_70 [4];
  
  puVar1 = PTR_FloatPi_047d23a0;
  pfVar4 = *(float **)(*(long *)(param_4 + 0x238) + 0x260);
  fVar12 = *(float *)(param_4 + 0x4c);
  fVar13 = *(float *)(*(long *)(param_5 + 0x18) + (long)param_6 * 0x10 + 0xc);
  if (pfVar4[3] == 0.0) {
    local_70[0] = *pfVar4;
    pfVar3 = pfVar4 + 0x28;
    if (*pfVar3 == 0.0) goto LAB_008d52d8;
LAB_008d52a8:
    fVar5 = local_70[0];
    FUN_008d49f4(param_1,param_2,local_80,param_4,pfVar3,param_6);
  }
  else {
    param_2 = FUN_008d49f4(param_1,param_2,local_70,param_4,pfVar4 + 3,param_6);
    local_70[0] = local_70[0] * (*(float *)puVar1 / *(float *)PTR_FloatDegree180_047d2390);
    pfVar3 = (float *)(*(long *)(*(long *)(param_4 + 0x238) + 0x260) + 0xa0);
    if (*pfVar3 != 0.0) goto LAB_008d52a8;
LAB_008d52d8:
    local_80[0] = pfVar4[2];
    fVar5 = local_70[0];
  }
  fVar2 = local_80[0];
  fVar5 = fVar12 * fVar13 * fVar5;
  fVar9 = 0.5;
  if (fVar5 < 0.0) {
    fVar9 = -0.5;
  }
  fVar5 = fVar5 - *(float *)PTR_Float2Pi_047d23e8 *
                  (float)(int)(*(float *)PTR_Float1Divided2Pi_047d23d0 * fVar5 + fVar9);
  if (fVar5 <= *(float *)PTR_FloatPiDivided2_047d23f0) {
    if (-*(float *)PTR_FloatPiDivided2_047d23f0 <= fVar5) {
      fVar9 = 1.0;
      goto LAB_008d536c;
    }
    fVar9 = -*(float *)puVar1;
  }
  else {
    fVar9 = *(float *)puVar1;
  }
  fVar5 = fVar9 - fVar5;
  fVar9 = -1.0;
LAB_008d536c:
  fVar10 = fVar5 * fVar5;
  fVar6 = pfVar4[1];
  fVar5 = fVar5 * (fVar10 * (fVar10 * (*(float *)(PTR_SinCoefficients_047d23d8 + 0xc) +
                                      fVar10 * (fVar10 * (*(float *)(PTR_SinCoefficients_047d23d8 +
                                                                    4) -
                                                         *(float *)PTR_SinCoefficients_047d23d8 *
                                                         fVar10) -
                                               *(float *)(PTR_SinCoefficients_047d23d8 + 8))) -
                            *(float *)(PTR_SinCoefficients_047d23d8 + 0x10)) + 1.0);
  fVar9 = fVar9 * (fVar10 * (fVar10 * (*(float *)(PTR_CosCoefficients_047d23e0 + 0xc) +
                                      fVar10 * (fVar10 * (*(float *)(PTR_CosCoefficients_047d23e0 +
                                                                    4) -
                                                         fVar10 * *(float *)
                                                  PTR_CosCoefficients_047d23e0) -
                                               *(float *)(PTR_CosCoefficients_047d23e0 + 8))) -
                            *(float *)(PTR_CosCoefficients_047d23e0 + 0x10)) + 1.0);
  if (fVar6 == 2.8026e-45) {
    fVar6 = (float)*param_3;
    fVar10 = (float)((ulong)*param_3 >> 0x20);
    fVar11 = fVar9 * fVar6 + fVar5 * fVar10;
    fVar5 = fVar9 * fVar10 - fVar5 * fVar6;
    param_3[1] = param_3[1];
    *param_3 = CONCAT44(fVar5,fVar11);
    if (local_80[0] == 0.0) {
      return;
    }
    fVar9 = fVar11 * fVar11 + fVar5 * fVar5;
    if (fVar9 <= 0.0) {
      return;
    }
    fVar6 = SQRT(fVar9);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar9);
    }
    uVar8 = param_3[1];
    fVar12 = fVar12 * fVar13 * fVar2 * (1.0 / fVar6);
    uVar7 = CONCAT44((float)((ulong)*param_3 >> 0x20) + fVar5 * fVar12,
                     (float)*param_3 + fVar11 * fVar12);
  }
  else if (fVar6 == 1.4013e-45) {
    fVar6 = (float)*param_3;
    fVar10 = fVar9 * fVar6 - fVar5 * (float)param_3[1];
    fVar5 = fVar9 * (float)param_3[1] + fVar5 * fVar6;
    param_3[1] = (ulong)(uint)fVar5;
    *param_3 = CONCAT44((int)((ulong)*param_3 >> 0x20),fVar10);
    if (local_80[0] == 0.0) {
      return;
    }
    fVar9 = fVar5 * fVar5 + fVar10 * fVar10;
    if (fVar9 <= 0.0) {
      return;
    }
    fVar6 = SQRT(fVar9);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar9);
    }
    fVar12 = fVar12 * fVar13 * fVar2 * (1.0 / fVar6);
    uVar7 = CONCAT44((int)((ulong)*param_3 >> 0x20),(float)*param_3 + fVar10 * fVar12);
    uVar8 = (ulong)(uint)((float)param_3[1] + fVar5 * fVar12);
  }
  else {
    if (fVar6 != 0.0) {
      return;
    }
    fVar6 = (float)((ulong)*param_3 >> 0x20);
    fVar10 = fVar9 * fVar6 + fVar5 * (float)param_3[1];
    fVar5 = fVar9 * (float)param_3[1] - fVar5 * fVar6;
    param_3[1] = (ulong)(uint)fVar5;
    *param_3 = CONCAT44(fVar10,(int)*param_3);
    if (local_80[0] == 0.0) {
      return;
    }
    fVar9 = fVar10 * fVar10 + fVar5 * fVar5;
    if (fVar9 <= 0.0) {
      return;
    }
    fVar6 = SQRT(fVar9);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar9);
    }
    fVar12 = fVar12 * fVar13 * fVar2 * (1.0 / fVar6);
    uVar7 = CONCAT44((float)((ulong)*param_3 >> 0x20) + fVar10 * fVar12,(int)*param_3);
    uVar8 = (ulong)(uint)((float)param_3[1] + fVar5 * fVar12);
  }
  param_3[1] = uVar8;
  *param_3 = uVar7;
  return;
}


