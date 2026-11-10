/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0347a698; name: FUN_0347a698
 */


undefined8 FUN_0347a698(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  MutexType *pMVar7;
  
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    puVar4 = PTR_DAT_047e2fe8;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    FUN_03453e68(*(undefined8 *)puVar4,*(undefined4 *)(param_1 + 0x6c));
    uVar1 = *(uint *)(param_1 + 0x78);
    if (uVar1 != 0) {
      pMVar7 = *(MutexType **)PTR_DAT_047e6f28;
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
            (**(code **)(*plVar6 + 0xb8))
                      (plVar6,*(undefined8 *)(param_1 + 0x50),plVar6,*(undefined4 *)(param_1 + 0x6c)
                      );
            (**(code **)(*plVar6 + 0x30))(plVar6);
            return 1;
          }
        }
      }
      nn::os::UnlockMutex(pMVar7);
    }
  }
  return 1;
}


