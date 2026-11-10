/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03468598; name: FUN_03468598
 */


void FUN_03468598(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  
  lVar3 = *(long *)PTR_DAT_047e6f28;
  nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
  nn::os::LockMutex((MutexType *)(lVar3 + 0xa8));
  if (*(int *)(lVar3 + 0xd0) != 0) {
    plVar2 = (long *)**(undefined8 **)(lVar3 + 200);
    if (plVar2 == (long *)0x0) {
      uVar5 = 0;
      do {
        if (*(int *)(lVar3 + 0xd0) - 1 == uVar5) goto LAB_034686d4;
        uVar5 = uVar5 + 1;
        plVar2 = (long *)(*(undefined8 **)(lVar3 + 200))[uVar5 & 0xffffffff];
      } while (plVar2 == (long *)0x0);
    }
    else {
      uVar5 = 0;
    }
    do {
      uVar4 = (uint)uVar5;
      if ((int)plVar2[4] == 0) {
        plVar7 = (long *)plVar2[1];
        if (plVar7 == (long *)0x0) {
          do {
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulong)uVar4;
            if (*(uint *)(lVar3 + 0xd0) <= uVar4) goto LAB_034686d4;
            plVar7 = *(long **)(*(long *)(lVar3 + 200) + (ulong)uVar4 * 8);
          } while (plVar7 == (long *)0x0);
        }
      }
      else {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        if ((int)plVar2[4] != 0) {
          *(undefined4 *)(plVar2 + 4) = 0;
          FUN_034683a8(param_1,plVar2);
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
        plVar7 = (long *)plVar2[1];
        if (plVar7 == (long *)0x0) {
          uVar1 = *(uint *)(lVar3 + 0xd0);
          uVar6 = uVar1;
          if (uVar1 <= uVar4 + 1) {
            uVar6 = uVar4 + 1;
          }
          do {
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulong)uVar4;
            if (uVar1 <= uVar4) {
              plVar7 = (long *)0x0;
              goto LAB_03468684;
            }
            plVar7 = *(long **)(*(long *)(lVar3 + 200) + (ulong)uVar4 * 8);
          } while (plVar7 == (long *)0x0);
        }
        uVar6 = uVar4;
LAB_03468684:
        (**(code **)(*plVar2 + 0x18))(plVar2);
        uVar5 = (ulong)uVar6;
      }
      plVar2 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
LAB_034686d4:
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0xa8));
  nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
  return;
}


