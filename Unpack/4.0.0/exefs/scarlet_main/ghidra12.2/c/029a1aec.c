/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a1aec; name: FUN_029a1aec
 */


void FUN_029a1aec(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x128));
  iVar2 = *(int *)(param_1 + 0x45c);
  iVar4 = iVar2 + -1;
  *(int *)(param_1 + 0x45c) = iVar4;
  if (iVar4 == 0 || iVar2 < 1) {
    if (*(char *)(param_1 + 0x3f0) != '\0') {
      *(undefined1 *)(param_1 + 0x461) = 1;
      if ((*(char *)(param_1 + 0x58) != '\0') || (*(char *)(param_1 + 0x59) != '\0')) {
        uVar3 = *(undefined2 *)(param_1 + 0x58);
        plVar1 = (long *)(param_1 + 0x38);
        *(undefined2 *)(param_1 + 0x58) = 0;
        if (*(long *)(param_1 + 0x48) != 0) {
          FUN_00c6a584(*(long *)(param_1 + 0x48),plVar1);
        }
        (**(code **)(*plVar1 + 0x20))(plVar1,uVar3);
      }
    }
    *(undefined4 *)(param_1 + 0x45c) = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
  return;
}


