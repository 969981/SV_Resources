/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015c8e8c; name: FUN_015c8e8c
 */


void FUN_015c8e8c(long param_1,char *param_2,uint param_3,byte param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  long *plVar10;
  char *pcVar11;
  char *pcVar12;
  
  plVar1 = (long *)(param_1 + 0x1b0);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x1b8) == 0) {
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_015c8edc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x1b8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x1b8) == 0) {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar5;
            *(undefined8 *)(param_1 + 0x1b8) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_015c8edc;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_015c8edc:
  pcVar9 = *(char **)(param_1 + 0xb0);
  pcVar12 = *(char **)(param_1 + 0xb8);
  if (pcVar9 == pcVar12) {
    pcVar12 = pcVar9;
  }
  else {
    do {
      lVar5 = *(long *)(pcVar9 + 8);
      plVar10 = *(long **)(pcVar9 + 0x20);
      if (plVar10 == (long *)0x0) {
        cVar4 = *param_2;
        lVar8 = *(long *)(param_2 + 8);
      }
      else {
        (**(code **)(*plVar10 + 0x18))(plVar10);
        cVar4 = *param_2;
        lVar8 = *(long *)(param_2 + 8);
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      if ((lVar5 == lVar8) && (cVar4 != '\0')) goto LAB_015c8f9c;
      pcVar9 = pcVar9 + 0x28;
    } while (pcVar12 != pcVar9);
    pcVar9 = pcVar12;
LAB_015c8f9c:
    pcVar12 = *(char **)(param_1 + 0xb8);
  }
  if (pcVar12 == pcVar9) {
    do {
      lVar5 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x1b8);
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar5;
        *(long *)(param_1 + 0x1b8) = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar2 = *plVar1;
      lVar3 = *(long *)(param_1 + 0x1b8);
      if (lVar2 != lVar5 || lVar3 != lVar8) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto LAB_015c91ec;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x1b4) = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
LAB_015c91ec:
    if (!bVar6) {
      do {
        lVar5 = *plVar1;
        lVar8 = *(long *)(param_1 + 0x1b8);
        if (lVar5 != lVar2 || lVar8 != lVar3) {
          bVar6 = false;
          ClearExclusiveLocal();
          goto joined_r0x015c93b4;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x1b4) = lVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar6 = true;
joined_r0x015c93b4:
      if (!bVar6) {
        do {
          lVar2 = *plVar1;
          lVar3 = *(long *)(param_1 + 0x1b8);
          if (lVar2 != lVar5 || lVar3 != lVar8) {
            bVar6 = false;
            ClearExclusiveLocal();
            lVar5 = lVar2;
            lVar8 = lVar3;
            goto joined_r0x015c93b4;
          }
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = 0;
            *(long *)(param_1 + 0x1b4) = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar6 = true;
        lVar5 = lVar2;
        lVar8 = lVar3;
        goto joined_r0x015c93b4;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c0));
    return;
  }
  if (pcVar9 + 0x28 == pcVar12) {
LAB_015c8fbc:
    pcVar11 = pcVar12 + -0x28;
    if (*pcVar11 != '\0') {
      if (*(long **)(pcVar12 + -8) != (long *)0x0) {
        (**(code **)(**(long **)(pcVar12 + -8) + 0x20))();
      }
      *pcVar11 = '\0';
    }
    if (pcVar11 != pcVar9) {
      pcVar11 = pcVar12 + -0x50;
      if (*pcVar11 != '\0') {
        if (*(long **)(pcVar12 + -0x30) != (long *)0x0) {
          (**(code **)(**(long **)(pcVar12 + -0x30) + 0x20))();
        }
        *pcVar11 = '\0';
      }
      if (pcVar11 != pcVar9) {
        pcVar11 = pcVar12 + -0x78;
        if (*pcVar11 != '\0') {
          if (*(long **)(pcVar12 + -0x58) != (long *)0x0) {
            (**(code **)(**(long **)(pcVar12 + -0x58) + 0x20))();
          }
          *pcVar11 = '\0';
        }
        if (pcVar11 != pcVar9) {
          do {
            if (pcVar12[-0xa0] != '\0') {
              if (*(long **)(pcVar12 + -0x80) != (long *)0x0) {
                (**(code **)(**(long **)(pcVar12 + -0x80) + 0x20))();
              }
              pcVar12[-0xa0] = '\0';
            }
            pcVar12 = pcVar12 + -0x28;
          } while (pcVar9 + 0x78 != pcVar12);
        }
      }
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0xb0);
    lVar8 = (long)pcVar9 - lVar5 >> 3;
    if (*pcVar9 == '\0') {
      if (pcVar9[0x28] != '\0') {
        lVar5 = lVar5 + lVar8 * 8;
        uVar7 = *(undefined8 *)(pcVar9 + 0x38);
        *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(pcVar9 + 0x30);
        *(undefined8 *)(lVar5 + 0x10) = uVar7;
        uVar7 = *(undefined8 *)(pcVar9 + 0x48);
        pcVar9[0x48] = '\0';
        pcVar9[0x49] = '\0';
        pcVar9[0x4a] = '\0';
        pcVar9[0x4b] = '\0';
        pcVar9[0x4c] = '\0';
        pcVar9[0x4d] = '\0';
        pcVar9[0x4e] = '\0';
        pcVar9[0x4f] = '\0';
        *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(pcVar9 + 0x40);
        *(undefined8 *)(lVar5 + 0x20) = uVar7;
        *pcVar9 = '\x01';
      }
    }
    else if (pcVar9[0x28] == '\0') {
      plVar10 = *(long **)(lVar5 + lVar8 * 8 + 0x20);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      *pcVar9 = '\0';
    }
    else {
      lVar5 = lVar5 + lVar8 * 8;
      plVar10 = *(long **)(lVar5 + 0x20);
      uVar7 = *(undefined8 *)(pcVar9 + 0x38);
      *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(pcVar9 + 0x30);
      *(undefined8 *)(lVar5 + 0x10) = uVar7;
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(pcVar9 + 0x40);
      *(undefined8 *)(lVar5 + 0x20) = 0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      lVar8 = *(long *)(pcVar9 + 0x48);
      pcVar9[0x48] = '\0';
      pcVar9[0x49] = '\0';
      pcVar9[0x4a] = '\0';
      pcVar9[0x4b] = '\0';
      pcVar9[0x4c] = '\0';
      pcVar9[0x4d] = '\0';
      pcVar9[0x4e] = '\0';
      pcVar9[0x4f] = '\0';
      *(long *)(lVar5 + 0x20) = lVar8;
    }
    if (pcVar9 + 0x50 != pcVar12) {
      do {
        if (pcVar9[0x28] == '\0') {
          if (pcVar9[0x50] != '\0') {
            uVar7 = *(undefined8 *)(pcVar9 + 0x70);
            pcVar9[0x70] = '\0';
            pcVar9[0x71] = '\0';
            pcVar9[0x72] = '\0';
            pcVar9[0x73] = '\0';
            pcVar9[0x74] = '\0';
            pcVar9[0x75] = '\0';
            pcVar9[0x76] = '\0';
            pcVar9[0x77] = '\0';
            pcVar9[0x28] = '\x01';
            *(undefined8 *)(pcVar9 + 0x30) = *(undefined8 *)(pcVar9 + 0x58);
            *(undefined8 *)(pcVar9 + 0x38) = *(undefined8 *)(pcVar9 + 0x60);
            *(undefined8 *)(pcVar9 + 0x40) = *(undefined8 *)(pcVar9 + 0x68);
            *(undefined8 *)(pcVar9 + 0x48) = uVar7;
          }
        }
        else if (pcVar9[0x50] == '\0') {
          if (*(long **)(pcVar9 + 0x48) != (long *)0x0) {
            (**(code **)(**(long **)(pcVar9 + 0x48) + 0x20))();
          }
          pcVar9[0x28] = '\0';
        }
        else {
          *(undefined8 *)(pcVar9 + 0x30) = *(undefined8 *)(pcVar9 + 0x58);
          *(undefined8 *)(pcVar9 + 0x38) = *(undefined8 *)(pcVar9 + 0x60);
          plVar10 = *(long **)(pcVar9 + 0x48);
          *(undefined8 *)(pcVar9 + 0x40) = *(undefined8 *)(pcVar9 + 0x68);
          pcVar9[0x48] = '\0';
          pcVar9[0x49] = '\0';
          pcVar9[0x4a] = '\0';
          pcVar9[0x4b] = '\0';
          pcVar9[0x4c] = '\0';
          pcVar9[0x4d] = '\0';
          pcVar9[0x4e] = '\0';
          pcVar9[0x4f] = '\0';
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x20))();
          }
          uVar7 = *(undefined8 *)(pcVar9 + 0x70);
          pcVar9[0x70] = '\0';
          pcVar9[0x71] = '\0';
          pcVar9[0x72] = '\0';
          pcVar9[0x73] = '\0';
          pcVar9[0x74] = '\0';
          pcVar9[0x75] = '\0';
          pcVar9[0x76] = '\0';
          pcVar9[0x77] = '\0';
          *(undefined8 *)(pcVar9 + 0x48) = uVar7;
        }
        pcVar9 = pcVar9 + 0x28;
      } while (pcVar12 + -0x50 != pcVar9);
    }
    pcVar12 = *(char **)(param_1 + 0xb8);
    pcVar9 = pcVar9 + 0x28;
    if (pcVar12 != pcVar9) goto LAB_015c8fbc;
  }
  *(undefined1 *)(param_1 + 0x1a1) = 1;
  *(char **)(param_1 + 0xb8) = pcVar9;
  *(byte *)(param_1 + 0x1a0) = param_4 & 1;
  *(undefined2 *)(param_1 + 0x1a3) = 0x101;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  do {
    lVar5 = *plVar1;
    lVar8 = *(long *)(param_1 + 0x1b8);
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x1b8) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    lVar2 = *plVar1;
    lVar3 = *(long *)(param_1 + 0x1b8);
    if (lVar2 != lVar5 || lVar3 != lVar8) {
      bVar6 = false;
      ClearExclusiveLocal();
      goto LAB_015c9088;
    }
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x1b4) = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  bVar6 = true;
LAB_015c9088:
  if (!bVar6) {
    do {
      lVar5 = *plVar1;
      lVar8 = *(long *)(param_1 + 0x1b8);
      if (lVar5 != lVar2 || lVar8 != lVar3) {
        bVar6 = false;
        ClearExclusiveLocal();
        goto joined_r0x015c9348;
      }
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x1b4) = lVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar6 = true;
joined_r0x015c9348:
    if (!bVar6) {
      do {
        lVar2 = *plVar1;
        lVar3 = *(long *)(param_1 + 0x1b8);
        if (lVar2 != lVar5 || lVar3 != lVar8) {
          bVar6 = false;
          ClearExclusiveLocal();
          lVar5 = lVar2;
          lVar8 = lVar3;
          goto joined_r0x015c9348;
        }
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x1b4) = lVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar6 = true;
      lVar5 = lVar2;
      lVar8 = lVar3;
      goto joined_r0x015c9348;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c0));
  if ((param_3 & 1) == 0) {
    return;
  }
  FUN_00eaabc4(param_1);
  return;
}


