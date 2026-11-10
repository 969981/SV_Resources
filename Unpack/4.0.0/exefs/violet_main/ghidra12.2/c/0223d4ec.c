/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0223d4ec; name: FUN_0223d4ec
 */


void FUN_0223d4ec(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  bool bVar15;
  short sVar16;
  long *plVar17;
  undefined8 uVar18;
  char *pcVar19;
  undefined8 uVar20;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_48;
  
  local_90 = *(undefined8 *)(param_1 + 0x110);
  uStack_88 = *(undefined8 *)(param_1 + 0x118);
  local_80 = *(undefined8 *)(param_1 + 0x120);
  plVar17 = *(long **)(param_1 + 0x128);
  local_78 = plVar17;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_70,param_1 + 0x30,&local_90);
    plVar17 = local_78;
  }
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  if (local_70 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_70 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_70 + 0x1a);
    sVar16 = *(short *)((long)local_70 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar16) {
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0223d5d0;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0223d5d0:
        bVar15 = false;
      }
      if (bVar15) {
        lVar12 = local_70[2];
        if (lVar12 == 0) goto LAB_0223d6e4;
        lVar10 = FUN_00ded3a0(lVar12 + 0xe0,&local_b8);
        if (lVar10 == 0) goto LAB_0223d6cc;
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        uVar18 = *(undefined8 *)PTR_DAT_047d3e30;
        pcVar19 = *(char **)(PTR_DAT_047d3e30 + 8);
        uVar20 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
        plVar17 = *(long **)(PTR_DAT_047d3e30 + 0x18);
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x18))(plVar17);
        }
        FUN_01340a44(&local_b8,param_1,1);
        plVar14 = local_98;
        uVar8 = local_b0;
        if ((char)local_b8 != '\0') {
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x18))(local_98);
          }
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 0x20))(plVar17);
          }
          plVar17 = plVar14;
          uVar18 = uVar8;
          pcVar19 = pcStack_a8;
          uVar20 = local_a0;
          if ((char)local_b8 != '\0') {
            if (local_98 != (long *)0x0) {
              (**(code **)(*local_98 + 0x20))();
            }
            local_b8 = (undefined8 *)((ulong)local_b8 & 0xffffffffffffff00);
          }
        }
        if (*pcVar19 == '\0') {
          local_b8 = (undefined8 *)0x0;
          local_b0 = 0;
          FUN_01465440(lVar10 + 0x2c0,&local_b8);
          puVar13 = local_b8;
          if (local_b8 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_b8 + 3);
            do {
              sVar16 = *psVar1;
              cVar4 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar15) {
                *psVar1 = sVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar16 != 1) goto LAB_0223d768;
            piVar2 = (int *)((long)local_b8 + 0x1c);
            do {
              iVar9 = *piVar2;
              cVar4 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar15) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar10 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar10;
              local_48 = *puVar13;
              goto LAB_0223d874;
            }
          }
          goto LAB_0223d6c8;
        }
        local_d8 = uVar18;
        pcStack_d0 = pcVar19;
        local_c8 = uVar20;
        local_c0 = plVar17;
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x18))(plVar17);
        }
        if (*(code **)(param_1 + 0x10) == (code *)0x0) {
          local_b8 = (undefined8 *)0x0;
          local_b0 = 0;
        }
        else {
          (**(code **)(param_1 + 0x10))(&local_b8,param_1 + 0x30,&local_d8);
        }
        if (local_c0 != (long *)0x0) {
          (**(code **)(*local_c0 + 0x20))();
        }
        if (local_b8 == (undefined8 *)0x0) goto LAB_0223d6c8;
        if (*(short *)((long)local_b8 + 0x1a) == 0) goto LAB_0223d9d8;
        psVar1 = (short *)((long)local_b8 + 0x1a);
        sVar16 = *(short *)((long)local_b8 + 0x1a);
        goto LAB_0223d91c;
      }
      sVar16 = sVar3;
    } while (sVar3 != 0);
    goto LAB_0223d6e0;
  }
  goto LAB_0223d6e4;
  while (sVar16 = sVar3, sVar3 != 0) {
LAB_0223d91c:
    sVar3 = *psVar1;
    if (sVar3 == sVar16) {
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar15) {
        *psVar1 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_0223d940;
      bVar15 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0223d940:
      bVar15 = false;
    }
    if (bVar15) {
      puVar13 = (undefined8 *)local_b8[2];
      plVar14 = puVar13 + -5;
      if (puVar13 == (undefined8 *)0x0) goto LAB_0223d9d8;
      plVar11 = (long *)(**(code **)*puVar13)(puVar13);
      if ((*PTR_DAT_047d6560 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(PTR_DAT_047d6560);
        puVar7 = PTR_DAT_047d3ab0;
        if (iVar9 != 0) {
          if ((*PTR_DAT_047d3aa8 & 1) == 0) {
            iVar9 = __cxa_guard_acquire(PTR_DAT_047d3aa8);
            puVar5 = PTR_DAT_047d39b8;
            if (iVar9 != 0) {
              if ((*PTR_DAT_047d39b0 & 1) == 0) {
                iVar9 = __cxa_guard_acquire(PTR_DAT_047d39b0);
                puVar6 = PTR_DAT_047d39c8;
                if (iVar9 != 0) {
                  if (((*PTR_DAT_047d39c0 & 1) == 0) &&
                     (iVar9 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar9 != 0)) {
                    *(undefined8 *)puVar6 = 0;
                    __cxa_guard_release(PTR_DAT_047d39c0);
                  }
                  *(undefined **)puVar5 = puVar6;
                  __cxa_guard_release(PTR_DAT_047d39b0);
                }
              }
              *(undefined **)puVar7 = puVar5;
              __cxa_guard_release(PTR_DAT_047d3aa8);
            }
          }
          *(undefined **)PTR_DAT_047d6568 = puVar7;
          __cxa_guard_release(PTR_DAT_047d6560);
        }
      }
      goto joined_r0x0223d990;
    }
  }
  goto LAB_0223d9d4;
joined_r0x0223d990:
  if (plVar11 == (long *)0x0) goto LAB_0223d9ac;
  if (plVar11 == (long *)PTR_DAT_047d6568) {
    plVar11 = plVar14;
    goto LAB_0223d9b8;
  }
  plVar11 = (long *)*plVar11;
  goto joined_r0x0223d990;
LAB_0223d9ac:
  plVar11 = (long *)0x0;
LAB_0223d9b8:
  FUN_01465214(lVar10,plVar11);
  (**(code **)(*plVar14 + 0x60))(plVar14);
LAB_0223d9d4:
  if (local_b8 != (undefined8 *)0x0) {
LAB_0223d9d8:
    puVar13 = local_b8;
    psVar1 = (short *)(local_b8 + 3);
    do {
      sVar16 = *psVar1;
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar15) {
        *psVar1 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_b8 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_48 = *puVar13;
LAB_0223d874:
        FUN_00c44438(lVar10 + 0x8040,&local_48);
      }
    }
    else {
LAB_0223d768:
      if (sVar16 == 0) goto LAB_0223d704;
    }
  }
LAB_0223d6c8:
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
LAB_0223d6cc:
  (**(code **)(*(long *)(lVar12 + -0x28) + 0x60))((long *)(lVar12 + -0x28));
LAB_0223d6e0:
  if (local_70 != (undefined8 *)0x0) {
LAB_0223d6e4:
    puVar13 = local_70;
    psVar1 = (short *)(local_70 + 3);
    do {
      sVar16 = *psVar1;
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar15) {
        *psVar1 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_70 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_b8 = (undefined8 *)*puVar13;
        FUN_00c44438(lVar12 + 0x8040,&local_b8);
      }
    }
    else if (sVar16 == 0) {
LAB_0223d704:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


