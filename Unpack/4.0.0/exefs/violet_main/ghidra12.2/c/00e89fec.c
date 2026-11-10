/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e89fec; name: FUN_00e89fec
 */


long FUN_00e89fec(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong extraout_x8;
  ulong uVar5;
  ulong extraout_x9;
  ulong extraout_x10;
  long *plVar6;
  ulong uVar7;
  ulong extraout_x11;
  long lVar8;
  long extraout_x13;
  ulong uVar9;
  ulong uVar10;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  if (uVar5 != 0) {
    uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar4 = *param_2;
    uVar1 = 0;
    if (uVar5 != 0) {
      uVar1 = uVar4 / uVar5;
    }
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      uVar9 = uVar5 - 1 & uVar4;
    }
    else {
      uVar9 = uVar4;
      if (uVar5 <= uVar4) {
        uVar9 = uVar4 - uVar1 * uVar5;
      }
    }
    lVar8 = *(long *)(param_1 + 8);
    plVar6 = *(long **)(lVar8 + uVar9 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      uVar7 = uVar5 - 1;
      if (uVar3 < 2) {
        do {
          if (plVar6[1] == uVar4) {
            if (plVar6[2] == uVar4) goto LAB_00e8a0ec;
          }
          else if ((plVar6[1] & uVar7) != uVar9) {
            return 0;
          }
          plVar6 = (long *)*plVar6;
          param_1 = 0;
          if (plVar6 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar10 = plVar6[1];
        if (uVar10 == uVar4) {
          if (plVar6[2] == uVar4) {
LAB_00e8a0ec:
            if (uVar3 < 2) goto LAB_00e8a15c;
            uVar9 = uVar4;
            if (uVar5 <= uVar4) {
              uVar9 = uVar4 - uVar1 * uVar5;
            }
            do {
              plVar6 = *(long **)(lVar8 + uVar9 * 8);
              if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
                if (uVar3 < 2) {
                  do {
                    if (plVar6[1] == uVar4) {
                      if (plVar6[2] == uVar4) goto LAB_00e8a190;
                    }
                    else if ((plVar6[1] & uVar7) != uVar9) break;
                    plVar6 = (long *)*plVar6;
                  } while (plVar6 != (long *)0x0);
                }
                else {
                  do {
                    uVar3 = plVar6[1];
                    if (uVar3 == uVar4) {
                      if (plVar6[2] == uVar4) {
LAB_00e8a190:
                        return plVar6[6];
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
                      if (uVar3 != uVar9) break;
                    }
                    plVar6 = (long *)*plVar6;
                  } while (plVar6 != (long *)0x0);
                }
              }
              param_1 = FUN_0216dd50(param_1);
              uVar4 = extraout_x8;
              uVar5 = extraout_x9;
              uVar3 = extraout_x10;
              uVar7 = extraout_x11;
              lVar8 = extraout_x13;
LAB_00e8a15c:
              uVar9 = uVar7 & uVar4;
            } while( true );
          }
        }
        else {
          if (uVar5 <= uVar10) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar2 * uVar5;
          }
          if (uVar10 != uVar9) {
            return 0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return 0;
}


