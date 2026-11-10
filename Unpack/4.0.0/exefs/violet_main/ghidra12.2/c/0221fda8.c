/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0221fda8; name: FUN_0221fda8
 */


void FUN_0221fda8(undefined8 param_1,undefined8 *param_2)

{
  short *psVar1;
  ulong *puVar2;
  short sVar3;
  char cVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  undefined8 *puVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  ulong uVar18;
  ushort *puVar19;
  bool bVar20;
  short sVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  undefined8 uVar25;
  byte bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  long local_110;
  float fStack_108;
  long local_100;
  float fStack_f8;
  ulong local_e8;
  ulong local_e0 [7];
  undefined8 local_a8;
  ulong *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  ulong *local_70;
  undefined8 uStack_68;
  
  piVar12 = (int *)*param_2;
  puVar19 = (ushort *)((long)piVar12 - (long)*piVar12);
  if (*puVar19 < 0xb) {
    iVar16 = 0;
    iVar10 = 0;
    iVar8 = 0;
    if (8 < *puVar19) goto LAB_0221fdf8;
  }
  else {
    iVar8 = 0;
    if ((ulong)puVar19[5] != 0) {
      iVar8 = *(int *)((long)piVar12 + (ulong)puVar19[5]);
    }
LAB_0221fdf8:
    iVar16 = iVar8;
    if ((ulong)puVar19[4] == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)((long)piVar12 + (ulong)puVar19[4]);
    }
  }
  if (iVar16 - iVar10 == 1) {
    return;
  }
  local_90 = param_2[0x22];
  uStack_88 = param_2[0x23];
  local_80 = param_2[0x24];
  plVar17 = (long *)param_2[0x25];
  local_78 = plVar17;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  if ((code *)param_2[2] == (code *)0x0) {
    local_70 = (ulong *)0x0;
    uStack_68 = 0;
  }
  else {
    (*(code *)param_2[2])(&local_70,param_2 + 6,&local_90);
    plVar17 = local_78;
  }
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  if (local_70 == (ulong *)0x0) {
    return;
  }
  if (*(short *)((long)local_70 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_70 + 0x1a);
    sVar21 = *(short *)((long)local_70 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar21) {
        cVar4 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar20) {
          *psVar1 = sVar21 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0221fef0;
        bVar20 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0221fef0:
        bVar20 = false;
      }
      if (bVar20) {
        plVar17 = (long *)(local_70[2] - 0x28);
        if (local_70[2] != 0) {
          uVar13 = param_2[0x2c];
          fStack_108 = 0.0;
          local_110 = 0;
          fStack_f8 = 0.0;
          local_100 = 0;
          if (uVar13 == 0) goto LAB_02220108;
          uVar18 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
          uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
          uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar18 < 2) {
            uVar22 = uVar13 - 1 & 0x55c0d7a581349f0f;
          }
          else {
            uVar22 = 0x55c0d7a581349f0f;
            if (uVar13 < 0x55c0d7a581349f10) {
              uVar22 = 0;
              if (uVar13 != 0) {
                uVar22 = 0x55c0d7a581349f0f / uVar13;
              }
              uVar22 = 0x55c0d7a581349f0f - uVar22 * uVar13;
            }
          }
          fStack_f8 = 0.0;
          local_100 = 0;
          plVar23 = *(long **)(param_2[0x2b] + uVar22 * 8);
          if ((plVar23 == (long *)0x0) || (plVar23 = (long *)*plVar23, plVar23 == (long *)0x0))
          goto LAB_0222002c;
          if (1 < uVar18) goto LAB_0221ffec;
          goto LAB_0221ffa0;
        }
        break;
      }
      sVar21 = sVar3;
    } while (sVar3 != 0);
  }
  goto LAB_02220504;
LAB_0221ffec:
  do {
    uVar24 = plVar23[1];
    if (uVar24 == 0x55c0d7a581349f0f) {
      if (plVar23[2] == 0x55c0d7a581349f0f) goto LAB_02220024;
    }
    else {
      if (uVar13 <= uVar24) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = uVar24 / uVar13;
        }
        uVar24 = uVar24 - uVar5 * uVar13;
      }
      if (uVar24 != uVar22) break;
    }
    plVar23 = (long *)*plVar23;
  } while (plVar23 != (long *)0x0);
  goto LAB_0222002c;
LAB_02220024:
  fStack_f8 = (float)plVar23[7];
  local_100 = plVar23[6];
  goto LAB_0222002c;
LAB_02220100:
  fStack_108 = (float)plVar23[7];
  local_110 = plVar23[6];
  goto LAB_02220108;
LAB_022203d8:
  if ((char)plVar23[6] == '\0') goto LAB_022203e0;
  goto LAB_022204f4;
  while (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0) {
LAB_0221ffa0:
    if (plVar23[1] == 0x55c0d7a581349f0f) {
      if (plVar23[2] == 0x55c0d7a581349f0f) goto LAB_02220024;
    }
    else if ((plVar23[1] & uVar13 - 1) != uVar22) break;
  }
