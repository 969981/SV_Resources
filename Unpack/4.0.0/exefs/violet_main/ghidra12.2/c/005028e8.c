/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005028e8; name: FUN_005028e8
 */


long * FUN_005028e8(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar2 = *param_2;
    uVar4 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
    uVar9 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar3 >> 
                                                  8)),POPCOUNT((char)uVar3))))))));
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar4 = (uVar4 ^ uVar2 >> 0x20 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
    if (uVar6 < 2) {
      uVar5 = uVar4 & uVar3 - 1;
    }
    else {
      uVar5 = uVar4;
      if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar5 = uVar4 - uVar5 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      if (plVar7 != (long *)0x0) {
        if (uVar6 < 2) {
          do {
            if (plVar7[1] == uVar4) {
              if (plVar7[2] == uVar2) {
                return plVar7;
              }
            }
            else if ((plVar7[1] & uVar3 - 1) != uVar5) {
              return (long *)0x0;
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
        else {
          do {
            uVar6 = plVar7[1];
            if (uVar6 == uVar4) {
              if (plVar7[2] == uVar2) {
                return plVar7;
              }
            }
            else {
              if (uVar3 <= uVar6) {
                uVar1 = 0;
                if (uVar3 != 0) {
                  uVar1 = uVar6 / uVar3;
                }
                uVar6 = uVar6 - uVar1 * uVar3;
              }
              if (uVar6 != uVar5) {
                return (long *)0x0;
              }
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}


