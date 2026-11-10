/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb4718; name: FUN_00cb4718
 */


void FUN_00cb4718(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  FUN_031fa22c(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x54)) && (*(long *)(param_1 + 0x48) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x48),(ulong)*(uint *)(param_1 + 0x54) << 3);
  }
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar7 = *(long *)(param_1 + 0x38);
    lVar8 = lVar7 + (long)*(int *)(param_1 + 0x40) * 0x30;
    do {
      if ((*(ulong *)(lVar8 + -8) & 1) != 0) {
        plVar6 = (long *)(*(ulong *)(lVar8 + -8) & 0xfffffffffffffffe);
        plVar2 = plVar6 + 1;
        do {
          lVar5 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar5 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      puVar1 = (ulong *)(lVar8 + -0x20);
      lVar8 = lVar8 + -0x30;
      if ((*puVar1 & 1) != 0) {
        plVar6 = (long *)(*puVar1 & 0xfffffffffffffffe);
        plVar2 = plVar6 + 1;
        do {
          lVar5 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar5 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    } while (lVar8 != lVar7);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(long *)(param_1 + 0x38) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x38),(ulong)*(uint *)(param_1 + 0x44) * 0x30);
  }
  lVar7 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar7,0);
    *(undefined **)(param_1 + 0x20) = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar7 = *(long *)(param_1 + 0x10);
    lVar8 = lVar7 + (long)*(int *)(param_1 + 0x18) * 0x30;
    do {
      if ((*(ulong *)(lVar8 + -8) & 1) != 0) {
        plVar6 = (long *)(*(ulong *)(lVar8 + -8) & 0xfffffffffffffffe);
        plVar2 = plVar6 + 1;
        do {
          lVar5 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar5 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      puVar1 = (ulong *)(lVar8 + -0x20);
      lVar8 = lVar8 + -0x30;
      if ((*puVar1 & 1) != 0) {
        plVar6 = (long *)(*puVar1 & 0xfffffffffffffffe);
        plVar2 = plVar6 + 1;
        do {
          lVar5 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)lVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar5 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    } while (lVar8 != lVar7);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1c)) && (*(long *)(param_1 + 0x10) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x10),(ulong)*(uint *)(param_1 + 0x1c) * 0x30);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  return;
}


