/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b7194; name: FUN_011b7194
 */


long * FUN_011b7194(long param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar2 = *(ulong *)(param_1 + 0x78);
  if (uVar2 != 0) {
    uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar5 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar3 = (ulong)param_2 & 0xff;
    if (uVar5 < 2) {
      uVar7 = (int)uVar2 - 1 & uVar3;
    }
    else {
      uVar7 = uVar3;
      if (uVar2 <= uVar3) {
        uVar7 = 0;
        if (uVar2 != 0) {
          uVar7 = uVar3 / uVar2;
        }
        uVar7 = uVar3 - uVar7 * uVar2;
      }
    }
    plVar6 = (long *)(param_1 + 0x70);
    plVar4 = *(long **)(*plVar6 + uVar7 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      param_2 = param_2 & 0xff;
      if (1 < uVar5) {
        do {
          uVar8 = plVar4[1];
          if (uVar8 == uVar3) {
            if (*(ushort *)(plVar4 + 2) == param_2) goto LAB_011b7224;
          }
          else {
            if (uVar2 <= uVar8) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar8 / uVar2;
              }
              uVar8 = uVar8 - uVar1 * uVar2;
            }
            if (uVar8 != uVar7) {
              return (long *)0x0;
            }
          }
          plVar4 = (long *)*plVar4;
          param_1 = 0;
          if (plVar4 == (long *)0x0) {
            return (long *)0x0;
          }
        } while( true );
      }
      do {
        if (plVar4[1] == uVar3) {
          if (*(ushort *)(plVar4 + 2) == param_2) goto LAB_011b7224;
        }
        else if ((plVar4[1] & uVar2 - 1) != uVar7) {
          return (long *)0x0;
        }
        plVar4 = (long *)*plVar4;
        param_1 = 0;
        if (plVar4 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
LAB_011b7224:
  if (uVar5 < 2) {
    uVar7 = (int)uVar2 - 1 & uVar3;
  }
  else {
    uVar7 = uVar3;
    if (uVar2 <= uVar3) {
      uVar7 = 0;
      if (uVar2 != 0) {
        uVar7 = uVar3 / uVar2;
      }
      uVar7 = uVar3 - uVar7 * uVar2;
    }
  }
  plVar6 = *(long **)(*plVar6 + uVar7 * 8);
  if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
    if (uVar5 < 2) {
      do {
        if (plVar6[1] == uVar3) {
          if (*(ushort *)(plVar6 + 2) == param_2) {
LAB_011b7264:
            return plVar6 + 3;
          }
        }
        else if ((plVar6[1] & uVar2 - 1) != uVar7) break;
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
    else {
      do {
        uVar5 = plVar6[1];
        if (uVar5 == uVar3) {
          if (*(ushort *)(plVar6 + 2) == param_2) goto LAB_011b7264;
        }
        else {
          if (uVar2 <= uVar5) {
            uVar8 = 0;
            if (uVar2 != 0) {
              uVar8 = uVar5 / uVar2;
            }
            uVar5 = uVar5 - uVar8 * uVar2;
          }
          if (uVar5 != uVar7) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0210c120(param_1);
}


