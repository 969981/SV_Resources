/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0352e0b0; name: FUN_0352e0b0
 */


int FUN_0352e0b0(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  MutexType *pMVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  
  iVar4 = FUN_0351ac90();
  puVar3 = PTR_DAT_047e6f28;
  if (iVar4 == 1) {
    uVar5 = *(uint *)(param_1 + 0x138);
    if (uVar5 == 0) {
      iVar4 = 1;
    }
    else {
      uVar10 = 0;
      do {
        puVar6 = *(uint **)(*(long *)(param_1 + 0x130) + uVar10 * 0x60 + 0x50);
        if (puVar6 != (uint *)0x0) {
          pMVar7 = *(MutexType **)puVar3;
          uVar5 = *puVar6;
          nn::os::LockMutex(pMVar7);
          uVar1 = *(uint *)(pMVar7 + 0x28);
          if (uVar1 == 0) {
LAB_0352e190:
            nn::os::UnlockMutex(pMVar7);
            iVar4 = 2;
joined_r0x0352e278:
            if ((int)uVar10 != 0) {
              uVar11 = 0;
              do {
                puVar6 = *(uint **)(*(long *)(param_1 + 0x130) + uVar11 * 0x60 + 0x50);
                if (puVar6 != (uint *)0x0) {
                  pMVar7 = *(MutexType **)puVar3;
                  uVar5 = *puVar6;
                  nn::os::LockMutex(pMVar7);
                  uVar1 = *(uint *)(pMVar7 + 0x28);
                  if (uVar1 != 0) {
                    uVar2 = 0;
                    if (uVar1 != 0) {
                      uVar2 = uVar5 / uVar1;
                    }
                    for (lVar8 = *(long *)(*(long *)(pMVar7 + 0x20) +
                                          (ulong)(uVar5 - uVar2 * uVar1) * 8); lVar8 != 0;
                        lVar8 = *(long *)(lVar8 + 8)) {
                      if (*(uint *)(lVar8 + 0x10) == uVar5) {
                        *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
                        nn::os::UnlockMutex(pMVar7);
                        plVar9 = (long *)(lVar8 + -8);
                        (**(code **)(*plVar9 + 0x140))(plVar9);
                        (**(code **)(*plVar9 + 0x30))(plVar9);
                        (**(code **)(*plVar9 + 0x30))(plVar9);
                        goto LAB_0352e204;
                      }
                    }
                  }
                  nn::os::UnlockMutex(pMVar7);
                }
LAB_0352e204:
                uVar11 = uVar11 + 1;
              } while (uVar11 != (uVar10 & 0xffffffff));
            }
            FUN_0351ae3c(param_1);
            return iVar4;
          }
          uVar2 = 0;
          if (uVar1 != 0) {
            uVar2 = uVar5 / uVar1;
          }
          lVar8 = *(long *)(*(long *)(pMVar7 + 0x20) + (ulong)(uVar5 - uVar2 * uVar1) * 8);
          while( true ) {
            if (lVar8 == 0) goto LAB_0352e190;
            if (*(uint *)(lVar8 + 0x10) == uVar5) break;
            lVar8 = *(long *)(lVar8 + 8);
          }
          *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar7);
          plVar9 = (long *)(lVar8 + -8);
          iVar4 = (**(code **)(*plVar9 + 0x138))(plVar9);
          if (iVar4 != 1) {
            (**(code **)(*plVar9 + 0x30))(plVar9);
            goto joined_r0x0352e278;
          }
          uVar5 = *(uint *)(param_1 + 0x138);
        }
        uVar10 = uVar10 + 1;
        iVar4 = 1;
      } while (uVar10 < uVar5);
    }
  }
  return iVar4;
}


