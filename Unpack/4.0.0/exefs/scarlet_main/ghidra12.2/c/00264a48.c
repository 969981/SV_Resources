/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00264a48; name: FUN_00264a48
 */


void FUN_00264a48(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong *puVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  
  uVar10 = *(ulong *)(param_2 + 8);
  if ((uVar10 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar17 = FUN_00264e54();
    }
    else {
      lVar17 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0051496c(lVar17,(uVar10 & 0xfffffffffffffffe) + 8);
  }
  uVar2 = *(uint *)(param_2 + 0x18);
  if (uVar2 != 0) {
    puVar11 = *(undefined8 **)(param_2 + 0x20);
    puVar6 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x10),uVar2);
    iVar3 = *(int *)(param_1 + 0x18);
    iVar16 = **(int **)(param_1 + 0x20);
    uVar4 = iVar16 - iVar3;
    uVar10 = (ulong)uVar4;
    if ((0 < (int)uVar2) && (0 < (int)uVar4)) {
      uVar1 = (ulong)uVar2;
      if (uVar10 - 1 <= (ulong)uVar2 - 1) {
        uVar1 = uVar10;
      }
      lVar17 = -uVar1;
      puVar14 = puVar6;
      puVar18 = puVar11;
      do {
        puVar18 = puVar18 + 1;
        FUN_00264f48(*puVar18,*puVar14);
        bVar5 = lVar17 != -1;
        lVar17 = lVar17 + 1;
        puVar14 = puVar14 + 1;
      } while (bVar5);
    }
    if ((int)uVar4 < (int)uVar2) {
      iVar16 = (iVar3 + uVar2) - iVar16;
      uVar13 = *(undefined8 *)(param_1 + 0x10);
      uVar10 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3;
      puVar11 = (undefined8 *)(uVar10 + (long)puVar11);
      puVar6 = (undefined8 *)((long)puVar6 + uVar10);
      do {
        puVar11 = puVar11 + 1;
        uVar15 = *puVar11;
        uVar7 = FUN_0049f2bc(uVar13);
        FUN_00264f48(uVar15,uVar7);
        iVar16 = iVar16 + -1;
        *puVar6 = uVar7;
        puVar6 = puVar6 + 1;
      } while (iVar16 != 0);
    }
    iVar3 = *(int *)(param_1 + 0x18) + uVar2;
    *(int *)(param_1 + 0x18) = iVar3;
    if (**(int **)(param_1 + 0x20) < iVar3) {
      **(int **)(param_1 + 0x20) = iVar3;
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x28);
  if ((*pbVar9 & 1) == 0) {
    if (*pbVar9 >> 1 != 0) {
LAB_00264ba4:
      puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar8 = (ulong *)*puVar8;
      }
      puVar12 = *(undefined **)(param_1 + 0x28);
      if (puVar12 == PTR_DAT_047cba80) {
        FUN_001fcdc8((undefined8 *)(param_1 + 0x28),puVar8);
        iVar3 = *(int *)(param_2 + 0x30);
        goto joined_r0x00264bd8;
      }
      FUN_001fcec0(puVar12,pbVar9);
    }
  }
  else if (*(long *)(pbVar9 + 8) != 0) goto LAB_00264ba4;
  iVar3 = *(int *)(param_2 + 0x30);
joined_r0x00264bd8:
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x30) = iVar3;
  }
  return;
}


