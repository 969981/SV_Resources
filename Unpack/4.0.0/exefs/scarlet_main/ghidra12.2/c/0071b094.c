/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0071b094; name: FUN_0071b094
 */


void FUN_0071b094(long param_1,undefined *param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  ulong *puVar6;
  long lVar7;
  byte *pbVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar11 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*puVar1 & 1) == 0) {
      lVar12 = FUN_0021d48c(puVar1);
    }
    else {
      lVar12 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    uVar3 = *(ulong *)(uVar11 + 0x10);
    lVar7 = *(long *)(uVar11 + 0x18);
    if ((*(byte *)(uVar11 + 8) & 1) == 0) {
      lVar7 = uVar11 + 9;
      uVar3 = (ulong)(*(byte *)(uVar11 + 8) >> 1);
    }
    FUN_0021d540(lVar12,lVar7,uVar3);
  }
  puVar10 = PTR_DAT_047cba80;
  pbVar8 = *(byte **)(param_2 + 0x10);
  if ((*pbVar8 & 1) == 0) {
    if (*pbVar8 >> 1 != 0) goto LAB_0071b11c;
LAB_0071b144:
    pbVar8 = *(byte **)(param_2 + 0x18);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) != 0) goto LAB_0071b17c;
LAB_0071b150:
    if (bVar5 >> 1 != 0) goto LAB_0071b184;
LAB_0071b1ac:
    pbVar8 = *(byte **)(param_2 + 0x20);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) != 0) goto LAB_0071b1e4;
LAB_0071b1b8:
    if (bVar5 >> 1 != 0) goto LAB_0071b1ec;
LAB_0071b214:
    pbVar8 = *(byte **)(param_2 + 0x28);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) != 0) goto LAB_0071b24c;
LAB_0071b220:
    if (bVar5 >> 1 != 0) goto LAB_0071b254;
LAB_0071b27c:
    pbVar8 = *(byte **)(param_2 + 0x30);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) != 0) goto LAB_0071b2b4;
LAB_0071b288:
    if (bVar5 >> 1 != 0) goto LAB_0071b2bc;
LAB_0071b2e4:
    pbVar8 = *(byte **)(param_2 + 0x38);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) != 0) goto LAB_0071b31c;
LAB_0071b2f0:
    if (bVar5 >> 1 != 0) goto LAB_0071b324;
LAB_0071b34c:
    pbVar8 = *(byte **)(param_2 + 0x40);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) != 0) goto LAB_0071b384;
LAB_0071b358:
    if (bVar5 >> 1 != 0) goto LAB_0071b38c;
LAB_0071b3b4:
    pbVar8 = *(byte **)(param_2 + 0x48);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) != 0) goto LAB_0071b3ec;
LAB_0071b3c0:
    if (bVar5 >> 1 != 0) goto LAB_0071b3f4;
LAB_0071b41c:
    pbVar8 = *(byte **)(param_2 + 0x50);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) != 0) goto LAB_0071b454;
LAB_0071b428:
    if (bVar5 >> 1 != 0) goto LAB_0071b45c;
LAB_0071b484:
    pbVar8 = *(byte **)(param_2 + 0x58);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) != 0) goto LAB_0071b4bc;
LAB_0071b490:
    if (bVar5 >> 1 != 0) goto LAB_0071b4c4;
LAB_0071b4ec:
    pbVar8 = *(byte **)(param_2 + 0x60);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) != 0) goto LAB_0071b524;
LAB_0071b4f8:
    if (bVar5 >> 1 == 0) goto joined_r0x0071b560;
  }
  else {
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_0071b144;
LAB_0071b11c:
    plVar2 = (long *)(param_1 + 0x10);
    puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar9 = (undefined *)*plVar2;
    }
    else {
      puVar6 = (ulong *)*puVar6;
      puVar9 = (undefined *)*plVar2;
    }
    if (puVar9 != PTR_DAT_047cba80) {
      FUN_001fcec0(puVar9,pbVar8);
      goto LAB_0071b144;
    }
    FUN_001fcdc8(plVar2,puVar6);
    pbVar8 = *(byte **)(param_2 + 0x18);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) == 0) goto LAB_0071b150;
