/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e5c520; name: FUN_01e5c520
 */


long * FUN_01e5c520(long *param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    bVar1 = *param_2;
    uVar3 = (ulong)bVar1;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = (int)uVar4 - 1 & uVar3;
    }
    else {
      uVar6 = uVar3;
      if (uVar4 <= uVar3) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar3 / uVar4;
        }
        uVar6 = uVar3 - uVar6 * uVar4;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar7[1] == uVar3) {
            if (*(byte *)(plVar7 + 2) == bVar1) {
              return plVar7;
            }
          }
          else if ((plVar7[1] & uVar4 - 1) != uVar6) {
            return (long *)0x0;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
        return (long *)0x0;
      }
      do {
        uVar5 = plVar7[1];
        if (uVar5 == uVar3) {
          if (*(byte *)(plVar7 + 2) == bVar1) {
            return plVar7;
          }
        }
        else {
          if (uVar4 <= uVar5) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar5 / uVar4;
            }
            uVar5 = uVar5 - uVar2 * uVar4;
          }
          if (uVar5 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return (long *)0x0;
}


