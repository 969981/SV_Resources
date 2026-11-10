/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03419dc4; name: FUN_03419dc4
 */


void FUN_03419dc4(float *param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5,
                 float *param_6,undefined8 param_7)

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
  
  fVar9 = *param_2;
  *param_1 = fVar9;
  fVar10 = param_2[1];
  param_1[1] = fVar10;
  fVar14 = param_2[2];
  param_1[2] = fVar14;
  fVar3 = param_3[1] - fVar10;
  fVar1 = *param_3 - fVar9;
  fVar4 = param_3[2] - fVar14;
  fVar2 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar4 * fVar4);
  fVar5 = 1.0 / fVar2;
  param_1[0x1e] = fVar2;
  fVar1 = fVar5 * fVar1;
  fVar3 = fVar5 * fVar3;
  fVar5 = fVar5 * fVar4;
  param_1[3] = fVar1;
  param_1[4] = fVar3;
  param_1[5] = fVar5;
  fVar2 = fVar1 * (*param_4 - fVar9) + fVar3 * (param_4[1] - fVar10) + fVar5 * (param_4[2] - fVar14)
  ;
  fVar11 = (*param_4 - fVar9) - fVar1 * fVar2;
  fVar12 = (param_4[1] - fVar10) - fVar3 * fVar2;
  fVar13 = (param_4[2] - fVar14) - fVar5 * fVar2;
  fVar4 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13);
  fVar2 = 0.0;
  fVar8 = 0.0;
  fVar7 = 0.0;
  fVar6 = 0.0;
  if (fVar4 != 0.0) {
    fVar4 = 1.0 / fVar4;
    fVar8 = fVar11 * fVar4;
    fVar7 = fVar12 * fVar4;
    fVar6 = fVar13 * fVar4;
  }
  fVar12 = (*param_6 - fVar9) * fVar1 + fVar3 * (param_6[1] - fVar10) +
           fVar5 * (param_6[2] - fVar14);
  fVar4 = (*param_6 - fVar9) - fVar1 * fVar12;
  fVar11 = (param_6[1] - fVar10) - fVar3 * fVar12;
  fVar12 = (param_6[2] - fVar14) - fVar5 * fVar12;
  fVar14 = SQRT(fVar4 * fVar4 + fVar11 * fVar11 + fVar12 * fVar12);
  fVar10 = 0.0;
  fVar9 = 0.0;
  if (fVar14 != 0.0) {
    fVar14 = 1.0 / fVar14;
    fVar2 = fVar4 * fVar14;
    fVar9 = fVar11 * fVar14;
    fVar10 = fVar12 * fVar14;
  }
  *(undefined8 *)(param_1 + 0x1a) = param_5;
  *(undefined8 *)(param_1 + 0x1c) = param_7;
  if ((((fVar8 == fVar2) && (fVar7 == fVar9)) && (fVar6 == fVar10)) ||
     (0.0 <= (fVar2 * fVar7 - fVar9 * fVar8) * fVar5 + fVar1 * (fVar9 * fVar6 - fVar10 * fVar7) +
             fVar3 * (fVar10 * fVar8 - fVar2 * fVar6))) {
    fVar14 = fVar8;
    fVar4 = fVar7;
    fVar7 = fVar6;
  }
  else {
    *(undefined8 *)(param_1 + 0x1a) = param_7;
    *(undefined8 *)(param_1 + 0x1c) = param_5;
    fVar14 = fVar2;
    fVar2 = fVar8;
    fVar4 = fVar9;
    fVar9 = fVar7;
    fVar7 = fVar10;
    fVar10 = fVar6;
  }
  param_1[6] = fVar7 * fVar3 - fVar4 * fVar5;
  param_1[7] = fVar14 * fVar5 - fVar7 * fVar1;
  param_1[10] = fVar10 * fVar1 - fVar2 * fVar5;
  param_1[0xb] = fVar2 * fVar3 - fVar9 * fVar1;
  param_1[8] = fVar4 * fVar1 - fVar14 * fVar3;
  param_1[9] = fVar9 * fVar5 - fVar10 * fVar3;
  return;
}


