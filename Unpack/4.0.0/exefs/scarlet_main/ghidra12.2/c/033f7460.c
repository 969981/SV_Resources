/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033f7460; name: FUN_033f7460
 */


uint FUN_033f7460(float param_1,int *param_2,float *param_3,uint param_4,long param_5)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar3 = *param_2 - param_2[3];
  if (uVar3 == 0) {
    return 0;
  }
  fVar8 = (float)param_2[7];
  uVar4 = 0;
  pfVar1 = (float *)(param_2 + 6);
  uVar2 = param_2[1];
  while( true ) {
    pfVar6 = param_3;
    pfVar7 = pfVar1;
    if (0.0 <= fVar8) {
      uVar5 = (uint)fVar8;
      if ((int)((param_4 & 0xffff) - 1) <= (int)uVar5) {
        if (uVar5 < (param_4 & 0xffff)) {
          *pfVar1 = param_3[uVar5];
          fVar9 = (float)(int)(uVar5 + 1);
        }
        else {
          fVar9 = (float)(param_4 & 0xffff);
        }
        fVar8 = fVar8 - fVar9;
        uVar3 = uVar4 & 0xffff;
        goto LAB_033f755c;
      }
      pfVar7 = param_3 + uVar5;
      pfVar6 = param_3 + (uVar5 + 1);
    }
    fVar9 = *pfVar7;
    if (uVar3 == (uVar4 & 0xffff)) break;
    uVar4 = uVar4 + 1;
    fVar10 = 1.0;
    if (0.0 <= fVar8) {
      fVar10 = -(float)(int)fVar8;
    }
    fVar10 = fVar10 + fVar8;
    fVar8 = fVar8 + param_1;
    *(float *)(param_5 + (ulong)uVar2 * 4) = fVar9 + fVar10 * (*pfVar6 - fVar9);
    uVar5 = 0;
    if (uVar2 + 1 != *param_2) {
      uVar5 = uVar2 + 1;
    }
    uVar2 = uVar5;
  }
  *pfVar1 = fVar9;
  if (fVar8 <= 0.0) {
    param_4 = 0;
  }
  else {
    param_4 = (int)fVar8 + 1;
    fVar8 = fVar8 - (float)(int)param_4;
  }
LAB_033f755c:
  param_2[1] = uVar2;
  param_2[7] = (int)fVar8;
  param_2[3] = param_2[3] + uVar3;
  return param_4 & 0xffff;
}


