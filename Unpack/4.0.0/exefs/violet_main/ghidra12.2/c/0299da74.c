/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0299da74; name: FUN_0299da74
 */


long * FUN_0299da74(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar2 = *param_2;
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar5 = uVar3 - 1 & uVar2;
    }
    else {
      uVar5 = uVar2;
      if (uVar3 <= uVar2) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar2 / uVar3;
        }
        uVar5 = uVar2 - uVar5 * uVar3;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) {
        if (uVar4 < 2) {
          do {
            if (uVar2 == plVar6[1]) {
              if (plVar6[2] == uVar2) {
                return plVar6;
              }
            }
            else if ((plVar6[1] & uVar3 - 1) != uVar5) {
              return (long *)0x0;
            }
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
        else {
          do {
            uVar4 = plVar6[1];
            if (uVar2 == uVar4) {
              if (plVar6[2] == uVar2) {
                return plVar6;
              }
            }
            else {
              if (uVar3 <= uVar4) {
                uVar1 = 0;
                if (uVar3 != 0) {
                  uVar1 = uVar4 / uVar3;
                }
                uVar4 = uVar4 - uVar1 * uVar3;
              }
              if (uVar4 != uVar5) {
                return (long *)0x0;
              }
            }
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}


