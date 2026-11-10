/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f0c464; name: FUN_00f0c464
 */


void FUN_00f0c464(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  LightEventType *pLVar2;
  short *psVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_38;
  
  plVar1 = (long *)(param_2 + 0x300);
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar11;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_00f0c4a8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x308));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x308));
        while (*plVar1 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00f0c4a8;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar11;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00f0c4a8:
  plVar5 = *(long **)(param_2 + 0x80);
  plVar6 = *(long **)(param_2 + 0x88);
  plVar13 = plVar5;
  if ((plVar5 != plVar6) && (*plVar5 != *param_3)) {
    do {
      plVar13 = plVar13 + 0xb;
      if (plVar6 == plVar13) {
        plVar13 = plVar6;
        goto LAB_00f0c4e0;
      }
    } while (*plVar13 != *param_3);
  }
LAB_00f0c4e0:
  if (plVar6 == plVar13) {
    pLVar2 = (LightEventType *)(param_2 + 0x308);
    *(undefined8 *)(param_2 + 0x300) = 0;
    nn::os::SignalLightEvent(pLVar2);
    lVar11 = nn::os::GetCurrentThread();
    while (*plVar1 == 0) {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar11;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 == '\0') goto LAB_00f0c614;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent(pLVar2);
    do {
      if (*plVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar2);
          while (*plVar1 == 0) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar8) {
              *plVar1 = lVar11;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_00f0c614;
          }
        } while( true );
      }
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar11;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_00f0c614:
    plVar5 = *(long **)(param_2 + 0xb8);
    plVar6 = *(long **)(param_2 + 0xc0);
    plVar13 = plVar5;
    if ((plVar5 != plVar6) && (*plVar5 != *param_3)) {
      do {
        plVar13 = plVar13 + 0xb;
        if (plVar6 == plVar13) {
          plVar13 = plVar6;
          goto LAB_00f0c64c;
        }
      } while (*plVar13 != *param_3);
    }
LAB_00f0c64c:
    if (plVar6 == plVar13) {
      *plVar1 = 0;
      nn::os::SignalLightEvent(pLVar2);
      lVar11 = nn::os::GetCurrentThread();
      while (*plVar1 == 0) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') goto LAB_00f0c828;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent(pLVar2);
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent(pLVar2);
            while (*plVar1 == 0) {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar8) {
                *plVar1 = lVar11;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_00f0c828;
            }
          } while( true );
        }
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_00f0c828:
      plVar5 = *(long **)(param_2 + 0xf0);
      plVar6 = *(long **)(param_2 + 0xf8);
      plVar13 = plVar5;
      if ((plVar5 != plVar6) && (*plVar5 != *param_3)) {
        do {
          plVar13 = plVar13 + 0xb;
          if (plVar6 == plVar13) {
            plVar13 = plVar6;
            goto LAB_00f0c860;
          }
        } while (*plVar13 != *param_3);
      }
