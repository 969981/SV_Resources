/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033bc40c; name: FUN_033bc40c
 */


void FUN_033bc40c(undefined8 *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = &PTR_LAB_047b4788;
  puVar5 = PTR_DAT_047d1a08;
  if (*(int *)(param_1 + 9) != 0) {
    lVar7 = param_1[8];
    lVar9 = lVar7 + (long)*(int *)(param_1 + 9) * 0x28;
    do {
      if ((*(ulong *)(lVar9 + -0x10) & 1) != 0) {
        (**(code **)(puVar5 + 8))(0,*(ulong *)(lVar9 + -0x10) - 1,0);
      }
      puVar1 = (ulong *)(lVar9 + -0x18);
      lVar9 = lVar9 + -0x28;
      if ((*puVar1 & 1) != 0) {
        plVar6 = (long *)(*puVar1 & 0xfffffffffffffffe);
        plVar2 = plVar6 + 1;
        do {
          lVar8 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)lVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar8 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    } while (lVar9 != lVar7);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[8],(ulong)*(uint *)((long)param_1 + 0x4c) * 0x28);
  }
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  param_1[8] = 0;
  if (*(int *)(param_1 + 7) != 0) {
    lVar9 = param_1[6];
    lVar7 = lVar9 + (long)*(int *)(param_1 + 7) * 0x40;
    do {
      lVar8 = lVar7 + -0x40;
      FUN_0320a6dc(lVar7 + -0x20);
      if ((*(ulong *)(lVar7 + -0x30) & 1) != 0) {
        plVar6 = (long *)(*(ulong *)(lVar7 + -0x30) & 0xfffffffffffffffe);
        plVar2 = plVar6 + 1;
        do {
          lVar7 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar7 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      lVar7 = lVar8;
    } while (lVar8 != lVar9);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[6],(ulong)*(uint *)((long)param_1 + 0x3c) << 6);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  FUN_033b8484(param_1);
  return;
}


