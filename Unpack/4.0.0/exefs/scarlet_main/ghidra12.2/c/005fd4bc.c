/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005fd4bc; name: FUN_005fd4bc
 */


void FUN_005fd4bc(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong *puVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  int iVar17;
  long lVar18;
  undefined8 *puVar19;
  
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar13 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar18 = FUN_0021d48c();
    }
    else {
      lVar18 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar13 + 0x10);
    lVar2 = *(long *)(uVar13 + 0x18);
    if ((*(byte *)(uVar13 + 8) & 1) == 0) {
      lVar2 = uVar13 + 9;
      uVar1 = (ulong)(*(byte *)(uVar13 + 8) >> 1);
    }
    FUN_0021d540(lVar18,lVar2,uVar1);
  }
  uVar3 = *(uint *)(param_2 + 0x18);
  if (uVar3 != 0) {
    puVar11 = *(undefined8 **)(param_2 + 0x20);
    puVar7 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x10),uVar3);
    iVar4 = *(int *)(param_1 + 0x18);
    iVar17 = **(int **)(param_1 + 0x20);
    uVar5 = iVar17 - iVar4;
    uVar13 = (ulong)uVar5;
    if ((0 < (int)uVar3) && (0 < (int)uVar5)) {
      uVar1 = (ulong)uVar3;
      if (uVar13 - 1 <= (ulong)uVar3 - 1) {
        uVar1 = uVar13;
      }
      lVar18 = -uVar1;
      puVar15 = puVar7;
      puVar19 = puVar11;
      do {
        puVar19 = puVar19 + 1;
        FUN_00603444(*puVar19,*puVar15);
        bVar6 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar15 = puVar15 + 1;
      } while (bVar6);
    }
    if ((int)uVar5 < (int)uVar3) {
      iVar17 = (iVar4 + uVar3) - iVar17;
      uVar14 = *(undefined8 *)(param_1 + 0x10);
      uVar13 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3;
      puVar11 = (undefined8 *)(uVar13 + (long)puVar11);
      puVar7 = (undefined8 *)((long)puVar7 + uVar13);
      do {
        puVar11 = puVar11 + 1;
        uVar16 = *puVar11;
        uVar8 = FUN_00615f34(uVar14);
        FUN_00603444(uVar16,uVar8);
        iVar17 = iVar17 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar17 != 0);
    }
    iVar4 = *(int *)(param_1 + 0x18) + uVar3;
    *(int *)(param_1 + 0x18) = iVar4;
    if (**(int **)(param_1 + 0x20) < iVar4) {
      **(int **)(param_1 + 0x20) = iVar4;
    }
  }
  pbVar10 = *(byte **)(param_2 + 0x28);
  if ((*pbVar10 & 1) == 0) {
    if (*pbVar10 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(pbVar10 + 8) == 0) {
    return;
  }
  puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar9 = (ulong *)*puVar9;
  }
  puVar12 = *(undefined **)(param_1 + 0x28);
  if (puVar12 == PTR_DAT_047cba80) {
    FUN_001fcdc8((undefined8 *)(param_1 + 0x28),puVar9);
    return;
  }
  FUN_001fcec0(puVar12,pbVar10);
  return;
}


