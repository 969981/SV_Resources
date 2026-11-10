/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d9d318; name: FUN_00d9d318
 */


bool FUN_00d9d318(long *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xd));
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar6 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar3 = (ulong)param_2;
    if (uVar6 < 2) {
      uVar4 = (ulong)((int)uVar2 - 1U & param_2);
    }
    else {
      uVar4 = uVar3;
      if (uVar2 <= uVar3) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar3 / uVar2;
        }
        uVar4 = uVar3 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar4 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar5[1] == uVar3) {
            if (*(uint *)(plVar5 + 2) == param_2) goto LAB_00d9d404;
          }
          else if ((plVar5[1] & uVar2 - 1) != uVar4) goto LAB_00d9d394;
          plVar5 = (long *)*plVar5;
          plVar7 = (long *)0x0;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar5[1];
          if (uVar6 == uVar3) {
            if (*(uint *)(plVar5 + 2) == param_2) goto LAB_00d9d404;
          }
          else {
            if (uVar2 <= uVar6) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar6 / uVar2;
              }
              uVar6 = uVar6 - uVar1 * uVar2;
            }
            if (uVar6 != uVar4) goto LAB_00d9d394;
          }
          plVar5 = (long *)*plVar5;
          plVar7 = (long *)0x0;
        } while (plVar5 != (long *)0x0);
      }
      goto LAB_00d9d398;
    }
  }
LAB_00d9d394:
  plVar7 = (long *)0x0;
  goto LAB_00d9d398;
LAB_00d9d404:
  plVar7 = plVar5;
LAB_00d9d398:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xd));
  return plVar7 != (long *)0x0;
}


