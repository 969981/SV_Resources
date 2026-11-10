/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f9649c; name: FUN_00f9649c
 */


void FUN_00f9649c(undefined8 *param_1,long param_2,undefined8 *param_3,long *param_4)

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
  long *plVar11;
  long **pplVar12;
  long *plVar13;
  short sVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  bool bVar19;
  long *plVar20;
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
  
  if ((param_4 == (long *)0x0) ||
     ((uVar15 = (**(code **)(*param_4 + 0xb8))(param_4), (uVar15 & 1) != 0 &&
      (uVar15 = (**(code **)(**(long **)(param_2 + 0x3a0) + 0xb8))(), (uVar15 & 1) != 0)))) {
    param_4 = *(long **)(param_2 + 0x3a0);
  }
  local_70 = (long *)0x0;
  plVar10 = (long *)(param_2 + 0x2f0);
  lVar17 = *plVar10;
  local_68 = param_4;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar17) {
    lVar8 = nn::os::GetCurrentThread();
LAB_00f964f0:
    if (*plVar10 == 0) goto code_r0x00f964f8;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2f8));
          while (*plVar10 == 0) {
            cVar5 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar19) {
              *plVar10 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_00f96500;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar19) {
        *plVar10 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00f96500:
    bVar19 = false;
    goto LAB_00f96504;
  }
  bVar19 = true;
