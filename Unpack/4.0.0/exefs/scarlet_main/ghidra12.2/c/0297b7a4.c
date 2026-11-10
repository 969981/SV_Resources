/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297b7a4; name: FUN_0297b7a4
 */


bool FUN_0297b7a4(long param_1,uint param_2)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  uint local_14;
  
  uVar5 = *(ulong *)(param_1 + 0x2f8);
  if (uVar5 != 0) {
    uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar4 = (ulong)param_2;
    if (uVar3 < 2) {
      uVar6 = (ulong)((int)uVar5 - 1U & param_2);
    }
    else {
      uVar6 = uVar4;
      if (uVar5 <= uVar4) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar4 / uVar5;
        }
        uVar6 = uVar4 - uVar6 * uVar5;
      }
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0x2f0) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar3 < 2) {
        do {
          if (plVar7[1] == uVar4) {
            if (*(uint *)(plVar7 + 2) == param_2) goto LAB_0297b8b8;
          }
          else if ((plVar7[1] & uVar5 - 1) != uVar6) {
            return false;
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return false;
          }
        } while( true );
      }
      do {
        uVar3 = plVar7[1];
        if (uVar3 == uVar4) {
          if (*(uint *)(plVar7 + 2) == param_2) {
LAB_0297b8b8:
            local_14 = param_2;
            pcVar2 = (char *)FUN_0297b8e0((long *)(param_1 + 0x2f0),&local_14);
            return *pcVar2 != '\0';
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
          if (uVar3 != uVar6) {
            return false;
          }
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return false;
        }
      } while( true );
    }
  }
  return false;
}


