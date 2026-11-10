/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0037ca30; name: FUN_0037ca30
 */


ulong FUN_0037ca30(long *param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  void *__s;
  size_t __n;
  undefined1 uVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  long *plVar22;
  ulong uVar23;
  ulong __n_00;
  ulong uVar24;
  ulong uVar25;
  
  Libz_SigloMiddlewareInfo();
  if ((((param_1 == (long *)0x0) || (param_1[8] == 0)) || (param_1[9] == 0)) ||
     ((plVar22 = (long *)param_1[7], plVar22 == (long *)0x0 || ((long *)*plVar22 != param_1)))) {
    return 0xfffffffe;
  }
  iVar15 = (int)plVar22[1];
  if (((0x38 < iVar15 - 0x39U) ||
      ((1L << ((ulong)(iVar15 - 0x39U) & 0x3f) & 0x100400400011001U) == 0)) &&
     ((iVar15 != 0x29a && (iVar15 != 0x2a)))) {
    return 0xfffffffe;
  }
  if (5 < param_2) {
    return 0xfffffffe;
  }
  if (((param_1[3] == 0) || ((lVar11 = param_1[1], (int)lVar11 != 0 && (*param_1 == 0)))) ||
     ((param_2 != 4 && (iVar15 == 0x29a)))) {
    param_1[6] = *(long *)(PTR_PTR_047ccfa0 + 0x20);
    return 0xfffffffe;
  }
  if ((int)param_1[4] == 0) {
LAB_0037cf10:
    param_1[6] = *(long *)(PTR_PTR_047ccfa0 + 0x38);
    return 0xfffffffb;
  }
  iVar3 = *(int *)((long)plVar22 + 0x4c);
  *(uint *)((long)plVar22 + 0x4c) = param_2;
  if (plVar22[5] == 0) {
    if ((int)lVar11 == 0) {
      iVar20 = -9;
      if (iVar3 < 5) {
        iVar20 = 0;
      }
      lVar11 = 0;
      iVar21 = -9;
      if ((int)param_2 < 5) {
        iVar21 = 0;
      }
      if ((param_2 != 4) && ((int)(iVar21 + param_2 * 2) <= iVar20 + iVar3 * 2)) goto LAB_0037cf10;
    }
    else {
      lVar11 = 0;
    }
  }
  else {
    FUN_00383870(plVar22);
    lVar11 = plVar22[5];
    uVar14 = *(uint *)(param_1 + 4);
    uVar9 = uVar14;
    if ((uint)lVar11 <= uVar14) {
      uVar9 = (uint)lVar11;
    }
    if (uVar9 != 0) {
      uVar23 = (ulong)uVar9;
      memcpy((void *)param_1[3],(void *)plVar22[4],uVar23);
      param_1[3] = param_1[3] + uVar23;
      plVar22[4] = plVar22[4] + uVar23;
      param_1[5] = param_1[5] + uVar23;
      uVar14 = (int)param_1[4] - uVar9;
      *(uint *)(param_1 + 4) = uVar14;
      lVar11 = plVar22[5] - uVar23;
      plVar22[5] = lVar11;
      if (lVar11 == 0) {
        plVar22[4] = plVar22[2];
      }
    }
    if (uVar14 == 0) goto LAB_0037e0ac;
    iVar15 = (int)plVar22[1];
  }
  if (iVar15 == 0x2a) {
    if (((int)plVar22[0x19] < 2) && (iVar15 = *(int *)((long)plVar22 + 0xc4), 1 < iVar15)) {
      if (iVar15 < 6) {
        uVar9 = 0x40;
      }
      else {
        uVar9 = 0x80;
        if (iVar15 != 6) {
          uVar9 = 0xc0;
        }
      }
    }
    else {
      uVar9 = 0;
    }
    uVar9 = uVar9 | *(int *)((long)plVar22 + 0x54) * 0x1000 - 0x7800U;
    if (*(int *)((long)plVar22 + 0xac) != 0) {
      uVar9 = uVar9 | 0x20;
    }
    plVar22[5] = lVar11 + 1;
    *(char *)(plVar22[2] + lVar11) = (char)(uVar9 >> 8);
    lVar11 = plVar22[5];
    plVar22[5] = lVar11 + 1;
    *(byte *)(plVar22[2] + lVar11) =
         ((byte)uVar9 + (char)(uVar9 / 0x1f) * -0x1f | (byte)uVar9) ^ 0x1f;
    if (*(int *)((long)plVar22 + 0xac) != 0) {
      lVar11 = param_1[0xc];
      lVar19 = plVar22[5];
      plVar22[5] = lVar19 + 1;
      *(char *)(plVar22[2] + lVar19) = (char)((ulong)lVar11 >> 0x18);
      lVar19 = plVar22[5];
      plVar22[5] = lVar19 + 1;
      *(char *)(plVar22[2] + lVar19) = (char)((ulong)lVar11 >> 0x10);
      lVar11 = param_1[0xc];
      lVar19 = plVar22[5];
      plVar22[5] = lVar19 + 1;
      *(char *)(plVar22[2] + lVar19) = (char)((ulong)lVar11 >> 8);
      lVar19 = plVar22[5];
      plVar22[5] = lVar19 + 1;
      *(char *)(plVar22[2] + lVar19) = (char)lVar11;
    }
    lVar11 = FUN_0037fbe0(0,0,0);
    param_1[0xc] = lVar11;
    *(undefined4 *)(plVar22 + 1) = 0x71;
    lVar11 = param_1[7];
    FUN_00383870(lVar11);
    uVar9 = *(uint *)(param_1 + 4);
    if (*(uint *)(lVar11 + 0x28) <= *(uint *)(param_1 + 4)) {
      uVar9 = *(uint *)(lVar11 + 0x28);
    }
    if (uVar9 != 0) {
      uVar23 = (ulong)uVar9;
      memcpy((void *)param_1[3],*(void **)(lVar11 + 0x20),uVar23);
      param_1[3] = param_1[3] + uVar23;
      *(ulong *)(lVar11 + 0x20) = *(long *)(lVar11 + 0x20) + uVar23;
      param_1[5] = param_1[5] + uVar23;
      *(uint *)(param_1 + 4) = (int)param_1[4] - uVar9;
      lVar19 = *(long *)(lVar11 + 0x28) - uVar23;
      *(long *)(lVar11 + 0x28) = lVar19;
      if (lVar19 == 0) {
        *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar11 + 0x10);
      }
    }
    if (plVar22[5] != 0) goto LAB_0037e0ac;
    iVar15 = (int)plVar22[1];
LAB_0037cd88:
    if (iVar15 == 0x39) {
      lVar11 = FUN_0037fe70(0,0,0);
      param_1[0xc] = lVar11;
      lVar11 = plVar22[5];
      plVar22[5] = lVar11 + 1;
      *(undefined1 *)(plVar22[2] + lVar11) = 0x1f;
      lVar11 = plVar22[5];
      plVar22[5] = lVar11 + 1;
      *(undefined1 *)(plVar22[2] + lVar11) = 0x8b;
      lVar11 = plVar22[5];
      plVar22[5] = lVar11 + 1;
      *(undefined1 *)(plVar22[2] + lVar11) = 8;
      piVar12 = (int *)plVar22[7];
      if (piVar12 == (int *)0x0) {
        lVar11 = plVar22[5];
        plVar22[5] = lVar11 + 1;
        *(undefined1 *)(plVar22[2] + lVar11) = 0;
        lVar11 = plVar22[5];
        plVar22[5] = lVar11 + 1;
        *(undefined1 *)(plVar22[2] + lVar11) = 0;
        lVar11 = plVar22[5];
        plVar22[5] = lVar11 + 1;
        *(undefined1 *)(plVar22[2] + lVar11) = 0;
        lVar11 = plVar22[5];
        plVar22[5] = lVar11 + 1;
        *(undefined1 *)(plVar22[2] + lVar11) = 0;
        lVar11 = plVar22[5];
        plVar22[5] = lVar11 + 1;
        *(undefined1 *)(plVar22[2] + lVar11) = 0;
        if (*(int *)((long)plVar22 + 0xc4) == 9) {
          uVar10 = 2;
        }
        else {
          uVar10 = 4;
          if ((int)plVar22[0x19] < 2 && 1 < *(int *)((long)plVar22 + 0xc4)) {
            uVar10 = 0;
          }
        }
        lVar11 = plVar22[5];
        plVar22[5] = lVar11 + 1;
        *(undefined1 *)(plVar22[2] + lVar11) = uVar10;
        lVar11 = plVar22[5];
        plVar22[5] = lVar11 + 1;
        *(undefined1 *)(plVar22[2] + lVar11) = 3;
        *(undefined4 *)(plVar22 + 1) = 0x71;
        lVar11 = param_1[7];
        FUN_00383870(lVar11);
        uVar9 = *(uint *)(param_1 + 4);
        if (*(uint *)(lVar11 + 0x28) <= *(uint *)(param_1 + 4)) {
          uVar9 = *(uint *)(lVar11 + 0x28);
        }
        if (uVar9 != 0) {
          uVar23 = (ulong)uVar9;
          memcpy((void *)param_1[3],*(void **)(lVar11 + 0x20),uVar23);
          param_1[3] = param_1[3] + uVar23;
          *(ulong *)(lVar11 + 0x20) = *(long *)(lVar11 + 0x20) + uVar23;
          param_1[5] = param_1[5] + uVar23;
          *(uint *)(param_1 + 4) = (int)param_1[4] - uVar9;
          lVar19 = *(long *)(lVar11 + 0x28) - uVar23;
          *(long *)(lVar11 + 0x28) = lVar19;
          if (lVar19 == 0) {
            *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar11 + 0x10);
          }
        }
        if (plVar22[5] != 0) goto LAB_0037e0ac;
        iVar15 = (int)plVar22[1];
        goto LAB_0037d138;
      }
      iVar15 = *piVar12;
      iVar3 = piVar12[0x11];
      lVar19 = *(long *)(piVar12 + 6);
      lVar16 = *(long *)(piVar12 + 10);
      lVar11 = *(long *)(piVar12 + 0xe);
      lVar17 = plVar22[5];
      plVar22[5] = lVar17 + 1;
      *(char *)(plVar22[2] + lVar17) =
           iVar15 != 0 | (iVar3 != 0) << 1 | (lVar19 != 0) << 2 | (lVar16 != 0) << 3 |
           (lVar11 != 0) << 4;
      lVar11 = plVar22[5];
      uVar13 = *(undefined8 *)(plVar22[7] + 8);
      plVar22[5] = lVar11 + 1;
      *(char *)(plVar22[2] + lVar11) = (char)uVar13;
      uVar13 = *(undefined8 *)(plVar22[7] + 8);
      lVar11 = plVar22[5];
      plVar22[5] = lVar11 + 1;
      *(char *)(plVar22[2] + lVar11) = (char)((ulong)uVar13 >> 8);
      uVar13 = *(undefined8 *)(plVar22[7] + 8);
      lVar11 = plVar22[5];
      plVar22[5] = lVar11 + 1;
      *(char *)(plVar22[2] + lVar11) = (char)((ulong)uVar13 >> 0x10);
      uVar13 = *(undefined8 *)(plVar22[7] + 8);
      lVar11 = plVar22[5];
      plVar22[5] = lVar11 + 1;
      *(char *)(plVar22[2] + lVar11) = (char)((ulong)uVar13 >> 0x18);
      if (*(int *)((long)plVar22 + 0xc4) == 9) {
        uVar10 = 2;
      }
      else {
        uVar10 = 4;
        if ((int)plVar22[0x19] < 2 && 1 < *(int *)((long)plVar22 + 0xc4)) {
          uVar10 = 0;
        }
      }
      lVar11 = plVar22[5];
      plVar22[5] = lVar11 + 1;
      *(undefined1 *)(plVar22[2] + lVar11) = uVar10;
      lVar11 = plVar22[5];
      uVar4 = *(undefined4 *)(plVar22[7] + 0x14);
      plVar22[5] = lVar11 + 1;
      *(char *)(plVar22[2] + lVar11) = (char)uVar4;
      lVar11 = plVar22[7];
      if (*(long *)(lVar11 + 0x18) != 0) {
        lVar19 = plVar22[5];
        uVar4 = *(undefined4 *)(lVar11 + 0x20);
        plVar22[5] = lVar19 + 1;
        *(char *)(plVar22[2] + lVar19) = (char)uVar4;
        uVar4 = *(undefined4 *)(plVar22[7] + 0x20);
        lVar11 = plVar22[5];
        plVar22[5] = lVar11 + 1;
        *(char *)(plVar22[2] + lVar11) = (char)((uint)uVar4 >> 8);
        lVar11 = plVar22[7];
      }
      if (*(int *)(lVar11 + 0x44) != 0) {
        lVar11 = FUN_0037fe70(param_1[0xc],plVar22[2],(int)plVar22[5]);
        param_1[0xc] = lVar11;
      }
      plVar22[8] = 0;
      *(undefined4 *)(plVar22 + 1) = 0x45;
switchD_0037d158_caseD_45:
      lVar11 = *(long *)(plVar22[7] + 0x18);
      if (lVar11 != 0) {
        lVar19 = plVar22[8];
        uVar23 = (ulong)((uint)*(ushort *)(plVar22[7] + 0x20) - (int)lVar19);
        uVar24 = plVar22[5];
        uVar18 = plVar22[3];
        if (uVar18 < uVar24 + uVar23) {
          while( true ) {
            uVar25 = uVar18 - uVar24;
            __n_00 = uVar25 & 0xffffffff;
            memcpy((void *)(plVar22[2] + uVar24),(void *)(lVar11 + lVar19),__n_00);
            uVar18 = plVar22[3];
            plVar22[5] = uVar18;
            if (uVar24 < uVar18 && *(int *)(plVar22[7] + 0x44) != 0) {
              lVar11 = FUN_0037fe70(param_1[0xc],plVar22[2] + uVar24,(int)uVar18 - (int)uVar24);
              param_1[0xc] = lVar11;
            }
            plVar22[8] = plVar22[8] + __n_00;
            lVar11 = param_1[7];
            FUN_00383870(lVar11);
            uVar9 = *(uint *)(param_1 + 4);
            if (*(uint *)(lVar11 + 0x28) <= *(uint *)(param_1 + 4)) {
              uVar9 = *(uint *)(lVar11 + 0x28);
            }
            if (uVar9 != 0) {
              uVar18 = (ulong)uVar9;
              memcpy((void *)param_1[3],*(void **)(lVar11 + 0x20),uVar18);
              param_1[3] = param_1[3] + uVar18;
              *(ulong *)(lVar11 + 0x20) = *(long *)(lVar11 + 0x20) + uVar18;
              param_1[5] = param_1[5] + uVar18;
              *(uint *)(param_1 + 4) = (int)param_1[4] - uVar9;
              lVar19 = *(long *)(lVar11 + 0x28) - uVar18;
              *(long *)(lVar11 + 0x28) = lVar19;
              if (lVar19 == 0) {
                *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar11 + 0x10);
              }
            }
            if (plVar22[5] != 0) goto LAB_0037e0ac;
            uVar18 = plVar22[3];
            uVar23 = (ulong)(uint)((int)uVar23 - (int)uVar25);
            if (uVar23 <= uVar18) break;
            lVar19 = plVar22[8];
            uVar24 = 0;
            lVar11 = *(long *)(plVar22[7] + 0x18);
          }
          lVar19 = plVar22[8];
          uVar24 = 0;
          lVar11 = *(long *)(plVar22[7] + 0x18);
        }
        memcpy((void *)(plVar22[2] + uVar24),(void *)(lVar11 + lVar19),uVar23);
        uVar23 = plVar22[5] + uVar23;
        plVar22[5] = uVar23;
        if ((uVar24 < uVar23) && (*(int *)(plVar22[7] + 0x44) != 0)) {
          lVar11 = FUN_0037fe70(param_1[0xc],plVar22[2] + uVar24,(int)uVar23 - (int)uVar24);
          param_1[0xc] = lVar11;
        }
        plVar22[8] = 0;
      }
      *(undefined4 *)(plVar22 + 1) = 0x49;
