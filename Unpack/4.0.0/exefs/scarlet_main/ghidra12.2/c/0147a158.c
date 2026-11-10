/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0147a158; name: FUN_0147a158
 */


void FUN_0147a158(long param_1,uint param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x148));
  uVar3 = *(ulong *)(param_1 + 0xe0);
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar7 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar4 = (ulong)param_2;
    if (uVar7 < 2) {
      uVar6 = (ulong)((int)uVar3 - 1U & param_2);
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0xd8) + uVar6 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar5[1] == uVar4) {
            if (*(uint *)(plVar5 + 2) == param_2) goto LAB_0147a284;
          }
          else if ((plVar5[1] & uVar3 - 1) != uVar6) break;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar5[1];
          if (uVar7 == uVar4) {
            if (*(uint *)(plVar5 + 2) == param_2) goto LAB_0147a284;
          }
          else {
            if (uVar3 <= uVar7) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar7 / uVar3;
              }
              uVar7 = uVar7 - uVar1 * uVar3;
            }
            if (uVar7 != uVar6) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
LAB_0147a22c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x148));
  return;
LAB_0147a284:
  pcVar2 = (code *)plVar5[9];
  if (pcVar2 != (code *)0x0) {
    plVar5[10] = 0;
    plVar5[0xb] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    (*pcVar2)(plVar5 + 0xc);
  }
  goto LAB_0147a22c;
}


