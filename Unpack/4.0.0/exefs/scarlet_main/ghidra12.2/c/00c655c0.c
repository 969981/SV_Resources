/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c655c0; name: FUN_00c655c0
 */


bool FUN_00c655c0(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  bool bVar9;
  long lVar10;
  bool bVar11;
  
  plVar1 = (long *)(param_2 + 0x80);
  do {
    lVar6 = *plVar1;
    cVar4 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar6;
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_2 + 0x88);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar6) {
    bVar11 = true;
  }
  else {
    lVar6 = nn::os::GetCurrentThread();
    do {
      lVar5 = *plVar1;
      lVar10 = *(long *)(param_2 + 0x88);
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar5;
        *(long *)(param_2 + 0x88) = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      while ((lVar5 != 0 && (lVar6 != lVar5))) {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x90));
        do {
          lVar5 = *plVar1;
          lVar10 = *(long *)(param_2 + 0x88);
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar5;
            *(long *)(param_2 + 0x88) = lVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      do {
        lVar2 = *plVar1;
        if (lVar2 != lVar5 || *(long *)(param_2 + 0x88) != lVar10) {
          bVar11 = false;
          ClearExclusiveLocal();
          goto LAB_00c6564c;
        }
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = lVar5;
          *(long *)(param_2 + 0x84) = lVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar11 = true;
LAB_00c6564c:
      lVar5 = lVar2;
      lVar10 = *(long *)(param_2 + 0x88);
    } while (!bVar11);
    bVar11 = false;
  }
  FUN_00c65924(param_2);
  pcVar7 = (code *)*param_1;
  plVar8 = (long *)(param_2 + (param_1[1] >> 1));
  if ((param_1[1] & 1U) != 0) {
    pcVar7 = *(code **)(pcVar7 + *plVar8);
  }
  (*pcVar7)(plVar8,param_3);
  if (*(char *)(param_2 + 0x150) != '\0') {
    plVar8 = *(long **)(param_2 + 0x148);
    do {
      lVar6 = *plVar8;
      lVar5 = plVar8[1];
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar9) {
        *plVar8 = lVar6;
        plVar8[1] = lVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar10 = *plVar8;
      lVar2 = plVar8[1];
      if (lVar10 != lVar6 || lVar2 != lVar5) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto LAB_00c65834;
      }
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar9) {
        *plVar8 = lVar6;
        *(long *)((long)plVar8 + 4) = lVar5 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar9 = true;
LAB_00c65834:
    if (!bVar9) {
      do {
        lVar6 = *plVar8;
        lVar5 = plVar8[1];
        if (lVar6 != lVar10 || lVar5 != lVar2) {
          bVar9 = false;
          ClearExclusiveLocal();
          goto joined_r0x00c65874;
        }
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar9) {
          *plVar8 = lVar10;
          *(long *)((long)plVar8 + 4) = lVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar9 = true;
joined_r0x00c65874:
      if (!bVar9) {
        do {
          lVar10 = *plVar8;
          lVar2 = plVar8[1];
          if (lVar10 != lVar6 || lVar2 != lVar5) {
            bVar9 = false;
            ClearExclusiveLocal();
            lVar6 = lVar10;
            lVar5 = lVar2;
            goto joined_r0x00c65874;
          }
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar9) {
            *plVar8 = lVar6;
            *(long *)((long)plVar8 + 4) = lVar5 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar9 = true;
        lVar6 = lVar10;
        lVar5 = lVar2;
        goto joined_r0x00c65874;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar8 + 2));
  }
  *(undefined1 *)(param_2 + 0x150) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  if (*(char *)(param_2 + 0x160) != '\0') {
    plVar8 = *(long **)(param_2 + 0x158);
    do {
      lVar6 = *plVar8;
      lVar5 = plVar8[1];
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar9) {
        *plVar8 = lVar6;
        plVar8[1] = lVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar10 = *plVar8;
      lVar2 = plVar8[1];
      if (lVar10 != lVar6 || lVar2 != lVar5) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto LAB_00c657dc;
      }
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar9) {
        *plVar8 = 0;
        *(long *)((long)plVar8 + 4) = lVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar9 = true;
LAB_00c657dc:
    if (!bVar9) {
      do {
        lVar6 = *plVar8;
        lVar5 = plVar8[1];
        if (lVar6 != lVar10 || lVar5 != lVar2) {
          bVar9 = false;
          ClearExclusiveLocal();
          goto joined_r0x00c658e4;
        }
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar9) {
          *plVar8 = 0;
          *(long *)((long)plVar8 + 4) = lVar2;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar9 = true;
joined_r0x00c658e4:
      if (!bVar9) {
        do {
          lVar10 = *plVar8;
          lVar2 = plVar8[1];
          if (lVar10 != lVar6 || lVar2 != lVar5) {
            bVar9 = false;
            ClearExclusiveLocal();
            lVar6 = lVar10;
            lVar5 = lVar2;
            goto joined_r0x00c658e4;
          }
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar9) {
            *plVar8 = 0;
            *(long *)((long)plVar8 + 4) = lVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar9 = true;
        lVar6 = lVar10;
        lVar5 = lVar2;
        goto joined_r0x00c658e4;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(plVar8 + 2));
  }
  iVar3 = *(int *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x158) = 0;
  *(undefined1 *)(param_2 + 0x160) = 0;
  if (!bVar11) {
    do {
      lVar6 = *plVar1;
      lVar5 = *(long *)(param_2 + 0x88);
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar6;
        *(long *)(param_2 + 0x88) = lVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar10 = *plVar1;
      lVar2 = *(long *)(param_2 + 0x88);
      if (lVar10 != lVar6 || lVar2 != lVar5) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto LAB_00c656e8;
      }
      cVar4 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar6;
        *(long *)(param_2 + 0x84) = lVar5 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar11 = true;
LAB_00c656e8:
    if (!bVar11) {
      do {
        lVar6 = *plVar1;
        lVar5 = *(long *)(param_2 + 0x88);
        if (lVar6 != lVar10 || lVar5 != lVar2) {
          bVar11 = false;
          ClearExclusiveLocal();
          goto joined_r0x00c65758;
        }
        cVar4 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = lVar10;
          *(long *)(param_2 + 0x84) = lVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      bVar11 = true;
joined_r0x00c65758:
      if (!bVar11) {
        do {
          lVar10 = *plVar1;
          lVar2 = *(long *)(param_2 + 0x88);
          if (lVar10 != lVar6 || lVar2 != lVar5) {
            bVar11 = false;
            ClearExclusiveLocal();
            lVar6 = lVar10;
            lVar5 = lVar2;
            goto joined_r0x00c65758;
          }
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar6;
            *(long *)(param_2 + 0x84) = lVar5 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar11 = true;
        lVar6 = lVar10;
        lVar5 = lVar2;
        goto joined_r0x00c65758;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x90));
  }
  return iVar3 == 5;
}


