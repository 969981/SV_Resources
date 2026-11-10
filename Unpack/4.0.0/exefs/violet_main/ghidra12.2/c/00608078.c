/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00608078; name: FUN_00608078
 */


void FUN_00608078(long param_1,undefined *param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  int iVar22;
  long lVar23;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar18 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*puVar1 & 1) == 0) {
      lVar23 = FUN_0021d48c(puVar1);
    }
    else {
      lVar23 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    uVar3 = *(ulong *)(uVar18 + 0x10);
    lVar4 = *(long *)(uVar18 + 0x18);
    if ((*(byte *)(uVar18 + 8) & 1) == 0) {
      lVar4 = uVar18 + 9;
      uVar3 = (ulong)(*(byte *)(uVar18 + 8) >> 1);
    }
    FUN_0021d540(lVar23,lVar4,uVar3);
  }
  uVar5 = *(uint *)(param_2 + 0x18);
  if (uVar5 != 0) {
    puVar14 = *(undefined8 **)(param_2 + 0x20);
    puVar10 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x10),uVar5);
    iVar6 = *(int *)(param_1 + 0x18);
    iVar22 = **(int **)(param_1 + 0x20);
    uVar8 = iVar22 - iVar6;
    uVar18 = (ulong)uVar8;
    if ((0 < (int)uVar5) && (0 < (int)uVar8)) {
      uVar3 = (ulong)uVar5;
      if (uVar18 - 1 <= (ulong)uVar5 - 1) {
        uVar3 = uVar18;
      }
      lVar23 = -uVar3;
      puVar21 = puVar10;
      puVar17 = puVar14;
      do {
        puVar17 = puVar17 + 1;
        FUN_00603454(*puVar17,*puVar21);
        bVar9 = lVar23 != -1;
        lVar23 = lVar23 + 1;
        puVar21 = puVar21 + 1;
      } while (bVar9);
    }
    if ((int)uVar8 < (int)uVar5) {
      iVar22 = (iVar6 + uVar5) - iVar22;
      uVar19 = *(undefined8 *)(param_1 + 0x10);
      uVar18 = -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar18 << 3;
      puVar14 = (undefined8 *)(uVar18 + (long)puVar14);
      puVar10 = (undefined8 *)((long)puVar10 + uVar18);
      do {
        puVar14 = puVar14 + 1;
        uVar20 = *puVar14;
        uVar11 = FUN_006160e8(uVar19);
        FUN_00603454(uVar20,uVar11);
        iVar22 = iVar22 + -1;
        *puVar10 = uVar11;
        puVar10 = puVar10 + 1;
      } while (iVar22 != 0);
    }
    iVar6 = *(int *)(param_1 + 0x18) + uVar5;
    *(int *)(param_1 + 0x18) = iVar6;
    if (**(int **)(param_1 + 0x20) < iVar6) {
      **(int **)(param_1 + 0x20) = iVar6;
    }
  }
  uVar5 = *(uint *)(param_2 + 0x30);
  if (uVar5 != 0) {
    puVar14 = *(undefined8 **)(param_2 + 0x38);
    puVar10 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x28),uVar5);
    iVar6 = *(int *)(param_1 + 0x30);
    iVar22 = **(int **)(param_1 + 0x38);
    uVar8 = iVar22 - iVar6;
    uVar18 = (ulong)uVar8;
    if ((0 < (int)uVar5) && (0 < (int)uVar8)) {
      uVar3 = (ulong)uVar5;
      if (uVar18 - 1 <= (ulong)uVar5 - 1) {
        uVar3 = uVar18;
      }
      lVar23 = -uVar3;
      puVar21 = puVar10;
      puVar17 = puVar14;
      do {
        puVar17 = puVar17 + 1;
        FUN_00603464(*puVar17,*puVar21);
        bVar9 = lVar23 != -1;
        lVar23 = lVar23 + 1;
        puVar21 = puVar21 + 1;
      } while (bVar9);
    }
    if ((int)uVar8 < (int)uVar5) {
      iVar22 = (iVar6 + uVar5) - iVar22;
      uVar19 = *(undefined8 *)(param_1 + 0x28);
      uVar18 = -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar18 << 3;
      puVar14 = (undefined8 *)(uVar18 + (long)puVar14);
      puVar10 = (undefined8 *)((long)puVar10 + uVar18);
      do {
        puVar14 = puVar14 + 1;
        uVar20 = *puVar14;
        uVar11 = FUN_0061601c(uVar19);
        FUN_00603464(uVar20,uVar11);
        iVar22 = iVar22 + -1;
        *puVar10 = uVar11;
        puVar10 = puVar10 + 1;
      } while (iVar22 != 0);
    }
    iVar6 = *(int *)(param_1 + 0x30) + uVar5;
    *(int *)(param_1 + 0x30) = iVar6;
    if (**(int **)(param_1 + 0x38) < iVar6) {
      **(int **)(param_1 + 0x38) = iVar6;
    }
  }
  puVar16 = PTR_DAT_047cba80;
  pbVar13 = *(byte **)(param_2 + 0x40);
  if ((*pbVar13 & 1) == 0) {
    if (*pbVar13 >> 1 != 0) goto LAB_006082ec;
LAB_00608314:
    pbVar13 = *(byte **)(param_2 + 0x48);
    bVar7 = *pbVar13;
    if ((bVar7 & 1) != 0) goto LAB_0060834c;
LAB_00608320:
    if (bVar7 >> 1 == 0) goto joined_r0x00608388;
  }
  else {
    if (*(long *)(pbVar13 + 8) == 0) goto LAB_00608314;
LAB_006082ec:
    plVar2 = (long *)(param_1 + 0x40);
    puVar12 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar15 = (undefined *)*plVar2;
    }
    else {
      puVar12 = (ulong *)*puVar12;
      puVar15 = (undefined *)*plVar2;
    }
    if (puVar15 != PTR_DAT_047cba80) {
      FUN_001fcec0(puVar15,pbVar13);
      goto LAB_00608314;
    }
    FUN_001fcdc8(plVar2,puVar12);
    pbVar13 = *(byte **)(param_2 + 0x48);
    bVar7 = *pbVar13;
    if ((bVar7 & 1) == 0) goto LAB_00608320;
LAB_0060834c:
    if (*(long *)(pbVar13 + 8) == 0) goto joined_r0x00608388;
  }
  plVar2 = (long *)(param_1 + 0x48);
  puVar12 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar15 = (undefined *)*plVar2;
  }
  else {
    puVar12 = (ulong *)*puVar12;
    puVar15 = (undefined *)*plVar2;
  }
  if (puVar15 == puVar16) {
    FUN_001fcdc8(plVar2,puVar12);
  }
  else {
    FUN_001fcec0(puVar15,pbVar13);
  }
joined_r0x00608388:
  if ((param_2 != PTR_DAT_047cebf8) &&
     (puVar16 = *(undefined **)(param_2 + 0x50), puVar16 != (undefined *)0x0)) {
    lVar23 = *(long *)(param_1 + 0x50);
    if (lVar23 == 0) {
      puVar12 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
      if ((*puVar1 & 1) != 0) {
        puVar12 = (ulong *)*puVar12;
      }
      lVar23 = FUN_00615f34(puVar12);
      *(long *)(param_1 + 0x50) = lVar23;
      puVar16 = *(undefined **)(param_2 + 0x50);
    }
    puVar15 = PTR_DAT_047ce710;
    if (puVar16 != (undefined *)0x0) {
      puVar15 = puVar16;
    }
    FUN_00608434(lVar23,puVar15);
  }
  if (*(int *)(param_2 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x58);
  }
  return;
}


