/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03303860; name: FUN_03303860
 */


void FUN_03303860(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined1 auStack_a8 [16];
  ulong local_98;
  undefined1 auStack_80 [16];
  ulong local_70;
  undefined1 auStack_58 [16];
  ulong local_48;
  
  FUN_03325b88(auStack_58,param_1,"maxOpenSetSizeBytes");
  uVar5 = FUN_0327462c(auStack_58);
  if ((local_48 & 1) != 0) {
    plVar7 = (long *)(local_48 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_03325b88(auStack_58,param_1,"maxSearchStateSizeBytes");
  uVar6 = FUN_0327462c(auStack_58);
  if ((local_48 & 1) != 0) {
    plVar7 = (long *)(local_48 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_03325b88(auStack_80,param_1,"bufferSizes");
  FUN_033234d0(auStack_58,auStack_80);
  if ((local_70 & 1) != 0) {
    plVar7 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_03303f50(auStack_58,uVar5,uVar6);
  FUN_03325b88(auStack_80,param_1,"maxHierarchyOpenSetSizeBytes");
  uVar5 = FUN_0327462c(auStack_80);
  if ((local_70 & 1) != 0) {
    plVar7 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_03325b88(auStack_80,param_1,"maxHierarchySearchStateSizeBytes");
  uVar6 = FUN_0327462c(auStack_80);
  if ((local_70 & 1) != 0) {
    plVar7 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_03325b88(auStack_a8,param_1,"hierarchyBufferSizes");
  FUN_033234d0(auStack_80,auStack_a8);
  if ((local_98 & 1) != 0) {
    plVar7 = (long *)(local_98 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_03303f50(auStack_80,uVar5,uVar6);
  if ((local_70 & 1) != 0) {
    plVar7 = (long *)(local_70 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_48 & 1) != 0) {
    plVar7 = (long *)(local_48 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  return;
}


