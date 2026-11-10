/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00da5ff8; name: FUN_00da5ff8
 */


long * FUN_00da5ff8(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong uVar3;
  ulong extraout_x9;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong extraout_x12;
  
  uVar3 = param_1[1];
  if (uVar3 == 0) goto LAB_00da60fc;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar2 = *param_2;
  uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar4 < 2) {
    uVar5 = uVar3 - 1 & uVar2;
  }
  else {
    if (uVar2 < uVar3) goto LAB_00da6100;
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar2 / uVar3;
    }
    uVar5 = uVar2 - uVar5 * uVar3;
  }
  do {
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar6[1] == uVar2) {
            if (plVar6[2] == uVar2) {
LAB_00da609c:
              return plVar6 + 6;
            }
          }
          else if ((plVar6[1] & uVar3 - 1) != uVar5) break;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar6[1];
          if (uVar4 == uVar2) {
            if (plVar6[2] == uVar2) goto LAB_00da609c;
          }
          else {
            if (uVar3 <= uVar4) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar4 / uVar3;
              }
              uVar4 = uVar4 - uVar1 * uVar3;
            }
            if (uVar4 != uVar5) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
LAB_00da60fc:
    param_1 = (long *)FUN_029ef390();
    uVar2 = extraout_x8;
    uVar3 = extraout_x9;
    uVar4 = extraout_x12;
LAB_00da6100:
    uVar5 = uVar2;
  } while( true );
}


