/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d9da0; name: FUN_003d9da0
 */


undefined8 FUN_003d9da0(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined2 *puVar15;
  ulong uVar16;
  uint uVar17;
  
  lVar10 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(lVar10 + 0x2e0) = 0;
  *(undefined8 *)(lVar10 + 0x2d8) = 0;
  uVar17 = *(uint *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60);
  if ((((uVar17 >> 3 & 1) == 0) && (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) &&
     (iVar1 != 0x10000)) {
    lVar10 = FUN_003d93f0(param_1,0,0);
    if (lVar10 == 0) {
      if (param_2 == 0) {
        return 1;
      }
      uVar6 = 0x28;
      uVar7 = 0x76;
      uVar8 = 0xac8;
      goto LAB_003da44c;
    }
  }
  else {
    if ((*(byte *)(*(long *)(lVar10 + 0x238) + 0x20) & 0xab) == 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      plVar14 = *(long **)(param_1 + 0x550);
      uVar16 = ((*plVar14 - (long)plVar14) + -0x20 >> 3) * -0x3333333333333333;
      if (8 < (uint)uVar16) {
        return 1;
      }
      uVar16 = uVar16 & 0xffffffff;
      if (plVar14[uVar16 * 5 + 4] == 0) {
        return 1;
      }
      if (plVar14[uVar16 * 5 + 5] == 0) {
        return 1;
      }
    }
    if ((uVar17 >> 1 & 1) != 0) {
      if (*(long *)(lVar10 + 0x2e8) == 0) {
        lVar10 = FUN_003d5f10(param_1,0xffffffff);
        if (lVar10 == 0) {
          if (param_2 == 0) {
            return 1;
          }
          uVar6 = 0x50;
          uVar7 = 0x44;
          uVar8 = 0xb28;
          goto LAB_003da44c;
        }
        lVar13 = *(long *)(param_1 + 0x550);
        uVar17 = *(uint *)(lVar13 + 0x1c) & 0x30000;
        if (uVar17 == 0x30000) {
          lVar13 = 2;
          puVar15 = &DAT_03cdd17e;
LAB_003da3c8:
          lVar5 = 0;
          do {
            if (((*(short *)(lVar10 + 8) == puVar15[lVar5]) &&
                (uVar17 = *(uint *)(lVar10 + 0x18), uVar17 < 9)) &&
               ((*(long *)(*(long *)(param_1 + 0x550) + (ulong)uVar17 * 0x28 + 0x20) != 0 &&
                ((*(long *)(*(long *)(param_1 + 0x550) + (ulong)uVar17 * 0x28 + 0x28) != 0 &&
                 (iVar1 = FUN_003da580(param_1,lVar10), iVar1 != 0)))))) goto LAB_003da428;
            lVar5 = lVar5 + 1;
          } while (lVar13 != lVar5);
        }
        else {
          if (uVar17 == 0x20000) {
            lVar13 = 1;
            puVar15 = &DAT_03cdd180;
            goto LAB_003da3c8;
          }
          if (uVar17 == 0x10000) {
            lVar13 = 1;
            puVar15 = &DAT_03cdd17e;
            goto LAB_003da3c8;
          }
          if ((*(int *)(param_1 + 0x38) == 1) &&
             (puVar15 = *(undefined2 **)(lVar13 + 0x1a8), puVar15 != (undefined2 *)0x0)) {
            plVar14 = (long *)(lVar13 + 0x1b0);
          }
          else {
            puVar15 = *(undefined2 **)(lVar13 + 0x198);
            if (puVar15 == (undefined2 *)0x0) {
              lVar13 = 0x1a;
              puVar15 = &DAT_03cdd182;
              goto LAB_003da3c8;
            }
            plVar14 = (long *)(lVar13 + 0x1a0);
          }
          lVar13 = *plVar14;
          if (lVar13 != 0) goto LAB_003da3c8;
          lVar5 = 0;
LAB_003da428:
          if (lVar5 != lVar13) goto LAB_003d9e60;
        }
        if (param_2 == 0) {
          return 1;
        }
        uVar6 = 0x2f;
        uVar7 = 0x172;
        uVar8 = 0xb38;
        goto LAB_003da44c;
      }
      if ((*(byte *)(*(long *)(param_1 + 0x550) + 0x1e) & 3) == 0) {
        if (*(long *)(param_1 + 0x1988) == 0) goto LAB_003da2e4;
LAB_003da114:
        uVar16 = 0;
        do {
          lVar10 = *(long *)(*(long *)(param_1 + 0x1980) + uVar16 * 8);
          if (*(int *)(param_1 + 0x38) == 0) {
            uVar17 = (int)((**(long **)(param_1 + 0x550) - (long)*(long **)(param_1 + 0x550)) -
                           0x20U >> 3) * -0x33333333;
            uVar9 = *(uint *)(lVar10 + 0x18);
            if (*(uint *)(lVar10 + 0x18) == uVar17) {
              if (uVar17 == 0xffffffff) goto LAB_003da12c;
LAB_003da1e0:
              uVar9 = uVar17;
              if (((uVar17 < 9) &&
                  (*(long *)(*(long *)(param_1 + 0x550) + (ulong)uVar17 * 0x28 + 0x20) != 0)) &&
                 ((*(long *)(*(long *)(param_1 + 0x550) + (ulong)uVar17 * 0x28 + 0x28) != 0 &&
                  (iVar1 = FUN_003da580(param_1,lVar10), iVar1 != 0)))) {
                if (*(int *)(lVar10 + 0x14) != 0x390) break;
                lVar13 = FUN_0043e390(*(undefined8 *)
                                       (*(long *)(param_1 + 0x550) + (long)(int)uVar17 * 0x28 + 0x28
                                       ));
                if (((lVar13 != 0) && (*(int *)(lVar10 + 0xc) != 0)) &&
                   (lVar5 = FUN_003b00f0(*(undefined4 *)(lVar10 + 0x10)), lVar5 != 0)) {
                  iVar1 = FUN_00469640(lVar13);
                  iVar2 = FUN_0043b720(lVar5);
                  if (iVar2 * 2 + 2 <= iVar1) break;
                }
              }
            }
          }
          else {
            uVar17 = *(uint *)(lVar10 + 0x18);
            piVar4 = (int *)FUN_003af6a0((long)(int)uVar17);
            if (piVar4 != (int *)0x0) {
              lVar13 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238);
              if ((*(uint *)(lVar13 + 0x20) & piVar4[1]) != 0) {
                if (((*piVar4 != 0x390) || (uVar9 = 0xffffffff, (*(byte *)(lVar13 + 0x1c) & 1) == 0)
                    ) && (uVar9 = 0xffffffff,
                         uVar17 != 0xffffffff &&
                         (*(uint *)(*(long *)(param_1 + 0xa8) + (long)(int)uVar17 * 4 + 0x310) & 1)
                         != 0)) goto LAB_003da1e0;
                goto LAB_003da130;
              }
            }
LAB_003da12c:
            uVar9 = 0xffffffff;
          }
LAB_003da130:
          uVar17 = uVar9;
          uVar16 = uVar16 + 1;
        } while (uVar16 < *(ulong *)(param_1 + 0x1988));
LAB_003da28c:
        uVar12 = *(ulong *)(param_1 + 0x1988);
        if (uVar16 == uVar12) goto LAB_003da298;
LAB_003da2fc:
        if (uVar16 != uVar12) {
LAB_003da2d8:
          if (uVar17 != 0xffffffff) goto LAB_003d9e64;
          goto LAB_003d9e60;
        }
      }
      else {
        FUN_0043e6b0(*(undefined8 *)(*(long *)(param_1 + 0x550) + 0xa0));
        FUN_0040c210();
        iVar1 = FUN_0040d580();
        if (*(long *)(param_1 + 0x1988) != 0) {
          if (iVar1 == -1) goto LAB_003da114;
          uVar16 = 0;
          do {
            lVar10 = *(long *)(*(long *)(param_1 + 0x1980) + uVar16 * 8);
            if (*(int *)(param_1 + 0x38) == 0) {
              uVar17 = (int)((**(long **)(param_1 + 0x550) - (long)*(long **)(param_1 + 0x550)) -
                             0x20U >> 3) * -0x33333333;
              uVar9 = *(uint *)(lVar10 + 0x18);
              if (uVar9 == uVar17) {
                if (uVar17 == 0xffffffff) goto LAB_003d9f34;
LAB_003d9fe8:
                uVar9 = uVar17;
                if (((uVar17 < 9) &&
                    (*(long *)(*(long *)(param_1 + 0x550) + (ulong)uVar17 * 0x28 + 0x20) != 0)) &&
                   ((*(long *)(*(long *)(param_1 + 0x550) + (ulong)uVar17 * 0x28 + 0x28) != 0 &&
                    (iVar2 = FUN_003da580(param_1,lVar10), iVar2 != 0)))) {
                  if (*(int *)(lVar10 + 0x14) == 0x390) {
                    lVar13 = FUN_0043e390(*(undefined8 *)
                                           (*(long *)(param_1 + 0x550) + (long)(int)uVar17 * 0x28 +
                                           0x28));
                    if (((lVar13 != 0) && (*(int *)(lVar10 + 0xc) != 0)) &&
                       (lVar5 = FUN_003b00f0(*(undefined4 *)(lVar10 + 0x10)), lVar5 != 0)) {
                      iVar2 = FUN_00469640(lVar13);
                      iVar3 = FUN_0043b720(lVar5);
                      if (iVar3 * 2 + 2 <= iVar2) goto LAB_003da088;
                    }
                  }
                  else {
LAB_003da088:
                    if (*(int *)(lVar10 + 0x20) == iVar1) break;
                  }
                }
              }
            }
            else {
              uVar17 = *(uint *)(lVar10 + 0x18);
              piVar4 = (int *)FUN_003af6a0((long)(int)uVar17);
              if (piVar4 != (int *)0x0) {
                lVar13 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238);
                if ((*(uint *)(lVar13 + 0x20) & piVar4[1]) != 0) {
                  if (((*piVar4 != 0x390) ||
                      (uVar9 = 0xffffffff, (*(byte *)(lVar13 + 0x1c) & 1) == 0)) &&
                     (uVar9 = 0xffffffff,
                     uVar17 != 0xffffffff &&
                     (*(uint *)(*(long *)(param_1 + 0xa8) + (long)(int)uVar17 * 4 + 0x310) & 1) != 0
                     )) goto LAB_003d9fe8;
                  goto LAB_003d9f38;
                }
              }
LAB_003d9f34:
              uVar9 = 0xffffffff;
            }
LAB_003d9f38:
            uVar16 = uVar16 + 1;
            uVar17 = uVar9;
          } while (uVar16 < *(ulong *)(param_1 + 0x1988));
          goto LAB_003da28c;
        }
LAB_003da2e4:
        uVar16 = 0;
        lVar10 = 0;
        uVar17 = 0xffffffff;
        uVar12 = *(ulong *)(param_1 + 0x1988);
        if (uVar12 != 0) goto LAB_003da2fc;
LAB_003da298:
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x238) + 0x20) & 0xa0) != 0) {
          lVar10 = FUN_003d5f10(param_1,0xffffffff);
          if (lVar10 == 0) {
            if (param_2 == 0) {
              return 1;
            }
            uVar6 = 0x28;
            uVar7 = 0x76;
            uVar8 = 0xb0d;
            goto LAB_003da44c;
          }
          uVar17 = *(uint *)(lVar10 + 0x18);
          if (*(long *)(param_1 + 0x1988) != 0) goto LAB_003da2d8;
        }
      }
      if (param_2 == 0) {
        return 1;
      }
      uVar6 = 0x28;
      uVar7 = 0x76;
      uVar8 = 0xb1a;
LAB_003da44c:
      FUN_003c3950(param_1,uVar6,0x201,uVar7,"external/openssl/ssl/t1_lib.c",uVar8);
      return 0;
    }
    lVar10 = FUN_003d5f10(param_1,0xffffffff);
    if (lVar10 == 0) {
      if (param_2 == 0) {
        return 1;
      }
      uVar6 = 0x50;
      uVar7 = 0x44;
      uVar8 = 0xb41;
      goto LAB_003da44c;
    }
  }
LAB_003d9e60:
  uVar17 = *(uint *)(lVar10 + 0x18);
LAB_003d9e64:
  plVar11 = *(long **)(param_1 + 0x550);
  lVar13 = *(long *)(param_1 + 0xa8);
  plVar14 = plVar11 + (long)(int)uVar17 * 5 + 4;
  *(long **)(lVar13 + 0x2e0) = plVar14;
  *plVar11 = (long)plVar14;
  *(long *)(lVar13 + 0x2d8) = lVar10;
  return 1;
}


