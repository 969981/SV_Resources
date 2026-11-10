/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02739258; name: FUN_02739258
 */


undefined8 FUN_02739258(long param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar3 = *(ulong *)(param_1 + 0xf0);
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar2 = *param_2;
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar5 = uVar3 - 1 & uVar2;
    }
    else if (uVar2 < uVar3) {
      uVar5 = uVar2;
    }
    else {
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = uVar2 / uVar3;
      }
      uVar5 = uVar2 - uVar5 * uVar3;
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0xe8) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar6[1] == uVar2) {
            if (plVar6[2] == uVar2) goto LAB_02739354;
          }
          else if ((plVar6[1] & uVar3 - 1) != uVar5) {
            return 0;
          }
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar4 = plVar6[1];
        if (uVar4 == uVar2) {
          if (plVar6[2] == uVar2) {
LAB_02739354:
            param_3[1] = plVar6[7];
            *param_3 = plVar6[6];
            return 1;
          }
        }
        else {
          if (uVar3 <= uVar4) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar4 / uVar3;
            }
            uVar4 = uVar4 - uVar1 * uVar3;
          }
          if (uVar4 != uVar5) {
            return 0;
          }
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


