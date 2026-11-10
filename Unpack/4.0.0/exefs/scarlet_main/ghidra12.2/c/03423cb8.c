/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03423cb8; name: FUN_03423cb8
 */


undefined8
FUN_03423cb8(float *param_1,float *param_2,long *param_3,long *param_4,float *param_5,float *param_6
            )

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (1 < (uint)param_1[0x16]) {
    fVar7 = param_2[1] - param_1[1];
    fVar5 = *param_2 - *param_1;
    fVar8 = param_2[2] - param_1[2];
    fVar6 = param_1[3] * fVar5 + fVar7 * param_1[4] + fVar8 * param_1[5];
    fVar9 = param_1[0xc];
    fVar4 = param_1[0xe];
    if (ABS(fVar6) <= fVar4 + fVar9) {
      fVar11 = param_1[6] * fVar5 + fVar7 * param_1[7] + fVar8 * param_1[8];
      fVar12 = param_1[0xd];
      if (ABS(fVar11) <= fVar12 + fVar4) {
        fVar7 = param_1[9] * fVar5 + fVar7 * param_1[10] + fVar8 * param_1[0xb];
        fVar5 = ABS(fVar7);
        if (fVar5 <= fVar4) {
          fVar10 = (float)NEON_fminnm(fVar6,fVar9);
          fVar8 = -fVar9;
          if (-fVar9 <= fVar6) {
            fVar8 = fVar10;
          }
          fVar10 = (float)NEON_fminnm(fVar11,fVar12);
          fVar9 = -fVar12;
          if (-fVar12 <= fVar11) {
            fVar9 = fVar10;
          }
          bVar1 = false;
          if ((fVar8 == fVar6) && (bVar1 = false, !NAN(fVar9) && !NAN(fVar11))) {
            bVar1 = fVar9 == fVar11;
          }
          if (bVar1) {
            if (fVar7 <= 0.0) {
              *param_3 = (*(long **)(param_1 + 0x14))[1];
              plVar3 = *(long **)(param_1 + 0x14);
            }
            else {
              *param_3 = **(long **)(param_1 + 0x14);
              plVar3 = (long *)(*(long *)(param_1 + 0x14) + 8);
            }
            *param_4 = *plVar3;
            *param_6 = fVar5;
            fVar4 = param_1[0xe];
            fVar4 = (fVar4 + fVar5) / (fVar4 + fVar4);
          }
          else {
            fVar5 = *param_2 - (*param_1 + param_1[3] * fVar8 + param_1[6] * fVar9);
            fVar6 = param_2[1] - (param_1[1] + param_1[4] * fVar8 + param_1[7] * fVar9);
            fVar7 = param_2[2] - (param_1[2] + param_1[5] * fVar8 + param_1[8] * fVar9);
            fVar5 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7);
            if (fVar4 <= fVar5) {
              return 0;
            }
            plVar2 = *(long **)(param_1 + 0x14);
            plVar3 = plVar2 + 1;
            if (*plVar2 != *param_3) {
              plVar3 = plVar2;
            }
            *param_4 = *plVar3;
            *param_6 = fVar5;
            fVar4 = param_1[0xe];
            fVar4 = (fVar4 + fVar5) / (fVar4 + fVar4);
          }
          *param_5 = fVar4;
          return 1;
        }
      }
    }
  }
  return 0;
}


