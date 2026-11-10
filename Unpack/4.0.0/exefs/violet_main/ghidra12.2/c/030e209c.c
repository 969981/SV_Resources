/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030e209c; name: FUN_030e209c
 */


void FUN_030e209c(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(param_1 + 0x60);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar7,0);
    *(undefined **)(param_1 + 0x60) = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  puVar5 = PTR_PTR_047d1a50;
  if (*(int *)(param_1 + 0x58) != 0) {
    lVar8 = *(long *)(param_1 + 0x50);
    lVar7 = (long)*(int *)(param_1 + 0x58) * 0x18;
    do {
      lVar2 = lVar8 + lVar7;
      *(undefined4 *)(lVar2 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar2 + -4)) && (*(long *)(lVar2 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar5 + 0x20))
                  (puVar5,*(long *)(lVar2 + -0x10),(ulong)*(uint *)(lVar2 + -4) << 3);
      }
      lVar7 = lVar7 + -0x18;
      *(undefined8 *)(lVar2 + -0x10) = 0;
      *(undefined4 *)(lVar2 + -4) = 0x80000000;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x5c)) && (*(long *)(param_1 + 0x50) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x50),(ulong)*(uint *)(param_1 + 0x5c) * 0x18);
  }
  lVar7 = *(long *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar7,0);
    *(undefined **)(param_1 + 0x40) = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  puVar5 = PTR_PTR_047d1a50;
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar8 = *(long *)(param_1 + 0x30);
    lVar7 = (long)*(int *)(param_1 + 0x38) * 0x28;
    do {
      lVar2 = lVar8 + lVar7;
      *(undefined4 *)(lVar2 + -0x10) = 0;
      if ((-1 < (int)*(uint *)(lVar2 + -0xc)) && (*(long *)(lVar2 + -0x18) != 0)) {
        (**(code **)(*(long *)puVar5 + 0x20))
                  (puVar5,*(long *)(lVar2 + -0x18),(ulong)*(uint *)(lVar2 + -0xc) << 2);
      }
      lVar7 = lVar7 + -0x28;
      *(undefined8 *)(lVar2 + -0x18) = 0;
      *(undefined4 *)(lVar2 + -0xc) = 0x80000000;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x3c)) && (*(long *)(param_1 + 0x30) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x30),(ulong)*(uint *)(param_1 + 0x3c) * 0x28);
  }
  lVar7 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar7,0);
    *(undefined **)(param_1 + 0x20) = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1c)) && (*(long *)(param_1 + 0x10) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x10),(ulong)*(uint *)(param_1 + 0x1c) << 3);
  }
  plVar6 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
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
                    /* WARNING: Could not recover jumptable at 0x030e2328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x18))();
      return;
    }
  }
  return;
}


