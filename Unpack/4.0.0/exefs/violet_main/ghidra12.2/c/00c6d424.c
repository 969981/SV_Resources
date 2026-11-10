/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c6d424; name: FUN_00c6d424
 */


void FUN_00c6d424(long *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  
  lVar4 = *param_1;
  lVar9 = *(long *)param_1[1];
  lVar5 = *(long *)(lVar9 + 0x58);
  lVar6 = *(long *)(lVar9 + 0x60);
  puVar1 = (uint *)(lVar9 + 0x140);
  do {
    uVar3 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar3 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  while (uVar3 < (uint)((ulong)(lVar6 - lVar5) >> 3)) {
    FUN_00c6d4c0(*(undefined8 *)(*(long *)(lVar9 + 0x58) + (ulong)uVar3 * 8));
    do {
      uVar3 = *puVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar8) {
        *puVar1 = uVar3 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  nn::os::LockMutex((MutexType *)(lVar4 + 0x100));
  piVar2 = (int *)(lVar4 + 0x120);
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar8) {
      *piVar2 = *piVar2 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  nn::os::SignalConditionVariable((ConditionVariableType *)(lVar4 + 0xf0));
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0x100));
  return;
}


