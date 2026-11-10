/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03079a38; name: FUN_03079a38
 */


void FUN_03079a38(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  *param_1 = (long)(PTR_DAT_047e4f68 + 0x10);
  if ((int)param_1[8] != 0) {
    lVar7 = param_1[7];
    lVar8 = (long)(int)param_1[8] << 8;
    do {
      FUN_0307e0e0(lVar7 + -0x100 + lVar8);
      lVar8 = lVar8 + -0x100;
    } while (lVar8 != 0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[7],(ulong)*(uint *)((long)param_1 + 0x44) << 8);
  }
  plVar5 = (long *)param_1[0x1d];
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar9 = plVar5 + 2;
    do {
      lVar8 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  plVar5 = (long *)param_1[0x1c];
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar9 = plVar5 + 2;
    do {
      lVar8 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  plVar5 = (long *)param_1[0xb];
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar9 = plVar5 + 2;
    do {
      lVar8 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  puVar4 = PTR_DAT_047d1a08;
  if ((int)param_1[10] != 0) {
    plVar5 = (long *)param_1[9];
    plVar9 = plVar5 + (long)(int)param_1[10] * 3;
    do {
      lVar8 = plVar9[-2];
      plVar9 = plVar9 + -3;
      if (lVar8 != 0) {
        nn::os::FinalizeMutex((MutexType *)(lVar8 + 8));
        (**(code **)(puVar4 + 8))(0,lVar8,0);
      }
      plVar6 = (long *)*plVar9;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
    } while (plVar9 != plVar5);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[9],(ulong)*(uint *)((long)param_1 + 0x54) * 0x18);
  }
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  param_1[9] = 0;
  if ((int)param_1[8] != 0) {
    lVar7 = param_1[7];
    lVar8 = (long)(int)param_1[8] << 8;
    do {
      FUN_0307e0e0(lVar7 + -0x100 + lVar8);
      lVar8 = lVar8 + -0x100;
    } while (lVar8 != 0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[7],(ulong)*(uint *)((long)param_1 + 0x44) << 8);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  lVar8 = param_1[5];
  if (lVar8 != 0) {
    nn::os::FinalizeMutex((MutexType *)(lVar8 + 8));
    (**(code **)(puVar4 + 8))(0,lVar8,0);
  }
  plVar5 = (long *)param_1[4];
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar9 = plVar5 + 2;
    do {
      lVar8 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


