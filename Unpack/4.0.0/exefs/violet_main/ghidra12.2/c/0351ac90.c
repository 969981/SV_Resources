/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351ac90; name: FUN_0351ac90
 */


int FUN_0351ac90(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  MutexType *pMVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  puVar4 = PTR_DAT_047e6f28;
  plVar10 = *(long **)(param_1 + 0x128);
  if ((plVar10 != (long *)0x0) && ((int)plVar10[1] != 0)) {
    lVar11 = *plVar10;
    do {
      pMVar6 = *(MutexType **)puVar4;
      uVar1 = *(uint *)(lVar11 + 4);
      nn::os::LockMutex(pMVar6);
      uVar2 = *(uint *)(pMVar6 + 0x28);
      if (uVar2 == 0) {
LAB_0351ad78:
        nn::os::UnlockMutex(pMVar6);
        iVar5 = 2;
LAB_0351ad84:
        lVar7 = *plVar10;
        do {
          if (lVar7 == lVar11) {
            return iVar5;
          }
          pMVar6 = *(MutexType **)puVar4;
          uVar1 = *(uint *)(lVar7 + 4);
          nn::os::LockMutex(pMVar6);
          uVar2 = *(uint *)(pMVar6 + 0x28);
          if (uVar2 != 0) {
            uVar3 = 0;
            if (uVar2 != 0) {
              uVar3 = uVar1 / uVar2;
            }
            for (lVar9 = *(long *)(*(long *)(pMVar6 + 0x20) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
                lVar9 != 0; lVar9 = *(long *)(lVar9 + 8)) {
              if (*(uint *)(lVar9 + 0x10) == uVar1) {
                *(int *)(lVar9 + 0x14) = *(int *)(lVar9 + 0x14) + 1;
                nn::os::UnlockMutex(pMVar6);
                plVar10 = (long *)(lVar9 + -8);
                (**(code **)(*plVar10 + 0x140))(plVar10);
                (**(code **)(*plVar10 + 0x30))(plVar10);
                (**(code **)(*plVar10 + 0x30))(plVar10);
                goto LAB_0351add8;
              }
            }
          }
          nn::os::UnlockMutex(pMVar6);
LAB_0351add8:
          lVar7 = lVar7 + 0x18;
        } while( true );
      }
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      lVar7 = *(long *)(*(long *)(pMVar6 + 0x20) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
      while( true ) {
        if (lVar7 == 0) goto LAB_0351ad78;
        if (*(uint *)(lVar7 + 0x10) == uVar1) break;
        lVar7 = *(long *)(lVar7 + 8);
      }
      *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
      nn::os::UnlockMutex(pMVar6);
      plVar8 = (long *)(lVar7 + -8);
      iVar5 = (**(code **)(*plVar8 + 0x138))(plVar8);
      if (iVar5 != 1) {
        (**(code **)(*plVar8 + 0x30))(plVar8);
        goto LAB_0351ad84;
      }
      lVar11 = lVar11 + 0x18;
    } while (lVar11 != *plVar10 + (ulong)*(uint *)(plVar10 + 1) * 0x18);
  }
  return 1;
}


