/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a6bbc; name: FUN_010a6bbc
 */


long * FUN_010a6bbc(long *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong extraout_x8;
  ulong uVar4;
  ulong extraout_x9;
  ulong uVar5;
  ulong uVar6;
  ulong extraout_x10;
  long *plVar7;
  long *extraout_x11;
  ulong extraout_x12;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar1 = *param_2;
    uVar3 = (ulong)uVar1;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = (ulong)((int)uVar4 - 1U & uVar1);
    }
    else {
      uVar6 = uVar3;
      if (uVar4 <= uVar3) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar3 / uVar4;
        }
        uVar6 = uVar3 - uVar6 * uVar4;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (1 < uVar5) goto LAB_010a6c44;
      do {
        if (plVar7[1] == uVar3) {
          if (*(uint *)(plVar7 + 2) == uVar1) {
LAB_010a6c5c:
            return plVar7 + 3;
          }
        }
        else if ((plVar7[1] & uVar4 - 1) != uVar6) break;
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
LAB_010a6cb8:
  FUN_0298ddb0();
  uVar3 = extraout_x8;
  uVar4 = extraout_x9;
  uVar6 = extraout_x10;
  plVar7 = extraout_x11;
  uVar5 = extraout_x12;
  do {
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = uVar5 / uVar4;
    }
    uVar5 = uVar5 - uVar2 * uVar4;
    do {
      if (uVar5 != uVar6) goto LAB_010a6cb8;
      while( true ) {
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_010a6cb8;
LAB_010a6c44:
        uVar5 = plVar7[1];
        if (uVar5 != uVar3) break;
        if ((int)plVar7[2] == (int)uVar3) goto LAB_010a6c5c;
      }
    } while (uVar5 < uVar4);
  } while( true );
}


