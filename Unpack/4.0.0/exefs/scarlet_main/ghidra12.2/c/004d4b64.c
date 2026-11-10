/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d4b64; name: FUN_004d4b64
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_004d4b64(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  
  FUN_005239b8(param_1 + 0x10,param_2 + 0x10);
  uVar8 = *(ulong *)(param_2 + 8);
  if ((uVar8 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar14 = FUN_00264e54();
    }
    else {
      lVar14 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0051496c(lVar14,(uVar8 & 0xfffffffffffffffe) + 8);
  }
  uVar2 = *(uint *)(param_2 + 0x38);
  if (uVar2 != 0) {
    puVar9 = *(undefined8 **)(param_2 + 0x40);
    puVar6 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x30),uVar2);
    iVar3 = *(int *)(param_1 + 0x38);
    iVar13 = **(int **)(param_1 + 0x40);
    uVar4 = iVar13 - iVar3;
    uVar8 = (ulong)uVar4;
    if ((0 < (int)uVar2) && (0 < (int)uVar4)) {
      uVar1 = (ulong)uVar2;
      if (uVar8 - 1 <= (ulong)uVar2 - 1) {
        uVar1 = uVar8;
      }
      lVar14 = -uVar1;
      puVar11 = puVar6;
      puVar15 = puVar9;
      do {
        puVar15 = puVar15 + 1;
        FUN_004e83d8(*puVar15,*puVar11);
        bVar5 = lVar14 != -1;
        lVar14 = lVar14 + 1;
        puVar11 = puVar11 + 1;
      } while (bVar5);
    }
    if ((int)uVar4 < (int)uVar2) {
      iVar13 = (iVar3 + uVar2) - iVar13;
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      uVar8 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3;
      puVar9 = (undefined8 *)(uVar8 + (long)puVar9);
      puVar6 = (undefined8 *)((long)puVar6 + uVar8);
      do {
        puVar9 = puVar9 + 1;
        uVar12 = *puVar9;
        uVar7 = FUN_004e75dc(uVar10);
        FUN_004e83d8(uVar12,uVar7);
        iVar13 = iVar13 + -1;
        *puVar6 = uVar7;
        puVar6 = puVar6 + 1;
      } while (iVar13 != 0);
    }
    iVar3 = *(int *)(param_1 + 0x38) + uVar2;
    *(int *)(param_1 + 0x38) = iVar3;
    if (**(int **)(param_1 + 0x40) < iVar3) {
      **(int **)(param_1 + 0x40) = iVar3;
    }
  }
  uVar2 = *(uint *)(param_2 + 0x28);
  if ((uVar2 & 0x3f) != 0) {
    if ((uVar2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    }
    if ((uVar2 >> 1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x4c) = *(undefined1 *)(param_2 + 0x4c);
    }
    if ((uVar2 >> 2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x4d) = *(undefined1 *)(param_2 + 0x4d);
    }
    if ((uVar2 >> 3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x4e) = *(undefined1 *)(param_2 + 0x4e);
    }
    if ((uVar2 >> 4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x4f) = *(undefined1 *)(param_2 + 0x4f);
    }
    if ((uVar2 >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    }
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | uVar2;
  }
  return;
}