LAB_00f0c860:
      if (plVar6 != plVar13) {
        *(undefined8 *)(param_2 + 0x300) = 0;
        nn::os::SignalLightEvent(pLVar2);
        local_60 = (undefined8 *)0x0;
        uStack_58 = 0;
        FUN_00c43ef0(&local_60,param_2 + 0x30);
        local_80 = (undefined8 *)0x0;
        uStack_78 = 0;
        if (local_60[2] == param_2 + 0x28) {
          FUN_00f0d1a0(&local_80,&local_60);
        }
        puVar9 = local_60;
        if (local_60 != (undefined8 *)0x0) {
          psVar3 = (short *)(local_60 + 3);
          do {
            sVar12 = *psVar3;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar8) {
              *psVar3 = sVar12 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar12 == 1) {
            piVar4 = (int *)((long)local_60 + 0x1c);
            do {
              iVar10 = *piVar4;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar8) {
                *piVar4 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar11;
              local_38 = *puVar9;
              FUN_00c44438(lVar11 + 0x8040,&local_38);
            }
          }
          else if (sVar12 == 0) goto LAB_00f0c7dc;
        }
        local_a0 = (undefined8 *)0x0;
        uStack_98 = 0;
        FUN_00f0d4c4(&local_a0,&local_80);
        *param_1 = 0;
        param_1[1] = 0;
        FUN_00d471a8(param_1,&local_a0);
        puVar9 = local_a0;
        *(undefined4 *)(param_1 + 2) = 2;
        *(ulong *)((long)param_1 + 0x14) =
             (ulong)(uint)((int)((ulong)((long)plVar13 - (long)plVar5) >> 3) * -0x45d1745d) << 0x20
             | 1;
        if (local_a0 != (undefined8 *)0x0) {
          psVar3 = (short *)(local_a0 + 3);
          do {
            sVar12 = *psVar3;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar8) {
              *psVar3 = sVar12 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar12 == 1) {
            piVar4 = (int *)((long)local_a0 + 0x1c);
            do {
              iVar10 = *piVar4;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar8) {
                *piVar4 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar10 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar11;
              local_60 = (undefined8 *)*puVar9;
              FUN_00c44438(lVar11 + 0x8040,&local_60);
            }
          }
          else if (sVar12 == 0) goto LAB_00f0c7dc;
        }
        if (local_80 == (undefined8 *)0x0) {
          return;
        }
        psVar3 = (short *)(local_80 + 3);
        do {
          sVar12 = *psVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar8) {
            *psVar3 = sVar12 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar12 == 1) {
          piVar4 = (int *)((long)local_80 + 0x1c);
          do {
            iVar10 = *piVar4;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar8) {
              *piVar4 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          goto LAB_00f0ccf8;
        }
        goto LAB_00f0c7d8;
      }
      *plVar1 = 0;
      nn::os::SignalLightEvent(pLVar2);
      lVar11 = nn::os::GetCurrentThread();
      while (*plVar1 == 0) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') goto LAB_00f0c9fc;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent(pLVar2);
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent(pLVar2);
            while (*plVar1 == 0) {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar8) {
                *plVar1 = lVar11;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_00f0c9fc;
            }
          } while( true );
        }
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_00f0c9fc:
      plVar5 = *(long **)(param_2 + 0x128);
      plVar6 = *(long **)(param_2 + 0x130);
      plVar13 = plVar5;
      if ((plVar5 != plVar6) && (*plVar5 != *param_3)) {
        do {
          plVar13 = plVar13 + 0xb;
          if (plVar6 == plVar13) {
            plVar13 = plVar6;
            goto LAB_00f0ca34;
          }
        } while (*plVar13 != *param_3);
      }
