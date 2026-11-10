/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002529a4; name: FUN_002529a4
 */


void FUN_002529a4(long param_1,undefined8 *param_2)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return;
}


