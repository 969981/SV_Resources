/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0223f154; name: FUN_0223f154
 */


void FUN_0223f154(undefined8 *param_1)

{
  short *psVar1;
  undefined4 uVar2;
  short sVar3;
  char cVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  bool bVar17;
  short sVar18;
  ushort *puVar19;
  long *plVar20;
  undefined8 uVar21;
  char *pcVar22;
  undefined8 uVar23;
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
  
  local_88 = param_1[0x22];
  uStack_80 = param_1[0x23];
  local_78 = param_1[0x24];
  plVar20 = (long *)param_1[0x25];
  local_70 = plVar20;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x18))(plVar20);
  }
  if ((code *)param_1[2] == (code *)0x0) {
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
  }
  else {
    (*(code *)param_1[2])(&local_68,param_1 + 6,&local_88);
    plVar20 = local_70;
  }
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
  if (local_68 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_68 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_68 + 0x1a);
    sVar18 = *(short *)((long)local_68 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar18) {
        cVar4 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar17) {
          *psVar1 = sVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0223f230;
        bVar17 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0223f230:
        bVar17 = false;
      }
      if (bVar17) {
        lVar14 = local_68[2];
        if (lVar14 == 0) goto LAB_0223f3c0;
        lVar9 = FUN_00ded3a0(lVar14 + 0xe0,&local_b0);
        if (lVar9 == 0) goto LAB_0223f3a8;
        piVar13 = (int *)*param_1;
        puVar19 = (ushort *)((long)piVar13 - (long)*piVar13);
        if (*puVar19 < 0xb) {
          iVar16 = 0;
          iVar8 = 0;
          iVar7 = 0;
          if (8 < *puVar19) goto LAB_0223f290;
        }
        else {
          iVar7 = 0;
          if ((ulong)puVar19[5] != 0) {
            iVar7 = *(int *)((long)piVar13 + (ulong)puVar19[5]);
          }
LAB_0223f290:
          iVar16 = iVar7;
          if ((ulong)puVar19[4] == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)((long)piVar13 + (ulong)puVar19[4]);
          }
        }
        if (iVar16 - iVar8 != 1) {
          uVar2 = *(undefined4 *)(lVar9 + 0x300);
          puVar10 = (undefined8 *)FUN_01235878(param_1 + 0x2b,&DAT_03d63508);
          *(undefined4 *)(puVar10 + 2) = uVar2;
          *puVar10 = PTR_LAB_047dcdf0;
          goto LAB_0223f3a8;
        }
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        uVar21 = *(undefined8 *)PTR_DAT_047d3e30;
        pcVar22 = *(char **)(PTR_DAT_047d3e30 + 8);
        uVar23 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
        plVar20 = *(long **)(PTR_DAT_047d3e30 + 0x18);
        if (plVar20 != (long *)0x0) {
          (**(code **)(*plVar20 + 0x18))(plVar20);
        }
        FUN_01340a44(&local_b0,param_1,1);
        plVar6 = local_90;
        uVar5 = local_a8;
        if ((char)local_b0 != '\0') {
          if (local_90 != (long *)0x0) {
            (**(code **)(*local_90 + 0x18))(local_90);
          }
          if (plVar20 != (long *)0x0) {
            (**(code **)(*plVar20 + 0x20))(plVar20);
          }
          plVar20 = plVar6;
          uVar21 = uVar5;
          pcVar22 = pcStack_a0;
          uVar23 = local_98;
          if ((char)local_b0 != '\0') {
            if (local_90 != (long *)0x0) {
              (**(code **)(*local_90 + 0x20))();
            }
            local_b0 = (undefined8 *)((ulong)local_b0 & 0xffffffffffffff00);
          }
        }
        if (*pcVar22 == '\0') {
          uVar11 = FUN_021237ec(param_1,0x100000001);
          if ((uVar11 & 0xff) != 0) {
            *(int *)(lVar9 + 0x300) = (int)(uVar11 >> 0x20);
          }
          goto LAB_0223f36c;
        }
        local_d0 = uVar21;
        pcStack_c8 = pcVar22;
        local_c0 = uVar23;
        local_b8 = plVar20;
        if (plVar20 != (long *)0x0) {
          (**(code **)(*plVar20 + 0x18))(plVar20);
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
        if (local_b0 == (undefined8 *)0x0) goto LAB_0223f36c;
        if (*(short *)((long)local_b0 + 0x1a) == 0) goto LAB_0223f5f8;
        psVar1 = (short *)((long)local_b0 + 0x1a);
        sVar18 = *(short *)((long)local_b0 + 0x1a);
        goto LAB_0223f57c;
      }
      sVar18 = sVar3;
    } while (sVar3 != 0);
    goto LAB_0223f3bc;
  }
  goto LAB_0223f3c0;
  while (sVar18 = sVar3, sVar3 != 0) {
LAB_0223f57c:
    sVar3 = *psVar1;
    if (sVar3 == sVar18) {
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar17) {
        *psVar1 = sVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_0223f5a0;
      bVar17 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0223f5a0:
      bVar17 = false;
    }
    if (bVar17) {
      lVar15 = local_b0[2];
      if (lVar15 == 0) goto LAB_0223f5f8;
      lVar12 = FUN_00ded3a0(lVar15 + 0xe0,&local_58);
      if (lVar12 != 0) {
        *(undefined4 *)(lVar9 + 0x300) = *(undefined4 *)(lVar12 + 0x300);
      }
      (**(code **)(*(long *)(lVar15 + -0x28) + 0x60))((long *)(lVar15 + -0x28));
      break;
    }
  }
  if (local_b0 != (undefined8 *)0x0) {
LAB_0223f5f8:
    puVar10 = local_b0;
    psVar1 = (short *)(local_b0 + 3);
    do {
      sVar18 = *psVar1;
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar17) {
        *psVar1 = sVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar18 == 1) {
      piVar13 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar8 = *piVar13;
        cVar4 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar17) {
          *piVar13 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_58 = *puVar10;
        FUN_00c44438(lVar9 + 0x8040,&local_58);
      }
    }
    else if (sVar18 == 0) goto LAB_0223f3e0;
  }
LAB_0223f36c:
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
LAB_0223f3a8:
  (**(code **)(*(long *)(lVar14 + -0x28) + 0x60))((long *)(lVar14 + -0x28));
LAB_0223f3bc:
  if (local_68 == (undefined8 *)0x0) {
    return;
  }
LAB_0223f3c0:
  puVar10 = local_68;
  psVar1 = (short *)(local_68 + 3);
  do {
    sVar18 = *psVar1;
    cVar4 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar17) {
      *psVar1 = sVar18 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar18 == 1) {
    piVar13 = (int *)((long)local_68 + 0x1c);
    do {
      iVar8 = *piVar13;
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar17) {
        *piVar13 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar14 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar14;
      local_b0 = (undefined8 *)*puVar10;
      FUN_00c44438(lVar14 + 0x8040,&local_b0);
    }
  }
  else if (sVar18 == 0) {
LAB_0223f3e0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return;
}


