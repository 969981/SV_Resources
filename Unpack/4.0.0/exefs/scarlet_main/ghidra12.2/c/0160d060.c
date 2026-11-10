/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0160d060; name: FUN_0160d060
 */


undefined8 FUN_0160d060(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_2;
  lVar3 = *param_1;
  lVar5 = *param_3;
  iVar1 = *(int *)(lVar4 + 8);
  if (*(int *)(lVar3 + 8) < iVar1) {
    if (iVar1 < *(int *)(lVar5 + 8)) {
      *param_1 = lVar5;
      uVar2 = 1;
    }
    else {
      *param_1 = lVar4;
      *param_2 = lVar3;
      if (*(int *)(*param_3 + 8) <= *(int *)(lVar3 + 8)) {
        return 1;
      }
      uVar2 = 2;
      *param_2 = *param_3;
    }
    *param_3 = lVar3;
    return uVar2;
  }
  if (*(int *)(lVar5 + 8) <= iVar1) {
    return 0;
  }
  *param_2 = lVar5;
  *param_3 = lVar4;
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 8) < *(int *)(*param_2 + 8)) {
    *param_1 = *param_2;
    *param_2 = lVar3;
    return 2;
  }
  return 1;
}


