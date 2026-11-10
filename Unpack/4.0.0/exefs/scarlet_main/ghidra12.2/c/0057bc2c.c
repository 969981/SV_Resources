/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0057bc2c; name: FUN_0057bc2c
 */


void FUN_0057bc2c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar14 = FUN_0021d48c();
    }
    else {
      lVar14 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar9 + 0x10);
    lVar2 = *(long *)(uVar9 + 0x18);
    if ((*(byte *)(uVar9 + 8) & 1) == 0) {
      lVar2 = uVar9 + 9;
      uVar1 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    }
    FUN_0021d540(lVar14,lVar2,uVar1);
  }
  uVar3 = *(uint *)(param_2 + 0x18);
  if (uVar3 != 0) {
    puVar12 = *(undefined8 **)(param_2 + 0x20);
    puVar7 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x10),uVar3);
    iVar4 = *(int *)(param_1 + 0x18);
    iVar13 = **(int **)(param_1 + 0x20);
    uVar5 = iVar13 - iVar4;
    uVar9 = (ulong)uVar5;
    if ((0 < (int)uVar3) && (0 < (int)uVar5)) {
      uVar1 = (ulong)uVar3;
      if (uVar9 - 1 <= (ulong)uVar3 - 1) {
        uVar1 = uVar9;
      }
      lVar14 = -uVar1;
      puVar16 = puVar7;
      puVar15 = puVar12;
      do {
        puVar15 = puVar15 + 1;
        FUN_00255058(*puVar15,*puVar16);
        bVar6 = lVar14 != -1;
        lVar14 = lVar14 + 1;
        puVar16 = puVar16 + 1;
      } while (bVar6);
    }
    if ((int)uVar5 < (int)uVar3) {
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      iVar13 = (iVar4 + uVar3) - iVar13;
      uVar9 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3;
      puVar12 = (undefined8 *)(uVar9 + (long)puVar12);
      puVar7 = (undefined8 *)((long)puVar7 + uVar9);
      do {
        puVar12 = puVar12 + 1;
        uVar11 = *puVar12;
        uVar8 = FUN_0026ae18(uVar10);
        FUN_00255058(uVar11,uVar8);
        iVar13 = iVar13 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar13 != 0);
    }
    iVar4 = *(int *)(param_1 + 0x18) + uVar3;
    *(int *)(param_1 + 0x18) = iVar4;
    if (**(int **)(param_1 + 0x20) < iVar4) {
      **(int **)(param_1 + 0x20) = iVar4;
    }
  }
  return;
}


