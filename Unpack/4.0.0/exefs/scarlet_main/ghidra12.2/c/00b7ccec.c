/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b7ccec; name: FUN_00b7ccec
 */


long FUN_00b7ccec(long param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x98);
  uVar2 = *(ulong *)(lVar5 + 0xa8);
  if (uVar2 != 0) {
    uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar7 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = param_1 * 0xffff + (long)param_2;
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar4 = uVar2 - 1 & uVar3;
    }
    else {
      uVar4 = uVar3;
      if (uVar2 <= uVar3) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar3 / uVar2;
        }
        uVar4 = uVar3 - uVar4 * uVar2;
      }
    }
    plVar6 = *(long **)(*(long *)(lVar5 + 0xa0) + uVar4 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (uVar3 == plVar6[1]) {
            if ((plVar6[2] == param_1) && ((int)plVar6[3] == param_2)) {
LAB_00b7ce10:
              return plVar6[4];
            }
          }
          else if ((plVar6[1] & uVar2 - 1) != uVar4) {
            return 0;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar6[1];
          if (uVar3 == uVar7) {
            if ((plVar6[2] == param_1) && ((int)plVar6[3] == param_2)) goto LAB_00b7ce10;
          }
          else {
            if (uVar2 <= uVar7) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar7 / uVar2;
              }
              uVar7 = uVar7 - uVar1 * uVar2;
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


