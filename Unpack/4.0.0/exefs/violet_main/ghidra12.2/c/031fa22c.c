/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031fa22c; name: FUN_031fa22c
 */


void FUN_031fa22c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  
  puVar2 = PTR_PTR_047d1a50;
  puVar1 = PTR_DAT_047d1a08;
  iVar5 = *(int *)(param_1 + 0x20);
  uVar4 = iVar5 - 1;
  if (0 < iVar5) {
    do {
      lVar7 = *(long *)(*(long *)(param_1 + 0x18) + ((long)((ulong)uVar4 << 0x20) >> 0x1c) + 8);
      if (lVar7 != 0) {
        iVar5 = *(int *)(lVar7 + 0x10);
        if (iVar5 != 0) {
          iVar9 = 0;
          do {
            (**(code **)(*(long *)(*(long *)(lVar7 + 8) + (long)iVar9 * 0x38) + 8))();
            iVar9 = iVar9 + 1;
          } while (iVar5 != iVar9);
        }
        *(undefined4 *)(lVar7 + 0x20) = 0;
        if ((-1 < *(int *)(lVar7 + 0x24)) && (*(long *)(lVar7 + 0x18) != 0)) {
          (**(code **)(*(long *)puVar2 + 0x20))(puVar2);
        }
        *(undefined8 *)(lVar7 + 0x18) = 0;
        *(undefined4 *)(lVar7 + 0x24) = 0x80000000;
        *(undefined4 *)(lVar7 + 0x10) = 0;
        if ((-1 < (int)*(uint *)(lVar7 + 0x14)) && (*(long *)(lVar7 + 8) != 0)) {
          (**(code **)(*(long *)puVar2 + 0x20))
                    (puVar2,*(long *)(lVar7 + 8),(ulong)*(uint *)(lVar7 + 0x14) * 0x38);
        }
        *(undefined8 *)(lVar7 + 8) = 0;
        *(undefined4 *)(lVar7 + 0x14) = 0x80000000;
        (**(code **)(puVar1 + 8))(0,lVar7,0);
      }
      uVar4 = uVar4 - 1;
    } while (-1 < (int)uVar4);
    iVar5 = *(int *)(param_1 + 0x20);
  }
  if (iVar5 != 0) {
    lVar7 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x20) = 0;
    if ((((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) && (-1 < *(int *)(param_1 + 0x30))) &&
       (*(undefined4 *)(lVar7 + 4) = 0xffffffff, 0 < *(int *)(param_1 + 0x30))) {
      lVar7 = 0;
      lVar6 = 0xc;
      do {
        *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar6) = 0xffffffff;
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 8;
      } while (lVar7 < *(int *)(param_1 + 0x30));
    }
  }
  puVar1 = PTR_PTR_047d1a50;
  iVar9 = *(int *)(param_1 + 0x40);
  iVar5 = iVar9 + -1;
  if (0 < iVar9) {
    do {
      lVar7 = *(long *)(*(long *)(param_1 + 0x38) + (long)iVar5 * 0x18 + 0x10);
      if (lVar7 != 0) {
        iVar9 = *(int *)(lVar7 + 0x10);
        if (iVar9 != 0) {
          iVar8 = 0;
          do {
            (**(code **)(*(long *)(*(long *)(lVar7 + 8) + (long)iVar8 * 0x38) + 8))();
            iVar8 = iVar8 + 1;
          } while (iVar9 != iVar8);
        }
        *(undefined4 *)(lVar7 + 0x20) = 0;
        if ((-1 < *(int *)(lVar7 + 0x24)) && (*(long *)(lVar7 + 0x18) != 0)) {
          (**(code **)(*(long *)puVar1 + 0x20))(puVar1);
        }
        *(undefined8 *)(lVar7 + 0x18) = 0;
        *(undefined4 *)(lVar7 + 0x24) = 0x80000000;
        *(undefined4 *)(lVar7 + 0x10) = 0;
        if ((-1 < (int)*(uint *)(lVar7 + 0x14)) && (*(long *)(lVar7 + 8) != 0)) {
          (**(code **)(*(long *)puVar1 + 0x20))
                    (puVar1,*(long *)(lVar7 + 8),(ulong)*(uint *)(lVar7 + 0x14) * 0x38);
        }
        *(undefined8 *)(lVar7 + 8) = 0;
        *(undefined4 *)(lVar7 + 0x14) = 0x80000000;
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar7,0);
      }
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    iVar9 = *(int *)(param_1 + 0x40);
  }
  if (iVar9 != 0) {
    lVar7 = *(long *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x40) = 0;
    if ((((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) && (-1 < *(int *)(param_1 + 0x50))) &&
       (*(undefined4 *)(lVar7 + 4) = 0xffffffff, 0 < *(int *)(param_1 + 0x50))) {
      lVar7 = 0;
      lVar6 = 0xc;
      do {
        *(undefined4 *)(*(long *)(param_1 + 0x48) + lVar6) = 0xffffffff;
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 8;
      } while (lVar7 < *(int *)(param_1 + 0x50));
    }
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 100)) && (*(long *)(param_1 + 0x58) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x58),(ulong)*(uint *)(param_1 + 100) << 4);
  }
  lVar7 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar7,0);
    *(undefined **)(param_1 + 0x48) = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(long *)(param_1 + 0x38) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x38),(ulong)*(uint *)(param_1 + 0x44) * 0x18);
  }
  lVar7 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar7,0);
    *(undefined **)(param_1 + 0x28) = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(long *)(param_1 + 0x18) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x18),(ulong)*(uint *)(param_1 + 0x24) << 4);
  }
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar6 = *(long *)(param_1 + 8);
    lVar7 = (long)*(int *)(param_1 + 0x10) << 3;
    do {
      plVar3 = *(long **)(lVar6 + -8 + lVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(long *)(param_1 + 8) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 8),(ulong)*(uint *)(param_1 + 0x14) << 3);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}


