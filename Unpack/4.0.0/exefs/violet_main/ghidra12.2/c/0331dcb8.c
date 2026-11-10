/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0331dcb8; name: FUN_0331dcb8
 */


void FUN_0331dcb8(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long local_38;
  long lStack_30;
  ulong local_28;
  undefined4 local_8 [2];
  
  local_8[0] = (undefined4)param_1[4];
  FUN_0331dda8(&local_38,param_1[3],param_1,local_8);
  if (local_38 != 0) {
    *param_1 = local_38;
    param_1[1] = lStack_30;
    if ((local_28 & 1) != 0) {
      piVar1 = (int *)((local_28 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if ((param_1[2] & 1U) != 0) {
      plVar6 = (long *)(param_1[2] & 0xfffffffffffffffe);
      plVar2 = plVar6 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((plVar6 != (long *)0x0) && ((int)lVar5 == 1)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    param_1[2] = local_28;
  }
  if ((local_28 & 1) != 0) {
    plVar6 = (long *)(local_28 & 0xfffffffffffffffe);
    plVar2 = plVar6 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = (int)lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  return;
}


