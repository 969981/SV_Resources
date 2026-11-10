/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004cd558; name: FUN_004cd558
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_004cd558(long param_1,long param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  int iVar19;
  long lVar20;
  
  puVar1 = (ulong *)(param_1 + 8);
  uVar12 = *(ulong *)(param_2 + 8);
  if ((uVar12 & 1) != 0) {
    if ((*puVar1 & 1) == 0) {
      lVar20 = FUN_00264e54(puVar1);
    }
    else {
      lVar20 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    FUN_0051496c(lVar20,(uVar12 & 0xfffffffffffffffe) + 8);
  }
  FUN_004e80a8(param_1 + 0x18,param_2 + 0x18);
  uVar5 = *(uint *)(param_2 + 0x38);
  if (uVar5 != 0) {
    puVar13 = *(undefined8 **)(param_2 + 0x40);
    puVar9 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x30),uVar5);
    iVar6 = *(int *)(param_1 + 0x38);
    iVar19 = **(int **)(param_1 + 0x40);
    uVar7 = iVar19 - iVar6;
    uVar12 = (ulong)uVar7;
    if ((0 < (int)uVar5) && (0 < (int)uVar7)) {
      uVar3 = (ulong)uVar5;
      if (uVar12 - 1 <= (ulong)uVar5 - 1) {
        uVar3 = uVar12;
      }
      lVar20 = -uVar3;
      puVar18 = puVar9;
      puVar15 = puVar13;
      do {
        puVar15 = puVar15 + 1;
        FUN_004e8250(*puVar15,*puVar18);
        bVar8 = lVar20 != -1;
        lVar20 = lVar20 + 1;
        puVar18 = puVar18 + 1;
      } while (bVar8);
    }
    if ((int)uVar7 < (int)uVar5) {
      iVar19 = (iVar6 + uVar5) - iVar19;
      uVar16 = *(undefined8 *)(param_1 + 0x30);
      uVar12 = -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3;
      puVar13 = (undefined8 *)(uVar12 + (long)puVar13);
      puVar9 = (undefined8 *)((long)puVar9 + uVar12);
      do {
        puVar13 = puVar13 + 1;
        uVar17 = *puVar13;
        uVar10 = FUN_004e64b4(uVar16);
        FUN_004e8250(uVar17,uVar10);
        iVar19 = iVar19 + -1;
        *puVar9 = uVar10;
        puVar9 = puVar9 + 1;
      } while (iVar19 != 0);
    }
    iVar6 = *(int *)(param_1 + 0x38) + uVar5;
    *(int *)(param_1 + 0x38) = iVar6;
    if (**(int **)(param_1 + 0x40) < iVar6) {
      **(int **)(param_1 + 0x40) = iVar6;
    }
  }
  uVar5 = *(uint *)(param_2 + 0x50);
  if (uVar5 != 0) {
    puVar13 = *(undefined8 **)(param_2 + 0x58);
    puVar9 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x48),uVar5);
    iVar6 = *(int *)(param_1 + 0x50);
    iVar19 = **(int **)(param_1 + 0x58);
    uVar7 = iVar19 - iVar6;
    uVar12 = (ulong)uVar7;
    if ((0 < (int)uVar5) && (0 < (int)uVar7)) {
      uVar3 = (ulong)uVar5;
      if (uVar12 - 1 <= (ulong)uVar5 - 1) {
        uVar3 = uVar12;
      }
      lVar20 = -uVar3;
      puVar18 = puVar9;
      puVar15 = puVar13;
      do {
        puVar15 = puVar15 + 1;
        FUN_004e8260(*puVar15,*puVar18);
        bVar8 = lVar20 != -1;
        lVar20 = lVar20 + 1;
        puVar18 = puVar18 + 1;
      } while (bVar8);
    }
    if ((int)uVar7 < (int)uVar5) {
      iVar19 = (iVar6 + uVar5) - iVar19;
      uVar16 = *(undefined8 *)(param_1 + 0x48);
      uVar12 = -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3;
      puVar13 = (undefined8 *)(uVar12 + (long)puVar13);
      puVar9 = (undefined8 *)((long)puVar9 + uVar12);
      do {
        puVar13 = puVar13 + 1;
        uVar17 = *puVar13;
        uVar10 = FUN_004e6890(uVar16);
        FUN_004e8260(uVar17,uVar10);
        iVar19 = iVar19 + -1;
        *puVar9 = uVar10;
        puVar9 = puVar9 + 1;
      } while (iVar19 != 0);
    }
    iVar6 = *(int *)(param_1 + 0x50) + uVar5;
    *(int *)(param_1 + 0x50) = iVar6;
    if (**(int **)(param_1 + 0x58) < iVar6) {
      **(int **)(param_1 + 0x58) = iVar6;
    }
  }
  uVar5 = *(uint *)(param_2 + 0x68);
  if (uVar5 != 0) {
    puVar13 = *(undefined8 **)(param_2 + 0x70);
    puVar9 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x60),uVar5);
    iVar6 = *(int *)(param_1 + 0x68);
    iVar19 = **(int **)(param_1 + 0x70);
    uVar7 = iVar19 - iVar6;
    uVar12 = (ulong)uVar7;
    if ((0 < (int)uVar5) && (0 < (int)uVar7)) {
      uVar3 = (ulong)uVar5;
      if (uVar12 - 1 <= (ulong)uVar5 - 1) {
        uVar3 = uVar12;
      }
      lVar20 = -uVar3;
      puVar18 = puVar9;
      puVar15 = puVar13;
      do {
        puVar15 = puVar15 + 1;
        FUN_004e8270(*puVar15,*puVar18);
        bVar8 = lVar20 != -1;
        lVar20 = lVar20 + 1;
        puVar18 = puVar18 + 1;
      } while (bVar8);
    }
    if ((int)uVar7 < (int)uVar5) {
      iVar19 = (iVar6 + uVar5) - iVar19;
      uVar16 = *(undefined8 *)(param_1 + 0x60);
      uVar12 = -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3;
      puVar13 = (undefined8 *)(uVar12 + (long)puVar13);
      puVar9 = (undefined8 *)((long)puVar9 + uVar12);
      do {
        puVar13 = puVar13 + 1;
        uVar17 = *puVar13;
        uVar10 = FUN_004e69e4(uVar16);
        FUN_004e8270(uVar17,uVar10);
        iVar19 = iVar19 + -1;
        *puVar9 = uVar10;
        puVar9 = puVar9 + 1;
      } while (iVar19 != 0);
    }
    iVar6 = *(int *)(param_1 + 0x68) + uVar5;
    *(int *)(param_1 + 0x68) = iVar6;
    if (**(int **)(param_1 + 0x70) < iVar6) {
      **(int **)(param_1 + 0x70) = iVar6;
    }
  }
  uVar5 = *(uint *)(param_2 + 0x80);
  if (uVar5 != 0) {
    puVar13 = *(undefined8 **)(param_2 + 0x88);
    puVar9 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x78),uVar5);
    iVar6 = *(int *)(param_1 + 0x80);
    iVar19 = **(int **)(param_1 + 0x88);
    uVar7 = iVar19 - iVar6;
    uVar12 = (ulong)uVar7;
    if ((0 < (int)uVar5) && (0 < (int)uVar7)) {
      uVar3 = (ulong)uVar5;
      if (uVar12 - 1 <= (ulong)uVar5 - 1) {
        uVar3 = uVar12;
      }
      lVar20 = -uVar3;
      puVar18 = puVar9;
      puVar15 = puVar13;
      do {
        puVar15 = puVar15 + 1;
        FUN_004e8280(*puVar15,*puVar18);
        bVar8 = lVar20 != -1;
        lVar20 = lVar20 + 1;
        puVar18 = puVar18 + 1;
      } while (bVar8);
    }
    if ((int)uVar7 < (int)uVar5) {
      iVar19 = (iVar6 + uVar5) - iVar19;
      uVar16 = *(undefined8 *)(param_1 + 0x78);
      uVar12 = -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3;
      puVar13 = (undefined8 *)(uVar12 + (long)puVar13);
      puVar9 = (undefined8 *)((long)puVar9 + uVar12);
      do {
        puVar13 = puVar13 + 1;
        uVar17 = *puVar13;
        uVar10 = FUN_004e6678(uVar16);
        FUN_004e8280(uVar17,uVar10);
        iVar19 = iVar19 + -1;
        *puVar9 = uVar10;
        puVar9 = puVar9 + 1;
      } while (iVar19 != 0);
    }
    iVar6 = *(int *)(param_1 + 0x80) + uVar5;
    *(int *)(param_1 + 0x80) = iVar6;
    if (**(int **)(param_1 + 0x88) < iVar6) {
      **(int **)(param_1 + 0x88) = iVar6;
    }
  }
  if (*(int *)(param_2 + 0x90) != 0) {
    iVar6 = *(int *)(param_1 + 0x90);
    FUN_00531134(param_1 + 0x90,iVar6 + *(int *)(param_2 + 0x90));
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + *(int *)(param_2 + 0x90);
    memcpy((void *)(*(long *)(param_1 + 0x98) + (long)iVar6 * 4),*(void **)(param_2 + 0x98),
           (long)*(int *)(param_2 + 0x90) << 2);
  }
  if (*(int *)(param_2 + 0xa0) != 0) {
    iVar6 = *(int *)(param_1 + 0xa0);
    FUN_00531134(param_1 + 0xa0,iVar6 + *(int *)(param_2 + 0xa0));
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + *(int *)(param_2 + 0xa0);
    memcpy((void *)(*(long *)(param_1 + 0xa8) + (long)iVar6 * 4),*(void **)(param_2 + 0xa8),
           (long)*(int *)(param_2 + 0xa0) << 2);
  }
  puVar4 = PTR_DAT_047cba80;
  uVar5 = *(uint *)(param_2 + 0x10);
  if ((uVar5 & 0x1f) != 0) {
    if ((uVar5 & 1) != 0) {
      uVar16 = *(undefined8 *)(param_2 + 0xb0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      plVar2 = (long *)(param_1 + 0xb0);
      puVar11 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar14 = (undefined *)*plVar2;
      }
      else {
        puVar11 = (ulong *)*puVar11;
        puVar14 = (undefined *)*plVar2;
      }
      if (puVar14 == puVar4) {
        FUN_001fcdc8(plVar2,puVar11);
      }
      else {
        FUN_001fcec0(puVar14,uVar16);
      }
    }
    if ((uVar5 >> 1 & 1) != 0) {
      uVar16 = *(undefined8 *)(param_2 + 0xb8);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      plVar2 = (long *)(param_1 + 0xb8);
      puVar11 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar14 = (undefined *)*plVar2;
      }
      else {
        puVar11 = (ulong *)*puVar11;
        puVar14 = (undefined *)*plVar2;
      }
      if (puVar14 == puVar4) {
        FUN_001fcdc8(plVar2,puVar11);
      }
      else {
        FUN_001fcec0(puVar14,uVar16);
      }
    }
    if ((uVar5 >> 2 & 1) != 0) {
      uVar16 = *(undefined8 *)(param_2 + 0xc0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      plVar2 = (long *)(param_1 + 0xc0);
      puVar11 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar14 = (undefined *)*plVar2;
      }
      else {
        puVar11 = (ulong *)*puVar11;
        puVar14 = (undefined *)*plVar2;
      }
      if (puVar14 == puVar4) {
        FUN_001fcdc8(plVar2,puVar11);
      }
      else {
        FUN_001fcec0(puVar14,uVar16);
      }
    }
    if ((uVar5 >> 3 & 1) != 0) {
      lVar20 = *(long *)(param_1 + 200);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      if (lVar20 == 0) {
        puVar11 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar11 = (ulong *)*puVar11;
        }
        lVar20 = FUN_004e6bc8(puVar11);
        *(long *)(param_1 + 200) = lVar20;
      }
      puVar4 = PTR_DAT_047cd880;
      if (*(undefined **)(param_2 + 200) != (undefined *)0x0) {
        puVar4 = *(undefined **)(param_2 + 200);
      }
      FUN_004cdc00(lVar20,puVar4);
    }
    if ((uVar5 >> 4 & 1) != 0) {
      lVar20 = *(long *)(param_1 + 0xd0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
      if (lVar20 == 0) {
        puVar11 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar11 = (ulong *)*puVar11;
        }
        lVar20 = FUN_004e785c(puVar11);
        *(long *)(param_1 + 0xd0) = lVar20;
      }
      puVar4 = PTR_DAT_047cd780;
      if (*(undefined **)(param_2 + 0xd0) != (undefined *)0x0) {
        puVar4 = *(undefined **)(param_2 + 0xd0);
      }
      FUN_004ce1e8(lVar20,puVar4);
      return;
    }
  }
  return;
}


