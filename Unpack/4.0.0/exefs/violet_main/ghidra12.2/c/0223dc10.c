/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0223dc10; name: FUN_0223dc10
 */


void FUN_0223dc10(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  bool bVar17;
  short sVar18;
  ushort *puVar19;
  long *plVar20;
  char *pcVar21;
  byte bVar22;
  undefined8 uVar23;
  undefined8 uVar24;
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
      sVar2 = *psVar1;
      if (sVar2 == sVar18) {
        cVar3 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar17) {
          *psVar1 = sVar18 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0223dcec;
        bVar17 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0223dcec:
        bVar17 = false;
      }
      if (bVar17) {
        lVar14 = local_68[2];
        if (lVar14 == 0) goto LAB_0223def8;
        lVar11 = FUN_00ded3a0(lVar14 + 0xe0,&local_b0);
        if (lVar11 == 0) goto LAB_0223dee0;
        piVar13 = (int *)*param_1;
        puVar19 = (ushort *)((long)piVar13 - (long)*piVar13);
        if (*puVar19 < 0xb) {
          iVar16 = 0;
          iVar10 = 0;
          iVar8 = 0;
          if (8 < *puVar19) goto LAB_0223dd4c;
        }
        else {
          iVar8 = 0;
          if ((ulong)puVar19[5] != 0) {
            iVar8 = *(int *)((long)piVar13 + (ulong)puVar19[5]);
          }
LAB_0223dd4c:
          iVar16 = iVar8;
          if ((ulong)puVar19[4] == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = *(int *)((long)piVar13 + (ulong)puVar19[4]);
          }
        }
        if (iVar16 - iVar10 != 1) {
          uVar24 = *(undefined8 *)(lVar11 + 0x278);
          uVar23 = *(undefined8 *)(lVar11 + 0x270);
          puVar12 = (undefined8 *)FUN_01235878(param_1 + 0x2b,&DAT_03d63508);
          *puVar12 = PTR_LAB_047dcdd0;
          puVar12[3] = uVar24;
          puVar12[2] = uVar23;
          goto LAB_0223dee0;
        }
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        uVar23 = *(undefined8 *)PTR_DAT_047d3e30;
        pcVar21 = *(char **)(PTR_DAT_047d3e30 + 8);
        uVar24 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
        plVar20 = *(long **)(PTR_DAT_047d3e30 + 0x18);
        if (plVar20 != (long *)0x0) {
          (**(code **)(*plVar20 + 0x18))(plVar20);
        }
        FUN_01340a44(&local_b0,param_1,1);
        plVar7 = local_90;
        uVar6 = uStack_98;
        pcVar5 = local_a0;
        uVar4 = local_a8;
        if ((char)local_b0 != '\0') {
          if (local_90 != (long *)0x0) {
            (**(code **)(*local_90 + 0x18))(local_90);
          }
          if (plVar20 != (long *)0x0) {
            (**(code **)(*plVar20 + 0x20))(plVar20);
          }
          plVar20 = plVar7;
          uVar23 = uVar4;
          pcVar21 = pcVar5;
          uVar24 = uVar6;
          if ((char)local_b0 != '\0') {
            if (local_90 != (long *)0x0) {
              (**(code **)(*local_90 + 0x20))();
            }
            local_b0 = (undefined8 *)((ulong)local_b0 & 0xffffffffffffff00);
          }
        }
        FUN_02123748(&local_b0,param_1,0x100000001);
        bVar22 = -((char)local_b0 == '\0');
        if ((char)local_b0 != '\0') {
          local_b0 = (undefined8 *)((ulong)local_b0 & 0xffffffffffffff00);
        }
        local_e0 = CONCAT17((byte)((ulong)local_a0 >> 0x38) & ~bVar22,
                            CONCAT16((byte)((ulong)local_a0 >> 0x30) & ~bVar22,
                                     CONCAT15((byte)((ulong)local_a0 >> 0x28) & ~bVar22,
                                              CONCAT14((byte)((ulong)local_a0 >> 0x20) & ~bVar22,
                                                       CONCAT13((byte)((ulong)local_a0 >> 0x18) &
                                                                ~bVar22,CONCAT12((byte)((ulong)
                                                  local_a0 >> 0x10) & ~bVar22,
                                                  CONCAT11((byte)((ulong)local_a0 >> 8) & ~bVar22,
                                                           (byte)local_a0 & ~bVar22)))))));
        uStack_d8 = CONCAT17((byte)((ulong)uStack_98 >> 0x38) & ~bVar22,
                             CONCAT16((byte)((ulong)uStack_98 >> 0x30) & ~bVar22,
                                      CONCAT15((byte)((ulong)uStack_98 >> 0x28) & ~bVar22,
                                               CONCAT14((byte)((ulong)uStack_98 >> 0x20) & ~bVar22,
                                                        CONCAT13((byte)((ulong)uStack_98 >> 0x18) &
                                                                 ~bVar22,CONCAT12((byte)((ulong)
                                                  uStack_98 >> 0x10) & ~bVar22,
                                                  CONCAT11((byte)((ulong)uStack_98 >> 8) & ~bVar22,
                                                           (byte)uStack_98 & ~bVar22)))))));
        if (*pcVar21 == '\0') goto LAB_0223de60;
        local_d0 = uVar23;
        pcStack_c8 = pcVar21;
        local_c0 = uVar24;
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
        if (local_b0 == (undefined8 *)0x0) goto LAB_0223de60;
        if (*(short *)((long)local_b0 + 0x1a) == 0) goto LAB_0223e0fc;
        psVar1 = (short *)((long)local_b0 + 0x1a);
        sVar18 = *(short *)((long)local_b0 + 0x1a);
        goto LAB_0223e094;
      }
      sVar18 = sVar2;
    } while (sVar2 != 0);
    goto LAB_0223def4;
  }
  goto LAB_0223def8;
  while (sVar18 = sVar2, sVar2 != 0) {
LAB_0223e094:
    sVar2 = *psVar1;
    if (sVar2 == sVar18) {
      cVar3 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar17) {
        *psVar1 = sVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_0223e0b8;
      bVar17 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0223e0b8:
      bVar17 = false;
    }
    if (bVar17) {
      lVar15 = local_b0[2];
      if (lVar15 == 0) goto LAB_0223e0fc;
      uStack_d8 = *(undefined8 *)(lVar15 + 0xc0);
      local_e0 = *(undefined8 *)(lVar15 + 0xb8);
      (**(code **)(*(long *)(lVar15 + -0x28) + 0x60))();
      break;
    }
  }
  if (local_b0 != (undefined8 *)0x0) {
LAB_0223e0fc:
    puVar12 = local_b0;
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
        iVar10 = *piVar13;
        cVar3 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar17) {
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
        local_58 = *puVar12;
        FUN_00c44438(lVar15 + 0x8040,&local_58);
      }
    }
    else if (sVar18 == 0) goto LAB_0223df18;
  }
