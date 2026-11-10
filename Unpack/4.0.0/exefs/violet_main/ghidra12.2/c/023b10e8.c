/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023b10e8; name: FUN_023b10e8
 */


/* WARNING: Removing unreachable block (ram,0x023b1184) */
/* WARNING: Removing unreachable block (ram,0x023b1280) */

void FUN_023b10e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  bool bVar12;
  long *plVar13;
  long *local_90;
  char local_88;
  long *local_80;
  char local_78;
  long *local_70;
  char local_68;
  
  plVar6 = (long *)(param_2 + 0x530);
  local_68 = '\x01';
  local_70 = plVar6;
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar9 = *plVar6;
    lVar8 = *(long *)(param_2 + 0x538);
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar11) {
      *plVar6 = lVar9;
      *(long *)(param_2 + 0x538) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    while ((lVar9 != 0 && (lVar4 != lVar9))) {
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x540));
      do {
        lVar9 = *plVar6;
        lVar8 = *(long *)(param_2 + 0x538);
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar11) {
          *plVar6 = lVar9;
          *(long *)(param_2 + 0x538) = lVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    while( true ) {
      if (*plVar6 != lVar9 || *(long *)(param_2 + 0x538) != lVar8) break;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar11) {
        *plVar6 = lVar9;
        *(long *)(param_2 + 0x534) = lVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        if (*(char *)(param_2 + 0x550) == '\0') {
          plVar6 = (long *)(param_2 + 0x60);
          lVar4 = nn::os::GetCurrentThread();
          goto LAB_023b1214;
        }
        local_80 = (long *)0x0;
        local_78 = '\0';
        if (local_68 != '\0') goto LAB_023b11d4;
        local_70 = (long *)0x0;
        goto LAB_023b1358;
      }
    }
    ClearExclusiveLocal();
    lVar9 = *plVar6;
    lVar8 = *(long *)(param_2 + 0x538);
  } while( true );
  while( true ) {
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar11) {
      *plVar6 = lVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') break;
LAB_023b1214:
    if (*plVar6 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar6 == 0) {
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar11) {
            *plVar6 = lVar4;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_023b1224;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_023b1224:
  plVar6 = (long *)(param_2 + 0x290);
  local_78 = 1;
  local_80 = plVar6;
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar9 = *plVar6;
    lVar8 = *(long *)(param_2 + 0x298);
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar11) {
      *plVar6 = lVar9;
      *(long *)(param_2 + 0x298) = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    while ((lVar9 != 0 && (lVar4 != lVar9))) {
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2a0));
      do {
        lVar9 = *plVar6;
        lVar8 = *(long *)(param_2 + 0x298);
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar11) {
          *plVar6 = lVar9;
          *(long *)(param_2 + 0x298) = lVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    while( true ) {
      if (*plVar6 != lVar9 || *(long *)(param_2 + 0x298) != lVar8) break;
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar11) {
        *plVar6 = lVar9;
        *(long *)(param_2 + 0x294) = lVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        plVar6 = *(long **)(param_2 + 0x2b0);
        lVar4 = *(long *)(param_2 + 0x2e8);
        if ((lVar4 != 0) && (*plVar6 != param_5)) {
          lVar9 = lVar4 * 0x20;
          plVar10 = plVar6;
          goto LAB_023b12d8;
        }
        plVar7 = plVar6;
        goto LAB_023b12f4;
      }
    }
    ClearExclusiveLocal();
    lVar9 = *plVar6;
    lVar8 = *(long *)(param_2 + 0x298);
  } while( true );
  while (plVar13 = plVar10 + 4, plVar7 = plVar10 + 4, plVar10 = plVar10 + 4, *plVar13 != param_5) {
LAB_023b12d8:
    lVar9 = lVar9 + -0x20;
    if (lVar9 == 0) goto LAB_023b13c0;
  }
