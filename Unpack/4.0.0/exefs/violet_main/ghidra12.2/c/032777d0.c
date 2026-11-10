/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032777d0; name: FUN_032777d0
 */


void FUN_032777d0(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  ulong local_68;
  undefined1 auStack_50 [16];
  ulong local_40;
  undefined1 *local_28;
  
  FUN_03325b88(auStack_50,param_1,"childShape");
  FUN_03325b88(auStack_78,param_1,"coreShape");
  local_28 = auStack_78;
  FUN_0331deb8(&local_28,local_70,auStack_50);
  if ((local_68 & 1) != 0) {
    plVar5 = (long *)(local_68 & 0xfffffffffffffffe);
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if ((local_40 & 1) != 0) {
    plVar5 = (long *)(local_40 & 0xfffffffffffffffe);
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  FUN_03325b88(auStack_50,param_1,"childShapeSize");
  FUN_03325b88(auStack_78,param_1,"coreShapeSize");
  local_28 = auStack_78;
  FUN_0331deb8(&local_28,local_70,auStack_50);
  if ((local_68 & 1) != 0) {
    plVar5 = (long *)(local_68 & 0xfffffffffffffffe);
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if ((local_40 & 1) != 0) {
    plVar5 = (long *)(local_40 & 0xfffffffffffffffe);
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  return;
}


