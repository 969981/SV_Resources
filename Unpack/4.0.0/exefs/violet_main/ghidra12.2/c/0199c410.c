/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0199c410; name: FUN_0199c410
 */


void FUN_0199c410(float param_1,long param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  
  if (param_3 == 0) {
    if (0.0001 < ABS(*(float *)(param_2 + 0x34) - param_1)) {
      plVar1 = (long *)(param_2 + 0x180);
      lVar4 = nn::os::GetCurrentThread();
      do {
        lVar6 = *plVar1;
        lVar7 = *(long *)(param_2 + 0x188);
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar6;
          *(long *)(param_2 + 0x188) = lVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        while ((lVar6 != 0 && (lVar4 != lVar6))) {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 400));
          do {
            lVar6 = *plVar1;
            lVar7 = *(long *)(param_2 + 0x188);
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar6;
              *(long *)(param_2 + 0x188) = lVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        do {
          lVar2 = *plVar1;
          if (lVar2 != lVar6 || *(long *)(param_2 + 0x188) != lVar7) {
            bVar5 = false;
            ClearExclusiveLocal();
            goto LAB_0199c578;
          }
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            *(long *)(param_2 + 0x184) = lVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar5 = true;
LAB_0199c578:
        lVar6 = lVar2;
        lVar7 = *(long *)(param_2 + 0x188);
      } while (!bVar5);
      *(float *)(param_2 + 0x34) = param_1;
      *(undefined2 *)(param_2 + 0x176) = 0x101;
      do {
        lVar4 = *plVar1;
        lVar6 = *(long *)(param_2 + 0x188);
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar4;
          *(long *)(param_2 + 0x188) = lVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        lVar7 = *plVar1;
        lVar2 = *(long *)(param_2 + 0x188);
        if (lVar7 != lVar4 || lVar2 != lVar6) {
          bVar5 = false;
          ClearExclusiveLocal();
          goto LAB_0199c5c4;
        }
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar4;
          *(long *)(param_2 + 0x184) = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar5 = true;
LAB_0199c5c4:
      if (!bVar5) {
        do {
          lVar4 = *plVar1;
          lVar6 = *(long *)(param_2 + 0x188);
          if (lVar4 != lVar7 || lVar6 != lVar2) {
            bVar5 = false;
            ClearExclusiveLocal();
            goto joined_r0x0199c644;
          }
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7;
            *(long *)(param_2 + 0x184) = lVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar5 = true;
joined_r0x0199c644:
        if (!bVar5) {
          do {
            lVar7 = *plVar1;
            lVar2 = *(long *)(param_2 + 0x188);
            if (lVar7 != lVar4 || lVar2 != lVar6) {
              bVar5 = false;
              ClearExclusiveLocal();
              lVar4 = lVar7;
              lVar6 = lVar2;
              goto joined_r0x0199c644;
            }
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar4;
              *(long *)(param_2 + 0x184) = lVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          bVar5 = true;
          lVar4 = lVar7;
          lVar6 = lVar2;
          goto joined_r0x0199c644;
        }
      }
      goto LAB_0199c5c8;
    }
  }
  else if ((param_3 == 1) && (0.0001 < ABS(*(float *)(param_2 + 0x38) - param_1))) {
    plVar1 = (long *)(param_2 + 0x180);
    lVar4 = nn::os::GetCurrentThread();
    do {
      lVar6 = *plVar1;
      lVar7 = *(long *)(param_2 + 0x188);
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6;
        *(long *)(param_2 + 0x188) = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_0199c470:
    while ((lVar6 != 0 && (lVar4 != lVar6))) {
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 400));
      do {
        lVar6 = *plVar1;
        lVar7 = *(long *)(param_2 + 0x188);
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar6;
          *(long *)(param_2 + 0x188) = lVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    do {
      lVar2 = *plVar1;
      if (lVar2 != lVar6 || *(long *)(param_2 + 0x188) != lVar7) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto LAB_0199c4ac;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6;
        *(long *)(param_2 + 0x184) = lVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar5 = true;
LAB_0199c4ac:
    if (!bVar5) {
      lVar6 = lVar2;
      lVar7 = *(long *)(param_2 + 0x188);
      goto LAB_0199c470;
    }
    *(float *)(param_2 + 0x38) = param_1;
    *(undefined2 *)(param_2 + 0x176) = 0x101;
    do {
      lVar4 = *plVar1;
      lVar6 = *(long *)(param_2 + 0x188);
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar4;
        *(long *)(param_2 + 0x188) = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar7 = *plVar1;
      lVar2 = *(long *)(param_2 + 0x188);
      if (lVar7 != lVar4 || lVar2 != lVar6) {
        bVar5 = false;
        ClearExclusiveLocal();
        goto LAB_0199c5e4;
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar4;
        *(long *)(param_2 + 0x184) = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar5 = true;
LAB_0199c5e4:
    if (!bVar5) {
      do {
        lVar4 = *plVar1;
        lVar6 = *(long *)(param_2 + 0x188);
        if (lVar4 != lVar7 || lVar6 != lVar2) {
          bVar5 = false;
          ClearExclusiveLocal();
          goto joined_r0x0199c6d4;
        }
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar7;
          *(long *)(param_2 + 0x184) = lVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar5 = true;
joined_r0x0199c6d4:
      if (!bVar5) {
        do {
          lVar7 = *plVar1;
          lVar2 = *(long *)(param_2 + 0x188);
          if (lVar7 != lVar4 || lVar2 != lVar6) {
            bVar5 = false;
            ClearExclusiveLocal();
            lVar4 = lVar7;
            lVar6 = lVar2;
            goto joined_r0x0199c6d4;
          }
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar4;
            *(long *)(param_2 + 0x184) = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar5 = true;
        lVar4 = lVar7;
        lVar6 = lVar2;
        goto joined_r0x0199c6d4;
      }
    }
LAB_0199c5c8:
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 400));
    return;
  }
  return;
}


