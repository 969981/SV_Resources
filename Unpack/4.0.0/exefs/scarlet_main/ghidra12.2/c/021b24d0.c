/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021b24d0; name: FUN_021b24d0
 */


void FUN_021b24d0(undefined8 param_1,long param_2,undefined8 *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long **pplVar11;
  short sVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  bool bVar18;
  long *plVar19;
  long *local_128;
  undefined8 uStack_120;
  long *local_118;
  long *local_110;
  undefined8 local_108;
  long *local_100;
  long *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined4 local_d8;
  long *local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  long *local_88;
  long *plStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  long *local_48;
  
  local_68 = *(long **)(param_2 + 0x3a0);
  plVar10 = (long *)(param_2 + 0x2f0);
  local_70 = (long *)0x0;
  lVar14 = *plVar10;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar14) {
    lVar8 = nn::os::GetCurrentThread();
LAB_021b2520:
    if (*plVar10 == 0) goto code_r0x021b2528;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar10 == 0) {
            cVar5 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar18) {
              *plVar10 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_021b2530;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar18) {
        *plVar10 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_021b2530:
    bVar18 = false;
    goto LAB_021b2534;
  }
  bVar18 = true;
LAB_021b2534:
  uVar13 = *(ulong *)(param_2 + 0x290);
  uVar15 = param_3[1];
  if ((uVar13 & uVar13 - 1) == 0) {
    uVar15 = uVar13 - 1 & uVar15;
  }
  else if (uVar13 <= uVar15) {
    uVar6 = 0;
    if (uVar13 != 0) {
      uVar6 = uVar15 / uVar13;
    }
    uVar15 = uVar15 - uVar6 * uVar13;
  }
  FUN_00d00258(&local_88,param_2,uVar15,param_3,local_68);
  if (local_88 != (long *)0x0) {
    lVar8 = local_88[9];
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar12 = *(short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar12) {
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_021b2e30;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_021b2e30:
          bVar4 = false;
        }
        if (bVar4) {
          puVar17 = *(undefined8 **)(lVar8 + 0x10);
          if (puVar17 != (undefined8 *)0x0) {
            plVar19 = puVar17 + -5;
            plVar10 = (long *)(**(code **)*puVar17)(puVar17);
            lVar8 = FUN_021afdec();
            goto joined_r0x021b2e70;
          }
          break;
        }
        sVar12 = sVar3;
      } while (sVar3 != 0);
    }
    goto LAB_021b2580;
  }
  uVar9 = FUN_021b3170(*(undefined8 *)(param_2 + 0x3a0),param_3,&local_68);
  FUN_021b32b0(&local_100,uVar9);
  FUN_021b336c(&local_70,&local_100);
  FUN_021af8c0(&local_100);
  puVar17 = *(undefined8 **)(*(long *)(param_2 + 0x288) + uVar15 * 8);
  local_a8 = *(undefined8 *)(param_2 + 0x290);
  local_a0 = 0;
  if (puVar17 != (undefined8 *)0x0) {
    local_a0 = *puVar17;
  }
  local_b8 = 0;
  uStack_b0 = uVar15;
  uStack_98 = uVar15;
  local_90 = local_a8;
  FUN_021b3410(&local_100,&local_a0,&local_b8,param_3);
  plVar10 = local_70;
  local_88 = local_100;
  plStack_80 = local_f8;
  local_78 = local_f0;
  if (local_100 == (long *)0x0) {
    plVar16 = local_70 + 5;
    (**(code **)(*local_70 + 0x18))(&local_100,local_70);
    local_128 = (long *)0x0;
    uStack_120 = 0;
    plVar19 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      plVar19 = plVar16;
    }
    if ((long *)local_100[2] == plVar19) {
      FUN_00d1f904(&local_128,&local_100);
    }
    if (local_100 != (long *)0x0) {
      plVar10 = local_100 + 3;
      do {
        sVar12 = (short)*plVar10;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(short *)plVar10 = sVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar12 == 1) {
        piVar2 = (int *)((long)local_100 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_118 = (long *)*local_100;
          FUN_00c44438(lVar8 + 0x8040,&local_118);
        }
      }
      else if (sVar12 == 0) goto LAB_021b28c4;
    }
    local_108 = 0;
    local_118 = local_68;
    local_110 = (long *)0x0;
    FUN_00dc7a68(&local_110,&local_128);
    local_100 = (long *)*param_3;
    if (local_100 != (long *)0x0) {
      (**(code **)(*local_100 + 0x18))();
    }
    local_f8 = (long *)param_3[1];
    local_f0 = param_3[2];
    local_e8 = param_3[3];
    local_e0 = (long *)param_3[4];
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x18))();
    }
    local_d8 = *(undefined4 *)(param_3 + 5);
    local_d0 = local_118;
    local_c8 = (long *)0x0;
    local_c0 = 0;
    FUN_00dc7a68(&local_c8,&local_110);
    FUN_01476748(param_2 + 0x288,&local_100);
    plVar10 = local_c8;
    if (local_c8 != (long *)0x0) {
      plVar19 = local_c8 + 3;
      do {
        sVar12 = (short)*plVar19;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *(short *)plVar19 = sVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar12 == 1) {
        piVar2 = (int *)((long)local_c8 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_48 = (long *)*plVar10;
          FUN_00c44438(lVar8 + 0x8040,&local_48);
        }
      }
      else if (sVar12 == 0) goto LAB_021b28c4;
    }
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
    if (local_100 != (long *)0x0) {
      (**(code **)(*local_100 + 0x20))();
    }
    plVar10 = local_110;
    if (local_110 != (long *)0x0) {
      plVar19 = local_110 + 3;
      do {
        sVar12 = (short)*plVar19;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *(short *)plVar19 = sVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar12 == 1) {
        piVar2 = (int *)((long)local_110 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_48 = (long *)*plVar10;
          FUN_00c44438(lVar8 + 0x8040,&local_48);
        }
      }
      else if (sVar12 == 0) goto LAB_021b28c4;
    }
    plVar10 = local_128;
    if (local_128 == (long *)0x0) goto LAB_021b2614;
    plVar19 = local_128 + 3;
    do {
      sVar12 = (short)*plVar19;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *(short *)plVar19 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)local_128 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == -1) goto LAB_021b2614;
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      pplVar11 = &local_48;
      lVar8 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar8;
      local_48 = (long *)*plVar10;
      goto LAB_021b2bf4;
    }
