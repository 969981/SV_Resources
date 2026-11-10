/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018e9808; name: FUN_018e9808
 */


/* WARNING: Removing unreachable block (ram,0x018e987c) */

void FUN_018e9808(long param_1,byte param_2)

{
  long *plVar1;
  LightEventType *pLVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  long local_60;
  byte local_58;
  
  plVar1 = (long *)(param_1 + 0x530);
  lVar7 = nn::os::GetCurrentThread();
  do {
    lVar8 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x538);
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x538) = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  pLVar2 = (LightEventType *)(param_1 + 0x540);
LAB_018e9848:
  while ((lVar8 != 0 && (lVar7 != lVar8))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      lVar8 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x538);
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar8;
        *(long *)(param_1 + 0x538) = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  do {
    if (*plVar1 != lVar8 || *(long *)(param_1 + 0x538) != lVar9) goto LAB_018e9880;
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x534) = lVar9 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar5 = param_2 & 1;
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x538);
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x538) = lVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar9 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x538);
    if (lVar9 != lVar7 || lVar4 != lVar8) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto joined_r0x018e9920;
    }
    cVar6 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x534) = lVar8 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar10 = true;
joined_r0x018e9920:
  local_60 = param_1;
  local_58 = bVar5;
  if (*(char *)(param_1 + 0x550) == '\0') {
joined_r0x018e98ec:
    if (!bVar10) {
      do {
        lVar7 = *plVar1;
        lVar8 = *(long *)(param_1 + 0x538);
        if (lVar7 != lVar9 || lVar8 != lVar4) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar9 = lVar7;
          lVar4 = lVar8;
          goto joined_r0x018e98ec;
        }
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = lVar9;
          *(long *)(param_1 + 0x534) = lVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar10 = true;
      lVar9 = lVar7;
      lVar4 = lVar8;
      goto joined_r0x018e98ec;
    }
    nn::os::SignalLightEvent(pLVar2);
    lVar7 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0 || *(long *)(param_1 + 0x538) != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar2);
          while (*plVar1 == 0 && *(long *)(param_1 + 0x538) == 0) {
            cVar6 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *plVar1 = lVar7;
              *(undefined8 *)(param_1 + 0x538) = 0;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_018e9968;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar7;
        *(undefined8 *)(param_1 + 0x538) = 0;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_018e9968:
    if (*(char *)(param_1 + 0x550) == '\0') {
      plVar3 = (long *)(param_1 + 0x60);
      lVar7 = nn::os::GetCurrentThread();
      do {
        if (*plVar3 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
            while (*plVar3 == 0) {
              cVar6 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar10) {
                *plVar3 = lVar7;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_018e99c4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar10) {
          *plVar3 = lVar7;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_018e99c4:
      *(byte *)(param_1 + 0x239) = bVar5;
      if (((param_2 & 1) == 0) ||
         ((*(long *)(param_1 + 0x350) - *(long *)(param_1 + 0x348) >> 4) * -0x79435e50d79435e5 ==
          *(long *)(param_1 + 0x3c0) - *(long *)(param_1 + 0x3b8) >> 3)) {
        if (*(char *)(param_1 + 0x23a) == '\0') {
          FUN_02de25c4(param_1);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x238) = 1;
        (**(code **)(**(long **)(param_1 + 0xe0) + 0x70))(*(long **)(param_1 + 0xe0),0);
        *(undefined1 *)(param_1 + 0x550) = 0;
      }
      *(undefined8 *)(param_1 + 0x60) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x68));
      do {
        lVar7 = *plVar1;
        lVar8 = *(long *)(param_1 + 0x538);
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = lVar7;
          *(long *)(param_1 + 0x538) = lVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        lVar9 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x538);
        if (lVar9 != lVar7 || lVar4 != lVar8) {
          bVar10 = false;
          ClearExclusiveLocal();
          goto joined_r0x018e9af0;
        }
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x534) = lVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar10 = true;
joined_r0x018e9af0:
      do {
        if (bVar10) {
          nn::os::SignalLightEvent(pLVar2);
          return;
        }
        do {
          lVar7 = *plVar1;
          lVar8 = *(long *)(param_1 + 0x538);
          if (lVar7 != lVar9 || lVar8 != lVar4) {
            bVar10 = false;
            ClearExclusiveLocal();
            lVar9 = lVar7;
            lVar4 = lVar8;
            goto joined_r0x018e9af0;
          }
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = 0;
            *(long *)(param_1 + 0x534) = lVar4;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar10 = true;
        lVar9 = lVar7;
        lVar4 = lVar8;
      } while( true );
    }
    do {
      lVar7 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x538);
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar7;
        *(long *)(param_1 + 0x538) = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar9 = *plVar1;
      lVar4 = *(long *)(param_1 + 0x538);
      if (lVar9 != lVar7 || lVar4 != lVar8) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x018e9a1c;
      }
      cVar6 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x534) = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar10 = true;
joined_r0x018e9a1c:
    if (!bVar10) {
      do {
        lVar7 = *plVar1;
        lVar8 = *(long *)(param_1 + 0x538);
        if (lVar7 != lVar9 || lVar8 != lVar4) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar9 = lVar7;
          lVar4 = lVar8;
          goto joined_r0x018e9a1c;
        }
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x534) = lVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar10 = true;
      lVar9 = lVar7;
      lVar4 = lVar8;
      goto joined_r0x018e9a1c;
    }
    nn::os::SignalLightEvent(pLVar2);
    FUN_028c0a64(param_1,&local_60);
  }
  else {
joined_r0x018e9924:
    if (!bVar10) {
      do {
        lVar7 = *plVar1;
        lVar8 = *(long *)(param_1 + 0x538);
        if (lVar7 != lVar9 || lVar8 != lVar4) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar9 = lVar7;
          lVar4 = lVar8;
          goto joined_r0x018e9924;
        }
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = lVar9;
          *(long *)(param_1 + 0x534) = lVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar10 = true;
      lVar9 = lVar7;
      lVar4 = lVar8;
      goto joined_r0x018e9924;
    }
    nn::os::SignalLightEvent(pLVar2);
    FUN_0195266c(param_1,&local_60);
  }
  return;
LAB_018e9880:
  ClearExclusiveLocal();
  lVar8 = *plVar1;
  lVar9 = *(long *)(param_1 + 0x538);
  goto LAB_018e9848;
}


