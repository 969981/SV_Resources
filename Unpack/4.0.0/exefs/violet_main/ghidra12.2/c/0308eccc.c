/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0308eccc; name: FUN_0308eccc
 */


void FUN_0308eccc(long *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  *param_1 = (long)(PTR_DAT_047e4fe0 + 0x10);
  puVar5 = PTR_DAT_047e4f38;
  iVar2 = *(int *)PTR_DAT_047e4f38;
  lVar10 = tpidr_el0;
  lVar8 = *(long *)(lVar10 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar8;
  }
  if (*(long *)(lVar8 + (long)iVar2 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  puVar6 = PTR_PTR_047d1a50;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) << 4);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  iVar2 = *(int *)puVar5;
  lVar8 = *(long *)(lVar10 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar8;
  }
  if (*(long *)(lVar8 + (long)iVar2 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[5],(ulong)*(uint *)((long)param_1 + 0x34) * 0x14);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  iVar2 = *(int *)puVar5;
  lVar8 = *(long *)(lVar10 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar8;
  }
  if (*(long *)(lVar8 + (long)iVar2 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[7],(ulong)*(uint *)((long)param_1 + 0x44) << 4);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  iVar2 = *(int *)puVar5;
  lVar8 = *(long *)(lVar10 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar8;
  }
  if (*(long *)(lVar8 + (long)iVar2 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if ((int)param_1[10] != 0) {
    lVar11 = param_1[9];
    lVar8 = lVar11 + (long)(int)param_1[10] * 0x10;
    do {
      plVar7 = *(long **)(lVar8 + -8);
      lVar8 = lVar8 + -0x10;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar1 = plVar7 + 2;
        do {
          lVar9 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
    } while (lVar8 != lVar11);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[9],(ulong)*(uint *)((long)param_1 + 0x54) << 4);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0xb],(ulong)*(uint *)((long)param_1 + 100) << 2);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0xd],(ulong)*(uint *)((long)param_1 + 0x74) << 2);
  }
  plVar7 = (long *)param_1[0x19];
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  param_1[0x19] = 0;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar1 = plVar7 + 2;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  iVar2 = *(int *)puVar5;
  lVar8 = *(long *)(lVar10 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar8;
  }
  if (*(long *)(lVar8 + (long)iVar2 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  plVar7 = (long *)param_1[0x19];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar1 = plVar7 + 2;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  plVar7 = (long *)param_1[0x18];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar1 = plVar7 + 2;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0xd],(ulong)*(uint *)((long)param_1 + 0x74) << 2);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[0xb],(ulong)*(uint *)((long)param_1 + 100) << 2);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  if ((int)param_1[10] != 0) {
    lVar8 = param_1[9];
    lVar10 = lVar8 + (long)(int)param_1[10] * 0x10;
    do {
      plVar7 = *(long **)(lVar10 + -8);
      lVar10 = lVar10 + -0x10;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar1 = plVar7 + 2;
        do {
          lVar11 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
    } while (lVar10 != lVar8);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[9],(ulong)*(uint *)((long)param_1 + 0x54) << 4);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[7],(ulong)*(uint *)((long)param_1 + 0x44) << 4);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[5],(ulong)*(uint *)((long)param_1 + 0x34) * 0x14);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) << 4);
  }
  param_1[3] = 0;
  puVar5 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar5 + 0x10);
  return;
}


