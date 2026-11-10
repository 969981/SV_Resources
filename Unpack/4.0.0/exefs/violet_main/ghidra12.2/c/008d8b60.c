/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008d8b60; name: FUN_008d8b60
 */


float FUN_008d8b60(float param_1,float param_2)

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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar1 = param_1 * 1.6666666;
  fVar5 = *(float *)PTR_Float1Divided2Pi_047d23d0;
  fVar2 = 0.5;
  if (fVar1 < 0.0) {
    fVar2 = -0.5;
  }
  fVar7 = *(float *)PTR_Float2Pi_047d23e8;
  fVar1 = fVar1 - fVar7 * (float)(int)(fVar2 + fVar1 * fVar5);
  fVar8 = *(float *)PTR_FloatPiDivided2_047d23f0;
  fVar2 = -fVar8;
  if (fVar1 <= fVar8) {
    if (fVar1 < fVar2) {
      fVar3 = -*(float *)PTR_FloatPi_047d23a0;
      goto LAB_008d8bf4;
    }
  }
  else {
    fVar3 = *(float *)PTR_FloatPi_047d23a0;
LAB_008d8bf4:
    fVar1 = fVar3 - fVar1;
  }
  fVar3 = param_2 * 1.6666666;
  fVar4 = 0.5;
  if (fVar3 < 0.0) {
    fVar4 = -0.5;
  }
  fVar3 = fVar3 - fVar7 * (float)(int)(fVar4 + fVar3 * fVar5);
  if (fVar3 <= fVar8) {
    if (fVar3 < fVar2) {
      fVar4 = -*(float *)PTR_FloatPi_047d23a0;
      goto LAB_008d8c58;
    }
  }
  else {
    fVar4 = *(float *)PTR_FloatPi_047d23a0;
LAB_008d8c58:
    fVar3 = fVar4 - fVar3;
  }
  fVar4 = param_1 * 2.3809524;
  fVar9 = 0.5;
  if (fVar4 < 0.0) {
    fVar9 = -0.5;
  }
  fVar4 = fVar4 - fVar7 * (float)(int)(fVar9 + fVar4 * fVar5);
  if (fVar4 <= fVar8) {
    if (fVar4 < fVar2) {
      fVar9 = -*(float *)PTR_FloatPi_047d23a0;
      goto LAB_008d8cbc;
    }
  }
  else {
    fVar9 = *(float *)PTR_FloatPi_047d23a0;
LAB_008d8cbc:
    fVar4 = fVar9 - fVar4;
  }
  fVar9 = param_2 * 2.3809524;
  fVar10 = 0.5;
  if (fVar9 < 0.0) {
    fVar10 = -0.5;
  }
  fVar9 = fVar9 - fVar7 * (float)(int)(fVar10 + fVar9 * fVar5);
  if (fVar9 <= fVar8) {
    if (fVar9 < fVar2) {
      fVar10 = -*(float *)PTR_FloatPi_047d23a0;
      goto LAB_008d8d20;
    }
  }
  else {
    fVar10 = *(float *)PTR_FloatPi_047d23a0;
LAB_008d8d20:
    fVar9 = fVar10 - fVar9;
  }
  fVar10 = param_1 * 4.347826;
  fVar11 = 0.5;
  if (fVar10 < 0.0) {
    fVar11 = -0.5;
  }
  fVar10 = fVar10 - fVar7 * (float)(int)(fVar11 + fVar10 * fVar5);
  if (fVar10 <= fVar8) {
    if (fVar10 < fVar2) {
      fVar11 = -*(float *)PTR_FloatPi_047d23a0;
      goto LAB_008d8d84;
    }
  }
  else {
    fVar11 = *(float *)PTR_FloatPi_047d23a0;
LAB_008d8d84:
    fVar10 = fVar11 - fVar10;
  }
  fVar11 = param_2 * 4.347826;
  fVar12 = 0.5;
  if (fVar11 < 0.0) {
    fVar12 = -0.5;
  }
  fVar11 = fVar11 - fVar7 * (float)(int)(fVar12 + fVar11 * fVar5);
  if (fVar11 <= fVar8) {
    if (fVar11 < fVar2) {
      fVar12 = -*(float *)PTR_FloatPi_047d23a0;
      goto LAB_008d8de8;
    }
  }
  else {
    fVar12 = *(float *)PTR_FloatPi_047d23a0;
LAB_008d8de8:
    fVar11 = fVar12 - fVar11;
  }
  param_1 = param_1 * 6.6666665;
  fVar12 = 0.5;
  if (param_1 < 0.0) {
    fVar12 = -0.5;
  }
  param_1 = param_1 - fVar7 * (float)(int)(fVar12 + param_1 * fVar5);
  if (param_1 <= fVar8) {
    if (param_1 < fVar2) {
      fVar12 = -*(float *)PTR_FloatPi_047d23a0;
      goto LAB_008d8e54;
    }
  }
  else {
    fVar12 = *(float *)PTR_FloatPi_047d23a0;
LAB_008d8e54:
    param_1 = fVar12 - param_1;
  }
  fVar16 = *(float *)PTR_SinCoefficients_047d23d8;
  fVar17 = *(float *)(PTR_SinCoefficients_047d23d8 + 4);
  fVar20 = fVar1 * fVar1;
  fVar15 = *(float *)(PTR_SinCoefficients_047d23d8 + 8);
  fVar14 = *(float *)(PTR_SinCoefficients_047d23d8 + 0xc);
  fVar6 = fVar3 * fVar3;
  fVar13 = *(float *)(PTR_SinCoefficients_047d23d8 + 0x10);
  param_2 = param_2 * 6.6666665;
  fVar12 = 0.5;
  if (param_2 < 0.0) {
    fVar12 = -0.5;
  }
  fVar18 = fVar4 * fVar4;
  param_2 = param_2 - fVar7 * (float)(int)(fVar12 + param_2 * fVar5);
  fVar19 = fVar9 * fVar9;
  fVar7 = fVar10 * fVar10;
  fVar12 = fVar11 * fVar11;
  fVar5 = param_1 * param_1;
  if (param_2 <= fVar8) {
    if (fVar2 <= param_2) goto LAB_008d8ee4;
    fVar2 = -*(float *)PTR_FloatPi_047d23a0;
  }
  else {
    fVar2 = *(float *)PTR_FloatPi_047d23a0;
  }
  param_2 = fVar2 - param_2;
