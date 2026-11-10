/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f6e3b0; name: FUN_00f6e3b0
 */


void FUN_00f6e3b0(undefined1 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = DAT_0485e990;
  if (DAT_0485e990 != (long *)0x0) {
    if ((*(byte *)((long)DAT_0485e990 + 0x249) & 1) == 0) {
      nn::os::LockMutex((MutexType *)&DAT_0485e970);
      *(undefined **)(param_1 + 8) = &DAT_0485e970;
      param_1[0x10] = 1;
      *param_1 = 1;
      return;
    }
    DAT_0485e990 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      lVar6 = plVar5[6];
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*plVar5 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
  }
  *param_1 = 0;
  return;
}


