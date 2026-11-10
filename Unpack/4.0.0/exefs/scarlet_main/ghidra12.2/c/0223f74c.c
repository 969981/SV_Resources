/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0223f74c; name: FUN_0223f74c
 */


void FUN_0223f74c(undefined8 param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  bool bVar17;
  short sVar18;
  ushort *puVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 uVar23;
  char *pcVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  
  piVar12 = (int *)*param_2;
  puVar19 = (ushort *)((long)piVar12 - (long)*piVar12);
  if (*puVar19 < 0xb) {
    iVar15 = 0;
    iVar9 = 0;
    iVar8 = 0;
    if (8 < *puVar19) goto LAB_0223f79c;
  }
  else {
    iVar8 = 0;
    if ((ulong)puVar19[5] != 0) {
      iVar8 = *(int *)((long)piVar12 + (ulong)puVar19[5]);
    }
LAB_0223f79c:
    iVar15 = iVar8;
    if ((ulong)puVar19[4] == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)((long)piVar12 + (ulong)puVar19[4]);
    }
  }
  if (iVar15 - iVar9 == 1) {
    return;
  }
  local_a0 = param_2[0x22];
  uStack_98 = param_2[0x23];
  local_90 = param_2[0x24];
  plVar22 = (long *)param_2[0x25];
  local_88 = plVar22;
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x18))(plVar22);
  }
  if ((code *)param_2[2] == (code *)0x0) {
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
  }
  else {
    (*(code *)param_2[2])(&local_80,param_2 + 6,&local_a0);
    plVar22 = local_88;
  }
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
  if (local_80 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_80 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_80 + 0x1a);
    sVar18 = *(short *)((long)local_80 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar18) {
        cVar3 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar17) {
          *psVar1 = sVar18 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0223f894;
        bVar17 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0223f894:
        bVar17 = false;
      }
      if (bVar17) {
        lVar13 = local_80[2];
        if (lVar13 == 0) goto LAB_0223fb10;
        uVar16 = param_2[0x2c];
        fVar27 = 0.0;
        if (uVar16 == 0) goto LAB_0223f9c0;
        uVar20 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
        uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
        uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar20 < 2) {
          uVar21 = uVar16 - 1 & 0x55c0d7a581349f0f;
        }
        else {
          uVar21 = 0x55c0d7a581349f0f;
          if (uVar16 < 0x55c0d7a581349f10) {
            uVar21 = 0;
            if (uVar16 != 0) {
              uVar21 = 0x55c0d7a581349f0f / uVar16;
            }
            uVar21 = 0x55c0d7a581349f0f - uVar21 * uVar16;
          }
        }
        plVar22 = *(long **)(param_2[0x2b] + uVar21 * 8);
        if ((plVar22 == (long *)0x0) || (plVar22 = (long *)*plVar22, plVar22 == (long *)0x0))
        goto LAB_0223f9c0;
        if (1 < uVar20) goto LAB_0223f984;
        goto LAB_0223f938;
      }
      sVar18 = sVar2;
    } while (sVar2 != 0);
    goto LAB_0223fb0c;
  }
  goto LAB_0223fb10;
LAB_0223f984:
  do {
    uVar20 = plVar22[1];
    if (uVar20 == 0x55c0d7a581349f0f) {
      if (plVar22[2] == 0x55c0d7a581349f0f) goto LAB_0223f9bc;
    }
    else {
      if (uVar16 <= uVar20) {
        uVar4 = 0;
        if (uVar16 != 0) {
          uVar4 = uVar20 / uVar16;
        }
        uVar20 = uVar20 - uVar4 * uVar16;
      }
      if (uVar20 != uVar21) break;
    }
    plVar22 = (long *)*plVar22;
  } while (plVar22 != (long *)0x0);
  goto LAB_0223f9c0;
LAB_0223f9bc:
  fVar27 = *(float *)(plVar22 + 6);
  goto LAB_0223f9c0;
  while (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0) {
LAB_0223f938:
    if (plVar22[1] == 0x55c0d7a581349f0f) {
      if (plVar22[2] == 0x55c0d7a581349f0f) goto LAB_0223f9bc;
    }
    else if ((plVar22[1] & uVar16 - 1) != uVar21) break;
  }
