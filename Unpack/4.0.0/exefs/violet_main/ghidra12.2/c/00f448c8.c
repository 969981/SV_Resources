/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f448c8; name: FUN_00f448c8
 */


bool FUN_00f448c8(long param_1,uint param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x90));
  uVar3 = *(ulong *)(param_1 + 0x30);
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar7 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar4 = (ulong)param_2;
    if (uVar7 < 2) {
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
    plVar6 = *(long **)(*(long *)(param_1 + 0x28) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar6[1] == uVar4) {
            if (*(uint *)(plVar6 + 2) == param_2) goto LAB_00f44970;
          }
          else if ((plVar6[1] & uVar3 - 1) != uVar5) goto LAB_00f449d0;
          plVar6 = (long *)*plVar6;
          bVar2 = false;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar6[1];
          if (uVar7 == uVar4) {
            if (*(uint *)(plVar6 + 2) == param_2) goto LAB_00f44970;
          }
          else {
            if (uVar3 <= uVar7) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar7 / uVar3;
              }
              uVar7 = uVar7 - uVar1 * uVar3;
            }
            if (uVar7 != uVar5) goto LAB_00f449d0;
          }
          plVar6 = (long *)*plVar6;
          bVar2 = false;
        } while (plVar6 != (long *)0x0);
      }
      goto LAB_00f44980;
    }
  }
LAB_00f449d0:
  bVar2 = false;
  goto LAB_00f44980;
LAB_00f44970:
  bVar2 = *(int *)(plVar6[3] + 0x100) == 5;
LAB_00f44980:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x90));
  return bVar2;
}


