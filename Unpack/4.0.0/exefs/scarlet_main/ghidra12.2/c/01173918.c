/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01173918; name: FUN_01173918
 */


void FUN_01173918(long param_1,long *param_2,byte param_3)

{
  short *psVar1;
  byte *pbVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  byte *pbVar17;
  bool bVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  byte *local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  byte local_100;
  undefined4 local_fc;
  undefined1 auStack_f8 [16];
  byte *local_e8;
  undefined1 auStack_e0 [16];
  byte *local_d0;
  undefined1 auStack_c8 [16];
  byte *local_b8;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined1 local_a0;
  byte local_94 [4];
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70 [2];
  
  plVar12 = (long *)(param_1 + 0x2d8);
  local_94[0] = param_3;
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar12 == 0) {
    cVar5 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar18) {
      *plVar12 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_01173960;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2e0));
  do {
    if (*plVar12 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2e0));
        while (*plVar12 == 0) {
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar18) {
            *plVar12 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01173960;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar18) {
      *plVar12 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01173960:
  memset(auStack_f8,0,0x59);
  local_fc = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_100 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  (**(code **)(*param_2 + 0x18))(&local_148,param_2);
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  plVar12 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    plVar12 = param_2 + 5;
  }
  if (*(long **)(local_148 + 0x10) == plVar12) {
    FUN_00c9ea00(&local_80,&local_148);
  }
  pbVar17 = local_148;
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  puVar6 = PTR_DAT_047d3908;
  if (local_148 != (byte *)0x0) {
    pbVar2 = local_148 + 0x18;
    do {
      sVar4 = *(short *)pbVar2;
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
      if (bVar18) {
        *(short *)pbVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      pbVar2 = local_148 + 0x1c;
      do {
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
        if (bVar18) {
          pbVar2[0] = 0xff;
          pbVar2[1] = 0xff;
          pbVar2[2] = 0xff;
          pbVar2[3] = 0xff;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (*(int *)pbVar2 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)puVar7;
        *(long *)puVar8 = lVar10;
        local_90 = *(undefined8 **)pbVar17;
        FUN_00c44438(lVar10 + 0x8040,&local_90);
      }
    }
    else if (sVar4 == 0) goto LAB_011744bc;
  }
  FUN_00d0a34c(auStack_f8,&local_80);
  puVar19 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_80 + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_80 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar18) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)puVar7;
        *(long *)puVar8 = lVar10;
        local_148 = (byte *)*puVar19;
        FUN_00c44438(lVar10 + 0x8040,&local_148);
      }
    }
    else if (sVar4 == 0) goto LAB_011744bc;
  }
  FUN_00e1eba8(&local_148,param_2);
  FUN_00d0a34c(&local_130,&local_148);
  pbVar17 = local_148;
  if (local_148 != (byte *)0x0) {
    pbVar2 = local_148 + 0x18;
    do {
      sVar4 = *(short *)pbVar2;
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
      if (bVar18) {
        *(short *)pbVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      pbVar2 = local_148 + 0x1c;
      do {
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
        if (bVar18) {
          pbVar2[0] = 0xff;
          pbVar2[1] = 0xff;
          pbVar2[2] = 0xff;
          pbVar2[3] = 0xff;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (*(int *)pbVar2 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)puVar7;
        *(long *)puVar8 = lVar10;
        local_80 = *(undefined8 **)pbVar17;
        FUN_00c44438(lVar10 + 0x8040,&local_80);
      }
    }
    else if (sVar4 == 0) goto LAB_011744bc;
  }
  plVar12 = param_2 + 0x22;
  lVar16 = *plVar12;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar16) {
    lVar10 = nn::os::GetCurrentThread();
LAB_01173a34:
    if (*plVar12 == 0) goto code_r0x01173a3c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x23));
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x23));
          while (*plVar12 == 0) {
            cVar5 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar18) {
              *plVar12 = lVar10;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01173a44;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar18) {
        *plVar12 = lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01173a44:
    bVar18 = false;
    goto LAB_01173a48;
  }
  bVar18 = true;
