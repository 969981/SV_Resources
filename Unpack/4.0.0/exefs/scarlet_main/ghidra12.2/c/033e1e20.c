/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033e1e20; name: FUN_033e1e20
 */


void FUN_033e1e20(int *param_1,float *param_2,uint param_3)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  iVar6 = param_1[4];
  iVar7 = *param_1;
  pfVar4 = (float *)(*(long *)(param_1 + 2) + (ulong)(uint)(iVar6 << 1) * 4);
  uVar5 = iVar7 - iVar6;
  if (param_3 < uVar5) {
    uVar5 = param_3;
    if (param_3 != 0) {
      do {
        fVar8 = *param_2;
        uVar5 = uVar5 - 1;
        fVar9 = *pfVar4;
        *pfVar4 = fVar8;
        fVar9 = fVar9 + (fVar8 - pfVar4[1]) * (float)param_1[5];
        pfVar4[1] = fVar9;
        pfVar4 = pfVar4 + 2;
        *param_2 = fVar9;
        param_2 = param_2 + 1;
      } while (uVar5 != 0);
      iVar6 = param_1[4];
    }
    param_1[4] = iVar6 + param_3;
    return;
  }
  do {
    uVar1 = param_3;
    if (uVar5 <= param_3) {
      uVar1 = uVar5;
    }
    pfVar2 = param_2;
    if (uVar1 != 0) {
      if (uVar1 != 1) {
        iVar6 = -(uVar1 & 0xfffffffe);
        pfVar3 = pfVar4;
        do {
          fVar8 = *pfVar2;
          pfVar4 = pfVar3 + 4;
          param_2 = pfVar2 + 2;
          fVar9 = *pfVar3;
          *pfVar3 = fVar8;
          fVar9 = fVar9 + (fVar8 - pfVar3[1]) * (float)param_1[5];
          pfVar3[1] = fVar9;
          *pfVar2 = fVar9;
          fVar8 = pfVar2[1];
          fVar9 = pfVar3[2];
          pfVar3[2] = fVar8;
          fVar9 = fVar9 + (fVar8 - pfVar3[3]) * (float)param_1[5];
          iVar6 = iVar6 + 2;
          pfVar3[3] = fVar9;
          pfVar2[1] = fVar9;
          pfVar2 = param_2;
          pfVar3 = pfVar4;
        } while (iVar6 != 0);
      }
      pfVar2 = param_2;
      if ((uVar1 & 1) != 0) {
        fVar8 = *param_2;
        fVar9 = *pfVar4;
        *pfVar4 = fVar8;
        fVar9 = fVar9 + (fVar8 - pfVar4[1]) * (float)param_1[5];
        pfVar4[1] = fVar9;
        pfVar4 = pfVar4 + 2;
        pfVar2 = param_2 + 1;
        *param_2 = fVar9;
      }
      iVar6 = param_1[4];
      iVar7 = *param_1;
    }
    iVar6 = iVar6 + uVar1;
    param_1[4] = iVar6;
    if (iVar6 == iVar7) {
      pfVar4 = *(float **)(param_1 + 2);
      iVar6 = 0;
      param_1[4] = 0;
    }
    param_3 = param_3 - uVar1;
    uVar5 = iVar7 - iVar6;
    param_2 = pfVar2;
  } while (param_3 != 0);
  return;
}


