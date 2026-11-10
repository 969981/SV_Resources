/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034683a8; name: FUN_034683a8
 */


void FUN_034683a8(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  uint *puVar8;
  long *plVar9;
  MutexType *pMVar10;
  long lVar11;
  
  puVar6 = PTR_DAT_047e70e0;
  puVar5 = PTR_DAT_047e6f28;
  lVar11 = *(long *)(param_2 + 0x18);
joined_r0x034683c8:
  do {
    lVar4 = lVar11;
    if (lVar4 == 0) {
      return;
    }
    lVar11 = *(long *)(lVar4 + 0x18);
    if (*(short *)(lVar4 + 0x34) == 0x2103) goto LAB_03468494;
  } while (*(short *)(lVar4 + 0x34) != 0x403);
  pMVar10 = *(MutexType **)puVar5;
  uVar1 = *(uint *)(lVar4 + 0x30);
  nn::os::LockMutex(pMVar10);
  uVar2 = *(uint *)(pMVar10 + 0x28);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    for (lVar7 = *(long *)(*(long *)(pMVar10 + 0x20) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
        lVar7 != 0; lVar7 = *(long *)(lVar7 + 8)) {
      if (*(uint *)(lVar7 + 0x10) == uVar1) {
        *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar10);
        plVar9 = (long *)(lVar7 + -8);
        (**(code **)(*plVar9 + 0x140))(plVar9);
        (**(code **)(*plVar9 + 0x30))(plVar9);
        (**(code **)(*plVar9 + 0x30))(plVar9);
        goto LAB_03468448;
      }
    }
  }
  nn::os::UnlockMutex(pMVar10);
LAB_03468448:
  uVar1 = *(uint *)(lVar4 + 0x38);
  nn::os::LockMutex((MutexType *)puVar6);
  uVar2 = *(uint *)(param_1 + 0xb0);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    for (puVar8 = *(uint **)(*(long *)(param_1 + 0xa8) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
        puVar8 != (uint *)0x0; puVar8 = *(uint **)(puVar8 + 4)) {
      if ((*puVar8 == uVar1) && (*(long *)(puVar8 + 2) == 0)) {
        nn::os::UnlockMutex((MutexType *)puVar6);
        FUN_034607d0(puVar8,0);
        goto joined_r0x034683c8;
      }
    }
  }
  pMVar10 = (MutexType *)puVar6;
  goto LAB_034684dc;
LAB_03468494:
  lVar7 = *(long *)puVar5;
  pMVar10 = (MutexType *)(lVar7 + 0xa8);
  uVar1 = *(uint *)(lVar4 + 0x30);
  nn::os::LockMutex(pMVar10);
  uVar2 = *(uint *)(lVar7 + 0xd0);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    for (plVar9 = *(long **)(*(long *)(lVar7 + 200) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
        plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
      if (*(uint *)(plVar9 + 2) == uVar1) {
        *(int *)((long)plVar9 + 0x14) = *(int *)((long)plVar9 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar10);
        FUN_034683a8(param_1,plVar9);
        (**(code **)(*plVar9 + 0x18))(plVar9);
        goto joined_r0x034683c8;
      }
    }
  }
LAB_034684dc:
  nn::os::UnlockMutex(pMVar10);
  goto joined_r0x034683c8;
}