LAB_01173a48:
  plVar11 = (long *)FUN_01174c30(param_2[0x25],param_2[0x26]);
  if (((long *)param_2[0x26] == plVar11) || (*plVar11 == 0)) {
    plVar11 = (long *)FUN_01174c30(param_2[0x2c],param_2[0x2d]);
    if ((long *)param_2[0x2d] == plVar11) {
      pbVar17 = (byte *)0x0;
    }
    else {
      pbVar17 = (byte *)0x0;
      if (*plVar11 != 0) {
        pbVar17 = (byte *)(*plVar11 + -0x20);
      }
    }
  }
  else {
    pbVar17 = (byte *)(*plVar11 + -0x20);
  }
  if (!bVar18) {
    param_2[0x22] = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x23));
  }
  if (pbVar17 != (byte *)0x0) {
    local_138 = 0;
    local_140 = (undefined8 *)0x0;
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    local_148 = pbVar17;
    FUN_00c43ef0(&local_80,pbVar17 + 0x98);
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    if ((byte *)local_80[2] == pbVar17 + 0x28) {
      FUN_00c92210(&local_90,&local_80);
    }
    puVar19 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_80 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar18) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)puVar7;
          *(long *)puVar8 = lVar10;
          local_70[0] = *puVar19;
          FUN_00c44438(lVar10 + 0x8040,local_70);
        }
      }
      else if (sVar4 == 0) goto LAB_011744bc;
    }
    FUN_00c93a38(&local_140,&local_90);
    puVar19 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_90 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_90 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar18) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)puVar7;
          *(long *)puVar8 = lVar10;
          local_80 = (undefined8 *)*puVar19;
          FUN_00c44438(lVar10 + 0x8040,&local_80);
        }
      }
      else if (sVar4 == 0) goto LAB_011744bc;
    }
    local_e8 = local_148;
    FUN_00c93a38(auStack_e0,&local_140);
    puVar19 = local_140;
    if (local_140 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_140 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_140 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar18) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)puVar7;
          *(long *)puVar8 = lVar10;
          local_80 = (undefined8 *)*puVar19;
          FUN_00c44438(lVar10 + 0x8040,&local_80);
        }
      }
      else if (sVar4 == 0) goto LAB_011744bc;
    }
    FUN_01175690(&local_148,pbVar17);
    FUN_00c93a38(&local_120,&local_148);
    pbVar17 = local_148;
    if (local_148 != (byte *)0x0) {
      pbVar2 = local_148 + 0x18;
      do {
        sVar4 = *(short *)pbVar2;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
        if (bVar18) {
          *(short *)pbVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        pbVar2 = local_148 + 0x1c;
        do {
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
          if (bVar18) {
            pbVar2[0] = 0xff;
            pbVar2[1] = 0xff;
            pbVar2[2] = 0xff;
            pbVar2[3] = 0xff;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (*(int *)pbVar2 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)puVar7;
          *(long *)puVar8 = lVar10;
          local_80 = *(undefined8 **)pbVar17;
          FUN_00c44438(lVar10 + 0x8040,&local_80);
        }
      }
      else if (sVar4 == 0) goto LAB_011744bc;
    }
  }
  lVar16 = *plVar12;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar16) {
    lVar10 = nn::os::GetCurrentThread();
LAB_01173b50:
    if (*plVar12 == 0) goto code_r0x01173b58;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x23));
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x23));
          while (*plVar12 == 0) {
            cVar5 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar18) {
              *plVar12 = lVar10;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01173b60;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar18) {
        *plVar12 = lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01173b60:
    bVar18 = false;
    goto LAB_01173b64;
  }
  bVar18 = true;
