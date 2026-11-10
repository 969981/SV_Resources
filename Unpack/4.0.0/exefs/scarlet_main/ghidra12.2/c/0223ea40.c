/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0223ea40; name: FUN_0223ea40
 */


void FUN_0223ea40(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  int iVar9;
  ushort uVar10;
  int iVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  bool bVar17;
  short sVar18;
  ushort *puVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  char *pcVar25;
  undefined8 uVar26;
  byte bVar27;
  long lVar28;
  long lVar29;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  piVar13 = (int *)*param_1;
  puVar19 = (ushort *)((long)piVar13 - (long)*piVar13);
  if (*puVar19 < 0xb) {
    iVar15 = 0;
    iVar11 = 0;
    iVar9 = 0;
    if (8 < *puVar19) goto LAB_0223ea84;
  }
  else {
    iVar9 = 0;
    if ((ulong)puVar19[5] != 0) {
      iVar9 = *(int *)((long)piVar13 + (ulong)puVar19[5]);
    }
LAB_0223ea84:
    iVar15 = iVar9;
    if ((ulong)puVar19[4] == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)((long)piVar13 + (ulong)puVar19[4]);
    }
  }
  if (iVar15 - iVar11 == 1) {
    return;
  }
  local_88 = param_1[0x22];
  uStack_80 = param_1[0x23];
  local_78 = param_1[0x24];
  plVar23 = (long *)param_1[0x25];
  local_70 = plVar23;
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x18))(plVar23);
  }
  if ((code *)param_1[2] == (code *)0x0) {
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
  }
  else {
    (*(code *)param_1[2])(&local_68,param_1 + 6,&local_88);
    plVar23 = local_70;
  }
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x20))(plVar23);
  }
  if (local_68 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_68 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_68 + 0x1a);
    sVar18 = *(short *)((long)local_68 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar18) {
        cVar3 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar17) {
          *psVar1 = sVar18 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0223eb74;
        bVar17 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0223eb74:
        bVar17 = false;
      }
      if (bVar17) {
        lVar14 = local_68[2];
        if (lVar14 == 0) goto LAB_0223efec;
        lVar12 = FUN_00ded3a0(lVar14 + 0xe0,&local_b0);
        if (lVar12 == 0) goto LAB_0223efd4;
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar11 != 0)) {
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
        FUN_01340a44(&local_b0,param_1,1);
        plVar22 = local_90;
        uVar8 = uStack_98;
        pcVar7 = local_a0;
        uVar6 = local_a8;
        if ((char)local_b0 != '\0') {
          if (local_90 != (long *)0x0) {
            (**(code **)(*local_90 + 0x18))(local_90);
          }
          if (plVar23 != (long *)0x0) {
            (**(code **)(*plVar23 + 0x20))(plVar23);
          }
          plVar23 = plVar22;
          uVar24 = uVar6;
          pcVar25 = pcVar7;
          uVar26 = uVar8;
          if ((char)local_b0 != '\0') {
            if (local_90 != (long *)0x0) {
              (**(code **)(*local_90 + 0x20))();
            }
            local_b0 = (undefined8 *)((ulong)local_b0 & 0xffffffffffffff00);
          }
        }
        FUN_02123748(&local_b0,param_1,0x100000001);
        bVar27 = -((char)local_b0 == '\0');
        if ((char)local_b0 != '\0') {
          local_b0 = (undefined8 *)((ulong)local_b0 & 0xffffffffffffff00);
        }
        local_e0 = CONCAT17((byte)((ulong)local_a0 >> 0x38) & ~bVar27,
                            CONCAT16((byte)((ulong)local_a0 >> 0x30) & ~bVar27,
                                     CONCAT15((byte)((ulong)local_a0 >> 0x28) & ~bVar27,
                                              CONCAT14((byte)((ulong)local_a0 >> 0x20) & ~bVar27,
                                                       CONCAT13((byte)((ulong)local_a0 >> 0x18) &
                                                                ~bVar27,CONCAT12((byte)((ulong)
                                                  local_a0 >> 0x10) & ~bVar27,
                                                  CONCAT11((byte)((ulong)local_a0 >> 8) & ~bVar27,
                                                           (byte)local_a0 & ~bVar27)))))));
        uStack_d8 = CONCAT17((byte)((ulong)uStack_98 >> 0x38) & ~bVar27,
                             CONCAT16((byte)((ulong)uStack_98 >> 0x30) & ~bVar27,
                                      CONCAT15((byte)((ulong)uStack_98 >> 0x28) & ~bVar27,
                                               CONCAT14((byte)((ulong)uStack_98 >> 0x20) & ~bVar27,
                                                        CONCAT13((byte)((ulong)uStack_98 >> 0x18) &
                                                                 ~bVar27,CONCAT12((byte)((ulong)
                                                  uStack_98 >> 0x10) & ~bVar27,
                                                  CONCAT11((byte)((ulong)uStack_98 >> 8) & ~bVar27,
                                                           (byte)uStack_98 & ~bVar27)))))));
        if (*pcVar25 == '\0') goto LAB_0223eca4;
        local_d0 = uVar24;
        pcStack_c8 = pcVar25;
        local_c0 = uVar26;
        local_b8 = plVar23;
        if (plVar23 != (long *)0x0) {
          (**(code **)(*plVar23 + 0x18))(plVar23);
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
        if (local_b0 == (undefined8 *)0x0) goto LAB_0223eca4;
        if (*(short *)((long)local_b0 + 0x1a) == 0) goto LAB_0223ee9c;
        psVar1 = (short *)((long)local_b0 + 0x1a);
        sVar18 = *(short *)((long)local_b0 + 0x1a);
        goto LAB_0223ee34;
      }
      sVar18 = sVar2;
    } while (sVar2 != 0);
    goto LAB_0223efe8;
  }
  goto LAB_0223efec;
