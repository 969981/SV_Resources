/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01181c70; name: FUN_01181c70
 */


void FUN_01181c70(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 0xc) == '\0') {
    FUN_008d43e0("EmitterSet has been already deleted.\n");
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x16c0));
  iVar1 = *(int *)(param_1 + 0x8b8);
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x8b0) + lVar2 * 8) == param_2) goto LAB_01181cdc;
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  *(long *)(*(long *)(param_1 + 0x8b0) + (long)iVar1 * 8) = param_2;
  *(int *)(param_1 + 0x8b8) = *(int *)(param_1 + 0x8b8) + 1;
LAB_01181cdc:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x16c0));
  return;
}


