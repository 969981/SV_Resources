/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d37b18; name: FUN_00d37b18
 */


/* WARNING: Removing unreachable block (ram,0x00d37e70) */

void FUN_00d37b18(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  bool bVar9;
  long *plVar10;
  bool bVar11;
  long local_38;
  
  plVar10 = (long *)(param_1 + 0x138);
  lVar5 = *plVar10;
  local_38 = param_2;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar5) {
    lVar2 = nn::os::GetCurrentThread();
LAB_00d37b58:
    if (*plVar10 == 0) goto code_r0x00d37b60;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x140));
          while (*plVar10 == 0) {
            cVar1 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar9) {
              *plVar10 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00d37b68;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar9) {
        *plVar10 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00d37b68:
    bVar9 = false;
    goto LAB_00d37b6c;
  }
  bVar9 = true;
LAB_00d37b6c:
  lVar2 = local_38;
  plVar10 = (long *)(local_38 + 0x508);
  lVar6 = *plVar10;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 != lVar6) {
    lVar5 = nn::os::GetCurrentThread();
LAB_00d37b8c:
    if (*plVar10 == 0) goto code_r0x00d37b94;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar2 + 0x510));
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar2 + 0x510));
          while (*plVar10 == 0) {
            cVar1 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar11) {
              *plVar10 = lVar5;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00d37b9c;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar11) {
        *plVar10 = lVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00d37b9c:
    bVar11 = false;
    goto LAB_00d37ba0;
  }
  plVar10 = (long *)0x0;
  bVar11 = true;
LAB_00d37ba0:
  lVar5 = local_38;
  if (*(char *)(lVar2 + 0x520) != '\0') {
    *(undefined1 *)(lVar2 + 0x520) = 0;
    plVar7 = *(long **)(param_1 + 0x90);
    plVar3 = *(long **)(param_1 + 0x98);
    if (plVar7 == plVar3) {
LAB_00d37d74:
      if ((plVar7 != plVar3) && (plVar7 + 2 != plVar3)) {
        lVar6 = plVar7[2];
        lVar2 = 0;
        if (lVar6 != 0) {
          lVar6 = *(long *)(lVar6 + 0x10);
          lVar2 = 0;
          if (lVar6 != 0) {
            lVar2 = lVar6 + -0x28;
          }
        }
        if (lVar2 == local_38) {
          plVar4 = plVar7;
        }
        else {
          FUN_00d0a34c(plVar7);
          plVar4 = plVar7 + 2;
        }
        if (plVar7 + 4 != plVar3) {
          lVar6 = plVar7[4];
          lVar2 = 0;
          if (lVar6 != 0) {
            lVar6 = *(long *)(lVar6 + 0x10);
            lVar2 = 0;
            if (lVar6 != 0) {
              lVar2 = lVar6 + -0x28;
            }
          }
          if (lVar2 != lVar5) {
            FUN_00d0a34c(plVar4);
            plVar4 = plVar4 + 2;
          }
          if (plVar7 + 6 != plVar3) {
            lVar6 = plVar7[6];
            lVar2 = 0;
            if (lVar6 != 0) {
              lVar6 = *(long *)(lVar6 + 0x10);
              lVar2 = 0;
              if (lVar6 != 0) {
                lVar2 = lVar6 + -0x28;
              }
            }
            if (lVar2 != lVar5) {
              FUN_00d0a34c(plVar4);
              plVar4 = plVar4 + 2;
            }
            if (plVar7 + 8 != plVar3) {
              lVar6 = plVar7[8];
              lVar2 = 0;
              if (lVar6 != 0) {
                lVar6 = *(long *)(lVar6 + 0x10);
                lVar2 = 0;
                if (lVar6 != 0) {
                  lVar2 = lVar6 + -0x28;
                }
              }
              if (lVar2 != lVar5) {
                FUN_00d0a34c(plVar4);
                plVar4 = plVar4 + 2;
              }
              for (plVar7 = plVar7 + 10; plVar7 != plVar3; plVar7 = plVar7 + 2) {
                lVar2 = 0;
                if (*plVar7 != 0) {
                  lVar6 = *(long *)(*plVar7 + 0x10);
                  lVar2 = 0;
                  if (lVar6 != 0) {
                    lVar2 = lVar6 + -0x28;
                  }
                }
                if (lVar2 != lVar5) {
                  FUN_00d0a34c(plVar4,plVar7);
                  plVar4 = plVar4 + 2;
                }
              }
            }
          }
        }
        plVar7 = plVar4;
        plVar3 = *(long **)(param_1 + 0x98);
      }
    }
    else {
      do {
        lVar2 = 0;
        if (*plVar7 != 0) {
          lVar6 = *(long *)(*plVar7 + 0x10);
          lVar2 = 0;
          if (lVar6 != 0) {
            lVar2 = lVar6 + -0x28;
          }
        }
        if (lVar2 == local_38) goto LAB_00d37d74;
        plVar7 = plVar7 + 2;
      } while (plVar3 != plVar7);
      plVar7 = plVar3;
    }
    if (plVar3 != plVar7) {
      FUN_00d38414((undefined8 *)(param_1 + 0x90),plVar7);
    }
    plVar7 = *(long **)(param_1 + 0x58);
    plVar3 = *(long **)(param_1 + 0x60);
    if ((plVar7 != plVar3) && (*plVar7 != local_38)) {
      do {
        plVar7 = plVar7 + 1;
        if (plVar3 == plVar7) {
          plVar7 = plVar3;
          goto LAB_00d37c74;
        }
      } while (*plVar7 != local_38);
    }
    if ((plVar7 != plVar3) && (plVar7 + 1 != plVar3)) {
      plVar4 = plVar7 + 2;
      while( true ) {
        plVar8 = plVar7;
        if (plVar4[-1] != local_38) {
          plVar8 = plVar7 + 1;
          *plVar7 = plVar4[-1];
        }
        plVar7 = plVar8;
        if (plVar3 == plVar4) break;
        plVar4 = plVar4 + 1;
      }
      plVar3 = *(long **)(param_1 + 0x60);
    }
LAB_00d37c74:
    if (plVar3 == plVar7) {
      FUN_00da01d0(param_1 + 200,&local_38);
    }
    else {
      *(long **)(param_1 + 0x60) = plVar7;
    }
    *(undefined1 *)(param_1 + 0x3e4) = 1;
  }
  if (!bVar11) {
    *plVar10 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
  }
  if (!bVar9) {
    *(undefined8 *)(param_1 + 0x138) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x140));
    return;
  }
  return;
code_r0x00d37b60:
  cVar1 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar9) {
    *plVar10 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00d37b68;
  goto LAB_00d37b58;
code_r0x00d37b94:
  cVar1 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar11) {
    *plVar10 = lVar5;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00d37b9c;
  goto LAB_00d37b8c;
}


