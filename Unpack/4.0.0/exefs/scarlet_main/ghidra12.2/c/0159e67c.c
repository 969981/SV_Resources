/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0159e67c; name: FUN_0159e67c
 */


void FUN_0159e67c(short *param_1)

{
  MutexType *pMVar1;
  short *psVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  short *psVar6;
  long lVar7;
  
  if (((DAT_04839b78 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04839b78), iVar4 != 0)) {
    FUN_00100190(&LAB_00b1ecf8,&DAT_04839b68,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839b78);
  }
  lVar3 = DAT_04839b68;
  DAT_04839b60 = DAT_04839b68;
  if (DAT_04839b68 == 0) {
    return;
  }
  pMVar1 = (MutexType *)(DAT_04839b68 + 0x468);
  nn::os::LockMutex(pMVar1);
  psVar6 = *(short **)(lVar3 + 0x50);
  psVar2 = *(short **)(lVar3 + 0x58);
  if ((psVar6 != psVar2) && (*psVar6 != *param_1)) {
    do {
      psVar6 = psVar6 + 0x68;
      if (psVar2 == psVar6) {
        psVar6 = psVar2;
        goto LAB_0159e770;
      }
    } while (*psVar6 != *param_1);
  }
LAB_0159e770:
  if (psVar2 != psVar6) {
    lVar5 = FUN_0159ec20(psVar6 + 0x68);
    lVar7 = *(long *)(lVar3 + 0x58);
    while (lVar7 != lVar5) {
      lVar7 = lVar7 + -0xd0;
      FUN_0159e7d4(lVar7);
    }
    *(long *)(lVar3 + 0x58) = lVar5;
    FUN_0159ebbc(lVar3,param_1);
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


