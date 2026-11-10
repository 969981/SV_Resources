/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0068c040; name: FUN_0068c040
 */


void FUN_0068c040(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar10 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar15 = FUN_0021d48c();
    }
    else {
      lVar15 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar10 + 0x10);
    lVar2 = *(long *)(uVar10 + 0x18);
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      lVar2 = uVar10 + 9;
      uVar1 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    FUN_0021d540(lVar15,lVar2,uVar1);
  }
  uVar3 = *(uint *)(param_2 + 0x18);
  if (uVar3 != 0) {
    puVar9 = *(undefined8 **)(param_2 + 0x20);
    puVar7 = (undefined8 *)FUN_0053234c((undefined8 *)(param_1 + 0x10),uVar3);
    iVar4 = *(int *)(param_1 + 0x18);
    iVar14 = **(int **)(param_1 + 0x20);
    uVar5 = iVar14 - iVar4;
    uVar10 = (ulong)uVar5;
    if ((0 < (int)uVar3) && (0 < (int)uVar5)) {
      uVar1 = (ulong)uVar3;
      if (uVar10 - 1 <= (ulong)uVar3 - 1) {
        uVar1 = uVar10;
      }
      lVar15 = -uVar1;
      puVar12 = puVar7;
      puVar16 = puVar9;
      do {
        puVar16 = puVar16 + 1;
        FUN_00255058(*puVar16,*puVar12);
        bVar6 = lVar15 != -1;
        lVar15 = lVar15 + 1;
        puVar12 = puVar12 + 1;
      } while (bVar6);
    }
    if ((int)uVar5 < (int)uVar3) {
      iVar14 = (iVar4 + uVar3) - iVar14;
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar10 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3;
      puVar9 = (undefined8 *)(uVar10 + (long)puVar9);
      puVar7 = (undefined8 *)((long)puVar7 + uVar10);
      do {
        puVar9 = puVar9 + 1;
        uVar13 = *puVar9;
        uVar8 = FUN_0026ae18(uVar11);
        FUN_00255058(uVar13,uVar8);
        iVar14 = iVar14 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar14 != 0);
    }
    iVar4 = *(int *)(param_1 + 0x18) + uVar3;
    *(int *)(param_1 + 0x18) = iVar4;
    if (**(int **)(param_1 + 0x20) < iVar4) {
      **(int **)(param_1 + 0x20) = iVar4;
    }
  }
  if (*(char *)(param_2 + 0x28) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}