switchD_0037d158_caseD_49:
      if (*(long *)(plVar22[7] + 0x28) != 0) {
        uVar23 = plVar22[5];
        uVar18 = uVar23;
        if (uVar23 != plVar22[3]) goto LAB_0037d3e8;
        while( true ) {
          if ((uVar23 < uVar18) && (*(int *)(plVar22[7] + 0x44) != 0)) {
            lVar11 = FUN_0037fe70(param_1[0xc],plVar22[2] + uVar23,(int)uVar18 - (int)uVar23);
            param_1[0xc] = lVar11;
          }
          lVar11 = param_1[7];
          FUN_00383870(lVar11);
          uVar9 = *(uint *)(param_1 + 4);
          if (*(uint *)(lVar11 + 0x28) <= *(uint *)(param_1 + 4)) {
            uVar9 = *(uint *)(lVar11 + 0x28);
          }
          if (uVar9 != 0) {
            uVar23 = (ulong)uVar9;
            memcpy((void *)param_1[3],*(void **)(lVar11 + 0x20),uVar23);
            param_1[3] = param_1[3] + uVar23;
            *(ulong *)(lVar11 + 0x20) = *(long *)(lVar11 + 0x20) + uVar23;
            param_1[5] = param_1[5] + uVar23;
            *(uint *)(param_1 + 4) = (int)param_1[4] - uVar9;
            lVar19 = *(long *)(lVar11 + 0x28) - uVar23;
            *(long *)(lVar11 + 0x28) = lVar19;
            if (lVar19 == 0) {
              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar11 + 0x10);
            }
          }
          if (plVar22[5] != 0) break;
          uVar18 = 0;
          uVar23 = 0;
LAB_0037d3e8:
          do {
            lVar11 = plVar22[8];
            lVar19 = *(long *)(plVar22[7] + 0x28);
            plVar22[8] = lVar11 + 1;
            cVar6 = *(char *)(lVar19 + lVar11);
            plVar22[5] = uVar18 + 1;
            *(char *)(plVar22[2] + uVar18) = cVar6;
            if (cVar6 == '\0') {
              if ((*(int *)(plVar22[7] + 0x44) != 0) && (uVar23 < (ulong)plVar22[5])) {
                lVar11 = FUN_0037fe70(param_1[0xc],plVar22[2] + uVar23,(int)plVar22[5] - (int)uVar23
                                     );
                param_1[0xc] = lVar11;
              }
              plVar22[8] = 0;
              goto LAB_0037d444;
            }
            uVar18 = plVar22[5];
          } while (uVar18 != plVar22[3]);
        }
        goto LAB_0037e0ac;
      }
