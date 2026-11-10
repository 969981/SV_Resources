/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006130f0; name: FUN_006130f0
 */


void FUN_006130f0(long param_1,undefined *param_2)

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
  byte *pbVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  int iVar21;
  long lVar22;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar17 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*puVar1 & 1) == 0) {
      lVar22 = FUN_0021d48c(puVar1);
    }
    else {
      lVar22 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    uVar3 = *(ulong *)(uVar17 + 0x10);
    lVar4 = *(long *)(uVar17 + 0x18);
    if ((*(byte *)(uVar17 + 8) & 1) == 0) {
      lVar4 = uVar17 + 9;
      uVar3 = (ulong)(*(byte *)(uVar17 + 8) >> 1);
    }
    FUN_0021d540(lVar22,lVar4,uVar3);
  }
  uVar5 = *(uint *)(param_2 + 0x18);
  if (uVar5 != 0) {
    puVar13 = *(undefined8 **)(param_2 + 0x20);
    puVar9 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x10),uVar5);
    iVar6 = *(int *)(param_1 + 0x18);
    iVar21 = **(int **)(param_1 + 0x20);
    uVar7 = iVar21 - iVar6;
    uVar17 = (ulong)uVar7;
    if ((0 < (int)uVar5) && (0 < (int)uVar7)) {
      uVar3 = (ulong)uVar5;
      if (uVar17 - 1 <= (ulong)uVar5 - 1) {
        uVar3 = uVar17;
      }
      lVar22 = -uVar3;
      puVar19 = puVar9;
      puVar16 = puVar13;
      do {
        puVar16 = puVar16 + 1;
        FUN_006196c8(*puVar16,*puVar19);
        bVar8 = lVar22 != -1;
        lVar22 = lVar22 + 1;
        puVar19 = puVar19 + 1;
      } while (bVar8);
    }
    if ((int)uVar7 < (int)uVar5) {
      iVar21 = (iVar6 + uVar5) - iVar21;
      uVar18 = *(undefined8 *)(param_1 + 0x10);
      uVar17 = -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar17 << 3;
      puVar13 = (undefined8 *)(uVar17 + (long)puVar13);
      puVar9 = (undefined8 *)((long)puVar9 + uVar17);
      do {
        puVar13 = puVar13 + 1;
        uVar20 = *puVar13;
        uVar10 = FUN_0061658c(uVar18);
        FUN_006196c8(uVar20,uVar10);
        iVar21 = iVar21 + -1;
        *puVar9 = uVar10;
        puVar9 = puVar9 + 1;
      } while (iVar21 != 0);
    }
    iVar6 = *(int *)(param_1 + 0x18) + uVar5;
    *(int *)(param_1 + 0x18) = iVar6;
    if (**(int **)(param_1 + 0x20) < iVar6) {
      **(int **)(param_1 + 0x20) = iVar6;
    }
  }
  pbVar12 = *(byte **)(param_2 + 0x28);
  if ((*pbVar12 & 1) == 0) {
    if (*pbVar12 >> 1 == 0) goto joined_r0x006132a0;
  }
  else if (*(long *)(pbVar12 + 8) == 0) goto joined_r0x006132a0;
  puVar11 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar11 = (ulong *)*puVar11;
  }
  puVar14 = *(undefined **)(param_1 + 0x28);
  if (puVar14 == PTR_DAT_047cba80) {
    FUN_001fcdc8((undefined8 *)(param_1 + 0x28),puVar11);
  }
  else {
    FUN_001fcec0(puVar14,pbVar12);
  }
joined_r0x006132a0:
  if (param_2 != PTR_DAT_047ceda8) {
    puVar14 = *(undefined **)(param_2 + 0x30);
    if (puVar14 != (undefined *)0x0) {
      lVar22 = *(long *)(param_1 + 0x30);
      if (lVar22 == 0) {
        puVar11 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar11 = (ulong *)*puVar11;
        }
        lVar22 = FUN_006164c4(puVar11);
        *(long *)(param_1 + 0x30) = lVar22;
        puVar14 = *(undefined **)(param_2 + 0x30);
      }
      puVar15 = PTR_DAT_047ceaa8;
      if (puVar14 != (undefined *)0x0) {
        puVar15 = puVar14;
      }
      FUN_00613410(lVar22,puVar15);
    }
    puVar14 = PTR_DAT_047cbb60;
    puVar15 = *(undefined **)(param_2 + 0x38);
    if (puVar15 != (undefined *)0x0) {
      lVar22 = *(long *)(param_1 + 0x38);
      if (lVar22 == 0) {
        puVar11 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar11 = (ulong *)*puVar11;
        }
        lVar22 = FUN_004eb86c(puVar11);
        *(long *)(param_1 + 0x38) = lVar22;
        puVar15 = *(undefined **)(param_2 + 0x38);
      }
      puVar2 = puVar14;
      if (puVar15 != (undefined *)0x0) {
        puVar2 = puVar15;
      }
      FUN_004eb614(lVar22,puVar2);
    }
    puVar15 = *(undefined **)(param_2 + 0x40);
    if (puVar15 != (undefined *)0x0) {
      lVar22 = *(long *)(param_1 + 0x40);
      if (lVar22 == 0) {
        puVar11 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar11 = (ulong *)*puVar11;
        }
        lVar22 = FUN_0051444c(puVar11);
        *(long *)(param_1 + 0x40) = lVar22;
        puVar15 = *(undefined **)(param_2 + 0x40);
      }
      puVar2 = PTR_DAT_047cbe60;
      if (puVar15 != (undefined *)0x0) {
        puVar2 = puVar15;
      }
      FUN_005141f4(lVar22,puVar2);
    }
    puVar15 = *(undefined **)(param_2 + 0x48);
    if (puVar15 != (undefined *)0x0) {
      lVar22 = *(long *)(param_1 + 0x48);
      if (lVar22 == 0) {
        puVar11 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar11 = (ulong *)*puVar11;
        }
        lVar22 = FUN_004eb86c(puVar11);
        *(long *)(param_1 + 0x48) = lVar22;
        puVar15 = *(undefined **)(param_2 + 0x48);
      }
      if (puVar15 != (undefined *)0x0) {
        puVar14 = puVar15;
      }
      FUN_004eb614(lVar22,puVar14);
      return;
    }
  }
  return;
}


