/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e05e70; name: FUN_02e05e70
 */


long FUN_02e05e70(long param_1,ushort param_2)

{
  uint *puVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *extraout_x12;
  ulong uVar8;
  ulong uVar9;
  
  uVar4 = *(ulong *)(param_1 + 0x38);
  if (uVar4 == 0) {
    return 0;
  }
  uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  uVar5 = (ulong)param_2;
  if (uVar6 < 2) {
    uVar8 = (int)uVar4 - 1 & uVar5;
  }
  else {
    uVar8 = uVar5;
    if (uVar4 <= uVar5) {
      uVar8 = 0;
      if (uVar4 != 0) {
        uVar8 = uVar5 / uVar4;
      }
      uVar8 = uVar5 - uVar8 * uVar4;
    }
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x30) + uVar8 * 8);
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  plVar7 = (long *)*plVar7;
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  if (uVar6 < 2) {
    do {
      if (plVar7[1] == uVar5) {
        if (*(ushort *)(plVar7 + 2) == param_2) goto LAB_02e05f70;
      }
      else if ((plVar7[1] & uVar4 - 1) != uVar8) {
        return 0;
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        return 0;
      }
    } while( true );
  }
  do {
    uVar9 = plVar7[1];
    if (uVar9 == uVar5) {
      if (*(ushort *)(plVar7 + 2) == param_2) break;
    }
    else {
      if (uVar4 <= uVar9) {
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar9 / uVar4;
        }
        uVar9 = uVar9 - uVar2 * uVar4;
      }
      if (uVar9 != uVar8) {
        return 0;
      }
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) {
      return 0;
    }
  } while( true );
LAB_02e05f70:
  if (uVar6 < 2) {
    uVar8 = (int)uVar4 - 1 & uVar5;
  }
  else {
    uVar8 = uVar5;
    if (uVar4 <= uVar5) {
      uVar8 = 0;
      if (uVar4 != 0) {
        uVar8 = uVar5 / uVar4;
      }
      uVar8 = uVar5 - uVar8 * uVar4;
    }
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x30) + uVar8 * 8);
  if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
    if (uVar6 < 2) {
      do {
        if (plVar7[1] == uVar5) {
          if (*(ushort *)(plVar7 + 2) == param_2) goto LAB_02e06024;
        }
        else if ((plVar7[1] & uVar4 - 1) != uVar8) break;
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
    else {
      do {
        uVar6 = plVar7[1];
        if (uVar6 == uVar5) {
          if (*(ushort *)(plVar7 + 2) == param_2) goto LAB_02e06024;
        }
        else {
          if (uVar4 <= uVar6) {
            uVar9 = 0;
            if (uVar4 != 0) {
              uVar9 = uVar6 / uVar4;
            }
            uVar6 = uVar6 - uVar9 * uVar4;
          }
          if (uVar6 != uVar8) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  FUN_02e06190();
  plVar7 = extraout_x12;
LAB_02e06024:
  piVar3 = (int *)plVar7[3];
  if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 7) ||
     (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar4 == 0)) {
    return 0;
  }
  puVar1 = (uint *)((long)piVar3 + uVar4);
  return (long)puVar1 + (ulong)*puVar1;
}


