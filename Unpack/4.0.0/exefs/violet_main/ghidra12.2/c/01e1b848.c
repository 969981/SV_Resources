/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1b848; name: FUN_01e1b848
 */


void FUN_01e1b848(undefined8 *param_1,long param_2)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  short sVar9;
  long lVar10;
  bool bVar11;
  
  plVar8 = (long *)(param_2 + 0xa0);
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar11) {
      *plVar8 = lVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01e1b888;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xa8));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xa8));
        while (*plVar8 == 0) {
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar11) {
            *plVar8 = lVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01e1b888;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar11) {
      *plVar8 = lVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01e1b888:
  plVar8 = *(long **)(param_2 + 0x40);
  plVar2 = *(long **)(param_2 + 0x48);
  do {
    if (plVar8 == plVar2) {
      *(undefined8 *)(param_2 + 0xa0) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xa8));
      return;
    }
    lVar5 = *plVar8;
    if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar5 + 0x1a);
      sVar9 = *(short *)(lVar5 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01e1b948;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01e1b948:
          bVar11 = false;
        }
        if (bVar11) {
          lVar5 = *(long *)(lVar5 + 0x10);
          if (lVar5 != 0) {
            plVar7 = (long *)(lVar5 + 0xe8);
            lVar10 = *plVar7;
            lVar6 = nn::os::GetCurrentThread();
            if (lVar6 != lVar10) {
              lVar6 = nn::os::GetCurrentThread();
              goto LAB_01e1b990;
            }
            bVar11 = true;
            goto LAB_01e1b9a4;
          }
          break;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
LAB_01e1b89c:
    plVar8 = plVar8 + 2;
  } while( true );
LAB_01e1b990:
  if (*plVar7 == 0) goto code_r0x01e1b998;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0xf0));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0xf0));
        while (*plVar7 == 0) {
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar11) {
            *plVar7 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01e1b9a0;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar11) {
      *plVar7 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01e1b9a0:
  bVar11 = false;
LAB_01e1b9a4:
  plVar7 = (long *)FUN_01e1b4e0(*(undefined8 *)(lVar5 + 0x100),*(undefined8 *)(lVar5 + 0x108));
  if ((*(long **)(lVar5 + 0x108) == plVar7) || (*plVar7 == 0)) {
    plVar7 = (long *)FUN_01e1b4e0(*(undefined8 *)(lVar5 + 0x138),*(undefined8 *)(lVar5 + 0x140));
    if (*(long **)(lVar5 + 0x140) == plVar7) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      if (*plVar7 != 0) {
        lVar6 = *plVar7 + -0x20;
      }
    }
  }
  else {
    lVar6 = *plVar7 + -0x20;
  }
  if (!bVar11) {
    *(undefined8 *)(lVar5 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0xf0));
  }
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x143) != '\0')) {
    FUN_00d0a71c(param_1,plVar8);
  }
  (**(code **)(*(long *)(lVar5 + -0x28) + 0x60))((long *)(lVar5 + -0x28));
  goto LAB_01e1b89c;
code_r0x01e1b998:
  cVar4 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar11) {
    *plVar7 = lVar6;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01e1b9a0;
  goto LAB_01e1b990;
}


