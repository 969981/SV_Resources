/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03423ac4; name: FUN_03423ac4
 */


void FUN_03423ac4(float *param_1,float *param_2,long param_3,float *param_4)

{
  long lVar1;
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
  
  fVar2 = param_2[1];
  fVar11 = param_4[1] - fVar2;
  fVar9 = *param_4 - *param_2;
  fVar3 = param_2[2];
  fVar12 = param_4[2] - fVar3;
  fVar8 = param_2[0xc];
  fVar4 = param_2[4];
  fVar6 = param_2[5];
  fVar7 = param_2[3] * fVar9 + fVar11 * fVar4 + fVar12 * fVar6;
  fVar5 = -fVar8;
  if ((-fVar8 <= fVar7) && (fVar5 = fVar8, fVar7 <= fVar8)) {
    fVar5 = fVar7;
  }
  fVar8 = param_2[7];
  fVar10 = param_2[8];
  fVar9 = param_2[6] * fVar9 + fVar11 * fVar8 + fVar12 * fVar10;
  fVar11 = param_2[0xd];
  fVar7 = -fVar11;
  if ((-fVar11 <= fVar9) && (fVar7 = fVar11, fVar9 <= fVar11)) {
    fVar7 = fVar9;
  }
  if (param_2[0x16] == 0.0) {
    lVar1 = -1;
  }
  else {
    lVar1 = *(long *)(**(long **)(param_2 + 0x14) + 0x70);
  }
  fVar12 = param_2[10];
  fVar11 = param_2[0xb];
  fVar9 = -param_2[0xe];
  if (lVar1 != param_3) {
    fVar9 = param_2[0xe];
  }
  *param_1 = *param_2 + param_2[3] * fVar5 + param_2[6] * fVar7 + param_2[9] * fVar9;
  param_1[1] = fVar2 + fVar4 * fVar5 + fVar8 * fVar7 + fVar12 * fVar9;
  param_1[2] = fVar3 + fVar6 * fVar5 + fVar10 * fVar7 + fVar11 * fVar9;
  return;
}


