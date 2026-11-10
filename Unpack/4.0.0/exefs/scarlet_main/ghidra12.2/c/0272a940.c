/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0272a940; name: FUN_0272a940
 */


undefined8 FUN_0272a940(long *param_1,void *param_2,ulong *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 != (void *)0x0) {
    uVar4 = ((long *)param_1[1])[1];
    if (uVar4 != 0) {
      uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
      uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
      uVar3 = *param_3;
      uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar5 < 2) {
        uVar6 = uVar4 - 1 & uVar3;
      }
      else if (uVar3 < uVar4) {
        uVar6 = uVar3;
      }
      else {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar3 / uVar4;
        }
        uVar6 = uVar3 - uVar6 * uVar4;
      }
      plVar2 = *(long **)(*(long *)param_1[1] + uVar6 * 8);
      if (plVar2 == (long *)0x0) {
        return 0;
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        if (uVar5 < 2) {
          do {
            if (plVar2[1] == uVar3) {
              if (plVar2[2] == uVar3) goto LAB_0272aa4c;
            }
            else if ((plVar2[1] & uVar4 - 1) != uVar6) {
              return 0;
            }
            plVar2 = (long *)*plVar2;
            if (plVar2 == (long *)0x0) {
              return 0;
            }
          } while( true );
        }
        do {
          uVar5 = plVar2[1];
          if (uVar5 == uVar3) {
            if (plVar2[2] == uVar3) {
LAB_0272aa4c:
              memcpy(param_2,(void *)(*param_1 + (ulong)*(uint *)(plVar2 + 3) * 0x40 + 0x7c),0x40);
              return 1;
            }
          }
          else {
            if (uVar4 <= uVar5) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar5 / uVar4;
              }
              uVar5 = uVar5 - uVar1 * uVar4;
            }
            if (uVar5 != uVar6) {
              return 0;
            }
          }
          plVar2 = (long *)*plVar2;
          if (plVar2 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
}


