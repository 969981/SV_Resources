/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014f4194; name: FUN_014f4194
 */


void FUN_014f4194(long param_1,uint param_2,undefined8 *param_3)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *plVar17;
  short sVar18;
  ulong uVar19;
  ulong unaff_x28;
  float fVar20;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  uint local_84;
  long *local_80;
  undefined8 *puStack_78;
  undefined1 local_70;
  undefined8 local_68;
  
  local_84 = param_2;
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  plVar1 = (long *)(param_1 + 0x48);
  uVar16 = (ulong)param_2;
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  uVar19 = *(ulong *)(param_1 + 0x50);
  if (uVar19 == 0) {
LAB_014f4234:
    puVar14 = (undefined8 *)(param_1 + 0x80);
    plVar12 = (long *)(**(code **)(*(long *)*puVar14 + 0x10))((long *)*puVar14,0x38,8);
    if (plVar12 == (long *)0x0) {
      (**(code **)(*(long *)*puVar14 + 0xe8))();
    }
    local_70 = 0;
    uVar15 = *puVar14;
    local_80 = plVar12;
    puStack_78 = puVar14;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 != 0) {
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar15;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    }
    *(uint *)(plVar12 + 2) = local_84;
    plVar12[3] = 0;
    plVar12[4] = 0;
    FUN_00ca1ea4(plVar12 + 3,&local_a8);
    plVar12[5] = 0;
    plVar12[6] = 0;
    FUN_013e2144(plVar12 + 5,&local_98);
    plVar12 = local_80;
    if (lVar9 != 0) {
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    }
    local_70 = 1;
    *local_80 = 0;
    local_80[1] = uVar16;
    fVar20 = (float)(*(long *)(param_1 + 0xa0) + 1);
    if ((uVar19 == 0) || (*(float *)(param_1 + 0xa8) * (float)uVar19 < fVar20)) {
      uVar19 = (ulong)(uVar19 < 3 || (uVar19 & uVar19 - 1) != 0) | uVar19 << 1;
      uVar13 = (ulong)(fVar20 / *(float *)(param_1 + 0xa8));
      if (uVar13 <= uVar19) {
        uVar13 = uVar19;
      }
      FUN_01826100(plVar1,uVar13);
      uVar19 = *(ulong *)(param_1 + 0x50);
      if ((uVar19 & uVar19 - 1) == 0) {
        unaff_x28 = (ulong)((int)uVar19 - 1U & param_2);
      }
      else if (uVar16 < uVar19) {
        unaff_x28 = uVar16;
      }
      else {
        uVar13 = 0;
        if (uVar19 != 0) {
          uVar13 = uVar16 / uVar19;
        }
        unaff_x28 = uVar16 - uVar13 * uVar19;
      }
    }
    plVar11 = *(long **)(*plVar1 + unaff_x28 * 8);
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)(param_1 + 0x78);
      *plVar12 = *plVar11;
      *plVar11 = (long)plVar12;
      *(long **)(*(long *)(param_1 + 0x48) + unaff_x28 * 8) = plVar11;
      if (*plVar12 != 0) {
        uVar16 = *(ulong *)(*plVar12 + 8);
        if ((uVar19 & uVar19 - 1) == 0) {
          uVar16 = uVar16 & uVar19 - 1;
        }
        else if (uVar19 <= uVar16) {
          uVar13 = 0;
          if (uVar19 != 0) {
            uVar13 = uVar16 / uVar19;
          }
          uVar16 = uVar16 - uVar13 * uVar19;
        }
        *(long **)(*plVar1 + uVar16 * 8) = plVar12;
      }
    }
    else {
      *plVar12 = *plVar11;
      *plVar11 = (long)plVar12;
    }
    local_80 = (long *)0x0;
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    FUN_014f4fc8(&local_80);
    puVar14 = local_98;
    if (local_98 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_98 + 3);
      do {
        sVar18 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar18 == 1) {
        piVar3 = (int *)((long)local_98 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_80 = (long *)*puVar14;
          FUN_00c44438(lVar9 + 0x8040,&local_80);
        }
      }
      else if (sVar18 == 0) goto LAB_014f45fc;
    }
  }
  else if ((uVar19 & uVar19 - 1) == 0) {
    unaff_x28 = (ulong)((int)uVar19 - 1U & param_2);
    plVar12 = *(long **)(*plVar1 + unaff_x28 * 8);
    if (plVar12 == (long *)0x0) goto LAB_014f4234;
    do {
      plVar12 = (long *)*plVar12;
      if ((plVar12 == (long *)0x0) ||
         (plVar12[1] != uVar16 && (plVar12[1] & uVar19 - 1) != unaff_x28)) goto LAB_014f4234;
    } while (*(uint *)(plVar12 + 2) != param_2);
  }
  else {
    unaff_x28 = uVar16;
    if (uVar19 <= uVar16) {
      uVar13 = 0;
      if (uVar19 != 0) {
        uVar13 = uVar16 / uVar19;
      }
      unaff_x28 = uVar16 - uVar13 * uVar19;
    }
    plVar12 = *(long **)(*plVar1 + unaff_x28 * 8);
    if (plVar12 == (long *)0x0) goto LAB_014f4234;
    do {
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) goto LAB_014f4234;
      uVar13 = plVar12[1];
      if (uVar13 != uVar16) {
        if (uVar19 <= uVar13) {
          uVar7 = 0;
          if (uVar19 != 0) {
            uVar7 = uVar13 / uVar19;
          }
          uVar13 = uVar13 - uVar7 * uVar19;
        }
        if (uVar13 != unaff_x28) goto LAB_014f4234;
      }
    } while (*(uint *)(plVar12 + 2) != param_2);
  }
  puVar14 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_a8 + 3);
    do {
      sVar18 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      piVar3 = (int *)((long)local_a8 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_80 = (long *)*puVar14;
        FUN_00c44438(lVar9 + 0x8040,&local_80);
      }
    }
    else if (sVar18 == 0) goto LAB_014f45fc;
  }
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  lVar9 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar9;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0x90) == -1)) {
    local_80 = (long *)0x0;
    puStack_78 = (undefined8 *)0x0;
    plVar12 = (long *)0x0;
  }
  else {
    FUN_0142cac4(&local_80,*(undefined8 *)(lVar9 + (long)*(int *)(lVar10 + 0x90) * 8 + 0x6a0));
    plVar11 = local_80;
    if (local_80 == (long *)0x0) {
      plVar12 = (long *)0x0;
    }
    else {
      sVar18 = *(short *)((long)local_80 + 0x1a);
      if (sVar18 != 0) {
        puVar14 = (undefined8 *)local_80[1];
        if (((*PTR_DAT_047d6c48 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6c48), iVar8 != 0)) {
          uVar15 = FUN_01cd650c();
          *(undefined8 *)PTR_DAT_047d6c50 = uVar15;
          __cxa_guard_release(PTR_DAT_047d6c48);
        }
        if (puVar14 != (undefined8 *)0x0) {
          psVar2 = (short *)((long)plVar11 + 0x1a);
          do {
            if (puVar14 == (undefined8 *)PTR_DAT_047d6c50) goto LAB_014f4a54;
            puVar14 = (undefined8 *)*puVar14;
            plVar12 = (long *)0x0;
          } while (puVar14 != (undefined8 *)0x0);
          goto LAB_014f43d8;
        }
      }
      plVar12 = (long *)0x0;
    }
  }
  goto LAB_014f43d8;
  while (plVar12 = (long *)0x0, sVar18 = sVar4, sVar4 != 0) {
LAB_014f4a54:
    sVar4 = *psVar2;
    if (sVar4 == sVar18) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar18 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_014f4a78;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_014f4a78:
      bVar6 = false;
    }
    if (bVar6) {
      lVar9 = plVar11[2];
      plVar12 = (long *)0x0;
      if (lVar9 != 0) {
        plVar12 = (long *)(lVar9 + -0x28);
      }
      break;
    }
  }
