/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0222069c; name: FUN_0222069c
 */


void FUN_0222069c(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int iVar6;
  ushort uVar7;
  int iVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  ushort *puVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  short sVar18;
  long *plVar19;
  long *plVar20;
  long local_80;
  long lStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  piVar9 = (int *)*param_1;
  puVar14 = (ushort *)((long)piVar9 - (long)*piVar9);
  if (*puVar14 < 0xb) {
    iVar12 = 0;
    iVar8 = 0;
    iVar6 = 0;
    if (8 < *puVar14) goto LAB_022206d8;
  }
  else {
    iVar6 = 0;
    if ((ulong)puVar14[5] != 0) {
      iVar6 = *(int *)((long)piVar9 + (ulong)puVar14[5]);
    }
LAB_022206d8:
    iVar12 = iVar6;
    if ((ulong)puVar14[4] == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)((long)piVar9 + (ulong)puVar14[4]);
    }
  }
  if (iVar12 - iVar8 == 1) {
    return;
  }
  uVar7 = FUN_012595d8(param_1,0x500000001);
  if ((((uVar7 & 0xff) != 0) && (0xff < uVar7)) && (uVar13 = param_1[0x2c], uVar13 != 0)) {
    uVar15 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar13 - 1 & 0x178243c67380d9e6;
    }
    else {
      uVar16 = 0x178243c67380d9e6;
      if (uVar13 < 0x178243c67380d9e7) {
        uVar16 = 0;
        if (uVar13 != 0) {
          uVar16 = 0x178243c67380d9e6 / uVar13;
        }
        uVar16 = 0x178243c67380d9e6 - uVar16 * uVar13;
      }
    }
    plVar19 = *(long **)(param_1[0x2b] + uVar16 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar19[1] == 0x178243c67380d9e6) {
            if (plVar19[2] == 0x178243c67380d9e6) goto LAB_02220840;
          }
          else if ((plVar19[1] & uVar13 - 1) != uVar16) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar19[1];
          if (uVar15 == 0x178243c67380d9e6) {
            if (plVar19[2] == 0x178243c67380d9e6) goto LAB_02220840;
          }
          else {
            if (uVar13 <= uVar15) {
              uVar4 = 0;
              if (uVar13 != 0) {
                uVar4 = uVar15 / uVar13;
              }
              uVar15 = uVar15 - uVar4 * uVar13;
            }
            if (uVar15 != uVar16) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
  goto LAB_02220848;
LAB_02220840:
  if ((char)plVar19[6] != '\0') {
    return;
  }
LAB_02220848:
  local_60 = param_1[0x22];
  uStack_58 = param_1[0x23];
  local_50 = param_1[0x24];
  plVar19 = (long *)param_1[0x25];
  local_48 = plVar19;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x18))(plVar19);
  }
  if ((code *)param_1[2] == (code *)0x0) {
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
  }
  else {
    (*(code *)param_1[2])(&local_40,param_1 + 6,&local_60);
    plVar19 = local_48;
  }
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
  if (local_40 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_40 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_40 + 0x1a);
    sVar18 = *(short *)((long)local_40 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar18) {
        cVar3 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar17) {
          *psVar1 = sVar18 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_022208d0;
        bVar17 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_022208d0:
        bVar17 = false;
      }
      if (bVar17) {
        plVar19 = (long *)(local_40[2] + -0x28);
        if (local_40[2] == 0) goto LAB_02220a80;
        uVar13 = param_1[0x2c];
        lStack_78 = 0;
        local_80 = 0;
        if (uVar13 == 0) goto LAB_02220a2c;
        uVar15 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
        uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
        uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar15 < 2) {
          uVar16 = uVar13 - 1 & 0x17ea73508677cdff;
        }
        else {
          uVar16 = 0x17ea73508677cdff;
          if (uVar13 < 0x17ea73508677ce00) {
            uVar16 = 0;
            if (uVar13 != 0) {
              uVar16 = 0x17ea73508677cdff / uVar13;
            }
            uVar16 = 0x17ea73508677cdff - uVar16 * uVar13;
          }
        }
        plVar20 = *(long **)(param_1[0x2b] + uVar16 * 8);
        if ((plVar20 == (long *)0x0) || (plVar20 = (long *)*plVar20, plVar20 == (long *)0x0))
        goto LAB_02220a2c;
        if (1 < uVar15) goto LAB_022209ec;
        goto LAB_022209a0;
      }
      sVar18 = sVar2;
    } while (sVar2 != 0);
    goto LAB_02220a7c;
  }
  goto LAB_02220a80;
LAB_022209ec:
  do {
    uVar15 = plVar20[1];
    if (uVar15 == 0x17ea73508677cdff) {
      if (plVar20[2] == 0x17ea73508677cdff) goto LAB_02220a24;
    }
    else {
      if (uVar13 <= uVar15) {
        uVar4 = 0;
        if (uVar13 != 0) {
          uVar4 = uVar15 / uVar13;
        }
        uVar15 = uVar15 - uVar4 * uVar13;
      }
      if (uVar15 != uVar16) break;
    }
    plVar20 = (long *)*plVar20;
  } while (plVar20 != (long *)0x0);
  goto LAB_02220a2c;
LAB_02220a24:
  lStack_78 = plVar20[7];
  local_80 = plVar20[6];
  goto LAB_02220a2c;
  while (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0) {
LAB_022209a0:
    if (plVar20[1] == 0x17ea73508677cdff) {
      if (plVar20[2] == 0x17ea73508677cdff) goto LAB_02220a24;
    }
    else if ((plVar20[1] & uVar13 - 1) != uVar16) break;
  }
LAB_02220a2c:
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_00d0a71c(&local_70,&local_40);
  lVar10 = FUN_01180e7c(param_1,&local_70);
  puVar5 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_70 + 3);
    do {
      sVar18 = *psVar1;
      cVar3 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar17) {
        *psVar1 = sVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar18 == 1) {
      piVar9 = (int *)((long)local_70 + 0x1c);
      do {
        iVar8 = *piVar9;
        cVar3 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar17) {
          *piVar9 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_18 = *puVar5;
        FUN_00c44438(lVar11 + 0x8040,&local_18);
      }
    }
    else if (sVar18 == 0) goto LAB_02220aa4;
  }
  if (lVar10 != 0) {
    *(undefined1 *)(lVar10 + 0xe0) = 1;
    *(long *)(lVar10 + 0x58) = lStack_78;
    *(long *)(lVar10 + 0x50) = local_80;
  }
  (**(code **)(*plVar19 + 0x60))(plVar19);
LAB_02220a7c:
  if (local_40 != (undefined8 *)0x0) {
LAB_02220a80:
    puVar5 = local_40;
    psVar1 = (short *)(local_40 + 3);
    do {
      sVar18 = *psVar1;
      cVar3 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar17) {
        *psVar1 = sVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar18 == 1) {
      piVar9 = (int *)((long)local_40 + 0x1c);
      do {
        iVar8 = *piVar9;
        cVar3 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar17) {
          *piVar9 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_18 = *puVar5;
        FUN_00c44438(lVar10 + 0x8040,&local_18);
      }
    }
    else if (sVar18 == 0) {
LAB_02220aa4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


