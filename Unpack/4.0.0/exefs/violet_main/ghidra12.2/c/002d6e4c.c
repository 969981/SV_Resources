/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d6e4c; name: FUN_002d6e4c
 */


long * FUN_002d6e4c(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  int *piVar11;
  ulong uVar12;
  long *plVar13;
  int *piVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  
  plVar5 = (long *)*param_2;
  uVar1 = *(uint *)(plVar5 + 1);
  uVar2 = (ulong)uVar1;
  uVar3 = *(uint *)((long)plVar5 + 0xc);
  lVar8 = (ulong)uVar3 + 0x53;
  if (0 < (int)uVar1) {
    if (uVar1 == 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      do {
        piVar14 = (int *)(*plVar5 + uVar12 * 4);
        uVar12 = uVar12 + 2;
        lVar8 = (lVar8 * -0x35a83aa59b680000 | (ulong)(lVar8 * -0x23c146b50754b36d) >> 0x2d) +
                (long)*piVar14;
        lVar8 = (lVar8 * -0x35a83aa59b680000 | (ulong)(lVar8 * -0x23c146b50754b36d) >> 0x2d) +
                (long)piVar14[1];
      } while ((uVar2 & 0xfffffffe) != uVar12);
    }
    if ((uVar1 & 1) != 0) {
      lVar8 = (lVar8 * -0x35a83aa59b680000 | (ulong)(lVar8 * -0x23c146b50754b36d) >> 0x2d) +
              (long)*(int *)(*plVar5 + uVar12 * 4);
    }
  }
  uVar12 = param_1[1];
  if (uVar12 != 0) {
    uVar16 = CONCAT17(POPCOUNT((char)(uVar12 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar12 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar12 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar12 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar12 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar12 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar12 
                                                  >> 8)),POPCOUNT((char)uVar12))))))));
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar9 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    uVar6 = lVar8 * -0x35a83aa59b680000 | (ulong)(lVar8 * -0x23c146b50754b36d) >> 0x2d;
    if (uVar9 < 2) {
      uVar7 = uVar6 & uVar12 - 1;
    }
    else {
      uVar7 = uVar6;
      if (uVar12 <= uVar6) {
        uVar7 = 0;
        if (uVar12 != 0) {
          uVar7 = uVar6 / uVar12;
        }
        uVar7 = uVar6 - uVar7 * uVar12;
      }
    }
    plVar13 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar13 != (long *)0x0) {
      plVar13 = (long *)*plVar13;
      if (plVar13 != (long *)0x0) {
        if (uVar9 < 2) {
          do {
            if (plVar13[1] == uVar6) {
              plVar10 = (long *)plVar13[2];
              if (plVar10 == plVar5) {
                return plVar13;
              }
              if ((*(uint *)((long)plVar10 + 0xc) == uVar3) && (*(uint *)(plVar10 + 1) == uVar1)) {
                if ((int)uVar1 < 1) {
                  return plVar13;
                }
                piVar11 = (int *)*plVar10;
                piVar14 = (int *)*plVar5;
                uVar9 = uVar2;
                while (*piVar11 == *piVar14) {
                  uVar9 = uVar9 - 1;
                  piVar14 = piVar14 + 1;
                  piVar11 = piVar11 + 1;
                  if (uVar9 == 0) {
                    return plVar13;
                  }
                }
              }
            }
            else if ((plVar13[1] & uVar12 - 1) != uVar7) {
              return (long *)0x0;
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            uVar9 = plVar13[1];
            if (uVar9 == uVar6) {
              plVar10 = (long *)plVar13[2];
              if (plVar10 == plVar5) {
                return plVar13;
              }
              if ((*(uint *)((long)plVar10 + 0xc) == uVar3) && (*(uint *)(plVar10 + 1) == uVar1)) {
                if ((int)uVar1 < 1) {
                  return plVar13;
                }
                piVar11 = (int *)*plVar10;
                piVar14 = (int *)*plVar5;
                uVar9 = uVar2;
                while (*piVar11 == *piVar14) {
                  uVar9 = uVar9 - 1;
                  piVar14 = piVar14 + 1;
                  piVar11 = piVar11 + 1;
                  if (uVar9 == 0) {
                    return plVar13;
                  }
                }
              }
            }
            else {
              if (uVar12 <= uVar9) {
                uVar4 = 0;
                if (uVar12 != 0) {
                  uVar4 = uVar9 / uVar12;
                }
                uVar9 = uVar9 - uVar4 * uVar12;
              }
              if (uVar9 != uVar7) {
                return (long *)0x0;
              }
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}


