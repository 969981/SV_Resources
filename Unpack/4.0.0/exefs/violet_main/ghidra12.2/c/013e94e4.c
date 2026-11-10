/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013e94e4; name: FUN_013e94e4
 */


undefined1  [16] FUN_013e94e4(long *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  LightEventType *pLVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  char cVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  long *local_70;
  long local_68;
  long lStack_60;
  long local_58;
  
  plVar1 = param_1 + 0xe;
  lVar7 = nn::os::GetCurrentThread();
  do {
    lVar13 = *plVar1;
    lVar11 = param_1[0xf];
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar13;
      param_1[0xf] = lVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  pLVar2 = (LightEventType *)(param_1 + 0x10);
LAB_013e9528:
  while ((lVar13 != 0 && (lVar7 != lVar13))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      lVar13 = *plVar1;
      lVar11 = param_1[0xf];
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar13;
        param_1[0xf] = lVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar13 || param_1[0xf] != lVar11) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_013e9558;
    }
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar13;
      *(long *)((long)param_1 + 0x74) = lVar11 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar9 = true;
LAB_013e9558:
  puVar5 = PTR_DAT_047e1e30;
  if (!bVar9) {
    lVar13 = lVar3;
    lVar11 = param_1[0xf];
    goto LAB_013e9528;
  }
  plVar14 = (long *)param_1[7];
  if (plVar14 != (long *)0x0) {
    while (((*(char *)(plVar14[3] + 0x6c) != '\0' || (lVar7 = *(long *)plVar14[3], lVar7 == 0)) ||
           (cVar6 = (**(code **)puVar5)(lVar7,*param_3), cVar6 == '\0'))) {
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) goto LAB_013e95ac;
    }
    lVar7 = plVar14[2];
    do {
      lVar13 = *plVar1;
      lVar11 = param_1[0xf];
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar13;
        param_1[0xf] = lVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar3 = *plVar1;
      lVar4 = param_1[0xf];
      if (lVar3 != lVar13 || lVar4 != lVar11) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto LAB_013e97c4;
      }
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar13;
        *(long *)((long)param_1 + 0x74) = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar9 = true;
LAB_013e97c4:
    if (!bVar9) {
      do {
        lVar13 = *plVar1;
        lVar11 = param_1[0xf];
        if (lVar13 != lVar3 || lVar11 != lVar4) {
          bVar9 = false;
          ClearExclusiveLocal();
          goto joined_r0x013e98b4;
        }
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar3;
          *(long *)((long)param_1 + 0x74) = lVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar9 = true;
joined_r0x013e98b4:
      if (!bVar9) {
        do {
          lVar3 = *plVar1;
          lVar4 = param_1[0xf];
          if (lVar3 != lVar13 || lVar4 != lVar11) {
            bVar9 = false;
            ClearExclusiveLocal();
            lVar13 = lVar3;
            lVar11 = lVar4;
            goto joined_r0x013e98b4;
          }
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar13;
            *(long *)((long)param_1 + 0x74) = lVar11 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar9 = true;
        lVar13 = lVar3;
        lVar11 = lVar4;
        goto joined_r0x013e98b4;
      }
    }
    nn::os::SignalLightEvent(pLVar2);
    goto LAB_013e9754;
  }
LAB_013e95ac:
  do {
    lVar7 = *plVar1;
    lVar13 = param_1[0xf];
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      param_1[0xf] = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar11 = *plVar1;
    lVar3 = param_1[0xf];
    if (lVar11 != lVar7 || lVar3 != lVar13) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_013e95e8;
    }
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      *(long *)((long)param_1 + 0x74) = lVar13 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar9 = true;
LAB_013e95e8:
  if (!bVar9) {
    do {
      lVar7 = *plVar1;
      lVar13 = param_1[0xf];
      if (lVar7 != lVar11 || lVar13 != lVar3) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x013e981c;
      }
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar11;
        *(long *)((long)param_1 + 0x74) = lVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar9 = true;
joined_r0x013e981c:
    if (!bVar9) {
      do {
        lVar11 = *plVar1;
        lVar3 = param_1[0xf];
        if (lVar11 != lVar7 || lVar3 != lVar13) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar7 = lVar11;
          lVar13 = lVar3;
          goto joined_r0x013e981c;
        }
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar7;
          *(long *)((long)param_1 + 0x74) = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar9 = true;
      lVar7 = lVar11;
      lVar13 = lVar3;
      goto joined_r0x013e981c;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  lVar13 = *param_3;
  FUN_013e9970(&local_70,*param_2);
  plVar14 = local_70;
  lVar7 = *local_70;
  *local_70 = lVar13;
  if (lVar7 != 0) {
    FUN_013ea610(local_70 + 1);
  }
  *(undefined1 *)((long)plVar14 + 0x6c) = 0;
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && param_1[0xf] == 0) {
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      param_1[0xf] = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_013e9634;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar1 != 0 || param_1[0xf] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0 && param_1[0xf] == 0) {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar7;
            param_1[0xf] = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_013e9634;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar7;
      param_1[0xf] = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_013e9634:
  lVar7 = *local_70;
  if (param_1[0x1a] == param_1[0x1b]) {
    iVar12 = (int)param_1[0x21];
    *(int *)(param_1 + 0x21) = iVar12 + 1;
  }
  else {
    piVar10 = (int *)(param_1[0x1b] + -4);
    iVar12 = *piVar10;
    param_1[0x1b] = (long)piVar10;
  }
  (**(code **)PTR_DAT_047e1e28)(param_1 + 0x16,iVar12,lVar7);
  *(int *)(local_70 + 0xd) = iVar12;
  *param_1 = (long)local_70;
  plVar8 = (long *)FUN_013e9ac0(param_1 + 1,param_1);
  plVar14 = local_70;
  local_70 = (long *)0x0;
  lVar7 = *plVar8;
  *plVar8 = (long)plVar14;
  if (lVar7 != 0) {
    FUN_02753b38(plVar8 + 1);
  }
  plVar8[1] = local_68;
  plVar8[2] = lStack_60;
  plVar8[3] = local_58;
  lVar7 = *param_1;
  do {
    lVar13 = *plVar1;
    lVar11 = param_1[0xf];
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = lVar13;
      param_1[0xf] = lVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = param_1[0xf];
    if (lVar3 != lVar13 || lVar4 != lVar11) {
      bVar9 = false;
      ClearExclusiveLocal();
      goto LAB_013e973c;
    }
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0x74) = lVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar9 = true;
LAB_013e973c:
  if (!bVar9) {
    do {
      lVar13 = *plVar1;
      lVar11 = param_1[0xf];
      if (lVar13 != lVar3 || lVar11 != lVar4) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto joined_r0x013e9924;
      }
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0x74) = lVar4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar9 = true;
joined_r0x013e9924:
    if (!bVar9) {
      do {
        lVar3 = *plVar1;
        lVar4 = param_1[0xf];
        if (lVar3 != lVar13 || lVar4 != lVar11) {
          bVar9 = false;
          ClearExclusiveLocal();
          lVar13 = lVar3;
          lVar11 = lVar4;
          goto joined_r0x013e9924;
        }
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = 0;
          *(long *)((long)param_1 + 0x74) = lVar11;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar9 = true;
      lVar13 = lVar3;
      lVar11 = lVar4;
      goto joined_r0x013e9924;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  plVar1 = local_70;
  local_70 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_02753b38(&local_68);
  }
LAB_013e9754:
  auVar15._8_8_ = lVar7;
  auVar15._0_8_ = 1;
  return auVar15;
}