LAB_0037d444:
      *(undefined4 *)(plVar22 + 1) = 0x5b;
switchD_0037d158_caseD_5b:
      if (*(long *)(plVar22[7] + 0x38) != 0) {
        uVar23 = plVar22[5];
        uVar18 = uVar23;
        if (uVar23 != plVar22[3]) goto LAB_0037d534;
        while( true ) {
          if ((uVar23 < uVar18) && (*(int *)(plVar22[7] + 0x44) != 0)) {
            lVar11 = FUN_0037fe70(param_1[0xc],plVar22[2] + uVar23,(int)uVar18 - (int)uVar23);
            param_1[0xc] = lVar11;
          }
          lVar11 = param_1[7];
          FUN_00383870(lVar11);
          uVar9 = *(uint *)(param_1 + 4);
          if (*(uint *)(lVar11 + 0x28) <= *(uint *)(param_1 + 4)) {
            uVar9 = *(uint *)(lVar11 + 0x28);
          }
          if (uVar9 != 0) {
            uVar23 = (ulong)uVar9;
            memcpy((void *)param_1[3],*(void **)(lVar11 + 0x20),uVar23);
            param_1[3] = param_1[3] + uVar23;
            *(ulong *)(lVar11 + 0x20) = *(long *)(lVar11 + 0x20) + uVar23;
            param_1[5] = param_1[5] + uVar23;
            *(uint *)(param_1 + 4) = (int)param_1[4] - uVar9;
            lVar19 = *(long *)(lVar11 + 0x28) - uVar23;
            *(long *)(lVar11 + 0x28) = lVar19;
            if (lVar19 == 0) {
              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar11 + 0x10);
            }
          }
          if (plVar22[5] != 0) break;
          uVar18 = 0;
          uVar23 = 0;
LAB_0037d534:
          do {
            lVar11 = plVar22[8];
            lVar19 = *(long *)(plVar22[7] + 0x38);
            plVar22[8] = lVar11 + 1;
            cVar6 = *(char *)(lVar19 + lVar11);
            plVar22[5] = uVar18 + 1;
            *(char *)(plVar22[2] + uVar18) = cVar6;
            if (cVar6 == '\0') {
              if ((*(int *)(plVar22[7] + 0x44) != 0) && (uVar23 < (ulong)plVar22[5])) {
                lVar11 = FUN_0037fe70(param_1[0xc],plVar22[2] + uVar23,(int)plVar22[5] - (int)uVar23
                                     );
                param_1[0xc] = lVar11;
              }
              goto LAB_0037d58c;
            }
            uVar18 = plVar22[5];
          } while (uVar18 != plVar22[3]);
        }
        goto LAB_0037e0ac;
      }
