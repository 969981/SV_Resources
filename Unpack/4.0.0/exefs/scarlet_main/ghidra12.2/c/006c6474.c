/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c6474; name: FUN_006c6474
 */


void FUN_006c6474(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xa0));
  plVar1 = (long *)(param_1 + 8);
  if (plVar1 != *(long **)(param_1 + 0x10)) {
    piVar2 = (int *)(param_1 + 0x98);
    plVar7 = *(long **)(param_1 + 0x10);
    do {
      plVar8 = plVar1;
      if (plVar1 != plVar7) {
        plVar8 = (long *)plVar7[1];
        lVar6 = *plVar8;
        *(long **)(*plVar7 + 8) = plVar8;
        *plVar8 = *plVar7;
        *(long **)(lVar6 + 8) = plVar7;
        *plVar7 = lVar6;
      }
      if (plVar7[6] == 0) {
        if ((long *)plVar7[0x16] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        plVar5 = (long *)(**(code **)(*(long *)plVar7[0x16] + 0x10))();
      }
      else {
        plVar5 = plVar7 + 8;
      }
      plVar5[3] = (long)plVar7;
      FUN_006c45f4(param_1 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar7 = plVar8;
    } while (plVar1 != plVar8);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa0));
  return;
}