LAB_00f96504:
  uVar15 = *(ulong *)(param_2 + 0x290);
  uVar18 = param_3[1];
  if ((uVar15 & uVar15 - 1) == 0) {
    uVar18 = uVar15 - 1 & uVar18;
  }
  else if (uVar15 <= uVar18) {
    uVar6 = 0;
    if (uVar15 != 0) {
      uVar6 = uVar18 / uVar15;
    }
    uVar18 = uVar18 - uVar6 * uVar15;
  }
  FUN_00d00258(&local_88,param_2,uVar18,param_3,local_68);
  if (local_88 != (long *)0x0) {
    lVar8 = local_88[9];
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar14 = *(short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar14) {
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00f96eec;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f96eec:
          bVar4 = false;
        }
        if (bVar4) {
          puVar16 = *(undefined8 **)(lVar8 + 0x10);
          if (puVar16 != (undefined8 *)0x0) {
            plVar20 = puVar16 + -5;
            plVar10 = (long *)(**(code **)*puVar16)(puVar16);
            plVar11 = (long *)FUN_0153daec();
            if (plVar10 != (long *)0x0) goto LAB_00f96f30;
            plVar13 = (long *)0x0;
            goto LAB_00f96f3c;
          }
          break;
        }
        sVar14 = sVar3;
      } while (sVar3 != 0);
    }
    goto LAB_00f9690c;
  }
  FUN_00f972a4(&local_100,*(undefined8 *)(param_2 + 0x3a0),param_3,&local_68);
  FUN_00f9720c(&local_70,&local_100);
  if (local_100 != (long *)0x0) {
    lVar8 = local_100[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_100 + 0x50))();
    }
    else if (sVar14 == 0) goto LAB_00f967a0;
  }
  puVar16 = *(undefined8 **)(*(long *)(param_2 + 0x288) + uVar18 * 8);
  local_a8 = *(undefined8 *)(param_2 + 0x290);
  local_a0 = 0;
  if (puVar16 != (undefined8 *)0x0) {
    local_a0 = *puVar16;
  }
  local_b8 = 0;
  uStack_b0 = uVar18;
  uStack_98 = uVar18;
  local_90 = local_a8;
  FUN_00f97370(&local_100,&local_a0,&local_b8,param_3);
  plVar10 = local_70;
  local_88 = local_100;
  plStack_80 = local_f8;
  local_78 = local_f0;
  if (local_100 == (long *)0x0) {
    plVar20 = local_70 + 5;
    (**(code **)(*local_70 + 0x18))(&local_100,local_70);
    local_128 = (long *)0x0;
    uStack_120 = 0;
    plVar11 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      plVar11 = plVar20;
    }
    if ((long *)local_100[2] == plVar11) {
      FUN_00d1f904(&local_128,&local_100);
    }
    if (local_100 != (long *)0x0) {
      plVar10 = local_100 + 3;
      do {
        sVar14 = (short)*plVar10;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(short *)plVar10 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
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
      else if (sVar14 == 0) goto LAB_00f96884;
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
    FUN_00f99c78(param_2 + 0x288,&local_100);
    plVar10 = local_c8;
    if (local_c8 != (long *)0x0) {
      plVar11 = local_c8 + 3;
      do {
        sVar14 = (short)*plVar11;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(short *)plVar11 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
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
      else if (sVar14 == 0) goto LAB_00f96884;
    }
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
    if (local_100 != (long *)0x0) {
      (**(code **)(*local_100 + 0x20))();
    }
    plVar10 = local_110;
    if (local_110 != (long *)0x0) {
      plVar11 = local_110 + 3;
      do {
        sVar14 = (short)*plVar11;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(short *)plVar11 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
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
      else if (sVar14 == 0) goto LAB_00f96884;
    }
    plVar10 = local_128;
    if (local_128 == (long *)0x0) goto LAB_00f966b0;
    plVar11 = local_128 + 3;
    do {
      sVar14 = (short)*plVar11;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(short *)plVar11 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
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
      if (iVar7 == -1) goto LAB_00f966b0;
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      pplVar12 = &local_48;
      lVar8 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar8;
      local_48 = (long *)*plVar10;
      goto LAB_00f96d34;
    }
LAB_00f96880:
    if (sVar14 == 0) {
LAB_00f96884:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  else {
    plVar20 = local_70 + 5;
    (**(code **)(*local_70 + 0x18))(&local_100,local_70);
    local_118 = (long *)0x0;
    local_110 = (long *)0x0;
    plVar11 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      plVar11 = plVar20;
    }
    if ((long *)local_100[2] == plVar11) {
      FUN_00d1f904(&local_118,&local_100);
    }
    if (local_100 != (long *)0x0) {
      plVar10 = local_100 + 3;
      do {
        sVar14 = (short)*plVar10;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *(short *)plVar10 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
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
      else if (sVar14 == 0) goto LAB_00f96884;
    }
    local_f0 = 0;
    local_100 = local_68;
    local_f8 = (long *)0x0;
    FUN_00dc7a68(&local_f8,&local_118);
    local_88[8] = (long)local_100;
    FUN_00dc7a68(local_88 + 9,&local_f8);
    plVar10 = local_f8;
    if (local_f8 != (long *)0x0) {
      plVar11 = local_f8 + 3;
      do {
        sVar14 = (short)*plVar11;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(short *)plVar11 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
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
      else if (sVar14 == 0) goto LAB_00f96884;
    }
    plVar10 = local_118;
    if (local_118 != (long *)0x0) {
      plVar11 = local_118 + 3;
      do {
        sVar14 = (short)*plVar11;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(short *)plVar11 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 != 1) goto LAB_00f96880;
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
        pplVar12 = &local_128;
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_128 = (long *)*plVar10;
        goto LAB_00f96d34;
      }
    }
  }
  goto LAB_00f966b0;
code_r0x00f964f8:
  cVar5 = '\x01';
  bVar19 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar19) {
    *plVar10 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00f96500;
  goto LAB_00f964f0;
  while( true ) {
    plVar10 = (long *)*plVar10;
    plVar13 = (long *)0x0;
    if (plVar10 == (long *)0x0) break;
LAB_00f96f30:
    if (plVar10 == plVar11) {
      plVar13 = plVar20;
      break;
    }
  }
LAB_00f96f3c:
  FUN_01db74ec(&local_70,plVar13);
  plVar10 = local_70;
  lVar8 = puVar16[1];
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar14 = *psVar1;
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar14 == 1) {
    *(undefined8 *)(lVar8 + 0x10) = 0;
    (**(code **)(*plVar20 + 0x50))(plVar20);
  }
  else if (sVar14 == 0) goto LAB_00f967a0;
  if (plVar10 != (long *)0x0) goto LAB_00f966b0;
LAB_00f9690c:
  FUN_00f972a4(&local_100,*(undefined8 *)(param_2 + 0x3a0),param_3,&local_68);
  FUN_00f9720c(&local_70,&local_100);
  if (local_100 != (long *)0x0) {
    lVar8 = local_100[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_100 + 0x50))();
    }
    else if (sVar14 == 0) goto LAB_00f967a0;
  }
  plVar11 = local_70;
  plVar20 = local_70 + 5;
  (**(code **)(*local_70 + 0x18))(&local_100,local_70);
  local_118 = (long *)0x0;
  local_110 = (long *)0x0;
  plVar10 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar20;
  }
  if ((long *)local_100[2] == plVar10) {
    FUN_00d1f904(&local_118,&local_100);
  }
  plVar10 = local_100;
  if (local_100 != (long *)0x0) {
    plVar11 = local_100 + 3;
    do {
      sVar14 = (short)*plVar11;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(short *)plVar11 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
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
    else if (sVar14 == 0) goto LAB_00f96884;
  }
  FUN_00dc7a68(local_88 + 9,&local_118);
  plVar10 = local_118;
  if (local_118 != (long *)0x0) {
    plVar11 = local_118 + 3;
    do {
      sVar14 = (short)*plVar11;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(short *)plVar11 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 != 1) goto LAB_00f96880;
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
      pplVar12 = &local_100;
      lVar8 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar8;
      local_100 = (long *)*plVar10;
LAB_00f96d34:
      FUN_00c44438(lVar8 + 0x8040,pplVar12);
    }
  }
LAB_00f966b0:
  if (!bVar19) {
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
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar5 = '\x01';
      bVar19 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar19) {
        *psVar1 = sVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar9;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar14 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    if (local_70 != (long *)0x0) {
      lVar8 = local_70[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar5 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar19) {
          *psVar1 = sVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_70 + 0x50))();
      }
      else if (sVar14 == 0) {
LAB_00f967a0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


