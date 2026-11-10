/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00715cc0; name: FUN_00715cc0
 */


void FUN_00715cc0(long param_1,undefined *param_2)

{
  ulong *puVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  ulong *puVar8;
  byte *pbVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar12 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*puVar1 & 1) == 0) {
      lVar7 = FUN_0021d48c(puVar1);
    }
    else {
      lVar7 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    uVar4 = *(ulong *)(uVar12 + 0x10);
    lVar5 = *(long *)(uVar12 + 0x18);
    if ((*(byte *)(uVar12 + 8) & 1) == 0) {
      lVar5 = uVar12 + 9;
      uVar4 = (ulong)(*(byte *)(uVar12 + 8) >> 1);
    }
    FUN_0021d540(lVar7,lVar5,uVar4);
  }
  puVar11 = PTR_DAT_047cba80;
  pbVar9 = *(byte **)(param_2 + 0x10);
  if ((*pbVar9 & 1) == 0) {
    if (*pbVar9 >> 1 != 0) goto LAB_00715d44;
LAB_00715d6c:
    pbVar9 = *(byte **)(param_2 + 0x18);
    bVar6 = *pbVar9;
    if ((bVar6 & 1) != 0) goto LAB_00715da4;
LAB_00715d78:
    if (bVar6 >> 1 != 0) goto LAB_00715dac;
LAB_00715dd4:
    pbVar9 = *(byte **)(param_2 + 0x20);
    bVar6 = *pbVar9;
    if ((bVar6 & 1) != 0) goto LAB_00715e0c;
LAB_00715de0:
    if (bVar6 >> 1 != 0) goto LAB_00715e14;
LAB_00715e3c:
    pbVar9 = *(byte **)(param_2 + 0x28);
    bVar6 = *pbVar9;
    if ((bVar6 & 1) != 0) goto LAB_00715e74;
LAB_00715e48:
    puVar10 = PTR_DAT_047cbe60;
    if (bVar6 >> 1 == 0) goto joined_r0x00715eb0;
  }
  else {
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_00715d6c;
LAB_00715d44:
    plVar2 = (long *)(param_1 + 0x10);
    puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar10 = (undefined *)*plVar2;
    }
    else {
      puVar8 = (ulong *)*puVar8;
      puVar10 = (undefined *)*plVar2;
    }
    if (puVar10 != PTR_DAT_047cba80) {
      FUN_001fcec0(puVar10,pbVar9);
      goto LAB_00715d6c;
    }
    FUN_001fcdc8(plVar2,puVar8);
    pbVar9 = *(byte **)(param_2 + 0x18);
    bVar6 = *pbVar9;
    if ((bVar6 & 1) == 0) goto LAB_00715d78;
LAB_00715da4:
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_00715dd4;
LAB_00715dac:
    plVar2 = (long *)(param_1 + 0x18);
    puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar10 = (undefined *)*plVar2;
    }
    else {
      puVar8 = (ulong *)*puVar8;
      puVar10 = (undefined *)*plVar2;
    }
    if (puVar10 != puVar11) {
      FUN_001fcec0(puVar10,pbVar9);
      goto LAB_00715dd4;
    }
    FUN_001fcdc8(plVar2,puVar8);
    pbVar9 = *(byte **)(param_2 + 0x20);
    bVar6 = *pbVar9;
    if ((bVar6 & 1) == 0) goto LAB_00715de0;
LAB_00715e0c:
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_00715e3c;
LAB_00715e14:
    plVar2 = (long *)(param_1 + 0x20);
    puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar10 = (undefined *)*plVar2;
    }
    else {
      puVar8 = (ulong *)*puVar8;
      puVar10 = (undefined *)*plVar2;
    }
    if (puVar10 != puVar11) {
      FUN_001fcec0(puVar10,pbVar9);
      goto LAB_00715e3c;
    }
    FUN_001fcdc8(plVar2,puVar8);
    pbVar9 = *(byte **)(param_2 + 0x28);
    bVar6 = *pbVar9;
    if ((bVar6 & 1) == 0) goto LAB_00715e48;
LAB_00715e74:
    puVar10 = PTR_DAT_047cbe60;
    if (*(long *)(pbVar9 + 8) == 0) goto joined_r0x00715eb0;
  }
  plVar2 = (long *)(param_1 + 0x28);
  puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar10 = (undefined *)*plVar2;
  }
  else {
    puVar8 = (ulong *)*puVar8;
    puVar10 = (undefined *)*plVar2;
  }
  if (puVar10 == puVar11) {
    FUN_001fcdc8(plVar2,puVar8);
    puVar10 = PTR_DAT_047cbe60;
  }
  else {
    FUN_001fcec0(puVar10,pbVar9);
    puVar10 = PTR_DAT_047cbe60;
  }
