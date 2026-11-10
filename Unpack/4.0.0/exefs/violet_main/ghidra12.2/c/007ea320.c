/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ea320; name: FUN_007ea320
 */


void FUN_007ea320(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x1910));
  FUN_007ea51c(param_1);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1910));
  return;
}