LAB_0222002c:
  if (uVar18 < 2) {
    uVar22 = uVar13 - 1 & 0x17ea73508677cdff;
  }
  else {
    uVar22 = 0x17ea73508677cdff;
    if (uVar13 < 0x17ea73508677ce00) {
      uVar22 = 0;
      if (uVar13 != 0) {
        uVar22 = 0x17ea73508677cdff / uVar13;
      }
      uVar22 = 0x17ea73508677cdff - uVar22 * uVar13;
    }
  }
  plVar23 = *(long **)(param_2[0x2b] + uVar22 * 8);
  fStack_108 = 0.0;
  local_110 = 0;
  if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
    if (uVar18 < 2) {
      do {
        if (plVar23[1] == 0x17ea73508677cdff) {
          if (plVar23[2] == 0x17ea73508677cdff) goto LAB_02220100;
        }
        else if ((plVar23[1] & uVar13 - 1) != uVar22) break;
        plVar23 = (long *)*plVar23;
      } while (plVar23 != (long *)0x0);
    }
    else {
      do {
        uVar18 = plVar23[1];
        if (uVar18 == 0x17ea73508677cdff) {
          if (plVar23[2] == 0x17ea73508677cdff) goto LAB_02220100;
        }
        else {
          if (uVar13 <= uVar18) {
            uVar24 = 0;
            if (uVar13 != 0) {
              uVar24 = uVar18 / uVar13;
            }
            uVar18 = uVar18 - uVar24 * uVar13;
          }
          if (uVar18 != uVar22) break;
        }
        plVar23 = (long *)*plVar23;
      } while (plVar23 != (long *)0x0);
    }
  }
