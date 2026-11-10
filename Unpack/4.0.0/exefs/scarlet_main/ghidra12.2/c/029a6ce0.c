/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a6ce0; name: FUN_029a6ce0
 */


ulong FUN_029a6ce0(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_029a6c30();
  lVar3 = *param_4;
  if (*(int *)(lVar3 + 8) < *(int *)(*param_5 + 8)) {
    *param_4 = *param_5;
    *param_5 = lVar3;
    lVar3 = *param_3;
    iVar1 = (int)uVar2;
    if (*(int *)(lVar3 + 8) < *(int *)(*param_4 + 8)) {
      *param_3 = *param_4;
      *param_4 = lVar3;
      lVar3 = *param_2;
      if (*(int *)(lVar3 + 8) < *(int *)(*param_3 + 8)) {
        *param_2 = *param_3;
        *param_3 = lVar3;
        lVar3 = *param_1;
        if (*(int *)(lVar3 + 8) < *(int *)(*param_2 + 8)) {
          uVar2 = (ulong)(iVar1 + 4);
          *param_1 = *param_2;
          *param_2 = lVar3;
        }
        else {
          uVar2 = (ulong)(iVar1 + 3);
        }
      }
      else {
        uVar2 = (ulong)(iVar1 + 2);
      }
    }
    else {
      uVar2 = (ulong)(iVar1 + 1);
    }
  }
  return uVar2;
}


