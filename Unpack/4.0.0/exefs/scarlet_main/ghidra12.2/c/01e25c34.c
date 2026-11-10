/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e25c34; name: FUN_01e25c34
 */


void FUN_01e25c34(long param_1,ushort param_2,byte param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  uVar2 = *(ulong *)(param_1 + 0x350);
  if (uVar2 == 0) {
    return;
  }
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar5 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  uVar3 = (ulong)param_2;
  if (uVar5 < 2) {
    uVar4 = (int)uVar2 - 1 & uVar3;
  }
  else if (uVar3 < uVar2) {
    uVar4 = uVar3;
  }
  else {
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = uVar3 / uVar2;
    }
    uVar4 = uVar3 - uVar4 * uVar2;
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x348) + uVar4 * 8);
  if (plVar6 == (long *)0x0) {
    return;
  }
  plVar6 = (long *)*plVar6;
  if (plVar6 == (long *)0x0) {
    return;
  }
  if (uVar5 < 2) {
    do {
      if (plVar6[1] == uVar3) {
        if (*(ushort *)(plVar6 + 2) == param_2) goto LAB_01e25ccc;
      }
      else if ((plVar6[1] & uVar2 - 1) != uVar4) {
        return;
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    uVar5 = plVar6[1];
    if (uVar5 == uVar3) {
      if (*(ushort *)(plVar6 + 2) == param_2) break;
    }
    else {
      if (uVar2 <= uVar5) {
        uVar1 = 0;
        if (uVar2 != 0) {
          uVar1 = uVar5 / uVar2;
        }
        uVar5 = uVar5 - uVar1 * uVar2;
      }
      if (uVar5 != uVar4) {
        return;
      }
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_01e25ccc:
  uVar2 = plVar6[4];
  if (uVar2 != 0) {
    uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar5 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar3 = (ulong)param_3;
    if (uVar5 < 2) {
      uVar4 = (int)uVar2 - 1 & uVar3;
    }
    else if (uVar3 < uVar2) {
      uVar4 = uVar3;
    }
    else {
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar3 / uVar2;
      }
      uVar4 = uVar3 - uVar4 * uVar2;
    }
    plVar7 = *(long **)(plVar6[3] + uVar4 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar7[1] == uVar3) {
            if (*(byte *)(plVar7 + 2) == param_3) goto LAB_01e25e24;
          }
          else if ((plVar7[1] & uVar2 - 1) != uVar4) {
            return;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar7[1];
          if (uVar5 == uVar3) {
            if (*(byte *)(plVar7 + 2) == param_3) {
LAB_01e25e24:
              FUN_01e25fb4();
              if (plVar6[0xe] == 0) {
                FUN_01e26000((long *)(param_1 + 0x348),plVar6);
                return;
              }
              return;
            }
          }
          else {
            if (uVar2 <= uVar5) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar5 / uVar2;
              }
              uVar5 = uVar5 - uVar1 * uVar2;
            }
            if (uVar5 != uVar4) {
              return;
            }
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


