/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0351ae3c; name: FUN_0351ae3c
 */


void FUN_0351ae3c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  MutexType *pMVar7;
  long *plVar8;
  long lVar9;
  
  puVar4 = PTR_DAT_047e6f28;
  plVar8 = *(long **)(param_1 + 0x128);
  if ((plVar8 != (long *)0x0) && ((int)plVar8[1] != 0)) {
    lVar9 = *plVar8;
    do {
      pMVar7 = *(MutexType **)puVar4;
      uVar1 = *(uint *)(lVar9 + 4);
      nn::os::LockMutex(pMVar7);
      uVar2 = *(uint *)(pMVar7 + 0x28);
      if (uVar2 != 0) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar1 / uVar2;
        }
        for (lVar5 = *(long *)(*(long *)(pMVar7 + 0x20) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
            lVar5 != 0; lVar5 = *(long *)(lVar5 + 8)) {
          if (*(uint *)(lVar5 + 0x10) == uVar1) {
            *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar7);
            plVar6 = (long *)(lVar5 + -8);
            (**(code **)(*plVar6 + 0x140))(plVar6);
            (**(code **)(*plVar6 + 0x30))(plVar6);
            (**(code **)(*plVar6 + 0x30))(plVar6);
            goto LAB_0351aebc;
          }
        }
      }
      nn::os::UnlockMutex(pMVar7);
LAB_0351aebc:
      lVar9 = lVar9 + 0x18;
    } while (lVar9 != *plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x18);
  }
  return;
}


