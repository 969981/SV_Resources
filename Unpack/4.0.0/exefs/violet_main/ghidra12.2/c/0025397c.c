/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025397c; name: FUN_0025397c
 */


void FUN_0025397c(undefined8 param_1,long param_2)

{
  nn::os::LockMutex((MutexType *)(param_2 + 8));
  FUN_01e9fb38(param_1,param_2 + 0x28);
  nn::os::UnlockMutex((MutexType *)(param_2 + 8));
  return;
}


