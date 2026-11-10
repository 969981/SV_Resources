/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dad1d8; name: FUN_01dad1d8
 */


void FUN_01dad1d8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1d0));
  FUN_020d94dc(0,param_1);
  for (plVar2 = *(long **)(param_1 + 0x150); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    lVar1 = plVar2[6];
    plVar2[6] = 0;
    if (lVar1 != 0) {
      FUN_020d9118(plVar2 + 7);
    }
  }
  FUN_020d9530(param_1 + 0x120);
  FUN_020d95e0(param_1 + 0x78);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1d0));
  return;
}


