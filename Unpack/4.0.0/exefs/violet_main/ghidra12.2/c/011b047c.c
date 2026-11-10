/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b047c; name: FUN_011b047c
 */


long * FUN_011b047c(long param_1,uint param_2)

{
  ulong uVar1;
  uint extraout_w1;
  ulong extraout_x8;
  ulong uVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong uVar4;
  ulong extraout_x10;
  long *plVar5;
  long *extraout_x11;
  ulong uVar6;
  ulong extraout_x12;
  
  if (((param_2 & 0xffff) != 0x3f3) || ((param_2 & 0xfffc0000) != 0x40000)) {
    plVar5 = (long *)FUN_01e26330(*(undefined8 *)(param_1 + 0x68));
    return plVar5;
  }
  uVar2 = *(ulong *)(param_1 + 0x78);
  if (uVar2 != 0) {
    uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar6 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar3 = (ulong)(param_2 >> 0x10);
    if (uVar6 < 2) {
      uVar4 = (ulong)((int)uVar2 - 1U & param_2 >> 0x10);
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
    plVar5 = *(long **)(*(long *)(param_1 + 0x70) + uVar4 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (1 < uVar6) goto LAB_011b057c;
      do {
        if (plVar5[1] == uVar3) {
          if ((uint)*(ushort *)(plVar5 + 2) == param_2 >> 0x10) {
LAB_011b0594:
            return plVar5 + 3;
          }
        }
        else if ((plVar5[1] & uVar2 - 1) != uVar4) break;
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
LAB_011b0558:
  do {
    FUN_01e26550();
    param_2 = extraout_w1;
    uVar3 = extraout_x8;
    uVar2 = extraout_x9;
    uVar4 = extraout_x10;
    plVar5 = extraout_x11;
    uVar6 = extraout_x12;
    while( true ) {
      if (uVar2 <= uVar6) {
        uVar1 = 0;
        if (uVar2 != 0) {
          uVar1 = uVar6 / uVar2;
        }
        uVar6 = uVar6 - uVar1 * uVar2;
      }
      if (uVar6 != uVar4) break;
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_011b0558;
LAB_011b057c:
        uVar6 = plVar5[1];
        if (uVar6 != uVar3) break;
        if ((uint)*(ushort *)(plVar5 + 2) == param_2 >> 0x10) goto LAB_011b0594;
      }
    }
  } while( true );
}


