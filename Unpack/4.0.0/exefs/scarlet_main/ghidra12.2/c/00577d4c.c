/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00577d4c; name: FUN_00577d4c
 */


void FUN_00577d4c(long param_1,undefined *param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  byte *pbVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar10 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*puVar1 & 1) == 0) {
      lVar5 = FUN_0021d48c(puVar1);
    }
    else {
      lVar5 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    uVar3 = *(ulong *)(uVar10 + 0x10);
    lVar4 = *(long *)(uVar10 + 0x18);
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      lVar4 = uVar10 + 9;
      uVar3 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    FUN_0021d540(lVar5,lVar4,uVar3);
  }
  pbVar7 = *(byte **)(param_2 + 0x10);
  if ((*pbVar7 & 1) == 0) {
    if (*pbVar7 >> 1 == 0) goto joined_r0x00577dfc;
  }
  else if (*(long *)(pbVar7 + 8) == 0) goto joined_r0x00577dfc;
  puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar6 = (ulong *)*puVar6;
  }
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == PTR_DAT_047cba80) {
    FUN_001fcdc8((undefined8 *)(param_1 + 0x10),puVar6);
  }
  else {
    FUN_001fcec0(puVar8,pbVar7);
  }
joined_r0x00577dfc:
  if (param_2 != PTR_DAT_047cdef8) {
    puVar8 = *(undefined **)(param_2 + 0x18);
    if (puVar8 != (undefined *)0x0) {
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar5 == 0) {
        puVar6 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar5 = FUN_0026b02c(puVar6);
        *(long *)(param_1 + 0x18) = lVar5;
        puVar8 = *(undefined **)(param_2 + 0x18);
      }
      puVar9 = PTR_DAT_047cc258;
      if (puVar8 != (undefined *)0x0) {
        puVar9 = puVar8;
      }
      FUN_00267e50(lVar5,puVar9);
    }
    puVar8 = PTR_DAT_047cbe60;
    puVar9 = *(undefined **)(param_2 + 0x20);
    if (puVar9 != (undefined *)0x0) {
      lVar5 = *(long *)(param_1 + 0x20);
      if (lVar5 == 0) {
        puVar6 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar5 = FUN_0051444c(puVar6);
        *(long *)(param_1 + 0x20) = lVar5;
        puVar9 = *(undefined **)(param_2 + 0x20);
      }
      puVar2 = puVar8;
      if (puVar9 != (undefined *)0x0) {
        puVar2 = puVar9;
      }
      FUN_005141f4(lVar5,puVar2);
    }
    puVar9 = *(undefined **)(param_2 + 0x28);
    if (puVar9 != (undefined *)0x0) {
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 == 0) {
        puVar6 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        lVar5 = FUN_0051444c(puVar6);
        *(long *)(param_1 + 0x28) = lVar5;
        puVar9 = *(undefined **)(param_2 + 0x28);
      }
      if (puVar9 != (undefined *)0x0) {
        puVar8 = puVar9;
      }
      FUN_005141f4(lVar5,puVar8);
      return;
    }
  }
  return;
}


