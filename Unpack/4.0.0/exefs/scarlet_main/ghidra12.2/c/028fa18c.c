/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028fa18c; name: FUN_028fa18c
 */


void FUN_028fa18c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  FUN_0172bf50();
  piVar1 = (int *)(param_1 + 0x514);
  if (*piVar1 == 2) {
    return;
  }
  if (*piVar1 == 0) {
    do {
      iVar2 = *piVar1;
      if (iVar2 != 0) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_028fa1e4;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = 2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar4 = true;
LAB_028fa1e4:
    if (bVar4) {
      return;
    }
    if (iVar2 == 2) {
      return;
    }
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x4c8));
  *(undefined4 *)(param_1 + 0x514) = 2;
  nn::os::ClearEvent((EventType *)(*(long *)(param_1 + 0x4f0) + 0x40));
  nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x4e8));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x4c8));
  return;
}


