/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0223bb1c; name: FUN_0223bb1c
 */


void FUN_0223bb1c(undefined8 param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  bool bVar18;
  short sVar19;
  ushort *puVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 uVar24;
  char *pcVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  long local_100;
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
  
  piVar13 = (int *)*param_2;
  puVar20 = (ushort *)((long)piVar13 - (long)*piVar13);
  if (*puVar20 < 0xb) {
    iVar16 = 0;
    iVar10 = 0;
    iVar9 = 0;
    if (8 < *puVar20) goto LAB_0223bb6c;
  }
  else {
    iVar9 = 0;
    if ((ulong)puVar20[5] != 0) {
      iVar9 = *(int *)((long)piVar13 + (ulong)puVar20[5]);
    }
LAB_0223bb6c:
    iVar16 = iVar9;
    if ((ulong)puVar20[4] == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)((long)piVar13 + (ulong)puVar20[4]);
    }
  }
  if (iVar16 - iVar10 == 1) {
    return;
  }
  local_a0 = param_2[0x22];
  uStack_98 = param_2[0x23];
  local_90 = param_2[0x24];
  plVar23 = (long *)param_2[0x25];
  local_88 = plVar23;
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x18))(plVar23);
  }
  if ((code *)param_2[2] == (code *)0x0) {
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
  }
  else {
    (*(code *)param_2[2])(&local_80,param_2 + 6,&local_a0);
    plVar23 = local_88;
  }
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x20))(plVar23);
  }
  if (local_80 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_80 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_80 + 0x1a);
    sVar19 = *(short *)((long)local_80 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar19) {
        cVar3 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar18) {
          *psVar1 = sVar19 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0223bc64;
        bVar18 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0223bc64:
        bVar18 = false;
      }
      if (bVar18) {
        lVar14 = local_80[2];
        if (lVar14 == 0) goto LAB_0223bf2c;
        uVar17 = param_2[0x2c];
        local_100 = 0;
        if (uVar17 == 0) goto LAB_0223bd98;
        uVar21 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
        uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
        uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar21 < 2) {
          uVar22 = uVar17 - 1 & 0x55c0d7a581349f0f;
        }
        else {
          uVar22 = 0x55c0d7a581349f0f;
          if (uVar17 < 0x55c0d7a581349f10) {
            uVar22 = 0;
            if (uVar17 != 0) {
              uVar22 = 0x55c0d7a581349f0f / uVar17;
            }
            uVar22 = 0x55c0d7a581349f0f - uVar22 * uVar17;
          }
        }
        plVar23 = *(long **)(param_2[0x2b] + uVar22 * 8);
        if ((plVar23 == (long *)0x0) || (plVar23 = (long *)*plVar23, plVar23 == (long *)0x0))
        goto LAB_0223bd98;
        if (1 < uVar21) goto LAB_0223bd58;
        goto LAB_0223bd0c;
      }
      sVar19 = sVar2;
    } while (sVar2 != 0);
    goto LAB_0223bf28;
  }
  goto LAB_0223bf2c;
LAB_0223bd58:
  do {
    uVar21 = plVar23[1];
    if (uVar21 == 0x55c0d7a581349f0f) {
      if (plVar23[2] == 0x55c0d7a581349f0f) goto LAB_0223bd90;
    }
    else {
      if (uVar17 <= uVar21) {
        uVar4 = 0;
        if (uVar17 != 0) {
          uVar4 = uVar21 / uVar17;
        }
        uVar21 = uVar21 - uVar4 * uVar17;
      }
      if (uVar21 != uVar22) break;
    }
    plVar23 = (long *)*plVar23;
  } while (plVar23 != (long *)0x0);
  goto LAB_0223bd98;
LAB_0223bd90:
  local_100 = plVar23[6];
  goto LAB_0223bd98;
  while (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0) {
LAB_0223bd0c:
    if (plVar23[1] == 0x55c0d7a581349f0f) {
      if (plVar23[2] == 0x55c0d7a581349f0f) goto LAB_0223bd90;
    }
    else if ((plVar23[1] & uVar17 - 1) != uVar22) break;
  }
