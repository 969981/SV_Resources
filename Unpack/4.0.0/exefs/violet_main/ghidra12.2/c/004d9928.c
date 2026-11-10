/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004d9928; name: FUN_004d9928
 */


void FUN_004d9928(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  
  FUN_005239b8(param_1 + 0x10,param_2 + 0x10);
  uVar9 = *(ulong *)(param_2 + 8);
  if ((uVar9 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar15 = FUN_00264e54();
    }
    else {
      lVar15 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0051496c(lVar15,(uVar9 & 0xfffffffffffffffe) + 8);
  }
  uVar2 = *(uint *)(param_2 + 0x38);
  if (uVar2 != 0) {
    puVar10 = *(undefined8 **)(param_2 + 0x40);
    puVar7 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x30),uVar2);
    iVar3 = *(int *)(param_1 + 0x38);
    iVar14 = **(int **)(param_1 + 0x40);
    uVar5 = iVar14 - iVar3;
    uVar9 = (ulong)uVar5;
    if ((0 < (int)uVar2) && (0 < (int)uVar5)) {
      uVar1 = (ulong)uVar2;
      if (uVar9 - 1 <= (ulong)uVar2 - 1) {
        uVar1 = uVar9;
      }
      lVar15 = -uVar1;
      puVar12 = puVar7;
      puVar16 = puVar10;
      do {
        puVar16 = puVar16 + 1;
        FUN_004e83d8(*puVar16,*puVar12);
        bVar6 = lVar15 != -1;
        lVar15 = lVar15 + 1;
        puVar12 = puVar12 + 1;
      } while (bVar6);
    }
    if ((int)uVar5 < (int)uVar2) {
      iVar14 = (iVar3 + uVar2) - iVar14;
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      uVar9 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3;
      puVar10 = (undefined8 *)(uVar9 + (long)puVar10);
      puVar7 = (undefined8 *)((long)puVar7 + uVar9);
      do {
        puVar10 = puVar10 + 1;
        uVar13 = *puVar10;
        uVar8 = FUN_004e75dc(uVar11);
        FUN_004e83d8(uVar13,uVar8);
        iVar14 = iVar14 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar14 != 0);
    }
    iVar3 = *(int *)(param_1 + 0x38) + uVar2;
    *(int *)(param_1 + 0x38) = iVar3;
    if (**(int **)(param_1 + 0x40) < iVar3) {
      **(int **)(param_1 + 0x40) = iVar3;
    }
  }
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    uVar4 = *(undefined1 *)(param_2 + 0x48);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
    *(undefined1 *)(param_1 + 0x48) = uVar4;
  }
  return;
}


