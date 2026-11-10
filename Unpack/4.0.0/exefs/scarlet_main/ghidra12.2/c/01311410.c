/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01311410; name: FUN_01311410
 */


void FUN_01311410(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  
  param_1[2] = 0;
  lVar9 = 0;
  lVar10 = 0;
  lVar11 = 0;
  *param_1 = 0x40000000400;
  param_1[1] = 0;
  lVar12 = 0x2818;
  lVar13 = 0x4218;
  lVar14 = 0x4618;
  lVar15 = 0xea18;
  lVar16 = 0x6a18;
  lVar17 = 0x16ab8;
  lVar18 = 0x5218;
  lVar5 = 0x6218;
  do {
    lVar22 = 0x10;
    lVar6 = lVar5;
    lVar7 = lVar18;
    lVar8 = lVar17;
    lVar19 = lVar16;
    lVar20 = lVar15;
    lVar21 = lVar14;
    lVar23 = lVar13;
    lVar24 = lVar12;
    lVar25 = lVar9;
    lVar26 = lVar10;
    do {
      *(undefined8 *)((long)param_1 + lVar26 + 0x18) = 0;
      *(undefined8 *)((long)param_1 + lVar26 + 0x1018) = 0;
      puVar1 = (undefined1 *)((long)param_1 + lVar23);
      lVar26 = lVar26 + 8;
      *(undefined4 *)((long)param_1 + lVar25 + 0x2018) = 0;
      lVar23 = lVar23 + 1;
      *(undefined1 *)((long)param_1 + lVar24) = 0;
      lVar24 = lVar24 + 1;
      *(undefined4 *)((long)param_1 + lVar25 + 0x2a18) = 0x3f800000;
      lVar22 = lVar22 + -1;
      *(undefined4 *)((long)param_1 + lVar25 + 0x3218) = 0x3f800000;
      *(undefined4 *)((long)param_1 + lVar25 + 0x3a18) = 0;
      puVar2 = (undefined2 *)((long)param_1 + lVar21);
      lVar21 = lVar21 + 2;
      *puVar1 = 0;
      puVar1[0x200] = 0;
      *puVar2 = 0;
      puVar1[0x800] = 0;
      puVar1[0xa00] = 0;
      puVar3 = (undefined4 *)((long)param_1 + lVar19);
      lVar19 = lVar19 + 0x40;
      puVar2[0x400] = 0;
      *(undefined4 *)((long)param_1 + lVar7) = 0;
      lVar7 = lVar7 + 4;
      puVar2[0xa00] = 0;
      puVar2[0xc00] = 0;
      puVar4 = (undefined4 *)((long)param_1 + lVar20);
      lVar20 = lVar20 + 0x40;
      *(undefined4 *)((long)param_1 + lVar6) = 0;
      lVar6 = lVar6 + 4;
      *puVar3 = 0;
      *puVar4 = 0;
      puVar3[1] = 0;
      puVar4[1] = 0;
      puVar3[2] = 0;
      puVar4[2] = 0;
      puVar3[3] = 0;
      puVar4[3] = 0;
      puVar3[4] = 0;
      puVar4[4] = 0;
      puVar3[5] = 0;
      puVar4[5] = 0;
      puVar3[6] = 0;
      puVar4[6] = 0;
      puVar3[7] = 0;
      puVar4[7] = 0;
      puVar3[8] = 0;
      puVar4[8] = 0;
      puVar3[9] = 0;
      puVar4[9] = 0;
      puVar3[10] = 0;
      puVar4[10] = 0;
      puVar3[0xb] = 0;
      puVar4[0xb] = 0;
      puVar3[0xc] = 0;
      puVar4[0xc] = 0;
      puVar3[0xd] = 0;
      puVar4[0xd] = 0;
      puVar3[0xe] = 0;
      puVar4[0xe] = 0;
      puVar3[0xf] = 0;
      puVar4[0xf] = 0;
      *(undefined4 *)((long)param_1 + lVar8) = 0;
      lVar8 = lVar8 + 4;
      lVar25 = lVar25 + 4;
    } while (lVar22 != 0);
    lVar26 = lVar11 * 4;
    lVar11 = lVar11 + 1;
    lVar10 = lVar10 + 0x80;
    lVar9 = lVar9 + 0x40;
    lVar12 = lVar12 + 0x10;
    lVar13 = lVar13 + 0x10;
    lVar14 = lVar14 + 0x20;
    lVar15 = lVar15 + 0x400;
    lVar16 = lVar16 + 0x400;
    lVar17 = lVar17 + 0x40;
    lVar18 = lVar18 + 0x40;
    lVar5 = lVar5 + 0x40;
    *(undefined4 *)((long)param_1 + lVar26 + 0x16a1c) = 1;
  } while (lVar11 != 0x20);
  *(undefined1 *)(param_1 + 0x2d56) = 0;
  param_1[0x2d54] = 0x80000;
  param_1[0x2d55] = 0xc800;
  *(undefined4 *)((long)param_1 + 0x16ab4) = 0x400;
  *(undefined4 *)(param_1 + 0x2d43) = 1;
  *(undefined1 *)(param_1 + 0x2e57) = 0;
  *(undefined4 *)((long)param_1 + 0x172bc) = 1;
  *(undefined1 *)(param_1 + 0x2e5b) = 0;
  param_1[0x2e58] = 0;
  param_1[0x2e59] = 0;
  param_1[0x2e5a] = 0;
  *(undefined1 *)((long)param_1 + 0x172d9) = 1;
  return;
}


