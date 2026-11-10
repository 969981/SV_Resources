/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029bc3b4; name: FUN_029bc3b4
 */


void FUN_029bc3b4(undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
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
  long *local_e0;
  long *local_c8;
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
  
  if ((param_4 == (long *)0x0) ||
     ((uVar13 = (**(code **)(*param_4 + 0xb8))(param_4), (uVar13 & 1) != 0 &&
      (uVar13 = (**(code **)(**(long **)(param_2 + 0x3a0) + 0xb8))(), (uVar13 & 1) != 0)))) {
    param_4 = *(long **)(param_2 + 0x3a0);
  }
  local_70 = (long *)0x0;
  plVar9 = (long *)(param_2 + 0x2f0);
  lVar14 = *plVar9;
  local_68 = param_4;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar14) {
    lVar8 = nn::os::GetCurrentThread();
LAB_029bc408:
    if (*plVar9 == 0) goto code_r0x029bc410;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar9 == 0) {
            cVar5 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar18) {
              *plVar9 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_029bc418;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar18) {
        *plVar9 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_029bc418:
    bVar18 = false;
    goto LAB_029bc41c;
  }
  bVar18 = true;
LAB_029bc41c:
  uVar13 = *(ulong *)(param_2 + 0x290);
  uVar15 = *(ulong *)(param_3 + 8);
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
      psVar2 = (short *)(lVar8 + 0x1a);
      sVar12 = *(short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar2;
        if (sVar3 == sVar12) {
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar4) {
            *psVar2 = sVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_029bcc78;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_029bcc78:
          bVar4 = false;
        }
        if (bVar4) {
          puVar17 = *(undefined8 **)(lVar8 + 0x10);
          if (puVar17 != (undefined8 *)0x0) {
            plVar19 = puVar17 + -5;
            plVar9 = (long *)(**(code **)*puVar17)(puVar17);
            lVar8 = FUN_00ca3a8c();
            goto joined_r0x029bccb8;
          }
          break;
        }
        sVar12 = sVar3;
      } while (sVar3 != 0);
    }
    goto LAB_029bc45c;
  }
  FUN_029bd208(&local_100,*(undefined8 *)(param_2 + 0x3a0),param_3,&local_68);
  FUN_029bd2cc(&local_70,&local_100);
  if (local_100 != (long *)0x0) {
    lVar8 = local_100[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar12 = *psVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar4) {
        *psVar2 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_100 + 0x50))();
    }
    else if (sVar12 == 0) goto LAB_029bcd68;
  }
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
  FUN_029bd370(&local_100,&local_a0,&local_b8,param_3);
  plVar9 = local_70;
  local_88 = local_100;
  plStack_80 = local_f8;
  local_78 = local_f0;
  if (local_100 == (long *)0x0) {
    plVar16 = local_70 + 5;
    (**(code **)(*local_70 + 0x18))(&local_100,local_70);
    local_128 = (long *)0x0;
    uStack_120 = 0;
    plVar19 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar19 = plVar16;
    }
    if ((long *)local_100[2] == plVar19) {
      FUN_00d1f904(&local_128,&local_100);
    }
    plVar9 = local_100;
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
        piVar1 = (int *)((long)local_100 + 0x1c);
        do {
          iVar7 = *piVar1;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = -1;
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
          local_118 = (long *)*plVar9;
          FUN_00c44438(lVar8 + 0x8040,&local_118);
        }
      }
      else if (sVar12 == 0) goto LAB_029bc784;
    }
    local_108 = 0;
    local_118 = local_68;
    local_110 = (long *)0x0;
    FUN_00dc7a68(&local_110,&local_128);
    FUN_029bd430(&local_100,param_3,&local_118);
    FUN_029bd4c4(param_2 + 0x288,&local_100);
    if (local_c8 != (long *)0x0) {
      plVar9 = local_c8 + 3;
      do {
        sVar12 = (short)*plVar9;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(short *)plVar9 = sVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar12 == 1) {
        piVar1 = (int *)((long)local_c8 + 0x1c);
        do {
          iVar7 = *piVar1;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = -1;
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
          local_48 = (long *)*local_c8;
          FUN_00c44438(lVar8 + 0x8040,&local_48);
        }
      }
      else if (sVar12 == 0) goto LAB_029bc784;
    }
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
    if (local_100 != (long *)0x0) {
      (**(code **)(*local_100 + 0x20))();
    }
    plVar9 = local_110;
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
        piVar1 = (int *)((long)local_110 + 0x1c);
        do {
          iVar7 = *piVar1;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = -1;
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
          local_48 = (long *)*plVar9;
          FUN_00c44438(lVar8 + 0x8040,&local_48);
        }
      }
      else if (sVar12 == 0) goto LAB_029bc784;
    }
    plVar9 = local_128;
    if (local_128 == (long *)0x0) goto LAB_029bc4e8;
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
      piVar1 = (int *)((long)local_128 + 0x1c);
      do {
        iVar7 = *piVar1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == -1) goto LAB_029bc4e8;
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      pplVar11 = &local_48;
      lVar8 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar8;
      local_48 = (long *)*plVar9;
      goto LAB_029bca50;
    }
