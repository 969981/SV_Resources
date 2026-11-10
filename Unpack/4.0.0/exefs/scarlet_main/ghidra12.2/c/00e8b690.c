/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e8b690; name: FUN_00e8b690
 */


long * FUN_00e8b690(long *param_1,long *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar6 = param_1[1];
  puVar1 = (ulong *)PTR_DAT_047d8b70;
  if (*param_2 != 0) {
    puVar1 = (ulong *)(*param_2 + 0x30);
  }
  if (uVar6 != 0) {
    uVar4 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar3 = *puVar1;
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar5 = uVar6 - 1 & uVar3;
    }
    else if (uVar3 < uVar6) {
      uVar5 = uVar3;
    }
    else {
      uVar5 = 0;
      if (uVar6 != 0) {
        uVar5 = uVar3 / uVar6;
      }
      uVar5 = uVar3 - uVar5 * uVar6;
    }
    plVar7 = *(long **)(*param_1 + uVar5 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar7[1] == uVar3) {
            puVar1 = (ulong *)PTR_DAT_047d8b70;
            if (plVar7[2] != 0) {
              puVar1 = (ulong *)(plVar7[2] + 0x30);
            }
            if (*puVar1 == uVar3) {
              return plVar7;
            }
          }
          else if ((plVar7[1] & uVar6 - 1) != uVar5) {
            return (long *)0x0;
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return (long *)0x0;
          }
        } while( true );
      }
      do {
        uVar4 = plVar7[1];
        if (uVar4 == uVar3) {
          puVar1 = (ulong *)PTR_DAT_047d8b70;
          if (plVar7[2] != 0) {
            puVar1 = (ulong *)(plVar7[2] + 0x30);
          }
          if (*puVar1 == uVar3) {
            return plVar7;
          }
        }
        else {
          if (uVar6 <= uVar4) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar4 / uVar6;
            }
            uVar4 = uVar4 - uVar2 * uVar6;
          }
          if (uVar4 != uVar5) {
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