joined_r0x00715eb0:
  PTR_DAT_047cbe60 = puVar10;
  if (param_2 != PTR_DAT_047cfc08) {
    puVar11 = *(undefined **)(param_2 + 0x30);
    if (puVar11 != (undefined *)0x0) {
      lVar7 = *(long *)(param_1 + 0x30);
      if (lVar7 == 0) {
        puVar8 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar8 = (ulong *)*puVar8;
        }
        lVar7 = FUN_0051444c(puVar8);
        *(long *)(param_1 + 0x30) = lVar7;
        puVar11 = *(undefined **)(param_2 + 0x30);
      }
      puVar3 = puVar10;
      if (puVar11 != (undefined *)0x0) {
        puVar3 = puVar11;
      }
      FUN_005141f4(lVar7,puVar3);
    }
    puVar11 = *(undefined **)(param_2 + 0x38);
    if (puVar11 != (undefined *)0x0) {
      lVar7 = *(long *)(param_1 + 0x38);
      if (lVar7 == 0) {
        puVar8 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar8 = (ulong *)*puVar8;
        }
        lVar7 = FUN_0051444c(puVar8);
        *(long *)(param_1 + 0x38) = lVar7;
        puVar11 = *(undefined **)(param_2 + 0x38);
      }
      puVar3 = puVar10;
      if (puVar11 != (undefined *)0x0) {
        puVar3 = puVar11;
      }
      FUN_005141f4(lVar7,puVar3);
    }
    puVar11 = *(undefined **)(param_2 + 0x40);
    if (puVar11 != (undefined *)0x0) {
      lVar7 = *(long *)(param_1 + 0x40);
      if (lVar7 == 0) {
        puVar8 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar8 = (ulong *)*puVar8;
        }
        lVar7 = FUN_0051444c(puVar8);
        *(long *)(param_1 + 0x40) = lVar7;
        puVar11 = *(undefined **)(param_2 + 0x40);
      }
      puVar3 = puVar10;
      if (puVar11 != (undefined *)0x0) {
        puVar3 = puVar11;
      }
      FUN_005141f4(lVar7,puVar3);
    }
    puVar11 = *(undefined **)(param_2 + 0x48);
    if (puVar11 != (undefined *)0x0) {
      lVar7 = *(long *)(param_1 + 0x48);
      if (lVar7 == 0) {
        puVar8 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar8 = (ulong *)*puVar8;
        }
        lVar7 = FUN_0051444c(puVar8);
        *(long *)(param_1 + 0x48) = lVar7;
        puVar11 = *(undefined **)(param_2 + 0x48);
      }
      puVar3 = puVar10;
      if (puVar11 != (undefined *)0x0) {
        puVar3 = puVar11;
      }
      FUN_005141f4(lVar7,puVar3);
    }
    puVar11 = *(undefined **)(param_2 + 0x50);
    if (puVar11 != (undefined *)0x0) {
      lVar7 = *(long *)(param_1 + 0x50);
      if (lVar7 == 0) {
        puVar8 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar8 = (ulong *)*puVar8;
        }
        lVar7 = FUN_0051444c(puVar8);
        *(long *)(param_1 + 0x50) = lVar7;
        puVar11 = *(undefined **)(param_2 + 0x50);
      }
      if (puVar11 != (undefined *)0x0) {
        puVar10 = puVar11;
      }
      FUN_005141f4(lVar7,puVar10);
    }
  }
  if (*(int *)(param_2 + 0x58) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_2 + 0x58);
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_2 + 0x5c);
  }
  if (param_2[0x60] != '\0') {
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  if (*(int *)(param_2 + 100) != 0) {
    *(int *)(param_1 + 100) = *(int *)(param_2 + 100);
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_2 + 0x68);
  }
  if (*(int *)(param_2 + 0x6c) != 0) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_2 + 0x6c);
  }
  if (*(int *)(param_2 + 0x70) != 0) {
    *(int *)(param_1 + 0x70) = *(int *)(param_2 + 0x70);
  }
  if (*(int *)(param_2 + 0x74) != 0) {
    *(int *)(param_1 + 0x74) = *(int *)(param_2 + 0x74);
  }
  if (*(int *)(param_2 + 0x78) != 0) {
    *(int *)(param_1 + 0x78) = *(int *)(param_2 + 0x78);
  }
  if (*(int *)(param_2 + 0x7c) != 0) {
    *(int *)(param_1 + 0x7c) = *(int *)(param_2 + 0x7c);
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    *(int *)(param_1 + 0x80) = *(int *)(param_2 + 0x80);
  }
  if (*(int *)(param_2 + 0x84) != 0) {
    *(int *)(param_1 + 0x84) = *(int *)(param_2 + 0x84);
  }
  if (*(int *)(param_2 + 0x88) != 0) {
    *(int *)(param_1 + 0x88) = *(int *)(param_2 + 0x88);
  }
  if (*(int *)(param_2 + 0x8c) != 0) {
    *(int *)(param_1 + 0x8c) = *(int *)(param_2 + 0x8c);
  }
  if (*(int *)(param_2 + 0x90) != 0) {
    *(int *)(param_1 + 0x90) = *(int *)(param_2 + 0x90);
  }
  if (*(int *)(param_2 + 0x94) != 0) {
    *(int *)(param_1 + 0x94) = *(int *)(param_2 + 0x94);
  }
  if (*(int *)(param_2 + 0x98) != 0) {
    *(int *)(param_1 + 0x98) = *(int *)(param_2 + 0x98);
  }
  return;
}