LAB_021b28c0:
    if (sVar12 == 0) {
LAB_021b28c4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  else {
    plVar16 = local_70 + 5;
    (**(code **)(*local_70 + 0x18))(&local_100,local_70);
    local_118 = (long *)0x0;
    local_110 = (long *)0x0;
    plVar19 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      plVar19 = plVar16;
    }
    if ((long *)local_100[2] == plVar19) {
      FUN_00d1f904(&local_118,&local_100);
    }
    if (local_100 != (long *)0x0) {
      plVar10 = local_100 + 3;
      do {
        sVar12 = (short)*plVar10;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(short *)plVar10 = sVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar12 == 1) {
        piVar2 = (int *)((long)local_100 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_128 = (long *)*local_100;
          FUN_00c44438(lVar8 + 0x8040,&local_128);
        }
      }
      else if (sVar12 == 0) goto LAB_021b28c4;
    }
    local_f0 = 0;
    local_100 = local_68;
    local_f8 = (long *)0x0;
    FUN_00dc7a68(&local_f8,&local_118);
    local_88[8] = (long)local_100;
    FUN_00dc7a68(local_88 + 9,&local_f8);
    plVar10 = local_f8;
    if (local_f8 != (long *)0x0) {
      plVar19 = local_f8 + 3;
      do {
        sVar12 = (short)*plVar19;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *(short *)plVar19 = sVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar12 == 1) {
        piVar2 = (int *)((long)local_f8 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_128 = (long *)*plVar10;
          FUN_00c44438(lVar8 + 0x8040,&local_128);
        }
      }
      else if (sVar12 == 0) goto LAB_021b28c4;
    }
    plVar10 = local_118;
    if (local_118 != (long *)0x0) {
      plVar19 = local_118 + 3;
      do {
        sVar12 = (short)*plVar19;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *(short *)plVar19 = sVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar12 != 1) goto LAB_021b28c0;
      piVar2 = (int *)((long)local_118 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        pplVar11 = &local_128;
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_128 = (long *)*plVar10;
        goto LAB_021b2bf4;
      }
    }
  }
  goto LAB_021b2614;
