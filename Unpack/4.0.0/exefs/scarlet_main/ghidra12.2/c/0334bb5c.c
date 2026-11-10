/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0334bb5c; name: FUN_0334bb5c
 */


void FUN_0334bb5c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = (long *)param_1[6];
  *param_1 = (long)&PTR_LAB_047accd0;
  if (plVar7 != (long *)0x0) {
    if (-1 < (int)plVar7[3]) {
      lVar5 = plVar7[2];
      nn::os::LockMutex((MutexType *)(lVar5 + 0x188));
      *(undefined8 *)(*(long *)(plVar7[2] + 0x1a8) + (long)(int)plVar7[3] * 0x10) = 0;
      plVar4 = (long *)plVar7[2];
      plVar7[2] = 0;
      if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
        plVar1 = plVar4 + 2;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))();
        }
      }
      *(undefined4 *)(plVar7 + 3) = 0xffffffff;
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x188));
    }
    plVar4 = (long *)plVar7[2];
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
    if ((long *)plVar7[1] != (long *)0x0) {
      (**(code **)(*(long *)plVar7[1] + 8))();
    }
    plVar4 = (long *)*plVar7;
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
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,plVar7,0);
  }
  plVar7 = (long *)param_1[5];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar4 = plVar7 + 2;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  plVar7 = (long *)param_1[4];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar4 = plVar7 + 2;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  plVar7 = (long *)param_1[3];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar4 = plVar7 + 2;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


