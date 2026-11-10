/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00546cb8; name: FUN_00546cb8
 */


void FUN_00546cb8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x168));
  FUN_01ea06c8(param_2 + 0x130);
  *(undefined1 *)(param_2 + 0x188) = 1;
  nn::os::SignalEvent((EventType *)(param_2 + 0x140));
  lVar2 = *(long *)(param_2 + 0x128);
  *param_1 = *(undefined8 *)(param_2 + 0x120);
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x168));
  return;
}


