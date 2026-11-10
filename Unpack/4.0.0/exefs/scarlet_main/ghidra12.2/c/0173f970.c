/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0173f970; name: FUN_0173f970
 */


undefined8 FUN_0173f970(ulong *param_1,ulong *param_2,ulong *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  
  bVar4 = (*param_2 & 0xffff00000000) == 0;
  iVar2 = (int)param_2[1];
  bVar5 = (int)*param_2 == 0;
  bVar1 = iVar2 <= (int)param_1[1];
  if ((*param_3 & 0xffff00000000) == 0 || (int)*param_3 == 0) {
    if ((bVar4 || bVar5) || bVar1) {
      return 0;
    }
  }
  else {
    if ((bVar4 || bVar5) || bVar1) {
      if ((int)param_3[1] <= iVar2) {
        return 0;
      }
      uVar6 = *param_2;
      uVar3 = param_2[1];
      uVar7 = *param_3;
      *(int *)(param_2 + 1) = (int)param_3[1];
      *param_2 = uVar7;
      *(int *)(param_3 + 1) = (int)uVar3;
      *param_3 = uVar6;
      if ((*param_2 & 0xffff00000000) == 0) {
        return 1;
      }
      if ((int)*param_2 == 0) {
        return 1;
      }
      if ((int)param_1[1] < (int)param_2[1]) {
        uVar6 = *param_1;
        uVar3 = param_1[1];
        uVar7 = *param_2;
        *(int *)(param_1 + 1) = (int)param_2[1];
        *param_1 = uVar7;
        *(int *)(param_2 + 1) = (int)uVar3;
        *param_2 = uVar6;
        return 2;
      }
      return 1;
    }
    if (iVar2 < (int)param_3[1]) {
      uVar6 = *param_1;
      uVar3 = param_1[1];
      uVar7 = *param_3;
      *(int *)(param_1 + 1) = (int)param_3[1];
      *param_1 = uVar7;
      *(int *)(param_3 + 1) = (int)uVar3;
      *param_3 = uVar6;
      return 1;
    }
  }
  uVar6 = *param_1;
  uVar3 = param_1[1];
  uVar7 = *param_2;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *param_1 = uVar7;
  *(int *)(param_2 + 1) = (int)uVar3;
  *param_2 = uVar6;
  if ((*param_3 & 0xffff00000000) == 0) {
    return 1;
  }
  if ((int)*param_3 == 0) {
    return 1;
  }
  if ((int)param_2[1] < (int)param_3[1]) {
    uVar6 = *param_2;
    uVar3 = param_2[1];
    uVar7 = *param_3;
    *(int *)(param_2 + 1) = (int)param_3[1];
    *param_2 = uVar7;
    *(int *)(param_3 + 1) = (int)uVar3;
    *param_3 = uVar6;
    return 2;
  }
  return 1;
}


