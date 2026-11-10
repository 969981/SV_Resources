/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030d5d90; name: FUN_030d5d90
 */


void FUN_030d5d90(long param_1,uint *param_2,long param_3)

{
  void *__s;
  int *piVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  long lVar6;
  undefined *puVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  byte bVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  long lVar29;
  undefined8 *puVar30;
  ulong uVar31;
  int *piVar32;
  undefined8 local_70;
  uint local_68 [2];
  
  iVar11 = *(int *)(param_1 + 0x28);
  uVar3 = *param_2;
  if (iVar11 <= (int)uVar3) {
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) <= (int)uVar3) {
      FUN_030d9c00((long *)(param_1 + 0x20),(long)(int)uVar3 + 1);
      iVar11 = *(int *)(param_1 + 0x28);
    }
    iVar28 = (int)((long)(int)uVar3 + 1);
    if ((int)uVar3 < iVar11) {
      if (iVar28 < iVar11) {
        lVar16 = *(long *)(param_1 + 0x20);
        plVar10 = (long *)(lVar16 + (long)iVar11 * 8);
        *(int *)(param_1 + 0x28) = iVar28;
        do {
          plVar10 = plVar10 + -1;
          plVar9 = (long *)*plVar10;
          if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
            plVar2 = plVar9 + 2;
            do {
              lVar17 = *plVar2;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar17 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar17 + -1 == 0) {
              (**(code **)(*plVar9 + 0x18))();
            }
          }
        } while (plVar10 != (long *)(lVar16 + (long)iVar28 * 8));
      }
    }
    else {
      __s = (void *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 8);
      *(int *)(param_1 + 0x28) = iVar28;
      memset(__s,0,(*(long *)(param_1 + 0x20) + (long)iVar28 * 8) - (long)__s & 0xfffffffffffffff8);
    }
  }
  puVar7 = PTR_DAT_047d1a08;
  local_70 = 0x108;
  plVar10 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_70,0);
  if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
    (**(code **)(puVar7 + 0x10))(plVar10,"hkaiNavMeshInstanceCutter");
  }
  puVar7 = PTR_DAT_047e51b0;
  lVar16 = *(long *)(param_1 + 0x18);
  local_68[0] = *param_2;
  *(uint *)(plVar10 + 4) = local_68[0];
  *(undefined4 *)(plVar10 + 10) = 0;
  plVar10[6] = 0;
  plVar10[7] = 0;
  *(undefined4 *)(plVar10 + 0xe) = 0;
  *plVar10 = (long)(puVar7 + 0x10);
  plVar10[1] = 0xffffffff;
  *(undefined4 *)(plVar10 + 0x12) = 0;
  *(undefined4 *)(plVar10 + 0x1a) = 0;
  *(undefined4 *)(plVar10 + 0x1e) = 0;
  plVar10[2] = 1;
  plVar10[3] = lVar16;
  plVar10[0xd] = (long)&DAT_03d7702c;
  plVar10[0x11] = (long)&DAT_03d7702c;
  plVar10[0x19] = (long)&DAT_03d7702c;
  plVar10[0x1d] = (long)&DAT_03d7702c;
  plVar10[8] = -0x8000000000000000;
  plVar10[9] = (long)&DAT_03d7702c;
  plVar10[0xb] = 0;
  plVar10[0xc] = -0x8000000000000000;
  plVar10[0xf] = 0;
  plVar10[0x10] = -0x8000000000000000;
  plVar10[0x13] = 0;
  plVar10[0x14] = -0x8000000000000000;
  plVar10[0x15] = 0;
  plVar10[0x16] = -0x8000000000000000;
  plVar10[0x17] = 0;
  plVar10[0x18] = -0x8000000000000000;
  plVar10[0x1b] = 0;
  plVar10[0x1c] = -0x8000000000000000;
  plVar10[0x1f] = 0;
  plVar10[0x20] = -0x8000000000000000;
  FUN_030e2340(plVar10 + 5,local_68,
               *(undefined8 *)
                (*(long *)(*(long *)(*(long *)(lVar16 + 0x38) + (long)(int)local_68[0] * 0x100) +
                          0x20) + 0x68));
  plVar9 = *(long **)(*(long *)(param_1 + 0x20) + (long)(int)*param_2 * 8);
  *(long **)(*(long *)(param_1 + 0x20) + (long)(int)*param_2 * 8) = plVar10;
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar10 = plVar9 + 2;
    do {
      lVar16 = *plVar10;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar8) {
        *plVar10 = lVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar16 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  lVar16 = *(long *)(*(long *)(param_1 + 0x18) + 0x38) + (long)(int)*param_2 * 0x100;
  iVar11 = *(int *)(lVar16 + 0xb8);
  if (iVar11 != 0) {
    lVar16 = *(long *)(lVar16 + 0xb0);
    lVar17 = lVar16 + (long)iVar11 * 8;
    lVar29 = *(long *)(*(long *)(param_1 + 0x18) + 0x48);
    do {
      lVar26 = *(long *)(*(long *)(lVar29 + (long)*(int *)(lVar16 + 4) * 0x18) + 0x20);
      iVar11 = *(int *)(*(long *)(param_3 + 0x20) + 0x178);
      if (*(int *)(lVar26 + 0x18) == iVar11) {
        uVar3 = *(uint *)(*(long *)(param_1 + 0x18) + 0x40);
        if (0 < (int)uVar3) {
          plVar9 = *(long **)(*(long *)(param_1 + 0x18) + 0x38);
          lVar18 = 0;
          uVar31 = (ulong)*param_2;
          plVar10 = plVar9;
          do {
            if ((*(int *)((long)plVar10 + 0x1c) == *(int *)(lVar26 + 0x1c)) && (*plVar10 != 0)) {
              if ((int)lVar18 != 1) {
                uVar15 = -(int)lVar18;
                goto LAB_030d60b8;
              }
              break;
            }
            lVar18 = lVar18 + -1;
            plVar10 = plVar10 + 0x20;
          } while (-lVar18 != (ulong)uVar3);
        }
      }
      else if (*(int *)(lVar26 + 0x1c) == iVar11) {
        uVar3 = *(uint *)(*(long *)(param_1 + 0x18) + 0x40);
        if (0 < (int)uVar3) {
          plVar9 = *(long **)(*(long *)(param_1 + 0x18) + 0x38);
          lVar18 = 0;
          uVar15 = *param_2;
          plVar10 = plVar9;
          do {
            if ((*(int *)((long)plVar10 + 0x1c) == *(int *)(lVar26 + 0x18)) && (*plVar10 != 0)) {
              if ((int)lVar18 != 1) {
                uVar31 = -lVar18;
LAB_030d60b8:
                lVar18 = *(long *)(param_1 + 0x20);
                lVar25 = *(long *)(lVar18 + (long)(int)uVar15 * 8);
                lVar27 = *(long *)(lVar18 + (long)(int)(uint)uVar31 * 8);
                lVar18 = *(long *)((long)plVar9 +
                                  (-(uVar31 >> 0x1f & 1) & 0xffffff0000000000 |
                                  (uVar31 & 0xffffffff) << 8));
                if (lVar18 == 0) {
                  lVar18 = 0;
                }
                else if (*(char *)(lVar18 + 0x30) == '\x01') {
                  lVar18 = *(long *)(lVar18 + 0x20);
                }
                else {
                  lVar18 = FUN_0307d71c();
                  plVar9 = *(long **)(*(long *)(param_1 + 0x18) + 0x38);
                }
                lVar12 = plVar9[(long)(int)uVar15 * 0x20];
                if (lVar12 == 0) {
                  lVar12 = 0;
                }
                else if (*(char *)(lVar12 + 0x30) == '\x01') {
                  lVar12 = *(long *)(lVar12 + 0x20);
                }
                else {
                  lVar12 = FUN_0307d71c();
                }
                iVar11 = *(int *)(lVar26 + 0x28);
                if ((int)(*(uint *)(lVar27 + 0xa4) & 0x7fffffff) < iVar11 + *(int *)(lVar27 + 0xa0))
                {
                  FUN_03078498(lVar27 + 0x98,PTR_PTR_047d1a50);
                  iVar11 = *(int *)(lVar26 + 0x28);
                }
                if ((int)(*(uint *)(lVar25 + 0xa4) & 0x7fffffff) < *(int *)(lVar25 + 0xa0) + iVar11)
                {
                  FUN_03078498(lVar25 + 0x98,PTR_PTR_047d1a50);
                  iVar11 = *(int *)(lVar26 + 0x28);
                }
                piVar32 = *(int **)(lVar26 + 0x20);
                lVar6 = tpidr_el0;
                iVar28 = 0;
                if (iVar11 != 0) {
                  piVar1 = piVar32 + (long)iVar11 * 4;
                  do {
                    iVar11 = *(int *)(lVar27 + 0xa0);
                    *(int *)(*(long *)(lVar27 + 0x98) + (long)iVar11 * 4) = *piVar32;
                    *(int *)(lVar27 + 0xa0) = iVar11 + 1;
                    iVar11 = *(int *)(lVar25 + 0xa0);
                    *(int *)(*(long *)(lVar25 + 0x98) + (long)iVar11 * 4) = piVar32[2];
                    *(int *)(lVar25 + 0xa0) = iVar11 + 1;
                    bVar20 = 0;
                    if (*(int *)(lVar18 + 0x108) != 0) {
                      bVar20 = *(byte *)(*(long *)(lVar18 + 0x100) + (long)*piVar32);
                    }
                    *(byte *)(*(long *)(lVar18 + 0x100) + (long)*piVar32) = bVar20 | 4;
                    bVar20 = 0;
                    if (*(int *)(lVar12 + 0x108) != 0) {
                      bVar20 = *(byte *)(*(long *)(lVar12 + 0x100) + (long)piVar32[2]);
                    }
                    *(byte *)(*(long *)(lVar12 + 0x100) + (long)piVar32[2]) = bVar20 | 4;
                    iVar11 = *(int *)PTR_DAT_047e4f38;
                    lVar13 = *(long *)(lVar6 + 0x1000b8);
                    if (lVar13 == 0) {
                      lVar13 = FUN_00e5d3b4();
                      *(long *)(lVar6 + 0x1000b8) = lVar13;
                    }
                    if (*(long *)(lVar13 + (long)iVar11 * 8 + 1000) != 0) {
                      FUN_03231bdc();
                    }
                    piVar32 = piVar32 + 4;
                  } while (piVar32 != piVar1);
                  piVar32 = *(int **)(lVar26 + 0x20);
                  iVar28 = *(int *)(lVar26 + 0x28);
                }
                if (*param_2 == (uint)uVar31) {
                  if (iVar28 != 0) {
                    lVar18 = (long)iVar28 << 4;
                    do {
                      FUN_030d9db8(lVar27 + 0xd8,piVar32);
                      piVar32 = piVar32 + 4;
                      lVar18 = lVar18 + -0x10;
                    } while (lVar18 != 0);
                  }
                }
                else if (iVar28 != 0) {
                  lVar18 = (long)iVar28 << 4;
                  piVar32 = piVar32 + 2;
                  do {
                    FUN_030d9db8(lVar25 + 0xd8,piVar32);
                    lVar18 = lVar18 + -0x10;
                    piVar32 = piVar32 + 4;
                  } while (lVar18 != 0);
                }
                iVar28 = *(int *)(lVar26 + 0x58);
                iVar4 = *(int *)(lVar27 + 0x100);
                iVar11 = iVar4 + iVar28;
                puVar30 = *(undefined8 **)(lVar26 + 0x50);
                if ((int)(*(uint *)(lVar27 + 0x104) & 0x7fffffff) < iVar11) {
                  FUN_02ebb550((long *)(lVar27 + 0xf8),PTR_PTR_047d1a50,(long)iVar11);
                }
                if (iVar28 != 0) {
                  puVar19 = (undefined8 *)(*(long *)(lVar27 + 0xf8) + (long)iVar4 * 0x20);
                  uVar31 = (long)iVar28 * 0x20 - 0x20;
                  uVar3 = ((uint)(uVar31 >> 5) & 0x7ffffff) + 1;
                  puVar14 = puVar30;
                  if ((uVar3 & 3) != 0) {
                    lVar18 = -((ulong)uVar3 & 3);
                    puVar21 = puVar19;
                    do {
                      uVar23 = puVar14[3];
                      puVar19 = puVar21 + 4;
                      bVar8 = lVar18 != -1;
                      lVar18 = lVar18 + 1;
                      puVar21[1] = puVar14[1];
                      puVar21[3] = uVar23;
                      uVar23 = *puVar14;
                      puVar21[2] = puVar14[2];
                      *puVar21 = uVar23;
                      puVar14 = puVar14 + 4;
                      puVar21 = puVar19;
                    } while (bVar8);
                  }
                  if (0x5f < uVar31) {
                    do {
                      uVar23 = puVar14[3];
                      puVar19[1] = puVar14[1];
                      puVar19[3] = uVar23;
                      uVar23 = *puVar14;
                      puVar19[2] = puVar14[2];
                      *puVar19 = uVar23;
                      uVar23 = puVar14[5];
                      puVar19[7] = puVar14[7];
                      puVar19[5] = uVar23;
                      uVar23 = puVar14[4];
                      puVar19[6] = puVar14[6];
                      puVar19[4] = uVar23;
                      uVar22 = puVar14[9];
                      puVar19[0xb] = puVar14[0xb];
                      uVar23 = puVar14[10];
                      uVar24 = puVar14[8];
                      puVar19[9] = uVar22;
                      puVar19[10] = uVar23;
                      puVar19[8] = uVar24;
                      uVar23 = puVar14[0xc];
                      uVar22 = puVar14[0xd];
                      puVar21 = puVar14 + 0xe;
                      uVar24 = puVar14[0xf];
                      puVar14 = puVar14 + 0x10;
                      puVar19[0xe] = *puVar21;
                      puVar19[0xf] = uVar24;
                      puVar19[0xc] = uVar23;
                      puVar19[0xd] = uVar22;
                      puVar19 = puVar19 + 0x10;
                    } while (puVar14 != puVar30 + (long)iVar28 * 4);
                  }
                }
                *(int *)(lVar27 + 0x100) = iVar11;
                iVar28 = *(int *)(lVar26 + 0x68);
                iVar4 = *(int *)(lVar25 + 0x100);
                puVar30 = *(undefined8 **)(lVar26 + 0x60);
                iVar11 = iVar4 + iVar28;
                if ((int)(*(uint *)(lVar25 + 0x104) & 0x7fffffff) < iVar11) {
                  FUN_02ebb550((long *)(lVar25 + 0xf8),PTR_PTR_047d1a50,(long)iVar11);
                }
                if (iVar28 != 0) {
                  puVar19 = (undefined8 *)(*(long *)(lVar25 + 0xf8) + (long)iVar4 * 0x20);
                  uVar31 = (long)iVar28 * 0x20 - 0x20;
                  uVar3 = ((uint)(uVar31 >> 5) & 0x7ffffff) + 1;
                  puVar14 = puVar30;
                  if ((uVar3 & 3) != 0) {
                    lVar26 = -((ulong)uVar3 & 3);
                    puVar21 = puVar19;
                    do {
                      uVar23 = puVar14[3];
                      puVar19 = puVar21 + 4;
                      bVar8 = lVar26 != -1;
                      lVar26 = lVar26 + 1;
                      puVar21[1] = puVar14[1];
                      puVar21[3] = uVar23;
                      uVar23 = *puVar14;
                      puVar21[2] = puVar14[2];
                      *puVar21 = uVar23;
                      puVar14 = puVar14 + 4;
                      puVar21 = puVar19;
                    } while (bVar8);
                  }
                  if (0x5f < uVar31) {
                    do {
                      uVar23 = puVar14[3];
                      puVar19[1] = puVar14[1];
                      puVar19[3] = uVar23;
                      uVar23 = *puVar14;
                      puVar19[2] = puVar14[2];
                      *puVar19 = uVar23;
                      uVar23 = puVar14[5];
                      puVar19[7] = puVar14[7];
                      puVar19[5] = uVar23;
                      uVar23 = puVar14[4];
                      puVar19[6] = puVar14[6];
                      puVar19[4] = uVar23;
                      uVar22 = puVar14[9];
                      puVar19[0xb] = puVar14[0xb];
                      uVar23 = puVar14[10];
                      uVar24 = puVar14[8];
                      puVar19[9] = uVar22;
                      puVar19[10] = uVar23;
                      puVar19[8] = uVar24;
                      uVar23 = puVar14[0xc];
                      uVar22 = puVar14[0xd];
                      puVar21 = puVar14 + 0xe;
                      uVar24 = puVar14[0xf];
                      puVar14 = puVar14 + 0x10;
                      puVar19[0xe] = *puVar21;
                      puVar19[0xf] = uVar24;
                      puVar19[0xc] = uVar23;
                      puVar19[0xd] = uVar22;
                      puVar19 = puVar19 + 0x10;
                    } while (puVar14 != puVar30 + (long)iVar28 * 4);
                  }
                }
                *(int *)(lVar25 + 0x100) = iVar11;
                iVar11 = *(int *)PTR_DAT_047e4f38;
                lVar26 = *(long *)(lVar6 + 0x1000b8);
                if (lVar26 == 0) {
                  lVar26 = FUN_00e5d3b4();
                  *(long *)(lVar6 + 0x1000b8) = lVar26;
                }
                if (*(long *)(lVar26 + (long)iVar11 * 8 + 1000) != 0) {
                  FUN_03231bdc();
                }
              }
              break;
            }
            lVar18 = lVar18 + -1;
            plVar10 = plVar10 + 0x20;
          } while (-lVar18 != (ulong)uVar3);
        }
      }
      lVar16 = lVar16 + 8;
    } while (lVar16 != lVar17);
  }
  return;
}


