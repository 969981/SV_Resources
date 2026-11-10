/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03235990; name: FUN_03235990
 */


void FUN_03235990(MutexType *param_1)

{
  nn::os::FinalizeSemaphore((SemaphoreType *)(param_1 + 0x40));
  nn::os::FinalizeMutex(param_1 + 0x20);
  nn::os::FinalizeMutex(param_1);
  return;
}


