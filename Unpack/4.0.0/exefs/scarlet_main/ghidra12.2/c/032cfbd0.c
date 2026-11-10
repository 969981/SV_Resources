/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032cfbd0; name: FUN_032cfbd0
 */


void FUN_032cfbd0(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined2 uVar5;
  long *plVar6;
  int iVar7;
  undefined1 auStack_48 [16];
  ulong local_38;
  
  FUN_03325b88(auStack_48,param_1,&DAT_03c8f563);
  uVar5 = FUN_032d0164(auStack_48);
  if ((local_38 & 1) != 0) {
    plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  switch(uVar5) {
  case 0:
    FUN_03325b88(auStack_48,param_1,&DAT_03c8f563);
    FUN_0331e864(auStack_48,0);
    if ((local_38 & 1) != 0) {
      plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
      plVar1 = plVar6 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    FUN_03325b88(auStack_48,param_1,"numElements");
    FUN_0331e864(auStack_48,0);
    if ((local_38 & 1) == 0) {
      return;
    }
    plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      iVar7 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 1:
    FUN_03325b88(auStack_48,param_1,&DAT_03c8f563);
    FUN_0331e864(auStack_48,1);
    if ((local_38 & 1) != 0) {
      plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
      plVar1 = plVar6 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    FUN_03325b88(auStack_48,param_1,"numElements");
    FUN_0331e864(auStack_48,4);
    if ((local_38 & 1) == 0) {
      return;
    }
    plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      iVar7 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 2:
    FUN_03325b88(auStack_48,param_1,&DAT_03c8f563);
    FUN_0331e864(auStack_48,2);
    if ((local_38 & 1) != 0) {
      plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
      plVar1 = plVar6 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    FUN_03325b88(auStack_48,param_1,"numElements");
    FUN_0331e864(auStack_48,2);
    if ((local_38 & 1) == 0) {
      return;
    }
    plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      iVar7 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 3:
    FUN_03325b88(auStack_48,param_1,&DAT_03c8f563);
    FUN_0331e864(auStack_48,3);
    if ((local_38 & 1) != 0) {
      plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
      plVar1 = plVar6 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    FUN_03325b88(auStack_48,param_1,"numElements");
    FUN_0331e864(auStack_48,1);
    if ((local_38 & 1) == 0) {
      return;
    }
    plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      iVar7 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 4:
    FUN_03325b88(auStack_48,param_1,&DAT_03c8f563);
    FUN_0331e864(auStack_48,4);
    if ((local_38 & 1) != 0) {
      plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
      plVar1 = plVar6 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    FUN_03325b88(auStack_48,param_1,"numElements");
    FUN_0331e864(auStack_48,1);
    if ((local_38 & 1) == 0) {
      return;
    }
    plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      iVar7 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 5:
    FUN_03325b88(auStack_48,param_1,&DAT_03c8f563);
    FUN_0331e864(auStack_48,4);
    if ((local_38 & 1) != 0) {
      plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
      plVar1 = plVar6 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    FUN_03325b88(auStack_48,param_1,"numElements");
    FUN_0331e864(auStack_48,2);
    if ((local_38 & 1) == 0) {
      return;
    }
    plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      iVar7 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 6:
    FUN_03325b88(auStack_48,param_1,&DAT_03c8f563);
    FUN_0331e864(auStack_48,4);
    if ((local_38 & 1) != 0) {
      plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
      plVar1 = plVar6 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    FUN_03325b88(auStack_48,param_1,"numElements");
    FUN_0331e864(auStack_48,3);
    if ((local_38 & 1) == 0) {
      return;
    }
    plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      iVar7 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  case 7:
    FUN_03325b88(auStack_48,param_1,&DAT_03c8f563);
    FUN_0331e864(auStack_48,4);
    if ((local_38 & 1) != 0) {
      plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
      plVar1 = plVar6 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    FUN_03325b88(auStack_48,param_1,"numElements");
    FUN_0331e864(auStack_48,4);
    if ((local_38 & 1) == 0) {
      return;
    }
    plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      iVar7 = (int)*plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    break;
  default:
    goto switchD_032cfc5c_default;
  }
  if ((plVar6 != (long *)0x0) && (iVar7 == 1)) {
    (**(code **)(*plVar6 + 8))();
  }
switchD_032cfc5c_default:
  return;
}