LAB_0223f9c0:
  lVar10 = FUN_00ded3a0(lVar13 + 0xe0,&local_c8);
  if (lVar10 != 0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    uVar23 = *(undefined8 *)PTR_DAT_047d3e30;
    pcVar24 = *(char **)(PTR_DAT_047d3e30 + 8);
    uVar25 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
    plVar22 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
    FUN_01340a44(&local_c8,param_2,1);
    plVar7 = local_a8;
    uVar6 = local_c0;
    if ((char)local_c8 != '\0') {
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x18))(local_a8);
      }
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 0x20))(plVar22);
      }
      plVar22 = plVar7;
      uVar23 = uVar6;
      pcVar24 = pcStack_b8;
      uVar25 = local_b0;
      if ((char)local_c8 != '\0') {
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
        local_c8 = (undefined8 *)((ulong)local_c8 & 0xffffffffffffff00);
      }
    }
    uVar16 = FUN_01259734(param_2,0x200000001);
    uVar20 = FUN_021237ec(param_2,0x100000001);
    fVar28 = 0.0;
    if ((uVar20 & 0xff) != 0) {
      fVar28 = (float)(uVar20 >> 0x20);
    }
    if (*pcVar24 != '\0') {
      local_e8 = uVar23;
      pcStack_e0 = pcVar24;
      local_d8 = uVar25;
      local_d0 = plVar22;
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 0x18))(plVar22);
      }
      if ((code *)param_2[2] == (code *)0x0) {
        local_c8 = (undefined8 *)0x0;
        local_c0 = 0;
      }
      else {
        (*(code *)param_2[2])(&local_c8,param_2 + 6,&local_e8);
      }
      if (local_d0 != (long *)0x0) {
        (**(code **)(*local_d0 + 0x20))();
      }
      if (local_c8 != (undefined8 *)0x0) {
        if (*(short *)((long)local_c8 + 0x1a) != 0) {
          psVar1 = (short *)((long)local_c8 + 0x1a);
          sVar18 = *(short *)((long)local_c8 + 0x1a);
          do {
            sVar2 = *psVar1;
            if (sVar2 == sVar18) {
              cVar3 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar17) {
                *psVar1 = sVar18 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 != '\0') goto LAB_0223fcdc;
              bVar17 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_0223fcdc:
              bVar17 = false;
            }
            if (bVar17) {
              lVar14 = local_c8[2];
              if (lVar14 == 0) goto LAB_0223fd30;
              lVar11 = FUN_00ded3a0(lVar14 + 0xe0,&local_68);
              if (lVar11 != 0) {
                fVar28 = *(float *)(lVar11 + 0x300);
              }
              (**(code **)(*(long *)(lVar14 + -0x28) + 0x60))((long *)(lVar14 + -0x28));
              break;
            }
            sVar18 = sVar2;
          } while (sVar2 != 0);
          if (local_c8 == (undefined8 *)0x0) goto LAB_0223fac4;
        }
LAB_0223fd30:
        puVar5 = local_c8;
        psVar1 = (short *)(local_c8 + 3);
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
          piVar12 = (int *)((long)local_c8 + 0x1c);
          do {
            iVar9 = *piVar12;
            cVar3 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar17) {
              *piVar12 = -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar14 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar14;
            local_68 = *puVar5;
            FUN_00c44438(lVar14 + 0x8040,&local_68);
          }
        }
        else if (sVar18 == 0) goto LAB_0223fb30;
      }
    }
LAB_0223fac4:
    uVar20 = 0;
    if ((uVar16 & 0xff) != 0) {
      uVar20 = uVar16 >> 0x20;
    }
    fVar26 = (float)(**(code **)(PTR_PTR_047d9248 + uVar20 * 8))(param_1);
    *(float *)(lVar10 + 0x300) = fVar27 + (fVar28 - fVar27) * fVar26;
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
  }
  (**(code **)(*(long *)(lVar13 + -0x28) + 0x60))((long *)(lVar13 + -0x28));
LAB_0223fb0c:
  if (local_80 != (undefined8 *)0x0) {
LAB_0223fb10:
    puVar5 = local_80;
    psVar1 = (short *)(local_80 + 3);
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
      piVar12 = (int *)((long)local_80 + 0x1c);
      do {
        iVar9 = *piVar12;
        cVar3 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar17) {
          *piVar12 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_c8 = (undefined8 *)*puVar5;
        FUN_00c44438(lVar13 + 0x8040,&local_c8);
      }
    }
    else if (sVar18 == 0) {
LAB_0223fb30:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


