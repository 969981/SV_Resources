/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e309c; name: FUN_004e309c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_004e309c(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  int iVar17;
  long lVar18;
  undefined8 *puVar19;
  
  uVar11 = *(ulong *)(param_2 + 8);
  if ((uVar11 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar18 = FUN_00264e54();
    }
    else {
      lVar18 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0051496c(lVar18,(uVar11 & 0xfffffffffffffffe) + 8);
  }
  uVar3 = *(uint *)(param_2 + 0x20);
  if (uVar3 != 0) {
    puVar12 = *(undefined8 **)(param_2 + 0x28);
    puVar8 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x18),uVar3);
    iVar4 = *(int *)(param_1 + 0x20);
    iVar17 = **(int **)(param_1 + 0x28);
    uVar5 = iVar17 - iVar4;
    uVar11 = (ulong)uVar5;
    if ((0 < (int)uVar3) && (0 < (int)uVar5)) {
      uVar2 = (ulong)uVar3;
      if (uVar11 - 1 <= (ulong)uVar3 - 1) {
        uVar2 = uVar11;
      }
      lVar18 = -uVar2;
      puVar15 = puVar8;
      puVar19 = puVar12;
      do {
        puVar19 = puVar19 + 1;
        FUN_004e85d8(*puVar19,*puVar15);
        bVar7 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar15 = puVar15 + 1;
      } while (bVar7);
    }
    if ((int)uVar5 < (int)uVar3) {
      iVar17 = (iVar4 + uVar3) - iVar17;
      uVar14 = *(undefined8 *)(param_1 + 0x18);
      uVar11 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3;
      puVar12 = (undefined8 *)(uVar11 + (long)puVar12);
      puVar8 = (undefined8 *)((long)puVar8 + uVar11);
      do {
        puVar12 = puVar12 + 1;
        uVar16 = *puVar12;
        uVar9 = FUN_004e7510(uVar14);
        FUN_004e85d8(uVar16,uVar9);
        iVar17 = iVar17 + -1;
        *puVar8 = uVar9;
        puVar8 = puVar8 + 1;
      } while (iVar17 != 0);
    }
    iVar4 = *(int *)(param_1 + 0x20) + uVar3;
    *(int *)(param_1 + 0x20) = iVar4;
    if (**(int **)(param_1 + 0x28) < iVar4) {
      **(int **)(param_1 + 0x28) = iVar4;
    }
  }
  puVar6 = PTR_DAT_047cba80;
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 0x3f) != 0) {
    if ((uVar3 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      plVar1 = (long *)(param_1 + 0x30);
      puVar10 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar13 = (undefined *)*plVar1;
      }
      else {
        puVar10 = (ulong *)*puVar10;
        puVar13 = (undefined *)*plVar1;
      }
      if (puVar13 == puVar6) {
        FUN_001fcdc8(plVar1,puVar10);
      }
      else {
        FUN_001fcec0(puVar13,uVar14);
      }
    }
    if ((uVar3 >> 1 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      puVar12 = (undefined8 *)(param_1 + 0x38);
      puVar10 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar13 = (undefined *)*puVar12;
      }
      else {
        puVar10 = (ulong *)*puVar10;
        puVar13 = (undefined *)*puVar12;
      }
      if (puVar13 == puVar6) {
        FUN_001fcdc8(puVar12,puVar10);
      }
      else {
        FUN_001fcec0(puVar13,uVar14);
      }
    }
    if ((uVar3 >> 2 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x40);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      plVar1 = (long *)(param_1 + 0x40);
      puVar10 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar13 = (undefined *)*plVar1;
      }
      else {
        puVar10 = (ulong *)*puVar10;
        puVar13 = (undefined *)*plVar1;
      }
      if (puVar13 == puVar6) {
        FUN_001fcdc8(plVar1,puVar10);
      }
      else {
        FUN_001fcec0(puVar13,uVar14);
      }
    }
    if ((uVar3 >> 3 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    }
    if ((uVar3 >> 4 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    }
    if ((uVar3 >> 5 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar3;
  }
  return;
}


