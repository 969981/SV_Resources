/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e26330; name: FUN_01e26330
 */


long * FUN_01e26330(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x10;
  ulong uVar4;
  ulong extraout_x11;
  long *plVar5;
  ulong uVar6;
  ulong extraout_x12;
  long lVar7;
  long extraout_x13;
  ulong uVar8;
  byte local_1c [4];
  undefined2 local_18 [2];
  undefined2 local_14 [2];
  
  if ((param_2 & 0x200000000) != 0) {
    param_2 = param_2 & 0xfffffffc00000000;
  }
  if (*(code **)(param_1 + 0xf0) != (code *)0x0) {
    local_18[0] = (undefined2)(param_2 >> 0x10);
    local_1c[0] = (byte)(param_2 >> 0x20) & 1;
    local_14[0] = (undefined2)param_2;
    uVar2 = (**(code **)(param_1 + 0xf0))(param_1 + 0x110,local_14,local_18,local_1c);
    if ((uVar2 & 1) != 0) {
      return (long *)0x0;
    }
  }
  uVar2 = *(ulong *)(param_1 + 0x88);
  if (uVar2 != 0) {
    uVar4 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar3 = uVar2 - 1 & param_2;
    }
    else {
      uVar3 = param_2;
      if (uVar2 <= param_2) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = param_2 / uVar2;
        }
        uVar3 = param_2 - uVar3 * uVar2;
      }
    }
    lVar7 = *(long *)(param_1 + 0x80);
    plVar5 = *(long **)(lVar7 + uVar3 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      uVar6 = uVar2 - 1;
      if (1 < uVar4) {
        do {
          uVar8 = plVar5[1];
          if (uVar8 == param_2) {
            if (plVar5[2] == param_2) goto LAB_01e26444;
          }
          else {
            if (uVar2 <= uVar8) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar8 / uVar2;
              }
              uVar8 = uVar8 - uVar1 * uVar2;
            }
            if (uVar8 != uVar3) {
              return (long *)0x0;
            }
          }
          plVar5 = (long *)*plVar5;
          param_1 = 0;
          if (plVar5 == (long *)0x0) {
            return (long *)0x0;
          }
        } while( true );
      }
      do {
        if (plVar5[1] == param_2) {
          if (plVar5[2] == param_2) {
LAB_01e26444:
            uVar3 = param_2;
            if (1 < uVar4) goto LAB_01e2649c;
            uVar3 = uVar6 & param_2;
            do {
              plVar5 = *(long **)(lVar7 + uVar3 * 8);
              if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
                if (uVar4 < 2) {
                  do {
                    if (plVar5[1] == param_2) {
                      if (plVar5[2] == param_2) {
LAB_01e264e8:
                        return plVar5 + 3;
                      }
                    }
                    else if ((plVar5[1] & uVar6) != uVar3) break;
                    plVar5 = (long *)*plVar5;
                  } while (plVar5 != (long *)0x0);
                }
                else {
                  do {
                    uVar4 = plVar5[1];
                    if (uVar4 == param_2) {
                      if (plVar5[2] == param_2) goto LAB_01e264e8;
                    }
                    else {
                      if (uVar2 <= uVar4) {
                        uVar6 = 0;
                        if (uVar2 != 0) {
                          uVar6 = uVar4 / uVar2;
                        }
                        uVar4 = uVar4 - uVar6 * uVar2;
                      }
                      if (uVar4 != uVar3) break;
                    }
                    plVar5 = (long *)*plVar5;
                  } while (plVar5 != (long *)0x0);
                }
              }
              param_1 = FUN_01e26550(param_1);
              uVar2 = extraout_x8;
              param_2 = extraout_x9;
              uVar3 = extraout_x10;
              uVar4 = extraout_x11;
              uVar6 = extraout_x12;
              lVar7 = extraout_x13;
LAB_01e2649c:
              if (uVar2 <= param_2) {
                uVar3 = 0;
                if (uVar2 != 0) {
                  uVar3 = param_2 / uVar2;
                }
                uVar3 = param_2 - uVar3 * uVar2;
              }
            } while( true );
          }
        }
        else if ((plVar5[1] & uVar6) != uVar3) {
          return (long *)0x0;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  return (long *)0x0;
}


