/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d0185c; name: FUN_00d0185c
 */


void FUN_00d0185c(long param_1,int param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  int *piVar3;
  ulong uVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  short sVar24;
  long lStack_b0;
  long *local_a8 [2];
  long local_98;
  uint local_8c;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  undefined8 *puStack_68;
  
  plVar12 = (long *)(param_1 + 0xd0);
  lVar18 = *plVar12;
  lVar11 = nn::os::GetCurrentThread();
  if (lVar11 != lVar18) {
    lVar11 = nn::os::GetCurrentThread();
LAB_00d018a0:
    if (*plVar12 == 0) goto code_r0x00d018a8;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd8));
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd8));
          while (*plVar12 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar7) {
              *plVar12 = lVar11;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_00d018b0;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_00d018b0:
    uVar15 = 0;
    goto LAB_00d018b4;
  }
  plVar12 = (long *)0x0;
  uVar15 = 1;
LAB_00d018b4:
  plVar13 = *(long **)(param_1 + 0xe8);
  plVar21 = *(long **)(param_1 + 0xf0);
  if (plVar13 != plVar21) {
    if ((*plVar13 != 0) && (*(short *)(*plVar13 + 0x1a) != 0)) {
      while (plVar13 = plVar13 + 2, plVar21 != plVar13) {
        if ((*plVar13 == 0) || (*(short *)(*plVar13 + 0x1a) == 0)) goto LAB_00d018c8;
      }
      plVar13 = plVar21;
    }
  }
LAB_00d018c8:
  plVar22 = plVar13;
  if (plVar13 != plVar21) {
    while (plVar22 = plVar22 + 2, plVar22 != plVar21) {
      if ((*plVar22 != 0) && (*(short *)(*plVar22 + 0x1a) != 0)) {
        FUN_00c96b7c(plVar13,plVar22);
        plVar13 = plVar13 + 2;
      }
    }
  }
  plVar21 = *(long **)(param_1 + 0xf0);
  lVar11 = (long)plVar21 - (long)plVar13;
  if (lVar11 == 0) {
    plVar22 = *(long **)(param_1 + 0xe8);
  }
  else {
    plVar22 = (long *)((long)plVar13 + lVar11);
    local_8c = uVar15;
    puVar8 = PTR_DAT_047d3918;
    puVar9 = PTR_DAT_047d3918;
    if (plVar22 != plVar21) {
      FUN_00c96b7c(plVar13,plVar22);
      plVar20 = plVar13 + 2;
      if (plVar22 + 2 != plVar21) {
        FUN_00c96b7c(plVar20,plVar22 + 2);
        plVar20 = plVar13 + 4;
        if (plVar22 + 4 != plVar21) {
          do {
            FUN_00c96b7c(plVar20,plVar20 + (lVar11 >> 4) * 2);
            plVar20 = plVar20 + 2;
          } while (plVar21 + (lVar11 >> 4) * -2 != plVar20);
        }
      }
      plVar21 = *(long **)(param_1 + 0xf0);
      puVar8 = PTR_DAT_047d3918;
      puVar9 = PTR_DAT_047d3918;
      plVar13 = plVar20;
    }
    while( true ) {
      PTR_DAT_047d3918 = puVar9;
      puVar9 = PTR_DAT_047d3918;
      PTR_DAT_047d3918 = puVar8;
      if (plVar21 == plVar13) break;
      plVar21 = plVar21 + -2;
      plVar22 = (long *)*plVar21;
      if (plVar22 != (long *)0x0) {
        plVar20 = plVar22 + 3;
        do {
          sVar24 = (short)*plVar20;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar7) {
            *(short *)plVar20 = sVar24 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar24 == 1) {
          piVar3 = (int *)((long)plVar22 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          puVar8 = PTR_DAT_047d3918;
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)puVar9 = lVar11;
            local_88 = *plVar22;
            FUN_00c44438(lVar11 + 0x8040,&local_88);
            puVar8 = PTR_DAT_047d3918;
          }
        }
        else {
          puVar8 = PTR_DAT_047d3918;
          if (sVar24 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
      }
    }
    plVar22 = *(long **)(param_1 + 0xe8);
    *(long **)(param_1 + 0xf0) = plVar13;
    plVar21 = plVar13;
    uVar15 = local_8c;
  }
  lVar11 = (long)plVar21 - (long)plVar22;
  if ((ulong)(lVar11 >> 4) < (ulong)(*(long *)(param_1 + 0xf8) - (long)plVar22 >> 4)) {
    puVar1 = (undefined8 *)(param_1 + 0x100);
    local_70 = 0;
    puStack_68 = puVar1;
    if (lVar11 == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,lVar11,8);
      if (lVar18 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    lStack_80 = lVar18 + (lVar11 >> 4) * 0x10;
    local_88 = lVar18;
    local_78 = lStack_80;
    local_70 = lStack_80;
    FUN_00d02424((undefined8 *)(param_1 + 0xe8),&local_88);
    FUN_00d02590(&local_88);
    plVar22 = *(long **)(param_1 + 0xe8);
    plVar13 = *(long **)(param_1 + 0xf0);
    plVar21 = plVar13;
  }
  puVar8 = PTR_DAT_047e0e48;
  uVar19 = (long)plVar21 - (long)plVar22;
  lVar11 = -(((long)uVar19 >> 1) + 0xfU & 0xfffffffffffffff0);
  plVar21 = (long *)((long)local_a8 + lVar11 + -8);
  if (plVar13 == plVar22) {
LAB_00d0191c:
    if ((uVar15 & 1) == 0) {
      *plVar12 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar12 + 1));
    }
    uVar17 = (long)uVar19 >> 4;
    if (param_2 == 1) {
      if (uVar19 == 0) {
        return;
      }
      lVar18 = *plVar21;
      uVar4 = uVar17;
      if (uVar17 < 2) {
        uVar4 = 1;
      }
      if ((lVar18 != 0) && (*(code **)(lVar18 + 0x40) != (code *)0x0)) {
        (**(code **)(lVar18 + 0x40))(lVar18 + 0x60);
      }
      if (1 < uVar17) {
        lVar18 = uVar4 - 1;
        plVar12 = (long *)((long)local_a8 + lVar11);
        do {
          lVar11 = *plVar12;
          if ((lVar11 != 0) && (*(code **)(lVar11 + 0x40) != (code *)0x0)) {
            (**(code **)(lVar11 + 0x40))(lVar11 + 0x60);
          }
          lVar18 = lVar18 + -1;
          plVar12 = plVar12 + 1;
        } while (lVar18 != 0);
      }
    }
    else if (param_2 == 2) {
      if (uVar19 == 0) {
        return;
      }
      lVar18 = *plVar21;
      uVar4 = uVar17;
      if (uVar17 < 2) {
        uVar4 = 1;
      }
      if ((lVar18 != 0) && (*(code **)(lVar18 + 0xc0) != (code *)0x0)) {
        (**(code **)(lVar18 + 0xc0))(lVar18 + 0xe0);
      }
      if (1 < uVar17) {
        lVar18 = uVar4 - 1;
        plVar12 = (long *)((long)local_a8 + lVar11);
        do {
          lVar11 = *plVar12;
          if ((lVar11 != 0) && (*(code **)(lVar11 + 0xc0) != (code *)0x0)) {
            (**(code **)(lVar11 + 0xc0))(lVar11 + 0xe0);
          }
          lVar18 = lVar18 + -1;
          plVar12 = plVar12 + 1;
        } while (lVar18 != 0);
      }
    }
    do {
      if (uVar19 == 0) {
        return;
      }
      plVar12 = (long *)*plVar21;
      if (plVar12 != (long *)0x0) {
        lVar11 = plVar12[6];
        psVar2 = (short *)(lVar11 + 0x1a);
        do {
          sVar24 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar24 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar24 == 1) {
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar12 + 0x50))();
        }
        else if (sVar24 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      plVar21 = plVar21 + 1;
      uVar17 = uVar17 - 1;
      uVar19 = uVar17;
    } while( true );
  }
  lVar18 = 0;
