/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049dab0; name: FUN_0049dab0
 */


void FUN_0049dab0(void)

{
  ThreadType *pTVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  nn::os::LockMutex((MutexType *)&DAT_047f44a0);
  if (((DAT_047f4458 & 1) == 0) && (DAT_047f4470 != (HeapHead *)0x0)) {
    pTVar1 = (ThreadType *)nn::os::GetCurrentThread();
    uVar2 = nn::os::GetThreadId(pTVar1);
    if (DAT_047f4490 != (long *)0x0) {
      plVar6 = (long *)&DAT_047f4490;
      plVar4 = DAT_047f4490;
      do {
        if ((ulong)plVar4[4] >= uVar2) {
          plVar6 = plVar4;
        }
        plVar4 = (long *)plVar4[(ulong)plVar4[4] < uVar2];
      } while (plVar4 != (long *)0x0);
      if (((long **)plVar6 != &DAT_047f4490) && ((ulong)plVar6[4] <= uVar2)) {
        plVar4 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          plVar4 = plVar6 + 2;
          plVar3 = (long *)*plVar4;
          if ((long *)*plVar3 != plVar6) {
            do {
              lVar5 = *plVar4;
              plVar4 = (long *)(lVar5 + 0x10);
              plVar3 = (long *)*plVar4;
            } while (*plVar3 != lVar5);
          }
        }
        else {
          do {
            plVar3 = plVar4;
            plVar4 = (long *)*plVar3;
          } while ((long *)*plVar3 != (long *)0x0);
        }
        if (DAT_047f4488 == plVar6) {
          DAT_047f4488 = plVar3;
        }
        DAT_047f4498 = DAT_047f4498 + -1;
        FUN_01336080(DAT_047f4490,plVar6);
        nn::lmem::FreeToExpHeap(DAT_047f4470,plVar6);
      }
    }
    if (DAT_047f4498 == 0) {
                    /* try { // try from 0049dbb8 to 0049dbbf has its CatchHandler @ 0049dbd4 */
      FUN_00452c20(0);
    }
  }
  nn::os::UnlockMutex((MutexType *)&DAT_047f44a0);
  return;
}