LAB_0223efb8:
  lVar29 = plVar22[7];
  lVar28 = plVar22[6];
LAB_0223efbc:
  local_e0 = CONCAT44((float)((ulong)local_e0 >> 0x20) + (float)((ulong)lVar28 >> 0x20),
                      (float)local_e0 + (float)lVar28);
  uStack_d8 = CONCAT44((float)((ulong)uStack_d8 >> 0x20) + (float)((ulong)lVar29 >> 0x20),
                       (float)uStack_d8 + (float)lVar29);
LAB_0223efc8:
  *(undefined8 *)(lVar12 + 0x278) = uStack_d8;
  *(undefined8 *)(lVar12 + 0x270) = local_e0;
  goto LAB_0223efd0;
  while (sVar18 = sVar2, sVar2 != 0) {
LAB_0223ee34:
    sVar2 = *psVar1;
    if (sVar2 == sVar18) {
      cVar3 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar17) {
        *psVar1 = sVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_0223ee58;
      bVar17 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0223ee58:
      bVar17 = false;
    }
    if (bVar17) {
      lVar28 = local_b0[2];
      if (lVar28 == 0) goto LAB_0223ee9c;
      uStack_d8 = *(undefined8 *)(lVar28 + 0xc0);
      local_e0 = *(undefined8 *)(lVar28 + 0xb8);
      (**(code **)(*(long *)(lVar28 + -0x28) + 0x60))();
      break;
    }
  }
  if (local_b0 != (undefined8 *)0x0) {
LAB_0223ee9c:
    puVar5 = local_b0;
    psVar1 = (short *)(local_b0 + 3);
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
      piVar13 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar11 = *piVar13;
        cVar3 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar17) {
          *piVar13 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar28 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar28;
        local_58 = *puVar5;
        FUN_00c44438(lVar28 + 0x8040,&local_58);
      }
    }
    else if (sVar18 == 0) goto LAB_0223ef58;
  }
LAB_0223eca4:
  uVar10 = FUN_012595d8(param_1,0x200000001);
  if ((uVar10 & 0xff) != 0) {
    if (0xff < uVar10) {
      uVar16 = param_1[0x2c];
      lVar28 = 0;
      lVar29 = 0;
      if (uVar16 != 0) {
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
        plVar22 = *(long **)(param_1[0x2b] + uVar21 * 8);
        if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
          if (uVar20 < 2) {
            do {
              if (plVar22[1] == 0x55c0d7a581349f0f) {
                if (plVar22[2] == 0x55c0d7a581349f0f) goto LAB_0223efb8;
              }
              else if ((plVar22[1] & uVar16 - 1) != uVar21) break;
              plVar22 = (long *)*plVar22;
            } while (plVar22 != (long *)0x0);
          }
          else {
            do {
              uVar20 = plVar22[1];
              if (uVar20 == 0x55c0d7a581349f0f) {
                if (plVar22[2] == 0x55c0d7a581349f0f) goto LAB_0223efb8;
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
          }
        }
      }
      goto LAB_0223efbc;
    }
    goto LAB_0223efc8;
  }
LAB_0223efd0:
  if (plVar23 != (long *)0x0) {
    (**(code **)(*plVar23 + 0x20))(plVar23);
  }
LAB_0223efd4:
  (**(code **)(*(long *)(lVar14 + -0x28) + 0x60))((long *)(lVar14 + -0x28));
LAB_0223efe8:
  if (local_68 != (undefined8 *)0x0) {
LAB_0223efec:
    puVar5 = local_68;
    psVar1 = (short *)(local_68 + 3);
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
      piVar13 = (int *)((long)local_68 + 0x1c);
      do {
        iVar11 = *piVar13;
        cVar3 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar17) {
          *piVar13 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_b0 = (undefined8 *)*puVar5;
        FUN_00c44438(lVar14 + 0x8040,&local_b0);
      }
    }
    else if (sVar18 == 0) {
LAB_0223ef58:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


