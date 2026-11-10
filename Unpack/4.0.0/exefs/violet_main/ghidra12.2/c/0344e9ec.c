/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0344e9ec; name: FUN_0344e9ec
 */


void FUN_0344e9ec(MutexType *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  nn::os::LockMutex(param_1);
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar6 = **(long **)(param_1 + 0x20);
    if (lVar6 == 0) {
      uVar5 = 0;
      do {
        if (*(int *)(param_1 + 0x28) - 1 == uVar5) goto LAB_0344ea9c;
        uVar5 = uVar5 + 1;
        lVar6 = (*(long **)(param_1 + 0x20))[uVar5 & 0xffffffff];
      } while (lVar6 == 0);
    }
    else {
      uVar5 = 0;
    }
LAB_0344ea3c:
    do {
      lVar7 = *(long *)(lVar6 + 8);
      if (lVar7 == 0) {
        uVar3 = *(uint *)(param_1 + 0x28);
        uVar2 = uVar3;
        if (uVar3 <= (int)uVar5 + 1U) {
          uVar2 = (int)uVar5 + 1;
        }
        do {
          uVar1 = (int)uVar5 + 1;
          uVar5 = (ulong)uVar1;
          if (uVar3 <= uVar1) {
            lVar7 = 0;
            uVar5 = (ulong)uVar2;
            break;
          }
          lVar7 = *(long *)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 8);
        } while (lVar7 == 0);
      }
      if (-1 < *(int *)(lVar6 + 0x10)) {
        lVar6 = lVar7;
        if (lVar7 == 0) break;
        goto LAB_0344ea3c;
      }
      (**(code **)(*(long *)(lVar6 + -8) + 0x30))();
      lVar6 = lVar7;
    } while (lVar7 != 0);
  }
LAB_0344ea9c:
  nn::os::UnlockMutex(param_1);
  if (*(int *)(param_1 + 0x290) != 0) {
    plVar4 = (long *)**(long **)(param_1 + 0x288);
    if (plVar4 == (long *)0x0) {
      uVar5 = 0;
      do {
        if (*(int *)(param_1 + 0x290) - 1 == uVar5) {
          return;
        }
        uVar5 = uVar5 + 1;
        plVar4 = (long *)(*(long **)(param_1 + 0x288))[uVar5 & 0xffffffff];
      } while (plVar4 == (long *)0x0);
    }
    else {
      uVar5 = 0;
    }
    do {
      plVar8 = (long *)plVar4[1];
      if (plVar8 == (long *)0x0) {
        uVar3 = *(uint *)(param_1 + 0x290);
        uVar2 = uVar3;
        if (uVar3 <= (int)uVar5 + 1U) {
          uVar2 = (int)uVar5 + 1;
        }
        do {
          uVar1 = (int)uVar5 + 1;
          uVar5 = (ulong)uVar1;
          if (uVar3 <= uVar1) {
            plVar8 = (long *)0x0;
            uVar5 = (ulong)uVar2;
            break;
          }
          plVar8 = *(long **)(*(long *)(param_1 + 0x288) + (ulong)uVar1 * 8);
        } while (plVar8 == (long *)0x0);
      }
      if ((int)plVar4[2] < 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
      plVar4 = plVar8;
    } while (plVar8 != (long *)0x0);
  }
  return;
}


