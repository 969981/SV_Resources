/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c3d68; name: FUN_031c3d68
 */


void FUN_031c3d68(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = param_1 + 1;
  *param_1 = &PTR_FUN_046a3f28;
  memset(plVar6,0,0x48);
  if (DAT_04883298 == 0) {
    *plVar6 = (long)&DAT_04883290;
  }
  else {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x48832a0,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_048832a0 = DAT_048832a0 + 1;
      }
    } while (cVar2 != '\0');
    plVar4 = (long *)*plVar6;
    *plVar6 = (long)&DAT_04883290;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar1 = plVar4 + 2;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  if (DAT_04883298 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x48832a0,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_048832a0 = DAT_048832a0 + 1;
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)param_1[2];
  param_1[2] = &DAT_04883290;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if (DAT_04883298 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x48832a0,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_048832a0 = DAT_048832a0 + 1;
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)param_1[3];
  param_1[3] = &DAT_04883290;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if (DAT_04883298 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x48832a0,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_048832a0 = DAT_048832a0 + 1;
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)param_1[4];
  param_1[4] = &DAT_04883290;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if (DAT_04883298 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x48832a0,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_048832a0 = DAT_048832a0 + 1;
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)param_1[5];
  param_1[5] = &DAT_04883290;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if (DAT_04883298 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x48832a0,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_048832a0 = DAT_048832a0 + 1;
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)param_1[6];
  param_1[6] = &DAT_04883290;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if (DAT_04883298 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x48832a0,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_048832a0 = DAT_048832a0 + 1;
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)param_1[7];
  param_1[7] = &DAT_04883290;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if (DAT_04883298 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x48832a0,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_048832a0 = DAT_048832a0 + 1;
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)param_1[8];
  param_1[8] = &DAT_04883290;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if (DAT_04883298 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x48832a0,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_048832a0 = DAT_048832a0 + 1;
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)param_1[9];
  param_1[9] = &DAT_04883290;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  if (DAT_048832b8 != 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x48832c0,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_048832c0 = DAT_048832c0 + 1;
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)*plVar6;
  *plVar6 = (long)&DAT_048832b0;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar6 = plVar4 + 2;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x031c4164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x18))();
      return;
    }
  }
  return;
}