LAB_0071b17c:
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_0071b1ac;
LAB_0071b184:
    plVar2 = (long *)(param_1 + 0x18);
    puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar9 = (undefined *)*plVar2;
    }
    else {
      puVar6 = (ulong *)*puVar6;
      puVar9 = (undefined *)*plVar2;
    }
    if (puVar9 != puVar10) {
      FUN_001fcec0(puVar9,pbVar8);
      goto LAB_0071b1ac;
    }
    FUN_001fcdc8(plVar2,puVar6);
    pbVar8 = *(byte **)(param_2 + 0x20);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) == 0) goto LAB_0071b1b8;
LAB_0071b1e4:
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_0071b214;
LAB_0071b1ec:
    plVar2 = (long *)(param_1 + 0x20);
    puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar9 = (undefined *)*plVar2;
    }
    else {
      puVar6 = (ulong *)*puVar6;
      puVar9 = (undefined *)*plVar2;
    }
    if (puVar9 != puVar10) {
      FUN_001fcec0(puVar9,pbVar8);
      goto LAB_0071b214;
    }
    FUN_001fcdc8(plVar2,puVar6);
    pbVar8 = *(byte **)(param_2 + 0x28);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) == 0) goto LAB_0071b220;
LAB_0071b24c:
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_0071b27c;
LAB_0071b254:
    plVar2 = (long *)(param_1 + 0x28);
    puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar9 = (undefined *)*plVar2;
    }
    else {
      puVar6 = (ulong *)*puVar6;
      puVar9 = (undefined *)*plVar2;
    }
    if (puVar9 != puVar10) {
      FUN_001fcec0(puVar9,pbVar8);
      goto LAB_0071b27c;
    }
    FUN_001fcdc8(plVar2,puVar6);
    pbVar8 = *(byte **)(param_2 + 0x30);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) == 0) goto LAB_0071b288;
LAB_0071b2b4:
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_0071b2e4;
LAB_0071b2bc:
    plVar2 = (long *)(param_1 + 0x30);
    puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar9 = (undefined *)*plVar2;
    }
    else {
      puVar6 = (ulong *)*puVar6;
      puVar9 = (undefined *)*plVar2;
    }
    if (puVar9 != puVar10) {
      FUN_001fcec0(puVar9,pbVar8);
      goto LAB_0071b2e4;
    }
    FUN_001fcdc8(plVar2,puVar6);
    pbVar8 = *(byte **)(param_2 + 0x38);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) == 0) goto LAB_0071b2f0;
LAB_0071b31c:
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_0071b34c;
LAB_0071b324:
    plVar2 = (long *)(param_1 + 0x38);
    puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar9 = (undefined *)*plVar2;
    }
    else {
      puVar6 = (ulong *)*puVar6;
      puVar9 = (undefined *)*plVar2;
    }
    if (puVar9 != puVar10) {
      FUN_001fcec0(puVar9,pbVar8);
      goto LAB_0071b34c;
    }
    FUN_001fcdc8(plVar2,puVar6);
    pbVar8 = *(byte **)(param_2 + 0x40);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) == 0) goto LAB_0071b358;
LAB_0071b384:
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_0071b3b4;
LAB_0071b38c:
    plVar2 = (long *)(param_1 + 0x40);
    puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar9 = (undefined *)*plVar2;
    }
    else {
      puVar6 = (ulong *)*puVar6;
      puVar9 = (undefined *)*plVar2;
    }
    if (puVar9 != puVar10) {
      FUN_001fcec0(puVar9,pbVar8);
      goto LAB_0071b3b4;
    }
    FUN_001fcdc8(plVar2,puVar6);
    pbVar8 = *(byte **)(param_2 + 0x48);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) == 0) goto LAB_0071b3c0;
LAB_0071b3ec:
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_0071b41c;
LAB_0071b3f4:
    plVar2 = (long *)(param_1 + 0x48);
    puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar9 = (undefined *)*plVar2;
    }
    else {
      puVar6 = (ulong *)*puVar6;
      puVar9 = (undefined *)*plVar2;
    }
    if (puVar9 != puVar10) {
      FUN_001fcec0(puVar9,pbVar8);
      goto LAB_0071b41c;
    }
    FUN_001fcdc8(plVar2,puVar6);
    pbVar8 = *(byte **)(param_2 + 0x50);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) == 0) goto LAB_0071b428;
