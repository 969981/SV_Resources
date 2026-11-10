/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019a38d8; name: FUN_019a38d8
 */


void FUN_019a38d8(undefined8 *param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  long *plVar3;
  undefined8 uVar2;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  
  uVar4 = *param_3;
  uVar6 = *(ulong *)(param_2 + 0x48);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    plVar3 = (long *)(param_2 + 0x40);
    if (uVar7 < 2) {
      uVar5 = uVar6 - 1 & uVar4;
    }
    else {
      uVar5 = uVar4;
      if (uVar6 <= uVar4) {
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = uVar4 / uVar6;
        }
        uVar5 = uVar4 - uVar5 * uVar6;
      }
    }
    plVar8 = *(long **)(*plVar3 + uVar5 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar8[1] == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_019a39a8;
          }
          else if ((plVar8[1] & uVar6 - 1) != uVar5) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar8[1];
          if (uVar7 == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_019a39a8;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar1 * uVar6;
            }
            if (uVar7 != uVar5) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  uVar6 = *(ulong *)(param_2 + 0xb0);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    plVar3 = (long *)(param_2 + 0xa8);
    if (uVar7 < 2) {
      uVar5 = uVar6 - 1 & uVar4;
    }
    else {
      uVar5 = uVar4;
      if (uVar6 <= uVar4) {
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = uVar4 / uVar6;
        }
        uVar5 = uVar4 - uVar5 * uVar6;
      }
    }
    plVar8 = *(long **)(*plVar3 + uVar5 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar8[1] == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_019a39a8;
          }
          else if ((plVar8[1] & uVar6 - 1) != uVar5) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar8[1];
          if (uVar7 == uVar4) {
            if (plVar8[2] == uVar4) {
LAB_019a39a8:
              uVar2 = FUN_00dca6d8(plVar3);
              *param_1 = 0;
              param_1[1] = 0;
              FUN_00d0a71c(param_1,uVar2);
              return;
            }
          }
          else {
            if (uVar6 <= uVar7) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar1 * uVar6;
            }
            if (uVar7 != uVar5) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


