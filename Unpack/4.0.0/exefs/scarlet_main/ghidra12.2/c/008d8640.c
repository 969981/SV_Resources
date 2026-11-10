/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008d8640; name: FUN_008d8640
 */


float FUN_008d8640(float param_1,float param_2,long param_3)

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
  float fVar12;
  float fVar13;
  float fVar14;
  
  param_1 = param_1 * param_2;
  fVar4 = param_1 / *(float *)(param_3 + 0x2c);
  fVar3 = *(float *)PTR_Float1Divided2Pi_047d23d0;
  fVar1 = 0.5;
  if (fVar4 < 0.0) {
    fVar1 = -0.5;
  }
  fVar2 = param_1 / *(float *)(param_3 + 0x30);
  fVar5 = *(float *)PTR_Float2Pi_047d23e8;
  fVar6 = *(float *)PTR_FloatPiDivided2_047d23f0;
  fVar4 = fVar4 - fVar5 * (float)(int)(fVar1 + fVar4 * fVar3);
  fVar1 = -fVar6;
  if (fVar4 <= fVar6) {
    if (fVar4 < fVar1) {
      fVar10 = -*(float *)PTR_FloatPi_047d23a0;
      goto LAB_008d86dc;
    }
  }
  else {
    fVar10 = *(float *)PTR_FloatPi_047d23a0;
LAB_008d86dc:
    fVar4 = fVar10 - fVar4;
  }
  fVar10 = 0.5;
  if (fVar2 < 0.0) {
    fVar10 = -0.5;
  }
  fVar8 = param_1 / *(float *)(param_3 + 0x34);
  fVar2 = fVar2 - fVar5 * (float)(int)(fVar10 + fVar2 * fVar3);
  if (fVar2 <= fVar6) {
    if (fVar2 < fVar1) {
      fVar10 = -*(float *)PTR_FloatPi_047d23a0;
      goto LAB_008d8734;
    }
  }
  else {
    fVar10 = *(float *)PTR_FloatPi_047d23a0;
LAB_008d8734:
    fVar2 = fVar10 - fVar2;
  }
  param_1 = param_1 / *(float *)(param_3 + 0x38);
  fVar10 = 0.5;
  if (fVar8 < 0.0) {
    fVar10 = -0.5;
  }
  fVar8 = fVar8 - fVar5 * (float)(int)(fVar10 + fVar8 * fVar3);
  if (fVar8 <= fVar6) {
    if (fVar8 < fVar1) {
      fVar10 = -*(float *)PTR_FloatPi_047d23a0;
      goto LAB_008d8794;
    }
  }
  else {
    fVar10 = *(float *)PTR_FloatPi_047d23a0;
LAB_008d8794:
    fVar8 = fVar10 - fVar8;
  }
  fVar10 = 0.5;
  if (param_1 < 0.0) {
    fVar10 = -0.5;
  }
  fVar12 = *(float *)PTR_SinCoefficients_047d23d8;
  fVar13 = *(float *)(PTR_SinCoefficients_047d23d8 + 4);
  fVar11 = *(float *)(PTR_SinCoefficients_047d23d8 + 8);
  fVar9 = *(float *)(PTR_SinCoefficients_047d23d8 + 0xc);
  fVar7 = *(float *)(PTR_SinCoefficients_047d23d8 + 0x10);
  fVar14 = fVar4 * fVar4;
  param_1 = param_1 - fVar5 * (float)(int)(fVar3 * param_1 + fVar10);
  fVar5 = fVar2 * fVar2;
  fVar3 = fVar8 * fVar8;
  if (param_1 <= fVar6) {
    if (fVar1 <= param_1) goto LAB_008d8804;
    fVar1 = -*(float *)PTR_FloatPi_047d23a0;
  }
  else {
    fVar1 = *(float *)PTR_FloatPi_047d23a0;
  }
  param_1 = fVar1 - param_1;
LAB_008d8804:
  fVar1 = param_1 * param_1;
  return *(float *)(param_3 + 0x1c) *
         fVar4 * (fVar14 * (fVar14 * (fVar9 + fVar14 * (fVar14 * (fVar13 - fVar12 * fVar14) - fVar11
                                                       )) - fVar7) + 1.0) +
         *(float *)(param_3 + 0x20) *
         fVar2 * (fVar5 * (fVar5 * (fVar9 + fVar5 * (fVar5 * (fVar13 - fVar12 * fVar5) - fVar11)) -
                          fVar7) + 1.0) +
         *(float *)(param_3 + 0x24) *
         fVar8 * (fVar3 * (fVar3 * (fVar9 + fVar3 * (fVar3 * (fVar13 - fVar12 * fVar3) - fVar11)) -
                          fVar7) + 1.0) +
         *(float *)(param_3 + 0x28) *
         param_1 * (fVar1 * (fVar1 * (fVar9 + fVar1 * (fVar1 * (fVar13 - fVar12 * fVar1) - fVar11))
                            - fVar7) + 1.0);
}


