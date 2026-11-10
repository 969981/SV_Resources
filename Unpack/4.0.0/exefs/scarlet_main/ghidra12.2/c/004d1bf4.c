/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d1bf4; name: FUN_004d1bf4
 */


void FUN_004d1bf4(long param_1,long param_2)

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
  undefined8 uVar15;
  undefined8 *puVar16;
  int iVar17;
  long lVar18;
  
  puVar1 = (ulong *)(param_1 + 8);
  uVar10 = *(ulong *)(param_2 + 8);
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
      puVar16 = puVar7;
      puVar13 = puVar11;
      do {
        puVar13 = puVar13 + 1;
        FUN_004e8280(*puVar13,*puVar16);
        bVar6 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar16 = puVar16 + 1;
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
        uVar15 = *puVar11;
        uVar8 = FUN_004e6678(uVar14);
        FUN_004e8280(uVar15,uVar8);
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
      puVar16 = puVar7;
      puVar13 = puVar11;
      do {
        puVar13 = puVar13 + 1;
        FUN_004e8250(*puVar13,*puVar16);
        bVar6 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar16 = puVar16 + 1;
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
        uVar15 = *puVar11;
        uVar8 = FUN_004e64b4(uVar14);
        FUN_004e8250(uVar15,uVar8);
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
  uVar3 = *(uint *)(param_2 + 0x50);
  if (uVar3 != 0) {
    puVar11 = *(undefined8 **)(param_2 + 0x58);
    puVar7 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x48),uVar3);
    iVar4 = *(int *)(param_1 + 0x50);
    iVar17 = **(int **)(param_1 + 0x58);
    uVar5 = iVar17 - iVar4;
    uVar10 = (ulong)uVar5;
    if ((0 < (int)uVar3) && (0 < (int)uVar5)) {
      uVar2 = (ulong)uVar3;
      if (uVar10 - 1 <= (ulong)uVar3 - 1) {
        uVar2 = uVar10;
      }
      lVar18 = -uVar2;
      puVar16 = puVar7;
      puVar13 = puVar11;
      do {
        puVar13 = puVar13 + 1;
        FUN_004e8260(*puVar13,*puVar16);
        bVar6 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar16 = puVar16 + 1;
      } while (bVar6);
    }
    if ((int)uVar5 < (int)uVar3) {
      iVar17 = (iVar4 + uVar3) - iVar17;
      uVar14 = *(undefined8 *)(param_1 + 0x48);
      uVar10 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3;
      puVar11 = (undefined8 *)(uVar10 + (long)puVar11);
      puVar7 = (undefined8 *)((long)puVar7 + uVar10);
      do {
        puVar11 = puVar11 + 1;
        uVar15 = *puVar11;
        uVar8 = FUN_004e6890(uVar14);
        FUN_004e8260(uVar15,uVar8);
        iVar17 = iVar17 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar17 != 0);
    }
    iVar4 = *(int *)(param_1 + 0x50) + uVar3;
    *(int *)(param_1 + 0x50) = iVar4;
    if (**(int **)(param_1 + 0x58) < iVar4) {
      **(int **)(param_1 + 0x58) = iVar4;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x68);
  if (uVar3 != 0) {
    puVar11 = *(undefined8 **)(param_2 + 0x70);
    puVar7 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x60),uVar3);
    iVar4 = *(int *)(param_1 + 0x68);
    iVar17 = **(int **)(param_1 + 0x70);
    uVar5 = iVar17 - iVar4;
    uVar10 = (ulong)uVar5;
    if ((0 < (int)uVar3) && (0 < (int)uVar5)) {
      uVar2 = (ulong)uVar3;
      if (uVar10 - 1 <= (ulong)uVar3 - 1) {
        uVar2 = uVar10;
      }
      lVar18 = -uVar2;
      puVar16 = puVar7;
      puVar13 = puVar11;
      do {
        puVar13 = puVar13 + 1;
        FUN_004e8338(*puVar13,*puVar16);
        bVar6 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar16 = puVar16 + 1;
      } while (bVar6);
    }
    if ((int)uVar5 < (int)uVar3) {
      iVar17 = (iVar4 + uVar3) - iVar17;
      uVar14 = *(undefined8 *)(param_1 + 0x60);
      uVar10 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3;
      puVar11 = (undefined8 *)(uVar10 + (long)puVar11);
      puVar7 = (undefined8 *)((long)puVar7 + uVar10);
      do {
        puVar11 = puVar11 + 1;
        uVar15 = *puVar11;
        uVar8 = FUN_004e6384(uVar14);
        FUN_004e8338(uVar15,uVar8);
        iVar17 = iVar17 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar17 != 0);
    }
    iVar4 = *(int *)(param_1 + 0x68) + uVar3;
    *(int *)(param_1 + 0x68) = iVar4;
    if (**(int **)(param_1 + 0x70) < iVar4) {
      **(int **)(param_1 + 0x70) = iVar4;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x80);
  if (uVar3 != 0) {
    puVar11 = *(undefined8 **)(param_2 + 0x88);
    puVar7 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x78),uVar3);
    iVar4 = *(int *)(param_1 + 0x80);
    iVar17 = **(int **)(param_1 + 0x88);
    uVar5 = iVar17 - iVar4;
    uVar10 = (ulong)uVar5;
    if ((0 < (int)uVar3) && (0 < (int)uVar5)) {
      uVar2 = (ulong)uVar3;
      if (uVar10 - 1 <= (ulong)uVar3 - 1) {
        uVar2 = uVar10;
      }
      lVar18 = -uVar2;
      puVar16 = puVar7;
      puVar13 = puVar11;
      do {
        puVar13 = puVar13 + 1;
        FUN_004e8280(*puVar13,*puVar16);
        bVar6 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar16 = puVar16 + 1;
      } while (bVar6);
    }
    if ((int)uVar5 < (int)uVar3) {
      iVar17 = (iVar4 + uVar3) - iVar17;
      uVar14 = *(undefined8 *)(param_1 + 0x78);
      uVar10 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3;
      puVar11 = (undefined8 *)(uVar10 + (long)puVar11);
      puVar7 = (undefined8 *)((long)puVar7 + uVar10);
      do {
        puVar11 = puVar11 + 1;
        uVar15 = *puVar11;
        uVar8 = FUN_004e6678(uVar14);
        FUN_004e8280(uVar15,uVar8);
        iVar17 = iVar17 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar17 != 0);
    }
    iVar4 = *(int *)(param_1 + 0x80) + uVar3;
    *(int *)(param_1 + 0x80) = iVar4;
    if (**(int **)(param_1 + 0x88) < iVar4) {
      **(int **)(param_1 + 0x88) = iVar4;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x98);
  if (uVar3 != 0) {
    puVar11 = *(undefined8 **)(param_2 + 0xa0);
    puVar7 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x90),uVar3);
    iVar4 = *(int *)(param_1 + 0x98);
    iVar17 = **(int **)(param_1 + 0xa0);
    uVar5 = iVar17 - iVar4;
    uVar10 = (ulong)uVar5;
    if ((0 < (int)uVar3) && (0 < (int)uVar5)) {
      uVar2 = (ulong)uVar3;
      if (uVar10 - 1 <= (ulong)uVar3 - 1) {
        uVar2 = uVar10;
      }
      lVar18 = -uVar2;
      puVar16 = puVar7;
      puVar13 = puVar11;
      do {
        puVar13 = puVar13 + 1;
        FUN_004e8348(*puVar13,*puVar16);
        bVar6 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar16 = puVar16 + 1;
      } while (bVar6);
    }
    if ((int)uVar5 < (int)uVar3) {
      iVar17 = (iVar4 + uVar3) - iVar17;
      uVar14 = *(undefined8 *)(param_1 + 0x90);
      uVar10 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3;
      puVar11 = (undefined8 *)(uVar10 + (long)puVar11);
      puVar7 = (undefined8 *)((long)puVar7 + uVar10);
      do {
        puVar11 = puVar11 + 1;
        uVar15 = *puVar11;
        uVar8 = FUN_004e6758(uVar14);
        FUN_004e8348(uVar15,uVar8);
        iVar17 = iVar17 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar17 != 0);
    }
    iVar4 = *(int *)(param_1 + 0x98) + uVar3;
    *(int *)(param_1 + 0x98) = iVar4;
    if (**(int **)(param_1 + 0xa0) < iVar4) {
      **(int **)(param_1 + 0xa0) = iVar4;
    }
  }
  uVar3 = *(uint *)(param_2 + 0xb0);
  if (uVar3 != 0) {
    puVar11 = *(undefined8 **)(param_2 + 0xb8);
    puVar7 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0xa8),uVar3);
    iVar4 = *(int *)(param_1 + 0xb0);
    iVar17 = **(int **)(param_1 + 0xb8);
    uVar5 = iVar17 - iVar4;
    uVar10 = (ulong)uVar5;
    if ((0 < (int)uVar3) && (0 < (int)uVar5)) {
      uVar2 = (ulong)uVar3;
      if (uVar10 - 1 <= (ulong)uVar3 - 1) {
        uVar2 = uVar10;
      }
      lVar18 = -uVar2;
      puVar16 = puVar7;
      puVar13 = puVar11;
      do {
        puVar13 = puVar13 + 1;
        FUN_004e8358(*puVar13,*puVar16);
        bVar6 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar16 = puVar16 + 1;
      } while (bVar6);
    }
    if ((int)uVar5 < (int)uVar3) {
      iVar17 = (iVar4 + uVar3) - iVar17;
      uVar14 = *(undefined8 *)(param_1 + 0xa8);
      uVar10 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3;
      puVar11 = (undefined8 *)(uVar10 + (long)puVar11);
      puVar7 = (undefined8 *)((long)puVar7 + uVar10);
      do {
        puVar11 = puVar11 + 1;
        uVar15 = *puVar11;
        uVar8 = FUN_004e6444(uVar14);
        FUN_004e8358(uVar15,uVar8);
        iVar17 = iVar17 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar17 != 0);
    }
    iVar4 = *(int *)(param_1 + 0xb0) + uVar3;
    *(int *)(param_1 + 0xb0) = iVar4;
    if (**(int **)(param_1 + 0xb8) < iVar4) {
      **(int **)(param_1 + 0xb8) = iVar4;
    }
  }
  FUN_004e80a8(param_1 + 0xc0,param_2 + 0xc0);
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 3) != 0) {
    if ((uVar3 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0xd8);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar9 = (ulong *)*puVar9;
      }
      puVar12 = *(undefined **)(param_1 + 0xd8);
      if (puVar12 == PTR_DAT_047cba80) {
        FUN_001fcdc8((undefined8 *)(param_1 + 0xd8),puVar9);
        if ((uVar3 >> 1 & 1) == 0) {
          return;
        }
        goto LAB_004d2348;
      }
      FUN_001fcec0(puVar12,uVar14);
    }
    if ((uVar3 >> 1 & 1) != 0) {
LAB_004d2348:
      lVar18 = *(long *)(param_1 + 0xe0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if (lVar18 == 0) {
        puVar9 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
        lVar18 = FUN_004e6c50(puVar9);
        *(long *)(param_1 + 0xe0) = lVar18;
      }
      puVar12 = PTR_DAT_047cd7b0;
      if (*(undefined **)(param_2 + 0xe0) != (undefined *)0x0) {
        puVar12 = *(undefined **)(param_2 + 0xe0);
      }
      FUN_004d23c4(lVar18,puVar12);
      return;
    }
  }
  return;
}


