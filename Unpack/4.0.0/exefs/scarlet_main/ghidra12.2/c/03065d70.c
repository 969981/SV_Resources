/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03065d70; name: FUN_03065d70
 */


void FUN_03065d70(long *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined2 *puVar17;
  undefined1 *puVar18;
  
  puVar8 = PTR_DAT_047e4f40;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = (long)(puVar8 + 0x10);
  lVar6 = *(long *)(param_2 + 0x20);
  param_1[3] = *(long *)(param_2 + 0x18);
  param_1[4] = lVar6;
  param_1[5] = 0;
  param_1[6] = -0x8000000000000000;
  puVar8 = PTR_PTR_047d1a50;
  uVar7 = *(uint *)(param_2 + 0x30);
  if ((int)uVar7 < 1) {
    param_1[5] = 0;
    param_1[6] = -0x8000000000000000;
  }
  else {
    puVar16 = *(undefined4 **)(param_2 + 0x28);
    puVar9 = (undefined4 *)
             (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar7 << 2);
    uVar4 = uVar7 & 3;
    param_1[5] = (long)puVar9;
    *(uint *)(param_1 + 6) = uVar7;
    *(uint *)((long)param_1 + 0x34) = uVar7;
    if (2 < uVar7 - 1) {
      iVar15 = -(uVar7 & 0xfffffffc);
      puVar10 = puVar9;
      do {
        *puVar10 = *puVar16;
        puVar10[1] = puVar16[1];
        puVar10[2] = puVar16[2];
        puVar3 = puVar16 + 3;
        puVar9 = puVar10 + 4;
        puVar16 = puVar16 + 4;
        iVar15 = iVar15 + 4;
        puVar10[3] = *puVar3;
        puVar10 = puVar9;
      } while (iVar15 != 0);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      uVar5 = *puVar16;
      puVar16 = puVar16 + 1;
      *puVar9 = uVar5;
      puVar9 = puVar9 + 1;
    }
  }
  param_1[7] = 0;
  param_1[8] = -0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 0x40);
  if ((int)uVar7 < 1) {
    param_1[7] = 0;
    param_1[8] = -0x8000000000000000;
  }
  else {
    puVar18 = *(undefined1 **)(param_2 + 0x38);
    puVar11 = (undefined1 *)(**(code **)(*(long *)puVar8 + 0x18))(puVar8,uVar7);
    uVar4 = uVar7 & 3;
    param_1[7] = (long)puVar11;
    *(uint *)(param_1 + 8) = uVar7;
    *(uint *)((long)param_1 + 0x44) = uVar7;
    if (2 < uVar7 - 1) {
      iVar15 = -(uVar7 & 0xfffffffc);
      puVar14 = puVar11;
      do {
        *puVar14 = *puVar18;
        puVar14[1] = puVar18[1];
        puVar14[2] = puVar18[2];
        puVar1 = puVar18 + 3;
        puVar11 = puVar14 + 4;
        puVar18 = puVar18 + 4;
        iVar15 = iVar15 + 4;
        puVar14[3] = *puVar1;
        puVar14 = puVar11;
      } while (iVar15 != 0);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar11 = *puVar18;
      puVar11 = puVar11 + 1;
      puVar18 = puVar18 + 1;
    }
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  param_1[10] = 0;
  param_1[0xb] = -0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 0x58);
  if ((int)uVar7 < 1) {
    param_1[10] = 0;
    param_1[0xb] = -0x8000000000000000;
  }
  else {
    puVar17 = *(undefined2 **)(param_2 + 0x50);
    puVar12 = (undefined2 *)(**(code **)(*(long *)puVar8 + 0x18))(puVar8,(ulong)uVar7 << 1);
    uVar4 = uVar7 & 3;
    param_1[10] = (long)puVar12;
    *(uint *)(param_1 + 0xb) = uVar7;
    *(uint *)((long)param_1 + 0x5c) = uVar7;
    if (2 < uVar7 - 1) {
      iVar15 = -(uVar7 & 0xfffffffc);
      puVar13 = puVar12;
      do {
        *puVar13 = *puVar17;
        puVar13[1] = puVar17[1];
        puVar13[2] = puVar17[2];
        puVar2 = puVar17 + 3;
        puVar12 = puVar13 + 4;
        puVar17 = puVar17 + 4;
        iVar15 = iVar15 + 4;
        puVar13[3] = *puVar2;
        puVar13 = puVar12;
      } while (iVar15 != 0);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar12 = *puVar17;
      puVar12 = puVar12 + 1;
      puVar17 = puVar17 + 1;
    }
  }
  param_1[0xc] = 0;
  param_1[0xd] = -0x8000000000000000;
  uVar7 = *(uint *)(param_2 + 0x68);
  if ((int)uVar7 < 1) {
    param_1[0xc] = 0;
    param_1[0xd] = -0x8000000000000000;
  }
  else {
    puVar18 = *(undefined1 **)(param_2 + 0x60);
    puVar11 = (undefined1 *)(**(code **)(*(long *)puVar8 + 0x18))(puVar8,uVar7);
    uVar4 = uVar7 & 3;
    param_1[0xc] = (long)puVar11;
    *(uint *)(param_1 + 0xd) = uVar7;
    *(uint *)((long)param_1 + 0x6c) = uVar7;
    if (2 < uVar7 - 1) {
      iVar15 = -(uVar7 & 0xfffffffc);
      puVar14 = puVar11;
      do {
        *puVar14 = *puVar18;
        puVar14[1] = puVar18[1];
        puVar14[2] = puVar18[2];
        puVar1 = puVar18 + 3;
        puVar11 = puVar14 + 4;
        puVar18 = puVar18 + 4;
        iVar15 = iVar15 + 4;
        puVar14[3] = *puVar1;
        puVar14 = puVar11;
      } while (iVar15 != 0);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar11 = *puVar18;
      puVar11 = puVar11 + 1;
      puVar18 = puVar18 + 1;
    }
  }
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  return;
}


