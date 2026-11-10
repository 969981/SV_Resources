/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00609ab8; name: FUN_00609ab8
 */


void FUN_00609ab8(long param_1,undefined *param_2)

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
    if (*pbVar8 >> 1 != 0) goto LAB_00609b40;
LAB_00609b68:
    pbVar8 = *(byte **)(param_2 + 0x18);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) != 0) goto LAB_00609ba0;
LAB_00609b74:
    if (bVar5 >> 1 != 0) goto LAB_00609ba8;
LAB_00609bd0:
    pbVar8 = *(byte **)(param_2 + 0x20);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) != 0) goto LAB_00609c08;
LAB_00609bdc:
    if (bVar5 >> 1 == 0) goto joined_r0x00609c44;
  }
  else {
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_00609b68;
LAB_00609b40:
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
      goto LAB_00609b68;
    }
    FUN_001fcdc8(plVar2,puVar6);
    pbVar8 = *(byte **)(param_2 + 0x18);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) == 0) goto LAB_00609b74;
LAB_00609ba0:
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_00609bd0;
LAB_00609ba8:
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
      goto LAB_00609bd0;
    }
    FUN_001fcdc8(plVar2,puVar6);
    pbVar8 = *(byte **)(param_2 + 0x20);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) == 0) goto LAB_00609bdc;
LAB_00609c08:
    if (*(long *)(pbVar8 + 8) == 0) goto joined_r0x00609c44;
  }
  plVar2 = (long *)(param_1 + 0x20);
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
joined_r0x00609c44:
  if (param_2 != PTR_DAT_047cee58) {
    puVar10 = *(undefined **)(param_2 + 0x28);
    if (puVar10 != (undefined *)0x0) {
      lVar12 = *(long *)(param_1 + 0x28);
      if (lVar12 == 0) {
        puVar6 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar12 = FUN_00616230(puVar6);
        *(long *)(param_1 + 0x28) = lVar12;
        puVar10 = *(undefined **)(param_2 + 0x28);
      }
      puVar9 = PTR_DAT_047ceba8;
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
      FUN_006104ac(lVar12 + 0x10,puVar9 + 0x10);
    }
    puVar10 = *(undefined **)(param_2 + 0x30);
    if (puVar10 != (undefined *)0x0) {
      lVar12 = *(long *)(param_1 + 0x30);
      if (lVar12 == 0) {
        puVar6 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar12 = FUN_0051444c(puVar6);
        *(long *)(param_1 + 0x30) = lVar12;
        puVar10 = *(undefined **)(param_2 + 0x30);
      }
      puVar9 = PTR_DAT_047cbe60;
      if (puVar10 != (undefined *)0x0) {
        puVar9 = puVar10;
      }
      FUN_005141f4(lVar12,puVar9);
    }
    puVar10 = *(undefined **)(param_2 + 0x38);
    if (puVar10 != (undefined *)0x0) {
      lVar12 = *(long *)(param_1 + 0x38);
      if (lVar12 == 0) {
        puVar6 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar12 = FUN_0026b02c(puVar6);
        *(long *)(param_1 + 0x38) = lVar12;
        puVar10 = *(undefined **)(param_2 + 0x38);
      }
      puVar9 = PTR_DAT_047cc258;
      if (puVar10 != (undefined *)0x0) {
        puVar9 = puVar10;
      }
      FUN_00267e50(lVar12,puVar9);
    }
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x40);
  }
  return;
}


