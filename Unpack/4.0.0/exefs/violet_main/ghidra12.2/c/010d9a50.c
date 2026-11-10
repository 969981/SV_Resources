/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010d9a50; name: FUN_010d9a50
 */


void FUN_010d9a50(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float __x;
  float fVar8;
  float fVar9;
  
  *param_1 = param_2[4];
  __x = 1.0;
  param_1[1] = 1.0 / param_2[4];
  fVar3 = param_2[6];
  fVar6 = param_2[7];
  fVar7 = param_2[1];
  fVar4 = param_2[3];
  fVar5 = *param_2 / param_2[4];
  fVar8 = param_2[2] / param_2[4];
  if (fVar8 - fVar5 != 0.0) {
    __x = (fVar4 - fVar7) / (fVar8 - fVar5);
  }
  fVar9 = fVar7 - fVar5 * __x;
  param_1[10] = -fVar9 / __x;
  param_1[0xb] = 0.0;
  param_1[0xc] = 1.0;
  param_1[0xd] = 1.0;
  fVar1 = logf(__x);
  param_1[0xe] = fVar6 * fVar1;
  param_1[0xf] = fVar6;
  fVar1 = powf(fVar5 * __x + fVar9,fVar6 + -1.0);
  fVar9 = powf(fVar8 * __x + fVar9,fVar6 + -1.0);
  fVar7 = powf(fVar7,fVar6);
  if (fVar7 <= 1e-05) {
    fVar7 = 1e-05;
  }
  fVar4 = powf(fVar4,fVar6);
  if (fVar4 <= 1e-05) {
    fVar4 = 1e-05;
  }
  fVar3 = fVar3 + 1.0;
  fVar2 = powf(fVar3,fVar6);
  param_1[2] = fVar5;
  param_1[3] = fVar8;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 1.0;
  param_1[7] = 1.0;
  fVar1 = (fVar5 * fVar6 * __x * fVar1) / fVar7;
  fVar7 = logf(fVar7);
  fVar5 = logf(fVar5);
  param_1[8] = fVar7 - fVar1 * fVar5;
  param_1[9] = fVar1;
  fVar7 = fVar2 + -1.0 + 1.0;
  fVar6 = (fVar6 * __x * fVar9 * (fVar7 - fVar8)) / (fVar3 - fVar4);
  fVar4 = logf(fVar3 - fVar4);
  fVar5 = logf(fVar7 - fVar8);
  fVar4 = fVar4 - fVar6 * fVar5;
  param_1[0x10] = fVar7;
  param_1[0x11] = fVar3;
  param_1[0x12] = -1.0;
  param_1[0x13] = -1.0;
  param_1[0x14] = fVar4;
  param_1[0x15] = fVar6;
  if (1.0 - fVar7 < 0.0) {
    fVar3 = logf(-(1.0 - fVar7));
    fVar5 = expf(fVar4 + fVar6 * fVar3);
    fVar3 = param_1[0x11];
    fVar4 = param_1[0x12];
    fVar6 = param_1[0x13];
  }
  else {
    fVar6 = -1.0;
    fVar5 = 0.0;
    fVar4 = -1.0;
  }
  fVar4 = 1.0 / (fVar3 + fVar4 * fVar5);
  param_1[5] = param_1[5] * fVar4;
  param_1[7] = fVar4 * param_1[7];
  param_1[0xb] = fVar4 * param_1[0xb];
  param_1[0xd] = fVar4 * param_1[0xd];
  param_1[0x11] = fVar3 * fVar4;
  param_1[0x13] = fVar6 * fVar4;
  return;
}


