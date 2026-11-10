/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bdd41c; name: FUN_00bdd41c
 */


undefined8 FUN_00bdd41c(uint param_1,ulong *param_2,int *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  pbVar2 = (byte *)*param_2;
  if (pbVar2 < (byte *)param_2[1]) {
    uVar5 = (ulong)*pbVar2;
    if (-1 < (char)*pbVar2) {
      *param_2 = (ulong)(pbVar2 + 1);
      goto LAB_00bdd474;
    }
  }
  else {
    uVar5 = 0;
  }
  uVar5 = FUN_00c0944c(param_2,uVar5);
  if ((long)uVar5 < 0) {
    return 0;
  }
LAB_00bdd474:
  iVar4 = *param_3;
  if (iVar4 == param_3[1]) {
    FUN_00ba867c(param_3,iVar4 + 1);
    iVar4 = *param_3;
  }
  *param_3 = iVar4 + 1;
  *(int *)(*(long *)(param_3 + 2) + (long)iVar4 * 4 + 8) = (int)uVar5;
  if (0 < param_3[1] - *param_3) {
    iVar4 = (param_3[1] - *param_3) + 1;
    do {
      pbVar2 = (byte *)*param_2;
      if ((byte *)param_2[1] <= pbVar2) {
        return 1;
      }
      if (*pbVar2 != param_1) {
        return 1;
      }
      pbVar1 = pbVar2 + 1;
      *param_2 = (ulong)pbVar1;
      if (pbVar1 < (byte *)param_2[1]) {
        uVar5 = (ulong)*pbVar1;
        if ((char)*pbVar1 < '\0') goto LAB_00bdd4fc;
        *param_2 = (ulong)(pbVar2 + 2);
      }
      else {
        uVar5 = 0;
LAB_00bdd4fc:
        uVar5 = FUN_00c0944c(param_2,uVar5);
        if ((long)uVar5 < 0) {
          return 0;
        }
      }
      iVar4 = iVar4 + -1;
      iVar3 = *param_3;
      *param_3 = iVar3 + 1;
      *(int *)(*(long *)(param_3 + 2) + (long)iVar3 * 4 + 8) = (int)uVar5;
    } while (1 < iVar4);
  }
  return 1;
}


