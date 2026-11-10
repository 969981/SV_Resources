/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035dfa0; name: FUN_0035dfa0
 */


long FUN_0035dfa0(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  long local_28 [3];
  
  uVar6 = *(ulong *)(param_1 + 0x50);
  if (uVar6 == 0) {
LAB_0035e080:
    plVar5 = (long *)0x0;
  }
  else {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar6 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar6 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar6 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar6 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar6 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar6 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar6))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar8 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    uVar3 = (ulong)param_2;
    if (uVar8 < 2) {
      uVar7 = (ulong)((int)uVar6 - 1U & param_2);
    }
    else {
      uVar7 = uVar3;
      if (uVar6 <= uVar3) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = uVar3 / uVar6;
        }
        uVar7 = uVar3 - uVar7 * uVar6;
      }
    }
    plVar4 = *(long **)(*(long *)(param_1 + 0x48) + uVar7 * 8);
    plVar5 = (long *)0x0;
    if ((plVar4 != (long *)0x0) && (plVar5 = (long *)*plVar4, plVar5 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar5[1] == uVar3) {
            if (*(uint *)(plVar5 + 2) == param_2) break;
          }
          else if ((plVar5[1] & uVar6 - 1) != uVar7) goto LAB_0035e080;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar5[1];
          if (uVar8 == uVar3) {
            if (*(uint *)(plVar5 + 2) == param_2) break;
          }
          else {
            if (uVar6 <= uVar8) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar8 / uVar6;
              }
              uVar8 = uVar8 - uVar1 * uVar6;
            }
            if (uVar8 != uVar7) goto LAB_0035e080;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  lVar9 = plVar5[3];
  FUN_0035e0bc(local_28,(long *)(param_1 + 0x48),plVar5);
  lVar2 = local_28[0];
  local_28[0] = 0;
  if (lVar2 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return lVar9;
}


