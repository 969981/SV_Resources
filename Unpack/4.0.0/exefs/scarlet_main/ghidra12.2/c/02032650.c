/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02032650; name: FUN_02032650
 */


float FUN_02032650(float param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  if (param_1 < 0.0) {
    if (-0.70710677 <= param_1) {
      fVar6 = 1.0 - param_1 * param_1;
      fVar5 = SQRT(fVar6);
      iVar1 = *(int *)PTR_AngleIndexQuarterRound_047d9348;
      if (NAN(fVar5)) {
        fVar5 = sqrtf(fVar6);
      }
      iVar4 = (int)((-param_1 / fVar5) * 128.0);
      uVar2 = *(int *)(PTR_AtanSampleTable_047d9340 + (long)iVar4 * 8) + iVar1 +
              (int)(*(float *)((long)(PTR_AtanSampleTable_047d9340 + (long)iVar4 * 8) + 4) *
                   ((-param_1 / fVar5) * 128.0 - (float)iVar4));
      goto LAB_020326d4;
    }
    iVar1 = *(int *)PTR_AngleIndexHalfRound_047d2388;
    fVar6 = 1.0 - param_1 * param_1;
    fVar5 = SQRT(fVar6);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar6);
    }
    fVar5 = (fVar5 / param_1) * -128.0;
    iVar4 = (int)fVar5;
    piVar3 = (int *)(PTR_AtanSampleTable_047d9340 + (long)iVar4 * 8);
    fVar5 = fVar5 - (float)iVar4;
  }
  else {
    if (0.70710677 < param_1) {
      fVar6 = 1.0 - param_1 * param_1;
      fVar5 = SQRT(fVar6);
      if (NAN(fVar5)) {
        fVar5 = sqrtf(fVar6);
      }
      iVar1 = (int)((fVar5 / param_1) * 128.0);
      uVar2 = *(int *)(PTR_AtanSampleTable_047d9340 + (long)iVar1 * 8) +
              (int)(*(float *)((long)(PTR_AtanSampleTable_047d9340 + (long)iVar1 * 8) + 4) *
                   ((fVar5 / param_1) * 128.0 - (float)iVar1));
      goto LAB_020326d4;
    }
    fVar6 = 1.0 - param_1 * param_1;
    fVar5 = SQRT(fVar6);
    iVar1 = *(int *)PTR_AngleIndexQuarterRound_047d9348;
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar6);
    }
    iVar4 = (int)((param_1 / fVar5) * 128.0);
    piVar3 = (int *)(PTR_AtanSampleTable_047d9340 + (long)iVar4 * 8);
    fVar5 = (param_1 / fVar5) * 128.0 - (float)iVar4;
  }
  uVar2 = (iVar1 - *piVar3) - (int)((float)piVar3[1] * fVar5);
LAB_020326d4:
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
  return (*(float *)PTR_FloatDegree180_047d2390 / fVar5) * (float)uVar2;
}


