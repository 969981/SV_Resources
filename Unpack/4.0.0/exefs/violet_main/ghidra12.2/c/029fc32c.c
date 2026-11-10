/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029fc32c; name: FUN_029fc32c
 */


void FUN_029fc32c(int *param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined *local_80;
  undefined8 uStack_78;
  undefined ***local_70;
  undefined **local_68;
  undefined8 uStack_60;
  long local_58;
  undefined4 local_50;
  
  pMVar1 = (MutexType *)(param_1 + 2);
  iVar12 = *param_1;
  do {
    while (iVar12 != 0) {
      nn::os::LockMutex(pMVar1);
      iVar4 = *param_1;
      if (iVar4 == iVar12) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = iVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        puVar8 = PTR_DAT_047e4f38;
        if (cVar5 == '\0') {
          iVar12 = *(int *)PTR_DAT_047e4f38;
          lVar7 = tpidr_el0;
          lVar10 = *(long *)(lVar7 + 0x1000b8);
          if (lVar10 == 0) {
            lVar10 = FUN_00e5d3b4();
            *(long *)(lVar7 + 0x1000b8) = lVar10;
          }
          lVar13 = *(long *)(lVar10 + (long)iVar12 * 8 + 1000);
          if (lVar13 == 0) {
            nn::os::InitializeSemaphore((SemaphoreType *)&local_68,0,1000);
            local_80 = &DAT_046ab3b0;
            uStack_78 = 0;
            piVar3 = param_1 + 10;
            if (*(long *)(param_1 + 0xc) != 0) {
              piVar3 = (int *)(*(long *)(param_1 + 0xc) + 8);
            }
            *(undefined ***)piVar3 = &local_80;
            *(undefined ***)(param_1 + 0xc) = &local_80;
            local_70 = &local_68;
            nn::os::UnlockMutex(pMVar1);
            nn::os::AcquireSemaphore((SemaphoreType *)&local_68);
            nn::os::FinalizeSemaphore((SemaphoreType *)&local_68);
            return;
          }
          iVar12 = *(int *)puVar8;
          if (lVar10 == 0) {
            lVar10 = FUN_00e5d3b4();
            *(long *)(lVar7 + 0x1000b8) = lVar10;
            lVar11 = *(long *)(lVar10 + (long)iVar12 * 8 + 1000);
            iVar12 = *(int *)PTR_DAT_047e6008;
            if (lVar10 == 0) {
              lVar10 = FUN_00e5d3b4();
              *(long *)(lVar7 + 0x1000b8) = lVar10;
            }
          }
          else {
            lVar11 = *(long *)(lVar10 + (long)iVar12 * 8 + 1000);
            iVar12 = *(int *)PTR_DAT_047e6008;
          }
          local_50 = *(undefined4 *)(lVar10 + (long)iVar12 * 8 + 1000);
          if (lVar11 == 0) {
            local_50 = 0xffffffff;
          }
          local_68 = &PTR_LAB_046ab398;
          uStack_60 = 0;
          plVar2 = (long *)(param_1 + 10);
          if (*(long *)(param_1 + 0xc) != 0) {
            plVar2 = (long *)(*(long *)(param_1 + 0xc) + 8);
          }
          *plVar2 = (long)&local_68;
          *(undefined ****)(param_1 + 0xc) = &local_68;
          local_58 = lVar13;
          nn::os::UnlockMutex(pMVar1);
          FUN_03232564(lVar13);
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      nn::os::UnlockMutex(pMVar1);
      iVar12 = iVar4;
    }
    iVar12 = *param_1;
    if (iVar12 == 0) {
      bVar9 = true;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar6) {
        *param_1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_029fc3b8;
    }
    else {
      ClearExclusiveLocal();
LAB_029fc3b8:
      bVar9 = false;
    }
    if (bVar9) {
      return;
    }
  } while( true );
}


