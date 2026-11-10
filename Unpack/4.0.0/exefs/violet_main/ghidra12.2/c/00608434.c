/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00608434; name: FUN_00608434
 */


void FUN_00608434(long param_1,undefined *param_2)

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
  undefined8 *puVar20;
  undefined8 uVar21;
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
      puVar20 = puVar10;
      puVar17 = puVar14;
      do {
        puVar17 = puVar17 + 1;
        FUN_00603474(*puVar17,*puVar20);
        bVar9 = lVar23 != -1;
        lVar23 = lVar23 + 1;
        puVar20 = puVar20 + 1;
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
        uVar21 = *puVar14;
        uVar11 = FUN_00615bdc(uVar19);
        FUN_00603474(uVar21,uVar11);
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
  puVar16 = PTR_DAT_047cba80;
  pbVar13 = *(byte **)(param_2 + 0x28);
  if ((*pbVar13 & 1) == 0) {
    if (*pbVar13 >> 1 != 0) goto LAB_006085b8;
LAB_006085e0:
    pbVar13 = *(byte **)(param_2 + 0x30);
    bVar7 = *pbVar13;
    if ((bVar7 & 1) != 0) goto LAB_00608618;
LAB_006085ec:
    if (bVar7 >> 1 != 0) goto LAB_00608620;
LAB_00608648:
    pbVar13 = *(byte **)(param_2 + 0x38);
    bVar7 = *pbVar13;
    if ((bVar7 & 1) != 0) goto LAB_00608680;
LAB_00608654:
    if (bVar7 >> 1 == 0) goto joined_r0x006086bc;
  }
  else {
    if (*(long *)(pbVar13 + 8) == 0) goto LAB_006085e0;
LAB_006085b8:
    plVar2 = (long *)(param_1 + 0x28);
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
      goto LAB_006085e0;
    }
    FUN_001fcdc8(plVar2,puVar12);
    pbVar13 = *(byte **)(param_2 + 0x30);
    bVar7 = *pbVar13;
    if ((bVar7 & 1) == 0) goto LAB_006085ec;
LAB_00608618:
    if (*(long *)(pbVar13 + 8) == 0) goto LAB_00608648;
LAB_00608620:
    plVar2 = (long *)(param_1 + 0x30);
    puVar12 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar15 = (undefined *)*plVar2;
    }
    else {
      puVar12 = (ulong *)*puVar12;
      puVar15 = (undefined *)*plVar2;
    }
    if (puVar15 != puVar16) {
      FUN_001fcec0(puVar15,pbVar13);
      goto LAB_00608648;
    }
    FUN_001fcdc8(plVar2,puVar12);
    pbVar13 = *(byte **)(param_2 + 0x38);
    bVar7 = *pbVar13;
    if ((bVar7 & 1) == 0) goto LAB_00608654;
LAB_00608680:
    if (*(long *)(pbVar13 + 8) == 0) goto joined_r0x006086bc;
  }
  plVar2 = (long *)(param_1 + 0x38);
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
joined_r0x006086bc:
  if (param_2 != PTR_DAT_047ce710) {
    puVar16 = *(undefined **)(param_2 + 0x40);
    if (puVar16 != (undefined *)0x0) {
      lVar23 = *(long *)(param_1 + 0x40);
      if (lVar23 == 0) {
        puVar12 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar12 = (ulong *)*puVar12;
        }
        lVar23 = FUN_0051444c(puVar12);
        *(long *)(param_1 + 0x40) = lVar23;
        puVar16 = *(undefined **)(param_2 + 0x40);
      }
      puVar15 = PTR_DAT_047cbe60;
      if (puVar16 != (undefined *)0x0) {
        puVar15 = puVar16;
      }
      FUN_005141f4(lVar23,puVar15);
    }
    puVar16 = *(undefined **)(param_2 + 0x48);
    if (puVar16 != (undefined *)0x0) {
      lVar23 = *(long *)(param_1 + 0x48);
      if (lVar23 == 0) {
        puVar12 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar12 = (ulong *)*puVar12;
        }
        lVar23 = FUN_0026b02c(puVar12);
        *(long *)(param_1 + 0x48) = lVar23;
        puVar16 = *(undefined **)(param_2 + 0x48);
      }
      puVar15 = PTR_DAT_047cc258;
      if (puVar16 != (undefined *)0x0) {
        puVar15 = puVar16;
      }
      FUN_00267e50(lVar23,puVar15);
    }
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x50);
  }
  if (*(int *)(param_2 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_2 + 0x54);
  }
  if (param_2[0x58] != '\0') {
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  if (param_2[0x59] != '\0') {
    *(undefined1 *)(param_1 + 0x59) = 1;
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_2 + 0x5c);
  }
  if (*(int *)(param_2 + 0x60) != 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_2 + 0x60);
  }
  return;
}