LAB_0037d58c:
      *(undefined4 *)(plVar22 + 1) = 0x67;
switchD_0037d158_caseD_67:
      if (*(int *)(plVar22[7] + 0x44) != 0) {
        lVar11 = plVar22[5];
        if ((ulong)plVar22[3] < lVar11 + 2U) {
          lVar11 = param_1[7];
          FUN_00383870(lVar11);
          uVar9 = *(uint *)(param_1 + 4);
          if (*(uint *)(lVar11 + 0x28) <= *(uint *)(param_1 + 4)) {
            uVar9 = *(uint *)(lVar11 + 0x28);
          }
          if (uVar9 != 0) {
            uVar23 = (ulong)uVar9;
            memcpy((void *)param_1[3],*(void **)(lVar11 + 0x20),uVar23);
            param_1[3] = param_1[3] + uVar23;
            *(ulong *)(lVar11 + 0x20) = *(long *)(lVar11 + 0x20) + uVar23;
            param_1[5] = param_1[5] + uVar23;
            *(uint *)(param_1 + 4) = (int)param_1[4] - uVar9;
            lVar19 = *(long *)(lVar11 + 0x28) - uVar23;
            *(long *)(lVar11 + 0x28) = lVar19;
            if (lVar19 == 0) {
              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar11 + 0x10);
            }
          }
          lVar11 = 0;
          if (plVar22[5] != 0) goto LAB_0037e0ac;
        }
        lVar19 = param_1[0xc];
        plVar22[5] = lVar11 + 1;
        *(char *)(plVar22[2] + lVar11) = (char)lVar19;
        lVar19 = plVar22[5];
        lVar11 = param_1[0xc];
        plVar22[5] = lVar19 + 1;
        *(char *)(plVar22[2] + lVar19) = (char)((ulong)lVar11 >> 8);
        lVar11 = FUN_0037fe70(0,0,0);
        param_1[0xc] = lVar11;
      }
      *(undefined4 *)(plVar22 + 1) = 0x71;
      lVar11 = param_1[7];
      FUN_00383870(lVar11);
      uVar9 = *(uint *)(param_1 + 4);
      if (*(uint *)(lVar11 + 0x28) <= *(uint *)(param_1 + 4)) {
        uVar9 = *(uint *)(lVar11 + 0x28);
      }
      if (uVar9 != 0) {
        uVar23 = (ulong)uVar9;
        memcpy((void *)param_1[3],*(void **)(lVar11 + 0x20),uVar23);
        param_1[3] = param_1[3] + uVar23;
        *(ulong *)(lVar11 + 0x20) = *(long *)(lVar11 + 0x20) + uVar23;
        param_1[5] = param_1[5] + uVar23;
        *(uint *)(param_1 + 4) = (int)param_1[4] - uVar9;
        lVar19 = *(long *)(lVar11 + 0x28) - uVar23;
        *(long *)(lVar11 + 0x28) = lVar19;
        if (lVar19 == 0) {
          *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar11 + 0x10);
        }
      }
      if (plVar22[5] != 0) goto LAB_0037e0ac;
    }
    else {
LAB_0037d138:
      switch(iVar15) {
      case 0x45:
        goto switchD_0037d158_caseD_45;
      case 0x49:
        goto switchD_0037d158_caseD_49;
      case 0x5b:
        goto switchD_0037d158_caseD_5b;
      case 0x67:
        goto switchD_0037d158_caseD_67;
      }
    }
    if ((int)param_1[1] == 0) goto LAB_0037d710;
