/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0352e2a4; name: FUN_0352e2a4
 */


void FUN_0352e2a4(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  MutexType *pMVar9;
  ulong uVar10;
  
  puVar4 = PTR_DAT_047e6f28;
  uVar5 = (ulong)*(uint *)(param_1 + 0x138);
  if (*(uint *)(param_1 + 0x138) != 0) {
    uVar10 = 0;
    do {
      puVar6 = *(uint **)(*(long *)(param_1 + 0x130) + uVar10 * 0x60 + 0x50);
      if (puVar6 != (uint *)0x0) {
        pMVar9 = *(MutexType **)puVar4;
        uVar1 = *puVar6;
        nn::os::LockMutex(pMVar9);
        uVar2 = *(uint *)(pMVar9 + 0x28);
        if (uVar2 != 0) {
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = uVar1 / uVar2;
          }
          for (lVar7 = *(long *)(*(long *)(pMVar9 + 0x20) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
              lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
            if (*(uint *)(lVar7 + 0x10) == uVar1) {
              *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
              nn::os::UnlockMutex(pMVar9);
              plVar8 = (long *)(lVar7 + -8);
              (**(code **)(*plVar8 + 0x140))(plVar8);
              (**(code **)(*plVar8 + 0x30))(plVar8);
              (**(code **)(*plVar8 + 0x30))(plVar8);
              goto LAB_0352e330;
            }
          }
        }
        nn::os::UnlockMutex(pMVar9);
LAB_0352e330:
        uVar5 = (ulong)*(uint *)(param_1 + 0x138);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar5);
  }
  FUN_0351ae3c(param_1);
  return;
}


