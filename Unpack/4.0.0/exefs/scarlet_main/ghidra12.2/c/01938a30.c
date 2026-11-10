/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01938a30; name: FUN_01938a30
 */


undefined1  [16] FUN_01938a30(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 == 0) {
    uVar4 = 0;
    uVar5 = 0;
    uVar7 = 0;
    uVar3 = 0;
  }
  else {
    pMVar1 = (MutexType *)(lVar6 + 0x120);
    uVar3 = nn::os::IsMutexLockedByCurrentThread(pMVar1);
    if ((uVar3 & 1) == 0) {
      nn::os::LockMutex(pMVar1);
      uVar7 = *(ulong *)(lVar6 + 0x170);
      uVar2 = *(uint *)(lVar6 + 0x178);
      nn::os::UnlockMutex(pMVar1);
    }
    else {
      uVar7 = *(ulong *)(lVar6 + 0x170);
      uVar2 = *(uint *)(lVar6 + 0x178);
    }
    uVar3 = (ulong)uVar2;
    uVar4 = uVar7 & 0xffffff0000000000;
    uVar5 = uVar7 & 0xff00000000;
    uVar7 = uVar7 & 0xffffffff;
  }
  auVar8._0_8_ = uVar5 | uVar4 | uVar7;
  auVar8._8_8_ = uVar3;
  return auVar8;
}