LAB_023b12f4:
  if (plVar7 == plVar6 + lVar4 * 4) {
LAB_023b13c0:
    plVar6 = (long *)(param_2 + 0x948);
    lVar9 = *plVar6;
    lVar4 = nn::os::GetCurrentThread();
    if (lVar4 == lVar9) {
      plVar6 = (long *)0x0;
      bVar11 = true;
    }
    else {
      lVar4 = nn::os::GetCurrentThread();
      do {
        if (*plVar6 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x950));
            while (*plVar6 == 0) {
              cVar3 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar11) {
                *plVar6 = lVar4;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_023b13ec;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar11) {
          *plVar6 = lVar4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_023b13ec:
      bVar11 = false;
    }
    plVar7 = *(long **)(param_2 + 0x960);
    lVar4 = *(long *)(param_2 + 0x998);
    if ((lVar4 == 0) || (*plVar7 == param_5)) {
      plVar10 = plVar7;
    }
    else {
      lVar9 = lVar4 * 0x10;
      plVar13 = plVar7;
      do {
        lVar9 = lVar9 + -0x10;
        if (lVar9 == 0) goto LAB_023b1500;
        plVar10 = plVar13 + 2;
        plVar1 = plVar13 + 2;
        plVar13 = plVar10;
      } while (*plVar1 != param_5);
    }
    if (plVar10 == plVar7 + lVar4 * 2) {
LAB_023b1500:
      local_90 = (long *)0x0;
      local_88 = '\0';
      if (local_68 == '\0') {
        local_70 = (long *)0x0;
      }
      else {
        do {
          lVar4 = *local_70;
          lVar9 = local_70[1];
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(local_70,0x10);
          if (bVar12) {
            *local_70 = lVar4;
            local_70[1] = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          lVar8 = *local_70;
          lVar2 = local_70[1];
          if (lVar8 != lVar4 || lVar2 != lVar9) {
            bVar12 = false;
            ClearExclusiveLocal();
            goto joined_r0x023b1558;
          }
          cVar3 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(local_70,0x10);
          if (bVar12) {
            *local_70 = lVar4;
            *(long *)((long)local_70 + 4) = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar12 = true;
joined_r0x023b1558:
        if (!bVar12) {
          do {
            lVar4 = *local_70;
            lVar9 = local_70[1];
            if (lVar4 != lVar8 || lVar9 != lVar2) {
              bVar12 = false;
              ClearExclusiveLocal();
              lVar8 = lVar4;
              lVar2 = lVar9;
              goto joined_r0x023b1558;
            }
            cVar3 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(local_70,0x10);
            if (bVar12) {
              *local_70 = lVar8;
              *(long *)((long)local_70 + 4) = lVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          bVar12 = true;
          lVar8 = lVar4;
          lVar2 = lVar9;
          goto joined_r0x023b1558;
        }
        nn::os::SignalLightEvent((LightEventType *)(local_70 + 2));
        local_70 = local_90;
        local_68 = local_88;
      }
      local_90 = (long *)0x0;
      local_88 = 0;
      FUN_00f08b20(&local_90);
      FUN_023b160c(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
    else {
      *(undefined1 *)(plVar10 + 1) = 1;
    }
    if (!bVar11) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
  }
  else {
    uVar5 = FUN_023a8d94(param_1,*(undefined8 *)
                                  (*(long *)(param_2 + 0x348) + plVar7[3] * 0x130 + 0x110),param_6,
                         param_7);
    FUN_023a4890(param_3,uVar5);
  }
  FUN_00f08b20(&local_80);
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  goto LAB_023b1430;
LAB_023b11d4:
  do {
    lVar4 = *local_70;
    lVar9 = local_70[1];
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(local_70,0x10);
    if (bVar11) {
      *local_70 = lVar4;
      local_70[1] = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar8 = *local_70;
    lVar2 = local_70[1];
    if (lVar8 != lVar4 || lVar2 != lVar9) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto joined_r0x023b1344;
    }
    cVar3 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(local_70,0x10);
    if (bVar11) {
      *local_70 = lVar4;
      *(long *)((long)local_70 + 4) = lVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar11 = true;
joined_r0x023b1344:
  if (!bVar11) {
    do {
      lVar4 = *local_70;
      lVar9 = local_70[1];
      if (lVar4 != lVar8 || lVar9 != lVar2) {
        bVar11 = false;
        ClearExclusiveLocal();
        lVar8 = lVar4;
        lVar2 = lVar9;
        goto joined_r0x023b1344;
      }
      cVar3 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(local_70,0x10);
      if (bVar11) {
        *local_70 = lVar8;
        *(long *)((long)local_70 + 4) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar11 = true;
    lVar8 = lVar4;
    lVar2 = lVar9;
    goto joined_r0x023b1344;
  }
  nn::os::SignalLightEvent((LightEventType *)(local_70 + 2));
  local_70 = local_80;
  local_68 = local_78;
LAB_023b1358:
  local_80 = (long *)0x0;
  local_78 = 0;
  FUN_00f08b20(&local_80);
  FUN_023b160c(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
LAB_023b1430:
  FUN_00f08b20(&local_70);
  return;
}


