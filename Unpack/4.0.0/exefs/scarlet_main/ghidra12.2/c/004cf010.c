/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004cf010; name: FUN_004cf010
 */


void FUN_004cf010(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  FUN_005239b8(param_1 + 0x10,param_2 + 0x10);
  uVar8 = *(ulong *)(param_2 + 8);
  if ((uVar8 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar13 = FUN_00264e54();
    }
    else {
      lVar13 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0051496c(lVar13,(uVar8 & 0xfffffffffffffffe) + 8);
  }
  uVar2 = *(uint *)(param_2 + 0x30);
  if (uVar2 != 0) {
    puVar11 = *(undefined8 **)(param_2 + 0x38);
    puVar6 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x28),uVar2);
    iVar3 = *(int *)(param_1 + 0x30);
    iVar12 = **(int **)(param_1 + 0x38);
    uVar4 = iVar12 - iVar3;
    uVar8 = (ulong)uVar4;
    if ((0 < (int)uVar2) && (0 < (int)uVar4)) {
      uVar1 = (ulong)uVar2;
      if (uVar8 - 1 <= (ulong)uVar2 - 1) {
        uVar1 = uVar8;
      }
      lVar13 = -uVar1;
      puVar15 = puVar6;
      puVar14 = puVar11;
      do {
        puVar14 = puVar14 + 1;
        FUN_004e83d8(*puVar14,*puVar15);
        bVar5 = lVar13 != -1;
        lVar13 = lVar13 + 1;
        puVar15 = puVar15 + 1;
      } while (bVar5);
    }
    if ((int)uVar4 < (int)uVar2) {
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      iVar12 = (iVar3 + uVar2) - iVar12;
      uVar8 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3;
      puVar11 = (undefined8 *)(uVar8 + (long)puVar11);
      puVar6 = (undefined8 *)((long)puVar6 + uVar8);
      do {
        puVar11 = puVar11 + 1;
        uVar10 = *puVar11;
        uVar7 = FUN_004e75dc(uVar9);
        FUN_004e83d8(uVar10,uVar7);
        iVar12 = iVar12 + -1;
        *puVar6 = uVar7;
        puVar6 = puVar6 + 1;
      } while (iVar12 != 0);
    }
    iVar3 = *(int *)(param_1 + 0x30) + uVar2;
    *(int *)(param_1 + 0x30) = iVar3;
    if (**(int **)(param_1 + 0x38) < iVar3) {
      **(int **)(param_1 + 0x38) = iVar3;
    }
  }
  return;
}


