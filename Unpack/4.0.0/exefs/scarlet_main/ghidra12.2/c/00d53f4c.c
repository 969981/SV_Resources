/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d53f4c; name: FUN_00d53f4c
 */


long FUN_00d53f4c(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar3 = *param_2;
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (uVar2 != 0) {
    uVar4 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar5 = uVar2 - 1 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*(long *)(param_1 + 8) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar6[1] == uVar3) {
            if (plVar6[2] == uVar3) goto LAB_00d54048;
          }
          else if ((plVar6[1] & uVar2 - 1) != uVar5) break;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar6[1];
          if (uVar4 == uVar3) {
            if (plVar6[2] == uVar3) goto LAB_00d54048;
          }
          else {
            if (uVar2 <= uVar4) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar4 / uVar2;
              }
              uVar4 = uVar4 - uVar1 * uVar2;
            }
            if (uVar4 != uVar5) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
LAB_00d54058:
  uVar2 = *(ulong *)(param_1 + 0x78);
  if (uVar2 != 0) {
    uVar4 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar5 = uVar2 - 1 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x70) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar6[1] == uVar3) {
            if (plVar6[2] == uVar3) goto LAB_00d54144;
          }
          else if ((plVar6[1] & uVar2 - 1) != uVar5) break;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar6[1];
          if (uVar4 == uVar3) {
            if (plVar6[2] == uVar3) goto LAB_00d54144;
          }
          else {
            if (uVar2 <= uVar4) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar4 / uVar2;
              }
              uVar4 = uVar4 - uVar1 * uVar2;
            }
            if (uVar4 != uVar5) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
LAB_00d540f4:
  uVar2 = *(ulong *)(param_1 + 0xe0);
  if (uVar2 != 0) {
    uVar4 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar5 = uVar2 - 1 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0xd8) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar6[1] == uVar3) {
            if (plVar6[2] == uVar3) goto LAB_00d54250;
          }
          else if ((plVar6[1] & uVar2 - 1) != uVar5) {
            return 0;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar6[1];
          if (uVar4 == uVar3) {
            if (plVar6[2] == uVar3) {
LAB_00d54250:
              return plVar6[6];
            }
          }
          else {
            if (uVar2 <= uVar4) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar4 / uVar2;
              }
              uVar4 = uVar4 - uVar1 * uVar2;
            }
            if (uVar4 != uVar5) {
              return 0;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      return 0;
    }
  }
  return 0;
LAB_00d54048:
  if (plVar6[6] != 0) {
    return plVar6[6];
  }
  goto LAB_00d54058;
LAB_00d54144:
  if (plVar6[6] != 0) {
    return plVar6[6];
  }
  goto LAB_00d540f4;
}


