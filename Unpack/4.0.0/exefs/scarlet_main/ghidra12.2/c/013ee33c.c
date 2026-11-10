/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013ee33c; name: FUN_013ee33c
 */


void FUN_013ee33c(long *param_1,uint param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xd));
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar6 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar4 = (ulong)param_2;
    if (uVar6 < 2) {
      uVar5 = (ulong)((int)uVar3 - 1U & param_2);
    }
    else {
      uVar5 = uVar4;
      if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar5 = uVar4 - uVar5 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar5 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar7[1] == uVar4) {
            if (*(uint *)(plVar7 + 2) == param_2) goto LAB_013ee3e4;
          }
          else if ((plVar7[1] & uVar3 - 1) != uVar5) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar7[1];
          if (uVar6 == uVar4) {
            if (*(uint *)(plVar7 + 2) == param_2) goto LAB_013ee3e4;
          }
          else {
            if (uVar3 <= uVar6) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar6 / uVar3;
              }
              uVar6 = uVar6 - uVar1 * uVar3;
            }
            if (uVar6 != uVar5) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
LAB_013ee3f4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xd));
  return;
LAB_013ee3e4:
  pcVar2 = (code *)plVar7[9];
  if (pcVar2 != (code *)0x0) {
    plVar7[10] = 0;
    plVar7[0xb] = 0;
    plVar7[8] = 0;
    plVar7[9] = 0;
    (*pcVar2)(plVar7 + 0xc);
  }
  pcVar2 = (code *)plVar7[0x19];
  if (pcVar2 != (code *)0x0) {
    plVar7[0x1a] = 0;
    plVar7[0x1b] = 0;
    plVar7[0x18] = 0;
    plVar7[0x19] = 0;
    (*pcVar2)(plVar7 + 0x1c);
  }
  goto LAB_013ee3f4;
}


