/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01db0c98; name: FUN_01db0c98
 */


void FUN_01db0c98(long param_1)

{
  long *plVar1;
  LightEventType *pLVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long local_60 [2];
  
  plVar1 = (long *)(param_1 + 0x530);
  lVar7 = nn::os::GetCurrentThread();
  do {
    lVar9 = *plVar1;
    lVar10 = *(long *)(param_1 + 0x538);
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x538) = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  pLVar2 = (LightEventType *)(param_1 + 0x540);
LAB_01db0cd4:
  while ((lVar9 != 0 && (lVar7 != lVar9))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      lVar9 = *plVar1;
      lVar10 = *(long *)(param_1 + 0x538);
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x538) = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  do {
    lVar5 = *plVar1;
    if (lVar5 != lVar9 || *(long *)(param_1 + 0x538) != lVar10) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_01db0d04;
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x534) = lVar10 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar8 = true;
LAB_01db0d04:
  if (!bVar8) {
    lVar9 = lVar5;
    lVar10 = *(long *)(param_1 + 0x538);
    goto LAB_01db0cd4;
  }
  if (*(char *)(param_1 + 0x550) == '\0') {
    plVar3 = (long *)(param_1 + 0xb0);
    lVar7 = nn::os::GetCurrentThread();
    while (*plVar3 == 0 && *(long *)(param_1 + 0xb8) == 0) {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *plVar3 = lVar7;
        *(undefined8 *)(param_1 + 0xb8) = 0;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') goto LAB_01db0d74;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc0));
    do {
      if (*plVar3 != 0 || *(long *)(param_1 + 0xb8) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc0));
          while (*plVar3 == 0 && *(long *)(param_1 + 0xb8) == 0) {
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar8) {
              *plVar3 = lVar7;
              *(undefined8 *)(param_1 + 0xb8) = 0;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_01db0d74;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *plVar3 = lVar7;
        *(undefined8 *)(param_1 + 0xb8) = 0;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_01db0d74:
    plVar4 = (long *)(param_1 + 0x60);
    lVar7 = nn::os::GetCurrentThread();
    while (*plVar4 == 0) {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar8) {
        *plVar4 = lVar7;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') goto LAB_01db0d90;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
    do {
      if (*plVar4 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
          while (*plVar4 == 0) {
            cVar6 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar8) {
              *plVar4 = lVar7;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_01db0d90;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar8) {
        *plVar4 = lVar7;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_01db0d90:
    FUN_018dea00(*(undefined8 *)(param_1 + 0x4a8));
    FUN_01db1128(*(undefined8 *)(param_1 + 0x4a8));
    *(undefined8 *)(param_1 + 0x60) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x68));
    do {
      lVar7 = *plVar3;
      lVar9 = *(long *)(param_1 + 0xb8);
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *plVar3 = lVar7;
        *(long *)(param_1 + 0xb8) = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar10 = *plVar3;
      lVar5 = *(long *)(param_1 + 0xb8);
      if (lVar10 != lVar7 || lVar5 != lVar9) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto LAB_01db0ebc;
      }
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *plVar3 = 0;
        *(long *)(param_1 + 0xb4) = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar8 = true;
LAB_01db0ebc:
    if (!bVar8) {
      do {
        lVar7 = *plVar3;
        lVar9 = *(long *)(param_1 + 0xb8);
        if (lVar7 != lVar10 || lVar9 != lVar5) {
          bVar8 = false;
          ClearExclusiveLocal();
          goto joined_r0x01db1060;
        }
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar8) {
          *plVar3 = 0;
          *(long *)(param_1 + 0xb4) = lVar5;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar8 = true;
joined_r0x01db1060:
      if (!bVar8) {
        do {
          lVar10 = *plVar3;
          lVar5 = *(long *)(param_1 + 0xb8);
          if (lVar10 != lVar7 || lVar5 != lVar9) {
            bVar8 = false;
            ClearExclusiveLocal();
            lVar7 = lVar10;
            lVar9 = lVar5;
            goto joined_r0x01db1060;
          }
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar8) {
            *plVar3 = 0;
            *(long *)(param_1 + 0xb4) = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar8 = true;
        lVar7 = lVar10;
        lVar9 = lVar5;
        goto joined_r0x01db1060;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc0));
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x538);
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x538) = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar10 = *plVar1;
      lVar5 = *(long *)(param_1 + 0x538);
      if (lVar10 != lVar7 || lVar5 != lVar9) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto LAB_01db0f04;
      }
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x534) = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar8 = true;
LAB_01db0f04:
    if (!bVar8) {
      do {
        lVar7 = *plVar1;
        lVar9 = *(long *)(param_1 + 0x538);
        if (lVar7 != lVar10 || lVar9 != lVar5) {
          bVar8 = false;
          ClearExclusiveLocal();
          goto joined_r0x01db0fe4;
        }
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar10;
          *(long *)(param_1 + 0x534) = lVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar8 = true;
joined_r0x01db0fe4:
      if (!bVar8) {
        do {
          lVar10 = *plVar1;
          lVar5 = *(long *)(param_1 + 0x538);
          if (lVar10 != lVar7 || lVar5 != lVar9) {
            bVar8 = false;
            ClearExclusiveLocal();
            lVar7 = lVar10;
            lVar9 = lVar5;
            goto joined_r0x01db0fe4;
          }
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar7;
            *(long *)(param_1 + 0x534) = lVar9 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar8 = true;
        lVar7 = lVar10;
        lVar9 = lVar5;
        goto joined_r0x01db0fe4;
      }
    }
    nn::os::SignalLightEvent(pLVar2);
    return;
  }
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x538);
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x538) = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar10 = *plVar1;
    lVar5 = *(long *)(param_1 + 0x538);
    if (lVar10 != lVar7 || lVar5 != lVar9) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_01db0df0;
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x534) = lVar9 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar8 = true;
LAB_01db0df0:
  if (!bVar8) {
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x538);
      if (lVar7 != lVar10 || lVar9 != lVar5) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x01db0f98;
      }
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar10;
        *(long *)(param_1 + 0x534) = lVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar8 = true;
joined_r0x01db0f98:
    if (!bVar8) {
      do {
        lVar10 = *plVar1;
        lVar5 = *(long *)(param_1 + 0x538);
        if (lVar10 != lVar7 || lVar5 != lVar9) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar7 = lVar10;
          lVar9 = lVar5;
          goto joined_r0x01db0f98;
        }
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar7;
          *(long *)(param_1 + 0x534) = lVar9 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar8 = true;
      lVar7 = lVar10;
      lVar9 = lVar5;
      goto joined_r0x01db0f98;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  local_60[0] = param_1;
  FUN_01db10a0(param_1,local_60);
  return;
}