LAB_00f0ca34:
      if (plVar6 == plVar13) {
        *plVar1 = 0;
        nn::os::SignalLightEvent(pLVar2);
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        return;
      }
      *(undefined8 *)(param_2 + 0x300) = 0;
      nn::os::SignalLightEvent(pLVar2);
      local_60 = (undefined8 *)0x0;
      uStack_58 = 0;
      FUN_00c43ef0(&local_60,param_2 + 0x30);
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      if (local_60[2] == param_2 + 0x28) {
        FUN_00f0d1a0(&local_80,&local_60);
      }
      puVar9 = local_60;
      if (local_60 != (undefined8 *)0x0) {
        psVar3 = (short *)(local_60 + 3);
        do {
          sVar12 = *psVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar8) {
            *psVar3 = sVar12 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar12 == 1) {
          piVar4 = (int *)((long)local_60 + 0x1c);
          do {
            iVar10 = *piVar4;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar8) {
              *piVar4 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_38 = *puVar9;
            FUN_00c44438(lVar11 + 0x8040,&local_38);
          }
        }
        else if (sVar12 == 0) goto LAB_00f0c7dc;
      }
      local_b0 = (undefined8 *)0x0;
      uStack_a8 = 0;
      FUN_00f0d4c4(&local_b0,&local_80);
      *param_1 = 0;
      param_1[1] = 0;
      FUN_00d471a8(param_1,&local_b0);
      puVar9 = local_b0;
      *(undefined4 *)(param_1 + 2) = 3;
      *(ulong *)((long)param_1 + 0x14) =
           (ulong)(uint)((int)((ulong)((long)plVar13 - (long)plVar5) >> 3) * -0x45d1745d) << 0x20 |
           1;
      if (local_b0 != (undefined8 *)0x0) {
        psVar3 = (short *)(local_b0 + 3);
        do {
          sVar12 = *psVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar8) {
            *psVar3 = sVar12 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar12 == 1) {
          piVar4 = (int *)((long)local_b0 + 0x1c);
          do {
            iVar10 = *piVar4;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar8) {
              *piVar4 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_60 = (undefined8 *)*puVar9;
            FUN_00c44438(lVar11 + 0x8040,&local_60);
          }
        }
        else if (sVar12 == 0) goto LAB_00f0c7dc;
      }
      if (local_80 == (undefined8 *)0x0) {
        return;
      }
      psVar3 = (short *)(local_80 + 3);
      do {
        sVar12 = *psVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar8) {
          *psVar3 = sVar12 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar12 == 1) {
        piVar4 = (int *)((long)local_80 + 0x1c);
        do {
          iVar10 = *piVar4;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar8) {
            *piVar4 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        goto LAB_00f0ccf8;
      }
      goto LAB_00f0c7d8;
    }
    *(undefined8 *)(param_2 + 0x300) = 0;
    nn::os::SignalLightEvent(pLVar2);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_00c43ef0(&local_60,param_2 + 0x30);
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    if (local_60[2] == param_2 + 0x28) {
      FUN_00f0d1a0(&local_80,&local_60);
    }
    puVar9 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar3 = (short *)(local_60 + 3);
      do {
        sVar12 = *psVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar8) {
          *psVar3 = sVar12 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar12 == 1) {
        piVar4 = (int *)((long)local_60 + 0x1c);
        do {
          iVar10 = *piVar4;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar8) {
            *piVar4 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_38 = *puVar9;
          FUN_00c44438(lVar11 + 0x8040,&local_38);
        }
      }
      else if (sVar12 == 0) goto LAB_00f0c7dc;
    }
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    FUN_00f0d4c4(&local_90,&local_80);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00d471a8(param_1,&local_90);
    puVar9 = local_90;
    *(undefined4 *)(param_1 + 2) = 1;
    *(ulong *)((long)param_1 + 0x14) =
         (ulong)(uint)((int)((ulong)((long)plVar13 - (long)plVar5) >> 3) * -0x45d1745d) << 0x20 | 1;
    if (local_90 != (undefined8 *)0x0) {
      psVar3 = (short *)(local_90 + 3);
      do {
        sVar12 = *psVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar8) {
          *psVar3 = sVar12 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar12 == 1) {
        piVar4 = (int *)((long)local_90 + 0x1c);
        do {
          iVar10 = *piVar4;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar8) {
            *piVar4 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_60 = (undefined8 *)*puVar9;
          FUN_00c44438(lVar11 + 0x8040,&local_60);
        }
      }
      else if (sVar12 == 0) goto LAB_00f0c7dc;
    }
    if (local_80 == (undefined8 *)0x0) {
      return;
    }
    psVar3 = (short *)(local_80 + 3);
    do {
      sVar12 = *psVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar8) {
        *psVar3 = sVar12 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar12 == 1) {
      piVar4 = (int *)((long)local_80 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar8) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      goto LAB_00f0ccf8;
    }
  }
  else {
    *(undefined8 *)(param_2 + 0x300) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x308));
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_00c43ef0(&local_60,param_2 + 0x30);
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    if (local_60[2] == param_2 + 0x28) {
      FUN_00f0d1a0(&local_80,&local_60);
    }
    puVar9 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar3 = (short *)(local_60 + 3);
      do {
        sVar12 = *psVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar8) {
          *psVar3 = sVar12 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar12 == 1) {
        piVar4 = (int *)((long)local_60 + 0x1c);
        do {
          iVar10 = *piVar4;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar8) {
            *piVar4 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_38 = *puVar9;
          FUN_00c44438(lVar11 + 0x8040,&local_38);
        }
      }
      else if (sVar12 == 0) goto LAB_00f0c7dc;
    }
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_00f0d4c4(&local_70,&local_80);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00d471a8(param_1,&local_70);
    puVar9 = local_70;
    *(undefined4 *)(param_1 + 2) = 0;
    *(ulong *)((long)param_1 + 0x14) =
         (ulong)(uint)((int)((ulong)((long)plVar13 - (long)plVar5) >> 3) * -0x45d1745d) << 0x20 | 1;
    if (local_70 != (undefined8 *)0x0) {
      psVar3 = (short *)(local_70 + 3);
      do {
        sVar12 = *psVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar8) {
          *psVar3 = sVar12 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar12 == 1) {
        piVar4 = (int *)((long)local_70 + 0x1c);
        do {
          iVar10 = *piVar4;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar8) {
            *piVar4 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_60 = (undefined8 *)*puVar9;
          FUN_00c44438(lVar11 + 0x8040,&local_60);
        }
      }
      else if (sVar12 == 0) goto LAB_00f0c7dc;
    }
    if (local_80 == (undefined8 *)0x0) {
      return;
    }
    psVar3 = (short *)(local_80 + 3);
    do {
      sVar12 = *psVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar8) {
        *psVar3 = sVar12 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar12 == 1) {
      piVar4 = (int *)((long)local_80 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar8) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_00f0ccf8:
      puVar9 = local_80;
      if (iVar10 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar11 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar11;
      local_60 = (undefined8 *)*puVar9;
      FUN_00c44438(lVar11 + 0x8040,&local_60);
      return;
    }
  }
LAB_00f0c7d8:
  if (sVar12 != 0) {
    return;
  }
LAB_00f0c7dc:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x33,"Reference counter underflows.");
}


