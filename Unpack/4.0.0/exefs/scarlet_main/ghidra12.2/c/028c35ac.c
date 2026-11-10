/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028c35ac; name: FUN_028c35ac
 */


void FUN_028c35ac(undefined8 param_1,long param_2)

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
  undefined8 local_58;
  
  plVar1 = (long *)(param_2 + 0x530);
  lVar6 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar9 = *(long *)(param_2 + 0x538);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0x538) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pLVar2 = (LightEventType *)(param_2 + 0x540);
LAB_028c35ec:
  while ((lVar8 != 0 && (lVar6 != lVar8))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(param_2 + 0x538);
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar8;
        *(long *)(param_2 + 0x538) = lVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar4 = *plVar1;
    if (lVar4 != lVar8 || *(long *)(param_2 + 0x538) != lVar9) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_028c361c;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0x534) = lVar9 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_028c361c:
  if (!bVar7) {
    lVar8 = lVar4;
    lVar9 = *(long *)(param_2 + 0x538);
    goto LAB_028c35ec;
  }
  if (*(char *)(param_2 + 0x550) == '\0') {
    plVar3 = (long *)(param_2 + 0x60);
    lVar6 = nn::os::GetCurrentThread();
    while (*plVar3 == 0) {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') goto LAB_028c3688;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
    do {
      if (*plVar3 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
          while (*plVar3 == 0) {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar7) {
              *plVar3 = lVar6;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_028c3688;
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
LAB_028c3688:
    *(undefined8 *)(param_2 + 0x260) = param_1;
    *(undefined8 *)(param_2 + 0x60) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_2 + 0x538);
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar6;
        *(long *)(param_2 + 0x538) = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar9 = *plVar1;
      lVar4 = *(long *)(param_2 + 0x538);
      if (lVar9 != lVar6 || lVar4 != lVar8) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto LAB_028c3760;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar6;
        *(long *)(param_2 + 0x534) = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
LAB_028c3760:
    if (!bVar7) {
      do {
        lVar6 = *plVar1;
        lVar8 = *(long *)(param_2 + 0x538);
        if (lVar6 != lVar9 || lVar8 != lVar4) {
          bVar7 = false;
          ClearExclusiveLocal();
          goto joined_r0x028c3840;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar9;
          *(long *)(param_2 + 0x534) = lVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
joined_r0x028c3840:
      if (!bVar7) {
        do {
          lVar9 = *plVar1;
          lVar4 = *(long *)(param_2 + 0x538);
          if (lVar9 != lVar6 || lVar4 != lVar8) {
            bVar7 = false;
            ClearExclusiveLocal();
            lVar6 = lVar9;
            lVar8 = lVar4;
            goto joined_r0x028c3840;
          }
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar6;
            *(long *)(param_2 + 0x534) = lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar7 = true;
        lVar6 = lVar9;
        lVar8 = lVar4;
        goto joined_r0x028c3840;
      }
    }
    nn::os::SignalLightEvent(pLVar2);
    return;
  }
  do {
    lVar6 = *plVar1;
    lVar8 = *(long *)(param_2 + 0x538);
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_2 + 0x538) = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar9 = *plVar1;
    lVar4 = *(long *)(param_2 + 0x538);
    if (lVar9 != lVar6 || lVar4 != lVar8) {
      bVar7 = false;
      ClearExclusiveLocal();
      goto LAB_028c36d8;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar7) {
      *plVar1 = lVar6;
      *(long *)(param_2 + 0x534) = lVar8 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar7 = true;
LAB_028c36d8:
  if (!bVar7) {
    do {
      lVar6 = *plVar1;
      lVar8 = *(long *)(param_2 + 0x538);
      if (lVar6 != lVar9 || lVar8 != lVar4) {
        bVar7 = false;
        ClearExclusiveLocal();
        goto joined_r0x028c37f4;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9;
        *(long *)(param_2 + 0x534) = lVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar7 = true;
joined_r0x028c37f4:
    if (!bVar7) {
      do {
        lVar9 = *plVar1;
        lVar4 = *(long *)(param_2 + 0x538);
        if (lVar9 != lVar6 || lVar4 != lVar8) {
          bVar7 = false;
          ClearExclusiveLocal();
          lVar6 = lVar9;
          lVar8 = lVar4;
          goto joined_r0x028c37f4;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar6;
          *(long *)(param_2 + 0x534) = lVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar7 = true;
      lVar6 = lVar9;
      lVar8 = lVar4;
      goto joined_r0x028c37f4;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  local_60 = param_2;
  local_58 = param_1;
  FUN_028c3890(param_2,&local_60);
  return;
}


