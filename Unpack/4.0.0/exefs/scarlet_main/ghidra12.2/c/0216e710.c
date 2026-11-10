/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0216e710; name: FUN_0216e710
 */


undefined4 FUN_0216e710(long param_1,ulong *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  uVar5 = *(ulong *)(param_1 + 600);
  if (uVar5 != 0) {
    uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar4 = *param_2;
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      uVar6 = uVar5 - 1 & uVar4;
    }
    else if (uVar4 < uVar5) {
      uVar6 = uVar4;
    }
    else {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar4 / uVar5;
      }
      uVar6 = uVar4 - uVar6 * uVar5;
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0x250) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar3 < 2) {
        do {
          if (plVar7[1] == uVar4) {
            if (plVar7[2] == uVar4) goto LAB_0216e828;
          }
          else if ((plVar7[1] & uVar5 - 1) != uVar6) {
            return 0xffffffff;
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return 0xffffffff;
          }
        } while( true );
      }
      do {
        uVar3 = plVar7[1];
        if (uVar3 == uVar4) {
          if (plVar7[2] == uVar4) {
LAB_0216e828:
            puVar2 = (undefined4 *)FUN_00d3a40c();
            return *puVar2;
          }
        }
        else {
          if (uVar5 <= uVar3) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar3 / uVar5;
            }
            uVar3 = uVar3 - uVar1 * uVar5;
          }
          if (uVar3 != uVar6) {
            return 0xffffffff;
          }
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return 0xffffffff;
        }
      } while( true );
    }
  }
  return 0xffffffff;
}


