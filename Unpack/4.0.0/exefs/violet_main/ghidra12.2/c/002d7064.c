/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d7064; name: FUN_002d7064
 */


void FUN_002d7064(long *param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  undefined8 *puVar14;
  int *piVar15;
  ulong uVar16;
  undefined2 uVar17;
  undefined8 uVar18;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar16 = param_1[1];
  if (param_2 <= uVar16) {
    if (param_2 < uVar16) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar16 < 3) ||
         (uVar18 = CONCAT17(POPCOUNT((char)(uVar16 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar16 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar16 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar16 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar16 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar16 >>
                                                                                        0x10)),
                                                                         CONCAT11(POPCOUNT((char)(
                                                  uVar16 >> 8)),POPCOUNT((char)uVar16)))))))),
         uVar17 = NEON_uaddlv(uVar18,1), 1 < (uint)CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17)))
      {
        uVar9 = std::__next_prime(uVar9);
        if (uVar9 <= param_2) {
          uVar9 = param_2;
        }
      }
      else {
        if (1 < uVar9) {
          uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
        }
        if (uVar9 <= param_2) {
          uVar9 = param_2;
        }
      }
      param_2 = uVar9;
      if (param_2 < uVar16) goto LAB_002d714c;
    }
    return;
  }
LAB_002d714c:
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    param_1[1] = 0;
  }
  else {
    lVar2 = FUN_0049e770(PTR_FUN_047cba38,param_2 << 3);
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    uVar9 = param_2 - 1;
    uVar16 = param_2;
    if (param_2 == 0 || uVar9 == 0) {
      uVar16 = 1;
    }
    uVar4 = uVar16 & 3;
    param_1[1] = param_2;
    if (uVar16 - 1 < 3) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      do {
        lVar2 = uVar6 * 8;
        uVar6 = uVar6 + 4;
        *(undefined8 *)(*param_1 + lVar2) = 0;
        *(undefined8 *)(*param_1 + lVar2 + 8) = 0;
        *(undefined8 *)(*param_1 + lVar2 + 0x10) = 0;
        *(undefined8 *)(*param_1 + lVar2 + 0x18) = 0;
      } while ((uVar16 & 0xfffffffffffffffc) != uVar6);
    }
    if (uVar4 != 0) {
      lVar2 = uVar6 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar2) = 0;
        uVar4 = uVar4 - 1;
        lVar2 = lVar2 + 8;
      } while (uVar4 != 0);
    }
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      uVar18 = CONCAT17(POPCOUNT((char)(param_2 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(param_2 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(param_2 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(param_2 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(param_2 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(param_2 >> 0x10
                                                                                    )),
                                                                     CONCAT11(POPCOUNT((char)(
                                                  param_2 >> 8)),POPCOUNT((char)param_2))))))));
      uVar17 = NEON_uaddlv(uVar18,1);
      uVar4 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
      uVar16 = plVar5[1];
      if (uVar4 < 2) {
        uVar16 = uVar16 & uVar9;
      }
      else if (param_2 <= uVar16) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar16 / param_2;
        }
        uVar16 = uVar16 - uVar6 * param_2;
      }
      *(long **)(*param_1 + uVar16 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        if (uVar4 < 2) {
          do {
            uVar4 = plVar7[1] & uVar9;
            if (uVar4 != uVar16) {
              if (*(long *)(*param_1 + uVar4 * 8) == 0) {
                *(long **)(*param_1 + uVar4 * 8) = plVar5;
                uVar16 = uVar4;
              }
              else {
                plVar8 = plVar7;
                if ((long *)*plVar7 != (long *)0x0) {
                  puVar10 = (undefined8 *)plVar7[2];
                  plVar11 = (long *)*plVar7;
                  do {
                    puVar14 = (undefined8 *)plVar11[2];
                    if (puVar10 != puVar14) {
                      if (*(int *)((long)puVar10 + 0xc) != *(int *)((long)puVar14 + 0xc)) break;
                      uVar1 = *(uint *)(puVar10 + 1);
                      uVar6 = (ulong)uVar1;
                      if (uVar1 != *(uint *)(puVar14 + 1)) break;
                      if (0 < (int)uVar1) {
                        piVar13 = (int *)*puVar10;
                        piVar15 = (int *)*puVar14;
                        do {
                          if (*piVar13 != *piVar15) goto LAB_002d734c;
                          uVar6 = uVar6 - 1;
                          piVar15 = piVar15 + 1;
                          piVar13 = piVar13 + 1;
                        } while (uVar6 != 0);
                      }
                    }
                    plVar12 = (long *)*plVar11;
                    plVar8 = plVar11;
                    plVar11 = plVar12;
                  } while (plVar12 != (long *)0x0);
                }
LAB_002d734c:
                *plVar5 = *plVar8;
                *plVar8 = **(long **)(*param_1 + uVar4 * 8);
                **(undefined8 **)(*param_1 + uVar4 * 8) = plVar7;
                plVar7 = plVar5;
              }
            }
            plVar8 = (long *)*plVar7;
            plVar5 = plVar7;
            plVar7 = plVar8;
          } while (plVar8 != (long *)0x0);
        }
        else {
          do {
            uVar9 = plVar7[1];
            if (param_2 <= uVar9) {
              uVar4 = 0;
              if (param_2 != 0) {
                uVar4 = uVar9 / param_2;
              }
              uVar9 = uVar9 - uVar4 * param_2;
            }
            if (uVar9 != uVar16) {
              if (*(long *)(*param_1 + uVar9 * 8) == 0) {
                *(long **)(*param_1 + uVar9 * 8) = plVar5;
                uVar16 = uVar9;
              }
              else {
                plVar8 = plVar7;
                if ((long *)*plVar7 != (long *)0x0) {
                  puVar10 = (undefined8 *)plVar7[2];
                  plVar11 = (long *)*plVar7;
                  do {
                    puVar14 = (undefined8 *)plVar11[2];
                    if (puVar10 != puVar14) {
                      if (*(int *)((long)puVar10 + 0xc) != *(int *)((long)puVar14 + 0xc)) break;
                      uVar1 = *(uint *)(puVar10 + 1);
                      uVar4 = (ulong)uVar1;
                      if (uVar1 != *(uint *)(puVar14 + 1)) break;
                      if (0 < (int)uVar1) {
                        piVar13 = (int *)*puVar10;
                        piVar15 = (int *)*puVar14;
                        do {
                          if (*piVar13 != *piVar15) goto LAB_002d7448;
                          uVar4 = uVar4 - 1;
                          piVar15 = piVar15 + 1;
                          piVar13 = piVar13 + 1;
                        } while (uVar4 != 0);
                      }
                    }
                    plVar12 = (long *)*plVar11;
                    plVar8 = plVar11;
                    plVar11 = plVar12;
                  } while (plVar12 != (long *)0x0);
                }
LAB_002d7448:
                *plVar5 = *plVar8;
                *plVar8 = **(long **)(*param_1 + uVar9 * 8);
                **(undefined8 **)(*param_1 + uVar9 * 8) = plVar7;
                plVar7 = plVar5;
              }
            }
            plVar8 = (long *)*plVar7;
            plVar5 = plVar7;
            plVar7 = plVar8;
          } while (plVar8 != (long *)0x0);
        }
      }
    }
  }
  return;
}


