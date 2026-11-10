/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029fc668; name: FUN_029fc668
 */


/* WARNING: Removing unreachable block (ram,0x029fc6e4) */

void FUN_029fc668(int *param_1)

{
  MutexType *pMVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  
  pMVar1 = (MutexType *)(param_1 + 2);
  iVar6 = *param_1;
  do {
    while( true ) {
      while (iVar6 + -1 != 0) {
        nn::os::LockMutex(pMVar1);
        iVar2 = *param_1;
        if (iVar2 == iVar6) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar4) {
            *param_1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            puVar7 = *(undefined8 **)(param_1 + 10);
            lVar5 = puVar7[1];
            if (lVar5 == 0) {
              param_1[0xc] = 0;
              param_1[0xd] = 0;
            }
            *(long *)(param_1 + 10) = lVar5;
            nn::os::UnlockMutex(pMVar1);
                    /* WARNING: Could not recover jumptable at 0x029fc750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)*puVar7)(puVar7);
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        nn::os::UnlockMutex(pMVar1);
        iVar6 = iVar2;
      }
      iVar6 = *param_1;
      if (iVar6 == 1) break;
      ClearExclusiveLocal();
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}


