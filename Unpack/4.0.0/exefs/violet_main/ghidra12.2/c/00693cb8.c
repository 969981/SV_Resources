/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00693cb8; name: FUN_00693cb8
 */


void FUN_00693cb8(long param_1,undefined *param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  int iVar19;
  long lVar20;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar15 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*puVar1 & 1) == 0) {
      lVar20 = FUN_0021d48c(puVar1);
    }
    else {
      lVar20 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    uVar3 = *(ulong *)(uVar15 + 0x10);
    lVar4 = *(long *)(uVar15 + 0x18);
    if ((*(byte *)(uVar15 + 8) & 1) == 0) {
      lVar4 = uVar15 + 9;
      uVar3 = (ulong)(*(byte *)(uVar15 + 8) >> 1);
    }
    FUN_0021d540(lVar20,lVar4,uVar3);
  }
  uVar5 = *(uint *)(param_2 + 0x18);
  if (uVar5 != 0) {
    puVar12 = *(undefined8 **)(param_2 + 0x20);
    puVar9 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x10),uVar5);
    iVar6 = *(int *)(param_1 + 0x18);
    iVar19 = **(int **)(param_1 + 0x20);
    uVar7 = iVar19 - iVar6;
    uVar15 = (ulong)uVar7;
    if ((0 < (int)uVar5) && (0 < (int)uVar7)) {
      uVar3 = (ulong)uVar5;
      if (uVar15 - 1 <= (ulong)uVar5 - 1) {
        uVar3 = uVar15;
      }
      lVar20 = -uVar3;
      puVar17 = puVar9;
      puVar14 = puVar12;
      do {
        puVar14 = puVar14 + 1;
        FUN_00696734(*puVar14,*puVar17);
        bVar8 = lVar20 != -1;
        lVar20 = lVar20 + 1;
        puVar17 = puVar17 + 1;
      } while (bVar8);
    }
    if ((int)uVar7 < (int)uVar5) {
      iVar19 = (iVar6 + uVar5) - iVar19;
      uVar16 = *(undefined8 *)(param_1 + 0x10);
      uVar15 = -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3;
      puVar12 = (undefined8 *)(uVar15 + (long)puVar12);
      puVar9 = (undefined8 *)((long)puVar9 + uVar15);
      do {
        puVar12 = puVar12 + 1;
        uVar18 = *puVar12;
        uVar10 = FUN_0069dc88(uVar16);
        FUN_00696734(uVar18,uVar10);
        iVar19 = iVar19 + -1;
        *puVar9 = uVar10;
        puVar9 = puVar9 + 1;
      } while (iVar19 != 0);
    }
    iVar6 = *(int *)(param_1 + 0x18) + uVar5;
    *(int *)(param_1 + 0x18) = iVar6;
    if (**(int **)(param_1 + 0x20) < iVar6) {
      **(int **)(param_1 + 0x20) = iVar6;
    }
  }
  if ((param_2 == PTR_DAT_047cf6a8) ||
     (puVar13 = *(undefined **)(param_2 + 0x28), puVar13 == (undefined *)0x0)) {
    return;
  }
  lVar20 = *(long *)(param_1 + 0x28);
  if (lVar20 == 0) {
    puVar11 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
    if ((*puVar1 & 1) != 0) {
      puVar11 = (ulong *)*puVar11;
    }
    lVar20 = FUN_0051444c(puVar11);
    *(long *)(param_1 + 0x28) = lVar20;
    puVar13 = *(undefined **)(param_2 + 0x28);
  }
  puVar2 = PTR_DAT_047cbe60;
  if (puVar13 != (undefined *)0x0) {
    puVar2 = puVar13;
  }
  FUN_005141f4(lVar20,puVar2);
  return;
}


