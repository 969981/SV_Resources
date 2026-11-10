/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028f8dd4; name: FUN_028f8dd4
 */


void FUN_028f8dd4(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_0172bf50();
  nn::os::LockMutex((MutexType *)(param_1 + 0x3d0));
  nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x3f0));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3d0));
  plVar3 = *(long **)(param_1 + 0x408);
  for (plVar2 = *(long **)(param_1 + 0x400); plVar2 != plVar3; plVar2 = plVar2 + 1) {
    lVar1 = *plVar2;
    FUN_0172bf50(lVar1);
    nn::os::LockMutex((MutexType *)(lVar1 + 0x3f0));
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar1 + 0x410));
    nn::os::UnlockMutex((MutexType *)(lVar1 + 0x3f0));
  }
  return;
}


