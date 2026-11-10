/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123fee0; name: FUN_0123fee0
 */


long * FUN_0123fee0(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar1 = *(ushort *)(param_1 + 0x70);
  uVar3 = (ulong)uVar1;
  if ((uVar3 != 0xee) && (uVar4 = *(ulong *)(param_1 + 0x10), uVar4 != 0)) {
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
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
    plVar7 = *(long **)(*(long *)(param_1 + 8) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar7[1] == uVar3) {
            if (*(ushort *)(plVar7 + 2) == uVar1) goto LAB_0123ff6c;
          }
          else if ((plVar7[1] & uVar4 - 1) != uVar6) {
            return (long *)0x0;
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return (long *)0x0;
          }
        } while( true );
      }
      do {
        uVar5 = plVar7[1];
        if (uVar5 == uVar3) {
          if (*(ushort *)(plVar7 + 2) == uVar1) {
LAB_0123ff6c:
            return plVar7 + 3;
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
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}


