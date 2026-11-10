/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01991440; name: FUN_01991440
 */


void FUN_01991440(long param_1,uint param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  char local_60 [8];
  undefined1 auStack_58 [24];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x90));
  uVar2 = *(ulong *)(param_1 + 0x30);
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
    plVar5 = *(long **)(*(long *)(param_1 + 0x28) + uVar4 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar5[1] == uVar3) {
            if (*(uint *)(plVar5 + 2) == param_2) goto LAB_019914f4;
          }
          else if ((plVar5[1] & uVar2 - 1) != uVar4) break;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar5[1];
          if (uVar6 == uVar3) {
            if (*(uint *)(plVar5 + 2) == param_2) goto LAB_019914f4;
          }
          else {
            if (uVar2 <= uVar6) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar6 / uVar2;
              }
              uVar6 = uVar6 - uVar1 * uVar2;
            }
            if (uVar6 != uVar4) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
LAB_01991524:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x90));
  return;
LAB_019914f4:
  lVar7 = plVar5[3];
  FUN_01991340(local_60,param_3);
  FUN_019915c4(lVar7,param_1 + 0xb8,local_60);
  if (local_60[0] != '\0') {
    FUN_00d8e444(auStack_58);
    local_60[0] = '\0';
  }
  goto LAB_01991524;
}