LAB_0071b454:
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_0071b484;
LAB_0071b45c:
    plVar2 = (long *)(param_1 + 0x50);
    puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar9 = (undefined *)*plVar2;
    }
    else {
      puVar6 = (ulong *)*puVar6;
      puVar9 = (undefined *)*plVar2;
    }
    if (puVar9 != puVar10) {
      FUN_001fcec0(puVar9,pbVar8);
      goto LAB_0071b484;
    }
    FUN_001fcdc8(plVar2,puVar6);
    pbVar8 = *(byte **)(param_2 + 0x58);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) == 0) goto LAB_0071b490;
LAB_0071b4bc:
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_0071b4ec;
LAB_0071b4c4:
    plVar2 = (long *)(param_1 + 0x58);
    puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar9 = (undefined *)*plVar2;
    }
    else {
      puVar6 = (ulong *)*puVar6;
      puVar9 = (undefined *)*plVar2;
    }
    if (puVar9 != puVar10) {
      FUN_001fcec0(puVar9,pbVar8);
      goto LAB_0071b4ec;
    }
    FUN_001fcdc8(plVar2,puVar6);
    pbVar8 = *(byte **)(param_2 + 0x60);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) == 0) goto LAB_0071b4f8;
LAB_0071b524:
    if (*(long *)(pbVar8 + 8) == 0) goto joined_r0x0071b560;
  }
  plVar2 = (long *)(param_1 + 0x60);
  puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar9 = (undefined *)*plVar2;
  }
  else {
    puVar6 = (ulong *)*puVar6;
    puVar9 = (undefined *)*plVar2;
  }
  if (puVar9 == puVar10) {
    FUN_001fcdc8(plVar2,puVar6);
  }
  else {
    FUN_001fcec0(puVar9,pbVar8);
  }
joined_r0x0071b560:
  if (param_2 != PTR_DAT_047d00b8) {
    puVar10 = *(undefined **)(param_2 + 0x68);
    if (puVar10 != (undefined *)0x0) {
      lVar12 = *(long *)(param_1 + 0x68);
      if (lVar12 == 0) {
        puVar6 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar12 = FUN_0071d0f4(puVar6);
        *(long *)(param_1 + 0x68) = lVar12;
        puVar10 = *(undefined **)(param_2 + 0x68);
      }
      puVar9 = PTR_DAT_047cfec0;
      if (puVar10 != (undefined *)0x0) {
        puVar9 = puVar10;
      }
      if ((*(ulong *)(puVar9 + 8) & 1) != 0) {
        uVar11 = *(ulong *)(puVar9 + 8) & 0xfffffffffffffffe;
        if ((*(ulong *)(lVar12 + 8) & 1) == 0) {
          lVar7 = FUN_0021d48c();
        }
        else {
          lVar7 = (*(ulong *)(lVar12 + 8) & 0xfffffffffffffffe) + 8;
        }
        uVar3 = *(ulong *)(uVar11 + 0x10);
        lVar4 = *(long *)(uVar11 + 0x18);
        if ((*(byte *)(uVar11 + 8) & 1) == 0) {
          lVar4 = uVar11 + 9;
          uVar3 = (ulong)(*(byte *)(uVar11 + 8) >> 1);
        }
        FUN_0021d540(lVar7,lVar4,uVar3);
      }
      if (*(int *)(puVar9 + 0x10) != 0) {
        *(int *)(lVar12 + 0x10) = *(int *)(puVar9 + 0x10);
      }
      if (*(int *)(puVar9 + 0x14) != 0) {
        *(int *)(lVar12 + 0x14) = *(int *)(puVar9 + 0x14);
      }
    }
    puVar10 = *(undefined **)(param_2 + 0x70);
    if (puVar10 != (undefined *)0x0) {
      lVar12 = *(long *)(param_1 + 0x70);
      if (lVar12 == 0) {
        puVar6 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar12 = FUN_0051444c(puVar6);
        *(long *)(param_1 + 0x70) = lVar12;
        puVar10 = *(undefined **)(param_2 + 0x70);
      }
      puVar9 = PTR_DAT_047cbe60;
      if (puVar10 != (undefined *)0x0) {
        puVar9 = puVar10;
      }
      FUN_005141f4(lVar12,puVar9);
    }
  }
  if (*(int *)(param_2 + 0x78) != 0) {
    *(int *)(param_1 + 0x78) = *(int *)(param_2 + 0x78);
  }
  if (*(int *)(param_2 + 0x7c) != 0) {
    *(int *)(param_1 + 0x7c) = *(int *)(param_2 + 0x7c);
  }
  return;
}


