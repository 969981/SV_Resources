/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005033a4; name: FUN_005033a4
 */


void FUN_005033a4(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar10 = param_1[1];
  if (param_2 <= uVar10) {
    if (param_2 < uVar10) {
      uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar10 < 3) ||
         (uVar12 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar10 >>
                                                                                        0x10)),
                                                                         CONCAT11(POPCOUNT((char)(
                                                  uVar10 >> 8)),POPCOUNT((char)uVar10)))))))),
         uVar11 = NEON_uaddlv(uVar12,1), 1 < (uint)CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11)))
      {
        uVar5 = std::__next_prime(uVar5);
        if (uVar5 <= param_2) {
          uVar5 = param_2;
        }
      }
      else {
        if (1 < uVar5) {
          uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
        }
        if (uVar5 <= param_2) {
          uVar5 = param_2;
        }
      }
      param_2 = uVar5;
      if (param_2 < uVar10) goto LAB_0050348c;
    }
    return;
  }
LAB_0050348c:
  if (param_2 == 0) {
    lVar1 = *param_1;
    *param_1 = 0;
    if (lVar1 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    param_1[1] = 0;
  }
  else {
    lVar1 = FUN_0049e770(PTR_FUN_047cba38,param_2 << 3);
    lVar2 = *param_1;
    *param_1 = lVar1;
    if (lVar2 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    uVar5 = param_2 - 1;
    uVar10 = param_2;
    if (param_2 == 0 || uVar5 == 0) {
      uVar10 = 1;
    }
    uVar3 = uVar10 & 3;
    param_1[1] = param_2;
    if (uVar10 - 1 < 3) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      do {
        lVar1 = uVar6 * 8;
        uVar6 = uVar6 + 4;
        *(undefined8 *)(*param_1 + lVar1) = 0;
        *(undefined8 *)(*param_1 + lVar1 + 8) = 0;
        *(undefined8 *)(*param_1 + lVar1 + 0x10) = 0;
        *(undefined8 *)(*param_1 + lVar1 + 0x18) = 0;
      } while ((uVar10 & 0xfffffffffffffffc) != uVar6);
    }
    if (uVar3 != 0) {
      lVar1 = uVar6 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar1) = 0;
        uVar3 = uVar3 - 1;
        lVar1 = lVar1 + 8;
      } while (uVar3 != 0);
    }
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      uVar12 = CONCAT17(POPCOUNT((char)(param_2 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(param_2 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(param_2 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(param_2 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(param_2 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(param_2 >> 0x10
                                                                                    )),
                                                                     CONCAT11(POPCOUNT((char)(
                                                  param_2 >> 8)),POPCOUNT((char)param_2))))))));
      uVar11 = NEON_uaddlv(uVar12,1);
      uVar3 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
      uVar10 = plVar4[1];
      if (uVar3 < 2) {
        uVar10 = uVar10 & uVar5;
      }
      else if (param_2 <= uVar10) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar10 / param_2;
        }
        uVar10 = uVar10 - uVar6 * param_2;
      }
      *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar4;
      if (plVar7 != (long *)0x0) {
        if (uVar3 < 2) {
          do {
            uVar3 = plVar7[1] & uVar5;
            if (uVar3 != uVar10) {
              plVar9 = plVar7;
              if (*(long *)(*param_1 + uVar3 * 8) == 0) {
                *(long **)(*param_1 + uVar3 * 8) = plVar4;
                uVar10 = uVar3;
              }
              else {
                do {
                  plVar8 = plVar9;
                  plVar9 = (long *)*plVar8;
                  if (plVar9 == (long *)0x0) break;
                } while (plVar7[2] == plVar9[2]);
                *plVar4 = (long)plVar9;
                *plVar8 = **(long **)(*param_1 + uVar3 * 8);
                **(undefined8 **)(*param_1 + uVar3 * 8) = plVar7;
                plVar7 = plVar4;
              }
            }
            plVar9 = (long *)*plVar7;
            plVar4 = plVar7;
            plVar7 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            uVar5 = plVar7[1];
            if (param_2 <= uVar5) {
              uVar3 = 0;
              if (param_2 != 0) {
                uVar3 = uVar5 / param_2;
              }
              uVar5 = uVar5 - uVar3 * param_2;
            }
            if (uVar5 != uVar10) {
              plVar9 = plVar7;
              if (*(long *)(*param_1 + uVar5 * 8) == 0) {
                *(long **)(*param_1 + uVar5 * 8) = plVar4;
                uVar10 = uVar5;
              }
              else {
                do {
                  plVar8 = plVar9;
                  plVar9 = (long *)*plVar8;
                  if (plVar9 == (long *)0x0) break;
                } while (plVar7[2] == plVar9[2]);
                *plVar4 = (long)plVar9;
                *plVar8 = **(long **)(*param_1 + uVar5 * 8);
                **(undefined8 **)(*param_1 + uVar5 * 8) = plVar7;
                plVar7 = plVar4;
              }
            }
            plVar9 = (long *)*plVar7;
            plVar4 = plVar7;
            plVar7 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
  }
  return;
}


