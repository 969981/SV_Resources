/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03419cb4; name: FUN_03419cb4
 */


void FUN_03419cb4(float *param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = *param_2;
  *param_1 = fVar4;
  fVar5 = param_2[1];
  param_1[1] = fVar5;
  fVar8 = param_2[2];
  param_1[2] = fVar8;
  fVar3 = param_3[2];
  fVar1 = *param_3;
  fVar2 = param_3[1] - fVar5;
  *(undefined8 *)(param_1 + 0x1a) = param_5;
  *(undefined8 *)(param_1 + 0x1c) = param_5;
  fVar1 = fVar1 - fVar4;
  fVar3 = fVar3 - fVar8;
  fVar6 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  param_1[0x1e] = fVar6;
  fVar6 = 1.0 / fVar6;
  fVar1 = fVar6 * fVar1;
  fVar2 = fVar6 * fVar2;
  fVar6 = fVar6 * fVar3;
  param_1[3] = fVar1;
  param_1[4] = fVar2;
  param_1[5] = fVar6;
  fVar7 = (*param_4 - fVar4) * fVar1 + fVar2 * (param_4[1] - fVar5) + fVar6 * (param_4[2] - fVar8);
  fVar3 = (*param_4 - fVar4) - fVar1 * fVar7;
  fVar4 = (param_4[1] - fVar5) - fVar2 * fVar7;
  fVar5 = (param_4[2] - fVar8) - fVar6 * fVar7;
  fVar8 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5);
  if (fVar8 == 0.0) {
    fVar3 = 0.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
  }
  else {
    fVar8 = 1.0 / fVar8;
    fVar3 = fVar3 * fVar8;
    fVar4 = fVar4 * fVar8;
    fVar5 = fVar5 * fVar8;
  }
  param_1[6] = fVar5 * fVar2 - fVar4 * fVar6;
  param_1[7] = fVar3 * fVar6 - fVar5 * fVar1;
  param_1[8] = fVar4 * fVar1 - fVar3 * fVar2;
  param_1[9] = fVar4 * fVar6 - fVar5 * fVar2;
  param_1[10] = fVar5 * fVar1 - fVar3 * fVar6;
  param_1[0xb] = fVar3 * fVar2 - fVar4 * fVar1;
  return;
}


