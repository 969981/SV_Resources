/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


