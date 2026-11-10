/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c40e00; name: FUN_00c40e00
 */


int FUN_00c40e00(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (*(int **)(param_1 + 0x58) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int **)(param_1 + 0x58);
  }
  lVar3 = *(long *)(param_1 + 0x50);
  param_1 = param_1 + 0x48;
  if (lVar3 != param_1) {
    iVar1 = FUN_00c40e00(*(undefined8 *)(lVar3 + 0x10));
    lVar3 = *(long *)(lVar3 + 8);
    iVar2 = iVar1 + iVar2;
    if (lVar3 != param_1) {
      iVar1 = FUN_00c40e00(*(undefined8 *)(lVar3 + 0x10));
      iVar2 = iVar1 + iVar2;
      for (lVar3 = *(long *)(lVar3 + 8); lVar3 != param_1; lVar3 = *(long *)(lVar3 + 8)) {
        iVar1 = FUN_00c40e00(*(undefined8 *)(lVar3 + 0x10));
        iVar2 = iVar1 + iVar2;
      }
    }
  }
  return iVar2;
}


