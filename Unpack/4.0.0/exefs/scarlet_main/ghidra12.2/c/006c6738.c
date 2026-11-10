/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c6738; name: FUN_006c6738
 */


undefined1  [16] FUN_006c6738(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xc0));
  auVar6 = FUN_006c5a24(param_1 + 0x50,param_2);
  lVar4 = auVar6._8_8_;
  uVar5 = auVar6._0_4_;
  if (1 < uVar5) {
    if (uVar5 != 2) {
      if (uVar5 != 3) {
                    /* WARNING: Subroutine does not return */
        nn::detail::UnexpectedDefaultImpl("","",0);
      }
LAB_006c67f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar4 + 0x30) == 0) {
      if (*(long **)(lVar4 + 0xb0) == (long *)0x0) goto LAB_006c67f4;
      lVar4 = (**(code **)(**(long **)(lVar4 + 0xb0) + 0x10))();
    }
    else {
      lVar4 = lVar4 + 0x40;
    }
    FUN_006c43c0(param_1 + 0x50,lVar4);
    piVar1 = (int *)(param_1 + 0x98);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xc0));
  return auVar6;
}


