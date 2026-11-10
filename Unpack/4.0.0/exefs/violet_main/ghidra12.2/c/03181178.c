/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03181178; name: FUN_03181178
 */


void FUN_03181178(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  *param_1 = (long)(PTR_DAT_047e5728 + 0x10);
  lVar7 = param_1[0x12];
  if (*(int *)((long)param_1 + 0x9c) < 0) {
    lVar2 = 0;
    if (lVar7 != 0) {
      lVar2 = lVar7 + (long)(param_1 + 0x12);
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar2,0);
  }
  if ((int)param_1[0x11] != 0) {
    plVar8 = (long *)param_1[0x10];
    plVar6 = plVar8 + (int)param_1[0x11];
    do {
      plVar6 = plVar6 + -1;
      plVar5 = (long *)*plVar6;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
        do {
          lVar7 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    } while (plVar6 != plVar8);
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x10],(ulong)*(uint *)((long)param_1 + 0x8c) << 3);
  }
  lVar7 = param_1[0xd];
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  param_1[0x10] = 0;
  if (*(int *)((long)param_1 + 0x74) < 0) {
    lVar2 = 0;
    if (lVar7 != 0) {
      lVar2 = lVar7 + (long)(param_1 + 0xd);
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar2,0);
  }
  if ((int)param_1[0xc] != 0) {
    plVar8 = (long *)param_1[0xb];
    plVar6 = plVar8 + (int)param_1[0xc];
    do {
      plVar6 = plVar6 + -1;
      plVar5 = (long *)*plVar6;
      if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
        plVar1 = plVar5 + 2;
        do {
          lVar7 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
    } while (plVar6 != plVar8);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xb],(ulong)*(uint *)((long)param_1 + 100) << 3);
  }
  lVar7 = param_1[8];
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  param_1[0xb] = 0;
  if (*(int *)((long)param_1 + 0x4c) < 0) {
    lVar2 = 0;
    if (lVar7 != 0) {
      lVar2 = lVar7 + (long)(param_1 + 8);
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar2,0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[6],(ulong)*(uint *)((long)param_1 + 0x3c) << 2);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[4],(ulong)*(uint *)((long)param_1 + 0x2c) * 0xc);
  }
  plVar6 = (long *)param_1[3];
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar8 = plVar6 + 2;
    do {
      lVar7 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


