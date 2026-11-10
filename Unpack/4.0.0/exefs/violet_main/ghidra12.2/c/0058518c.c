/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0058518c; name: FUN_0058518c
 */


void FUN_0058518c(long param_1,undefined *param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  ulong *puVar7;
  byte *pbVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar11 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*puVar1 & 1) == 0) {
      lVar6 = FUN_0021d48c(puVar1);
    }
    else {
      lVar6 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    uVar3 = *(ulong *)(uVar11 + 0x10);
    lVar4 = *(long *)(uVar11 + 0x18);
    if ((*(byte *)(uVar11 + 8) & 1) == 0) {
      lVar4 = uVar11 + 9;
      uVar3 = (ulong)(*(byte *)(uVar11 + 8) >> 1);
    }
    FUN_0021d540(lVar6,lVar4,uVar3);
  }
  puVar10 = PTR_DAT_047cba80;
  pbVar8 = *(byte **)(param_2 + 0x10);
  if ((*pbVar8 & 1) == 0) {
    if (*pbVar8 >> 1 != 0) goto LAB_00585210;
LAB_00585238:
    pbVar8 = *(byte **)(param_2 + 0x18);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) != 0) goto LAB_00585270;
LAB_00585244:
    if (bVar5 >> 1 != 0) goto LAB_00585278;
LAB_005852a0:
    pbVar8 = *(byte **)(param_2 + 0x20);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) != 0) goto LAB_005852d8;
LAB_005852ac:
    if (bVar5 >> 1 == 0) goto joined_r0x00585314;
  }
  else {
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_00585238;
LAB_00585210:
    plVar2 = (long *)(param_1 + 0x10);
    puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar9 = (undefined *)*plVar2;
    }
    else {
      puVar7 = (ulong *)*puVar7;
      puVar9 = (undefined *)*plVar2;
    }
    if (puVar9 != PTR_DAT_047cba80) {
      FUN_001fcec0(puVar9,pbVar8);
      goto LAB_00585238;
    }
    FUN_001fcdc8(plVar2,puVar7);
    pbVar8 = *(byte **)(param_2 + 0x18);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) == 0) goto LAB_00585244;
LAB_00585270:
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_005852a0;
LAB_00585278:
    plVar2 = (long *)(param_1 + 0x18);
    puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar9 = (undefined *)*plVar2;
    }
    else {
      puVar7 = (ulong *)*puVar7;
      puVar9 = (undefined *)*plVar2;
    }
    if (puVar9 != puVar10) {
      FUN_001fcec0(puVar9,pbVar8);
      goto LAB_005852a0;
    }
    FUN_001fcdc8(plVar2,puVar7);
    pbVar8 = *(byte **)(param_2 + 0x20);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) == 0) goto LAB_005852ac;
LAB_005852d8:
    if (*(long *)(pbVar8 + 8) == 0) goto joined_r0x00585314;
  }
  plVar2 = (long *)(param_1 + 0x20);
  puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar9 = (undefined *)*plVar2;
  }
  else {
    puVar7 = (ulong *)*puVar7;
    puVar9 = (undefined *)*plVar2;
  }
  if (puVar9 == puVar10) {
    FUN_001fcdc8(plVar2,puVar7);
  }
  else {
    FUN_001fcec0(puVar9,pbVar8);
  }
joined_r0x00585314:
  if ((param_2 == PTR_DAT_047ce030) ||
     (puVar10 = *(undefined **)(param_2 + 0x28), puVar10 == (undefined *)0x0)) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 == 0) {
    puVar7 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
    if ((*puVar1 & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
    lVar6 = FUN_004eb86c(puVar7);
    *(long *)(param_1 + 0x28) = lVar6;
    puVar10 = *(undefined **)(param_2 + 0x28);
  }
  puVar9 = PTR_DAT_047cbb60;
  if (puVar10 != (undefined *)0x0) {
    puVar9 = puVar10;
  }
  FUN_004eb614(lVar6,puVar9);
  return;
}


