/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0021e550; name: FUN_0021e550
 */


void FUN_0021e550(long param_1,undefined *param_2)

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
    if (*pbVar9 >> 1 != 0) goto LAB_0021e5d4;
LAB_0021e5fc:
    pbVar9 = *(byte **)(param_2 + 0x18);
    bVar6 = *pbVar9;
    if ((bVar6 & 1) != 0) goto LAB_0021e634;
LAB_0021e608:
    puVar10 = PTR_DAT_047cbe60;
    if (bVar6 >> 1 == 0) goto joined_r0x0021e670;
  }
  else {
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_0021e5fc;
LAB_0021e5d4:
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
      goto LAB_0021e5fc;
    }
    FUN_001fcdc8(plVar2,puVar8);
    pbVar9 = *(byte **)(param_2 + 0x18);
    bVar6 = *pbVar9;
    if ((bVar6 & 1) == 0) goto LAB_0021e608;
LAB_0021e634:
    puVar10 = PTR_DAT_047cbe60;
    if (*(long *)(pbVar9 + 8) == 0) goto joined_r0x0021e670;
  }
  plVar2 = (long *)(param_1 + 0x18);
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
joined_r0x0021e670:
  PTR_DAT_047cbe60 = puVar10;
  if (param_2 != PTR_DAT_047cbd28) {
    puVar11 = *(undefined **)(param_2 + 0x20);
    if (puVar11 != (undefined *)0x0) {
      lVar7 = *(long *)(param_1 + 0x20);
      if (lVar7 == 0) {
        puVar8 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar8 = (ulong *)*puVar8;
        }
        lVar7 = FUN_0051444c(puVar8);
        *(long *)(param_1 + 0x20) = lVar7;
        puVar11 = *(undefined **)(param_2 + 0x20);
      }
      puVar3 = puVar10;
      if (puVar11 != (undefined *)0x0) {
        puVar3 = puVar11;
      }
      FUN_005141f4(lVar7,puVar3);
    }
    puVar11 = *(undefined **)(param_2 + 0x28);
    if (puVar11 != (undefined *)0x0) {
      lVar7 = *(long *)(param_1 + 0x28);
      if (lVar7 == 0) {
        puVar8 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar8 = (ulong *)*puVar8;
        }
        lVar7 = FUN_0051444c(puVar8);
        *(long *)(param_1 + 0x28) = lVar7;
        puVar11 = *(undefined **)(param_2 + 0x28);
      }
      if (puVar11 != (undefined *)0x0) {
        puVar10 = puVar11;
      }
      FUN_005141f4(lVar7,puVar10);
      return;
    }
  }
  return;
}