LAB_0223de60:
  uVar9 = FUN_012595d8(param_1,0x200000001);
  if ((uVar9 & 0xff) != 0) {
    if (0xff < uVar9) {
      local_e0 = CONCAT44((float)((ulong)local_e0 >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar11 + 0x270) >> 0x20),
                          (float)local_e0 + (float)*(undefined8 *)(lVar11 + 0x270));
      uStack_d8 = CONCAT44((float)((ulong)uStack_d8 >> 0x20) +
                           (float)((ulong)*(undefined8 *)(lVar11 + 0x278) >> 0x20),
                           (float)uStack_d8 + (float)*(undefined8 *)(lVar11 + 0x278));
    }
    *(undefined8 *)(lVar11 + 0x278) = uStack_d8;
    *(undefined8 *)(lVar11 + 0x270) = local_e0;
  }
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
LAB_0223dee0:
  (**(code **)(*(long *)(lVar14 + -0x28) + 0x60))((long *)(lVar14 + -0x28));
LAB_0223def4:
  if (local_68 == (undefined8 *)0x0) {
    return;
  }
LAB_0223def8:
  puVar12 = local_68;
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
      iVar10 = *piVar13;
      cVar3 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar17) {
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
      local_b0 = (undefined8 *)*puVar12;
      FUN_00c44438(lVar14 + 0x8040,&local_b0);
    }
  }
  else if (sVar18 == 0) {
LAB_0223df18:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  return;
}


