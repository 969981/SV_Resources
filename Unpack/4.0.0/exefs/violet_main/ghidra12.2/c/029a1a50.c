/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a1a50; name: FUN_029a1a50
 */


void FUN_029a1a50(long param_1)

{
  long *plVar1;
  undefined2 uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x128));
  *(int *)(param_1 + 0x45c) = *(int *)(param_1 + 0x45c) + 1;
  if ((*(char *)(param_1 + 0x3f0) == '\0') && (*(char *)(param_1 + 0x3f1) == '\0')) {
    *(undefined1 *)(param_1 + 0x460) = 1;
    if ((*(char *)(param_1 + 0x58) != '\0') || (*(char *)(param_1 + 0x59) != '\0')) {
      uVar2 = *(undefined2 *)(param_1 + 0x58);
      plVar1 = (long *)(param_1 + 0x38);
      *(undefined2 *)(param_1 + 0x58) = 0;
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_00c6a584(*(long *)(param_1 + 0x48),plVar1);
      }
      (**(code **)(*plVar1 + 0x20))(plVar1,uVar2);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
  return;
}


