/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019fdb2c; name: FUN_019fdb2c
 */


void FUN_019fdb2c(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x1c0));
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1c0));
  return;
}