LAB_0037d718:
    puVar8 = PTR_DAT_047ccfb0;
    puVar7 = PTR_DAT_047ccfa8;
    if (*(int *)((long)plVar22 + 0xc4) == 0) {
      uVar9 = FUN_0037e220(plVar22,param_2);
joined_r0x0037d8b8:
      if ((uVar9 & 0xfffffffe) == 2) {
        *(undefined4 *)(plVar22 + 1) = 0x29a;
      }
      if ((uVar9 & 0xfffffffd) != 0) {
        if (uVar9 == 1) {
LAB_0037d8d4:
          if (param_2 != 5) {
            if (param_2 == 1) {
              FUN_00383900();
            }
            else {
              FUN_00383700(plVar22,0,0,0);
              if (param_2 == 3) {
                __s = (void *)plVar22[0xf];
                __n = (ulong)(*(int *)((long)plVar22 + 0x84) - 1) * 2;
                *(undefined2 *)((long)__s + __n) = 0;
                memset(__s,0,__n);
                if (*(int *)((long)plVar22 + 0xb4) == 0) {
                  *(undefined4 *)((long)plVar22 + 0xac) = 0;
                  plVar22[0x13] = 0;
                  *(undefined4 *)((long)plVar22 + 0x172c) = 0;
                }
              }
            }
          }
          lVar11 = param_1[7];
          FUN_00383870(lVar11);
          uVar14 = *(uint *)(param_1 + 4);
          uVar9 = uVar14;
          if (*(uint *)(lVar11 + 0x28) <= uVar14) {
            uVar9 = *(uint *)(lVar11 + 0x28);
          }
          if (uVar9 != 0) {
            uVar23 = (ulong)uVar9;
            memcpy((void *)param_1[3],*(void **)(lVar11 + 0x20),uVar23);
            param_1[3] = param_1[3] + uVar23;
            *(ulong *)(lVar11 + 0x20) = *(long *)(lVar11 + 0x20) + uVar23;
            param_1[5] = param_1[5] + uVar23;
            uVar14 = (int)param_1[4] - uVar9;
            *(uint *)(param_1 + 4) = uVar14;
            lVar19 = *(long *)(lVar11 + 0x28) - uVar23;
            *(long *)(lVar11 + 0x28) = lVar19;
            if (lVar19 == 0) {
              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar11 + 0x10);
            }
          }
          if (uVar14 == 0) goto LAB_0037e0ac;
        }
        goto LAB_0037dcf8;
      }
    }
    else {
      if ((int)plVar22[0x19] != 3) {
        if ((int)plVar22[0x19] == 2) {
LAB_0037d76c:
          while ((*(int *)((long)plVar22 + 0xb4) != 0 ||
                 (FUN_0037c490(plVar22), *(int *)((long)plVar22 + 0xb4) != 0))) {
            *(undefined4 *)(plVar22 + 0x14) = 0;
            bVar5 = *(byte *)(plVar22[0xc] + (ulong)*(uint *)((long)plVar22 + 0xac));
            uVar9 = *(uint *)((long)plVar22 + 0x170c);
            *(undefined2 *)(plVar22[0x2e2] + (ulong)uVar9 * 2) = 0;
            *(uint *)((long)plVar22 + 0x170c) = uVar9 + 1;
            *(byte *)(plVar22[0x2e0] + (ulong)uVar9) = bVar5;
            *(short *)((long)plVar22 + (ulong)bVar5 * 4 + 0xd4) =
                 *(short *)((long)plVar22 + (ulong)bVar5 * 4 + 0xd4) + 1;
            *(int *)((long)plVar22 + 0xb4) = *(int *)((long)plVar22 + 0xb4) + -1;
            uVar9 = *(int *)((long)plVar22 + 0xac) + 1;
            *(uint *)((long)plVar22 + 0xac) = uVar9;
            if (*(int *)((long)plVar22 + 0x170c) == (int)plVar22[0x2e1] + -1) goto code_r0x0037d7ec;
          }
          if (param_2 != 0) {
            *(undefined4 *)((long)plVar22 + 0x172c) = 0;
            if (param_2 == 4) {
              uVar23 = plVar22[0x13];
joined_r0x0037dc24:
              if ((long)uVar23 < 0) {
                lVar11 = 0;
              }
              else {
                lVar11 = plVar22[0xc] + (uVar23 & 0xffffffff);
              }
              FUN_00383a70(plVar22,lVar11,*(uint *)((long)plVar22 + 0xac) - uVar23,1);
              plVar22[0x13] = (ulong)*(uint *)((long)plVar22 + 0xac);
              lVar19 = *plVar22;
              lVar11 = *(long *)(lVar19 + 0x38);
              FUN_00383870(lVar11);
              uVar9 = *(uint *)(lVar19 + 0x20);
              if (*(uint *)(lVar11 + 0x28) <= *(uint *)(lVar19 + 0x20)) {
                uVar9 = *(uint *)(lVar11 + 0x28);
              }
              if (uVar9 != 0) {
                uVar23 = (ulong)uVar9;
                memcpy(*(void **)(lVar19 + 0x18),*(void **)(lVar11 + 0x20),uVar23);
                *(ulong *)(lVar19 + 0x18) = *(long *)(lVar19 + 0x18) + uVar23;
                *(ulong *)(lVar11 + 0x20) = *(long *)(lVar11 + 0x20) + uVar23;
                *(ulong *)(lVar19 + 0x28) = *(long *)(lVar19 + 0x28) + uVar23;
                *(uint *)(lVar19 + 0x20) = *(int *)(lVar19 + 0x20) - uVar9;
                lVar19 = *(long *)(lVar11 + 0x28) - uVar23;
                *(long *)(lVar11 + 0x28) = lVar19;
                if (lVar19 == 0) {
                  *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar11 + 0x10);
                }
              }
              uVar9 = 2;
              if (*(int *)(*plVar22 + 0x20) != 0) {
                uVar9 = 3;
              }
              goto joined_r0x0037d8b8;
            }
            if (*(int *)((long)plVar22 + 0x170c) != 0) {
              uVar23 = plVar22[0x13];
joined_r0x0037dfd0:
              if ((long)uVar23 < 0) {
                lVar11 = 0;
              }
              else {
                lVar11 = plVar22[0xc] + (uVar23 & 0xffffffff);
              }
              FUN_00383a70(plVar22,lVar11,*(uint *)((long)plVar22 + 0xac) - uVar23,0);
              plVar22[0x13] = (ulong)*(uint *)((long)plVar22 + 0xac);
              lVar19 = *plVar22;
              lVar11 = *(long *)(lVar19 + 0x38);
              FUN_00383870(lVar11);
              uVar9 = *(uint *)(lVar19 + 0x20);
              if (*(uint *)(lVar11 + 0x28) <= *(uint *)(lVar19 + 0x20)) {
                uVar9 = *(uint *)(lVar11 + 0x28);
              }
              if (uVar9 != 0) {
                uVar23 = (ulong)uVar9;
                memcpy(*(void **)(lVar19 + 0x18),*(void **)(lVar11 + 0x20),uVar23);
                *(ulong *)(lVar19 + 0x18) = *(long *)(lVar19 + 0x18) + uVar23;
                *(ulong *)(lVar11 + 0x20) = *(long *)(lVar11 + 0x20) + uVar23;
                *(ulong *)(lVar19 + 0x28) = *(long *)(lVar19 + 0x28) + uVar23;
                *(uint *)(lVar19 + 0x20) = *(int *)(lVar19 + 0x20) - uVar9;
                lVar19 = *(long *)(lVar11 + 0x28) - uVar23;
                *(long *)(lVar11 + 0x28) = lVar19;
                if (lVar19 == 0) {
                  *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar11 + 0x10);
                }
              }
              if (*(int *)(*plVar22 + 0x20) != 0) goto LAB_0037d8d4;
              goto LAB_0037e09c;
            }
            goto LAB_0037d8d4;
          }
          goto LAB_0037e09c;
        }
        uVar9 = (*(code *)(&PTR_FUN_04496db8)[(long)*(int *)((long)plVar22 + 0xc4) * 2])
                          (plVar22,param_2);
        goto joined_r0x0037d8b8;
      }
      do {
        do {
          uVar9 = *(uint *)((long)plVar22 + 0xb4);
          if (uVar9 < 0x103) {
            FUN_0037c490(plVar22);
            uVar9 = *(uint *)((long)plVar22 + 0xb4);
            if ((param_2 == 0) && (uVar9 < 0x103)) goto LAB_0037e09c;
            if (uVar9 == 0) {
              *(undefined4 *)((long)plVar22 + 0x172c) = 0;
              if (param_2 == 4) {
                uVar23 = plVar22[0x13];
                goto joined_r0x0037dc24;
              }
              if (*(int *)((long)plVar22 + 0x170c) == 0) goto LAB_0037d8d4;
              uVar23 = plVar22[0x13];
              goto joined_r0x0037dfd0;
            }
            *(undefined4 *)(plVar22 + 0x14) = 0;
            if (2 < uVar9) goto LAB_0037d968;
            uVar23 = (ulong)*(uint *)((long)plVar22 + 0xac);
LAB_0037daf8:
            bVar5 = *(byte *)(plVar22[0xc] + uVar23);
            uVar9 = *(uint *)((long)plVar22 + 0x170c);
            *(undefined2 *)(plVar22[0x2e2] + (ulong)uVar9 * 2) = 0;
            *(uint *)((long)plVar22 + 0x170c) = uVar9 + 1;
            *(byte *)(plVar22[0x2e0] + (ulong)uVar9) = bVar5;
            *(short *)((long)plVar22 + (ulong)bVar5 * 4 + 0xd4) =
                 *(short *)((long)plVar22 + (ulong)bVar5 * 4 + 0xd4) + 1;
            iVar3 = (int)plVar22[0x2e1];
            *(int *)((long)plVar22 + 0xb4) = *(int *)((long)plVar22 + 0xb4) + -1;
            iVar15 = *(int *)((long)plVar22 + 0x170c);
            uVar9 = *(int *)((long)plVar22 + 0xac) + 1;
            *(uint *)((long)plVar22 + 0xac) = uVar9;
          }
          else {
            *(undefined4 *)(plVar22 + 0x14) = 0;
LAB_0037d968:
            uVar23 = (ulong)*(uint *)((long)plVar22 + 0xac);
            if (*(uint *)((long)plVar22 + 0xac) == 0) goto LAB_0037daf8;
            pcVar1 = (char *)(plVar22[0xc] + uVar23);
            cVar6 = pcVar1[-1];
            if (((cVar6 != *pcVar1) || (cVar6 != pcVar1[1])) || (cVar6 != pcVar1[2]))
            goto LAB_0037daf8;
            lVar11 = 0;
            do {
              pcVar2 = pcVar1 + lVar11;
              iVar15 = (int)pcVar2;
              if (cVar6 != pcVar2[3]) {
                iVar15 = iVar15 + 3;
                goto LAB_0037da5c;
              }
              if (cVar6 != pcVar2[4]) {
                iVar15 = iVar15 + 4;
                goto LAB_0037da5c;
              }
              if (cVar6 != pcVar2[5]) {
                iVar15 = iVar15 + 5;
                goto LAB_0037da5c;
              }
              if (cVar6 != pcVar2[6]) {
                iVar15 = iVar15 + 6;
                goto LAB_0037da5c;
              }
              if (cVar6 != pcVar2[7]) {
                iVar15 = iVar15 + 7;
                goto LAB_0037da5c;
              }
              if (cVar6 != pcVar2[8]) {
                iVar15 = iVar15 + 8;
                goto LAB_0037da5c;
              }
              if (cVar6 != pcVar2[9]) {
                iVar15 = iVar15 + 9;
                goto LAB_0037da5c;
              }
              uVar18 = lVar11 + 2;
              lVar11 = lVar11 + 8;
            } while ((uVar18 < 0xfa) && (cVar6 == pcVar2[10]));
            iVar15 = (int)pcVar1 + (int)lVar11 + 2;
LAB_0037da5c:
            uVar14 = (iVar15 - ((int)pcVar1 + 0x102)) + 0x102;
            if (uVar14 <= uVar9) {
              uVar9 = uVar14;
            }
            *(uint *)(plVar22 + 0x14) = uVar9;
            if (uVar9 < 3) goto LAB_0037daf8;
            uVar14 = *(uint *)((long)plVar22 + 0x170c);
            *(undefined2 *)(plVar22[0x2e2] + (ulong)uVar14 * 2) = 1;
            *(uint *)((long)plVar22 + 0x170c) = uVar14 + 1;
            *(char *)(plVar22[0x2e0] + (ulong)uVar14) = (char)(uVar9 - 3);
            uVar23 = (ulong)(byte)puVar7[(ulong)(uVar9 - 3) & 0xff] << 2 | 0x400;
            bVar5 = *puVar8;
            *(short *)((long)plVar22 + uVar23 + 0xd8) =
                 *(short *)((long)plVar22 + uVar23 + 0xd8) + 1;
            *(short *)((long)plVar22 + (ulong)bVar5 * 4 + 0x9c8) =
                 *(short *)((long)plVar22 + (ulong)bVar5 * 4 + 0x9c8) + 1;
            iVar3 = (int)plVar22[0x2e1];
            *(int *)((long)plVar22 + 0xb4) = *(int *)((long)plVar22 + 0xb4) - (int)plVar22[0x14];
            iVar15 = *(int *)((long)plVar22 + 0x170c);
            uVar9 = *(int *)((long)plVar22 + 0xac) + (int)plVar22[0x14];
            *(uint *)((long)plVar22 + 0xac) = uVar9;
            *(undefined4 *)(plVar22 + 0x14) = 0;
          }
        } while (iVar15 != iVar3 + -1);
        uVar23 = plVar22[0x13];
        if ((long)uVar23 < 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = plVar22[0xc] + (uVar23 & 0xffffffff);
        }
        FUN_00383a70(plVar22,lVar11,uVar9 - uVar23,0);
        plVar22[0x13] = (ulong)*(uint *)((long)plVar22 + 0xac);
        lVar19 = *plVar22;
        lVar11 = *(long *)(lVar19 + 0x38);
        FUN_00383870(lVar11);
        uVar9 = *(uint *)(lVar19 + 0x20);
        if (*(uint *)(lVar11 + 0x28) <= *(uint *)(lVar19 + 0x20)) {
          uVar9 = *(uint *)(lVar11 + 0x28);
        }
        if (uVar9 != 0) {
          uVar23 = (ulong)uVar9;
          memcpy(*(void **)(lVar19 + 0x18),*(void **)(lVar11 + 0x20),uVar23);
          *(ulong *)(lVar19 + 0x18) = *(long *)(lVar19 + 0x18) + uVar23;
          *(ulong *)(lVar11 + 0x20) = *(long *)(lVar11 + 0x20) + uVar23;
          *(ulong *)(lVar19 + 0x28) = *(long *)(lVar19 + 0x28) + uVar23;
          *(uint *)(lVar19 + 0x20) = *(int *)(lVar19 + 0x20) - uVar9;
          lVar19 = *(long *)(lVar11 + 0x28) - uVar23;
          *(long *)(lVar11 + 0x28) = lVar19;
          if (lVar19 == 0) {
            *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar11 + 0x10);
          }
        }
      } while (*(int *)(*plVar22 + 0x20) != 0);
    }
