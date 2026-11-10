/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030a64fc; name: FUN_030a64fc
 */


undefined8 FUN_030a64fc(long param_1,int *param_2)

{
  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined8 *puVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined8 uVar14;
  void *__s;
  long lVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  int iVar26;
  int *piVar27;
  ulong uVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  long *plVar32;
  void *pvVar33;
  int iVar34;
  long lVar35;
  ulong local_b8;
  ulong local_b0;
  long local_a8;
  ulong local_70;
  ulong local_68;
  
  lVar15 = tpidr_el0;
  lVar18 = *(long *)(lVar15 + 0x1000b8);
  if (lVar18 == 0) {
    lVar18 = FUN_00e5d3b4();
    *(long *)(lVar15 + 0x1000b8) = lVar18;
  }
  plVar29 = *(long **)(lVar18 + 0x3e0);
  if (plVar29 != (long *)0x0) {
    lVar18 = *plVar29;
    if (*(code **)(lVar18 + 0x18) != (code *)0x0) {
      (**(code **)(lVar18 + 0x18))("stepCompactOwnedVertices",0x18,*(undefined8 *)(lVar18 + 0x28));
    }
    puVar4 = (undefined8 *)plVar29[2];
    uVar19 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar19 <= (ulong)plVar29[3]) && (plVar29[2] = uVar19, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = "TtstepCompactOwnedVertices";
      uVar14 = nn::os::GetSystemTick();
      puVar4[1] = uVar14;
    }
    if (((*(byte *)(lVar18 + 0x38) & 1) != 0) && (plVar29[6] != 0)) {
      puVar4 = (undefined8 *)plVar29[2];
      uVar19 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar19 <= (ulong)plVar29[3]) && (plVar29[2] = uVar19, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(plVar29[6] + 8);
      }
    }
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar20 = *(long *)(param_1 + 0x20);
    lVar18 = lVar20;
  }
  else {
    lVar18 = FUN_0307d71c();
    lVar20 = *(long *)(param_1 + 0x20);
  }
  uVar7 = *(uint *)(lVar20 + 0xf8);
  if (uVar7 == 0) goto LAB_030a73a8;
  iVar5 = *(int *)(lVar20 + 0x40);
  *param_2 = *param_2 - uVar7;
  uVar17 = uVar7 + 0x1f;
  lVar20 = *(long *)(lVar15 + 0x1000b8);
  if (lVar20 == 0) {
    lVar20 = FUN_00e5d3b4();
    *(long *)(lVar15 + 0x1000b8) = lVar20;
  }
  uVar2 = (int)uVar17 >> 5;
  uVar19 = (ulong)uVar2;
  lVar20 = *(long *)(*(long *)(lVar20 + 0x3d0) + 0x10);
  if (*(long *)(lVar20 + 8) == 0) {
    local_b0 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar19 << 2;
    local_70 = local_b0;
    if (lVar20 == 0) goto LAB_030a6720;
    local_68 = local_b0 + 0x3f & 0xffffffffffffffc0;
    if (*(ulong *)(lVar20 + 0x28) < local_68) {
LAB_030a66b4:
      __s = (void *)FUN_031cf3b4(lVar20,&local_68);
    }
    else {
      __s = *(void **)(lVar20 + 0x38);
      if (*(ulong *)(lVar20 + 0x40) < local_68 + (long)__s) goto LAB_030a66b4;
      *(ulong *)(lVar20 + 0x38) = local_68 + (long)__s;
    }
  }
  else {
    local_70 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar19 << 2;
LAB_030a6720:
    local_b0 = local_70;
    __s = (void *)(**(code **)PTR_DAT_047d1a08)(1,&local_70,0x40);
    lVar20 = 0;
  }
  uVar28 = (ulong)(int)uVar2;
  if (uVar17 < 0x20) {
    uVar28 = 0;
  }
  pvVar33 = __s;
  if (((ulong)__s & 0xf) == 0) {
    uVar21 = uVar28;
  }
  else {
    uVar21 = 4 - (((ulong)__s & 0xf) >> 2);
    uVar22 = uVar28;
    if (uVar21 <= uVar28) {
      uVar22 = uVar21;
    }
    pvVar1 = (void *)((long)__s + uVar22 * 4);
    uVar21 = uVar28 - uVar22;
    if (__s < pvVar1) {
      memset(__s,0,uVar22 * 4);
      uVar22 = uVar22 * 4 - 1;
      uVar16 = ((uint)(uVar22 >> 2) & 0x3fffffff) + 1;
      if ((uVar16 & 7) != 0) {
        lVar23 = -((ulong)uVar16 & 7);
        do {
          pvVar33 = (void *)((long)pvVar33 + 4);
          bVar13 = lVar23 != -1;
          lVar23 = lVar23 + 1;
        } while (bVar13);
      }
      if (0x1b < uVar22) {
        do {
          pvVar33 = (void *)((long)pvVar33 + 0x20);
        } while (pvVar33 < pvVar1);
      }
    }
    else {
    }
  }
  if ((3 < uVar21) && (0 < (long)(uVar21 & 0xfffffffffffffffc))) {
    pvVar1 = (void *)((long)pvVar33 + (uVar21 & 0xfffffffffffffffc) * 4);
    pvVar3 = pvVar1;
    if (pvVar1 <= (void *)((long)pvVar33 + 0x10U)) {
      pvVar3 = (void *)((long)pvVar33 + 0x10U);
    }
    memset(pvVar33,0,(long)pvVar3 + ~(ulong)pvVar33 + 0x10 & 0xfffffffffffffff0);
    do {
      pvVar33 = (void *)((long)pvVar33 + 0x10);
    } while (pvVar33 < pvVar1);
  }
  if (pvVar33 < (void *)((long)__s + uVar28 * 4)) {
    memset(pvVar33,0,(long)__s + ~(ulong)pvVar33 + uVar28 * 4 + 4 & 0xfffffffffffffffc);
  }
  iVar26 = *(int *)PTR_DAT_047e4f38;
  lVar23 = *(long *)(lVar15 + 0x1000b8);
  if (lVar23 == 0) {
    lVar23 = FUN_00e5d3b4();
    *(long *)(lVar15 + 0x1000b8) = lVar23;
  }
  if (*(long *)(lVar23 + (long)iVar26 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  iVar26 = iVar5 + uVar7;
  if (0 < *(int *)(*(long *)(param_1 + 0x20) + 0xe8)) {
    lVar35 = 0;
    lVar23 = 0;
    uVar16 = 0;
    do {
      iVar34 = *(int *)(*(long *)(lVar18 + 0xe0) + lVar35);
      if ((iVar34 < iVar26) &&
         (iVar6 = *(int *)(*(long *)(lVar18 + 0xe0) + lVar35 + 4), iVar6 < iVar26)) {
        uVar8 = iVar34 - iVar5;
        uVar9 = iVar6 - iVar5;
        if (-1 < (int)uVar8) {
          *(uint *)((long)__s + (ulong)(uVar8 >> 5) * 4) =
               *(uint *)((long)__s + (ulong)(uVar8 >> 5) * 4) | 1 << (ulong)(uVar8 & 0x1f);
        }
        if (-1 < (int)uVar9) {
          *(uint *)((long)__s + (ulong)(uVar9 >> 5) * 4) =
               *(uint *)((long)__s + (ulong)(uVar9 >> 5) * 4) | 1 << (ulong)(uVar9 & 0x1f);
        }
      }
      if (0xfff2e48e < uVar16) {
        iVar34 = *(int *)PTR_DAT_047e4f38;
        lVar31 = *(long *)(lVar15 + 0x1000b8);
        if (lVar31 == 0) {
          lVar31 = FUN_00e5d3b4();
          *(long *)(lVar15 + 0x1000b8) = lVar31;
        }
        if (*(long *)(lVar31 + (long)iVar34 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
      }
      lVar23 = lVar23 + 1;
      lVar35 = lVar35 + 0x14;
      uVar16 = uVar16 + 0xd1b71;
    } while (lVar23 < *(int *)(*(long *)(param_1 + 0x20) + 0xe8));
  }
  if (0 < *(int *)(lVar18 + 200)) {
    lVar35 = 0;
    lVar23 = 0;
    do {
      piVar25 = (int *)(*(long *)(lVar18 + 0xc0) + lVar35);
      uVar16 = *piVar25 - iVar5;
      uVar8 = piVar25[1] - iVar5;
      if (-1 < (int)uVar16) {
        *(uint *)((long)__s + (ulong)(uVar16 >> 5) * 4) =
             *(uint *)((long)__s + (ulong)(uVar16 >> 5) * 4) | 1 << (ulong)(uVar16 & 0x1f);
      }
      if (-1 < (int)uVar8) {
        *(uint *)((long)__s + (ulong)(uVar8 >> 5) * 4) =
             *(uint *)((long)__s + (ulong)(uVar8 >> 5) * 4) | 1 << (ulong)(uVar8 & 0x1f);
      }
      lVar23 = lVar23 + 1;
      lVar35 = lVar35 + 0x14;
    } while (lVar23 < *(int *)(lVar18 + 200));
  }
  iVar34 = *(int *)PTR_DAT_047e4f38;
  lVar23 = *(long *)(lVar15 + 0x1000b8);
  if (lVar23 == 0) {
    lVar23 = FUN_00e5d3b4();
    *(long *)(lVar15 + 0x1000b8) = lVar23;
  }
  if (*(long *)(lVar23 + (long)iVar34 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (*(int *)(lVar18 + 400) != 0) {
    lVar23 = *(long *)(lVar18 + 0x188);
    lVar35 = lVar23 + (long)*(int *)(lVar18 + 400) * 0x38;
    do {
      if (*(int *)(lVar23 + 0x10) != 0) {
        piVar25 = *(int **)(lVar23 + 8);
        piVar27 = piVar25 + (long)*(int *)(lVar23 + 0x10) * 5;
        do {
          uVar16 = *piVar25 - iVar5;
          uVar8 = piVar25[1] - iVar5;
          if (-1 < (int)uVar16) {
            *(uint *)((long)__s + (ulong)(uVar16 >> 5) * 4) =
                 *(uint *)((long)__s + (ulong)(uVar16 >> 5) * 4) | 1 << (ulong)(uVar16 & 0x1f);
          }
          if (-1 < (int)uVar8) {
            *(uint *)((long)__s + (ulong)(uVar8 >> 5) * 4) =
                 *(uint *)((long)__s + (ulong)(uVar8 >> 5) * 4) | 1 << (ulong)(uVar8 & 0x1f);
          }
          piVar25 = piVar25 + 5;
        } while (piVar25 != piVar27);
      }
      lVar23 = lVar23 + 0x38;
    } while (lVar23 != lVar35);
  }
  if ((int)uVar17 < 0x20) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(uint *)((long)__s + uVar19 * 4 + -4) &
             ((-2 << (ulong)(uVar17 & 0x1f) | 1U) ^ 0xfffffffe);
    uVar17 = (uint)(byte)(POPCOUNT((char)uVar17) + POPCOUNT((char)(uVar17 >> 8)) +
                         POPCOUNT((char)(uVar17 >> 0x10)) + POPCOUNT((char)(uVar17 >> 0x18)));
    if (1 < uVar2) {
      do {
        lVar23 = uVar19 * 4;
        uVar19 = uVar19 - 1;
        uVar12 = *(undefined4 *)((long)__s + lVar23 + -8);
        uVar17 = uVar17 + (byte)(POPCOUNT((char)uVar12) + POPCOUNT((char)((uint)uVar12 >> 8)) +
                                POPCOUNT((char)((uint)uVar12 >> 0x10)) +
                                POPCOUNT((char)((uint)uVar12 >> 0x18)));
      } while (1 < (long)uVar19);
    }
  }
  if (uVar17 != uVar7) {
    lVar23 = *(long *)(lVar15 + 0x1000b8);
    if (lVar23 == 0) {
      lVar23 = FUN_00e5d3b4();
      *(long *)(lVar15 + 0x1000b8) = lVar23;
    }
    local_a8 = *(long *)(*(long *)(lVar23 + 0x3d0) + 0x10);
    if (*(long *)(local_a8 + 8) == 0) {
      local_b8 = (long)(int)uVar7 * 4;
      local_70 = local_b8;
      if (local_a8 == 0) goto LAB_030a6c6c;
      local_68 = local_b8 + 0x3f & 0xffffffffffffffc0;
      if (*(ulong *)(local_a8 + 0x28) < local_68) {
LAB_030a6be8:
        lVar23 = FUN_031cf3b4(local_a8,&local_68);
      }
      else {
        lVar23 = *(long *)(local_a8 + 0x38);
        if (*(ulong *)(local_a8 + 0x40) < local_68 + lVar23) goto LAB_030a6be8;
        *(ulong *)(local_a8 + 0x38) = local_68 + lVar23;
      }
    }
    else {
      local_70 = (long)(int)uVar7 << 2;
LAB_030a6c6c:
      local_b8 = local_70;
      lVar23 = (**(code **)PTR_DAT_047d1a08)(1,&local_70,0x40);
      local_a8 = 0;
    }
    iVar34 = *(int *)PTR_DAT_047e4f38;
    lVar35 = *(long *)(lVar15 + 0x1000b8);
    if (lVar35 == 0) {
      lVar35 = FUN_00e5d3b4();
      *(long *)(lVar15 + 0x1000b8) = lVar35;
    }
    if (*(long *)(lVar35 + (long)iVar34 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    if ((int)uVar7 < 1) {
      iVar34 = 0;
    }
    else {
      uVar19 = 0;
      iVar34 = 0;
      uVar17 = 0;
      do {
        if ((*(uint *)((long)__s + (uVar19 >> 5 & 0x7ffffff) * 4) >> (ulong)((uint)uVar19 & 0x1f) &
            1) == 0) {
          *(undefined4 *)(lVar23 + uVar19 * 4) = 0xffffffff;
        }
        else {
          *(int *)(lVar23 + uVar19 * 4) = iVar34 + iVar5;
          puVar4 = (undefined8 *)(*(long *)(lVar18 + 0xf0) + uVar19 * 0x10);
          uVar14 = *puVar4;
          puVar11 = (undefined8 *)(*(long *)(lVar18 + 0xf0) + (long)iVar34 * 0x10);
          puVar11[1] = puVar4[1];
          *puVar11 = uVar14;
          iVar34 = iVar34 + 1;
        }
        if (0xfff2e48e < uVar17) {
          iVar6 = *(int *)PTR_DAT_047e4f38;
          lVar35 = *(long *)(lVar15 + 0x1000b8);
          if (lVar35 == 0) {
            lVar35 = FUN_00e5d3b4();
            *(long *)(lVar15 + 0x1000b8) = lVar35;
          }
          if (*(long *)(lVar35 + (long)iVar6 * 8 + 1000) != 0) {
            FUN_03231bdc();
          }
        }
        uVar19 = uVar19 + 1;
        uVar17 = uVar17 + 0xd1b71;
      } while (uVar7 != uVar19);
      if ((int)(*(uint *)(lVar18 + 0xfc) & 0x7fffffff) < iVar34) {
        FUN_02e8df28(lVar18 + 0xf0,PTR_PTR_047d1a50,(long)iVar34);
      }
    }
    if (*(int *)(lVar18 + 0xf8) != iVar34) {
      *(int *)(lVar18 + 0xf8) = iVar34;
    }
    iVar34 = *(int *)PTR_DAT_047e4f38;
    lVar35 = *(long *)(lVar15 + 0x1000b8);
    if (lVar35 == 0) {
      lVar35 = FUN_00e5d3b4();
      *(long *)(lVar15 + 0x1000b8) = lVar35;
    }
    if (*(long *)(lVar35 + (long)iVar34 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    if (0 < *(int *)(lVar18 + 0xe8)) {
      lVar31 = 0;
      lVar35 = 0;
      uVar17 = 0;
      do {
        lVar24 = *(long *)(lVar18 + 0xe0);
        iVar34 = *(int *)(lVar24 + lVar31);
        if (iVar34 < iVar26) {
          iVar6 = *(int *)(lVar24 + lVar31 + 4);
          if (iVar6 < iVar26) {
            if (iVar5 <= iVar34) {
              *(undefined4 *)(lVar24 + lVar31) =
                   *(undefined4 *)(lVar23 + (long)(iVar34 - iVar5) * 4);
            }
            if (iVar5 <= iVar6) {
              *(undefined4 *)(lVar24 + lVar31 + 4) =
                   *(undefined4 *)(lVar23 + (long)(iVar6 - iVar5) * 4);
            }
          }
        }
        if (0xfff2e48e < uVar17) {
          iVar34 = *(int *)PTR_DAT_047e4f38;
          lVar24 = *(long *)(lVar15 + 0x1000b8);
          if (lVar24 == 0) {
            lVar24 = FUN_00e5d3b4();
            *(long *)(lVar15 + 0x1000b8) = lVar24;
          }
          if (*(long *)(lVar24 + (long)iVar34 * 8 + 1000) != 0) {
            FUN_03231bdc();
          }
        }
        lVar35 = lVar35 + 1;
        lVar31 = lVar31 + 0x14;
        uVar17 = uVar17 + 0xd1b71;
      } while (lVar35 < *(int *)(lVar18 + 0xe8));
    }
    if (0 < *(int *)(lVar18 + 200)) {
      lVar31 = 0;
      lVar35 = 0;
      do {
        lVar24 = *(long *)(lVar18 + 0xc0);
        if (iVar5 <= *(int *)(lVar24 + lVar31)) {
          *(undefined4 *)(lVar24 + lVar31) =
               *(undefined4 *)(lVar23 + (long)(*(int *)(lVar24 + lVar31) - iVar5) * 4);
        }
        iVar26 = *(int *)(lVar24 + lVar31 + 4);
        if (iVar5 <= iVar26) {
          *(undefined4 *)(lVar24 + lVar31 + 4) =
               *(undefined4 *)(lVar23 + (long)(iVar26 - iVar5) * 4);
        }
        lVar35 = lVar35 + 1;
        lVar31 = lVar31 + 0x14;
      } while (lVar35 < *(int *)(lVar18 + 200));
    }
    iVar26 = *(int *)PTR_DAT_047e4f38;
    lVar35 = *(long *)(lVar15 + 0x1000b8);
    if (lVar35 == 0) {
      lVar35 = FUN_00e5d3b4();
      *(long *)(lVar15 + 0x1000b8) = lVar35;
    }
    if (*(long *)(lVar35 + (long)iVar26 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    iVar26 = *(int *)(lVar18 + 400) + -1;
    if (0 < *(int *)(lVar18 + 400)) {
      do {
        lVar35 = *(long *)(lVar18 + 0x188) + (long)iVar26 * 0x38;
        iVar34 = *(int *)(lVar35 + 0x10);
        if (iVar34 != 0) {
          piVar25 = *(int **)(lVar35 + 8);
          uVar19 = (long)iVar34 * 0x14 - 0x14;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar19;
          if ((SUB164(auVar10 * ZEXT816(0xcccccccccccccccd),8) >> 4 & 1) == 0) {
            if (iVar5 <= *piVar25) {
              *piVar25 = *(int *)(lVar23 + (long)(*piVar25 - iVar5) * 4);
            }
            if (iVar5 <= piVar25[1]) {
              piVar25[1] = *(int *)(lVar23 + (long)(piVar25[1] - iVar5) * 4);
            }
            piVar27 = piVar25 + 5;
          }
          else {
            piVar27 = piVar25;
          }
          if (0x13 < uVar19) {
            do {
              if (iVar5 <= *piVar27) {
                *piVar27 = *(int *)(lVar23 + (long)(*piVar27 - iVar5) * 4);
              }
              if (iVar5 <= piVar27[1]) {
                piVar27[1] = *(int *)(lVar23 + (long)(piVar27[1] - iVar5) * 4);
              }
              if (iVar5 <= piVar27[5]) {
                piVar27[5] = *(int *)(lVar23 + (long)(piVar27[5] - iVar5) * 4);
              }
              if (iVar5 <= piVar27[6]) {
                piVar27[6] = *(int *)(lVar23 + (long)(piVar27[6] - iVar5) * 4);
              }
              piVar27 = piVar27 + 10;
            } while (piVar25 + (long)iVar34 * 5 != piVar27);
          }
        }
        iVar26 = iVar26 + -1;
      } while (-1 < iVar26);
    }
    iVar26 = *(int *)PTR_DAT_047e4f38;
    lVar35 = *(long *)(lVar15 + 0x1000b8);
    if (lVar35 == 0) {
      lVar35 = FUN_00e5d3b4();
      *(long *)(lVar15 + 0x1000b8) = lVar35;
    }
    if (*(long *)(lVar35 + (long)iVar26 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      iVar26 = *(int *)(lVar18 + 0xf8) + *(int *)(lVar18 + 0x40);
      plVar32 = *(long **)(param_1 + 0x38);
      plVar30 = plVar32 + (long)*(int *)(param_1 + 0x40) * 3;
      do {
        lVar15 = *plVar32;
        if (lVar15 != 0) {
          if ((char)plVar32[2] != '\x01') {
            lVar15 = FUN_03065a74(plVar32);
          }
          if (*(float *)(lVar15 + 0x1c) + 0.001 < *(float *)(lVar15 + 0x18)) {
            if (0 < (int)uVar7) {
              if (uVar7 == 1) {
                uVar19 = 0;
              }
              else {
                uVar19 = 0;
                do {
                  iVar34 = *(int *)(lVar23 + uVar19 * 4);
                  if (iVar34 != -1) {
                    *(undefined1 *)(*(long *)(lVar15 + 0x60) + (long)iVar34) =
                         *(undefined1 *)(*(long *)(lVar15 + 0x60) + (long)(iVar5 + (int)uVar19));
                  }
                  iVar34 = *(int *)(lVar23 + uVar19 * 4 + 4);
                  if (iVar34 != -1) {
                    *(undefined1 *)(*(long *)(lVar15 + 0x60) + (long)iVar34) =
                         *(undefined1 *)(*(long *)(lVar15 + 0x60) + (long)(iVar5 + (int)uVar19 + 1))
                    ;
                  }
                  uVar19 = uVar19 + 2;
                } while (((ulong)uVar7 & 0xfffffffe) != uVar19);
              }
              if (((uVar7 & 1) != 0) && (iVar34 = *(int *)(lVar23 + uVar19 * 4), iVar34 != -1)) {
                *(undefined1 *)(*(long *)(lVar15 + 0x60) + (long)iVar34) =
                     *(undefined1 *)(*(long *)(lVar15 + 0x60) + (long)(iVar5 + (int)uVar19));
              }
            }
            if ((*(int *)(lVar15 + 0x68) < iVar26) || (iVar26 < *(int *)(lVar15 + 0x68))) {
              *(int *)(lVar15 + 0x68) = iVar26;
            }
          }
        }
        plVar32 = plVar32 + 3;
      } while (plVar32 != plVar30);
    }
    if (local_a8 == 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar23,local_b8);
    }
    else {
      uVar19 = local_b8 + 0x3f & 0xffffffffffffffc0;
      if ((*(ulong *)(local_a8 + 0x28) < uVar19) || (*(long *)(local_a8 + 0x38) != uVar19 + lVar23))
      {
        if (lVar23 != 0) {
          if (*(ulong *)(local_a8 + 0x28) < uVar19 + 0x40) {
            *(int *)(*(long *)(local_a8 + 0x30) + 0x20) =
                 *(int *)(*(long *)(local_a8 + 0x30) + 0x20) + -1;
            (**(code **)(**(long **)(local_a8 + 0x10) + 0x18))
                      (*(long **)(local_a8 + 0x10),lVar23 - *(int *)(lVar23 + -4),uVar19 + 0x44);
          }
          else {
            if (*(long *)(local_a8 + 0x38) == uVar19 + lVar23) {
              *(long *)(local_a8 + 0x38) = lVar23;
              goto LAB_030a72dc;
            }
            FUN_031cf778(local_a8,lVar23);
          }
        }
      }
      else {
        *(long *)(local_a8 + 0x38) = lVar23;
        if (*(long *)(local_a8 + 0x48) == lVar23) {
LAB_030a72dc:
          FUN_031cf578();
        }
      }
    }
  }
  if (lVar20 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,__s,local_b0);
    goto LAB_030a73a8;
  }
  uVar19 = local_b0 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar20 + 0x28) < uVar19) || (*(long *)(lVar20 + 0x38) != uVar19 + (long)__s)) {
    if (__s == (void *)0x0) goto LAB_030a73a8;
    if (*(ulong *)(lVar20 + 0x28) < uVar19 + 0x40) {
      *(int *)(*(long *)(lVar20 + 0x30) + 0x20) = *(int *)(*(long *)(lVar20 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar20 + 0x10) + 0x18))
                (*(long **)(lVar20 + 0x10),(long)__s - (long)*(int *)((long)__s + -4),uVar19 + 0x44)
      ;
      goto LAB_030a73a8;
    }
    if (*(long *)(lVar20 + 0x38) != uVar19 + (long)__s) {
      FUN_031cf778(lVar20,__s);
      goto LAB_030a73a8;
    }
    *(void **)(lVar20 + 0x38) = __s;
  }
  else {
    *(void **)(lVar20 + 0x38) = __s;
    if (*(void **)(lVar20 + 0x48) != __s) goto LAB_030a73a8;
  }
  FUN_031cf578();
LAB_030a73a8:
  if (plVar29 != (long *)0x0) {
    lVar15 = *plVar29;
    if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar29[6] != 0)) {
      puVar4 = (undefined8 *)plVar29[2];
      uVar19 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
      if ((uVar19 <= (ulong)plVar29[3]) && (plVar29[2] = uVar19, puVar4 != (undefined8 *)0x0)) {
        *puVar4 = &DAT_03c4e575;
        puVar4[1] = *(undefined8 *)(plVar29[6] + 8);
      }
    }
    puVar4 = (undefined8 *)plVar29[2];
    uVar19 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar19 <= (ulong)plVar29[3]) && (plVar29[2] = uVar19, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_03c2d363;
      uVar14 = nn::os::GetSystemTick();
      puVar4[1] = uVar14;
    }
    if (*(code **)(lVar15 + 0x20) != (code *)0x0) {
      (**(code **)(lVar15 + 0x20))(*(undefined8 *)(lVar15 + 0x28));
    }
  }
  return 1;
}


