/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016a7f0c; name: FUN_016a7f0c
 */


void FUN_016a7f0c(long param_1,char *param_2,byte param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  
  if (*param_2 == '\0') {
    return;
  }
  plVar1 = (long *)(param_1 + 0xd70);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0xd78) == 0) {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0xd78) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_016a7f54;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd80));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0xd78) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd80));
        while (*plVar1 == 0 && *(long *)(param_1 + 0xd78) == 0) {
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar6;
            *(undefined8 *)(param_1 + 0xd78) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_016a7f54;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_1 + 0xd78) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_016a7f54:
  iVar4 = *(int *)(param_2 + 4);
  lVar6 = *(long *)(param_1 + 0x38);
  lVar8 = lVar6 + (long)iVar4 * 0x1d0;
  if (*(byte *)(lVar8 + 0x1b8) != (param_3 & 1)) {
    *(byte *)(lVar8 + 0x1b8) = param_3 & 1;
    *(undefined1 *)(lVar6 + (long)iVar4 * 0x1d0 + 0x1b9) = 1;
  }
  do {
    lVar6 = *plVar1;
    lVar8 = *(long *)(param_1 + 0xd78);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0xd78) = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0xd78);
    if (lVar2 != lVar6 || lVar3 != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_016a8010;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = 0;
      *(long *)(param_1 + 0xd74) = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_016a8010:
  if (!bVar7) {
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_1 + 0xd78);
      if (lVar6 != lVar2 || lVar8 != lVar3) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x016a806c;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = 0;
        *(long *)(param_1 + 0xd74) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
joined_r0x016a806c:
    if (!bVar7) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0xd78);
        if (lVar2 != lVar6 || lVar3 != lVar8) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar2;
          lVar8 = lVar3;
          goto joined_r0x016a806c;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = 0;
          *(long *)(param_1 + 0xd74) = lVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
      lVar6 = lVar2;
      lVar8 = lVar3;
      goto joined_r0x016a806c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xd80));
  return;
}


