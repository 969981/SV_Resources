/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fe5078; name: FUN_00fe5078
 */


undefined4 FUN_00fe5078(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  uVar1 = FUN_00e47950();
  if ((uVar1 & 0xff) == 0) {
    uVar1 = FUN_00e4b15c(param_1);
  }
  if ((uVar1 & 0xff) == 0) {
    uVar1 = *(ulong *)(param_1 + 0xec8);
    if (uVar1 != 0) {
      uVar3 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
      uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
      uVar4 = *param_2;
      uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar3 < 2) {
        uVar2 = uVar1 - 1 & uVar4;
      }
      else {
        uVar2 = uVar4;
        if (uVar1 <= uVar4) {
          uVar2 = 0;
          if (uVar1 != 0) {
            uVar2 = uVar4 / uVar1;
          }
          uVar2 = uVar4 - uVar2 * uVar1;
        }
      }
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 0xec0) + uVar2 * 8);
      if ((puVar7 != (undefined8 *)0x0) && (plVar6 = (long *)*puVar7, plVar6 != (long *)0x0)) {
        if (uVar3 < 2) {
          do {
            if (plVar6[1] == uVar4) {
              if (plVar6[2] == uVar4) goto LAB_00fe52a0;
            }
            else if ((plVar6[1] & uVar1 - 1) != uVar2) {
              return 0;
            }
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
        else {
          do {
            uVar3 = plVar6[1];
            if (uVar3 == uVar4) {
              if (plVar6[2] == uVar4) goto LAB_00fe52a0;
            }
            else {
              if (uVar1 <= uVar3) {
                uVar5 = 0;
                if (uVar1 != 0) {
                  uVar5 = uVar3 / uVar1;
                }
                uVar3 = uVar3 - uVar5 * uVar1;
              }
              if (uVar3 != uVar2) {
                return 0;
              }
            }
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
      }
    }
  }
  else {
    uVar3 = *(ulong *)(param_1 + (uVar1 >> 0x20) * 0x78 + 0x40);
    if (uVar3 != 0) {
      uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
      uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
      uVar2 = *param_2;
      uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar4 < 2) {
        uVar5 = uVar3 - 1 & uVar2;
      }
      else {
        uVar5 = uVar2;
        if (uVar3 <= uVar2) {
          uVar5 = 0;
          if (uVar3 != 0) {
            uVar5 = uVar2 / uVar3;
          }
          uVar5 = uVar2 - uVar5 * uVar3;
        }
      }
      plVar6 = *(long **)(*(long *)(param_1 + (uVar1 >> 0x20) * 0x78 + 0x38) + uVar5 * 8);
      if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
        if (uVar4 < 2) {
          do {
            if (plVar6[1] == uVar2) {
              if (plVar6[2] == uVar2) {
LAB_00fe52a0:
                return (int)plVar6[4];
              }
            }
            else if ((plVar6[1] & uVar3 - 1) != uVar5) {
              return 0;
            }
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
        else {
          do {
            uVar1 = plVar6[1];
            if (uVar1 == uVar2) {
              if (plVar6[2] == uVar2) goto LAB_00fe52a0;
            }
            else {
              if (uVar3 <= uVar1) {
                uVar4 = 0;
                if (uVar3 != 0) {
                  uVar4 = uVar1 / uVar3;
                }
                uVar1 = uVar1 - uVar4 * uVar3;
              }
              if (uVar1 != uVar5) {
                return 0;
              }
            }
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
      }
    }
  }
  return 0;
}


