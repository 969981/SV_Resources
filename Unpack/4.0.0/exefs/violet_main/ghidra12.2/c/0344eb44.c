/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0344eb44; name: FUN_0344eb44
 */


void FUN_0344eb44(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1c0));
  puVar4 = PTR_DAT_047e6f38;
  if (*(int *)(param_1 + 0x1e8) != 0) {
    plVar6 = (long *)**(undefined8 **)(param_1 + 0x1e0);
    if (plVar6 == (long *)0x0) {
      uVar8 = 0;
      do {
        if (*(int *)(param_1 + 0x1e8) - 1 == uVar8) goto LAB_0344ec70;
        uVar8 = uVar8 + 1;
        plVar6 = (long *)(*(undefined8 **)(param_1 + 0x1e0))[uVar8 & 0xffffffff];
      } while (plVar6 == (long *)0x0);
    }
    else {
      uVar8 = 0;
    }
    do {
      plVar9 = (long *)plVar6[1];
      if (plVar9 == (long *)0x0) {
        uVar3 = *(uint *)(param_1 + 0x1e8);
        uVar2 = uVar3;
        if (uVar3 <= (int)uVar8 + 1U) {
          uVar2 = (int)uVar8 + 1;
        }
        do {
          uVar1 = (int)uVar8 + 1;
          uVar8 = (ulong)uVar1;
          if (uVar3 <= uVar1) {
            plVar9 = (long *)0x0;
            uVar8 = (ulong)uVar2;
            break;
          }
          plVar9 = *(long **)(*(long *)(param_1 + 0x1e0) + (ulong)uVar1 * 8);
        } while (plVar9 == (long *)0x0);
      }
      plVar7 = *(long **)puVar4;
      uVar2 = *(uint *)((long)plVar6 + 0x6c);
      nn::os::LockMutex((MutexType *)(plVar7 + 3));
      uVar3 = *(uint *)(plVar7 + 1);
      if (uVar3 != 0) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar2 / uVar3;
        }
        for (lVar5 = *(long *)(*plVar7 + (ulong)(uVar2 - uVar1 * uVar3) * 8); lVar5 != 0;
            lVar5 = *(long *)(lVar5 + 0x70)) {
          if (*(uint *)(lVar5 + 0x54) == uVar2) {
            *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + -1;
            FUN_034b3448(plVar7,uVar2);
            goto LAB_0344ec38;
          }
        }
      }
      nn::os::UnlockMutex((MutexType *)(plVar7 + 3));
LAB_0344ec38:
      (**(code **)(*plVar6 + 0x18))(plVar6);
      plVar6 = plVar9;
    } while (plVar9 != (long *)0x0);
  }
LAB_0344ec70:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1c0));
  return;
}


