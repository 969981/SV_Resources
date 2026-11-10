/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008d3fb0; name: FUN_008d3fb0
 */


void FUN_008d3fb0(float param_1,float param_2,long param_3,long param_4,float *param_5,
                 float *param_6)

{
  uint uVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar1 = *(uint *)(param_4 + 4);
  cVar2 = *(char *)(param_3 + 2);
  *(uint *)(param_4 + 4) = uVar1 * 0x41c64e6d + 0x3039;
  fVar4 = (float)uVar1 * 2.3283064e-10;
  if (cVar2 == '\x01') {
    fVar4 = fVar4 * *(float *)PTR_FloatPi_047d2460;
    fVar4 = fVar4 + fVar4;
    fVar3 = 0.5;
    if (fVar4 < 0.0) {
      fVar3 = -0.5;
    }
    fVar3 = *(float *)PTR_Float1Divided2Pi_047d23d0 * fVar4 + fVar3;
  }
  else {
    fVar4 = fVar4 * param_1 + param_2 + param_1 * -0.5;
    fVar3 = 0.5;
    if (fVar4 < 0.0) {
      fVar3 = -0.5;
    }
    fVar3 = fVar3 + fVar4 * *(float *)PTR_Float1Divided2Pi_047d23d0;
  }
  fVar4 = fVar4 - *(float *)PTR_Float2Pi_047d23e8 * (float)(int)fVar3;
  if (fVar4 <= *(float *)PTR_FloatPiDivided2_047d23f0) {
    if (-*(float *)PTR_FloatPiDivided2_047d23f0 <= fVar4) {
      fVar3 = 1.0;
      goto LAB_008d40c0;
    }
    fVar3 = -*(float *)PTR_FloatPi_047d23a0;
  }
  else {
    fVar3 = *(float *)PTR_FloatPi_047d23a0;
  }
  fVar4 = fVar3 - fVar4;
  fVar3 = -1.0;
LAB_008d40c0:
  fVar5 = fVar4 * fVar4;
  fVar6 = *(float *)PTR_CosCoefficients_047d23e0;
  fVar7 = *(float *)(PTR_CosCoefficients_047d23e0 + 4);
  fVar8 = *(float *)(PTR_CosCoefficients_047d23e0 + 8);
  fVar10 = *(float *)(PTR_CosCoefficients_047d23e0 + 0xc);
  fVar9 = *(float *)(PTR_CosCoefficients_047d23e0 + 0x10);
  *param_5 = fVar4 * (fVar5 * (fVar5 * (*(float *)(PTR_SinCoefficients_047d23d8 + 0xc) +
                                       fVar5 * (fVar5 * (*(float *)(PTR_SinCoefficients_047d23d8 + 4
                                                                   ) -
                                                        *(float *)PTR_SinCoefficients_047d23d8 *
                                                        fVar5) -
                                               *(float *)(PTR_SinCoefficients_047d23d8 + 8))) -
                              *(float *)(PTR_SinCoefficients_047d23d8 + 0x10)) + 1.0);
  *param_6 = fVar3 * (fVar5 * (fVar5 * (fVar10 + fVar5 * (fVar5 * (fVar7 - fVar5 * fVar6) - fVar8))
                              - fVar9) + 1.0);
  return;
}


