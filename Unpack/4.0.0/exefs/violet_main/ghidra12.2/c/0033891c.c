/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0033891c; name: FUN_0033891c
 */


void FUN_0033891c(long *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar6 = param_1[1];
  if (param_2 <= uVar6) {
    if (param_2 < uVar6) {
      uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar6 < 3) ||
         (uVar12 = CONCAT17(POPCOUNT((char)(uVar6 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar6 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar6 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar6 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar6 >> 
                                                  0x10)),CONCAT11(POPCOUNT((char)(uVar6 >> 8)),
                                                                  POPCOUNT((char)uVar6)))))))),
         uVar11 = NEON_uaddlv(uVar12,1), 1 < (uint)CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11)))
      {
        uVar8 = std::__next_prime(uVar8);
        if (uVar8 <= param_2) {
          uVar8 = param_2;
        }
      }
      else {
        if (1 < uVar8) {
          uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
        }
        if (uVar8 <= param_2) {
          uVar8 = param_2;
        }
      }
      param_2 = uVar8;
      if (param_2 < uVar6) goto LAB_00338a04;
    }
    return;
  }
LAB_00338a04:
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
    uVar8 = param_2 - 1;
    uVar6 = param_2;
    if (param_2 == 0 || uVar8 == 0) {
      uVar6 = 1;
    }
    uVar4 = uVar6 & 3;
    param_1[1] = param_2;
    if (uVar6 - 1 < 3) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        lVar2 = uVar5 * 8;
        uVar5 = uVar5 + 4;
        *(undefined8 *)(*param_1 + lVar2) = 0;
        *(undefined8 *)(*param_1 + lVar2 + 8) = 0;
        *(undefined8 *)(*param_1 + lVar2 + 0x10) = 0;
        *(undefined8 *)(*param_1 + lVar2 + 0x18) = 0;
      } while ((uVar6 & 0xfffffffffffffffc) != uVar5);
    }
    if (uVar4 != 0) {
      lVar2 = uVar5 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar2) = 0;
        uVar4 = uVar4 - 1;
        lVar2 = lVar2 + 8;
      } while (uVar4 != 0);
    }
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
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
      uVar4 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
      uVar6 = plVar7[1];
      if (uVar4 < 2) {
        uVar6 = uVar6 & uVar8;
      }
      else if (param_2 <= uVar6) {
        uVar5 = 0;
        if (param_2 != 0) {
          uVar5 = uVar6 / param_2;
        }
        uVar6 = uVar6 - uVar5 * param_2;
      }
      *(long **)(*param_1 + uVar6 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar7;
      if (plVar9 != (long *)0x0) {
        if (uVar4 < 2) {
          do {
            uVar4 = plVar9[1] & uVar8;
            if (uVar4 != uVar6) {
              if (*(long *)(*param_1 + uVar4 * 8) == 0) {
                *(long **)(*param_1 + uVar4 * 8) = plVar7;
                uVar6 = uVar4;
              }
              else {
                lVar2 = *plVar9;
                plVar10 = plVar9;
                if (lVar2 != 0) {
                  lStack_68 = plVar9[3];
                  local_70 = plVar9[2];
                  lStack_58 = plVar9[5];
                  lStack_60 = plVar9[4];
                  uStack_88 = *(undefined8 *)(lVar2 + 0x18);
                  local_90 = *(undefined8 *)(lVar2 + 0x10);
                  uStack_78 = *(undefined8 *)(lVar2 + 0x28);
                  uStack_80 = *(undefined8 *)(lVar2 + 0x20);
                  iVar1 = FUN_00368020(&local_70,&local_90);
                  if (iVar1 != 0) {
                    do {
                      plVar10 = (long *)*plVar10;
                      lVar2 = *plVar10;
                      if (lVar2 == 0) break;
                      lStack_68 = plVar9[3];
                      local_70 = plVar9[2];
                      lStack_58 = plVar9[5];
                      lStack_60 = plVar9[4];
                      uStack_88 = *(undefined8 *)(lVar2 + 0x18);
                      local_90 = *(undefined8 *)(lVar2 + 0x10);
                      uStack_78 = *(undefined8 *)(lVar2 + 0x28);
                      uStack_80 = *(undefined8 *)(lVar2 + 0x20);
                      iVar1 = FUN_00368020(&local_70,&local_90);
                    } while (iVar1 != 0);
                  }
                }
                *plVar7 = *plVar10;
                *plVar10 = **(long **)(*param_1 + uVar4 * 8);
                **(undefined8 **)(*param_1 + uVar4 * 8) = plVar9;
                plVar9 = plVar7;
              }
            }
            plVar10 = (long *)*plVar9;
            plVar7 = plVar9;
            plVar9 = plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            uVar8 = plVar9[1];
            if (param_2 <= uVar8) {
              uVar4 = 0;
              if (param_2 != 0) {
                uVar4 = uVar8 / param_2;
              }
              uVar8 = uVar8 - uVar4 * param_2;
            }
            if (uVar8 != uVar6) {
              if (*(long *)(*param_1 + uVar8 * 8) == 0) {
                *(long **)(*param_1 + uVar8 * 8) = plVar7;
                uVar6 = uVar8;
              }
              else {
                lVar2 = *plVar9;
                plVar10 = plVar9;
                if (lVar2 != 0) {
                  lStack_68 = plVar9[3];
                  local_70 = plVar9[2];
                  lStack_58 = plVar9[5];
                  lStack_60 = plVar9[4];
                  uStack_88 = *(undefined8 *)(lVar2 + 0x18);
                  local_90 = *(undefined8 *)(lVar2 + 0x10);
                  uStack_78 = *(undefined8 *)(lVar2 + 0x28);
                  uStack_80 = *(undefined8 *)(lVar2 + 0x20);
                  iVar1 = FUN_00368020(&local_70,&local_90);
                  if (iVar1 != 0) {
                    do {
                      plVar10 = (long *)*plVar10;
                      lVar2 = *plVar10;
                      if (lVar2 == 0) break;
                      lStack_68 = plVar9[3];
                      local_70 = plVar9[2];
                      lStack_58 = plVar9[5];
                      lStack_60 = plVar9[4];
                      uStack_88 = *(undefined8 *)(lVar2 + 0x18);
                      local_90 = *(undefined8 *)(lVar2 + 0x10);
                      uStack_78 = *(undefined8 *)(lVar2 + 0x28);
                      uStack_80 = *(undefined8 *)(lVar2 + 0x20);
                      iVar1 = FUN_00368020(&local_70,&local_90);
                    } while (iVar1 != 0);
                  }
                }
                *plVar7 = *plVar10;
                *plVar10 = **(long **)(*param_1 + uVar8 * 8);
                **(undefined8 **)(*param_1 + uVar8 * 8) = plVar9;
                plVar9 = plVar7;
              }
            }
            plVar10 = (long *)*plVar9;
            plVar7 = plVar9;
            plVar9 = plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
    }
  }
  return;
}