LAB_01173b64:
  plVar12 = (long *)FUN_01174b20(param_2[0x25],param_2[0x26]);
  if (((long *)param_2[0x26] == plVar12) || (*plVar12 == 0)) {
    plVar12 = (long *)FUN_01174b20(param_2[0x2c],param_2[0x2d]);
    if ((long *)param_2[0x2d] == plVar12) {
      pbVar17 = (byte *)0x0;
    }
    else {
      pbVar17 = (byte *)0x0;
      if (*plVar12 != 0) {
        pbVar17 = (byte *)(*plVar12 + -0x20);
      }
    }
  }
  else {
    pbVar17 = (byte *)(*plVar12 + -0x20);
  }
  if (!bVar18) {
    param_2[0x22] = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x23));
  }
  if (pbVar17 != (byte *)0x0) {
    local_138 = 0;
    local_140 = (undefined8 *)0x0;
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    local_148 = pbVar17;
    FUN_00c43ef0(&local_80,pbVar17 + 0x98);
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    if ((byte *)local_80[2] == pbVar17 + 0x28) {
      FUN_0125f3ac(&local_90,&local_80);
    }
    puVar19 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_80 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar18) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)puVar7;
          *(long *)puVar8 = lVar10;
          local_70[0] = *puVar19;
          FUN_00c44438(lVar10 + 0x8040,local_70);
        }
      }
      else if (sVar4 == 0) goto LAB_011744bc;
    }
    FUN_00f5a410(&local_140,&local_90);
    puVar19 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_90 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_90 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar18) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)puVar7;
          *(long *)puVar8 = lVar10;
          local_80 = (undefined8 *)*puVar19;
          FUN_00c44438(lVar10 + 0x8040,&local_80);
        }
      }
      else if (sVar4 == 0) goto LAB_011744bc;
    }
    local_d0 = local_148;
    FUN_00f5a410(auStack_c8,&local_140);
    puVar19 = local_140;
    if (local_140 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_140 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_140 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar18) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)puVar7;
          *(long *)puVar8 = lVar10;
          local_80 = (undefined8 *)*puVar19;
          FUN_00c44438(lVar10 + 0x8040,&local_80);
        }
      }
      else if (sVar4 == 0) goto LAB_011744bc;
    }
    FUN_011758a0(&local_148,pbVar17);
    FUN_00f5a410(&local_110,&local_148);
    pbVar17 = local_148;
    if (local_148 != (byte *)0x0) {
      pbVar2 = local_148 + 0x18;
      do {
        sVar4 = *(short *)pbVar2;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
        if (bVar18) {
          *(short *)pbVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        pbVar2 = local_148 + 0x1c;
        do {
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
          if (bVar18) {
            pbVar2[0] = 0xff;
            pbVar2[1] = 0xff;
            pbVar2[2] = 0xff;
            pbVar2[3] = 0xff;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (*(int *)pbVar2 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)puVar7;
          *(long *)puVar8 = lVar10;
          local_80 = *(undefined8 **)pbVar17;
          FUN_00c44438(lVar10 + 0x8040,&local_80);
        }
      }
      else if (sVar4 == 0) goto LAB_011744bc;
    }
  }
  lVar10 = FUN_00e048ac(param_2 + 0x21,&local_148);
  if (lVar10 != 0) {
    FUN_011760a8(&local_148,lVar10);
    local_b8 = local_148;
    FUN_00f5a7e0(auStack_b0,&local_140);
    puVar19 = local_140;
    if (local_140 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_140 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_140 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar18) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)puVar7;
          *(long *)puVar8 = lVar10;
          local_80 = (undefined8 *)*puVar19;
          FUN_00c44438(lVar10 + 0x8040,&local_80);
        }
      }
      else if (sVar4 == 0) goto LAB_011744bc;
    }
  }
  local_148 = local_94;
  puVar19 = (undefined8 *)(param_1 + 0x58);
  if ((undefined8 *)*puVar19 == (undefined8 *)0x0) {
    puVar13 = puVar19;
  }
  else {
    puVar15 = (undefined8 *)(param_1 + 0x58);
    puVar13 = (undefined8 *)*puVar19;
    while( true ) {
      if (*(byte *)(puVar13 + 4) <= local_94[0]) {
        puVar19 = puVar15;
        if (*(byte *)(puVar13 + 4) < local_94[0]) {
          puVar19 = puVar13 + 1;
          puVar14 = (undefined8 *)*puVar19;
          puVar15 = puVar19;
          if (puVar14 != (undefined8 *)0x0) goto LAB_01173c04;
        }
        goto LAB_011742c4;
      }
      puVar14 = (undefined8 *)*puVar13;
      if (puVar14 == (undefined8 *)0x0) break;
      puVar15 = puVar13;
LAB_01173c04:
      puVar13 = puVar14;
    }
    puVar19 = puVar13;
  }
