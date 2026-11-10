/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018de2e0; name: FUN_018de2e0
 */


void FUN_018de2e0(long param_1)

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
LAB_018de31c:
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
      goto LAB_018de34c;
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
LAB_018de34c:
  if (!bVar8) {
    lVar9 = lVar5;
    lVar10 = *(long *)(param_1 + 0x538);
    goto LAB_018de31c;
  }
  if (*(char *)(param_1 + 0x550) != '\0') {
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
        goto LAB_018de538;
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
LAB_018de538:
    if (!bVar8) {
      do {
        lVar7 = *plVar1;
        lVar9 = *(long *)(param_1 + 0x538);
        if (lVar7 != lVar10 || lVar9 != lVar5) {
          bVar8 = false;
          ClearExclusiveLocal();
          goto joined_r0x018de62c;
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
joined_r0x018de62c:
      if (!bVar8) {
        do {
          lVar10 = *plVar1;
          lVar5 = *(long *)(param_1 + 0x538);
          if (lVar10 != lVar7 || lVar5 != lVar9) {
            bVar8 = false;
            ClearExclusiveLocal();
            lVar7 = lVar10;
            lVar9 = lVar5;
            goto joined_r0x018de62c;
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
        goto joined_r0x018de62c;
      }
    }
    nn::os::SignalLightEvent(pLVar2);
    local_60[0] = param_1;
    FUN_018deb8c(param_1,local_60);
    return;
  }
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
    if (cVar6 == '\0') goto LAB_018de388;
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
          if (cVar6 == '\0') goto LAB_018de388;
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
LAB_018de388:
  plVar4 = (long *)(param_1 + 0x60);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar4 == 0) {
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar8) {
      *plVar4 = lVar7;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_018de3a4;
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
          if (cVar6 == '\0') goto LAB_018de3a4;
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
LAB_018de3a4:
  FUN_018dea00(*(undefined8 *)(param_1 + 0x4a8));
  FUN_018de6e8(*(undefined8 *)(param_1 + 0x4a8));
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
      goto LAB_018de4c4;
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
LAB_018de4c4:
  if (!bVar8) {
    do {
      lVar7 = *plVar3;
      lVar9 = *(long *)(param_1 + 0xb8);
      if (lVar7 != lVar10 || lVar9 != lVar5) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x018de69c;
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
joined_r0x018de69c:
    if (!bVar8) {
      do {
        lVar10 = *plVar3;
        lVar5 = *(long *)(param_1 + 0xb8);
        if (lVar10 != lVar7 || lVar5 != lVar9) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar7 = lVar10;
          lVar9 = lVar5;
          goto joined_r0x018de69c;
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
      goto joined_r0x018de69c;
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
      goto LAB_018de50c;
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
LAB_018de50c:
  if (!bVar8) {
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x538);
      if (lVar7 != lVar10 || lVar9 != lVar5) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x018de5b8;
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
joined_r0x018de5b8:
    if (!bVar8) {
      do {
        lVar10 = *plVar1;
        lVar5 = *(long *)(param_1 + 0x538);
        if (lVar10 != lVar7 || lVar5 != lVar9) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar7 = lVar10;
          lVar9 = lVar5;
          goto joined_r0x018de5b8;
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
      goto joined_r0x018de5b8;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  return;
}