LAB_029bc780:
    if (sVar12 == 0) {
LAB_029bc784:
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
    if (plVar9 != (long *)0x0) {
      plVar19 = plVar16;
    }
    if ((long *)local_100[2] == plVar19) {
      FUN_00d1f904(&local_118,&local_100);
    }
    if (local_100 != (long *)0x0) {
      plVar9 = local_100 + 3;
      do {
        sVar12 = (short)*plVar9;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(short *)plVar9 = sVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar12 == 1) {
        piVar1 = (int *)((long)local_100 + 0x1c);
        do {
          iVar7 = *piVar1;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = -1;
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
      else if (sVar12 == 0) goto LAB_029bc784;
    }
    local_f0 = 0;
    local_100 = local_68;
    local_f8 = (long *)0x0;
    FUN_00dc7a68(&local_f8,&local_118);
    local_88[8] = (long)local_100;
    FUN_00dc7a68(local_88 + 9,&local_f8);
    plVar9 = local_f8;
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
        piVar1 = (int *)((long)local_f8 + 0x1c);
        do {
          iVar7 = *piVar1;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = -1;
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
          local_128 = (long *)*plVar9;
          FUN_00c44438(lVar8 + 0x8040,&local_128);
        }
      }
      else if (sVar12 == 0) goto LAB_029bc784;
    }
    plVar9 = local_118;
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
      if (sVar12 != 1) goto LAB_029bc780;
      piVar1 = (int *)((long)local_118 + 0x1c);
      do {
        iVar7 = *piVar1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = -1;
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
        local_128 = (long *)*plVar9;
        goto LAB_029bca50;
      }
    }
  }
  goto LAB_029bc4e8;
code_r0x029bc410:
  cVar5 = '\x01';
  bVar18 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar18) {
    *plVar9 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_029bc418;
  goto LAB_029bc408;
joined_r0x029bccb8:
  if (plVar9 == (long *)0x0) goto LAB_029bcccc;
  if (plVar9 == (long *)lVar8) {
    plVar9 = plVar19;
    goto LAB_029bccd0;
  }
  plVar9 = (long *)*plVar9;
  goto joined_r0x029bccb8;
LAB_029bcccc:
  plVar9 = (long *)0x0;
LAB_029bccd0:
  FUN_01db74ec(&local_70,plVar9);
  plVar9 = local_70;
  lVar8 = puVar17[1];
  psVar2 = (short *)(lVar8 + 0x1a);
  do {
    sVar12 = *psVar2;
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar4) {
      *psVar2 = sVar12 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar12 == 1) {
    *(undefined8 *)(lVar8 + 0x10) = 0;
    (**(code **)(*plVar19 + 0x50))(plVar19);
  }
  else if (sVar12 == 0) goto LAB_029bcd68;
  if (plVar9 != (long *)0x0) goto LAB_029bc4e8;
LAB_029bc45c:
  FUN_029bd208(&local_100,*(undefined8 *)(param_2 + 0x3a0),param_3,&local_68);
  FUN_029bd2cc(&local_70,&local_100);
  if (local_100 != (long *)0x0) {
    lVar8 = local_100[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar12 = *psVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar4) {
        *psVar2 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_100 + 0x50))();
    }
    else if (sVar12 == 0) goto LAB_029bcd68;
  }
  plVar19 = local_70;
  plVar16 = local_70 + 5;
  (**(code **)(*local_70 + 0x18))(&local_100,local_70);
  local_118 = (long *)0x0;
  local_110 = (long *)0x0;
  plVar9 = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    plVar9 = plVar16;
  }
  if ((long *)local_100[2] == plVar9) {
    FUN_00d1f904(&local_118,&local_100);
  }
  plVar9 = local_100;
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
      piVar1 = (int *)((long)local_100 + 0x1c);
      do {
        iVar7 = *piVar1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = -1;
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
        local_128 = (long *)*plVar9;
        FUN_00c44438(lVar8 + 0x8040,&local_128);
      }
    }
    else if (sVar12 == 0) goto LAB_029bc784;
  }
  FUN_00dc7a68(local_88 + 9,&local_118);
  plVar9 = local_118;
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
    if (sVar12 != 1) goto LAB_029bc780;
    piVar1 = (int *)((long)local_118 + 0x1c);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = -1;
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
      local_100 = (long *)*plVar9;
LAB_029bca50:
      FUN_00c44438(lVar8 + 0x8040,pplVar11);
    }
  }
LAB_029bc4e8:
  if (!bVar18) {
    *(undefined8 *)(param_2 + 0x2f0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x2f8));
  }
  FUN_00d005f8(*(undefined8 *)(param_2 + 0x308),local_70,0);
  *param_1 = local_70;
  if (local_70 != (long *)0x0) {
    lVar8 = local_70[6];
    if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar12 = *psVar2;
      cVar5 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar18) {
        *psVar2 = sVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar10;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar12 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    if (local_70 != (long *)0x0) {
      lVar8 = local_70[6];
      psVar2 = (short *)(lVar8 + 0x1a);
      do {
        sVar12 = *psVar2;
        cVar5 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar18) {
          *psVar2 = sVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_70 + 0x50))();
      }
      else if (sVar12 == 0) {
LAB_029bcd68:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


