/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005fe924; name: FUN_005fe924
 */


void FUN_005fe924(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  undefined *puVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  int iVar20;
  long lVar21;
  undefined8 *puVar22;
  
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar16 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar21 = FUN_0021d48c();
    }
    else {
      lVar21 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar2 = *(ulong *)(uVar16 + 0x10);
    lVar3 = *(long *)(uVar16 + 0x18);
    if ((*(byte *)(uVar16 + 8) & 1) == 0) {
      lVar3 = uVar16 + 9;
      uVar2 = (ulong)(*(byte *)(uVar16 + 8) >> 1);
    }
    FUN_0021d540(lVar21,lVar3,uVar2);
  }
  uVar4 = *(uint *)(param_2 + 0x18);
  if (uVar4 != 0) {
    puVar14 = *(undefined8 **)(param_2 + 0x20);
    puVar10 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x10),uVar4);
    iVar5 = *(int *)(param_1 + 0x18);
    iVar20 = **(int **)(param_1 + 0x20);
    uVar7 = iVar20 - iVar5;
    uVar16 = (ulong)uVar7;
    if ((0 < (int)uVar4) && (0 < (int)uVar7)) {
      uVar2 = (ulong)uVar4;
      if (uVar16 - 1 <= (ulong)uVar4 - 1) {
        uVar2 = uVar16;
      }
      lVar21 = -uVar2;
      puVar18 = puVar10;
      puVar22 = puVar14;
      do {
        puVar22 = puVar22 + 1;
        FUN_00603454(*puVar22,*puVar18);
        bVar9 = lVar21 != -1;
        lVar21 = lVar21 + 1;
        puVar18 = puVar18 + 1;
      } while (bVar9);
    }
    if ((int)uVar7 < (int)uVar4) {
      iVar20 = (iVar5 + uVar4) - iVar20;
      uVar17 = *(undefined8 *)(param_1 + 0x10);
      uVar16 = -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3;
      puVar14 = (undefined8 *)(uVar16 + (long)puVar14);
      puVar10 = (undefined8 *)((long)puVar10 + uVar16);
      do {
        puVar14 = puVar14 + 1;
        uVar19 = *puVar14;
        uVar11 = FUN_006160e8(uVar17);
        FUN_00603454(uVar19,uVar11);
        iVar20 = iVar20 + -1;
        *puVar10 = uVar11;
        puVar10 = puVar10 + 1;
      } while (iVar20 != 0);
    }
    iVar5 = *(int *)(param_1 + 0x18) + uVar4;
    *(int *)(param_1 + 0x18) = iVar5;
    if (**(int **)(param_1 + 0x20) < iVar5) {
      **(int **)(param_1 + 0x20) = iVar5;
    }
  }
  FUN_004e80a8(param_1 + 0x28,param_2 + 0x28);
  FUN_004e80a8(param_1 + 0x40,param_2 + 0x40);
  puVar8 = PTR_DAT_047cba80;
  pbVar13 = *(byte **)(param_2 + 0x58);
  if ((*pbVar13 & 1) == 0) {
    if (*pbVar13 >> 1 != 0) goto LAB_005feabc;
  }
  else if (*(long *)(pbVar13 + 8) != 0) {
LAB_005feabc:
    plVar1 = (long *)(param_1 + 0x58);
    puVar12 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      puVar15 = (undefined *)*plVar1;
    }
    else {
      puVar12 = (ulong *)*puVar12;
      puVar15 = (undefined *)*plVar1;
    }
    if (puVar15 == PTR_DAT_047cba80) {
      FUN_001fcdc8(plVar1,puVar12);
      pbVar13 = *(byte **)(param_2 + 0x60);
      bVar6 = *pbVar13;
      goto joined_r0x005feaec;
    }
    FUN_001fcec0(puVar15,pbVar13);
  }
  pbVar13 = *(byte **)(param_2 + 0x60);
  bVar6 = *pbVar13;
joined_r0x005feaec:
  if ((bVar6 & 1) == 0) {
    if (bVar6 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(pbVar13 + 8) == 0) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x60);
  puVar12 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar15 = (undefined *)*plVar1;
  }
  else {
    puVar12 = (ulong *)*puVar12;
    puVar15 = (undefined *)*plVar1;
  }
  if (puVar15 == puVar8) {
    FUN_001fcdc8(plVar1,puVar12);
    return;
  }
  FUN_001fcec0(puVar15,pbVar13);
  return;
}


