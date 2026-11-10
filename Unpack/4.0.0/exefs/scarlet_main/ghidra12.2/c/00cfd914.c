/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cfd914; name: FUN_00cfd914
 */


void FUN_00cfd914(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  short *psVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  short sVar7;
  ulong uVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  
  if (*(int *)(param_1 + 0x160) == 5) {
LAB_00cfd980:
    local_70 = (undefined8 *)((ulong)local_70 & 0xffffffff00000000);
    local_78 = (undefined8 *)((ulong)(*(byte *)(param_1 + 0x1e8) & 1) << 0x20 | 3);
    FUN_028a1cb8(param_2,&local_78);
    return;
  }
  plVar1 = (long *)(param_1 + 0x1c0);
  lVar12 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c8));
        while (*plVar1 == 0) {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar12;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB_00cfd968;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *plVar1 = lVar12;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB_00cfd968:
  if (*(char *)(param_1 + 0x1ea) != '\0') {
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c8));
    goto LAB_00cfd980;
  }
  (**(code **)(*param_2 + 0x18))(&local_78,param_2);
  local_a8 = (long *)0x0;
  uStack_a0 = 0;
  plVar1 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    plVar1 = param_2 + 5;
  }
  if ((long *)local_78[2] == plVar1) {
    FUN_00cf1b68(&local_a8,&local_78);
  }
  puVar3 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_78 + 3);
    do {
      sVar7 = *psVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar10) {
        *psVar2 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      piVar5 = (int *)((long)local_78 + 0x1c);
      do {
        iVar11 = *piVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar10) {
          *piVar5 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_98 = (long *)*puVar3;
        FUN_00c44438(lVar12 + 0x8040,&local_98);
      }
    }
    else if (sVar7 == 0) goto LAB_00cfe080;
  }
  plVar17 = (long *)*param_3;
  (**(code **)(*plVar17 + 0x18))(&local_78,plVar17);
  local_b8 = (long *)0x0;
  uStack_b0 = 0;
  plVar1 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 5;
  }
  if ((long *)local_78[2] == plVar1) {
    FUN_00cfd544(&local_b8,&local_78);
  }
  puVar3 = local_78;
  if (local_78 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_78 + 3);
    do {
      sVar7 = *psVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar10) {
        *psVar2 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      piVar5 = (int *)((long)local_78 + 0x1c);
      do {
        iVar11 = *piVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar10) {
          *piVar5 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_98 = (long *)*puVar3;
        FUN_00c44438(lVar12 + 0x8040,&local_98);
      }
    }
    else if (sVar7 == 0) goto LAB_00cfe080;
  }
  local_98 = (long *)0x0;
  uStack_90 = 0;
  FUN_00d91d68(&local_98,&local_a8);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_01f8472c(&local_88,&local_b8);
  uVar8 = *(ulong *)(param_1 + 400);
  puVar3 = (undefined8 *)(param_1 + 0x1a0);
  if (uVar8 < *(ulong *)(param_1 + 0x198)) {
    FUN_00d91c48(puVar3,uVar8,&local_98);
    *(ulong *)(param_1 + 400) = uVar8 + 0x20;
  }
  else {
    uVar16 = *(ulong *)(param_1 + 0x1a8);
    lVar12 = (long)(uVar8 - *(long *)(param_1 + 0x188)) >> 5;
    uVar8 = lVar12 + 1;
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    if (uVar16 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar13 = *(ulong *)(param_1 + 0x198) - *(long *)(param_1 + 0x188);
    uVar14 = lVar13 >> 4;
    local_60 = (undefined8 *)0x0;
    if (uVar8 <= uVar14) {
      uVar8 = uVar14;
    }
    local_78 = (undefined8 *)0x0;
    if (uVar16 >> 1 <= (ulong)(lVar13 >> 5)) {
      uVar8 = uVar16;
    }
    puStack_58 = puVar3;
    if ((uVar8 != 0) &&
       (local_78 = (undefined8 *)
                   (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,uVar8 << 5,8),
       local_78 == (undefined8 *)0x0)) {
      (**(code **)(*(long *)*puVar3 + 0xe8))((long *)*puVar3);
    }
    puVar18 = local_78 + lVar12 * 4;
    puVar6 = local_78 + uVar8 * 4;
    local_70 = puVar18;
    local_60 = puVar6;
    FUN_00d91c48(puVar3,puVar18,&local_98);
    puVar4 = puVar18 + 4;
    puVar15 = *(undefined8 **)(param_1 + 0x188);
    puVar19 = *(undefined8 **)(param_1 + 400);
    local_68 = puVar4;
    if (puVar19 == puVar15) {
      local_68 = puVar15;
    }
    else {
      do {
        puVar18 = puVar18 + -4;
        puVar19 = puVar19 + -4;
        FUN_00d01ff4(puVar3,puVar18,puVar19);
      } while (puVar15 != puVar19);
      puVar15 = *(undefined8 **)(param_1 + 0x188);
      local_68 = *(undefined8 **)(param_1 + 400);
    }
    *(undefined8 **)(param_1 + 0x188) = puVar18;
    *(undefined8 **)(param_1 + 400) = puVar4;
    local_60 = *(undefined8 **)(param_1 + 0x198);
    *(undefined8 **)(param_1 + 0x198) = puVar6;
    local_78 = puVar15;
    local_70 = puVar15;
    FUN_00d015c0(&local_78);
  }
  puVar3 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_88 + 3);
    do {
      sVar7 = *psVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar10) {
        *psVar2 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      piVar5 = (int *)((long)local_88 + 0x1c);
      do {
        iVar11 = *piVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar10) {
          *piVar5 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_78 = (undefined8 *)*puVar3;
        FUN_00c44438(lVar12 + 0x8040,&local_78);
      }
    }
    else if (sVar7 == 0) goto LAB_00cfe080;
  }
  plVar1 = local_98;
  if (local_98 != (long *)0x0) {
    plVar17 = local_98 + 3;
    do {
      sVar7 = (short)*plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *(short *)plVar17 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      piVar5 = (int *)((long)local_98 + 0x1c);
      do {
        iVar11 = *piVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar10) {
          *piVar5 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_78 = (undefined8 *)*plVar1;
        FUN_00c44438(lVar12 + 0x8040,&local_78);
      }
    }
    else if (sVar7 == 0) goto LAB_00cfe080;
  }
  plVar1 = local_b8;
  if (local_b8 != (long *)0x0) {
    plVar17 = local_b8 + 3;
    do {
      sVar7 = (short)*plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *(short *)plVar17 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      piVar5 = (int *)((long)local_b8 + 0x1c);
      do {
        iVar11 = *piVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar10) {
          *piVar5 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_78 = (undefined8 *)*plVar1;
        FUN_00c44438(lVar12 + 0x8040,&local_78);
      }
    }
    else if (sVar7 == 0) goto LAB_00cfe080;
  }
  plVar1 = local_a8;
  if (local_a8 != (long *)0x0) {
    plVar17 = local_a8 + 3;
    do {
      sVar7 = (short)*plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *(short *)plVar17 = sVar7 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar7 == 1) {
      piVar5 = (int *)((long)local_a8 + 0x1c);
      do {
        iVar11 = *piVar5;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar10) {
          *piVar5 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_78 = (undefined8 *)*plVar1;
        FUN_00c44438(lVar12 + 0x8040,&local_78);
      }
    }
    else if (sVar7 == 0) {
LAB_00cfe080:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c8));
  return;
}


