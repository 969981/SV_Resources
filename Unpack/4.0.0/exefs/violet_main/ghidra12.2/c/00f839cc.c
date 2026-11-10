/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f839cc; name: FUN_00f839cc
 */


long FUN_00f839cc(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *extraout_x12;
  ulong uVar7;
  ulong uVar8;
  
  uVar3 = *(ulong *)(param_1 + 0x108);
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar2 = *param_2;
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar7 = uVar3 - 1 & uVar2;
    }
    else {
      uVar7 = uVar2;
      if (uVar3 <= uVar2) {
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = uVar2 / uVar3;
        }
        uVar7 = uVar2 - uVar7 * uVar3;
      }
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0x100) + uVar7 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      uVar6 = uVar3 - 1;
      if (1 < uVar4) {
        do {
          uVar8 = plVar5[1];
          if (uVar8 == uVar2) {
            if (plVar5[2] == uVar2) goto LAB_00f83ad0;
          }
          else {
            if (uVar3 <= uVar8) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar8 / uVar3;
              }
              uVar8 = uVar8 - uVar1 * uVar3;
            }
            if (uVar8 != uVar7) {
              return -1;
            }
          }
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) {
            return -1;
          }
        } while( true );
      }
      do {
        if (plVar5[1] == uVar2) {
          if (plVar5[2] == uVar2) goto LAB_00f83ad0;
        }
        else if ((plVar5[1] & uVar6) != uVar7) {
          return -1;
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return -1;
        }
      } while( true );
    }
  }
  return -1;
LAB_00f83ad0:
  if (uVar4 < 2) {
    uVar7 = uVar6 & uVar2;
  }
  else {
    uVar7 = uVar2;
    if (uVar3 <= uVar2) {
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar7 = uVar2 / uVar3;
      }
      uVar7 = uVar2 - uVar7 * uVar3;
    }
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x100) + uVar7 * 8);
  if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
    if (uVar4 < 2) {
      do {
        if (plVar5[1] == uVar2) {
          if (plVar5[2] == uVar2) goto LAB_00f83b84;
        }
        else if ((plVar5[1] & uVar6) != uVar7) break;
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    else {
      do {
        uVar4 = plVar5[1];
        if (uVar4 == uVar2) {
          if (plVar5[2] == uVar2) goto LAB_00f83b84;
        }
        else {
          if (uVar3 <= uVar4) {
            uVar6 = 0;
            if (uVar3 != 0) {
              uVar6 = uVar4 / uVar3;
            }
            uVar4 = uVar4 - uVar6 * uVar3;
          }
          if (uVar4 != uVar7) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  FUN_028e58c0(0xffffffffffffffff);
  plVar5 = extraout_x12;
LAB_00f83b84:
  return plVar5[6];
}


