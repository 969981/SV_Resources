/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0068ec6c; name: FUN_0068ec6c
 */


void FUN_0068ec6c(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  ulong *puVar7;
  byte *pbVar8;
  undefined *puVar9;
  ulong uVar10;
  
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar10 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar6 = FUN_0021d48c();
    }
    else {
      lVar6 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar2 = *(ulong *)(uVar10 + 0x10);
    lVar3 = *(long *)(uVar10 + 0x18);
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      lVar3 = uVar10 + 9;
      uVar2 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    FUN_0021d540(lVar6,lVar3,uVar2);
  }
  puVar5 = PTR_DAT_047cba80;
  pbVar8 = *(byte **)(param_2 + 0x10);
  if ((*pbVar8 & 1) == 0) {
    if (*pbVar8 >> 1 != 0) goto LAB_0068ecf0;
LAB_0068ed18:
    pbVar8 = *(byte **)(param_2 + 0x18);
    bVar4 = *pbVar8;
    if ((bVar4 & 1) != 0) goto LAB_0068ed50;
LAB_0068ed24:
    if (bVar4 >> 1 != 0) goto LAB_0068ed58;
  }
  else {
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_0068ed18;
LAB_0068ecf0:
    plVar1 = (long *)(param_1 + 0x10);
    puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar9 = (undefined *)*plVar1;
    }
    else {
      puVar7 = (ulong *)*puVar7;
      puVar9 = (undefined *)*plVar1;
    }
    if (puVar9 != PTR_DAT_047cba80) {
      FUN_001fcec0(puVar9,pbVar8);
      goto LAB_0068ed18;
    }
    FUN_001fcdc8(plVar1,puVar7);
    pbVar8 = *(byte **)(param_2 + 0x18);
    bVar4 = *pbVar8;
    if ((bVar4 & 1) == 0) goto LAB_0068ed24;
LAB_0068ed50:
    if (*(long *)(pbVar8 + 8) != 0) {
LAB_0068ed58:
      plVar1 = (long *)(param_1 + 0x18);
      puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar9 = (undefined *)*plVar1;
      }
      else {
        puVar7 = (ulong *)*puVar7;
        puVar9 = (undefined *)*plVar1;
      }
      if (puVar9 == puVar5) {
        FUN_001fcdc8(plVar1,puVar7);
        pbVar8 = *(byte **)(param_2 + 0x20);
        bVar4 = *pbVar8;
        goto joined_r0x0068ed88;
      }
      FUN_001fcec0(puVar9,pbVar8);
    }
  }
  pbVar8 = *(byte **)(param_2 + 0x20);
  bVar4 = *pbVar8;
joined_r0x0068ed88:
  if ((bVar4 & 1) == 0) {
    if (bVar4 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(pbVar8 + 8) == 0) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x20);
  puVar7 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar9 = (undefined *)*plVar1;
  }
  else {
    puVar7 = (ulong *)*puVar7;
    puVar9 = (undefined *)*plVar1;
  }
  if (puVar9 == puVar5) {
    FUN_001fcdc8(plVar1,puVar7);
    return;
  }
  FUN_001fcec0(puVar9,pbVar8);
  return;
}


