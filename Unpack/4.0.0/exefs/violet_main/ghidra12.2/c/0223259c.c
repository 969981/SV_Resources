/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0223259c; name: FUN_0223259c
 */


void FUN_0223259c(long param_1)

{
  int iVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x598));
  iVar1 = *(int *)(param_1 + 0x594) + -1;
  if (*(int *)(param_1 + 0x594) < 1) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x594) = iVar1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x598));
  return;
}


