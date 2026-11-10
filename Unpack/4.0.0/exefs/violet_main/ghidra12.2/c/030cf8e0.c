/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030cf8e0; name: FUN_030cf8e0
 */


void FUN_030cf8e0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  *param_1 = (long)(PTR_DAT_047e5110 + 0x10);
  if ((int)param_1[0xb] != 0) {
    plVar8 = (long *)param_1[10];
    plVar9 = plVar8 + (int)param_1[0xb];
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
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[10],(ulong)*(uint *)((long)param_1 + 0x5c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  param_1[10] = 0;
  if ((int)param_1[9] != 0) {
    plVar8 = (long *)param_1[8];
    plVar9 = plVar8 + (int)param_1[9];
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
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[8],(ulong)*(uint *)((long)param_1 + 0x4c) << 3);
  }
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  param_1[8] = 0;
  if ((int)param_1[7] != 0) {
    lVar7 = param_1[6];
    lVar6 = (long)(int)param_1[7] * 0x38;
    do {
      (**(code **)(*(long *)(lVar7 + -0x38 + lVar6) + 8))();
      lVar6 = lVar6 + -0x38;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[6],(ulong)*(uint *)((long)param_1 + 0x3c) * 0x38);
  }
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  param_1[6] = 0;
  if ((int)param_1[5] != 0) {
    lVar7 = param_1[4];
    lVar6 = (long)(int)param_1[5] * 0x38;
    do {
      (**(code **)(*(long *)(lVar7 + -0x38 + lVar6) + 8))();
      lVar6 = lVar6 + -0x38;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[4],(ulong)*(uint *)((long)param_1 + 0x2c) * 0x38);
  }
  param_1[4] = 0;
  puVar4 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  *param_1 = (long)(puVar4 + 0x10);
  return;
}


