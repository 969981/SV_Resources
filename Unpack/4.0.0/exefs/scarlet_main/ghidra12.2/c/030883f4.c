/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030883f4; name: FUN_030883f4
 */


void FUN_030883f4(long *param_1,long param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  int iVar21;
  
  puVar7 = PTR_DAT_047e4fc0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = (long)(puVar7 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  plVar18 = param_1 + 4;
  *plVar18 = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
  param_1[5] = -0x8000000000000000;
  plVar17 = param_1 + 6;
  *plVar17 = 0;
  param_1[7] = -0x8000000000000000;
  plVar16 = param_1 + 8;
  *plVar16 = 0;
  param_1[9] = -0x8000000000000000;
  param_1[10] = 0;
  param_1[0xd] = -0x8000000000000000;
  param_1[0xb] = -0x8000000000000000;
  param_1[0xc] = 0;
  iVar4 = *(int *)(param_2 + 0x28);
  puVar20 = *(undefined4 **)(param_2 + 0x20);
  if (iVar4 < 1) {
    if (iVar4 == 0) {
      uVar2 = 0;
      iVar21 = 0;
      goto LAB_030884e0;
    }
    puVar8 = (undefined4 *)0x0;
  }
  else {
    FUN_03088678(plVar18,PTR_PTR_047d1a50,(long)iVar4);
    puVar8 = (undefined4 *)*plVar18;
  }
  puVar10 = puVar20 + (long)iVar4 * 4;
  do {
    *puVar8 = *puVar20;
    puVar8[1] = puVar20[1];
    puVar8[2] = puVar20[2];
    puVar1 = puVar20 + 3;
    puVar20 = puVar20 + 4;
    puVar8[3] = *puVar1;
    puVar8 = puVar8 + 4;
  } while (puVar20 != puVar10);
  iVar21 = (int)param_1[7];
  uVar2 = *(uint *)((long)param_1 + 0x3c) & 0x7fffffff;
LAB_030884e0:
  *(int *)(param_1 + 5) = iVar4;
  iVar5 = *(int *)(param_2 + 0x38);
  puVar19 = *(undefined8 **)(param_2 + 0x30);
  iVar4 = iVar5 + iVar21;
  if ((int)uVar2 < iVar4) {
    FUN_03088788(plVar17,PTR_PTR_047d1a50,(long)iVar4);
  }
  if (iVar5 != 0) {
    puVar9 = (undefined8 *)(*plVar17 + (long)iVar21 * 0x14);
    uVar12 = (long)iVar5 * 0x14 - 0x14;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar12;
    if ((SUB164(auVar6 * ZEXT816(0xcccccccccccccccd),8) >> 4 & 1) == 0) {
      uVar14 = *puVar19;
      uVar15 = puVar19[1];
      *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar19 + 2);
      *puVar9 = uVar14;
      puVar9[1] = uVar15;
      puVar9 = (undefined8 *)((long)puVar9 + 0x14);
      puVar11 = (undefined8 *)((long)puVar19 + 0x14);
    }
    else {
      puVar11 = puVar19;
    }
    if (0x13 < uVar12) {
      do {
        uVar14 = *puVar11;
        uVar15 = puVar11[1];
        *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar11 + 2);
        *puVar9 = uVar14;
        puVar9[1] = uVar15;
        uVar14 = *(undefined8 *)((long)puVar11 + 0x14);
        uVar15 = *(undefined8 *)((long)puVar11 + 0x1c);
        puVar20 = (undefined4 *)((long)puVar11 + 0x24);
        puVar11 = puVar11 + 5;
        *(undefined4 *)((long)puVar9 + 0x24) = *puVar20;
        *(undefined8 *)((long)puVar9 + 0x1c) = uVar15;
        *(undefined8 *)((long)puVar9 + 0x14) = uVar14;
        puVar9 = puVar9 + 5;
      } while (puVar11 != (undefined8 *)((long)puVar19 + (long)iVar5 * 0x14));
    }
  }
  *(int *)(param_1 + 7) = iVar4;
  iVar21 = *(int *)(param_2 + 0x48);
  puVar20 = *(undefined4 **)(param_2 + 0x40);
  lVar13 = param_1[9];
  iVar4 = (int)lVar13 + iVar21;
  if ((int)(*(uint *)((long)param_1 + 0x4c) & 0x7fffffff) < iVar4) {
    FUN_03088918(plVar16,PTR_PTR_047d1a50,(long)iVar4);
  }
  if (iVar21 != 0) {
    puVar10 = (undefined4 *)(*plVar16 + (long)(int)lVar13 * 8);
    lVar13 = (long)iVar21 * 8 + -8;
    puVar8 = puVar20;
    if (((uint)lVar13 >> 3 & 1) == 0) {
      *puVar10 = *puVar20;
      puVar10[1] = puVar20[1];
      puVar8 = puVar20 + 2;
      puVar10 = puVar10 + 2;
    }
    if (lVar13 != 0) {
      do {
        *puVar10 = *puVar8;
        puVar10[1] = puVar8[1];
        puVar10[2] = puVar8[2];
        puVar1 = puVar8 + 3;
        puVar8 = puVar8 + 4;
        puVar10[3] = *puVar1;
        puVar10 = puVar10 + 4;
      } while (puVar8 != puVar20 + (long)iVar21 * 2);
    }
  }
  *(int *)(param_1 + 9) = iVar4;
  return;
}


