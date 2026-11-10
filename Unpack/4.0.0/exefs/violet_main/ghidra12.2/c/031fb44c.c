/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031fb44c; name: FUN_031fb44c
 */


void FUN_031fb44c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    plVar6 = *(long **)(param_1 + 0x58);
    plVar3 = plVar6 + (long)*(int *)(param_1 + 0x60) * 2;
    plVar1 = (long *)(param_1 + 0x38);
    plVar2 = (long *)(param_1 + 0x18);
    do {
      if (*plVar6 == plVar6[1]) {
        lVar4 = FUN_031fd7ec(plVar2,plVar6);
        if (lVar4 == 0) {
          uVar7 = 0xffffffff00000000;
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (ulong)*(uint *)(lVar4 + 4);
          uVar7 = (lVar4 - *(long *)(param_1 + 0x28)) * 0x20000000;
        }
        lVar4 = *(long *)(*plVar2 + ((long)((uVar5 | uVar7) << 0x20) >> 0x1c) + 8);
        if (lVar4 != 0) {
          iVar11 = *(int *)(lVar4 + 0x10);
          if (iVar11 != 0) {
            iVar9 = 0;
            do {
              (**(code **)(*(long *)(*(long *)(lVar4 + 8) + (long)iVar9 * 0x38) + 8))();
              iVar9 = iVar9 + 1;
            } while (iVar11 != iVar9);
          }
          *(undefined4 *)(lVar4 + 0x20) = 0;
          if ((-1 < *(int *)(lVar4 + 0x24)) && (*(long *)(lVar4 + 0x18) != 0)) {
            (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))();
          }
          *(undefined8 *)(lVar4 + 0x18) = 0;
          *(undefined4 *)(lVar4 + 0x24) = 0x80000000;
          *(undefined4 *)(lVar4 + 0x10) = 0;
          if ((-1 < (int)*(uint *)(lVar4 + 0x14)) && (*(long *)(lVar4 + 8) != 0)) {
            (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                      (PTR_PTR_047d1a50,*(long *)(lVar4 + 8),(ulong)*(uint *)(lVar4 + 0x14) * 0x38);
          }
          *(undefined8 *)(lVar4 + 8) = 0;
          *(undefined4 *)(lVar4 + 0x14) = 0x80000000;
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar4,0);
        }
        iVar11 = (int)(uVar5 | uVar7);
        if (*(uint *)(param_1 + 0x30) < (uint)(uVar7 >> 0x20)) {
LAB_031fb704:
          lVar4 = FUN_031fd7ec(plVar2,*plVar2 + (long)iVar11 * 0x10);
        }
        else {
          lVar4 = *(long *)(param_1 + 0x28) + ((long)uVar7 >> 0x20) * 8;
          if (*(int *)(lVar4 + 4) != iVar11) goto LAB_031fb704;
        }
        FUN_031fdfb0(plVar2,lVar4);
      }
      else {
        lVar4 = FUN_031fdaac(plVar1,plVar6);
        if (lVar4 == 0) {
          lVar4 = -0x100000000;
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = *(uint *)(lVar4 + 4);
          lVar4 = (lVar4 - *(long *)(param_1 + 0x48)) * 0x20000000;
        }
        uVar10 = uVar10 | (uint)lVar4;
        lVar8 = *(long *)(*plVar1 + (long)(int)uVar10 * 0x18 + 0x10);
        if (lVar8 != 0) {
          iVar11 = *(int *)(lVar8 + 0x10);
          if (iVar11 != 0) {
            iVar9 = 0;
            do {
              (**(code **)(*(long *)(*(long *)(lVar8 + 8) + (long)iVar9 * 0x38) + 8))();
              iVar9 = iVar9 + 1;
            } while (iVar11 != iVar9);
          }
          *(undefined4 *)(lVar8 + 0x20) = 0;
          if ((-1 < *(int *)(lVar8 + 0x24)) && (*(long *)(lVar8 + 0x18) != 0)) {
            (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))();
          }
          *(undefined8 *)(lVar8 + 0x18) = 0;
          *(undefined4 *)(lVar8 + 0x24) = 0x80000000;
          *(undefined4 *)(lVar8 + 0x10) = 0;
          if ((-1 < (int)*(uint *)(lVar8 + 0x14)) && (*(long *)(lVar8 + 8) != 0)) {
            (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                      (PTR_PTR_047d1a50,*(long *)(lVar8 + 8),(ulong)*(uint *)(lVar8 + 0x14) * 0x38);
          }
          *(undefined8 *)(lVar8 + 8) = 0;
          *(undefined4 *)(lVar8 + 0x14) = 0x80000000;
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar8,0);
        }
        if (*(uint *)(param_1 + 0x50) < (uint)((ulong)lVar4 >> 0x20)) {
LAB_031fb5e0:
          lVar4 = FUN_031fdaac(plVar1,*plVar1 + (long)(int)uVar10 * 0x18);
        }
        else {
          lVar4 = *(long *)(param_1 + 0x48) + (lVar4 >> 0x20) * 8;
          if (*(uint *)(lVar4 + 4) != uVar10) goto LAB_031fb5e0;
        }
        FUN_031fe0b8(plVar1,lVar4);
      }
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar3);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}


