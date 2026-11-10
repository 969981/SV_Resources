/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032a75d0; name: FUN_032a75d0
 */


void FUN_032a75d0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 local_50;
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],"flags_old","",1), uVar5 < 2)) {
    local_30 = 0;
    local_28 = 0;
    local_38 = 0;
  }
  else {
    FUN_031e32f0(&local_38,param_1,uVar5);
  }
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],"flags","",1), uVar5 < 2)) {
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_031e7578(&local_38,&local_50);
  }
  else {
    FUN_031e32f0(&local_50,param_1,uVar5);
    uVar5 = local_40;
    FUN_031e7578(&local_38,&local_50);
    if ((uVar5 & 1) != 0) {
      plVar6 = (long *)(uVar5 & 0xfffffffffffffffe);
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
  }
  if ((local_28 & 1) != 0) {
    plVar6 = (long *)(local_28 & 0xfffffffffffffffe);
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
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],"type_old","",1), uVar5 < 2)) {
    local_30 = 0;
    local_28 = 0;
    local_38 = 0;
  }
  else {
    FUN_031e32f0(&local_38,param_1,uVar5);
  }
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],&DAT_03c8f563,&DAT_03c8f567,1), uVar5 < 2)
     ) {
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_031e7578(&local_38,&local_50);
  }
  else {
    FUN_031e32f0(&local_50,param_1,uVar5);
    uVar5 = local_40;
    FUN_031e7578(&local_38,&local_50);
    if ((uVar5 & 1) != 0) {
      plVar6 = (long *)(uVar5 & 0xfffffffffffffffe);
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
  }
  if ((local_28 & 1) != 0) {
    plVar6 = (long *)(local_28 & 0xfffffffffffffffe);
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
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],"numShapeKeyBits_old","",1), uVar5 < 2)) {
    local_30 = 0;
    local_28 = 0;
    local_38 = 0;
  }
  else {
    FUN_031e32f0(&local_38,param_1,uVar5);
  }
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],"numShapeKeyBits","",1), uVar5 < 2)) {
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_031e7578(&local_38,&local_50);
  }
  else {
    FUN_031e32f0(&local_50,param_1,uVar5);
    uVar5 = local_40;
    FUN_031e7578(&local_38,&local_50);
    if ((uVar5 & 1) != 0) {
      plVar6 = (long *)(uVar5 & 0xfffffffffffffffe);
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
  }
  if ((local_28 & 1) != 0) {
    plVar6 = (long *)(local_28 & 0xfffffffffffffffe);
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
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],"dispatchType_old","",1), uVar5 < 2)) {
    local_30 = 0;
    local_28 = 0;
    local_38 = 0;
  }
  else {
    FUN_031e32f0(&local_38,param_1,uVar5);
  }
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],"dispatchType","",1), uVar5 < 2)) {
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_031e7578(&local_38,&local_50);
  }
  else {
    FUN_031e32f0(&local_50,param_1,uVar5);
    uVar5 = local_40;
    FUN_031e7578(&local_38,&local_50);
    if ((uVar5 & 1) != 0) {
      plVar6 = (long *)(uVar5 & 0xfffffffffffffffe);
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
  }
  if ((local_28 & 1) != 0) {
    plVar6 = (long *)(local_28 & 0xfffffffffffffffe);
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
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],"convexRadius_old","",1), uVar5 < 2)) {
    local_30 = 0;
    local_28 = 0;
    local_38 = 0;
  }
  else {
    FUN_031e32f0(&local_38,param_1,uVar5);
  }
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],"convexRadius","",1), uVar5 < 2)) {
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_031e7578(&local_38,&local_50);
  }
  else {
    FUN_031e32f0(&local_50,param_1,uVar5);
    uVar5 = local_40;
    FUN_031e7578(&local_38,&local_50);
    if ((uVar5 & 1) != 0) {
      plVar6 = (long *)(uVar5 & 0xfffffffffffffffe);
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
  }
  if ((local_28 & 1) != 0) {
    plVar6 = (long *)(local_28 & 0xfffffffffffffffe);
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
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],"userData_old","",1), uVar5 < 2)) {
    local_30 = 0;
    local_28 = 0;
    local_38 = 0;
  }
  else {
    FUN_031e32f0(&local_38,param_1,uVar5);
  }
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],"userData","",1), uVar5 < 2)) {
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_031e7578(&local_38,&local_50);
  }
  else {
    FUN_031e32f0(&local_50,param_1,uVar5);
    uVar5 = local_40;
    FUN_031e7578(&local_38,&local_50);
    if ((uVar5 & 1) != 0) {
      plVar6 = (long *)(uVar5 & 0xfffffffffffffffe);
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
  }
  if ((local_28 & 1) != 0) {
    plVar6 = (long *)(local_28 & 0xfffffffffffffffe);
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
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],"properties_old","",1), uVar5 < 2)) {
    local_30 = 0;
    local_28 = 0;
    local_38 = 0;
  }
  else {
    FUN_031e32f0(&local_38,param_1,uVar5);
  }
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],"properties","",1), uVar5 < 2)) {
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_031e7578(&local_38,&local_50);
  }
  else {
    FUN_031e32f0(&local_50,param_1,uVar5);
    uVar5 = local_40;
    FUN_031e7578(&local_38,&local_50);
    if ((uVar5 & 1) != 0) {
      plVar6 = (long *)(uVar5 & 0xfffffffffffffffe);
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
  }
  if ((local_28 & 1) != 0) {
    plVar6 = (long *)(local_28 & 0xfffffffffffffffe);
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
  if ((*param_1 == 0) ||
     (uVar5 = FUN_031e198c(param_1[1],"maxAllowedPenetration_old","",1), uVar5 < 2)) {
    local_30 = 0;
    local_28 = 0;
    local_38 = 0;
  }
  else {
    FUN_031e32f0(&local_38,param_1,uVar5);
  }
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],"maxAllowedPenetration","",1), uVar5 < 2))
  {
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_031e7578(&local_38,&local_50);
  }
  else {
    FUN_031e32f0(&local_50,param_1,uVar5);
    uVar5 = local_40;
    FUN_031e7578(&local_38,&local_50);
    if ((uVar5 & 1) != 0) {
      plVar6 = (long *)(uVar5 & 0xfffffffffffffffe);
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
  }
  if ((local_28 & 1) != 0) {
    plVar6 = (long *)(local_28 & 0xfffffffffffffffe);
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
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],"vertices_old","",1), uVar5 < 2)) {
    local_30 = 0;
    local_28 = 0;
    local_38 = 0;
  }
  else {
    FUN_031e32f0(&local_38,param_1,uVar5);
  }
  if ((*param_1 == 0) || (uVar5 = FUN_031e198c(param_1[1],"vertices","",1), uVar5 < 2)) {
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_031e7578(&local_38,&local_50);
  }
  else {
    FUN_031e32f0(&local_50,param_1,uVar5);
    uVar5 = local_40;
    FUN_031e7578(&local_38,&local_50);
    if ((uVar5 & 1) != 0) {
      plVar6 = (long *)(uVar5 & 0xfffffffffffffffe);
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
  }
  if ((local_28 & 1) != 0) {
    plVar6 = (long *)(local_28 & 0xfffffffffffffffe);
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
  return;
}


