/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c60284; name: FUN_00c60284
 */


void FUN_00c60284(long *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  uint uVar8;
  undefined2 local_28;
  
  lVar4 = *param_1;
  lVar7 = *(long *)param_1[1];
  local_28 = 0;
  puVar1 = (uint *)(lVar7 + 0x140);
  do {
    uVar3 = *puVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar3 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  uVar8 = (uint)((ulong)(*(long *)(lVar7 + 0x60) - *(long *)(lVar7 + 0x58)) >> 3);
  if (uVar3 < uVar8) {
    do {
      local_28 = CONCAT11(uVar3 == uVar8 - 1,uVar3 == 0);
      FUN_00c6035c(*(undefined8 *)(*(long *)(lVar7 + 0x58) + (ulong)uVar3 * 8),
                   *(undefined8 *)(lVar7 + (ulong)*(uint *)(lVar7 + 0xd0) * 0x20 + 0x90),
                   (ulong)uVar3,&local_28);
      do {
        uVar3 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    } while (uVar3 < uVar8);
  }
  nn::os::LockMutex((MutexType *)(lVar4 + 0x100));
  piVar2 = (int *)(lVar4 + 0x120);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar6) {
      *piVar2 = *piVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  nn::os::SignalConditionVariable((ConditionVariableType *)(lVar4 + 0xf0));
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0x100));
  return;
}