LAB_00d019d8:
  plVar21[lVar18] = 0;
  lVar23 = *plVar22;
  lVar14 = 0;
  lVar16 = lVar18;
  if (lVar23 != 0) {
    local_a8[1] = plVar12;
    local_98 = lVar18;
    local_8c = uVar15;
    sVar24 = *(short *)(lVar23 + 0x1a);
    if (sVar24 != 0) {
      local_a8[0] = *(long **)(lVar23 + 8);
      if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
        if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3aa8), iVar10 != 0)) {
          if (((*PTR_DAT_047d39b0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d39b0), iVar10 != 0)) {
            if (((*PTR_DAT_047d39c0 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar10 != 0)) {
              *(undefined8 *)PTR_DAT_047d39c8 = 0;
              __cxa_guard_release(PTR_DAT_047d39c0);
            }
            *(undefined **)PTR_DAT_047d39b8 = PTR_DAT_047d39c8;
            __cxa_guard_release(PTR_DAT_047d39b0);
          }
          *(undefined **)PTR_DAT_047d3ab0 = PTR_DAT_047d39b8;
          __cxa_guard_release(PTR_DAT_047d3aa8);
        }
        *(undefined **)PTR_DAT_047e0e50 = PTR_DAT_047d3ab0;
        __cxa_guard_release(puVar8);
      }
      if (local_a8[0] != (long *)0x0) {
        psVar2 = (short *)(lVar23 + 0x1a);
        do {
          lVar16 = local_98;
          plVar12 = local_a8[1];
          uVar15 = local_8c;
          if (local_a8[0] == (long *)PTR_DAT_047e0e50) goto LAB_00d01cdc;
          lVar14 = 0;
          local_a8[0] = (long *)*local_a8[0];
        } while (local_a8[0] != (long *)0x0);
        goto LAB_00d019ec;
      }
    }
    lVar14 = 0;
LAB_00d01d40:
    lVar16 = local_98;
    plVar12 = local_a8[1];
    uVar15 = local_8c;
  }
  goto LAB_00d019ec;
code_r0x00d018a8:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar7) {
    *plVar12 = lVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00d018b0;
  goto LAB_00d018a0;
  while( true ) {
    lVar14 = 0;
    sVar24 = sVar5;
    if (sVar5 == 0) break;
LAB_00d01cdc:
    sVar5 = *psVar2;
    if (sVar5 == sVar24) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar24 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_00d01d00;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00d01d00:
      bVar7 = false;
    }
    if (bVar7) {
      lVar14 = 0;
      if (*(long *)(lVar23 + 0x10) != 0) {
        lVar14 = *(long *)(lVar23 + 0x10) + -0x28;
      }
      goto LAB_00d01d40;
    }
  }
LAB_00d019ec:
  plVar22 = plVar22 + 2;
  plVar21[lVar16] = lVar14;
  lVar18 = lVar18 + 1;
  if (plVar22 == plVar13) goto LAB_00d0191c;
  goto LAB_00d019d8;
}


