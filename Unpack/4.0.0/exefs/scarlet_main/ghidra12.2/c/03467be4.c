/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03467be4; name: FUN_03467be4
 */


undefined8 FUN_03467be4(undefined8 param_1,uint param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = *(long *)PTR_DAT_047e6f28;
  pMVar1 = (MutexType *)(lVar5 + 0xa8);
  nn::os::LockMutex(pMVar1);
  uVar2 = *(uint *)(lVar5 + 0xd0);
  if (uVar2 != 0) {
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = param_2 / uVar2;
    }
    for (plVar6 = *(long **)(*(long *)(lVar5 + 200) + (ulong)(param_2 - uVar4 * uVar2) * 8);
        plVar6 != (long *)0x0; plVar6 = (long *)plVar6[1]) {
      if (*(uint *)(plVar6 + 2) == param_2) {
        *(int *)((long)plVar6 + 0x14) = *(int *)((long)plVar6 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar1);
        if (((int)plVar6[4] != 0) &&
           (iVar3 = (int)plVar6[4] + -1, *(int *)(plVar6 + 4) = iVar3, iVar3 == 0)) {
          FUN_034683a8(param_1,plVar6);
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
        (**(code **)(*plVar6 + 0x18))(plVar6);
        return 1;
      }
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return 0xf;
}