LAB_0037e09c:
    if ((int)param_1[4] == 0) {
LAB_0037e0ac:
      *(undefined4 *)((long)plVar22 + 0x4c) = 0xffffffff;
      return 0;
    }
  }
  else {
    if (iVar15 != 0x29a) goto LAB_0037cd88;
    if ((int)param_1[1] != 0) goto LAB_0037cf10;
LAB_0037d710:
    if ((*(int *)((long)plVar22 + 0xb4) != 0) || ((param_2 != 0 && ((int)plVar22[1] != 0x29a))))
    goto LAB_0037d718;
LAB_0037dcf8:
    if (param_2 == 4) {
      if ((int)plVar22[6] < 1) {
        return 1;
      }
      lVar11 = param_1[0xc];
      if ((int)plVar22[6] == 2) {
        lVar19 = plVar22[5];
        plVar22[5] = lVar19 + 1;
        *(char *)(plVar22[2] + lVar19) = (char)lVar11;
        lVar11 = param_1[0xc];
        lVar19 = plVar22[5];
        plVar22[5] = lVar19 + 1;
        *(char *)(plVar22[2] + lVar19) = (char)((ulong)lVar11 >> 8);
        lVar11 = param_1[0xc];
        lVar19 = plVar22[5];
        plVar22[5] = lVar19 + 1;
        *(char *)(plVar22[2] + lVar19) = (char)((ulong)lVar11 >> 0x10);
        lVar11 = param_1[0xc];
        lVar19 = plVar22[5];
        plVar22[5] = lVar19 + 1;
        *(char *)(plVar22[2] + lVar19) = (char)((ulong)lVar11 >> 0x18);
        lVar19 = plVar22[5];
        lVar11 = param_1[2];
        plVar22[5] = lVar19 + 1;
        *(char *)(plVar22[2] + lVar19) = (char)lVar11;
        lVar11 = param_1[2];
        lVar19 = plVar22[5];
        plVar22[5] = lVar19 + 1;
        *(char *)(plVar22[2] + lVar19) = (char)((ulong)lVar11 >> 8);
        lVar11 = param_1[2];
        lVar19 = plVar22[5];
        plVar22[5] = lVar19 + 1;
        *(char *)(plVar22[2] + lVar19) = (char)((ulong)lVar11 >> 0x10);
        uVar23 = (ulong)param_1[2] >> 0x18;
      }
      else {
        lVar19 = plVar22[5];
        plVar22[5] = lVar19 + 1;
        *(char *)(plVar22[2] + lVar19) = (char)((ulong)lVar11 >> 0x18);
        lVar19 = plVar22[5];
        plVar22[5] = lVar19 + 1;
        *(char *)(plVar22[2] + lVar19) = (char)((ulong)lVar11 >> 0x10);
        uVar23 = param_1[0xc];
        lVar11 = plVar22[5];
        plVar22[5] = lVar11 + 1;
        *(char *)(plVar22[2] + lVar11) = (char)(uVar23 >> 8);
      }
      lVar11 = plVar22[5];
      plVar22[5] = lVar11 + 1;
      *(char *)(plVar22[2] + lVar11) = (char)uVar23;
      lVar11 = param_1[7];
      FUN_00383870(lVar11);
      uVar9 = *(uint *)(param_1 + 4);
      if (*(uint *)(lVar11 + 0x28) <= *(uint *)(param_1 + 4)) {
        uVar9 = *(uint *)(lVar11 + 0x28);
      }
      if (uVar9 != 0) {
        uVar23 = (ulong)uVar9;
        memcpy((void *)param_1[3],*(void **)(lVar11 + 0x20),uVar23);
        param_1[3] = param_1[3] + uVar23;
        *(ulong *)(lVar11 + 0x20) = *(long *)(lVar11 + 0x20) + uVar23;
        param_1[5] = param_1[5] + uVar23;
        *(uint *)(param_1 + 4) = (int)param_1[4] - uVar9;
        lVar19 = *(long *)(lVar11 + 0x28) - uVar23;
        *(long *)(lVar11 + 0x28) = lVar19;
        if (lVar19 == 0) {
          *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar11 + 0x10);
        }
      }
      if (0 < (int)plVar22[6]) {
        *(int *)(plVar22 + 6) = -(int)plVar22[6];
      }
      return (ulong)(plVar22[5] == 0);
    }
  }
  return 0;
