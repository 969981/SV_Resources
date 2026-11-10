/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d07784; name: FUN_00d07784
 */


undefined1  [16] FUN_00d07784(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  LightEventType *pLVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  bool bVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  undefined8 *local_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  plVar1 = param_1 + 0xe;
  lVar7 = nn::os::GetCurrentThread();
  do {
    lVar11 = *plVar1;
    lVar13 = param_1[0xf];
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar11;
      param_1[0xf] = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  pLVar2 = (LightEventType *)(param_1 + 0x10);
LAB_00d077c4:
  while ((lVar11 != 0 && (lVar7 != lVar11))) {
    nn::os::WaitLightEvent(pLVar2);
    do {
      lVar11 = *plVar1;
      lVar13 = param_1[0xf];
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar11;
        param_1[0xf] = lVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar3 = *plVar1;
    if (lVar3 != lVar11 || param_1[0xf] != lVar13) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_00d077f4;
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar11;
      *(long *)((long)param_1 + 0x74) = lVar13 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar10 = true;
LAB_00d077f4:
  if (!bVar10) {
    lVar11 = lVar3;
    lVar13 = param_1[0xf];
    goto LAB_00d077c4;
  }
  plVar15 = (long *)param_1[7];
  if (plVar15 != (long *)0x0) {
    while (uVar8 = FUN_00d07bc4(plVar15[3],param_3), (uVar8 & 1) == 0) {
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) goto LAB_00d07828;
    }
    lVar7 = plVar15[2];
    do {
      lVar11 = *plVar1;
      lVar13 = param_1[0xf];
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar11;
        param_1[0xf] = lVar13;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar3 = *plVar1;
      lVar4 = param_1[0xf];
      if (lVar3 != lVar11 || lVar4 != lVar13) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto LAB_00d0789c;
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar11;
        *(long *)((long)param_1 + 0x74) = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar10 = true;
LAB_00d0789c:
    if (!bVar10) {
      do {
        lVar11 = *plVar1;
        lVar13 = param_1[0xf];
        if (lVar11 != lVar3 || lVar13 != lVar4) {
          bVar10 = false;
          ClearExclusiveLocal();
          goto joined_r0x00d07910;
        }
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = lVar3;
          *(long *)((long)param_1 + 0x74) = lVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar10 = true;
joined_r0x00d07910:
      if (!bVar10) {
        do {
          lVar3 = *plVar1;
          lVar4 = param_1[0xf];
          if (lVar3 != lVar11 || lVar4 != lVar13) {
            bVar10 = false;
            ClearExclusiveLocal();
            lVar11 = lVar3;
            lVar13 = lVar4;
            goto joined_r0x00d07910;
          }
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar11;
            *(long *)((long)param_1 + 0x74) = lVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar10 = true;
        lVar11 = lVar3;
        lVar13 = lVar4;
        goto joined_r0x00d07910;
      }
    }
    nn::os::SignalLightEvent(pLVar2);
    goto LAB_00d078a8;
  }
LAB_00d07828:
  do {
    lVar7 = *plVar1;
    lVar11 = param_1[0xf];
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar7;
      param_1[0xf] = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar13 = *plVar1;
    lVar3 = param_1[0xf];
    if (lVar13 != lVar7 || lVar3 != lVar11) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_00d0795c;
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar7;
      *(long *)((long)param_1 + 0x74) = lVar11 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar10 = true;
LAB_00d0795c:
  if (!bVar10) {
    do {
      lVar7 = *plVar1;
      lVar11 = param_1[0xf];
      if (lVar7 != lVar13 || lVar11 != lVar3) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d07afc;
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar13;
        *(long *)((long)param_1 + 0x74) = lVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar10 = true;
joined_r0x00d07afc:
    if (!bVar10) {
      do {
        lVar13 = *plVar1;
        lVar3 = param_1[0xf];
        if (lVar13 != lVar7 || lVar3 != lVar11) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar7 = lVar13;
          lVar11 = lVar3;
          goto joined_r0x00d07afc;
        }
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = lVar7;
          *(long *)((long)param_1 + 0x74) = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar10 = true;
      lVar7 = lVar13;
      lVar11 = lVar3;
      goto joined_r0x00d07afc;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  FUN_00d07cf8(&local_60,param_2,param_3);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && param_1[0xf] == 0) {
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar7;
      param_1[0xf] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00d07994;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent(pLVar2);
  do {
    if (*plVar1 != 0 || param_1[0xf] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0 && param_1[0xf] == 0) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar7;
            param_1[0xf] = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00d07994;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar7;
      param_1[0xf] = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00d07994:
  uVar9 = *local_60;
  if (param_1[0x1a] == param_1[0x1b]) {
    iVar14 = (int)param_1[0x21];
    *(int *)(param_1 + 0x21) = iVar14 + 1;
  }
  else {
    piVar12 = (int *)(param_1[0x1b] + -4);
    iVar14 = *piVar12;
    param_1[0x1b] = (long)piVar12;
  }
  (**(code **)PTR_DAT_047e1e28)(param_1 + 0x16,iVar14,uVar9);
  *(int *)(local_60 + 0xd) = iVar14;
  *param_1 = (long)local_60;
  plVar15 = (long *)FUN_013e9ac0(param_1 + 1,param_1);
  puVar6 = local_60;
  local_60 = (undefined8 *)0x0;
  lVar7 = *plVar15;
  *plVar15 = (long)puVar6;
  if (lVar7 != 0) {
    FUN_02753b38(plVar15 + 1);
  }
  plVar15[1] = local_58;
  plVar15[2] = lStack_50;
  plVar15[3] = local_48;
  lVar7 = *param_1;
  do {
    lVar11 = *plVar1;
    lVar13 = param_1[0xf];
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar11;
      param_1[0xf] = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = param_1[0xf];
    if (lVar3 != lVar11 || lVar4 != lVar13) {
      bVar10 = false;
      ClearExclusiveLocal();
      goto LAB_00d07a9c;
    }
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0x74) = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar10 = true;
LAB_00d07a9c:
  if (!bVar10) {
    do {
      lVar11 = *plVar1;
      lVar13 = param_1[0xf];
      if (lVar11 != lVar3 || lVar13 != lVar4) {
        bVar10 = false;
        ClearExclusiveLocal();
        goto joined_r0x00d07b84;
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0x74) = lVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar10 = true;
joined_r0x00d07b84:
    if (!bVar10) {
      do {
        lVar3 = *plVar1;
        lVar4 = param_1[0xf];
        if (lVar3 != lVar11 || lVar4 != lVar13) {
          bVar10 = false;
          ClearExclusiveLocal();
          lVar11 = lVar3;
          lVar13 = lVar4;
          goto joined_r0x00d07b84;
        }
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = 0;
          *(long *)((long)param_1 + 0x74) = lVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar10 = true;
      lVar11 = lVar3;
      lVar13 = lVar4;
      goto joined_r0x00d07b84;
    }
  }
  nn::os::SignalLightEvent(pLVar2);
  puVar6 = local_60;
  local_60 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_02753b38(&local_58);
  }
LAB_00d078a8:
  auVar16._8_8_ = lVar7;
  auVar16._0_8_ = 1;
  return auVar16;
}


