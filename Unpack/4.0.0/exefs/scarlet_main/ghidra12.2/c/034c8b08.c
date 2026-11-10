/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c8b08; name: FUN_034c8b08
 */


undefined8 FUN_034c8b08(undefined4 param_1,long *param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  if (param_2[5] == 0) {
    uVar2 = *(uint *)(param_2 + 1);
    if (uVar2 != 0) {
      plVar7 = *(long **)PTR_DAT_047e6f38;
      pMVar1 = (MutexType *)(plVar7 + 3);
      nn::os::LockMutex(pMVar1);
      uVar3 = *(uint *)(plVar7 + 1);
      if (uVar3 != 0) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar2 / uVar3;
        }
        for (lVar5 = *(long *)(*plVar7 + (ulong)(uVar2 - uVar4 * uVar3) * 8); lVar5 != 0;
            lVar5 = *(long *)(lVar5 + 0x70)) {
          if (*(uint *)(lVar5 + 0x54) == uVar2) {
            lVar5 = FUN_034b42c8(lVar5,param_1,auStack_34);
            nn::os::UnlockMutex(pMVar1);
            goto joined_r0x034c8be0;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
      return 2;
    }
    if (*param_2 == 0) {
      return 1;
    }
    lVar5 = *param_2 + 8;
    puVar6 = auStack_3c;
  }
  else {
    lVar5 = param_2[5] + 0x1c0;
    puVar6 = auStack_38;
  }
  lVar5 = FUN_034b42c8(lVar5,param_1,puVar6);
joined_r0x034c8be0:
  if (lVar5 == 0) {
    return 2;
  }
  return 1;
}


