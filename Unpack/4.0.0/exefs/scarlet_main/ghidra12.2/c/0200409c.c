/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0200409c; name: FUN_0200409c
 */


void FUN_0200409c(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int local_28;
  int iStack_24;
  
  lVar2 = *(long *)(param_1 + 0x48);
  if ((lVar2 != 0) && (iVar3 = *(int *)(param_1 + 0x40), 0 < iVar3)) {
    lVar4 = 0;
    while( true ) {
      if (*(long *)(lVar2 + lVar4 * 8) != 0) {
        FUN_02006904();
        iVar3 = *(int *)(param_1 + 0x40);
      }
      lVar4 = lVar4 + 1;
      if (iVar3 <= lVar4) break;
      lVar2 = *(long *)(param_1 + 0x48);
    }
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x38);
        iStack_24 = 0;
        if (iVar1 != 0) {
          iStack_24 = iVar3 / iVar1;
        }
        local_28 = iVar3 - iVar1 * iStack_24;
        FUN_020089ac(param_1,&local_28);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x40));
    }
  }
  return;
}


