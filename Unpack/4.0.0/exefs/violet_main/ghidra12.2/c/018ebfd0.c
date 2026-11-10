/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018ebfd0; name: FUN_018ebfd0
 */


void FUN_018ebfd0(long param_1)

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
  
  FUN_018ec254();
  plVar10 = (long *)(param_1 + 0x248);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar6) {
      *plVar10 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_018ec010;
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
          if (cVar5 == '\0') goto LAB_018ec010;
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
LAB_018ec010:
  plVar10 = *(long **)(param_1 + 0x208);
  lVar7 = DAT_0485a0e8;
  while( true ) {
    DAT_0485a0e8 = lVar7;
    if (plVar10 == (long *)0x0) {
      *(undefined1 *)(param_1 + 0x26a) = 1;
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
LAB_018ec1dc:
    plVar10 = (long *)*plVar10;
    lVar7 = DAT_0485a0e8;
  }
  plVar1 = (long *)(lVar7 + 0xd70);
  iVar4 = *(int *)((long)plVar10 + 0x1c);
  lVar8 = nn::os::GetCurrentThread();
LAB_018ec0fc:
  if (*plVar1 == 0 && *(long *)(lVar7 + 0xd78) == 0) goto code_r0x018ec108;
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
          if (cVar5 == '\0') goto LAB_018ec110;
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
LAB_018ec110:
  lVar8 = *(long *)(lVar7 + 0x38);
  lVar9 = lVar8 + (long)iVar4 * 0x1d0;
  if (*(char *)(lVar9 + 0x1b8) != '\x01') {
    *(undefined1 *)(lVar9 + 0x1b8) = 1;
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
      goto LAB_018ec1d0;
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
LAB_018ec1d0:
  if (!bVar6) {
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(lVar7 + 0xd78);
      if (lVar8 != lVar2 || lVar9 != lVar3) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x018ec214;
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
joined_r0x018ec214:
    if (!bVar6) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(lVar7 + 0xd78);
        if (lVar2 != lVar8 || lVar3 != lVar9) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar8 = lVar2;
          lVar9 = lVar3;
          goto joined_r0x018ec214;
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
      goto joined_r0x018ec214;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0xd80));
  goto LAB_018ec1dc;
code_r0x018ec108:
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar6) {
    *plVar1 = lVar8;
    *(undefined8 *)(lVar7 + 0xd78) = 0;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_018ec110;
  goto LAB_018ec0fc;
}


