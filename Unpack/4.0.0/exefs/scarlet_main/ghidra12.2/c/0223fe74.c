/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0223fe74; name: FUN_0223fe74
 */


void FUN_0223fe74(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  bool bVar16;
  short sVar17;
  ushort *puVar18;
  long *plVar19;
  undefined8 uVar20;
  char *pcVar21;
  undefined8 uVar22;
  undefined8 local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  piVar12 = (int *)*param_1;
  puVar18 = (ushort *)((long)piVar12 - (long)*piVar12);
  if (*puVar18 < 0xb) {
    iVar15 = 0;
    iVar8 = 0;
    iVar7 = 0;
    if (8 < *puVar18) goto LAB_0223feb8;
  }
  else {
    iVar7 = 0;
    if ((ulong)puVar18[5] != 0) {
      iVar7 = *(int *)((long)piVar12 + (ulong)puVar18[5]);
    }
LAB_0223feb8:
    iVar15 = iVar7;
    if ((ulong)puVar18[4] == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)((long)piVar12 + (ulong)puVar18[4]);
    }
  }
  if (iVar15 - iVar8 == 1) {
    return;
  }
  local_88 = param_1[0x22];
  uStack_80 = param_1[0x23];
  local_78 = param_1[0x24];
  plVar19 = (long *)param_1[0x25];
  local_70 = plVar19;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x18))(plVar19);
  }
  if ((code *)param_1[2] == (code *)0x0) {
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
  }
  else {
    (*(code *)param_1[2])(&local_68,param_1 + 6,&local_88);
    plVar19 = local_70;
  }
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
  if (local_68 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_68 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_68 + 0x1a);
    sVar17 = *(short *)((long)local_68 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar17) {
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0223ffa8;
        bVar16 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0223ffa8:
        bVar16 = false;
      }
      if (bVar16) {
        lVar13 = local_68[2];
        if (lVar13 == 0) goto LAB_022400bc;
        lVar9 = FUN_00ded3a0(lVar13 + 0xe0,&local_b0);
        if (lVar9 == 0) goto LAB_022400a4;
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        uVar20 = *(undefined8 *)PTR_DAT_047d3e30;
        pcVar21 = *(char **)(PTR_DAT_047d3e30 + 8);
        uVar22 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
        plVar19 = *(long **)(PTR_DAT_047d3e30 + 0x18);
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x18))(plVar19);
        }
        FUN_01340a44(&local_b0,param_1,1);
        plVar6 = local_90;
        uVar5 = local_a8;
        if ((char)local_b0 != '\0') {
          if (local_90 != (long *)0x0) {
            (**(code **)(*local_90 + 0x18))(local_90);
          }
          if (plVar19 != (long *)0x0) {
            (**(code **)(*plVar19 + 0x20))(plVar19);
          }
          plVar19 = plVar6;
          uVar20 = uVar5;
          pcVar21 = pcStack_a0;
          uVar22 = local_98;
          if ((char)local_b0 != '\0') {
            if (local_90 != (long *)0x0) {
              (**(code **)(*local_90 + 0x20))();
            }
            local_b0 = (undefined8 *)((ulong)local_b0 & 0xffffffffffffff00);
          }
        }
        if (*pcVar21 == '\0') {
          uVar10 = FUN_021237ec(param_1,0x100000001);
          if ((uVar10 & 0xff) != 0) {
            *(int *)(lVar9 + 0x300) = (int)(uVar10 >> 0x20);
          }
          goto LAB_022400a0;
        }
        local_d0 = uVar20;
        pcStack_c8 = pcVar21;
        local_c0 = uVar22;
        local_b8 = plVar19;
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x18))(plVar19);
        }
        if ((code *)param_1[2] == (code *)0x0) {
          local_b0 = (undefined8 *)0x0;
          local_a8 = 0;
        }
        else {
          (*(code *)param_1[2])(&local_b0,param_1 + 6,&local_d0);
        }
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x20))();
        }
        if (local_b0 == (undefined8 *)0x0) goto LAB_022400a0;
        if (*(short *)((long)local_b0 + 0x1a) == 0) goto LAB_022402f4;
        psVar1 = (short *)((long)local_b0 + 0x1a);
        sVar17 = *(short *)((long)local_b0 + 0x1a);
        goto LAB_02240278;
      }
      sVar17 = sVar2;
    } while (sVar2 != 0);
    goto LAB_022400b8;
  }
  goto LAB_022400bc;
  while (sVar17 = sVar2, sVar2 != 0) {
LAB_02240278:
    sVar2 = *psVar1;
    if (sVar2 == sVar17) {
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar17 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_0224029c;
      bVar16 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0224029c:
      bVar16 = false;
    }
    if (bVar16) {
      lVar14 = local_b0[2];
      if (lVar14 == 0) goto LAB_022402f4;
      lVar11 = FUN_00ded3a0(lVar14 + 0xe0,&local_58);
      if (lVar11 != 0) {
        *(undefined4 *)(lVar9 + 0x300) = *(undefined4 *)(lVar11 + 0x300);
      }
      (**(code **)(*(long *)(lVar14 + -0x28) + 0x60))((long *)(lVar14 + -0x28));
      break;
    }
  }
  if (local_b0 != (undefined8 *)0x0) {
LAB_022402f4:
    puVar4 = local_b0;
    psVar1 = (short *)(local_b0 + 3);
    do {
      sVar17 = *psVar1;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar17 == 1) {
      piVar12 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar8 = *piVar12;
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar16) {
          *piVar12 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_58 = *puVar4;
        FUN_00c44438(lVar9 + 0x8040,&local_58);
      }
    }
    else if (sVar17 == 0) goto LAB_022400dc;
  }
LAB_022400a0:
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
LAB_022400a4:
  (**(code **)(*(long *)(lVar13 + -0x28) + 0x60))((long *)(lVar13 + -0x28));
LAB_022400b8:
  if (local_68 == (undefined8 *)0x0) {
    return;
  }
LAB_022400bc:
  puVar4 = local_68;
  psVar1 = (short *)(local_68 + 3);
  do {
    sVar17 = *psVar1;
    cVar3 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar16) {
      *psVar1 = sVar17 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar17 == 1) {
    piVar12 = (int *)((long)local_68 + 0x1c);
    do {
      iVar8 = *piVar12;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar16) {
        *piVar12 = -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar13 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar13;
      local_b0 = (undefined8 *)*puVar4;
      FUN_00c44438(lVar13 + 0x8040,&local_b0);
    }
  }
  else if (sVar17 == 0) {
LAB_022400dc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return;
}


