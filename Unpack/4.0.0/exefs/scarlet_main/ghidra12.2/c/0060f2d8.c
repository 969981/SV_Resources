/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0060f2d8; name: FUN_0060f2d8
 */


void FUN_0060f2d8(long param_1,undefined *param_2)

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
    if (*pbVar8 >> 1 != 0) goto LAB_0060f35c;
LAB_0060f384:
    pbVar8 = *(byte **)(param_2 + 0x18);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) != 0) goto LAB_0060f3bc;
LAB_0060f390:
    if (bVar5 >> 1 == 0) goto joined_r0x0060f3f8;
  }
  else {
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_0060f384;
LAB_0060f35c:
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
      goto LAB_0060f384;
    }
    FUN_001fcdc8(plVar2,puVar7);
    pbVar8 = *(byte **)(param_2 + 0x18);
    bVar5 = *pbVar8;
    if ((bVar5 & 1) == 0) goto LAB_0060f390;
LAB_0060f3bc:
    if (*(long *)(pbVar8 + 8) == 0) goto joined_r0x0060f3f8;
  }
  plVar2 = (long *)(param_1 + 0x18);
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
joined_r0x0060f3f8:
  if ((param_2 == PTR_DAT_047cedf8) ||
     (puVar10 = *(undefined **)(param_2 + 0x20), puVar10 == (undefined *)0x0)) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 == 0) {
    puVar7 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
    if ((*puVar1 & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
    lVar6 = FUN_006160e8(puVar7);
    *(long *)(param_1 + 0x20) = lVar6;
    puVar10 = *(undefined **)(param_2 + 0x20);
  }
  puVar9 = PTR_DAT_047ceae8;
  if (puVar10 != (undefined *)0x0) {
    puVar9 = puVar10;
  }
  FUN_0060f48c(lVar6,puVar9);
  return;
}


