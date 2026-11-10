/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c742fc; name: FUN_00c742fc
 */


bool FUN_00c742fc(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  piVar2 = (int *)*param_1;
  if ((((piVar2 == (int *)0x0) || (*(ushort *)((long)piVar2 - (long)*piVar2) < 5)) ||
      (uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar4 == 0)) ||
     (*(char *)((long)piVar2 + uVar4) == '\0')) {
    return true;
  }
  if ((param_1[0xc] != 0) && (uVar4 = param_1[2], uVar4 != 0)) {
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar3 = *param_2;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar4 - 1 & uVar3;
    }
    else if (uVar3 < uVar4) {
      uVar6 = uVar3;
    }
    else {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar3 / uVar4;
      }
      uVar6 = uVar3 - uVar6 * uVar4;
    }
    plVar7 = *(long **)(param_1[1] + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (1 < uVar5) {
        do {
          uVar5 = plVar7[1];
          if (uVar5 == uVar3) {
            if (plVar7[2] == uVar3) goto LAB_00c74434;
          }
          else {
            if (uVar4 <= uVar5) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar5 / uVar4;
              }
              uVar5 = uVar5 - uVar1 * uVar4;
            }
            if (uVar5 != uVar6) {
              return false;
            }
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return false;
          }
        } while( true );
      }
      do {
        if (plVar7[1] == uVar3) {
          if (plVar7[2] == uVar3) {
LAB_00c74434:
            return plVar7[7] == uVar3;
          }
        }
        else if ((plVar7[1] & uVar4 - 1) != uVar6) {
          return false;
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return false;
        }
      } while( true );
    }
  }
  return false;
}