LAB_011742c4:
  puVar15 = (undefined8 *)*puVar19;
  if (puVar15 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)(param_1 + 0x60);
    puVar15 = (undefined8 *)(**(code **)(*(long *)*puVar14 + 0x10))((long *)*puVar14,0x60,8);
    if (puVar15 == (undefined8 *)0x0) {
      (**(code **)(*(long *)*puVar14 + 0xe8))();
    }
    FUN_00d75208(puVar14,puVar15 + 4,&local_148);
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = puVar13;
    *puVar19 = puVar15;
    puVar13 = puVar15;
    if (**(long **)(param_1 + 0x50) != 0) {
      *(long *)(param_1 + 0x50) = **(long **)(param_1 + 0x50);
      puVar13 = (undefined8 *)*puVar19;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x58),puVar13);
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
  }
  plVar12 = (long *)(**(code **)(*(long *)puVar15[8] + 0x10))((long *)puVar15[8],0x70,8);
  if (plVar12 == (long *)0x0) {
    (**(code **)(*(long *)puVar15[8] + 0xe8))();
  }
  *plVar12 = 0;
  uVar20 = puVar15[8];
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar10 != 0) {
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar20;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  }
  plVar12[2] = 0;
  plVar12[3] = 0;
  FUN_00d0a71c(plVar12 + 2,auStack_f8);
  plVar12[4] = (long)local_e8;
  plVar12[6] = 0;
  plVar12[5] = 0;
  FUN_00c93e08(plVar12 + 5,auStack_e0);
  plVar12[7] = (long)local_d0;
  plVar12[9] = 0;
  plVar12[8] = 0;
  FUN_011750c4(plVar12 + 8,auStack_c8);
  plVar11 = plVar12 + 0xb;
  *plVar11 = 0;
  plVar12[10] = (long)local_b8;
  plVar12[0xc] = 0;
  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  uVar20 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar20;
  FUN_00c44204(&local_80,uVar20,local_a8);
  puVar19 = (undefined8 *)*plVar11;
  *plVar11 = 0;
  if (local_80 == (undefined8 *)0x0) {
    if (puVar19 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar19 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)puVar19 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar18) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar16 = *(long *)puVar7;
          *(long *)puVar8 = lVar16;
          local_148 = (byte *)*puVar19;
          FUN_00c44438(lVar16 + 0x8040,&local_148);
        }
      }
      else if (sVar4 == 0) goto LAB_011744bc;
    }
    local_a8 = 0;
  }
  else {
    if (puVar19 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar19 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)puVar19 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar18) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar16 = *(long *)puVar7;
          *(long *)puVar8 = lVar16;
          local_148 = (byte *)*puVar19;
          FUN_00c44438(lVar16 + 0x8040,&local_148);
        }
      }
      else if (sVar4 == 0) goto LAB_011744bc;
    }
    puVar19 = local_80;
    local_80 = (undefined8 *)0x0;
    *plVar11 = (long)puVar19;
  }
  puVar19 = local_80;
  plVar12[0xc] = local_a8;
  if (local_80 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_80 + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_80 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar18) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)puVar7;
        *(long *)puVar8 = lVar16;
        local_148 = (byte *)*puVar19;
        FUN_00c44438(lVar16 + 0x8040,&local_148);
      }
    }
    else if (sVar4 == 0) {
LAB_011744bc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined1 *)(plVar12 + 0xd) = local_a0;
  if (lVar10 != 0) {
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  }
  plVar12[1] = (long)(puVar15 + 5);
  lVar10 = puVar15[5];
  *plVar12 = lVar10;
  *(long **)(lVar10 + 8) = plVar12;
  puVar15[5] = plVar12;
  puVar15[7] = puVar15[7] + 1;
  if ((*(long *)(param_1 + 0x410) != 0) && (local_94[0] - 3 < 3)) {
    local_100 = local_94[0];
    FUN_01175bb8(*(long *)(param_1 + 0x410),&local_130);
  }
  FUN_011753e0(&local_130);
  FUN_01174d44(auStack_f8);
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2e0));
  return;
code_r0x01173a3c:
  cVar5 = '\x01';
  bVar18 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar18) {
    *plVar12 = lVar10;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01173a44;
  goto LAB_01173a34;
code_r0x01173b58:
  cVar5 = '\x01';
  bVar18 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar18) {
    *plVar12 = lVar10;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01173b60;
  goto LAB_01173b50;
}


