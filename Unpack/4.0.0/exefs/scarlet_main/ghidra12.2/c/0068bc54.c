/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0068bc54; name: FUN_0068bc54
 */


void FUN_0068bc54(long param_1,undefined *param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  int iVar20;
  long lVar21;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar16 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*puVar1 & 1) == 0) {
      lVar21 = FUN_0021d48c(puVar1);
    }
    else {
      lVar21 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    uVar3 = *(ulong *)(uVar16 + 0x10);
    lVar4 = *(long *)(uVar16 + 0x18);
    if ((*(byte *)(uVar16 + 8) & 1) == 0) {
      lVar4 = uVar16 + 9;
      uVar3 = (ulong)(*(byte *)(uVar16 + 8) >> 1);
    }
    FUN_0021d540(lVar21,lVar4,uVar3);
  }
  uVar5 = *(uint *)(param_2 + 0x18);
  if (uVar5 != 0) {
    puVar12 = *(undefined8 **)(param_2 + 0x20);
    puVar9 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x10),uVar5);
    iVar6 = *(int *)(param_1 + 0x18);
    iVar20 = **(int **)(param_1 + 0x20);
    uVar7 = iVar20 - iVar6;
    uVar16 = (ulong)uVar7;
    if ((0 < (int)uVar5) && (0 < (int)uVar7)) {
      uVar3 = (ulong)uVar5;
      if (uVar16 - 1 <= (ulong)uVar5 - 1) {
        uVar3 = uVar16;
      }
      lVar21 = -uVar3;
      puVar19 = puVar9;
      puVar15 = puVar12;
      do {
        puVar15 = puVar15 + 1;
        FUN_0068d1f8(*puVar15,*puVar19);
        bVar8 = lVar21 != -1;
        lVar21 = lVar21 + 1;
        puVar19 = puVar19 + 1;
      } while (bVar8);
    }
    if ((int)uVar7 < (int)uVar5) {
      iVar20 = (iVar6 + uVar5) - iVar20;
      uVar17 = *(undefined8 *)(param_1 + 0x10);
      uVar16 = -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3;
      puVar12 = (undefined8 *)(uVar16 + (long)puVar12);
      puVar9 = (undefined8 *)((long)puVar9 + uVar16);
      do {
        puVar12 = puVar12 + 1;
        uVar18 = *puVar12;
        uVar10 = FUN_0068c8f0(uVar17);
        FUN_0068d1f8(uVar18,uVar10);
        iVar20 = iVar20 + -1;
        *puVar9 = uVar10;
        puVar9 = puVar9 + 1;
      } while (iVar20 != 0);
    }
    iVar6 = *(int *)(param_1 + 0x18) + uVar5;
    *(int *)(param_1 + 0x18) = iVar6;
    if (**(int **)(param_1 + 0x20) < iVar6) {
      **(int **)(param_1 + 0x20) = iVar6;
    }
  }
  uVar5 = *(uint *)(param_2 + 0x30);
  if (uVar5 != 0) {
    puVar12 = *(undefined8 **)(param_2 + 0x38);
    puVar9 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x28),uVar5);
    iVar6 = *(int *)(param_1 + 0x30);
    iVar20 = **(int **)(param_1 + 0x38);
    uVar7 = iVar20 - iVar6;
    uVar16 = (ulong)uVar7;
    if ((0 < (int)uVar5) && (0 < (int)uVar7)) {
      uVar3 = (ulong)uVar5;
      if (uVar16 - 1 <= (ulong)uVar5 - 1) {
        uVar3 = uVar16;
      }
      lVar21 = -uVar3;
      puVar19 = puVar9;
      puVar15 = puVar12;
      do {
        puVar15 = puVar15 + 1;
        FUN_0068d208(*puVar15,*puVar19);
        bVar8 = lVar21 != -1;
        lVar21 = lVar21 + 1;
        puVar19 = puVar19 + 1;
      } while (bVar8);
    }
    if ((int)uVar7 < (int)uVar5) {
      iVar20 = (iVar6 + uVar5) - iVar20;
      uVar17 = *(undefined8 *)(param_1 + 0x28);
      uVar16 = -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3;
      puVar12 = (undefined8 *)(uVar16 + (long)puVar12);
      puVar9 = (undefined8 *)((long)puVar9 + uVar16);
      do {
        puVar12 = puVar12 + 1;
        uVar18 = *puVar12;
        uVar10 = FUN_0068ccd4(uVar17);
        FUN_0068d208(uVar18,uVar10);
        iVar20 = iVar20 + -1;
        *puVar9 = uVar10;
        puVar9 = puVar9 + 1;
      } while (iVar20 != 0);
    }
    iVar6 = *(int *)(param_1 + 0x30) + uVar5;
    *(int *)(param_1 + 0x30) = iVar6;
    if (**(int **)(param_1 + 0x38) < iVar6) {
      **(int **)(param_1 + 0x38) = iVar6;
    }
  }
  if (param_2 != PTR_DAT_047cf548) {
    puVar13 = *(undefined **)(param_2 + 0x40);
    if (puVar13 != (undefined *)0x0) {
      lVar21 = *(long *)(param_1 + 0x40);
      if (lVar21 == 0) {
        puVar11 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar11 = (ulong *)*puVar11;
        }
        lVar21 = FUN_0068ce60(puVar11);
        *(long *)(param_1 + 0x40) = lVar21;
        puVar13 = *(undefined **)(param_2 + 0x40);
      }
      puVar14 = PTR_DAT_047cf560;
      if (puVar13 != (undefined *)0x0) {
        puVar14 = puVar13;
      }
      FUN_0068a308(lVar21,puVar14);
    }
    puVar13 = *(undefined **)(param_2 + 0x48);
    if (puVar13 != (undefined *)0x0) {
      lVar21 = *(long *)(param_1 + 0x48);
      if (lVar21 == 0) {
        puVar11 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar11 = (ulong *)*puVar11;
        }
        lVar21 = FUN_0068c9bc(puVar11);
        *(long *)(param_1 + 0x48) = lVar21;
        puVar13 = *(undefined **)(param_2 + 0x48);
      }
      puVar14 = PTR_DAT_047cf568;
      if (puVar13 != (undefined *)0x0) {
        puVar14 = puVar13;
      }
      FUN_00687274(lVar21,puVar14);
    }
    puVar13 = *(undefined **)(param_2 + 0x50);
    if (puVar13 != (undefined *)0x0) {
      lVar21 = *(long *)(param_1 + 0x50);
      if (lVar21 == 0) {
        puVar11 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar11 = (ulong *)*puVar11;
        }
        lVar21 = FUN_005383d0(puVar11);
        *(long *)(param_1 + 0x50) = lVar21;
        puVar13 = *(undefined **)(param_2 + 0x50);
      }
      puVar14 = PTR_DAT_047cdd20;
      if (puVar13 != (undefined *)0x0) {
        puVar14 = puVar13;
      }
      FUN_00536aec(lVar21,puVar14);
    }
    puVar13 = PTR_DAT_047cf530;
    puVar14 = *(undefined **)(param_2 + 0x58);
    if (puVar14 != (undefined *)0x0) {
      lVar21 = *(long *)(param_1 + 0x58);
      if (lVar21 == 0) {
        puVar11 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar11 = (ulong *)*puVar11;
        }
        lVar21 = FUN_0068d018(puVar11);
        *(long *)(param_1 + 0x58) = lVar21;
        puVar14 = *(undefined **)(param_2 + 0x58);
      }
      puVar2 = puVar13;
      if (puVar14 != (undefined *)0x0) {
        puVar2 = puVar14;
      }
      FUN_0068c040(lVar21,puVar2);
    }
    puVar14 = *(undefined **)(param_2 + 0x60);
    if (puVar14 != (undefined *)0x0) {
      lVar21 = *(long *)(param_1 + 0x60);
      if (lVar21 == 0) {
        puVar11 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar11 = (ulong *)*puVar11;
        }
        lVar21 = FUN_0068d018(puVar11);
        *(long *)(param_1 + 0x60) = lVar21;
        puVar14 = *(undefined **)(param_2 + 0x60);
      }
      if (puVar14 != (undefined *)0x0) {
        puVar13 = puVar14;
      }
      FUN_0068c040(lVar21,puVar13);
    }
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_2 + 0x68);
  }
  return;
}


