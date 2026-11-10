/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00699ad4; name: FUN_00699ad4
 */


void FUN_00699ad4(long *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  undefined8 *puVar19;
  
  plVar12 = param_1 + 2;
  *plVar12 = 0;
  puVar6 = PTR_DAT_047cf7b8;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[1] = 0;
  uVar3 = *(uint *)(param_2 + 0x18);
  if (uVar3 != 0) {
    puVar11 = *(undefined8 **)(param_2 + 0x20);
    puVar8 = (undefined8 *)FUN_0053234c(plVar12,uVar3);
    lVar13 = param_1[3];
    iVar17 = *(int *)param_1[4];
    uVar5 = iVar17 - (int)lVar13;
    uVar16 = (ulong)uVar5;
    if ((0 < (int)uVar3) && (0 < (int)uVar5)) {
      uVar2 = (ulong)uVar3;
      if (uVar16 - 1 <= (ulong)uVar3 - 1) {
        uVar2 = uVar16;
      }
      lVar18 = -uVar2;
      puVar14 = puVar8;
      puVar19 = puVar11;
      do {
        puVar19 = puVar19 + 1;
        FUN_0069e094(*puVar19,*puVar14);
        bVar7 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar14 = puVar14 + 1;
      } while (bVar7);
    }
    if ((int)uVar5 < (int)uVar3) {
      iVar17 = ((int)lVar13 + uVar3) - iVar17;
      lVar13 = *plVar12;
      uVar16 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3;
      puVar11 = (undefined8 *)(uVar16 + (long)puVar11);
      puVar8 = (undefined8 *)((long)puVar8 + uVar16);
      do {
        puVar11 = puVar11 + 1;
        uVar15 = *puVar11;
        uVar9 = FUN_0069dbbc(lVar13);
        FUN_0069e094(uVar15,uVar9);
        iVar17 = iVar17 + -1;
        *puVar8 = uVar9;
        puVar8 = puVar8 + 1;
      } while (iVar17 != 0);
    }
    iVar17 = (int)param_1[3] + uVar3;
    *(int *)(param_1 + 3) = iVar17;
    if (*(int *)param_1[4] < iVar17) {
      *(int *)param_1[4] = iVar17;
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  puVar1 = (ulong *)(param_1 + 1);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar16 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    if ((*puVar1 & 1) == 0) {
      lVar13 = FUN_0021d48c(puVar1);
    }
    else {
      lVar13 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    uVar2 = *(ulong *)(uVar16 + 0x10);
    lVar18 = *(long *)(uVar16 + 0x18);
    if ((*(byte *)(uVar16 + 8) & 1) == 0) {
      lVar18 = uVar16 + 9;
      uVar2 = (ulong)(*(byte *)(uVar16 + 8) >> 1);
    }
    FUN_0021d540(lVar13,lVar18,uVar2);
  }
  param_1[5] = (long)PTR_DAT_047cba80;
  bVar4 = **(byte **)(param_2 + 0x28);
  if ((bVar4 & 1) == 0) {
    if (bVar4 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(*(byte **)(param_2 + 0x28) + 8) == 0) {
    return;
  }
  puVar10 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
  if ((*puVar1 & 1) != 0) {
    puVar10 = (ulong *)*puVar10;
  }
  FUN_001fcdc8(param_1 + 5,puVar10);
  return;
}


