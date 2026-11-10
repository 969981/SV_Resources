/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004c24dc; name: FUN_004c24dc
 */


void FUN_004c24dc(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
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
    uVar7 = param_2;
    if (param_2 == 0 || uVar5 == 0) {
      uVar7 = 1;
    }
    uVar3 = uVar7 & 3;
    param_1[1] = param_2;
    if (uVar7 - 1 < 3) {
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
      } while ((uVar7 & 0xfffffffffffffffc) != uVar6);
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
      uVar7 = plVar4[1];
      if (uVar3 < 2) {
        uVar7 = uVar7 & uVar5;
      }
      else if (param_2 <= uVar7) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar7 / param_2;
        }
        uVar7 = uVar7 - uVar6 * param_2;
      }
      *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar4;
      if (plVar8 != (long *)0x0) {
        if (uVar3 < 2) {
          do {
            uVar3 = plVar8[1] & uVar5;
            if (uVar3 != uVar7) {
              plVar10 = plVar8;
              if (*(long *)(*param_1 + uVar3 * 8) == 0) {
                *(long **)(*param_1 + uVar3 * 8) = plVar4;
                uVar7 = uVar3;
              }
              else {
                do {
                  plVar9 = plVar10;
                  plVar10 = (long *)*plVar9;
                  if (plVar10 == (long *)0x0) break;
                } while (plVar8[2] == plVar10[2] && (int)plVar8[3] == (int)plVar10[3]);
                *plVar4 = (long)plVar10;
                *plVar9 = **(long **)(*param_1 + uVar3 * 8);
                **(undefined8 **)(*param_1 + uVar3 * 8) = plVar8;
                plVar8 = plVar4;
              }
            }
            plVar10 = (long *)*plVar8;
            plVar4 = plVar8;
            plVar8 = plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            uVar5 = plVar8[1];
            if (param_2 <= uVar5) {
              uVar3 = 0;
              if (param_2 != 0) {
                uVar3 = uVar5 / param_2;
              }
              uVar5 = uVar5 - uVar3 * param_2;
            }
            if (uVar5 != uVar7) {
              plVar10 = plVar8;
              if (*(long *)(*param_1 + uVar5 * 8) == 0) {
                *(long **)(*param_1 + uVar5 * 8) = plVar4;
                uVar7 = uVar5;
              }
              else {
                do {
                  plVar9 = plVar10;
                  plVar10 = (long *)*plVar9;
                  if (plVar10 == (long *)0x0) break;
                } while (plVar8[2] == plVar10[2] && (int)plVar8[3] == (int)plVar10[3]);
                *plVar4 = (long)plVar10;
                *plVar9 = **(long **)(*param_1 + uVar5 * 8);
                **(undefined8 **)(*param_1 + uVar5 * 8) = plVar8;
                plVar8 = plVar4;
              }
            }
            plVar10 = (long *)*plVar8;
            plVar4 = plVar8;
            plVar8 = plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
    }
  }
  return;
}


