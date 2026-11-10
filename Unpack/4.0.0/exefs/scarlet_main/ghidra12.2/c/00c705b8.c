/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c705b8; name: FUN_00c705b8
 */


void FUN_00c705b8(long param_1,byte param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  param_2 = param_2 & 1;
  plVar10 = (long *)(param_1 + 0x248);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar6) {
      *plVar10 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00c705f8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x250));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x250));
        while (*plVar10 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00c705f8;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar6) {
      *plVar10 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00c705f8:
  plVar10 = *(long **)(param_1 + 0x208);
  lVar7 = DAT_0485a0e8;
  while( true ) {
    DAT_0485a0e8 = lVar7;
    if (plVar10 == (long *)0x0) {
      *(byte *)(param_1 + 0x26a) = param_2;
      lVar7 = *(long *)(*(long *)(param_1 + 0x1c0) + 0xf8);
      if (((lVar7 != 0) && (*(int *)(*(long *)(param_1 + 0x1c0) + 0x100) == *(int *)(lVar7 + 0x2c)))
         && (lVar7 = FUN_00c41664(), lVar7 != 0)) {
        bVar6 = false;
        if (*(char *)(param_1 + 0x269) != '\0') {
          bVar6 = *(char *)(param_1 + 0x26a) != '\0';
        }
        *(bool *)(lVar7 + 0xb) = bVar6;
      }
      *(undefined8 *)(param_1 + 0x248) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x250));
      return;
    }
    if (*(char *)(plVar10 + 3) != '\0') break;
LAB_00c707c0:
    plVar10 = (long *)*plVar10;
    lVar7 = DAT_0485a0e8;
  }
  plVar1 = (long *)(lVar7 + 0xd70);
  iVar4 = *(int *)((long)plVar10 + 0x1c);
  lVar8 = nn::os::GetCurrentThread();
LAB_00c706dc:
  if (*plVar1 == 0 && *(long *)(lVar7 + 0xd78) == 0) goto code_r0x00c706e8;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0xd80));
  do {
    if (*plVar1 != 0 || *(long *)(lVar7 + 0xd78) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0xd80));
        while (*plVar1 == 0 && *(long *)(lVar7 + 0xd78) == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar8;
            *(undefined8 *)(lVar7 + 0xd78) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00c706f0;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      *(undefined8 *)(lVar7 + 0xd78) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00c706f0:
  lVar8 = *(long *)(lVar7 + 0x38);
  lVar9 = lVar8 + (long)iVar4 * 0x1d0;
  if (*(byte *)(lVar9 + 0x1b8) != param_2) {
    *(byte *)(lVar9 + 0x1b8) = param_2;
    *(undefined1 *)(lVar8 + (long)iVar4 * 0x1d0 + 0x1b9) = 1;
  }
  do {
    lVar8 = *plVar1;
    lVar9 = *(long *)(lVar7 + 0xd78);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      *(long *)(lVar7 + 0xd78) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(lVar7 + 0xd78);
    if (lVar2 != lVar8 || lVar3 != lVar9) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_00c707b4;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      *(long *)(lVar7 + 0xd74) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar6 = true;
LAB_00c707b4:
  if (!bVar6) {
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(lVar7 + 0xd78);
      if (lVar8 != lVar2 || lVar9 != lVar3) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x00c707f8;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = 0;
        *(long *)(lVar7 + 0xd74) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar6 = true;
joined_r0x00c707f8:
    if (!bVar6) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(lVar7 + 0xd78);
        if (lVar2 != lVar8 || lVar3 != lVar9) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar8 = lVar2;
          lVar9 = lVar3;
          goto joined_r0x00c707f8;
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = 0;
          *(long *)(lVar7 + 0xd74) = lVar9;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar6 = true;
      lVar8 = lVar2;
      lVar9 = lVar3;
      goto joined_r0x00c707f8;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0xd80));
  goto LAB_00c707c0;
code_r0x00c706e8:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar6) {
    *plVar1 = lVar8;
    *(undefined8 *)(lVar7 + 0xd78) = 0;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00c706f0;
  goto LAB_00c706dc;
}


