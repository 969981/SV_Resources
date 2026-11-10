/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c6fd4; name: FUN_031c6fd4
 */


long * FUN_031c6fd4(long *param_1,uint param_2,char *param_3,uint param_4)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  
  if (param_3 != (char *)0x0) {
    if ((int)param_4 < 0) {
      sVar6 = strlen(param_3);
      param_4 = (uint)sVar6;
    }
    if ((int)param_1[0x12] == 0) {
      uVar3 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
      iVar9 = uVar3 - 2;
      iVar7 = param_4 + param_2;
      if (iVar9 <= (int)(param_4 + param_2)) {
        iVar7 = iVar9;
      }
      uVar5 = iVar7 - param_2;
      if (uVar5 == 0 || iVar7 < (int)param_2) {
        return param_1;
      }
      if ((int)uVar5 < 1) {
        return param_1;
      }
      iVar9 = (int)param_1[1] + uVar5;
      iVar4 = (int)param_1[1] - param_2;
      if ((int)uVar3 < iVar9) {
        FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,(long)iVar9);
      }
      pcVar2 = (char *)(*param_1 + (long)(int)param_2);
      if (0 < iVar4) {
        FUN_031d0240(pcVar2 + uVar5,pcVar2,iVar4);
      }
      uVar3 = uVar5 & 3;
      if (2 < iVar7 + ~param_2) {
        iVar7 = -(uVar5 & 0xfffffffc);
        pcVar8 = pcVar2;
        do {
          *pcVar8 = *param_3;
          pcVar8[1] = param_3[1];
          pcVar8[2] = param_3[2];
          pcVar1 = param_3 + 3;
          pcVar2 = pcVar8 + 4;
          param_3 = param_3 + 4;
          iVar7 = iVar7 + 4;
          pcVar8[3] = *pcVar1;
          pcVar8 = pcVar2;
        } while (iVar7 != 0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar2 = *param_3;
        param_3 = param_3 + 1;
        pcVar2 = pcVar2 + 1;
      }
    }
    else {
      if ((int)param_4 < 1) {
        return param_1;
      }
      iVar9 = (int)param_1[1] + param_4;
      iVar7 = (int)param_1[1] - param_2;
      if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < iVar9) {
        FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,(long)iVar9);
      }
      pcVar2 = (char *)(*param_1 + (long)(int)param_2);
      if (0 < iVar7) {
        FUN_031d0240(pcVar2 + param_4,pcVar2,iVar7);
      }
      uVar3 = param_4 & 3;
      if (2 < param_4 - 1) {
        iVar7 = -(param_4 & 0xfffffffc);
        pcVar8 = pcVar2;
        do {
          *pcVar8 = *param_3;
          pcVar8[1] = param_3[1];
          pcVar8[2] = param_3[2];
          pcVar1 = param_3 + 3;
          pcVar2 = pcVar8 + 4;
          param_3 = param_3 + 4;
          iVar7 = iVar7 + 4;
          pcVar8[3] = *pcVar1;
          pcVar8 = pcVar2;
        } while (iVar7 != 0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar2 = *param_3;
        param_3 = param_3 + 1;
        pcVar2 = pcVar2 + 1;
      }
    }
    *(int *)(param_1 + 1) = iVar9;
  }
  return param_1;
}


