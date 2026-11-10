/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008d4790; name: FUN_008d4790
 */


void FUN_008d4790(float param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar9 = 0.5;
  if (param_1 < 0.0) {
    fVar9 = -0.5;
  }
  param_1 = param_1 - *(float *)PTR_Float2Pi_047d23e8 *
                      (float)(int)(fVar9 + *(float *)PTR_Float1Divided2Pi_047d23d0 * param_1);
  fVar9 = *(float *)PTR_FloatPiDivided2_047d23f0;
  if (param_1 <= fVar9) {
    fVar6 = 1.0;
    fVar5 = param_1;
    if (param_1 < -fVar9) {
      fVar5 = -*(float *)PTR_FloatPi_047d23a0;
      goto LAB_008d4820;
    }
  }
  else {
    fVar5 = *(float *)PTR_FloatPi_047d23a0;
LAB_008d4820:
    fVar6 = -1.0;
    fVar5 = fVar5 - param_1;
  }
  fVar5 = fVar5 * fVar5;
  fVar4 = (float)((ulong)*param_4 >> 0x20);
  fVar1 = (float)param_4[1];
  fVar6 = fVar6 * (fVar5 * (fVar5 * (*(float *)(PTR_CosCoefficients_047d23e0 + 0xc) +
                                    fVar5 * (fVar5 * (*(float *)(PTR_CosCoefficients_047d23e0 + 4) -
                                                     *(float *)PTR_CosCoefficients_047d23e0 * fVar5)
                                            - *(float *)(PTR_CosCoefficients_047d23e0 + 8))) -
                           *(float *)(PTR_CosCoefficients_047d23e0 + 0x10)) + 1.0);
  if (param_1 <= fVar9) {
    if (-fVar9 <= param_1) goto LAB_008d48a8;
    fVar9 = -*(float *)PTR_FloatPi_047d23a0;
  }
  else {
    fVar9 = *(float *)PTR_FloatPi_047d23a0;
  }
  param_1 = fVar9 - param_1;
LAB_008d48a8:
  fVar9 = param_1 * param_1;
  fVar3 = (float)*param_4;
  param_1 = param_1 * (fVar9 * (fVar9 * (*(float *)(PTR_SinCoefficients_047d23d8 + 0xc) +
                                        fVar9 * (fVar9 * (*(float *)(PTR_SinCoefficients_047d23d8 +
                                                                    4) -
                                                         *(float *)PTR_SinCoefficients_047d23d8 *
                                                         fVar9) -
                                                *(float *)(PTR_SinCoefficients_047d23d8 + 8))) -
                               *(float *)(PTR_SinCoefficients_047d23d8 + 0x10)) + 1.0);
  fVar8 = 1.0 - fVar6;
  fVar10 = fVar3 * fVar4 * fVar8;
  fVar11 = fVar1 * fVar3 * fVar8;
  fVar7 = fVar4 * fVar1 * fVar8;
  fVar9 = (float)*param_3;
  fVar5 = (float)((ulong)*param_3 >> 0x20);
  fVar2 = (float)param_3[1];
  param_2[1] = CONCAT44(fVar9 * 0.0 + fVar5 * 0.0 + fVar2 * 0.0 + 0.0,
                        (fVar11 + fVar4 * param_1) * fVar9 + (fVar7 - fVar3 * param_1) * fVar5 +
                        (fVar6 + fVar1 * fVar1 * fVar8) * fVar2 + 0.0);
  *param_2 = CONCAT44((fVar10 - fVar1 * param_1) * fVar9 + (fVar6 + fVar4 * fVar4 * fVar8) * fVar5 +
                      (fVar7 + fVar3 * param_1) * fVar2 + 0.0,
                      (fVar6 + fVar8 * fVar3 * fVar3) * fVar9 + (fVar10 + fVar1 * param_1) * fVar5 +
                      (fVar11 - fVar4 * param_1) * fVar2 + 0.0);
  return;
}


