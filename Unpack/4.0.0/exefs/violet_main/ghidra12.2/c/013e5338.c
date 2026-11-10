/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013e5338; name: FUN_013e5338
 */


void FUN_013e5338(long param_1)

{
  long *plVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1d0));
  for (plVar1 = *(long **)(param_1 + 0x150); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_013e5380(plVar1[6] + 0x30);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1d0));
  return;
}


