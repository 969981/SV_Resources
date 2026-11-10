/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023a82d0; name: FUN_023a82d0
 */


/* WARNING: Removing unreachable block (ram,0x023a836c) */
/* WARNING: Removing unreachable block (ram,0x023a84fc) */

void FUN_023a82d0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  bool bVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *local_90;
  char local_88;
  long *local_80;
  char local_78;
  
  plVar14 = (long *)(param_2 + 0x530);
  local_78 = '\x01';
  local_80 = plVar14;
  lVar4 = nn::os::GetCurrentThread();
  do {
    lVar13 = *plVar14;
    lVar7 = *(long *)(param_2 + 0x538);
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar9) {
      *plVar14 = lVar13;
      *(long *)(param_2 + 0x538) = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    while ((lVar13 != 0 && (lVar4 != lVar13))) {
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x540));
      do {
        lVar13 = *plVar14;
        lVar7 = *(long *)(param_2 + 0x538);
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar9) {
          *plVar14 = lVar13;
          *(long *)(param_2 + 0x538) = lVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    while( true ) {
      if (*plVar14 != lVar13 || *(long *)(param_2 + 0x538) != lVar7) break;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar9) {
        *plVar14 = lVar13;
        *(long *)(param_2 + 0x534) = lVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        if (*(char *)(param_2 + 0x550) == '\0') {
          plVar14 = (long *)(param_2 + 0x60);
          lVar4 = nn::os::GetCurrentThread();
          goto LAB_023a83fc;
        }
        local_90 = (long *)0x0;
        local_88 = '\0';
        if (local_78 != '\0') goto LAB_023a83bc;
        local_80 = (long *)0x0;
        goto LAB_023a8584;
      }
    }
    ClearExclusiveLocal();
    lVar13 = *plVar14;
    lVar7 = *(long *)(param_2 + 0x538);
  } while( true );
  while( true ) {
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar9) {
      *plVar14 = lVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') break;
LAB_023a83fc:
    if (*plVar14 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x68));
        while (*plVar14 == 0) {
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = lVar4;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_023a840c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_023a840c:
  plVar14 = (long *)(param_2 + 0x2f0);
  lVar13 = *plVar14;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar13) {
    plVar14 = (long *)0x0;
    bVar9 = true;
  }
  else {
    lVar4 = nn::os::GetCurrentThread();
    do {
      if (*plVar14 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar14 == 0) {
            cVar3 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar9) {
              *plVar14 = lVar4;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_023a8438;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar9) {
        *plVar14 = lVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_023a8438:
    bVar9 = false;
  }
  plVar6 = *(long **)(param_2 + 0x308);
  lVar4 = *(long *)(param_2 + 0x340);
  if ((lVar4 == 0) || (*plVar6 == param_5)) {
    plVar8 = plVar6;
  }
  else {
    lVar13 = lVar4 * 0x40;
    plVar11 = plVar6;
    do {
      lVar13 = lVar13 + -0x40;
      if (lVar13 == 0) goto LAB_023a8530;
      plVar12 = plVar11 + 8;
      plVar8 = plVar11 + 8;
      plVar11 = plVar11 + 8;
    } while (*plVar12 != param_5);
  }
  if (plVar8 != plVar6 + lVar4 * 8) {
    uVar5 = FUN_023a8d94(param_1,plVar8[2],param_6,param_7);
    plVar6 = (long *)(param_2 + 0x290);
    local_88 = 1;
    local_90 = plVar6;
    lVar4 = nn::os::GetCurrentThread();
    do {
      lVar13 = *plVar6;
      lVar7 = *(long *)(param_2 + 0x298);
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar10) {
        *plVar6 = lVar13;
        *(long *)(param_2 + 0x298) = lVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      while ((lVar13 != 0 && (lVar4 != lVar13))) {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2a0));
        do {
          lVar13 = *plVar6;
          lVar7 = *(long *)(param_2 + 0x298);
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar10) {
            *plVar6 = lVar13;
            *(long *)(param_2 + 0x298) = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      while( true ) {
        if (*plVar6 != lVar13 || *(long *)(param_2 + 0x298) != lVar7) break;
        cVar3 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar10) {
          *plVar6 = lVar13;
          *(long *)(param_2 + 0x294) = lVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          FUN_023a43cc(param_3,uVar5);
          FUN_00f08b20(&local_90);
          goto LAB_023a878c;
        }
      }
      ClearExclusiveLocal();
      lVar13 = *plVar6;
      lVar7 = *(long *)(param_2 + 0x298);
    } while( true );
  }
LAB_023a8530:
  plVar6 = (long *)(param_2 + 0x730);
  lVar13 = *plVar6;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar13) {
    plVar6 = (long *)0x0;
    bVar10 = true;
  }
  else {
    lVar4 = nn::os::GetCurrentThread();
    do {
      if (*plVar6 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x738));
          while (*plVar6 == 0) {
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar10) {
              *plVar6 = lVar4;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              bVar10 = false;
              goto LAB_023a8664;
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar10) {
        *plVar6 = lVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar10 = false;
  }
LAB_023a8664:
  plVar8 = *(long **)(param_2 + 0x748);
  lVar4 = *(long *)(param_2 + 0x780);
  if ((lVar4 == 0) || (*plVar8 == param_5)) {
    plVar11 = plVar8;
  }
  else {
    lVar13 = lVar4 * 0x10;
    plVar12 = plVar8;
    do {
      lVar13 = lVar13 + -0x10;
      if (lVar13 == 0) goto LAB_023a8704;
      plVar1 = plVar12 + 2;
      plVar11 = plVar12 + 2;
      plVar12 = plVar12 + 2;
    } while (*plVar1 != param_5);
  }
  if (plVar11 == plVar8 + lVar4 * 2) {
LAB_023a8704:
    if (!bVar10) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
  }
  else {
    lVar4 = plVar11[1];
    if (!bVar10) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
    if (lVar4 != 0) {
      local_90 = (long *)0x0;
      local_88 = '\0';
      if (local_78 == '\0') {
        local_80 = (long *)0x0;
        local_78 = '\0';
      }
      else {
        do {
          lVar4 = *local_80;
          lVar13 = local_80[1];
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(local_80,0x10);
          if (bVar10) {
            *local_80 = lVar4;
            local_80[1] = lVar13;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          lVar7 = *local_80;
          lVar2 = local_80[1];
          if (lVar7 != lVar4 || lVar2 != lVar13) {
            bVar10 = false;
            ClearExclusiveLocal();
            goto joined_r0x023a8740;
          }
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(local_80,0x10);
          if (bVar10) {
            *local_80 = lVar4;
            *(long *)((long)local_80 + 4) = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        bVar10 = true;
joined_r0x023a8740:
        if (!bVar10) {
          do {
            lVar4 = *local_80;
            lVar13 = local_80[1];
            if (lVar4 != lVar7 || lVar13 != lVar2) {
              bVar10 = false;
              ClearExclusiveLocal();
              lVar7 = lVar4;
              lVar2 = lVar13;
              goto joined_r0x023a8740;
            }
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(local_80,0x10);
            if (bVar10) {
              *local_80 = lVar7;
              *(long *)((long)local_80 + 4) = lVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          bVar10 = true;
          lVar7 = lVar4;
          lVar2 = lVar13;
          goto joined_r0x023a8740;
        }
        nn::os::SignalLightEvent((LightEventType *)(local_80 + 2));
        local_80 = local_90;
        local_78 = local_88;
      }
      local_90 = (long *)0x0;
      local_88 = 0;
      FUN_00f08b20(&local_90);
      FUN_023a8898(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
LAB_023a878c:
  if (!bVar9) {
    *plVar14 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar14 + 1));
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x68));
  goto LAB_023a87a0;
LAB_023a83bc:
  do {
    lVar4 = *local_80;
    lVar13 = local_80[1];
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(local_80,0x10);
    if (bVar9) {
      *local_80 = lVar4;
      local_80[1] = lVar13;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    lVar7 = *local_80;
    lVar2 = local_80[1];
    if (lVar7 != lVar4 || lVar2 != lVar13) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto joined_r0x023a8570;
    }
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(local_80,0x10);
    if (bVar9) {
      *local_80 = lVar4;
      *(long *)((long)local_80 + 4) = lVar13 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar9 = true;
joined_r0x023a8570:
  if (!bVar9) {
    do {
      lVar4 = *local_80;
      lVar13 = local_80[1];
      if (lVar4 != lVar7 || lVar13 != lVar2) {
        bVar9 = false;
        ClearExclusiveLocal();
        lVar7 = lVar4;
        lVar2 = lVar13;
        goto joined_r0x023a8570;
      }
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(local_80,0x10);
      if (bVar9) {
        *local_80 = lVar7;
        *(long *)((long)local_80 + 4) = lVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar9 = true;
    lVar7 = lVar4;
    lVar2 = lVar13;
    goto joined_r0x023a8570;
  }
  nn::os::SignalLightEvent((LightEventType *)(local_80 + 2));
  local_80 = local_90;
  local_78 = local_88;
LAB_023a8584:
  local_90 = (long *)0x0;
  local_88 = 0;
  FUN_00f08b20(&local_90);
  FUN_023a8898(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
LAB_023a87a0:
  FUN_00f08b20(&local_80);
  return;
}