LAB_02220108:
  uVar18 = FUN_01259734(param_2,0x400000001);
  puVar6 = PTR_PTR_047d9248;
  uVar13 = 0;
  if ((uVar18 & 0xff) != 0) {
    uVar13 = uVar18 >> 0x20;
  }
  fVar27 = (float)(**(code **)(PTR_PTR_047d9248 + uVar13 * 8))(param_1);
  fVar28 = (float)(**(code **)(puVar6 + uVar13 * 8))(param_1);
  fVar29 = (float)(**(code **)(puVar6 + uVar13 * 8))(param_1);
  local_a0 = (ulong *)0x0;
  uStack_98 = 0;
  FUN_00d0a71c(&local_a0,&local_70);
  lVar15 = FUN_01180e7c(param_2,&local_a0);
  puVar7 = local_a0;
  if (local_a0 != (ulong *)0x0) {
    puVar2 = local_a0 + 3;
    do {
      sVar21 = (short)*puVar2;
      cVar4 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar20) {
        *(short *)puVar2 = sVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar21 == 1) {
      piVar12 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar10 = *piVar12;
        cVar4 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar20) {
          *piVar12 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_e0[0] = *puVar7;
        FUN_00c44438(lVar14 + 0x8040,local_e0);
      }
    }
    else if (sVar21 == 0) goto LAB_02220378;
  }
  if (lVar15 != 0) {
    fVar32 = (float)((ulong)local_100 >> 0x20);
    fVar27 = (float)local_100 + fVar27 * ((float)local_110 - (float)local_100);
    fVar32 = fVar32 + fVar28 * ((float)((ulong)local_110 >> 0x20) - fVar32);
    uVar9 = FUN_012595d8(param_2,0x500000001);
    if (((uVar9 & 0xff) != 0) && (0xff < uVar9)) {
      uVar13 = param_2[0x2c];
      if (uVar13 != 0) {
        uVar18 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar18 < 2) {
          uVar22 = uVar13 - 1 & 0x178243c67380d9e6;
        }
        else {
          uVar22 = 0x178243c67380d9e6;
          if (uVar13 < 0x178243c67380d9e7) {
            uVar22 = 0;
            if (uVar13 != 0) {
              uVar22 = 0x178243c67380d9e6 / uVar13;
            }
            uVar22 = 0x178243c67380d9e6 - uVar22 * uVar13;
          }
        }
        plVar23 = *(long **)(param_2[0x2b] + uVar22 * 8);
        if ((plVar23 != (long *)0x0) && (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0)) {
          if (uVar18 < 2) {
            do {
              if (plVar23[1] == 0x178243c67380d9e6) {
                if (plVar23[2] == 0x178243c67380d9e6) goto LAB_022203d8;
              }
              else if ((plVar23[1] & uVar13 - 1) != uVar22) break;
              plVar23 = (long *)*plVar23;
            } while (plVar23 != (long *)0x0);
          }
          else {
            do {
              uVar18 = plVar23[1];
              if (uVar18 == 0x178243c67380d9e6) {
                if (plVar23[2] == 0x178243c67380d9e6) goto LAB_022203d8;
              }
              else {
                if (uVar13 <= uVar18) {
                  uVar24 = 0;
                  if (uVar13 != 0) {
                    uVar24 = uVar18 / uVar13;
                  }
                  uVar18 = uVar18 - uVar24 * uVar13;
                }
                if (uVar18 != uVar22) break;
              }
              plVar23 = (long *)*plVar23;
            } while (plVar23 != (long *)0x0);
          }
        }
      }
LAB_022203e0:
      FUN_02123748(local_e0,param_2,0x600000001);
      bVar26 = -((char)local_e0[0] == '\0');
      if ((char)local_e0[0] != '\0') {
        local_e0[0] = local_e0[0] & 0xffffffffffffff00;
      }
      fVar28 = (float)CONCAT13((byte)(local_e0[2] >> 0x18) & ~bVar26,
                               CONCAT12((byte)(local_e0[2] >> 0x10) & ~bVar26,
                                        CONCAT11((byte)(local_e0[2] >> 8) & ~bVar26,
                                                 (byte)local_e0[2] & ~bVar26)));
      if (((*PTR_DAT_047d8c00 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c00);
      }
      lVar14 = *(long *)PTR_DAT_047d8c08;
      *(long *)PTR_DAT_047d8c10 = lVar14;
      uVar25 = *(undefined8 *)(lVar14 + 0x70);
      uVar30 = FUN_0211a080(lVar15);
      local_a8 = 0;
      fVar31 = (float)((ulong)uVar30 >> 0x20);
      fVar33 = (float)(CONCAT17((byte)(local_e0[2] >> 0x38) & ~bVar26,
                                CONCAT16((byte)(local_e0[2] >> 0x30) & ~bVar26,
                                         CONCAT15((byte)(local_e0[2] >> 0x28) & ~bVar26,
                                                  CONCAT14((byte)(local_e0[2] >> 0x20) & ~bVar26,
                                                           fVar28)))) >> 0x20);
      local_e8 = local_e8 & 0xffffffffff000000;
      uVar13 = FUN_00c7a0cc(CONCAT44(fVar33 + fVar31,fVar28 + (float)uVar30),
                            CONCAT44(fVar33 + fVar32 + (fVar31 - ((float)((ulong)*(undefined8 *)
                                                                                  (lVar15 + 0x90) >>
                                                                         0x20) +
                                                                 (float)((ulong)*(undefined8 *)
                                                                                 (lVar15 + 0x80) >>
                                                                        0x20) +
                                                                 (float)((ulong)*(undefined8 *)
                                                                                 (lVar15 + 0x60) >>
                                                                        0x20) +
                                                                 (float)((ulong)*(undefined8 *)
                                                                                 (lVar15 + 0x50) >>
                                                                        0x20))),
                                     fVar28 + fVar27 + ((float)uVar30 -
                                                       ((float)*(undefined8 *)(lVar15 + 0x90) +
                                                       (float)*(undefined8 *)(lVar15 + 0x80) +
                                                       (float)*(undefined8 *)(lVar15 + 0x60) +
                                                       (float)*(undefined8 *)(lVar15 + 0x50)))),
                            uVar25,0xffffffff,local_e0,0,&local_e8);
      if ((uVar13 & 1) != 0) {
        local_e8 = 0x178243c67380d9e6;
        puVar11 = (undefined8 *)FUN_01235878(param_2 + 0x2b,&local_e8);
        puVar6 = PTR_LAB_047dcd90;
        *(undefined1 *)(puVar11 + 2) = 1;
        *puVar11 = puVar6;
        FUN_012c7df0(&local_a8);
        goto LAB_022204f4;
      }
      FUN_012c7df0(&local_a8);
    }
    *(undefined1 *)(lVar15 + 0xe0) = 1;
    *(ulong *)(lVar15 + 0x58) = (ulong)(uint)(fStack_f8 + fVar29 * (fStack_108 - fStack_f8));
    *(ulong *)(lVar15 + 0x50) = CONCAT44(fVar32,fVar27);
  }
LAB_022204f4:
  (**(code **)(*plVar17 + 0x60))(plVar17);
LAB_02220504:
  puVar7 = local_70;
  if (local_70 != (ulong *)0x0) {
    puVar2 = local_70 + 3;
    do {
      sVar21 = (short)*puVar2;
      cVar4 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar20) {
        *(short *)puVar2 = sVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar21 == 1) {
      piVar12 = (int *)((long)local_70 + 0x1c);
      do {
        iVar10 = *piVar12;
        cVar4 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar20) {
          *piVar12 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_e0[0] = *puVar7;
        FUN_00c44438(lVar15 + 0x8040,local_e0);
      }
    }
    else if (sVar21 == 0) {
LAB_02220378:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


