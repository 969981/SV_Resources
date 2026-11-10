/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0188b748; name: FUN_0188b748
 */


void FUN_0188b748(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x40));
  FUN_0188b77c(param_1 + 0x60);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x40));
  return;
}


