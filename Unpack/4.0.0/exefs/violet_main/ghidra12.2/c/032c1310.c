/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032c1310; name: FUN_032c1310
 */


void FUN_032c1310(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulong local_18;
  
  local_28 = *param_1;
  uStack_20 = param_1[1];
  local_18 = param_1[2];
  if ((local_18 & 1) == 0) {
    local_40 = *param_1;
    uStack_38 = param_1[1];
    local_30 = local_18;
  }
  else {
    piVar1 = (int *)((local_18 & 0xfffffffffffffffe) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uStack_38 = param_1[1];
    local_30 = param_1[2];
    local_40 = *param_1;
    if ((local_30 & 1) != 0) {
      piVar1 = (int *)((local_30 & 0xfffffffffffffffe) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  FUN_032c1410(&local_28,param_2,&local_40,param_3);
  if ((local_30 & 1) != 0) {
    plVar6 = (long *)(local_30 & 0xfffffffffffffffe);
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
  if ((local_18 & 1) != 0) {
    plVar6 = (long *)(local_18 & 0xfffffffffffffffe);
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


