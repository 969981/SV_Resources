/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028c3a20; name: FUN_028c3a20
 */


void FUN_028c3a20(long param_1,byte param_2)

{
  long *plVar1;
  LightEventType *pLVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long local_60;
  byte local_58;
  
  plVar1 = (long *)(param_1 + 0x530);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x538);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x538) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pLVar2 = (LightEventType *)(param_1 + 0x540);
LAB_028c3a60:
  while ((lVar8 != 0 && (lVar6 != lVar8))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x538);
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x538) = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar4 = *plVar1;
    if (lVar4 != lVar8 || *(long *)(param_1 + 0x538) != lVar9) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_028c3a90;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x534) = lVar9 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_028c3a90:
  if (!bVar7) {
    lVar8 = lVar4;
    lVar9 = *(long *)(param_1 + 0x538);
    goto LAB_028c3a60;
  }
  if (*(char *)(param_1 + 0x550) == '\0') {
    plVar3 = (long *)(param_1 + 0x60);
    lVar6 = nn::os::GetCurrentThread();
    while (*plVar3 == 0) {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') goto LAB_028c3b00;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
    do {
      if (*plVar3 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
          while (*plVar3 == 0) {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar7) {
              *plVar3 = lVar6;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_028c3b00;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_028c3b00:
    *(byte *)(param_1 + 0x268) = param_2 & 1;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x68));
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x538);
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x538) = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar9 = *plVar1;
      lVar4 = *(long *)(param_1 + 0x538);
      if (lVar9 != lVar6 || lVar4 != lVar8) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_028c3bdc;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar6;
        *(long *)(param_1 + 0x534) = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
LAB_028c3bdc:
    if (!bVar7) {
      do {
        lVar6 = *plVar1;
        lVar8 = *(long *)(param_1 + 0x538);
        if (lVar6 != lVar9 || lVar8 != lVar4) {
          bVar7 = false;
          ClearExclusiveLocal();
          goto joined_r0x028c3cbc;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar9;
          *(long *)(param_1 + 0x534) = lVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
joined_r0x028c3cbc:
      if (!bVar7) {
        do {
          lVar9 = *plVar1;
          lVar4 = *(long *)(param_1 + 0x538);
          if (lVar9 != lVar6 || lVar4 != lVar8) {
            bVar7 = false;
            ClearExclusiveLocal();
            lVar6 = lVar9;
            lVar8 = lVar4;
            goto joined_r0x028c3cbc;
          }
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar6;
            *(long *)(param_1 + 0x534) = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar7 = true;
        lVar6 = lVar9;
        lVar8 = lVar4;
        goto joined_r0x028c3cbc;
      }
    }
    nn::os::SignalLightEvent(pLVar2);
    return;
  }
  do {
    lVar6 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x538);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x538) = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar9 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x538);
    if (lVar9 != lVar6 || lVar4 != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_028c3b54;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_1 + 0x534) = lVar8 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_028c3b54:
  if (!bVar7) {
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x538);
      if (lVar6 != lVar9 || lVar8 != lVar4) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x028c3c70;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x534) = lVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
joined_r0x028c3c70:
    if (!bVar7) {
      do {
        lVar9 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x538);
        if (lVar9 != lVar6 || lVar4 != lVar8) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar9;
          lVar8 = lVar4;
          goto joined_r0x028c3c70;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar6;
          *(long *)(param_1 + 0x534) = lVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
      lVar6 = lVar9;
      lVar8 = lVar4;
      goto joined_r0x028c3c70;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  local_60 = param_1;
  local_58 = param_2 & 1;
  FUN_028c3d0c(param_1,&local_60);
  return;
}


