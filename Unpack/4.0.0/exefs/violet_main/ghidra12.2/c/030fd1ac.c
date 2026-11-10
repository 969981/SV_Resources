/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030fd1ac; name: FUN_030fd1ac
 */


void FUN_030fd1ac(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  bool bVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  
  iVar3 = *(int *)PTR_DAT_047e4f38;
  lVar12 = tpidr_el0;
  lVar10 = *(long *)(lVar12 + 0x1000b8);
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar12 + 0x1000b8) = lVar10;
  }
  if (*(long *)(lVar10 + (long)iVar3 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  puVar6 = PTR_PTR_047d1a50;
  iVar3 = *(int *)(param_1 + 0xb0);
  if (iVar3 != 0) {
    iVar14 = 0;
    uVar13 = 0x295c9ad;
    do {
      iVar5 = iVar3 - iVar14;
      iVar11 = iVar5;
      if (0xae < iVar5) {
        iVar11 = 0xaf;
      }
      if (0 < iVar5) {
        iVar5 = iVar11 + iVar14;
        if (iVar5 <= iVar14 + 1) {
          iVar5 = iVar14 + 1;
        }
        iVar9 = *(int *)(param_1 + 0xb0);
        iVar14 = iVar14 - iVar5;
        do {
          lVar10 = *(long *)(param_1 + 0xa8) + (long)iVar9 * 0x10;
          *(undefined4 *)(lVar10 + -8) = 0;
          if ((-1 < (int)*(uint *)(lVar10 + -4)) && (*(long *)(lVar10 + -0x10) != 0)) {
            (**(code **)(*(long *)puVar6 + 0x20))
                      (puVar6,*(long *)(lVar10 + -0x10),(ulong)*(uint *)(lVar10 + -4) << 2);
          }
          *(undefined8 *)(lVar10 + -0x10) = 0;
          bVar7 = iVar14 != -1;
          iVar14 = iVar14 + 1;
          *(undefined4 *)(lVar10 + -4) = 0x80000000;
          iVar9 = *(int *)(param_1 + 0xb0) + -1;
          *(int *)(param_1 + 0xb0) = iVar9;
        } while (bVar7);
        iVar14 = iVar5;
      }
      bVar7 = CARRY4(iVar11 * 0x5d2b63,uVar13);
      uVar13 = iVar11 * 0x5d2b63 + uVar13;
      if (bVar7) {
        iVar11 = *(int *)PTR_DAT_047e4f38;
        lVar10 = *(long *)(lVar12 + 0x1000b8);
        if (lVar10 == 0) {
          lVar10 = FUN_00e5d3b4();
          *(long *)(lVar12 + 0x1000b8) = lVar10;
        }
        if (*(long *)(lVar10 + (long)iVar11 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
      }
    } while (iVar14 != iVar3);
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    lVar10 = *(long *)(param_1 + 0xb8);
    lVar12 = (long)*(int *)(param_1 + 0xc0) << 6;
    do {
      lVar2 = lVar10 + lVar12;
      *(undefined4 *)(lVar2 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar2 + -4)) && (*(long *)(lVar2 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar6 + 0x20))
                  (puVar6,*(long *)(lVar2 + -0x10),(ulong)*(uint *)(lVar2 + -4) << 2);
      }
      lVar12 = lVar12 + -0x40;
      *(undefined8 *)(lVar2 + -0x10) = 0;
      *(undefined4 *)(lVar2 + -4) = 0x80000000;
    } while (lVar12 != 0);
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xc4)) && (*(long *)(param_1 + 0xb8) != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,*(long *)(param_1 + 0xb8),(ulong)*(uint *)(param_1 + 0xc4) << 6);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x80000000;
  if (*(int *)(param_1 + 0xb0) != 0) {
    lVar10 = *(long *)(param_1 + 0xa8);
    lVar12 = (long)*(int *)(param_1 + 0xb0) << 4;
    do {
      lVar2 = lVar10 + lVar12;
      *(undefined4 *)(lVar2 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar2 + -4)) && (*(long *)(lVar2 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar6 + 0x20))
                  (puVar6,*(long *)(lVar2 + -0x10),(ulong)*(uint *)(lVar2 + -4) << 2);
      }
      lVar12 = lVar12 + -0x10;
      *(undefined8 *)(lVar2 + -0x10) = 0;
      *(undefined4 *)(lVar2 + -4) = 0x80000000;
    } while (lVar12 != 0);
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xb4)) && (*(long *)(param_1 + 0xa8) != 0)) {
    (**(code **)(*(long *)puVar6 + 0x20))
              (puVar6,*(long *)(param_1 + 0xa8),(ulong)*(uint *)(param_1 + 0xb4) << 4);
  }
  plVar8 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x80000000;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar1 = plVar8 + 2;
    do {
      lVar12 = *plVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))();
    }
  }
  plVar8 = *(long **)(param_1 + 8);
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar1 = plVar8 + 2;
    do {
      lVar12 = *plVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x030fd4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x18))();
      return;
    }
  }
  return;
}


