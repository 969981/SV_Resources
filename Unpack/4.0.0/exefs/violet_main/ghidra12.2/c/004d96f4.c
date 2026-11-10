/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004d96f4; name: FUN_004d96f4
 */


void FUN_004d96f4(long param_1,long param_2)

{
  ulong *puVar1;
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
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  int iVar17;
  long lVar18;
  
  uVar10 = *(ulong *)(param_2 + 8);
  puVar1 = (ulong *)(param_1 + 8);
  if ((uVar10 & 1) != 0) {
    if ((*puVar1 & 1) == 0) {
      lVar18 = FUN_00264e54(puVar1);
    }
    else {
      lVar18 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    FUN_0051496c(lVar18,(uVar10 & 0xfffffffffffffffe) + 8);
  }
  uVar3 = *(uint *)(param_2 + 0x20);
  if (uVar3 != 0) {
    puVar11 = *(undefined8 **)(param_2 + 0x28);
    puVar7 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x18),uVar3);
    iVar4 = *(int *)(param_1 + 0x20);
    iVar17 = **(int **)(param_1 + 0x28);
    uVar5 = iVar17 - iVar4;
    uVar10 = (ulong)uVar5;
    if ((0 < (int)uVar3) && (0 < (int)uVar5)) {
      uVar2 = (ulong)uVar3;
      if (uVar10 - 1 <= (ulong)uVar3 - 1) {
        uVar2 = uVar10;
      }
      lVar18 = -uVar2;
      puVar15 = puVar7;
      puVar13 = puVar11;
      do {
        puVar13 = puVar13 + 1;
        FUN_004e85c8(*puVar13,*puVar15);
        bVar6 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar15 = puVar15 + 1;
      } while (bVar6);
    }
    if ((int)uVar5 < (int)uVar3) {
      iVar17 = (iVar4 + uVar3) - iVar17;
      uVar14 = *(undefined8 *)(param_1 + 0x18);
      uVar10 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3;
      puVar11 = (undefined8 *)(uVar10 + (long)puVar11);
      puVar7 = (undefined8 *)((long)puVar7 + uVar10);
      do {
        puVar11 = puVar11 + 1;
        uVar16 = *puVar11;
        uVar8 = FUN_004e6af8(uVar14);
        FUN_004e85c8(uVar16,uVar8);
        iVar17 = iVar17 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar17 != 0);
    }
    iVar4 = *(int *)(param_1 + 0x20) + uVar3;
    *(int *)(param_1 + 0x20) = iVar4;
    if (**(int **)(param_1 + 0x28) < iVar4) {
      **(int **)(param_1 + 0x28) = iVar4;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 3) != 0) {
    if ((uVar3 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar9 = (ulong *)*puVar9;
      }
      puVar12 = *(undefined **)(param_1 + 0x30);
      if (puVar12 == PTR_DAT_047cba80) {
        FUN_001fcdc8((undefined8 *)(param_1 + 0x30),puVar9);
        if ((uVar3 >> 1 & 1) == 0) {
          return;
        }
        goto LAB_004d98b0;
      }
      FUN_001fcec0(puVar12,uVar14);
    }
    if ((uVar3 >> 1 & 1) != 0) {
LAB_004d98b0:
      lVar18 = *(long *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if (lVar18 == 0) {
        puVar9 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
        lVar18 = FUN_004e7290(puVar9);
        *(long *)(param_1 + 0x38) = lVar18;
      }
      puVar12 = PTR_DAT_047cd958;
      if (*(undefined **)(param_2 + 0x38) != (undefined *)0x0) {
        puVar12 = *(undefined **)(param_2 + 0x38);
      }
      FUN_004d9928(lVar18,puVar12);
      return;
    }
  }
  return;
}


