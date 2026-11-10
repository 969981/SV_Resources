/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01588b50; name: FUN_01588b50
 */


void FUN_01588b50(long param_1)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x3e0));
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x400);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3e0));
  return;
}