LAB_014f43d8:
  (**(code **)(*plVar12 + 0x18))(&local_a8,plVar12);
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  plVar11 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    plVar11 = plVar12 + 5;
  }
  if ((long *)local_a8[2] == plVar11) {
    FUN_01099238(&local_b8,&local_a8);
  }
  puVar14 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_a8 + 3);
    do {
      sVar18 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      piVar3 = (int *)((long)local_a8 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_68 = *puVar14;
        FUN_00c44438(lVar9 + 0x8040,&local_68);
      }
    }
    else if (sVar18 == 0) goto LAB_014f45fc;
  }
  lVar9 = FUN_014f4da4(plVar1,&local_84);
  FUN_013e2144(lVar9 + 0x10,&local_b8);
  puVar14 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_b8 + 3);
    do {
      sVar18 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      piVar3 = (int *)((long)local_b8 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_a8 = (undefined8 *)*puVar14;
        FUN_00c44438(lVar9 + 0x8040,&local_a8);
      }
    }
    else if (sVar18 == 0) goto LAB_014f45fc;
  }
  plVar17 = (long *)*param_3;
  (**(code **)(*plVar17 + 0x18))(&local_a8,plVar17);
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  plVar11 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    plVar11 = plVar17 + 5;
  }
  if ((long *)local_a8[2] == plVar11) {
    FUN_00cbc6dc(&local_b8,&local_a8);
  }
  puVar14 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_a8 + 3);
    do {
      sVar18 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      piVar3 = (int *)((long)local_a8 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_68 = *puVar14;
        FUN_00c44438(lVar9 + 0x8040,&local_68);
      }
    }
    else if (sVar18 == 0) goto LAB_014f45fc;
  }
  uVar15 = FUN_014f4da4(plVar1,&local_84);
  FUN_00ca1ea4(uVar15,&local_b8);
  puVar14 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_b8 + 3);
    do {
      sVar18 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      piVar3 = (int *)((long)local_b8 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_a8 = (undefined8 *)*puVar14;
        FUN_00c44438(lVar9 + 0x8040,&local_a8);
      }
    }
    else if (sVar18 == 0) goto LAB_014f45fc;
  }
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar18 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else if (sVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar1 = local_80;
  if (local_80 != (long *)0x0) {
    plVar12 = local_80 + 3;
    do {
      sVar18 = (short)*plVar12;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(short *)plVar12 = sVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar18 == 1) {
      piVar3 = (int *)((long)local_80 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_a8 = (undefined8 *)*plVar1;
        FUN_00c44438(lVar9 + 0x8040,&local_a8);
      }
    }
    else if (sVar18 == 0) {
LAB_014f45fc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return;
}


