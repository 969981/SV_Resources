/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c6298; name: FUN_006c6298
 */


undefined8 FUN_006c6298(long param_1,undefined8 *param_2)

{
  MutexType *pMVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **local_c0 [2];
  undefined *local_b0;
  undefined8 ****local_a8;
  undefined8 ****local_a0;
  MultiWaitHolderType aMStack_90 [64];
  undefined **local_50;
  undefined8 uStack_48;
  
  *param_2 = 0;
  uVar6 = nn::os::TryLockMutex((MutexType *)(param_1 + 0xc0));
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  pMVar1 = (MutexType *)(param_1 + 0xa0);
  nn::os::LockMutex(pMVar1);
  FUN_006c6474(param_1);
  nn::os::LockMutex(pMVar1);
  if (((*(long *)(param_1 + 0x20) == param_1 + 0x18) && (*(char *)(param_1 + 0x110) == '\0')) &&
     (*(long *)(param_1 + 0x10) == param_1 + 8)) {
    nn::os::ClearEvent((EventType *)(param_1 + 0x28));
  }
  else {
    nn::os::SignalEvent((EventType *)(param_1 + 0x28));
  }
  nn::os::UnlockMutex(pMVar1);
  nn::os::UnlockMutex(pMVar1);
  piVar2 = (int *)(param_1 + 0x98);
  if (*piVar2 != 0) {
    local_a8 = &local_a8;
    local_50 = (undefined **)0x0;
    uStack_48 = 0;
    lVar3 = param_1 + 0x50;
    local_b0 = PTR_DAT_047cbb38 + 0x10;
    local_a0 = local_a8;
    nn::os::InitializeMultiWaitHolder(aMStack_90,*(EventType **)(param_1 + 0x90));
    local_50 = &local_b0;
    FUN_006c45f4(lVar3,&local_b0);
    uVar6 = FUN_006c482c(lVar3,local_c0);
    if (((uVar6 & 1) != 0) && (local_c0[0] != &local_b0)) {
      if (local_c0[0] == (undefined **)0x0) {
        FUN_006c43c0(lVar3,&local_b0);
        FUN_006c4274(&local_b0);
LAB_006c645c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      puVar8 = local_c0[0][3];
      FUN_006c43c0(lVar3,&local_b0);
      FUN_006c4274(&local_b0);
      *param_2 = puVar8;
      if (*(long *)(puVar8 + 0x30) == 0) {
        if (*(long **)(puVar8 + 0xb0) == (long *)0x0) goto LAB_006c645c;
        puVar8 = (undefined *)(**(code **)(**(long **)(puVar8 + 0xb0) + 0x10))();
      }
      else {
        puVar8 = puVar8 + 0x40;
      }
      FUN_006c43c0(lVar3,puVar8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar7 = 1;
      goto LAB_006c63e0;
    }
    FUN_006c43c0(lVar3,&local_b0);
    FUN_006c4274(&local_b0);
  }
  uVar7 = 0;
LAB_006c63e0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xc0));
  return uVar7;
}


