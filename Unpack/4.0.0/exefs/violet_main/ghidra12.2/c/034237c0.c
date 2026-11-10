/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034237c0; name: FUN_034237c0
 */


bool FUN_034237c0(float *param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar8 = *param_2;
  fVar7 = param_2[1];
  fVar5 = param_2[2];
  fVar1 = *param_1;
  fVar14 = param_1[1];
  fVar9 = fVar8 - fVar1;
  fVar15 = param_1[2];
  fVar10 = fVar7 - fVar14;
  fVar12 = fVar5 - fVar15;
  fVar2 = param_1[9];
  fVar4 = param_1[10];
  fVar6 = param_1[0xb];
  fVar13 = fVar2 * fVar9 + fVar10 * fVar4 + fVar12 * fVar6;
  fVar3 = fVar13 * (fVar2 * (*param_3 - fVar1) + (param_3[1] - fVar14) * fVar4 +
                   (param_3[2] - fVar15) * fVar6);
  if (0.0 < fVar3) {
    fVar9 = fVar13 + fVar13;
    fVar8 = fVar8 - fVar2 * fVar9;
    fVar7 = fVar7 - fVar4 * fVar9;
    fVar5 = fVar5 - fVar6 * fVar9;
    fVar9 = fVar8 - fVar1;
    fVar10 = fVar7 - fVar14;
    fVar12 = fVar5 - fVar15;
  }
  fVar5 = param_3[2] - fVar5;
  fVar8 = *param_3 - fVar8;
  fVar7 = param_3[1] - fVar7;
  fVar13 = ABS(fVar13 / ABS(fVar5 * fVar6 + fVar4 * fVar7 + fVar2 * fVar8));
  fVar9 = fVar9 + fVar8 * fVar13;
  fVar10 = fVar10 + fVar7 * fVar13;
  fVar12 = fVar12 + fVar5 * fVar13;
  fVar8 = fVar9 * param_1[3] + param_1[4] * fVar10 + param_1[5] * fVar12;
  fVar5 = param_1[0xc];
  fVar14 = param_1[0xd];
  fVar11 = -fVar5;
  fVar13 = fVar9 * param_1[6] + param_1[7] * fVar10 + param_1[8] * fVar12;
  fVar7 = (float)NEON_fminnm(fVar8,fVar5);
  fVar15 = -fVar14;
  fVar4 = fVar9 * fVar2 + fVar4 * fVar10 + fVar6 * fVar12;
  fVar2 = fVar11;
  if (fVar11 <= fVar8) {
    fVar2 = fVar7;
  }
  fVar7 = (float)NEON_fminnm(fVar13,fVar14);
  fVar6 = fVar15;
  if (fVar15 <= fVar13) {
    fVar6 = fVar7;
  }
  fVar7 = -param_1[0xe];
  fVar9 = (float)NEON_fminnm(fVar4,param_1[0xe]);
  if (fVar7 <= fVar4) {
    fVar7 = fVar9;
  }
  fVar9 = fVar2;
  fVar12 = fVar6;
  if (0.0 < fVar3) {
    if (fVar14 - ABS(fVar6) <= fVar5 - ABS(fVar2)) {
      if ((fVar14 - ABS(fVar6) < fVar5 - ABS(fVar2)) && (fVar12 = fVar14, fVar6 < 0.0)) {
        fVar12 = fVar15;
      }
    }
    else {
      if (fVar2 < 0.0) {
        fVar5 = fVar11;
      }
      fVar9 = fVar5;
    }
  }
  *param_4 = fVar1;
  fVar3 = param_1[1];
  param_4[1] = fVar3;
  fVar5 = param_1[2];
  param_4[2] = fVar5;
  fVar3 = fVar3 + fVar9 * param_1[4];
  fVar1 = fVar1 + fVar9 * param_1[3];
  fVar5 = fVar5 + fVar9 * param_1[5];
  *param_4 = fVar1;
  param_4[1] = fVar3;
  param_4[2] = fVar5;
  fVar3 = fVar3 + fVar12 * param_1[7];
  fVar1 = fVar1 + fVar12 * param_1[6];
  fVar5 = fVar5 + fVar12 * param_1[8];
  *param_4 = fVar1;
  param_4[1] = fVar3;
  param_4[2] = fVar5;
  fVar9 = param_1[10];
  fVar12 = param_1[0xb];
  *param_4 = fVar1 + fVar7 * param_1[9];
  param_4[1] = fVar3 + fVar7 * fVar9;
  param_4[2] = fVar5 + fVar7 * fVar12;
  return fVar7 != fVar4 || (fVar2 != fVar8 || fVar6 != fVar13);
}