code_r0x0037d7ec:
  uVar23 = plVar22[0x13];
  if ((long)uVar23 < 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = plVar22[0xc] + (uVar23 & 0xffffffff);
  }
  FUN_00383a70(plVar22,lVar11,uVar9 - uVar23,0);
  plVar22[0x13] = (ulong)*(uint *)((long)plVar22 + 0xac);
  lVar19 = *plVar22;
  lVar11 = *(long *)(lVar19 + 0x38);
  FUN_00383870(lVar11);
  uVar9 = *(uint *)(lVar19 + 0x20);
  if (*(uint *)(lVar11 + 0x28) <= *(uint *)(lVar19 + 0x20)) {
    uVar9 = *(uint *)(lVar11 + 0x28);
  }
  if (uVar9 != 0) {
    uVar23 = (ulong)uVar9;
    memcpy(*(void **)(lVar19 + 0x18),*(void **)(lVar11 + 0x20),uVar23);
    *(ulong *)(lVar19 + 0x18) = *(long *)(lVar19 + 0x18) + uVar23;
    *(ulong *)(lVar11 + 0x20) = *(long *)(lVar11 + 0x20) + uVar23;
    *(ulong *)(lVar19 + 0x28) = *(long *)(lVar19 + 0x28) + uVar23;
    *(uint *)(lVar19 + 0x20) = *(int *)(lVar19 + 0x20) - uVar9;
    lVar19 = *(long *)(lVar11 + 0x28) - uVar23;
    *(long *)(lVar11 + 0x28) = lVar19;
    if (lVar19 == 0) {
      *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(lVar11 + 0x10);
    }
  }
  if (*(int *)(*plVar22 + 0x20) == 0) goto LAB_0037e09c;
  goto LAB_0037d76c;
}