LAB_008d8ee4:
  fVar2 = fVar11 * (fVar12 * (fVar12 * (fVar14 + fVar12 * (fVar12 * (fVar17 - fVar16 * fVar12) -
                                                          fVar15)) - fVar13) + 1.0) -
          fVar10 * (fVar7 * (fVar7 * (fVar14 + fVar7 * (fVar7 * (fVar17 - fVar16 * fVar7) - fVar15))
                            - fVar13) + 1.0);
  fVar7 = param_2 * param_2;
  return (fVar3 * (fVar6 * (fVar6 * (fVar14 + fVar6 * (fVar6 * (fVar17 - fVar16 * fVar6) - fVar15))
                           - fVar13) + 1.0) -
         fVar1 * (fVar20 * (fVar20 * (fVar14 + fVar20 * (fVar20 * (fVar17 - fVar16 * fVar20) -
                                                        fVar15)) - fVar13) + 1.0)) * 4.0 +
         (fVar9 * (fVar19 * (fVar19 * (fVar14 + fVar19 * (fVar19 * (fVar17 - fVar16 * fVar19) -
                                                         fVar15)) - fVar13) + 1.0) -
         fVar4 * (fVar18 * (fVar18 * (fVar14 + fVar18 * (fVar18 * (fVar17 - fVar16 * fVar18) -
                                                        fVar15)) - fVar13) + 1.0)) * 3.0 +
         fVar2 + fVar2 +
         (param_2 * (fVar7 * (fVar7 * (fVar14 + fVar7 * (fVar7 * (fVar17 - fVar16 * fVar7) - fVar15)
                                      ) - fVar13) + 1.0) -
         param_1 * (fVar5 * (fVar5 * (fVar14 + fVar5 * (fVar5 * (fVar17 - fVar16 * fVar5) - fVar15))
                            - fVar13) + 1.0)) * 1.5;
}


