/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0024a7d0; name: FUN_0024a7d0
 */


long * FUN_0024a7d0(long *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  nn::os::LockMutex((MutexType *)(param_1 + 7));
  nn::os::UnlockMutex((MutexType *)(param_1 + 7));
  return param_1 + 0xb;
}


