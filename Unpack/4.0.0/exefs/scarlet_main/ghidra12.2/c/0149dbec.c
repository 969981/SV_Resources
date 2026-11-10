/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0149dbec; name: FUN_0149dbec
 */


void FUN_0149dbec(long param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  char *pcVar18;
  code *pcVar19;
  bool bVar20;
  short sVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  long *plVar28;
  undefined8 *puVar29;
  long *plVar30;
  long *plVar31;
  byte *pbVar32;
  byte *pbVar33;
  long *local_7d0 [2];
  long *local_7c0;
  char *local_7b8;
  undefined8 local_7b0;
  long *local_7a8;
  undefined8 local_7a0;
  char *pcStack_798;
  undefined8 local_790;
  long *local_788;
  long *local_780;
  long *local_778;
  long *local_770 [2];
  long *local_760 [2];
  long *local_750;
  long *local_748 [2];
  long *local_738;
  undefined8 local_730;
  undefined8 local_728;
  long *local_720 [2];
  long *local_710;
  long *local_708 [2];
  long *local_6f8;
  long *local_6f0;
  code *local_6e8;
  code *local_6e0;
  undefined1 *local_6d8;
  long alStack_6d0 [12];
  long *local_670;
  code *local_668;
  code *local_660;
  undefined1 *local_658;
  long local_650 [12];
  undefined8 *local_5f0 [2];
  long *local_5e0 [2];
  long *local_5d0;
  long *local_5c8 [2];
  long *local_5b8;
  undefined1 *local_5b0;
  code *local_5a8;
  code *local_5a0;
  undefined1 *local_598;
  long local_590 [12];
  undefined1 *local_530;
  code *local_528;
  code *local_520;
  undefined1 *local_518;
  long local_510 [13];
  long *local_4a8 [2];
  long *local_498;
  long *local_490;
  code *local_488;
  code *local_480;
  undefined1 *local_478;
  long local_470 [12];
  undefined1 *local_410;
  code *local_408;
  code *local_400;
  undefined1 *local_3f8;
  long local_3f0 [12];
  long *local_390 [2];
  long *local_380;
  code *local_378;
  code *local_370;
  undefined1 *local_368;
  long local_360 [12];
  undefined1 *local_300;
  code *local_2f8;
  code *local_2f0;
  undefined1 *local_2e8;
  long local_2e0 [12];
  long *local_280 [2];
  long *local_270;
  code *local_268;
  code *local_260;
  undefined1 *local_258;
  long local_250 [12];
  undefined8 *local_1f0;
  code *local_1e8;
  code *local_1e0;
  undefined1 *local_1d8;
  long local_1d0 [13];
  long *local_168 [2];
  long *local_158;
  long *local_150;
  long *local_148;
  long *local_140;
  long *local_138;
  undefined8 *local_130;
  undefined8 uStack_128;
  long *local_120;
  long *local_118;
  long *local_110;
  long *local_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  long *local_f0;
  code *local_e8;
  long local_e0;
  long *local_d8;
  undefined1 auStack_d0 [112];
  
  *(undefined1 *)(param_1 + 0x1aa0) = 0;
  uVar11 = FUN_01195854();
  iVar9 = FUN_014a22c4();
  *(int *)(param_1 + 0x278) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 0x278) = 3;
    FUN_01dcc61c(uVar11,3);
  }
  FUN_01360a3c(&local_f0,*param_2);
  FUN_00ca1ea4(param_1 + 0x120,&local_f0);
  if (local_f0 != (long *)0x0) {
    plVar12 = local_f0 + 3;
    do {
      sVar21 = (short)*plVar12;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar20) {
        *(short *)plVar12 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_1f0 = (undefined8 *)*local_f0;
        FUN_00c44438(lVar23 + 0x8040,&local_1f0);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  plVar12 = (long *)FUN_0104b474(*param_2 + 0x108,&local_f0);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x58))(plVar12);
  }
  plVar13 = *(long **)(param_1 + 0x30);
  *(long **)(param_1 + 0x30) = plVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x60))();
  }
  lVar14 = FUN_00efcb90(*param_2 + 0x108,&local_f0);
  local_f0 = (long *)0x0;
  local_e8 = (code *)0x0;
  FUN_00c43ef0(&local_f0,lVar14 + 0x98);
  local_1e8 = (code *)0x0;
  local_1f0 = (undefined8 *)0x0;
  lVar23 = 0;
  if (lVar14 != 0) {
    lVar23 = lVar14 + 0x28;
  }
  if (local_f0[2] == lVar23) {
    FUN_00efcde8(&local_1f0,&local_f0);
  }
  plVar12 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar13 = local_f0 + 3;
    do {
      sVar21 = (short)*plVar13;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar20) {
        *(short *)plVar13 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_270 = (long *)*plVar12;
        FUN_00c44438(lVar23 + 0x8040,&local_270);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  lVar23 = param_1 + 0x130;
  FUN_0108458c(lVar23,&local_1f0);
  puVar15 = local_1f0;
  if (local_1f0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_1f0 + 3);
    do {
      sVar21 = *psVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_1f0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_f0 = (long *)*puVar15;
        FUN_00c44438(lVar14 + 0x8040,&local_f0);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  FUN_014a34f8(&local_f0,*param_2);
  plVar12 = local_f0;
  if (local_f0 != (long *)0x0) {
    if (*(short *)((long)local_f0 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_f0 + 0x1a);
      sVar21 = *(short *)((long)local_f0 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar21) {
          cVar5 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar20) {
            *psVar1 = sVar21 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_014a1584;
          bVar20 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_014a1584:
          bVar20 = false;
        }
        if (bVar20) {
          plVar13 = (long *)0x0;
          if (local_f0[2] != 0) {
            plVar13 = (long *)(local_f0[2] + -0x28);
          }
          goto LAB_014a15ac;
        }
        sVar21 = sVar4;
      } while (sVar4 != 0);
    }
    plVar13 = (long *)0x0;
LAB_014a15ac:
    plVar31 = local_f0 + 3;
    do {
      sVar21 = (short)*plVar31;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar20) {
        *(short *)plVar31 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_1f0 = (undefined8 *)*plVar12;
        FUN_00c44438(lVar14 + 0x8040,&local_1f0);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
    if (plVar13 != (long *)0x0) {
      local_f0 = (long *)0xd319af951538745b;
      local_e8 = (code *)0x3c493f3;
      local_e0 = 0x11;
      local_d8 = (long *)0x0;
      FUN_00fe3ff4(&local_1f0,plVar13,&local_f0);
      puVar15 = local_1f0;
      plVar12 = (long *)0x0;
      if (local_1f0 != (undefined8 *)0x0) {
        if (*(short *)((long)local_1f0 + 0x1a) != 0) {
          psVar1 = (short *)((long)local_1f0 + 0x1a);
          sVar21 = *(short *)((long)local_1f0 + 0x1a);
          do {
            sVar4 = *psVar1;
            if (sVar4 == sVar21) {
              cVar5 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar20) {
                *psVar1 = sVar21 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 != '\0') goto LAB_014a2128;
              bVar20 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_014a2128:
              bVar20 = false;
            }
            if (bVar20) {
              plVar12 = (long *)0x0;
              if (local_1f0[2] != 0) {
                plVar12 = (long *)(local_1f0[2] + -0x28);
              }
              goto LAB_014a2150;
            }
            sVar21 = sVar4;
          } while (sVar4 != 0);
        }
        plVar12 = (long *)0x0;
LAB_014a2150:
        psVar1 = (short *)(local_1f0 + 3);
        do {
          sVar21 = *psVar1;
          cVar5 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar20) {
            *psVar1 = sVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar21 == 1) {
          piVar2 = (int *)((long)local_1f0 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar20) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar14 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar14;
            local_270 = (long *)*puVar15;
            FUN_00c44438(lVar14 + 0x8040,&local_270);
          }
        }
        else if (sVar21 == 0) goto LAB_0149f7d0;
      }
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      if (plVar12 != (long *)0x0) {
        lVar17 = FUN_00efcb90(plVar12 + 0x21,&local_f0);
        local_f0 = (long *)0x0;
        local_e8 = (code *)0x0;
        FUN_00c43ef0(&local_f0,lVar17 + 0x98);
        local_1e8 = (code *)0x0;
        local_1f0 = (undefined8 *)0x0;
        lVar14 = 0;
        if (lVar17 != 0) {
          lVar14 = lVar17 + 0x28;
        }
        if (local_f0[2] == lVar14) {
          FUN_00efcde8(&local_1f0,&local_f0);
        }
        plVar31 = local_f0;
        if (local_f0 != (long *)0x0) {
          plVar24 = local_f0 + 3;
          do {
            sVar21 = (short)*plVar24;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar20) {
              *(short *)plVar24 = sVar21 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar21 == 1) {
            piVar2 = (int *)((long)local_f0 + 0x1c);
            do {
              iVar9 = *piVar2;
              cVar5 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar20) {
                *piVar2 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar14 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar14;
              local_270 = (long *)*plVar31;
              FUN_00c44438(lVar14 + 0x8040,&local_270);
            }
          }
          else if (sVar21 == 0) goto LAB_0149f7d0;
        }
        FUN_0108458c(param_1 + 0x140,&local_1f0);
        puVar15 = local_1f0;
        if (local_1f0 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_1f0 + 3);
          do {
            sVar21 = *psVar1;
            cVar5 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar20) {
              *psVar1 = sVar21 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar21 == 1) {
            piVar2 = (int *)((long)local_1f0 + 0x1c);
            do {
              iVar9 = *piVar2;
              cVar5 = '\x01';
              bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar20) {
                *piVar2 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar14 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar14;
              local_f0 = (long *)*puVar15;
              FUN_00c44438(lVar14 + 0x8040,&local_f0);
            }
          }
          else if (sVar21 == 0) goto LAB_0149f7d0;
        }
        lVar14 = plVar12[6];
        psVar1 = (short *)(lVar14 + 0x1a);
        do {
          sVar21 = *psVar1;
          cVar5 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar20) {
            *psVar1 = sVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar21 == 1) {
          *(undefined8 *)(lVar14 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))(plVar12);
        }
        else if (sVar21 == 0) goto LAB_0149f374;
      }
      lVar14 = plVar13[6];
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar21 = *psVar1;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar20) {
          *psVar1 = sVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar21 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))(plVar13);
      }
      else if (sVar21 == 0) goto LAB_0149f374;
    }
  }
  plVar12 = (long *)FUN_0104cf4c(*param_2 + 0x108,&local_f0);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x58))(plVar12);
  }
  plVar13 = *(long **)(param_1 + 0x150);
  *(long **)(param_1 + 0x150) = plVar12;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x60))();
  }
  uVar11 = *(undefined8 *)(param_1 + 0x1a0);
  local_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  FUN_01084328(&local_100,lVar23);
  FUN_014a22cc(uVar11,&local_100);
  puVar15 = local_100;
  if (local_100 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_100 + 3);
    do {
      sVar21 = *psVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_100 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_f0 = (long *)*puVar15;
        FUN_00c44438(lVar14 + 0x8040,&local_f0);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  local_108 = (long *)*param_2;
  if (local_108 != (long *)0x0) {
    lVar14 = local_108[6];
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_014a175c;
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar21 = *psVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar11;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar21 == -1) goto LAB_014a177c;
  }
  local_110 = *(long **)(param_1 + 0x30);
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x58))();
  }
  FUN_014a251c(&local_108,&local_110);
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x60))();
  }
  if (local_108 != (long *)0x0) {
    lVar14 = local_108[6];
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar21 = *psVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*local_108 + 0x50))();
    }
    else if (sVar21 == 0) goto LAB_0149f374;
  }
  puVar15 = (undefined8 *)FUN_014a2da8(*(undefined8 *)(param_1 + 8),param_1 + 0x120);
  local_1f0 = puVar15;
  if (puVar15 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar15 + 5);
    do {
      iVar9 = *piVar2;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar20) {
        *piVar2 = iVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == -1) goto LAB_014a1eac;
  }
  local_f0 = *(long **)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x168) = 0;
  FUN_014a233c(&local_f0);
  local_1f0 = (undefined8 *)0x0;
  *(undefined8 **)(param_1 + 0x168) = puVar15;
  FUN_014a233c(&local_1f0);
  FUN_014a6eec(*(undefined8 *)(param_1 + 0x168));
  puVar15 = (undefined8 *)FUN_014a26d0(*(undefined8 *)(param_1 + 8));
  local_1f0 = puVar15;
  if (puVar15 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar15 + 5);
    do {
      iVar9 = *piVar2;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar20) {
        *piVar2 = iVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == -1) goto LAB_014a1eac;
  }
  local_f0 = *(long **)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = 0;
  FUN_014a23a8(&local_f0);
  local_1f0 = (undefined8 *)0x0;
  *(undefined8 **)(param_1 + 0x158) = puVar15;
  FUN_014a23a8(&local_1f0);
  uVar11 = *(undefined8 *)(param_1 + 0x158);
  local_118 = (long *)*param_2;
  if (local_118 != (long *)0x0) {
    lVar14 = local_118[6];
    if (*(long *)(lVar14 + 0x10) == 0) goto LAB_014a175c;
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar21 = *psVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar16;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar21 == -1) goto LAB_014a177c;
  }
  local_120 = *(long **)(param_1 + 0x30);
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x58))();
  }
  local_130 = (undefined8 *)0x0;
  uStack_128 = 0;
  FUN_01084328(&local_130,lVar23);
  FUN_014a2580(uVar11,&local_118,&local_120,&local_130);
  puVar15 = local_130;
  if (local_130 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_130 + 3);
    do {
      sVar21 = *psVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_130 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_f0 = (long *)*puVar15;
        FUN_00c44438(lVar23 + 0x8040,&local_f0);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x60))();
  }
  if (local_118 != (long *)0x0) {
    lVar23 = local_118[6];
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar21 = *psVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      *(undefined8 *)(lVar23 + 0x10) = 0;
      (**(code **)(*local_118 + 0x50))();
    }
    else if (sVar21 == 0) goto LAB_0149f374;
  }
  local_1f0 = (undefined8 *)FUN_014a2978(*(undefined8 *)(param_1 + 8));
  if (local_1f0 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_1f0 + 5);
    do {
      iVar9 = *piVar2;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar20) {
        *piVar2 = iVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == -1) goto LAB_014a1eac;
  }
  local_f0 = *(long **)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = 0;
  FUN_014a2414(&local_f0);
  puVar15 = local_1f0;
  local_1f0 = (undefined8 *)0x0;
  *(undefined8 **)(param_1 + 0x160) = puVar15;
  FUN_014a2414(&local_1f0);
  uVar11 = *(undefined8 *)(param_1 + 0x160);
  local_138 = (long *)*param_2;
  if (local_138 != (long *)0x0) {
    lVar23 = local_138[6];
    if (*(long *)(lVar23 + 0x10) == 0) goto LAB_014a175c;
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar21 = *psVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar23 + 0x10))();
      *(undefined8 *)(lVar23 + 8) = uVar16;
      *(undefined4 *)(lVar23 + 0x1c) = 0xfffffffe;
    }
    else if (sVar21 == -1) goto LAB_014a177c;
  }
  local_140 = *(long **)(param_1 + 0x30);
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x58))();
  }
  local_148 = *(long **)(param_1 + 0x150);
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x58))();
  }
  FUN_014a2628(uVar11,&local_138,&local_140,&local_148);
  if (local_148 != (long *)0x0) {
    (**(code **)(*local_148 + 0x60))();
  }
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x60))();
  }
  if (local_138 != (long *)0x0) {
    lVar23 = local_138[6];
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar21 = *psVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      *(undefined8 *)(lVar23 + 0x10) = 0;
      (**(code **)(*local_138 + 0x50))();
    }
    else if (sVar21 == 0) goto LAB_0149f374;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x1a8);
  local_150 = *(long **)(param_1 + 0x30);
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x58))();
  }
  FUN_014a3a14(uVar11,&local_150);
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x60))();
  }
  puVar15 = (undefined8 *)FUN_014a2b80(*(undefined8 *)(param_1 + 8));
  local_1f0 = puVar15;
  if (puVar15 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar15 + 5);
    do {
      iVar9 = *piVar2;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar20) {
        *piVar2 = iVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == -1) {
LAB_014a1eac:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_f0 = *(long **)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  FUN_014a2480(&local_f0);
  local_1f0 = (undefined8 *)0x0;
  *(undefined8 **)(param_1 + 0x1b0) = puVar15;
  FUN_014a2480(&local_1f0);
  uVar11 = *(undefined8 *)(param_1 + 0x1b0);
  local_158 = *(long **)(param_1 + 0x30);
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x58))();
  }
  FUN_014a67a4(uVar11,&local_158);
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x60))();
  }
  FUN_01360a3c(local_168,*param_2);
  puVar6 = PTR_DAT_047d4240;
  local_270 = (long *)0x0;
  if (((*PTR_DAT_047d4240 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  puVar8 = PTR_DAT_047d4250;
  puVar7 = PTR_DAT_047d4248;
  uVar11 = *(undefined8 *)PTR_DAT_047d4248;
  *(undefined8 *)PTR_DAT_047d4250 = uVar11;
  FUN_00cf9884(&local_f0,uVar11,"GridPanel_temochi_00");
  plVar12 = local_270;
  local_270 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))();
  }
  local_270 = local_f0;
  FUN_01524834(&local_f0,local_168,&local_270);
  FUN_01524070((long *)(param_1 + 0x48),&local_f0);
  plVar12 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar13 = local_f0 + 3;
    do {
      sVar21 = (short)*plVar13;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar20) {
        *(short *)plVar13 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_1f0 = (undefined8 *)*plVar12;
        FUN_00c44438(lVar23 + 0x8040,&local_1f0);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  if (local_270 != (long *)0x0) {
    (**(code **)(*local_270 + 0x20))();
  }
  if (local_168[0] != (long *)0x0) {
    plVar12 = local_168[0] + 3;
    do {
      sVar21 = (short)*plVar12;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar20) {
        *(short *)plVar12 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_168[0] + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_1f0 = (undefined8 *)*local_168[0];
        FUN_00c44438(lVar23 + 0x8040,&local_1f0);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  puVar26 = (undefined8 *)PTR_DAT_047d4250;
  puVar15 = (undefined8 *)PTR_DAT_047d4248;
  pbVar33 = PTR_DAT_047d4240;
  lVar23 = *(long *)(param_1 + 0x48);
  if (lVar23 == 0) {
    plVar12 = (long *)0x0;
    puVar15 = (undefined8 *)puVar7;
    puVar26 = (undefined8 *)puVar8;
    pbVar33 = puVar6;
  }
  else if (*(short *)(lVar23 + 0x1a) == 0) {
    plVar12 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar23 + 0x1a);
    sVar21 = *(short *)(lVar23 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar21) {
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar20) {
          *psVar1 = sVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_014a0c9c;
        bVar20 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_014a0c9c:
        bVar20 = false;
      }
      if (bVar20) {
        plVar12 = (long *)0x0;
        if (*(long *)(lVar23 + 0x10) != 0) {
          plVar12 = (long *)(*(long *)(lVar23 + 0x10) + -0x28);
        }
        break;
      }
      plVar12 = (long *)0x0;
      sVar21 = sVar4;
    } while (sVar4 != 0);
  }
  FUN_01560aa4(plVar12);
  FUN_014a2304(plVar12,0);
  pcVar19 = (code *)plVar12[0x69];
  local_1f0 = (undefined8 *)&LAB_01de2f60;
  local_1e8 = FUN_00a6bba8;
  local_1e0 = FUN_00a6bbac;
  local_1d8 = &LAB_00a6bbb8;
  local_1d0[0] = param_1;
  if (pcVar19 == (code *)0x0) {
LAB_0149e1a4:
    (*local_1e0)(local_1d0,plVar12 + 0x6c);
    plVar12[0x6b] = (long)local_1d8;
    plVar12[0x68] = (long)local_1f0;
    plVar12[0x69] = (long)local_1e8;
    plVar12[0x6a] = (long)local_1e0;
  }
  else {
    plVar12[0x6a] = 0;
    plVar12[0x6b] = 0;
    plVar12[0x68] = 0;
    plVar12[0x69] = 0;
    (*pcVar19)(plVar12 + 0x6c);
    if (local_1e0 != (code *)0x0) goto LAB_0149e1a4;
  }
  pcVar19 = (code *)plVar12[0x29];
  local_270 = (long *)&LAB_01de2f68;
  local_268 = FUN_00a6bbc4;
  local_260 = FUN_00a6bbc8;
  local_258 = &LAB_00a6bbd4;
  local_250[0] = param_1;
  if (pcVar19 == (code *)0x0) {
LAB_0149e214:
    (*local_260)(local_250,plVar12 + 0x2c);
    plVar12[0x2b] = (long)local_258;
    plVar12[0x28] = (long)local_270;
    plVar12[0x29] = (long)local_268;
    plVar12[0x2a] = (long)local_260;
  }
  else {
    plVar12[0x2a] = 0;
    plVar12[0x2b] = 0;
    plVar12[0x28] = 0;
    plVar12[0x29] = 0;
    (*pcVar19)(plVar12 + 0x2c);
    if (local_260 != (code *)0x0) goto LAB_0149e214;
  }
  FUN_01360a3c(local_280,*param_2);
  local_380 = (long *)0x0;
  if (((*pbVar33 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar11 = *puVar15;
  *puVar26 = uVar11;
  FUN_00cf9884(&local_f0,uVar11,"GridPanel_teamlist_00");
  plVar13 = local_380;
  local_380 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  local_380 = local_f0;
  FUN_01524834(&local_f0,local_280,&local_380);
  FUN_01524070((long *)(param_1 + 0x58),&local_f0);
  plVar13 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar31 = local_f0 + 3;
    do {
      sVar21 = (short)*plVar31;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar20) {
        *(short *)plVar31 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_300 = (undefined1 *)*plVar13;
        FUN_00c44438(lVar23 + 0x8040,&local_300);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  if (local_380 != (long *)0x0) {
    (**(code **)(*local_380 + 0x20))();
  }
  if (local_280[0] != (long *)0x0) {
    plVar13 = local_280[0] + 3;
    do {
      sVar21 = (short)*plVar13;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar20) {
        *(short *)plVar13 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_280[0] + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_300 = (undefined1 *)*local_280[0];
        FUN_00c44438(lVar23 + 0x8040,&local_300);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  puVar29 = (undefined8 *)PTR_DAT_047d4250;
  puVar27 = (undefined8 *)PTR_DAT_047d4248;
  pbVar32 = PTR_DAT_047d4240;
  lVar23 = *(long *)(param_1 + 0x58);
  if (lVar23 == 0) {
    plVar13 = (long *)0x0;
    puVar27 = puVar15;
    puVar29 = puVar26;
    pbVar32 = pbVar33;
  }
  else if (*(short *)(lVar23 + 0x1a) == 0) {
    plVar13 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar23 + 0x1a);
    sVar21 = *(short *)(lVar23 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar21) {
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar20) {
          *psVar1 = sVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_014a0d00;
        bVar20 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_014a0d00:
        bVar20 = false;
      }
      if (bVar20) {
        plVar13 = (long *)0x0;
        if (*(long *)(lVar23 + 0x10) != 0) {
          plVar13 = (long *)(*(long *)(lVar23 + 0x10) + -0x28);
        }
        break;
      }
      plVar13 = (long *)0x0;
      sVar21 = sVar4;
    } while (sVar4 != 0);
  }
  FUN_01560aa4(plVar13);
  FUN_014a2304(plVar13,0);
  pcVar19 = (code *)plVar13[0x69];
  local_300 = &LAB_01de2f70;
  local_2f8 = FUN_00a6bbe0;
  local_2f0 = FUN_00a6bbe4;
  local_2e8 = &LAB_00a6bbf0;
  local_2e0[0] = param_1;
  if (pcVar19 == (code *)0x0) {
LAB_0149e324:
    (*local_2f0)(local_2e0,plVar13 + 0x6c);
    plVar13[0x6b] = (long)local_2e8;
    plVar13[0x68] = (long)local_300;
    plVar13[0x69] = (long)local_2f8;
    plVar13[0x6a] = (long)local_2f0;
  }
  else {
    plVar13[0x6a] = 0;
    plVar13[0x6b] = 0;
    plVar13[0x68] = 0;
    plVar13[0x69] = 0;
    (*pcVar19)(plVar13 + 0x6c);
    if (local_2f0 != (code *)0x0) goto LAB_0149e324;
  }
  pcVar19 = (code *)plVar13[0x29];
  local_380 = (long *)&LAB_01de2f78;
  local_378 = FUN_00a6bbfc;
  local_370 = FUN_00a6bc00;
  local_368 = &LAB_00a6bc0c;
  local_360[0] = param_1;
  if (pcVar19 == (code *)0x0) {
LAB_0149e390:
    (*local_370)(local_360,plVar13 + 0x2c);
    plVar13[0x2b] = (long)local_368;
    plVar13[0x28] = (long)local_380;
    plVar13[0x29] = (long)local_378;
    plVar13[0x2a] = (long)local_370;
  }
  else {
    plVar13[0x2a] = 0;
    plVar13[0x2b] = 0;
    plVar13[0x28] = 0;
    plVar13[0x29] = 0;
    (*pcVar19)(plVar13 + 0x2c);
    if (local_370 != (code *)0x0) goto LAB_0149e390;
  }
  FUN_01360a3c(local_390,*param_2);
  local_490 = (long *)0x0;
  if (((*pbVar32 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar11 = *puVar27;
  *puVar29 = uVar11;
  FUN_00cf9884(&local_f0,uVar11,"GridPanel_box_00");
  plVar31 = local_490;
  local_490 = (long *)0x0;
  if (plVar31 != (long *)0x0) {
    (**(code **)(*plVar31 + 0x20))();
  }
  local_490 = local_f0;
  FUN_01524834(&local_f0,local_390,&local_490);
  FUN_01524070((long *)(param_1 + 0x38),&local_f0);
  plVar31 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar24 = local_f0 + 3;
    do {
      sVar21 = (short)*plVar24;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar20) {
        *(short *)plVar24 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_410 = (undefined1 *)*plVar31;
        FUN_00c44438(lVar23 + 0x8040,&local_410);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  if (local_490 != (long *)0x0) {
    (**(code **)(*local_490 + 0x20))();
  }
  if (local_390[0] != (long *)0x0) {
    plVar31 = local_390[0] + 3;
    do {
      sVar21 = (short)*plVar31;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar20) {
        *(short *)plVar31 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_390[0] + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_410 = (undefined1 *)*local_390[0];
        FUN_00c44438(lVar23 + 0x8040,&local_410);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  puVar15 = (undefined8 *)PTR_DAT_047d4250;
  pbVar33 = PTR_DAT_047d4240;
  lVar23 = *(long *)(param_1 + 0x38);
  if (lVar23 == 0) {
    plVar31 = (long *)0x0;
    puVar15 = puVar29;
    pbVar33 = pbVar32;
  }
  else if (*(short *)(lVar23 + 0x1a) == 0) {
    plVar31 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar23 + 0x1a);
    sVar21 = *(short *)(lVar23 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar21) {
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar20) {
          *psVar1 = sVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_014a0d60;
        bVar20 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_014a0d60:
        bVar20 = false;
      }
      if (bVar20) {
        plVar31 = (long *)0x0;
        if (*(long *)(lVar23 + 0x10) != 0) {
          plVar31 = (long *)(*(long *)(lVar23 + 0x10) + -0x28);
        }
        break;
      }
      plVar31 = (long *)0x0;
      sVar21 = sVar4;
    } while (sVar4 != 0);
  }
  (**(code **)(*plVar31 + 0x88))(plVar31);
  FUN_014e974c(plVar31,param_1 + 0x1d0,1,0);
  FUN_014a2304(plVar31,0);
  pcVar19 = (code *)plVar31[0x29];
  local_410 = &LAB_0173b2e0;
  local_408 = FUN_00a6bc18;
  local_400 = FUN_00a6bc1c;
  local_3f8 = &LAB_00a6bc28;
  local_3f0[0] = param_1;
  if (pcVar19 == (code *)0x0) {
LAB_0149e4c8:
    (*local_400)(local_3f0,plVar31 + 0x2c);
    plVar31[0x2b] = (long)local_3f8;
    plVar31[0x28] = (long)local_410;
    plVar31[0x29] = (long)local_408;
    plVar31[0x2a] = (long)local_400;
  }
  else {
    plVar31[0x2a] = 0;
    plVar31[0x2b] = 0;
    plVar31[0x28] = 0;
    plVar31[0x29] = 0;
    (*pcVar19)(plVar31 + 0x2c);
    if (local_400 != (code *)0x0) goto LAB_0149e4c8;
  }
  pcVar19 = (code *)plVar31[0x69];
  local_490 = (long *)&LAB_01de2f80;
  local_488 = FUN_00a6bc34;
  local_480 = FUN_00a6bc38;
  local_478 = &LAB_00a6bc44;
  local_470[0] = param_1;
  if (pcVar19 == (code *)0x0) {
LAB_0149e538:
    (*local_480)(local_470,plVar31 + 0x6c);
    plVar31[0x6b] = (long)local_478;
    plVar31[0x68] = (long)local_490;
    plVar31[0x69] = (long)local_488;
    plVar31[0x6a] = (long)local_480;
  }
  else {
    plVar31[0x6a] = 0;
    plVar31[0x6b] = 0;
    plVar31[0x68] = 0;
    plVar31[0x69] = 0;
    (*pcVar19)(plVar31 + 0x6c);
    if (local_480 != (code *)0x0) goto LAB_0149e538;
  }
  uVar11 = FUN_01195854();
  iVar9 = FUN_019aeb9c(uVar11,0);
  local_498 = (long *)0x0;
  if (((*pbVar33 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar11 = *(undefined8 *)PTR_DAT_047d4248;
  *puVar15 = uVar11;
  FUN_00cf9884(&local_f0,uVar11,"GridPanel_box_change_00");
  plVar24 = local_498;
  local_498 = (long *)0x0;
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x20))();
  }
  local_498 = local_f0;
  if (((*pbVar33 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar11 = *(undefined8 *)PTR_DAT_047d4248;
  *puVar15 = uVar11;
  FUN_00cf9884(&local_f0,uVar11,"L_box_change_00/box_08");
  plVar24 = local_f0;
  puVar26 = (undefined8 *)PTR_DAT_047d4248;
  if (iVar9 == 0x10) {
    if (((*pbVar33 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    puVar26 = (undefined8 *)PTR_DAT_047d4248;
    uVar11 = *(undefined8 *)PTR_DAT_047d4248;
    *puVar15 = uVar11;
    FUN_00cf9884(&local_f0,uVar11,"GridPanel_box_change_01");
    plVar25 = local_f0;
    plVar28 = local_498;
    local_498 = (long *)0x0;
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x20))();
    }
    local_498 = plVar25;
    if (((*pbVar33 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar11 = *puVar26;
    *puVar15 = uVar11;
    pcVar18 = "L_box_change_00/box_16";
LAB_0149e6dc:
    FUN_00cf9884(&local_f0,uVar11,pcVar18);
    plVar28 = local_f0;
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x20))(plVar24);
    }
  }
  else {
    if (iVar9 == 0x20) {
      if (((*pbVar33 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *puVar26;
      *puVar15 = uVar11;
      FUN_00cf9884(&local_f0,uVar11,"GridPanel_box_change_02");
      plVar25 = local_f0;
      plVar28 = local_498;
      local_498 = (long *)0x0;
      if (plVar28 != (long *)0x0) {
        (**(code **)(*plVar28 + 0x20))();
      }
      local_498 = plVar25;
      if (((*pbVar33 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *puVar26;
      pcVar18 = "L_box_change_00/box_32";
      *puVar15 = uVar11;
      goto LAB_0149e6dc;
    }
    plVar28 = local_f0;
  }
  plVar24 = *(long **)(param_1 + 0x30);
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x58))(plVar24);
  }
  local_f0 = (long *)PTR_DAT_047d8b70;
  if (plVar28 != (long *)0x0) {
    local_f0 = plVar28 + 6;
  }
  local_f0 = (long *)*local_f0;
  plVar25 = (long *)PTR_PTR_047d4508;
  if (plVar28 != (long *)0x0) {
    plVar25 = plVar28 + 7;
  }
  local_e8 = (code *)*plVar25;
  if (plVar28 == (long *)0x0) {
    local_e0 = 0;
  }
  else {
    local_e0 = plVar28[8];
  }
  local_d8 = (long *)0x0;
  plVar25 = (long *)0x0;
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x18))(plVar28);
    plVar25 = plVar28;
  }
  local_d8 = plVar25;
  if ((plVar24 != (long *)0x0) && (lVar23 = FUN_00e895f4(plVar24[0x2e],&local_f0), lVar23 != 0)) {
    FUN_00dfcea4();
  }
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x60))(plVar24);
  }
  FUN_01360a3c(local_4a8,*param_2);
  FUN_01524834(&local_f0,local_4a8,&local_498);
  FUN_01524070((long *)(param_1 + 0x68),&local_f0);
  plVar24 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar25 = local_f0 + 3;
    do {
      sVar21 = (short)*plVar25;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar20) {
        *(short *)plVar25 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_530 = (undefined1 *)*plVar24;
        FUN_00c44438(lVar23 + 0x8040,&local_530);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  if (local_4a8[0] != (long *)0x0) {
    plVar24 = local_4a8[0] + 3;
    do {
      sVar21 = (short)*plVar24;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar20) {
        *(short *)plVar24 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_4a8[0] + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_530 = (undefined1 *)*local_4a8[0];
        FUN_00c44438(lVar23 + 0x8040,&local_530);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  puVar29 = (undefined8 *)PTR_DAT_047d4250;
  puVar27 = (undefined8 *)PTR_DAT_047d4248;
  pbVar32 = PTR_DAT_047d4240;
  lVar23 = *(long *)(param_1 + 0x68);
  if (lVar23 == 0) {
    plVar24 = (long *)0x0;
    puVar27 = puVar26;
    puVar29 = puVar15;
    pbVar32 = pbVar33;
  }
  else if (*(short *)(lVar23 + 0x1a) == 0) {
    plVar24 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar23 + 0x1a);
    sVar21 = *(short *)(lVar23 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar21) {
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar20) {
          *psVar1 = sVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_014a0dc8;
        bVar20 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_014a0dc8:
        bVar20 = false;
      }
      if (bVar20) {
        plVar24 = (long *)0x0;
        if (*(long *)(lVar23 + 0x10) != 0) {
          plVar24 = (long *)(*(long *)(lVar23 + 0x10) + -0x28);
        }
        break;
      }
      plVar24 = (long *)0x0;
      sVar21 = sVar4;
    } while (sVar4 != 0);
  }
  pcVar19 = (code *)plVar24[0x29];
  local_530 = &LAB_01de2f88;
  local_528 = FUN_00a6bc50;
  local_520 = FUN_00a6bc54;
  local_518 = &LAB_00a6bc60;
  local_510[0] = param_1;
  if (pcVar19 == (code *)0x0) {
LAB_0149e818:
    (*local_520)(local_510,plVar24 + 0x2c);
    plVar24[0x2b] = (long)local_518;
    plVar24[0x28] = (long)local_530;
    plVar24[0x29] = (long)local_528;
    plVar24[0x2a] = (long)local_520;
  }
  else {
    plVar24[0x2a] = 0;
    plVar24[0x2b] = 0;
    plVar24[0x28] = 0;
    plVar24[0x29] = 0;
    (*pcVar19)(plVar24 + 0x2c);
    if (local_520 != (code *)0x0) goto LAB_0149e818;
  }
  pcVar19 = (code *)plVar24[0x69];
  local_5b0 = &LAB_00a6bc6c;
  local_5a8 = FUN_00a6bc70;
  local_5a0 = FUN_00a6bc74;
  local_598 = &LAB_00a6bc80;
  local_590[0] = param_1;
  if (pcVar19 == (code *)0x0) {
LAB_0149e888:
    (*local_5a0)(local_590,plVar24 + 0x6c);
    plVar24[0x6b] = (long)local_598;
    plVar24[0x68] = (long)local_5b0;
    plVar24[0x69] = (long)local_5a8;
    plVar24[0x6a] = (long)local_5a0;
  }
  else {
    plVar24[0x6a] = 0;
    plVar24[0x6b] = 0;
    plVar24[0x68] = 0;
    plVar24[0x69] = 0;
    (*pcVar19)(plVar24 + 0x6c);
    if (local_5a0 != (code *)0x0) goto LAB_0149e888;
  }
  FUN_014a22d4(&local_f0,plVar31,param_1 + 0x174);
  pcVar19 = local_e8;
  local_5b8 = (long *)0x0;
  if ((local_e8 == (code *)0x0) || (*local_e8 == (code)0x0)) {
    plVar25 = (long *)FUN_00d44228();
    if (plVar25 != (long *)0x0) {
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
    if (local_5b8 != (long *)0x0) {
      lVar23 = *local_5b8;
      local_5b8 = plVar25;
      (**(code **)(lVar23 + 0x20))();
      plVar25 = local_5b8;
    }
  }
  else {
    if (((*pbVar32 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar11 = *puVar27;
    *puVar29 = uVar11;
    FUN_00cf9884(&local_670,uVar11,pcVar19);
    plVar25 = local_5b8;
    local_5b8 = (long *)0x0;
    if (plVar25 != (long *)0x0) {
      (**(code **)(*plVar25 + 0x20))();
    }
    local_5b8 = local_670;
    plVar25 = local_5b8;
  }
  local_5b8 = plVar25;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  FUN_01360a3c(local_5c8,*param_2);
  FUN_0119f2f4(&local_f0,local_5c8,&local_5b8);
  FUN_0119eb24(param_1 + 0xa8,&local_f0);
  plVar25 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar30 = local_f0 + 3;
    do {
      sVar21 = (short)*plVar30;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar20) {
        *(short *)plVar30 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_670 = (long *)*plVar25;
        FUN_00c44438(lVar23 + 0x8040,&local_670);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  if (local_5c8[0] != (long *)0x0) {
    plVar25 = local_5c8[0] + 3;
    do {
      sVar21 = (short)*plVar25;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar20) {
        *(short *)plVar25 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_5c8[0] + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_670 = (long *)*local_5c8[0];
        FUN_00c44438(lVar23 + 0x8040,&local_670);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  FUN_014a22d4(&local_f0,plVar13,param_1 + 0x194);
  pcVar19 = local_e8;
  local_5d0 = (long *)0x0;
  if ((local_e8 == (code *)0x0) || (*local_e8 == (code)0x0)) {
    plVar25 = (long *)FUN_00d44228();
    if (plVar25 != (long *)0x0) {
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
    if (local_5d0 != (long *)0x0) {
      lVar23 = *local_5d0;
      local_5d0 = plVar25;
      (**(code **)(lVar23 + 0x20))();
      plVar25 = local_5d0;
    }
  }
  else {
    if (((*pbVar32 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar11 = *puVar27;
    *puVar29 = uVar11;
    FUN_00cf9884(&local_670,uVar11,pcVar19);
    plVar25 = local_5d0;
    local_5d0 = (long *)0x0;
    if (plVar25 != (long *)0x0) {
      (**(code **)(*plVar25 + 0x20))();
    }
    local_5d0 = local_670;
    plVar25 = local_5d0;
  }
  local_5d0 = plVar25;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  FUN_01360a3c(local_5e0,*param_2);
  FUN_0119f2f4(&local_f0,local_5e0,&local_5d0);
  FUN_0119eb24(param_1 + 0xf8,&local_f0);
  plVar25 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar30 = local_f0 + 3;
    do {
      sVar21 = (short)*plVar30;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar20) {
        *(short *)plVar30 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_670 = (long *)*plVar25;
        FUN_00c44438(lVar23 + 0x8040,&local_670);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  if (local_5e0[0] != (long *)0x0) {
    plVar25 = local_5e0[0] + 3;
    do {
      sVar21 = (short)*plVar25;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar20) {
        *(short *)plVar25 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_5e0[0] + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_670 = (long *)*local_5e0[0];
        FUN_00c44438(lVar23 + 0x8040,&local_670);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  FUN_01360a3c(local_5f0,*param_2);
  local_6f0 = (long *)0x0;
  if (((*pbVar32 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar11 = *puVar27;
  *puVar29 = uVar11;
  FUN_00cf9884(&local_f0,uVar11,"GridPanel_btn_00");
  plVar25 = local_6f0;
  local_6f0 = (long *)0x0;
  if (plVar25 != (long *)0x0) {
    (**(code **)(*plVar25 + 0x20))();
  }
  local_6f0 = local_f0;
  FUN_01524834(&local_f0,local_5f0,&local_6f0);
  FUN_01524070((long *)(param_1 + 0x78),&local_f0);
  plVar25 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar30 = local_f0 + 3;
    do {
      sVar21 = (short)*plVar30;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar20) {
        *(short *)plVar30 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_670 = (long *)*plVar25;
        FUN_00c44438(lVar23 + 0x8040,&local_670);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  if (local_6f0 != (long *)0x0) {
    (**(code **)(*local_6f0 + 0x20))();
  }
  if (local_5f0[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_5f0[0] + 3);
    do {
      sVar21 = *psVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_5f0[0] + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_670 = (long *)*local_5f0[0];
        FUN_00c44438(lVar23 + 0x8040,&local_670);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  puVar15 = (undefined8 *)PTR_DAT_047d4248;
  pbVar33 = PTR_DAT_047d4240;
  lVar23 = *(long *)(param_1 + 0x78);
  if (lVar23 == 0) {
LAB_0149ea58:
    plVar25 = (long *)0x0;
    puVar15 = puVar27;
    pbVar33 = pbVar32;
  }
  else {
    if (*(short *)(lVar23 + 0x1a) == 0) {
      puVar27 = (undefined8 *)PTR_DAT_047d4248;
      pbVar32 = PTR_DAT_047d4240;
      goto LAB_0149ea58;
    }
    psVar1 = (short *)(lVar23 + 0x1a);
    sVar21 = *(short *)(lVar23 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar21) {
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar20) {
          *psVar1 = sVar21 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_014a0e24;
        bVar20 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_014a0e24:
        bVar20 = false;
      }
      if (bVar20) {
        plVar25 = (long *)0x0;
        if (*(long *)(lVar23 + 0x10) != 0) {
          plVar25 = (long *)(*(long *)(lVar23 + 0x10) + -0x28);
        }
        break;
      }
      plVar25 = (long *)0x0;
      sVar21 = sVar4;
    } while (sVar4 != 0);
  }
  pcVar19 = (code *)plVar25[0x29];
  local_670 = (long *)&LAB_00a6bc8c;
  local_668 = FUN_00a6bcac;
  local_660 = FUN_00a6bcb0;
  local_658 = &LAB_00a6bcbc;
  local_650[0] = param_1;
  if (pcVar19 == (code *)0x0) {
LAB_0149eaa4:
    (*local_660)(local_650,plVar25 + 0x2c);
    plVar25[0x2b] = (long)local_658;
    plVar25[0x28] = (long)local_670;
    plVar25[0x29] = (long)local_668;
    plVar25[0x2a] = (long)local_660;
  }
  else {
    plVar25[0x2a] = 0;
    plVar25[0x2b] = 0;
    plVar25[0x28] = 0;
    plVar25[0x29] = 0;
    (*pcVar19)(plVar25 + 0x2c);
    if (local_660 != (code *)0x0) goto LAB_0149eaa4;
  }
  pcVar19 = (code *)plVar25[0x69];
  local_6f0 = (long *)&LAB_01de3464;
  local_6e8 = FUN_00a6bcc8;
  local_6e0 = FUN_00a6bccc;
  local_6d8 = &LAB_00a6bcd8;
  alStack_6d0[0] = param_1;
  if (pcVar19 == (code *)0x0) {
LAB_0149eb0c:
    (*local_6e0)(alStack_6d0,plVar25 + 0x6c);
    plVar25[0x6b] = (long)local_6d8;
    plVar25[0x68] = (long)local_6f0;
    plVar25[0x69] = (long)local_6e8;
    plVar25[0x6a] = (long)local_6e0;
  }
  else {
    plVar25[0x6a] = 0;
    plVar25[0x6b] = 0;
    plVar25[0x68] = 0;
    plVar25[0x69] = 0;
    (*pcVar19)(plVar25 + 0x6c);
    if (local_6e0 != (code *)0x0) goto LAB_0149eb0c;
  }
  FUN_014a22d4(&local_f0,plVar25,param_1 + 0x184);
  pcVar19 = local_e8;
  local_6f8 = (long *)0x0;
  if ((local_e8 == (code *)0x0) || (*local_e8 == (code)0x0)) {
    plVar30 = (long *)FUN_00d44228();
    if (plVar30 != (long *)0x0) {
      (**(code **)(*plVar30 + 0x18))(plVar30);
    }
    if (local_6f8 != (long *)0x0) {
      lVar23 = *local_6f8;
      local_6f8 = plVar30;
      (**(code **)(lVar23 + 0x20))();
      plVar30 = local_6f8;
    }
  }
  else {
    if (((*pbVar33 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar11 = *puVar15;
    *(undefined8 *)PTR_DAT_047d4250 = uVar11;
    FUN_00cf9884(&local_7c0,uVar11,pcVar19);
    plVar30 = local_6f8;
    local_6f8 = (long *)0x0;
    if (plVar30 != (long *)0x0) {
      (**(code **)(*plVar30 + 0x20))();
    }
    local_6f8 = local_7c0;
    plVar30 = local_6f8;
  }
  local_6f8 = plVar30;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  FUN_01360a3c(local_708,*param_2);
  FUN_0119f2f4(&local_f0,local_708,&local_6f8);
  FUN_0119eb24((long *)(param_1 + 0xd8),&local_f0);
  plVar30 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar22 = local_f0 + 3;
    do {
      sVar21 = (short)*plVar22;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar20) {
        *(short *)plVar22 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_7c0 = (long *)*plVar30;
        FUN_00c44438(lVar23 + 0x8040,&local_7c0);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  if (local_708[0] != (long *)0x0) {
    plVar30 = local_708[0] + 3;
    do {
      sVar21 = (short)*plVar30;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar20) {
        *(short *)plVar30 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_708[0] + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_7c0 = (long *)*local_708[0];
        FUN_00c44438(lVar23 + 0x8040,&local_7c0);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  FUN_014a22d4(&local_f0,plVar25,param_1 + 0x17c);
  pcVar19 = local_e8;
  local_710 = (long *)0x0;
  if ((local_e8 == (code *)0x0) || (*local_e8 == (code)0x0)) {
    plVar30 = (long *)FUN_00d44228();
    if (plVar30 != (long *)0x0) {
      (**(code **)(*plVar30 + 0x18))(plVar30);
    }
    if (local_710 != (long *)0x0) {
      lVar23 = *local_710;
      local_710 = plVar30;
      (**(code **)(lVar23 + 0x20))();
      plVar30 = local_710;
    }
  }
  else {
    if (((*pbVar33 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar11 = *puVar15;
    *(undefined8 *)PTR_DAT_047d4250 = uVar11;
    FUN_00cf9884(&local_7c0,uVar11,pcVar19);
    plVar30 = local_710;
    local_710 = (long *)0x0;
    if (plVar30 != (long *)0x0) {
      (**(code **)(*plVar30 + 0x20))();
    }
    local_710 = local_7c0;
    plVar30 = local_710;
  }
  local_710 = plVar30;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  FUN_01360a3c(local_720,*param_2);
  FUN_0119f2f4(&local_f0,local_720,&local_710);
  FUN_0119eb24((long *)(param_1 + 0xb8),&local_f0);
  plVar30 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar22 = local_f0 + 3;
    do {
      sVar21 = (short)*plVar22;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar20) {
        *(short *)plVar22 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_7c0 = (long *)*plVar30;
        FUN_00c44438(lVar23 + 0x8040,&local_7c0);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  if (local_720[0] != (long *)0x0) {
    plVar30 = local_720[0] + 3;
    do {
      sVar21 = (short)*plVar30;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar20) {
        *(short *)plVar30 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_720[0] + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_7c0 = (long *)*local_720[0];
        FUN_00c44438(lVar23 + 0x8040,&local_7c0);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  iVar9 = FUN_014a24ec();
  if (iVar9 == 0) {
    local_728 = 0x300000000;
    local_730 = 0x300000002;
  }
  else if (iVar9 == 1) {
    local_728 = 0x500000000;
    local_730 = 0x500000002;
  }
  else {
    local_728 = 0x500000000;
    local_730 = 0x500000004;
  }
  FUN_014a22d4(&local_f0,plVar24,&local_728);
  pcVar19 = local_e8;
  local_738 = (long *)0x0;
  if ((local_e8 == (code *)0x0) || (*local_e8 == (code)0x0)) {
    plVar30 = (long *)FUN_00d44228();
    if (plVar30 != (long *)0x0) {
      (**(code **)(*plVar30 + 0x18))(plVar30);
    }
    if (local_738 != (long *)0x0) {
      lVar23 = *local_738;
      local_738 = plVar30;
      (**(code **)(lVar23 + 0x20))();
      plVar30 = local_738;
    }
  }
  else {
    if (((*pbVar33 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar11 = *puVar15;
    *(undefined8 *)PTR_DAT_047d4250 = uVar11;
    FUN_00cf9884(&local_7c0,uVar11,pcVar19);
    plVar30 = local_738;
    local_738 = (long *)0x0;
    if (plVar30 != (long *)0x0) {
      (**(code **)(*plVar30 + 0x20))();
    }
    local_738 = local_7c0;
    plVar30 = local_738;
  }
  local_738 = plVar30;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  FUN_01360a3c(local_748,*param_2);
  FUN_0119f2f4(&local_f0,local_748,&local_738);
  FUN_0119eb24(param_1 + 0xe8,&local_f0);
  plVar30 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar22 = local_f0 + 3;
    do {
      sVar21 = (short)*plVar22;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar20) {
        *(short *)plVar22 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_7c0 = (long *)*plVar30;
        FUN_00c44438(lVar23 + 0x8040,&local_7c0);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  if (local_748[0] != (long *)0x0) {
    plVar30 = local_748[0] + 3;
    do {
      sVar21 = (short)*plVar30;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar20) {
        *(short *)plVar30 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_748[0] + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_7c0 = (long *)*local_748[0];
        FUN_00c44438(lVar23 + 0x8040,&local_7c0);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  FUN_014a22d4(&local_f0,plVar24,&local_730);
  pcVar19 = local_e8;
  local_750 = (long *)0x0;
  if ((local_e8 == (code *)0x0) || (*local_e8 == (code)0x0)) {
    plVar30 = (long *)FUN_00d44228();
    if (plVar30 != (long *)0x0) {
      (**(code **)(*plVar30 + 0x18))(plVar30);
    }
    if (local_750 != (long *)0x0) {
      lVar23 = *local_750;
      local_750 = plVar30;
      (**(code **)(lVar23 + 0x20))();
      plVar30 = local_750;
    }
  }
  else {
    if (((*pbVar33 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar11 = *puVar15;
    *(undefined8 *)PTR_DAT_047d4250 = uVar11;
    FUN_00cf9884(&local_7c0,uVar11,pcVar19);
    plVar30 = local_750;
    local_750 = (long *)0x0;
    if (plVar30 != (long *)0x0) {
      (**(code **)(*plVar30 + 0x20))();
    }
    local_750 = local_7c0;
    plVar30 = local_750;
  }
  local_750 = plVar30;
  puVar6 = PTR_DAT_047d4250;
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  FUN_01360a3c(local_760,*param_2);
  FUN_0119f2f4(&local_f0,local_760,&local_750);
  FUN_0119eb24(param_1 + 200,&local_f0);
  plVar30 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar22 = local_f0 + 3;
    do {
      sVar21 = (short)*plVar22;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar20) {
        *(short *)plVar22 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_7c0 = (long *)*plVar30;
        FUN_00c44438(lVar23 + 0x8040,&local_7c0);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  if (local_760[0] != (long *)0x0) {
    plVar30 = local_760[0] + 3;
    do {
      sVar21 = (short)*plVar30;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar20) {
        *(short *)plVar30 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_760[0] + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_7c0 = (long *)*local_760[0];
        FUN_00c44438(lVar23 + 0x8040,&local_7c0);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  FUN_01360a3c(local_770,*param_2);
  local_778 = (long *)0x0;
  if (((*pbVar33 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar11 = *puVar15;
  *(undefined8 *)puVar6 = uVar11;
  FUN_00cf9884(&local_f0,uVar11,"GridPanel_marking_00");
  plVar30 = local_778;
  local_778 = (long *)0x0;
  if (plVar30 != (long *)0x0) {
    (**(code **)(*plVar30 + 0x20))();
  }
  local_778 = local_f0;
  FUN_01524834(&local_f0,local_770,&local_778);
  FUN_01524070(param_1 + 0x98,&local_f0);
  plVar30 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar22 = local_f0 + 3;
    do {
      sVar21 = (short)*plVar22;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar20) {
        *(short *)plVar22 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_7c0 = (long *)*plVar30;
        FUN_00c44438(lVar23 + 0x8040,&local_7c0);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  if (local_778 != (long *)0x0) {
    (**(code **)(*local_778 + 0x20))();
  }
  if (local_770[0] != (long *)0x0) {
    plVar30 = local_770[0] + 3;
    do {
      sVar21 = (short)*plVar30;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar20) {
        *(short *)plVar30 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_770[0] + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_7c0 = (long *)*local_770[0];
        FUN_00c44438(lVar23 + 0x8040,&local_7c0);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  plVar30 = (long *)*param_2;
  if (plVar30 != (long *)0x0) {
    lVar23 = plVar30[6];
    if (*(long *)(lVar23 + 0x10) == 0) {
LAB_014a175c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar21 = *psVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar23 + 0x10))();
      *(undefined8 *)(lVar23 + 8) = uVar11;
      *(undefined4 *)(lVar23 + 0x1c) = 0xfffffffe;
    }
    else if (sVar21 == -1) {
LAB_014a177c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    lVar23 = plVar30[6];
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar21 = *psVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      *(undefined8 *)(lVar23 + 0x10) = 0;
      (**(code **)(*plVar30 + 0x50))(plVar30);
    }
    else if (sVar21 == 0) goto LAB_0149f374;
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  FUN_014a8964(param_1);
  FUN_014a8164(param_1);
  iVar9 = *(int *)(param_1 + 0x284);
  if (iVar9 - 1U < 4) {
    FUN_01dcc624(param_1);
    iVar9 = *(int *)(param_1 + 0x284);
  }
  if (iVar9 == 5) {
    local_780 = *(long **)(param_1 + 0x30);
    if (local_780 != (long *)0x0) {
      (**(code **)(*local_780 + 0x58))();
    }
    local_7a0 = 0x4f3f628790ff6ae4;
    pcStack_798 = "L_top_head_00/P_icon_key_x_00";
    local_790 = 0x1d;
    local_788 = (long *)0x0;
    FUN_01dcc454(&local_780,&local_7a0,0x66);
    if (local_788 != (long *)0x0) {
      (**(code **)(*local_788 + 0x20))();
    }
    if (local_780 != (long *)0x0) {
      (**(code **)(*local_780 + 0x60))();
    }
  }
  FUN_014e4eac(param_1,param_1 + 0x1d0);
  puVar6 = PTR_DAT_047d8280;
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  puVar8 = PTR_DAT_047d8290;
  puVar7 = PTR_DAT_047d8288;
  lVar23 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar23;
  local_7c0 = (long *)0xcd12ac4488ecf58f;
  local_7b8 = "SET_STATE_GAME_CYCLE_BOX";
  local_7b0 = 0x18;
  local_7a8 = (long *)0x0;
  if (*(long *)(lVar23 + 0x48) == 0) {
    uVar11 = 0xffffffffffffffff;
  }
  else {
    uVar11 = FUN_00cf8198();
  }
  pcVar18 = local_7b8;
  memset(&local_f0,0,0x80);
  plVar30 = *(long **)(*(long *)(lVar23 + 0x200) + 0x60);
  iVar9 = (**(code **)(*plVar30 + 0xd0))(plVar30,pcVar18,uVar11,1,&LAB_01080c70,lVar23,0,0,0);
  if (iVar9 != 0) {
    FUN_0104f218(*(undefined8 *)(lVar23 + 0x220),&local_7c0,iVar9,uVar11,0,&local_f0,0);
    pcVar19 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      local_d8 = (long *)0x0;
      local_f0 = (long *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar19)(auStack_d0);
    }
  }
  if (local_7a8 != (long *)0x0) {
    (**(code **)(*local_7a8 + 0x20))();
  }
  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar23 = *(long *)puVar7;
  *(long *)puVar8 = lVar23;
  local_7c0 = (long *)0x2a61fcefe7006747;
  local_7b8 = "SET_STATE_BOX_PM";
  local_7b0 = 0x10;
  local_7a8 = (long *)0x0;
  if (*(long *)(lVar23 + 0x48) == 0) {
    uVar11 = 0xffffffffffffffff;
  }
  else {
    uVar11 = FUN_00cf8198();
  }
  pcVar18 = local_7b8;
  puVar6 = PTR_DAT_047d4248;
  memset(&local_f0,0,0x80);
  plVar30 = *(long **)(*(long *)(lVar23 + 0x200) + 0x60);
  iVar9 = (**(code **)(*plVar30 + 0xd0))(plVar30,pcVar18,uVar11,1,&LAB_01080c70,lVar23,0,0,0);
  if (iVar9 != 0) {
    FUN_0104f218(*(undefined8 *)(lVar23 + 0x220),&local_7c0,iVar9,uVar11,0,&local_f0,0);
    pcVar19 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      local_d8 = (long *)0x0;
      local_f0 = (long *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar19)(auStack_d0);
    }
  }
  puVar7 = PTR_DAT_047d4240;
  if (local_7a8 != (long *)0x0) {
    (**(code **)(*local_7a8 + 0x20))();
  }
  FUN_01360a3c(local_7d0,*param_2);
  puVar8 = PTR_DAT_047d4250;
  local_778 = (long *)0x0;
  if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar11 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar8 = uVar11;
  FUN_00cf9884(&local_f0,uVar11,"Button_box_head_00");
  plVar30 = local_778;
  local_778 = (long *)0x0;
  if (plVar30 != (long *)0x0) {
    (**(code **)(*plVar30 + 0x20))();
  }
  local_778 = local_f0;
  FUN_0119f2f4(&local_f0,local_7d0,&local_778);
  plVar30 = local_f0;
  if (local_f0 == (long *)0x0) {
    plVar22 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_f0 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_f0 + 0x1a);
      sVar21 = *(short *)((long)local_f0 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar21) {
          cVar5 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar20) {
            *psVar1 = sVar21 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_014a0ed4;
          bVar20 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_014a0ed4:
          bVar20 = false;
        }
        if (bVar20) {
          plVar22 = (long *)0x0;
          if (local_f0[2] != 0) {
            plVar22 = (long *)(local_f0[2] + -0x28);
          }
          goto LAB_014a0f8c;
        }
        sVar21 = sVar4;
      } while (sVar4 != 0);
    }
    plVar22 = (long *)0x0;
LAB_014a0f8c:
    plVar3 = local_f0 + 3;
    do {
      sVar21 = (short)*plVar3;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar20) {
        *(short *)plVar3 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_7c0 = (long *)*plVar30;
        FUN_00c44438(lVar23 + 0x8040,&local_7c0);
      }
    }
    else if (sVar21 == 0) goto LAB_0149f7d0;
  }
  if (local_778 != (long *)0x0) {
    (**(code **)(*local_778 + 0x20))();
  }
  if (local_7d0[0] != (long *)0x0) {
    plVar30 = local_7d0[0] + 3;
    do {
      sVar21 = (short)*plVar30;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar30,0x10);
      if (bVar20) {
        *(short *)plVar30 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      piVar2 = (int *)((long)local_7d0[0] + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar20) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_7c0 = (long *)*local_7d0[0];
        FUN_00c44438(lVar23 + 0x8040,&local_7c0);
      }
    }
    else if (sVar21 == 0) {
LAB_0149f7d0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (plVar22 != (long *)0x0) {
    lVar23 = plVar22[6];
    psVar1 = (short *)(lVar23 + 0x1a);
    *(undefined1 *)((long)plVar22 + 0x302) = 0;
    do {
      sVar21 = *psVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      *(undefined8 *)(lVar23 + 0x10) = 0;
      (**(code **)(*plVar22 + 0x50))(plVar22);
    }
    else if (sVar21 == 0) goto LAB_0149f374;
  }
  lVar23 = *(long *)(param_1 + 0xd8);
  if ((lVar23 != 0) && (*(short *)(lVar23 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar23 + 0x1a);
    sVar21 = *(short *)(lVar23 + 0x1a);
LAB_014a0efc:
    sVar4 = *psVar1;
    if (sVar4 == sVar21) {
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_014a0f20;
      bVar20 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_014a0f20:
      bVar20 = false;
    }
    if (!bVar20) goto code_r0x014a0f28;
    lVar23 = *(long *)(lVar23 + 0x10);
    if (lVar23 != 0) {
      lVar14 = *(long *)(lVar23 + 8);
      psVar1 = (short *)(lVar14 + 0x1a);
      *(undefined1 *)(lVar23 + 0x2da) = 0;
      do {
        sVar21 = *psVar1;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar20) {
          *psVar1 = sVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar21 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*(long *)(lVar23 + -0x28) + 0x50))();
      }
      else if (sVar21 == 0) goto LAB_0149f374;
    }
  }
LAB_0149f154:
  lVar23 = *(long *)(param_1 + 0xb8);
  if ((lVar23 != 0) && (*(short *)(lVar23 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar23 + 0x1a);
    sVar21 = *(short *)(lVar23 + 0x1a);
LAB_014a0f44:
    sVar4 = *psVar1;
    if (sVar4 == sVar21) {
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_014a0f68;
      bVar20 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_014a0f68:
      bVar20 = false;
    }
    if (!bVar20) goto code_r0x014a0f70;
    lVar23 = *(long *)(lVar23 + 0x10);
    if (lVar23 != 0) {
      lVar14 = *(long *)(lVar23 + 8);
      psVar1 = (short *)(lVar14 + 0x1a);
      *(undefined1 *)(lVar23 + 0x2da) = 0;
      do {
        sVar21 = *psVar1;
        cVar5 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar20) {
          *psVar1 = sVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar21 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*(long *)(lVar23 + -0x28) + 0x50))();
      }
      else if (sVar21 == 0) goto LAB_0149f374;
    }
  }
LAB_0149f160:
  if (local_750 != (long *)0x0) {
    (**(code **)(*local_750 + 0x20))();
  }
  if (local_738 != (long *)0x0) {
    (**(code **)(*local_738 + 0x20))();
  }
  if (local_710 != (long *)0x0) {
    (**(code **)(*local_710 + 0x20))();
  }
  if (local_6f8 != (long *)0x0) {
    (**(code **)(*local_6f8 + 0x20))();
  }
  pcVar19 = local_6e8;
  if (local_6e8 != (code *)0x0) {
    local_6e0 = (code *)0x0;
    local_6d8 = (undefined1 *)0x0;
    local_6f0 = (long *)0x0;
    local_6e8 = (code *)0x0;
    (*pcVar19)(alStack_6d0);
  }
  pcVar19 = local_668;
  if (local_668 != (code *)0x0) {
    local_658 = (undefined1 *)0x0;
    local_670 = (long *)0x0;
    local_668 = (code *)0x0;
    local_660 = (code *)0x0;
    (*pcVar19)(local_650);
  }
  if (plVar25 != (long *)0x0) {
    lVar23 = plVar25[6];
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar21 = *psVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      *(undefined8 *)(lVar23 + 0x10) = 0;
      (**(code **)(*plVar25 + 0x50))(plVar25);
    }
    else if (sVar21 == 0) goto LAB_0149f374;
  }
  if (local_5d0 != (long *)0x0) {
    (**(code **)(*local_5d0 + 0x20))();
  }
  if (local_5b8 != (long *)0x0) {
    (**(code **)(*local_5b8 + 0x20))();
  }
  pcVar19 = local_5a8;
  if (local_5a8 != (code *)0x0) {
    local_598 = (undefined1 *)0x0;
    local_5a0 = (code *)0x0;
    local_5a8 = (code *)0x0;
    local_5b0 = (undefined1 *)0x0;
    (*pcVar19)(local_590);
  }
  pcVar19 = local_528;
  if (local_528 != (code *)0x0) {
    local_518 = (undefined1 *)0x0;
    local_520 = (code *)0x0;
    local_528 = (code *)0x0;
    local_530 = (undefined1 *)0x0;
    (*pcVar19)(local_510);
  }
  if (plVar24 != (long *)0x0) {
    lVar23 = plVar24[6];
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar21 = *psVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      *(undefined8 *)(lVar23 + 0x10) = 0;
      (**(code **)(*plVar24 + 0x50))(plVar24);
    }
    else if (sVar21 == 0) goto LAB_0149f374;
  }
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x20))();
  }
  if (local_498 != (long *)0x0) {
    (**(code **)(*local_498 + 0x20))();
  }
  pcVar19 = local_488;
  if (local_488 != (code *)0x0) {
    local_478 = (undefined1 *)0x0;
    local_480 = (code *)0x0;
    local_488 = (code *)0x0;
    local_490 = (long *)0x0;
    (*pcVar19)(local_470);
  }
  pcVar19 = local_408;
  if (local_408 != (code *)0x0) {
    local_3f8 = (undefined1 *)0x0;
    local_400 = (code *)0x0;
    local_408 = (code *)0x0;
    local_410 = (undefined1 *)0x0;
    (*pcVar19)(local_3f0);
  }
  if (plVar31 != (long *)0x0) {
    lVar23 = plVar31[6];
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar21 = *psVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      *(undefined8 *)(lVar23 + 0x10) = 0;
      (**(code **)(*plVar31 + 0x50))(plVar31);
    }
    else if (sVar21 == 0) goto LAB_0149f374;
  }
  pcVar19 = local_378;
  if (local_378 != (code *)0x0) {
    local_368 = (undefined1 *)0x0;
    local_370 = (code *)0x0;
    local_378 = (code *)0x0;
    local_380 = (long *)0x0;
    (*pcVar19)(local_360);
  }
  pcVar19 = local_2f8;
  if (local_2f8 != (code *)0x0) {
    local_2e8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2f8 = (code *)0x0;
    local_300 = (undefined1 *)0x0;
    (*pcVar19)(local_2e0);
  }
  if (plVar13 != (long *)0x0) {
    lVar23 = plVar13[6];
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar21 = *psVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      *(undefined8 *)(lVar23 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    else if (sVar21 == 0) goto LAB_0149f374;
  }
  pcVar19 = local_268;
  if (local_268 != (code *)0x0) {
    local_258 = (undefined1 *)0x0;
    local_260 = (code *)0x0;
    local_268 = (code *)0x0;
    local_270 = (long *)0x0;
    (*pcVar19)(local_250);
  }
  pcVar19 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1d8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    local_1f0 = (undefined8 *)0x0;
    (*pcVar19)(local_1d0);
  }
  if (plVar12 != (long *)0x0) {
    lVar23 = plVar12[6];
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar21 = *psVar1;
      cVar5 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar20) {
        *psVar1 = sVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar21 == 1) {
      *(undefined8 *)(lVar23 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar21 == 0) {
LAB_0149f374:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
code_r0x014a0f28:
  sVar21 = sVar4;
  if (sVar4 == 0) goto LAB_0149f154;
  goto LAB_014a0efc;
code_r0x014a0f70:
  sVar21 = sVar4;
  if (sVar4 == 0) goto LAB_0149f160;
  goto LAB_014a0f44;
}


