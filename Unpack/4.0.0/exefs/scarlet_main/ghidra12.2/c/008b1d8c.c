/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b1d8c; name: FUN_008b1d8c
 */


void FUN_008b1d8c(undefined1 param_1 [16],float param_2,long *param_3,long *param_4,
                 undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((*(byte *)((long)param_3 + 0x62) >> 1 & 1) == 0) {
    lVar3 = param_3[0x13];
    param_4[3] = param_3[0x11];
    param_4[5] = lVar3;
    param_4[1] = param_3[0xf];
    *param_4 = param_3[0xe];
    lVar3 = param_3[0x10];
    param_4[4] = param_3[0x12];
    param_4[2] = lVar3;
  }
  else {
    FUN_008b4f90(param_4,param_5);
  }
  fVar4 = (float)FUN_008a6ea4(param_3);
  if (param_3[0x27] != 0) {
    fVar9 = 0.0;
    fVar10 = 0.0;
    goto LAB_008b1e84;
  }
  bVar1 = *(byte *)((long)param_3 + 0x116);
  if ((bVar1 & 3) == 2) {
    fVar9 = *(float *)(param_3 + 10);
    bVar2 = *(byte *)((long)param_3 + 0x115);
  }
  else if ((bVar1 & 3) == 0) {
    fVar9 = *(float *)(param_3 + 10) * 0.5;
    bVar2 = *(byte *)((long)param_3 + 0x115);
  }
  else {
    fVar9 = 0.0;
    bVar2 = *(byte *)((long)param_3 + 0x115);
  }
  if ((bVar2 >> 4 & 1) == 0) {
    bVar1 = bVar1 >> 2 & 3;
    if (bVar1 == 2) {
      fVar10 = *(float *)((long)param_3 + 0x54);
      goto LAB_008b1e84;
    }
    if (bVar1 != 0) {
      fVar10 = 0.0;
      goto LAB_008b1e84;
    }
  }
  fVar10 = *(float *)((long)param_3 + 0x54) * 0.5;
LAB_008b1e84:
  fVar5 = (float)(**(code **)(*param_3 + 0x70))(param_3);
  if ((*(byte *)((long)param_3 + 0x5b) & 3) != 0) {
    if ((*(byte *)((long)param_3 + 0x5b) & 3) == 2) {
      fVar9 = fVar9 - fVar5;
    }
    else {
      fVar9 = fVar9 + fVar5;
    }
  }
  fVar4 = fVar4 + fVar9;
  param_2 = param_2 - fVar10;
  fVar5 = (float)param_4[2];
  fVar10 = (float)((ulong)*param_4 >> 0x20);
  fVar9 = (float)*param_4;
  fVar6 = (float)((ulong)param_4[2] >> 0x20);
  fVar7 = (float)param_4[4];
  fVar8 = (float)((ulong)param_4[4] >> 0x20);
  param_4[1] = CONCAT44((float)((ulong)param_4[1] >> 0x20) + fVar4 * fVar9 + param_2 * fVar10,
                        (int)param_4[1]);
  *param_4 = CONCAT44(-fVar10,fVar9);
  param_4[3] = CONCAT44((float)((ulong)param_4[3] >> 0x20) + fVar4 * fVar5 + param_2 * fVar6,
                        (int)param_4[3]);
  param_4[2] = CONCAT44(-fVar6,fVar5);
  param_4[5] = CONCAT44((float)((ulong)param_4[5] >> 0x20) + fVar4 * fVar7 + param_2 * fVar8,
                        (int)param_4[5]);
  param_4[4] = CONCAT44(-fVar8,fVar7);
  return;
}


