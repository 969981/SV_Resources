/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03080464; name: FUN_03080464
 */


long FUN_03080464(long *param_1)

{
  undefined2 *puVar1;
  MutexType *pMVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  int *piVar8;
  long *plVar9;
  undefined4 *puVar10;
  long *plVar11;
  bool bVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  int *piVar19;
  undefined4 *puVar20;
  ulong uVar21;
  undefined8 local_38;
  
  puVar6 = PTR_DAT_047d1a08;
  plVar9 = param_1 + 1;
  piVar8 = (int *)*plVar9;
  if ((int *)*plVar9 == (int *)0x0) {
    local_38 = 0x38;
    piVar8 = (int *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
    pcVar13 = *(code **)(puVar6 + 0x10);
    if (pcVar13 != (code *)0x0) {
      (*pcVar13)(piVar8,"hkAsyncThreadPoolMutex");
    }
    *piVar8 = 0;
    nn::os::InitializeMutex((MutexType *)(piVar8 + 2),true,0);
    piVar8[10] = 0;
    piVar8[0xb] = 0;
    piVar8[0xc] = 0;
    piVar8[0xd] = 0;
    do {
      piVar19 = (int *)*plVar9;
      if (piVar19 != (int *)0x0) {
        ClearExclusiveLocal();
        nn::os::FinalizeMutex((MutexType *)(piVar8 + 2));
        (**(code **)(puVar6 + 8))(0,piVar8,0);
        piVar8 = piVar19;
        break;
      }
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar12) {
        *plVar9 = (long)piVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_029fc32c(piVar8);
  puVar6 = PTR_DAT_047e4f38;
  if ((char)param_1[2] == '\0') {
    if (*(long *)(*param_1 + 0x10) != 1) {
      iVar17 = *(int *)PTR_DAT_047e4f38;
      lVar16 = tpidr_el0;
      lVar14 = *(long *)(lVar16 + 0x1000b8);
      if (lVar14 == 0) {
        lVar14 = FUN_00e5d3b4();
        *(long *)(lVar16 + 0x1000b8) = lVar14;
      }
      if (*(long *)(lVar14 + (long)iVar17 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      puVar7 = PTR_DAT_047d1a08;
      lVar14 = *param_1;
      local_38 = 0x38;
      plVar9 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
      if (*(code **)(puVar7 + 0x10) != (code *)0x0) {
        (**(code **)(puVar7 + 0x10))(plVar9,"hkaiStreamingSetInstance");
      }
      plVar9[2] = 1;
      *plVar9 = (long)(PTR_DAT_047e4f88 + 0x10);
      plVar9[1] = 0xffffffff;
      *(undefined4 *)(plVar9 + 3) = *(undefined4 *)(lVar14 + 0x18);
      *(undefined4 *)((long)plVar9 + 0x1c) = *(undefined4 *)(lVar14 + 0x1c);
      lVar15 = *(long *)(lVar14 + 0x20);
      plVar9[4] = lVar15;
      if ((lVar15 != 0) && (*(long *)(lVar15 + 8) != 0)) {
        plVar11 = (long *)(lVar15 + 0x10);
        do {
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar12) {
            *plVar11 = *plVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      plVar9[5] = 0;
      plVar9[6] = -0x8000000000000000;
      uVar4 = *(uint *)(lVar14 + 0x30);
      uVar21 = (ulong)uVar4;
      if ((int)uVar4 < 1) {
        plVar9[5] = 0;
        plVar9[6] = -0x8000000000000000;
      }
      else {
        puVar20 = *(undefined4 **)(lVar14 + 0x28);
        puVar10 = (undefined4 *)
                  (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,uVar21 * 0xc);
        plVar9[5] = (long)puVar10;
        *(uint *)(plVar9 + 6) = uVar4;
        *(uint *)((long)plVar9 + 0x34) = uVar4;
        do {
          *puVar10 = *puVar20;
          puVar10[1] = puVar20[1];
          *(undefined2 *)(puVar10 + 2) = *(undefined2 *)(puVar20 + 2);
          puVar1 = (undefined2 *)((long)puVar20 + 10);
          uVar4 = (int)uVar21 - 1;
          uVar21 = (ulong)uVar4;
          puVar20 = puVar20 + 3;
          *(undefined2 *)((long)puVar10 + 10) = *puVar1;
          puVar10 = puVar10 + 3;
        } while (uVar4 != 0);
      }
      iVar17 = *(int *)puVar6;
      lVar14 = *(long *)(lVar16 + 0x1000b8);
      if (lVar14 == 0) {
        lVar14 = FUN_00e5d3b4();
        *(long *)(lVar16 + 0x1000b8) = lVar14;
      }
      if (*(long *)(lVar14 + (long)iVar17 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      DataMemoryBarrier(2,3);
      plVar11 = (long *)*param_1;
      *param_1 = (long)plVar9;
      if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
        plVar9 = plVar11 + 2;
        do {
          lVar16 = *plVar9;
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar12) {
            *plVar9 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 + -1 == 0) {
          (**(code **)(*plVar11 + 0x18))();
        }
      }
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  pMVar2 = (MutexType *)(piVar8 + 2);
  iVar17 = *piVar8;
  do {
    while (iVar17 + -1 != 0) {
      nn::os::LockMutex(pMVar2);
      iVar3 = *piVar8;
      if (iVar3 == iVar17) {
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar12) {
          *piVar8 = iVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          puVar18 = *(undefined8 **)(piVar8 + 10);
          lVar16 = puVar18[1];
          if (lVar16 == 0) {
            piVar8[0xc] = 0;
            piVar8[0xd] = 0;
          }
          *(long *)(piVar8 + 10) = lVar16;
          nn::os::UnlockMutex(pMVar2);
          (**(code **)*puVar18)(puVar18);
          goto LAB_030807c0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      nn::os::UnlockMutex(pMVar2);
      iVar17 = iVar3;
    }
    iVar17 = *piVar8;
    if (iVar17 == 1) {
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar12) {
        *piVar8 = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_0308076c;
      bVar12 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0308076c:
      bVar12 = false;
    }
  } while (!bVar12);
LAB_030807c0:
  return *param_1;
}


