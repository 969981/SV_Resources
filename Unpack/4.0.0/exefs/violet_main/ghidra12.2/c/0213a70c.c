/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0213a70c; name: FUN_0213a70c
 */


void FUN_0213a70c(long param_1)

{
  long *plVar1;
  LightEventType *pLVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  
  plVar1 = (long *)(param_1 + 0x248);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_0213a748;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x250));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x250));
        while (*plVar1 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_0213a748;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_0213a748:
  lVar9 = *(long *)(*(long *)(param_1 + 0x1c0) + 0xf8);
  if (((lVar9 != 0) && (*(int *)(*(long *)(param_1 + 0x1c0) + 0x100) == *(int *)(lVar9 + 0x2c))) &&
     (lVar9 = FUN_00c41664(), lVar9 != 0)) {
    *(undefined1 *)(param_1 + 0x299) = 0;
    *(undefined1 *)(lVar9 + 10) = 0;
  }
  pLVar2 = (LightEventType *)(param_1 + 0x250);
  *(undefined8 *)(param_1 + 0x248) = 0;
  nn::os::SignalLightEvent(pLVar2);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_0213a79c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_0213a79c;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_0213a79c:
  plVar11 = *(long **)(param_1 + 0x208);
  lVar9 = DAT_0485a0e8;
  while( true ) {
    DAT_0485a0e8 = lVar9;
    if (plVar11 == (long *)0x0) {
      *(undefined1 *)(param_1 + 0x26a) = 0;
      lVar9 = *(long *)(*(long *)(param_1 + 0x1c0) + 0xf8);
      if (((lVar9 != 0) && (*(int *)(*(long *)(param_1 + 0x1c0) + 0x100) == *(int *)(lVar9 + 0x2c)))
         && (lVar9 = FUN_00c41664(), lVar9 != 0)) {
        bVar8 = false;
        if (*(char *)(param_1 + 0x269) != '\0') {
          bVar8 = *(char *)(param_1 + 0x26a) != '\0';
        }
        *(bool *)(lVar9 + 0xb) = bVar8;
      }
      *plVar1 = 0;
      nn::os::SignalLightEvent(pLVar2);
      return;
    }
    if (*(char *)(plVar11 + 3) != '\0') break;
LAB_0213a9ac:
    plVar11 = (long *)*plVar11;
    lVar9 = DAT_0485a0e8;
  }
  iVar6 = *(int *)((long)plVar11 + 0x1c);
  plVar3 = (long *)(lVar9 + 0xd70);
  lVar10 = nn::os::GetCurrentThread();
LAB_0213a8cc:
  if (*plVar3 == 0 && *(long *)(lVar9 + 0xd78) == 0) goto code_r0x0213a8d8;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xd80));
  do {
    if (*plVar3 != 0 || *(long *)(lVar9 + 0xd78) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xd80));
        while (*plVar3 == 0 && *(long *)(lVar9 + 0xd78) == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar8) {
            *plVar3 = lVar10;
            *(undefined8 *)(lVar9 + 0xd78) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_0213a8e0;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar8) {
      *plVar3 = lVar10;
      *(undefined8 *)(lVar9 + 0xd78) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_0213a8e0:
  lVar10 = *(long *)(lVar9 + 0x38);
  lVar12 = lVar10 + (long)iVar6 * 0x1d0;
  if (*(char *)(lVar12 + 0x1b8) != '\0') {
    *(undefined1 *)(lVar12 + 0x1b8) = 0;
    *(undefined1 *)(lVar10 + (long)iVar6 * 0x1d0 + 0x1b9) = 1;
  }
  do {
    lVar10 = *plVar3;
    lVar12 = *(long *)(lVar9 + 0xd78);
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar8) {
      *plVar3 = lVar10;
      *(long *)(lVar9 + 0xd78) = lVar12;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar4 = *plVar3;
    lVar5 = *(long *)(lVar9 + 0xd78);
    if (lVar4 != lVar10 || lVar5 != lVar12) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_0213a9a0;
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar8) {
      *plVar3 = 0;
      *(long *)(lVar9 + 0xd74) = lVar12;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar8 = true;
LAB_0213a9a0:
  if (!bVar8) {
    do {
      lVar10 = *plVar3;
      lVar12 = *(long *)(lVar9 + 0xd78);
      if (lVar10 != lVar4 || lVar12 != lVar5) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x0213a9e8;
      }
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *plVar3 = 0;
        *(long *)(lVar9 + 0xd74) = lVar5;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar8 = true;
joined_r0x0213a9e8:
    if (!bVar8) {
      do {
        lVar4 = *plVar3;
        lVar5 = *(long *)(lVar9 + 0xd78);
        if (lVar4 != lVar10 || lVar5 != lVar12) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar10 = lVar4;
          lVar12 = lVar5;
          goto joined_r0x0213a9e8;
        }
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar8) {
          *plVar3 = 0;
          *(long *)(lVar9 + 0xd74) = lVar12;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar8 = true;
      lVar10 = lVar4;
      lVar12 = lVar5;
      goto joined_r0x0213a9e8;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xd80));
  goto LAB_0213a9ac;
code_r0x0213a8d8:
  cVar7 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
  if (bVar8) {
    *plVar3 = lVar10;
    *(undefined8 *)(lVar9 + 0xd78) = 0;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_0213a8e0;
  goto LAB_0213a8cc;
}


