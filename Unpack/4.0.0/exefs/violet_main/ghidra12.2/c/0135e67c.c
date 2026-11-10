/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0135e67c; name: FUN_0135e67c
 */


void FUN_0135e67c(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x150));
  if (*(char *)(param_1 + 0x72) == '\0') {
    FUN_0135e6c4(param_1);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x150));
  return;
}


