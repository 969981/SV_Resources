/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002db014; name: FUN_002db014
 */


bool FUN_002db014(long param_1,int param_2)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  uVar4 = *(ulong *)(param_1 + 0x80);
  if (uVar4 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    puVar1 = (uint *)(*(long *)(param_1 + 0x58) + (long)param_2 * 8);
    uVar10 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar4 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar4))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    uVar2 = (ulong)(byte)puVar1[1] << 9 | (ulong)*(byte *)((long)puVar1 + 5) << 1 |
            (ulong)*(ushort *)((long)puVar1 + 6) & 1 | (ulong)(*puVar1 >> 4) << 0x11;
    if (uVar8 < 2) {
      uVar7 = uVar2 & uVar4 + 0x1fffffffffff;
    }
    else {
      uVar7 = uVar2;
      if (uVar4 <= uVar2) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar2 / uVar4;
        }
        uVar7 = uVar2 - uVar7 * uVar4;
      }
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0x78) + uVar7 * 8);
    plVar6 = (long *)0x0;
    if ((plVar5 != (long *)0x0) && (plVar6 = (long *)*plVar5, plVar6 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar6[1] == uVar2) {
            if (plVar6[2] == uVar2) break;
          }
          else if ((plVar6[1] & uVar4 - 1) != uVar7) {
            return false;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar6[1];
          if (uVar8 == uVar2) {
            if (plVar6[2] == uVar2) break;
          }
          else {
            if (uVar4 <= uVar8) {
              uVar3 = 0;
              if (uVar4 != 0) {
                uVar3 = uVar8 / uVar4;
              }
              uVar8 = uVar8 - uVar3 * uVar4;
            }
            if (uVar8 != uVar7) {
              return false;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  return plVar6 != (long *)0x0;
}


