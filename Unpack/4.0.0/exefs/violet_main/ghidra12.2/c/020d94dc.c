/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020d94dc; name: FUN_020d94dc
 */


void FUN_020d94dc(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x1d0));
  for (plVar1 = *(long **)(param_2 + 0x150); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_020d9690(param_1,plVar1[6]);
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x1d0));
  return;
}


