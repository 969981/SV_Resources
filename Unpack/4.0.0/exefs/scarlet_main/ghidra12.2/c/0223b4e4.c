/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0223b4e4; name: FUN_0223b4e4
 */


void FUN_0223b4e4(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
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
        if (cVar3 != '\0') goto LAB_0223b5c0;
        bVar16 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0223b5c0:
        bVar16 = false;
      }
      if (bVar16) {
        lVar13 = local_68[2];
        if (lVar13 == 0) goto LAB_0223b768;
        lVar8 = FUN_00ded3a0(lVar13 + 0xe0,&local_b0);
        if (lVar8 == 0) goto LAB_0223b750;
        piVar12 = (int *)*param_1;
        puVar18 = (ushort *)((long)piVar12 - (long)*piVar12);
        if (*puVar18 < 0xb) {
          iVar15 = 0;
          iVar7 = 0;
          iVar6 = 0;
          if (8 < *puVar18) goto LAB_0223b620;
        }
        else {
          iVar6 = 0;
          if ((ulong)puVar18[5] != 0) {
            iVar6 = *(int *)((long)piVar12 + (ulong)puVar18[5]);
          }
LAB_0223b620:
          iVar15 = iVar6;
          if ((ulong)puVar18[4] == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *(int *)((long)piVar12 + (ulong)puVar18[4]);
          }
        }
        if (iVar15 - iVar7 != 1) {
          uVar20 = *(undefined8 *)(lVar8 + 0x184);
          puVar9 = (undefined8 *)FUN_01235878(param_1 + 0x2b,&DAT_03d63508);
          *puVar9 = PTR_LAB_047dce70;
          puVar9[3] = 0;
          puVar9[2] = uVar20;
          goto LAB_0223b750;
        }
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
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
        plVar5 = local_90;
        uVar4 = local_a8;
        if ((char)local_b0 != '\0') {
          if (local_90 != (long *)0x0) {
            (**(code **)(*local_90 + 0x18))(local_90);
          }
          if (plVar19 != (long *)0x0) {
            (**(code **)(*plVar19 + 0x20))(plVar19);
          }
          plVar19 = plVar5;
          uVar20 = uVar4;
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
            *(int *)(lVar8 + 0x184) = (int)(uVar10 >> 0x20);
          }
          uVar10 = FUN_021237ec(param_1,0x200000001);
          if ((uVar10 & 0xff) != 0) {
            *(int *)(lVar8 + 0x188) = (int)(uVar10 >> 0x20);
          }
          goto LAB_0223b6fc;
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
        if (local_b0 == (undefined8 *)0x0) goto LAB_0223b6fc;
        if (*(short *)((long)local_b0 + 0x1a) == 0) goto LAB_0223b9c8;
        psVar1 = (short *)((long)local_b0 + 0x1a);
        sVar17 = *(short *)((long)local_b0 + 0x1a);
        goto LAB_0223b944;
      }
      sVar17 = sVar2;
    } while (sVar2 != 0);
    goto LAB_0223b764;
  }
  goto LAB_0223b768;
  while (sVar17 = sVar2, sVar2 != 0) {
LAB_0223b944:
    sVar2 = *psVar1;
    if (sVar2 == sVar17) {
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar17 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_0223b968;
      bVar16 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0223b968:
      bVar16 = false;
    }
    if (bVar16) {
      lVar14 = local_b0[2];
      if (lVar14 == 0) goto LAB_0223b9c8;
      lVar11 = FUN_00ded3a0(lVar14 + 0xe0,&local_58);
      if (lVar11 != 0) {
        *(undefined4 *)(lVar8 + 0x184) = *(undefined4 *)(lVar11 + 0x184);
        *(undefined4 *)(lVar8 + 0x188) = *(undefined4 *)(lVar11 + 0x188);
      }
      (**(code **)(*(long *)(lVar14 + -0x28) + 0x60))((long *)(lVar14 + -0x28));
      break;
    }
  }
  if (local_b0 != (undefined8 *)0x0) {
LAB_0223b9c8:
    puVar9 = local_b0;
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
        iVar7 = *piVar12;
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar16) {
          *piVar12 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_58 = *puVar9;
        FUN_00c44438(lVar8 + 0x8040,&local_58);
      }
    }
    else if (sVar17 == 0) goto LAB_0223b788;
  }
LAB_0223b6fc:
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
LAB_0223b750:
  (**(code **)(*(long *)(lVar13 + -0x28) + 0x60))((long *)(lVar13 + -0x28));
LAB_0223b764:
  if (local_68 == (undefined8 *)0x0) {
    return;
  }
LAB_0223b768:
  puVar9 = local_68;
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
      iVar7 = *piVar12;
      cVar3 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar16) {
        *piVar12 = -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar13 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar13;
      local_b0 = (undefined8 *)*puVar9;
      FUN_00c44438(lVar13 + 0x8040,&local_b0);
    }
  }
  else if (sVar17 == 0) {
LAB_0223b788:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return;
}


