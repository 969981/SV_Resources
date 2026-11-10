/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052b380; name: FUN_0052b380
 */


void FUN_0052b380(int *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*param_1 != -1) {
    return;
  }
  *param_1 = 1;
  iVar1 = param_1[1];
  if (iVar1 < 1) {
    lVar2 = (long)iVar1;
  }
  else {
    lVar3 = 0;
    do {
      if (*(long *)(param_1 + lVar3 * 2 + 6) != 0) {
        FUN_0052b380();
        iVar1 = param_1[1];
      }
      lVar3 = lVar3 + 1;
      lVar2 = (long)iVar1;
    } while (lVar3 < lVar2);
  }
  iVar1 = param_1[2];
  if (0 < iVar1) {
    lVar3 = 0;
    do {
      if (**(long **)(param_1 + lVar2 * 2 + lVar3 * 2 + 6) != 0) {
        FUN_0052b380();
        iVar1 = param_1[2];
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  (**(code **)(param_1 + 4))();
  *param_1 = 0;
  return;
}