LAB_0223bd98:
  lVar11 = FUN_00ded3a0(lVar14 + 0xe0,&local_c8);
  if (lVar11 != 0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    uVar24 = *(undefined8 *)PTR_DAT_047d3e30;
    pcVar25 = *(char **)(PTR_DAT_047d3e30 + 8);
    uVar26 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
    plVar23 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
    FUN_01340a44(&local_c8,param_2,1);
    plVar8 = local_a8;
    uVar7 = local_c0;
    if ((char)local_c8 != '\0') {
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x18))(local_a8);
      }
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x20))(plVar23);
      }
      plVar23 = plVar8;
      uVar24 = uVar7;
      pcVar25 = pcStack_b8;
      uVar26 = local_b0;
      if ((char)local_c8 != '\0') {
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
        local_c8 = (undefined8 *)((ulong)local_c8 & 0xffffffffffffff00);
      }
    }
    uVar17 = FUN_01259734(param_2,0x300000001);
    uVar21 = FUN_021237ec(param_2,0x100000001);
    fVar28 = 0.0;
    if ((uVar21 & 0xff) != 0) {
      fVar28 = (float)(uVar21 >> 0x20);
    }
    uVar21 = FUN_021237ec(param_2,0x200000001);
    fVar30 = 0.0;
    if ((uVar21 & 0xff) != 0) {
      fVar30 = (float)(uVar21 >> 0x20);
    }
    if (*pcVar25 != '\0') {
      local_e8 = uVar24;
      pcStack_e0 = pcVar25;
      local_d8 = uVar26;
      local_d0 = plVar23;
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x18))(plVar23);
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
          sVar19 = *(short *)((long)local_c8 + 0x1a);
          do {
            sVar2 = *psVar1;
            if (sVar2 == sVar19) {
              cVar3 = '\x01';
              bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar18) {
                *psVar1 = sVar19 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 != '\0') goto LAB_0223c0f8;
              bVar18 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_0223c0f8:
              bVar18 = false;
            }
            if (bVar18) {
              lVar15 = local_c8[2];
              if (lVar15 == 0) goto LAB_0223c150;
              lVar12 = FUN_00ded3a0(lVar15 + 0xe0,&local_68);
              if (lVar12 != 0) {
                fVar28 = *(float *)(lVar12 + 0x184);
                fVar30 = *(float *)(lVar12 + 0x188);
              }
              (**(code **)(*(long *)(lVar15 + -0x28) + 0x60))((long *)(lVar15 + -0x28));
              break;
            }
            sVar19 = sVar2;
          } while (sVar2 != 0);
          if (local_c8 == (undefined8 *)0x0) goto LAB_0223bebc;
        }
LAB_0223c150:
        puVar6 = local_c8;
        psVar1 = (short *)(local_c8 + 3);
        do {
          sVar19 = *psVar1;
          cVar3 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar18) {
            *psVar1 = sVar19 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar19 == 1) {
          piVar13 = (int *)((long)local_c8 + 0x1c);
          do {
            iVar10 = *piVar13;
            cVar3 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar18) {
              *piVar13 = -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_68 = *puVar6;
            FUN_00c44438(lVar15 + 0x8040,&local_68);
          }
        }
        else if (sVar19 == 0) goto LAB_0223bf4c;
      }
    }
LAB_0223bebc:
    puVar5 = PTR_PTR_047d9248;
    uVar21 = 0;
    if ((uVar17 & 0xff) != 0) {
      uVar21 = uVar17 >> 0x20;
    }
    fVar27 = (float)(**(code **)(PTR_PTR_047d9248 + uVar21 * 8))(param_1);
    fVar29 = (float)((ulong)local_100 >> 0x20);
    *(float *)(lVar11 + 0x184) = (float)local_100 + (fVar28 - (float)local_100) * fVar27;
    fVar28 = (float)(**(code **)(puVar5 + uVar21 * 8))(param_1);
    *(float *)(lVar11 + 0x188) = fVar29 + (fVar30 - fVar29) * fVar28;
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x20))(plVar23);
    }
  }
  (**(code **)(*(long *)(lVar14 + -0x28) + 0x60))((long *)(lVar14 + -0x28));
LAB_0223bf28:
  if (local_80 != (undefined8 *)0x0) {
LAB_0223bf2c:
    puVar6 = local_80;
    psVar1 = (short *)(local_80 + 3);
    do {
      sVar19 = *psVar1;
      cVar3 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar18) {
        *psVar1 = sVar19 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar19 == 1) {
      piVar13 = (int *)((long)local_80 + 0x1c);
      do {
        iVar10 = *piVar13;
        cVar3 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar18) {
          *piVar13 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_c8 = (undefined8 *)*puVar6;
        FUN_00c44438(lVar14 + 0x8040,&local_c8);
      }
    }
    else if (sVar19 == 0) {
LAB_0223bf4c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


