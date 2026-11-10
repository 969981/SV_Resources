/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03065a74; name: FUN_03065a74
 */


long FUN_03065a74(long *param_1)

{
  long *plVar1;
  MutexType *pMVar2;
  int iVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  int *piVar7;
  long *plVar8;
  bool bVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  int *piVar16;
  undefined8 local_38;
  
  puVar5 = PTR_DAT_047d1a08;
  plVar8 = param_1 + 1;
  piVar7 = (int *)*plVar8;
  if ((int *)*plVar8 == (int *)0x0) {
    local_38 = 0x38;
    piVar7 = (int *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
    pcVar10 = *(code **)(puVar5 + 0x10);
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(piVar7,"hkAsyncThreadPoolMutex");
    }
    *piVar7 = 0;
    nn::os::InitializeMutex((MutexType *)(piVar7 + 2),true,0);
    piVar7[10] = 0;
    piVar7[0xb] = 0;
    piVar7[0xc] = 0;
    piVar7[0xd] = 0;
    do {
      piVar16 = (int *)*plVar8;
      if (piVar16 != (int *)0x0) {
        ClearExclusiveLocal();
        nn::os::FinalizeMutex((MutexType *)(piVar7 + 2));
        (**(code **)(puVar5 + 8))(0,piVar7,0);
        piVar7 = piVar16;
        break;
      }
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar9) {
        *plVar8 = (long)piVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_029fc32c(piVar7);
  puVar5 = PTR_DAT_047e4f38;
  if ((char)param_1[2] == '\0') {
    if (*(long *)(*param_1 + 0x10) != 1) {
      iVar13 = *(int *)PTR_DAT_047e4f38;
      lVar12 = tpidr_el0;
      lVar11 = *(long *)(lVar12 + 0x1000b8);
      if (lVar11 == 0) {
        lVar11 = FUN_00e5d3b4();
        *(long *)(lVar12 + 0x1000b8) = lVar11;
      }
      if (*(long *)(lVar11 + (long)iVar13 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      puVar6 = PTR_DAT_047d1a08;
      lVar14 = *param_1;
      local_38 = 0x78;
      lVar11 = (**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
      if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
        (**(code **)(puVar6 + 0x10))(lVar11,"hkaiNavMeshClearanceCache");
      }
      FUN_03065d70(lVar11,lVar14);
      iVar13 = *(int *)puVar5;
      lVar14 = *(long *)(lVar12 + 0x1000b8);
      if (lVar14 == 0) {
        lVar14 = FUN_00e5d3b4();
        *(long *)(lVar12 + 0x1000b8) = lVar14;
      }
      if (*(long *)(lVar14 + (long)iVar13 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      DataMemoryBarrier(2,3);
      plVar8 = (long *)*param_1;
      *param_1 = lVar11;
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar1 = plVar8 + 2;
        do {
          lVar12 = *plVar1;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar9) {
            *plVar1 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  pMVar2 = (MutexType *)(piVar7 + 2);
  iVar13 = *piVar7;
  do {
    while (iVar13 + -1 != 0) {
      nn::os::LockMutex(pMVar2);
      iVar3 = *piVar7;
      if (iVar3 == iVar13) {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar9) {
          *piVar7 = iVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          puVar15 = *(undefined8 **)(piVar7 + 10);
          lVar12 = puVar15[1];
          if (lVar12 == 0) {
            piVar7[0xc] = 0;
            piVar7[0xd] = 0;
          }
          *(long *)(piVar7 + 10) = lVar12;
          nn::os::UnlockMutex(pMVar2);
          (**(code **)*puVar15)(puVar15);
          goto LAB_03065d14;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      nn::os::UnlockMutex(pMVar2);
      iVar13 = iVar3;
    }
    iVar13 = *piVar7;
    if (iVar13 == 1) {
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar9) {
        *piVar7 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_03065cc0;
      bVar9 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_03065cc0:
      bVar9 = false;
    }
  } while (!bVar9);
LAB_03065d14:
  return *param_1;
}


