/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c1add0; name: FUN_00c1add0
 */


long * FUN_00c1add0(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = FUN_00c1aa00(param_2);
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar3 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      uVar5 = uVar6 - 1 & uVar2;
    }
    else {
      uVar5 = uVar2;
      if (uVar6 <= uVar2) {
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = uVar2 / uVar6;
        }
        uVar5 = uVar2 - uVar5 * uVar6;
      }
    }
    plVar4 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        return (long *)0x0;
      }
      if (uVar3 < 2) {
        do {
          if (plVar4[1] == uVar2) {
            uVar3 = FUN_00c19624(plVar4 + 2,param_2);
            if ((uVar3 & 1) != 0) {
              return plVar4;
            }
          }
          else if ((plVar4[1] & uVar6 - 1) != uVar5) {
            return (long *)0x0;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
        return (long *)0x0;
      }
      do {
        uVar3 = plVar4[1];
        if (uVar3 == uVar2) {
          uVar3 = FUN_00c19624(plVar4 + 2,param_2);
          if ((uVar3 & 1) != 0) {
            return plVar4;
          }
        }
        else {
          if (uVar6 <= uVar3) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar3 / uVar6;
            }
            uVar3 = uVar3 - uVar1 * uVar6;
          }
          if (uVar3 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}


