/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0060f48c; name: FUN_0060f48c
 */


void FUN_0060f48c(long param_1,undefined *param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  byte *pbVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar12 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*puVar1 & 1) == 0) {
      lVar6 = FUN_0021d48c(puVar1);
    }
    else {
      lVar6 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    uVar3 = *(ulong *)(uVar12 + 0x10);
    lVar8 = *(long *)(uVar12 + 0x18);
    if ((*(byte *)(uVar12 + 8) & 1) == 0) {
      lVar8 = uVar12 + 9;
      uVar3 = (ulong)(*(byte *)(uVar12 + 8) >> 1);
    }
    FUN_0021d540(lVar6,lVar8,uVar3);
  }
  puVar11 = PTR_DAT_047cba80;
  pbVar9 = *(byte **)(param_2 + 0x10);
  if ((*pbVar9 & 1) == 0) {
    if (*pbVar9 >> 1 != 0) goto LAB_0060f510;
LAB_0060f538:
    pbVar9 = *(byte **)(param_2 + 0x18);
    bVar5 = *pbVar9;
    if ((bVar5 & 1) != 0) goto LAB_0060f570;
LAB_0060f544:
    if (bVar5 >> 1 == 0) goto joined_r0x0060f5ac;
  }
  else {
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_0060f538;
LAB_0060f510:
    plVar2 = (long *)(param_1 + 0x10);
    puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar10 = (undefined *)*plVar2;
    }
    else {
      puVar7 = (ulong *)*puVar7;
      puVar10 = (undefined *)*plVar2;
    }
    if (puVar10 != PTR_DAT_047cba80) {
      FUN_001fcec0(puVar10,pbVar9);
      goto LAB_0060f538;
    }
    FUN_001fcdc8(plVar2,puVar7);
    pbVar9 = *(byte **)(param_2 + 0x18);
    bVar5 = *pbVar9;
    if ((bVar5 & 1) == 0) goto LAB_0060f544;
LAB_0060f570:
    if (*(long *)(pbVar9 + 8) == 0) goto joined_r0x0060f5ac;
  }
  plVar2 = (long *)(param_1 + 0x18);
  puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar10 = (undefined *)*plVar2;
  }
  else {
    puVar7 = (ulong *)*puVar7;
    puVar10 = (undefined *)*plVar2;
  }
  if (puVar10 == puVar11) {
    FUN_001fcdc8(plVar2,puVar7);
  }
  else {
    FUN_001fcec0(puVar10,pbVar9);
  }
joined_r0x0060f5ac:
  if (param_2 != PTR_DAT_047ceae8) {
    puVar11 = *(undefined **)(param_2 + 0x20);
    if (puVar11 != (undefined *)0x0) {
      lVar6 = *(long *)(param_1 + 0x20);
      if (lVar6 == 0) {
        puVar7 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        lVar6 = FUN_0026b02c(puVar7);
        *(long *)(param_1 + 0x20) = lVar6;
        puVar11 = *(undefined **)(param_2 + 0x20);
      }
      puVar10 = PTR_DAT_047cc258;
      if (puVar11 != (undefined *)0x0) {
        puVar10 = puVar11;
      }
      FUN_00267e50(lVar6,puVar10);
    }
    puVar11 = *(undefined **)(param_2 + 0x28);
    if (puVar11 != (undefined *)0x0) {
      lVar6 = *(long *)(param_1 + 0x28);
      if (lVar6 == 0) {
        puVar7 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar7 = (ulong *)*puVar7;
        }
        lVar6 = FUN_00616230(puVar7);
        *(long *)(param_1 + 0x28) = lVar6;
        puVar11 = *(undefined **)(param_2 + 0x28);
      }
      puVar10 = PTR_DAT_047ceba8;
      if (puVar11 != (undefined *)0x0) {
        puVar10 = puVar11;
      }
      if ((*(ulong *)(puVar10 + 8) & 1) != 0) {
        uVar12 = *(ulong *)(puVar10 + 8) & 0xfffffffffffffffe;
        if ((*(ulong *)(lVar6 + 8) & 1) == 0) {
          lVar8 = FUN_0021d48c();
        }
        else {
          lVar8 = (*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe) + 8;
        }
        uVar3 = *(ulong *)(uVar12 + 0x10);
        lVar4 = *(long *)(uVar12 + 0x18);
        if ((*(byte *)(uVar12 + 8) & 1) == 0) {
          lVar4 = uVar12 + 9;
          uVar3 = (ulong)(*(byte *)(uVar12 + 8) >> 1);
        }
        FUN_0021d540(lVar8,lVar4,uVar3);
      }
      FUN_006104ac(lVar6 + 0x10,puVar10 + 0x10);
      return;
    }
  }
  return;
}


