/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031bd0e0; name: FUN_031bd0e0
 */


void FUN_031bd0e0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  MutexType *pMVar7;
  long *plVar8;
  long *plVar9;
  
  pMVar7 = (MutexType *)param_1[5];
  *param_1 = (long)&PTR_LAB_046a3c48;
  if (pMVar7 != (MutexType *)0x0) {
    nn::os::FinalizeMutex(pMVar7);
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,pMVar7,0);
  }
  if ((int)param_1[4] != 0) {
    plVar8 = (long *)param_1[3];
    plVar9 = plVar8 + (int)param_1[4];
    do {
      plVar9 = plVar9 + -1;
      plVar5 = (long *)*plVar9;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    } while (plVar9 != plVar8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) << 3);
  }
  param_1[3] = 0;
  puVar4 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar4 + 0x10);
  return;
}


