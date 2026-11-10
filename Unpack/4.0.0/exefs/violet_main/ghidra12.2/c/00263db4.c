/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00263db4; name: FUN_00263db4
 */


void FUN_00263db4(long *param_1,long param_2)

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
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  int iVar18;
  undefined8 *puVar19;
  
  plVar12 = param_1 + 2;
  *plVar12 = 0;
  puVar6 = PTR_DAT_047cc270;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[1] = 0;
  uVar3 = *(uint *)(param_2 + 0x18);
  if (uVar3 != 0) {
    puVar11 = *(undefined8 **)(param_2 + 0x20);
                    /* try { // try from 00263e04 to 00263e0f has its CatchHandler @ 00263f90 */
    puVar8 = (undefined8 *)FUN_0053234c(plVar12,uVar3);
    lVar15 = param_1[3];
    iVar18 = *(int *)param_1[4];
    uVar5 = iVar18 - (int)lVar15;
    uVar17 = (ulong)uVar5;
    if ((0 < (int)uVar3) && (0 < (int)uVar5)) {
      uVar2 = (ulong)uVar3;
      if (uVar17 - 1 <= (ulong)uVar3 - 1) {
        uVar2 = uVar17;
      }
      lVar14 = -uVar2;
      puVar13 = puVar8;
      puVar19 = puVar11;
      do {
        puVar19 = puVar19 + 1;
                    /* try { // try from 00263e60 to 00263e63 has its CatchHandler @ 00263ffc */
        FUN_00264f48(*puVar19,*puVar13);
        bVar7 = lVar14 != -1;
        lVar14 = lVar14 + 1;
        puVar13 = puVar13 + 1;
      } while (bVar7);
    }
    if ((int)uVar5 < (int)uVar3) {
      iVar18 = ((int)lVar15 + uVar3) - iVar18;
      lVar15 = *plVar12;
      uVar17 = -(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar17 << 3;
      puVar11 = (undefined8 *)(uVar17 + (long)puVar11);
      puVar8 = (undefined8 *)((long)puVar8 + uVar17);
      do {
        puVar11 = puVar11 + 1;
        uVar16 = *puVar11;
                    /* try { // try from 00263ea0 to 00263eb7 has its CatchHandler @ 00264000 */
        uVar9 = FUN_0049f2bc(lVar15);
        FUN_00264f48(uVar16,uVar9);
        iVar18 = iVar18 + -1;
        *puVar8 = uVar9;
        puVar8 = puVar8 + 1;
      } while (iVar18 != 0);
    }
    iVar18 = (int)param_1[3] + uVar3;
    *(int *)(param_1 + 3) = iVar18;
    if (*(int *)param_1[4] < iVar18) {
      *(int *)param_1[4] = iVar18;
    }
  }
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  uVar17 = *(ulong *)(param_2 + 8);
  puVar1 = (ulong *)(param_1 + 1);
  if ((uVar17 & 1) != 0) {
    if ((*puVar1 & 1) == 0) {
      lVar15 = FUN_00264e54(puVar1);
    }
    else {
      lVar15 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
                    /* try { // try from 00263f10 to 00263f8b has its CatchHandler @ 00263f94 */
    FUN_0051496c(lVar15,(uVar17 & 0xfffffffffffffffe) + 8);
  }
  param_1[5] = (long)PTR_DAT_047cba80;
  bVar4 = **(byte **)(param_2 + 0x28);
  if ((bVar4 & 1) == 0) {
    if (bVar4 >> 1 == 0) goto LAB_00263f54;
  }
  else if (*(long *)(*(byte **)(param_2 + 0x28) + 8) == 0) goto LAB_00263f54;
  puVar10 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
  if ((*puVar1 & 1) != 0) {
    puVar10 = (ulong *)*puVar10;
  }
  FUN_001fcdc8(param_1 + 5,puVar10);
LAB_00263f54:
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  return;
}