code_r0x021b2528:
  cVar5 = '\x01';
  bVar18 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar18) {
    *plVar10 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_021b2530;
  goto LAB_021b2520;
joined_r0x021b2e70:
  if (plVar10 == (long *)0x0) goto LAB_021b2e84;
  if (plVar10 == (long *)lVar8) {
    plVar10 = plVar19;
    goto LAB_021b2e88;
  }
  plVar10 = (long *)*plVar10;
  goto joined_r0x021b2e70;
LAB_021b2e84:
  plVar10 = (long *)0x0;
LAB_021b2e88:
  FUN_01db74ec(&local_70,plVar10);
  plVar10 = local_70;
  lVar8 = puVar17[1];
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar12 = *psVar1;
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar12 == 1) {
    *(undefined8 *)(lVar8 + 0x10) = 0;
    (**(code **)(*plVar19 + 0x50))(plVar19);
  }
  else if (sVar12 == 0) goto LAB_021b2814;
  if (plVar10 != (long *)0x0) goto LAB_021b2614;
LAB_021b2580:
  uVar9 = FUN_021b3170(*(undefined8 *)(param_2 + 0x3a0),param_3,&local_68);
  FUN_021b32b0(&local_100,uVar9);
  FUN_021b336c(&local_70,&local_100);
  FUN_021af8c0(&local_100);
  plVar19 = local_70;
  plVar16 = local_70 + 5;
  (**(code **)(*local_70 + 0x18))(&local_100,local_70);
  local_118 = (long *)0x0;
  local_110 = (long *)0x0;
  plVar10 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    plVar10 = plVar16;
  }
  if ((long *)local_100[2] == plVar10) {
    FUN_00d1f904(&local_118,&local_100);
  }
  plVar10 = local_100;
  if (local_100 != (long *)0x0) {
    plVar19 = local_100 + 3;
    do {
      sVar12 = (short)*plVar19;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *(short *)plVar19 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)local_100 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_128 = (long *)*plVar10;
        FUN_00c44438(lVar8 + 0x8040,&local_128);
      }
    }
    else if (sVar12 == 0) goto LAB_021b28c4;
  }
  FUN_00dc7a68(local_88 + 9,&local_118);
  plVar10 = local_118;
  if (local_118 != (long *)0x0) {
    plVar19 = local_118 + 3;
    do {
      sVar12 = (short)*plVar19;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *(short *)plVar19 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 != 1) goto LAB_021b28c0;
    piVar2 = (int *)((long)local_118 + 0x1c);
    do {
      iVar7 = *piVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      pplVar11 = &local_100;
      lVar8 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar8;
      local_100 = (long *)*plVar10;
LAB_021b2bf4:
      FUN_00c44438(lVar8 + 0x8040,pplVar11);
    }
  }
LAB_021b2614:
  if (!bVar18) {
    *(undefined8 *)(param_2 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(param_2 + 0x308),local_70,0);
  FUN_021b32b0(param_1,local_70);
  if (local_70 != (long *)0x0) {
    lVar8 = local_70[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_70 + 0x50))();
    }
    else if (sVar12 == 0) {
LAB_021b2814:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


