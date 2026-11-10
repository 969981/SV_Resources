/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008d88e0; name: FUN_008d88e0
 */


float FUN_008d88e0(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6)

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
  
  param_1 = param_1 * param_5;
  fVar2 = *(float *)PTR_Float1Divided2Pi_047d23d0;
  fVar3 = 0.5;
  if (param_1 < 0.0) {
    fVar3 = -0.5;
  }
  fVar4 = *(float *)PTR_Float2Pi_047d23e8;
  param_1 = param_1 - fVar4 * (float)(int)(fVar3 + param_1 * fVar2);
  fVar5 = *(float *)PTR_FloatPiDivided2_047d23f0;
  fVar3 = -fVar5;
  if (param_1 <= fVar5) {
    if (param_1 < fVar3) {
      fVar6 = -*(float *)PTR_FloatPi_047d23a0;
      goto LAB_008d8964;
    }
  }
  else {
    fVar6 = *(float *)PTR_FloatPi_047d23a0;
LAB_008d8964:
    param_1 = fVar6 - param_1;
  }
  param_2 = param_2 * param_5;
  fVar6 = 0.5;
  if (param_2 < 0.0) {
    fVar6 = -0.5;
  }
  param_2 = param_2 - fVar4 * (float)(int)(fVar6 + param_2 * fVar2);
  if (param_2 <= fVar5) {
    if (param_2 < fVar3) {
      fVar6 = -*(float *)PTR_FloatPi_047d23a0;
      goto LAB_008d89bc;
    }
  }
  else {
    fVar6 = *(float *)PTR_FloatPi_047d23a0;
LAB_008d89bc:
    param_2 = fVar6 - param_2;
  }
  param_3 = param_3 * param_5;
  fVar6 = 0.5;
  if (param_3 < 0.0) {
    fVar6 = -0.5;
  }
  param_3 = param_3 - fVar4 * (float)(int)(fVar6 + param_3 * fVar2);
  if (param_3 <= fVar5) {
    if (param_3 < fVar3) {
      fVar6 = -*(float *)PTR_FloatPi_047d23a0;
      goto LAB_008d8a1c;
    }
  }
  else {
    fVar6 = *(float *)PTR_FloatPi_047d23a0;
LAB_008d8a1c:
    param_3 = fVar6 - param_3;
  }
  param_4 = param_4 * param_5;
  fVar7 = *(float *)(PTR_SinCoefficients_047d23d8 + 0x10);
  fVar10 = *(float *)PTR_SinCoefficients_047d23d8;
  fVar11 = *(float *)(PTR_SinCoefficients_047d23d8 + 4);
  fVar13 = param_2 * param_2;
  fVar9 = *(float *)(PTR_SinCoefficients_047d23d8 + 8);
  fVar8 = *(float *)(PTR_SinCoefficients_047d23d8 + 0xc);
  fVar6 = 0.5;
  if (param_4 < 0.0) {
    fVar6 = -0.5;
  }
  fVar12 = param_1 * param_1;
  fVar1 = param_3 * param_3;
  param_4 = param_4 - fVar4 * (float)(int)(fVar6 + param_4 * fVar2);
  if (param_4 <= fVar5) {
    if (fVar3 <= param_4) goto LAB_008d8a90;
    fVar2 = -*(float *)PTR_FloatPi_047d23a0;
  }
  else {
    fVar2 = *(float *)PTR_FloatPi_047d23a0;
  }
  param_4 = fVar2 - param_4;
LAB_008d8a90:
  fVar2 = param_4 * param_4;
  return (((param_2 * (fVar13 * (fVar13 * (fVar8 + fVar13 * (fVar13 * (fVar11 - fVar10 * fVar13) -
                                                            fVar9)) - fVar7) + 1.0) -
           param_1 * (fVar12 * (fVar12 * (fVar8 + fVar12 * (fVar12 * (fVar11 - fVar10 * fVar12) -
                                                           fVar9)) - fVar7) + 1.0)) +
          param_3 * (fVar1 * (fVar1 * (fVar8 + fVar1 * (fVar1 * (fVar11 - fVar10 * fVar1) - fVar9))
                             - fVar7) + 1.0)) -
         param_4 * (fVar2 * (fVar2 * (fVar8 + fVar2 * (fVar2 * (fVar11 - fVar10 * fVar2) - fVar9)) -
                            fVar7) + 1.0)) * param_6;
}


