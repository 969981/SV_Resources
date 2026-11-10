/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008d19d4; name: FUN_008d19d4
 */


undefined8
FUN_008d19d4(float param_1,ulong *param_2,ulong *param_3,long param_4,undefined8 param_5,
            undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  puVar1 = PTR_Float2Pi_047d23e8;
  lVar2 = *(long *)(param_4 + 0xa0);
  fVar5 = *(float *)(lVar2 + 0x848);
  if (*(char *)(lVar2 + 0x839) != '\0') {
    fVar5 = *(float *)PTR_FloatPi_047d2460 * param_1 + *(float *)PTR_FloatPi_047d2460 * param_1;
  }
  fVar3 = fVar5 + *(float *)(lVar2 + 0x840) * (float)*(uint *)(param_4 + 0xac) * 2.3283064e-10 +
          *(float *)(lVar2 + 0x840) * -0.5;
  fVar5 = 0.5;
  if (fVar3 < 0.0) {
    fVar5 = -0.5;
  }
  fVar4 = *(float *)PTR_Float1Divided2Pi_047d23d0;
  *(uint *)(param_4 + 0xac) = *(uint *)(param_4 + 0xac) * 0x41c64e6d + 0x3039;
  fVar3 = fVar3 - *(float *)puVar1 * (float)(int)(fVar4 * fVar3 + fVar5);
  if (fVar3 <= *(float *)PTR_FloatPiDivided2_047d23f0) {
    if (-*(float *)PTR_FloatPiDivided2_047d23f0 <= fVar3) {
      fVar5 = 1.0;
      goto LAB_008d1acc;
    }
    fVar5 = -*(float *)PTR_FloatPi_047d23a0;
  }
  else {
    fVar5 = *(float *)PTR_FloatPi_047d23a0;
  }
  fVar3 = fVar5 - fVar3;
  fVar5 = -1.0;
LAB_008d1acc:
  fVar4 = fVar3 * fVar3;
  fVar6 = *(float *)(lVar2 + 0x85c);
  fVar7 = *(float *)(param_7 + 0x90);
  fVar3 = fVar3 * (fVar4 * (fVar4 * (*(float *)(PTR_SinCoefficients_047d23d8 + 0xc) +
                                    fVar4 * (fVar4 * (*(float *)(PTR_SinCoefficients_047d23d8 + 4) -
                                                     *(float *)PTR_SinCoefficients_047d23d8 * fVar4)
                                            - *(float *)(PTR_SinCoefficients_047d23d8 + 8))) -
                           *(float *)(PTR_SinCoefficients_047d23d8 + 0x10)) + 1.0);
  fVar5 = fVar5 * (fVar4 * (fVar4 * (*(float *)(PTR_CosCoefficients_047d23e0 + 0xc) +
                                    fVar4 * (fVar4 * (*(float *)(PTR_CosCoefficients_047d23e0 + 4) -
                                                     fVar4 * *(float *)PTR_CosCoefficients_047d23e0)
                                            - *(float *)(PTR_CosCoefficients_047d23e0 + 8))) -
                           *(float *)(PTR_CosCoefficients_047d23e0 + 0x10)) + 1.0);
  param_2[1] = (ulong)(uint)(*(float *)(lVar2 + 0x864) * *(float *)(param_7 + 0x98) * fVar5);
  *param_2 = (ulong)(uint)(fVar3 * fVar6 * fVar7);
  fVar4 = *(float *)(param_7 + 0x6c);
  param_3[1] = (ulong)(uint)(fVar4 * fVar5);
  *param_3 = (ulong)(uint)(fVar3 * fVar4);
  return 1;
}


