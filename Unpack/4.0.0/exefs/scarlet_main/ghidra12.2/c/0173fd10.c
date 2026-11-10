/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0173fd10; name: FUN_0173fd10
 */


int FUN_0173fd10(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  iVar4 = FUN_0173f970();
  bVar2 = (*param_4 & 0xffff00000000) == 0;
  bVar3 = (int)*param_4 == 0;
  iVar5 = iVar4;
  if (((!bVar2 && !bVar3) && (int)param_4[1] != (int)param_3[1]) &&
      ((bVar2 || bVar3) || (int)param_3[1] <= (int)param_4[1])) {
    uVar6 = *param_3;
    uVar1 = param_3[1];
    uVar7 = *param_4;
    *(int *)(param_3 + 1) = (int)param_4[1];
    *param_3 = uVar7;
    *(int *)(param_4 + 1) = (int)uVar1;
    *param_4 = uVar6;
    iVar5 = iVar4 + 1;
    if ((((*param_3 & 0xffff00000000) != 0) && ((int)*param_3 != 0)) &&
       ((int)param_2[1] < (int)param_3[1])) {
      uVar6 = *param_2;
      uVar1 = param_2[1];
      uVar7 = *param_3;
      *(int *)(param_2 + 1) = (int)param_3[1];
      *param_2 = uVar7;
      *(int *)(param_3 + 1) = (int)uVar1;
      *param_3 = uVar6;
      iVar5 = iVar4 + 2;
      if ((((*param_2 & 0xffff00000000) != 0) && ((int)*param_2 != 0)) &&
         ((int)param_1[1] < (int)param_2[1])) {
        uVar6 = *param_1;
        uVar1 = param_1[1];
        uVar7 = *param_2;
        *(int *)(param_1 + 1) = (int)param_2[1];
        *param_1 = uVar7;
        *param_2 = uVar6;
        iVar5 = iVar4 + 3;
        *(int *)(param_2 + 1) = (int)uVar1;
      }
    }
  }
  return iVar5;
}


