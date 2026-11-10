/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a716c; name: FUN_004a716c
 */


void FUN_004a716c(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  uVar6 = *param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    puVar5 = (ulong *)*puVar5;
  }
  puVar7 = *(undefined **)(param_2 + 0xd8);
  if (puVar7 == PTR_DAT_047cba80) {
    FUN_001fcdc8((undefined8 *)(param_2 + 0xd8),puVar5);
    iVar10 = *(int *)(param_1 + 0xd);
  }
  else {
    FUN_001fcec0(puVar7,uVar6);
    iVar10 = *(int *)(param_1 + 0xd);
  }
  if (0 < iVar10) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      lVar8 = param_1[5];
      piVar9 = *(int **)(param_2 + 0x28);
      if (piVar9 == (int *)0x0) {
        iVar10 = *(int *)(param_2 + 0x24);
LAB_004a7258:
        FUN_00532334(param_2 + 0x18,iVar10 + 1);
        piVar9 = *(int **)(param_2 + 0x28);
        iVar10 = *piVar9;
LAB_004a726c:
        *piVar9 = iVar10 + 1;
        uVar6 = FUN_004e6678(*(undefined8 *)(param_2 + 0x18));
        iVar10 = *(int *)(param_2 + 0x20);
        *(int *)(param_2 + 0x20) = iVar10 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x28) + (long)iVar10 * 8 + 8) = uVar6;
      }
      else {
        iVar4 = *(int *)(param_2 + 0x20);
        iVar10 = *piVar9;
        if (iVar10 <= iVar4) {
          if (iVar10 == *(int *)(param_2 + 0x24)) goto LAB_004a7258;
          goto LAB_004a726c;
        }
        *(int *)(param_2 + 0x20) = iVar4 + 1;
        uVar6 = *(undefined8 *)(piVar9 + (long)iVar4 * 2 + 2);
      }
      FUN_004a7c90(lVar8 + lVar12,uVar6);
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x98;
    } while (lVar13 < *(int *)(param_1 + 0xd));
  }
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      lVar8 = param_1[6];
      piVar9 = *(int **)(param_2 + 0xa0);
      if (piVar9 == (int *)0x0) {
        iVar10 = *(int *)(param_2 + 0x9c);
LAB_004a7318:
        FUN_00532334(param_2 + 0x90,iVar10 + 1);
        piVar9 = *(int **)(param_2 + 0xa0);
        iVar10 = *piVar9;
LAB_004a732c:
        *piVar9 = iVar10 + 1;
        uVar6 = FUN_004e6758(*(undefined8 *)(param_2 + 0x90));
        iVar10 = *(int *)(param_2 + 0x98);
        *(int *)(param_2 + 0x98) = iVar10 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0xa0) + (long)iVar10 * 8 + 8) = uVar6;
      }
      else {
        iVar4 = *(int *)(param_2 + 0x98);
        iVar10 = *piVar9;
        if (iVar10 <= iVar4) {
          if (iVar10 == *(int *)(param_2 + 0x9c)) goto LAB_004a7318;
          goto LAB_004a732c;
        }
        *(int *)(param_2 + 0x98) = iVar4 + 1;
        uVar6 = *(undefined8 *)(piVar9 + (long)iVar4 * 2 + 2);
      }
      FUN_004a82b4(lVar8 + lVar12,uVar6);
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x30;
    } while (lVar13 < *(int *)((long)param_1 + 0x6c));
  }
  if (0 < *(int *)((long)param_1 + 0x74)) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      lVar8 = param_1[7];
      piVar9 = *(int **)(param_2 + 0x40);
      if (piVar9 == (int *)0x0) {
        iVar10 = *(int *)(param_2 + 0x3c);
LAB_004a73d8:
        FUN_00532334(param_2 + 0x30,iVar10 + 1);
        piVar9 = *(int **)(param_2 + 0x40);
        iVar10 = *piVar9;
LAB_004a73ec:
        *piVar9 = iVar10 + 1;
        uVar6 = FUN_004e64b4(*(undefined8 *)(param_2 + 0x30));
        iVar10 = *(int *)(param_2 + 0x38);
        *(int *)(param_2 + 0x38) = iVar10 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x40) + (long)iVar10 * 8 + 8) = uVar6;
      }
      else {
        iVar4 = *(int *)(param_2 + 0x38);
        iVar10 = *piVar9;
        if (iVar10 <= iVar4) {
          if (iVar10 == *(int *)(param_2 + 0x3c)) goto LAB_004a73d8;
          goto LAB_004a73ec;
        }
        *(int *)(param_2 + 0x38) = iVar4 + 1;
        uVar6 = *(undefined8 *)(piVar9 + (long)iVar4 * 2 + 2);
      }
      FUN_004a716c(lVar8 + lVar12,uVar6);
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x90;
    } while (lVar13 < *(int *)((long)param_1 + 0x74));
  }
  if (0 < *(int *)(param_1 + 0xf)) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      lVar8 = param_1[8];
      piVar9 = *(int **)(param_2 + 0x58);
      if (piVar9 == (int *)0x0) {
        iVar10 = *(int *)(param_2 + 0x54);
LAB_004a7498:
        FUN_00532334(param_2 + 0x48,iVar10 + 1);
        piVar9 = *(int **)(param_2 + 0x58);
        iVar10 = *piVar9;
LAB_004a74ac:
        *piVar9 = iVar10 + 1;
        uVar6 = FUN_004e6890(*(undefined8 *)(param_2 + 0x48));
        iVar10 = *(int *)(param_2 + 0x50);
        *(int *)(param_2 + 0x50) = iVar10 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x58) + (long)iVar10 * 8 + 8) = uVar6;
      }
      else {
        iVar4 = *(int *)(param_2 + 0x50);
        iVar10 = *piVar9;
        if (iVar10 <= iVar4) {
          if (iVar10 == *(int *)(param_2 + 0x54)) goto LAB_004a7498;
          goto LAB_004a74ac;
        }
        *(int *)(param_2 + 0x50) = iVar4 + 1;
        uVar6 = *(undefined8 *)(piVar9 + (long)iVar4 * 2 + 2);
      }
      FUN_004a7848(lVar8 + lVar12,uVar6);
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x50;
    } while (lVar13 < *(int *)(param_1 + 0xf));
  }
  if (0 < *(int *)((long)param_1 + 0x7c)) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      lVar8 = param_1[9];
      piVar9 = *(int **)(param_2 + 0x70);
      if (piVar9 == (int *)0x0) {
        iVar10 = *(int *)(param_2 + 0x6c);
LAB_004a7560:
        FUN_00532334(param_2 + 0x60,iVar10 + 1);
        piVar9 = *(int **)(param_2 + 0x70);
        iVar10 = *piVar9;
LAB_004a7574:
        *piVar9 = iVar10 + 1;
        lVar11 = FUN_004e6384(*(undefined8 *)(param_2 + 0x60));
        iVar10 = *(int *)(param_2 + 0x68);
        *(int *)(param_2 + 0x68) = iVar10 + 1;
        *(long *)(*(long *)(param_2 + 0x70) + (long)iVar10 * 8 + 8) = lVar11;
      }
      else {
        iVar4 = *(int *)(param_2 + 0x68);
        iVar10 = *piVar9;
        if (iVar10 <= iVar4) {
          if (iVar10 == *(int *)(param_2 + 0x6c)) goto LAB_004a7560;
          goto LAB_004a7574;
        }
        *(int *)(param_2 + 0x68) = iVar4 + 1;
        lVar11 = *(long *)(piVar9 + (long)iVar4 * 2 + 2);
      }
      puVar1 = (undefined4 *)(lVar8 + lVar12);
      uVar2 = *(uint *)(lVar11 + 0x10);
      uVar3 = *puVar1;
      *(uint *)(lVar11 + 0x10) = uVar2 | 2;
      *(undefined4 *)(lVar11 + 0x20) = uVar3;
      uVar3 = puVar1[1];
      *(uint *)(lVar11 + 0x10) = uVar2 | 6;
      *(undefined4 *)(lVar11 + 0x24) = uVar3;
      lVar14 = *(long *)(puVar1 + 2);
      lVar8 = FUN_004d2c4c();
      if (lVar14 != lVar8) {
        uVar6 = *(undefined8 *)(puVar1 + 2);
        lVar8 = *(long *)(lVar11 + 0x18);
        *(uint *)(lVar11 + 0x10) = *(uint *)(lVar11 + 0x10) | 1;
        if (lVar8 == 0) {
          puVar5 = (ulong *)(*(ulong *)(lVar11 + 8) & 0xfffffffffffffffe);
          if ((*(ulong *)(lVar11 + 8) & 1) != 0) {
            puVar5 = (ulong *)*puVar5;
          }
          lVar8 = FUN_004e653c(puVar5);
          *(long *)(lVar11 + 0x18) = lVar8;
        }
        FUN_004d32a0(lVar8,uVar6);
      }
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x10;
    } while (lVar13 < *(int *)((long)param_1 + 0x7c));
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      lVar8 = param_1[10];
      piVar9 = *(int **)(param_2 + 0x88);
      if (piVar9 == (int *)0x0) {
        iVar10 = *(int *)(param_2 + 0x84);
LAB_004a7680:
        FUN_00532334(param_2 + 0x78,iVar10 + 1);
        piVar9 = *(int **)(param_2 + 0x88);
        iVar10 = *piVar9;
LAB_004a7694:
        *piVar9 = iVar10 + 1;
        uVar6 = FUN_004e6678(*(undefined8 *)(param_2 + 0x78));
        iVar10 = *(int *)(param_2 + 0x80);
        *(int *)(param_2 + 0x80) = iVar10 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x88) + (long)iVar10 * 8 + 8) = uVar6;
      }
      else {
        iVar4 = *(int *)(param_2 + 0x80);
        iVar10 = *piVar9;
        if (iVar10 <= iVar4) {
          if (iVar10 == *(int *)(param_2 + 0x84)) goto LAB_004a7680;
          goto LAB_004a7694;
        }
        *(int *)(param_2 + 0x80) = iVar4 + 1;
        uVar6 = *(undefined8 *)(piVar9 + (long)iVar4 * 2 + 2);
      }
      FUN_004a7c90(lVar8 + lVar12,uVar6);
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x98;
    } while (lVar13 < *(int *)(param_1 + 0x10));
  }
  if (0 < *(int *)((long)param_1 + 0x84)) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      piVar9 = *(int **)(param_2 + 0xb8);
      if (piVar9 == (int *)0x0) {
        iVar10 = *(int *)(param_2 + 0xb4);
LAB_004a775c:
        FUN_00532334(param_2 + 0xa8,iVar10 + 1);
        piVar9 = *(int **)(param_2 + 0xb8);
        iVar10 = *piVar9;
LAB_004a7770:
        *piVar9 = iVar10 + 1;
        lVar8 = FUN_004e6444(*(undefined8 *)(param_2 + 0xa8));
        iVar10 = *(int *)(param_2 + 0xb0);
        *(int *)(param_2 + 0xb0) = iVar10 + 1;
        *(long *)(*(long *)(param_2 + 0xb8) + (long)iVar10 * 8 + 8) = lVar8;
      }
      else {
        iVar4 = *(int *)(param_2 + 0xb0);
        iVar10 = *piVar9;
        if (iVar10 <= iVar4) {
          if (iVar10 == *(int *)(param_2 + 0xb4)) goto LAB_004a775c;
          goto LAB_004a7770;
        }
        *(int *)(param_2 + 0xb0) = iVar4 + 1;
        lVar8 = *(long *)(piVar9 + (long)iVar4 * 2 + 2);
      }
      lVar11 = param_1[0xb];
      uVar2 = *(uint *)(lVar8 + 0x10);
      uVar3 = *(undefined4 *)(lVar11 + lVar12);
      *(uint *)(lVar8 + 0x10) = uVar2 | 1;
      *(undefined4 *)(lVar8 + 0x18) = uVar3;
      uVar3 = ((undefined4 *)(lVar11 + lVar12))[1];
      *(uint *)(lVar8 + 0x10) = uVar2 | 3;
      *(undefined4 *)(lVar8 + 0x1c) = uVar3;
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 8;
    } while (lVar13 < *(int *)((long)param_1 + 0x84));
  }
  if (0 < *(int *)(param_1 + 0x11)) {
    lVar13 = 0;
    do {
      FUN_004a838c(param_2,*(undefined8 *)(param_1[0xc] + lVar13 * 8));
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x11));
  }
  lVar12 = param_1[4];
  lVar13 = FUN_004dd064();
  if (lVar12 == lVar13) {
    return;
  }
  lVar13 = *(long *)(param_2 + 0xe0);
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
  if (lVar13 == 0) {
    puVar5 = (ulong *)(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_2 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar13 = FUN_004e6c50(puVar5);
    *(long *)(param_2 + 0xe0) = lVar13;
  }
  FUN_004dd9e0(lVar13,param_1[4]);
  return;
}


