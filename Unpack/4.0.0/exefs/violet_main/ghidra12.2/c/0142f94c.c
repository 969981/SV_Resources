/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0142f94c; name: FUN_0142f94c
 */


void FUN_0142f94c(long param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  uint local_14;
  
  uVar6 = (ulong)param_2;
  local_14 = param_2;
  nn::os::LockMutex((MutexType *)(param_1 + 0x148));
  uVar2 = *(ulong *)(param_1 + 0xe8);
  if (uVar2 != 0) {
    uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      uVar4 = (ulong)((int)uVar2 - 1U & param_2);
    }
    else {
      uVar4 = uVar6;
      if (uVar2 <= uVar6) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar6 / uVar2;
        }
        uVar4 = uVar6 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0xe0) + uVar4 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar3 < 2) {
        do {
          if (plVar5[1] == uVar6) {
            if (*(uint *)(plVar5 + 2) == param_2) goto LAB_0142fa04;
          }
          else if ((plVar5[1] & uVar2 - 1) != uVar4) break;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar3 = plVar5[1];
          if (uVar3 == uVar6) {
            if (*(uint *)(plVar5 + 2) == param_2) goto LAB_0142fa04;
          }
          else {
            if (uVar2 <= uVar3) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar3 / uVar2;
              }
              uVar3 = uVar3 - uVar1 * uVar2;
            }
            if (uVar3 != uVar4) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
LAB_0142fa14:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x148));
  return;
LAB_0142fa04:
  FUN_0142fa94();
  FUN_0142fd14(param_1 + 0x170,&local_14);
  goto LAB_0142fa14;
}


