/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004cdc00; name: FUN_004cdc00
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_004cdc00(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  int iVar17;
  long lVar18;
  undefined8 *puVar19;
  
  FUN_005239b8(param_1 + 0x10,param_2 + 0x10);
  uVar10 = *(ulong *)(param_2 + 8);
  if ((uVar10 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar18 = FUN_00264e54();
    }
    else {
      lVar18 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0051496c(lVar18,(uVar10 & 0xfffffffffffffffe) + 8);
  }
  uVar3 = *(uint *)(param_2 + 0x38);
  if (uVar3 != 0) {
    puVar11 = *(undefined8 **)(param_2 + 0x40);
    puVar7 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x30),uVar3);
    iVar4 = *(int *)(param_1 + 0x38);
    iVar17 = **(int **)(param_1 + 0x40);
    uVar5 = iVar17 - iVar4;
    uVar10 = (ulong)uVar5;
    if ((0 < (int)uVar3) && (0 < (int)uVar5)) {
      uVar2 = (ulong)uVar3;
      if (uVar10 - 1 <= (ulong)uVar3 - 1) {
        uVar2 = uVar10;
      }
      lVar18 = -uVar2;
      puVar15 = puVar7;
      puVar19 = puVar11;
      do {
        puVar19 = puVar19 + 1;
        FUN_004e83d8(*puVar19,*puVar15);
        bVar6 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar15 = puVar15 + 1;
      } while (bVar6);
    }
    if ((int)uVar5 < (int)uVar3) {
      iVar17 = (iVar4 + uVar3) - iVar17;
      uVar14 = *(undefined8 *)(param_1 + 0x30);
      uVar10 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3;
      puVar11 = (undefined8 *)(uVar10 + (long)puVar11);
      puVar7 = (undefined8 *)((long)puVar7 + uVar10);
      do {
        puVar11 = puVar11 + 1;
        uVar16 = *puVar11;
        uVar8 = FUN_004e75dc(uVar14);
        FUN_004e83d8(uVar16,uVar8);
        iVar17 = iVar17 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar17 != 0);
    }
    iVar4 = *(int *)(param_1 + 0x38) + uVar3;
    *(int *)(param_1 + 0x38) = iVar4;
    if (**(int **)(param_1 + 0x40) < iVar4) {
      **(int **)(param_1 + 0x40) = iVar4;
    }
  }
  puVar13 = PTR_DAT_047cba80;
  uVar3 = *(uint *)(param_2 + 0x28);
  if ((uVar3 & 0xff) != 0) {
    if ((uVar3 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x48);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
      plVar1 = (long *)(param_1 + 0x48);
      puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar12 = (undefined *)*plVar1;
      }
      else {
        puVar9 = (ulong *)*puVar9;
        puVar12 = (undefined *)*plVar1;
      }
      if (puVar12 == puVar13) {
        FUN_001fcdc8(plVar1,puVar9);
      }
      else {
        FUN_001fcec0(puVar12,uVar14);
      }
    }
    if ((uVar3 >> 1 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x50);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 2;
      plVar1 = (long *)(param_1 + 0x50);
      puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar12 = (undefined *)*plVar1;
      }
      else {
        puVar9 = (ulong *)*puVar9;
        puVar12 = (undefined *)*plVar1;
      }
      if (puVar12 == puVar13) {
        FUN_001fcdc8(plVar1,puVar9);
      }
      else {
        FUN_001fcec0(puVar12,uVar14);
      }
    }
    if ((uVar3 >> 2 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x58);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 4;
      plVar1 = (long *)(param_1 + 0x58);
      puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar12 = (undefined *)*plVar1;
      }
      else {
        puVar9 = (ulong *)*puVar9;
        puVar12 = (undefined *)*plVar1;
      }
      if (puVar12 == puVar13) {
        FUN_001fcdc8(plVar1,puVar9);
      }
      else {
        FUN_001fcec0(puVar12,uVar14);
      }
    }
    if ((uVar3 >> 3 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x60);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 8;
      plVar1 = (long *)(param_1 + 0x60);
      puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar12 = (undefined *)*plVar1;
      }
      else {
        puVar9 = (ulong *)*puVar9;
        puVar12 = (undefined *)*plVar1;
      }
      if (puVar12 == puVar13) {
        FUN_001fcdc8(plVar1,puVar9);
      }
      else {
        FUN_001fcec0(puVar12,uVar14);
      }
    }
    if ((uVar3 >> 4 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x68);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
      plVar1 = (long *)(param_1 + 0x68);
      puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar12 = (undefined *)*plVar1;
      }
      else {
        puVar9 = (ulong *)*puVar9;
        puVar12 = (undefined *)*plVar1;
      }
      if (puVar12 == puVar13) {
        FUN_001fcdc8(plVar1,puVar9);
      }
      else {
        FUN_001fcec0(puVar12,uVar14);
      }
    }
    if ((uVar3 >> 5 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x70);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20;
      puVar11 = (undefined8 *)(param_1 + 0x70);
      puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar12 = (undefined *)*puVar11;
      }
      else {
        puVar9 = (ulong *)*puVar9;
        puVar12 = (undefined *)*puVar11;
      }
      if (puVar12 == puVar13) {
        FUN_001fcdc8(puVar11,puVar9);
      }
      else {
        FUN_001fcec0(puVar12,uVar14);
      }
    }
    if ((uVar3 >> 6 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x78);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x40;
      plVar1 = (long *)(param_1 + 0x78);
      puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar12 = (undefined *)*plVar1;
      }
      else {
        puVar9 = (ulong *)*puVar9;
        puVar12 = (undefined *)*plVar1;
      }
      if (puVar12 == puVar13) {
        FUN_001fcdc8(plVar1,puVar9);
      }
      else {
        FUN_001fcec0(puVar12,uVar14);
      }
    }
    if ((uVar3 >> 7 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x80);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      plVar1 = (long *)(param_1 + 0x80);
      puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar12 = (undefined *)*plVar1;
      }
      else {
        puVar9 = (ulong *)*puVar9;
        puVar12 = (undefined *)*plVar1;
      }
      if (puVar12 == puVar13) {
        FUN_001fcdc8(plVar1,puVar9);
      }
      else {
        FUN_001fcec0(puVar12,uVar14);
      }
    }
  }
  if ((uVar3 & 0xff00) != 0) {
    if ((uVar3 >> 8 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x88);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x100;
      puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar9 = (ulong *)*puVar9;
      }
      puVar13 = *(undefined **)(param_1 + 0x88);
      if (puVar13 == PTR_DAT_047cba80) {
        FUN_001fcdc8((undefined8 *)(param_1 + 0x88),puVar9);
      }
      else {
        FUN_001fcec0(puVar13,uVar14);
      }
    }
    if ((uVar3 >> 9 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x90);
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x200;
      puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar9 = (ulong *)*puVar9;
      }
      puVar13 = *(undefined **)(param_1 + 0x90);
      if (puVar13 == PTR_DAT_047cba80) {
        FUN_001fcdc8((undefined8 *)(param_1 + 0x90),puVar9);
      }
      else {
        FUN_001fcec0(puVar13,uVar14);
      }
    }
    if ((uVar3 >> 10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
    }
    if ((uVar3 >> 0xb & 1) != 0) {
      *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)(param_2 + 0x99);
    }
    if ((uVar3 >> 0xc & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9a) = *(undefined1 *)(param_2 + 0x9a);
    }
    if ((uVar3 >> 0xd & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9b) = *(undefined1 *)(param_2 + 0x9b);
    }
    if ((uVar3 >> 0xe & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9c) = *(undefined1 *)(param_2 + 0x9c);
    }
    if ((uVar3 >> 0xf & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9d) = *(undefined1 *)(param_2 + 0x9d);
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar3;
  }
  if ((uVar3 & 0xf0000) != 0) {
    if ((uVar3 >> 0x10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9e) = *(undefined1 *)(param_2 + 0x9e);
    }
    if ((uVar3 >> 0x11 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x9f) = *(undefined1 *)(param_2 + 0x9f);
    }
    if ((uVar3 >> 0x12 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
    }
    if ((uVar3 >> 0x13 & 1) != 0) {
      *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(param_2 + 0xa4);
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar3;
  }
  return;
}


