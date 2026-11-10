/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a5180; name: FUN_004a5180
 */


long FUN_004a5180(long param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x90);
  uVar3 = *(ulong *)(lVar5 + 0xa0);
  if (uVar3 != 0) {
    uVar9 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar3 >> 
                                                  8)),POPCOUNT((char)uVar3))))))));
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar7 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    uVar2 = (long)param_2 * 0x1000193 ^ param_1 * 0x100011b;
    if (uVar7 < 2) {
      uVar4 = uVar3 - 1 & uVar2;
    }
    else {
      uVar4 = uVar2;
      if (uVar3 <= uVar2) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar2 / uVar3;
        }
        uVar4 = uVar2 - uVar4 * uVar3;
      }
    }
    plVar6 = *(long **)(*(long *)(lVar5 + 0x98) + uVar4 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (uVar2 == plVar6[1]) {
            if ((plVar6[2] == param_1) && ((int)plVar6[3] == param_2)) {
LAB_004a528c:
              lVar5 = plVar6[4];
              if (lVar5 == 0) {
                return 0;
              }
              if (*(char *)(lVar5 + 0x43) != '\0') {
                lVar5 = 0;
              }
              return lVar5;
            }
          }
          else if ((plVar6[1] & uVar3 - 1) != uVar4) {
            return 0;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar6[1];
          if (uVar2 == uVar7) {
            if ((plVar6[2] == param_1) && ((int)plVar6[3] == param_2)) goto LAB_004a528c;
          }
          else {
            if (uVar3 <= uVar7) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar7 / uVar3;
              }
              uVar7 = uVar7 - uVar1 * uVar3;
            }
            if (uVar7 != uVar4) {
              return 0;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  return 0;
}


