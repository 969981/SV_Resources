/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0228ad1c; name: FUN_0228ad1c
 */


undefined8 FUN_0228ad1c(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar2 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar3 = *param_2;
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      uVar5 = uVar4 - 1 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar4 <= uVar3) {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = uVar3 / uVar4;
        }
        uVar5 = uVar3 - uVar5 * uVar4;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (1 < uVar2) {
        do {
          uVar2 = plVar6[1];
          if (uVar2 == uVar3) {
            if (plVar6[2] == uVar3) goto LAB_0228ae0c;
          }
          else {
            if (uVar4 <= uVar2) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar2 / uVar4;
              }
              uVar2 = uVar2 - uVar1 * uVar4;
            }
            if (uVar2 != uVar5) {
              return 0;
            }
          }
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        if (plVar6[1] == uVar3) {
          if (plVar6[2] == uVar3) {
LAB_0228ae0c:
            FUN_0228af3c();
            return 1;
          }
        }
        else if ((plVar6[1] & uVar4 - 1) != uVar5) {
          return 0;
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


