/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0015d0e0; name: FUN_0015d0e0
 */


undefined8 FUN_0015d0e0(uint *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  
  uVar24 = (int)param_2 + 0xdeadbeef;
  iVar25 = 0x206f85b3;
  uVar18 = 0x5768b525 - (int)param_2;
  iVar23 = iVar25;
  iVar21 = iVar25;
  iVar22 = iVar25;
  uVar29 = uVar24;
  uVar30 = uVar24;
  uVar28 = uVar24;
  uVar19 = uVar18;
  uVar26 = uVar18;
  uVar27 = uVar18;
  if (((ulong)param_1 & 0xf) == 0) {
    if (0x17f < param_2) {
      do {
        lVar20 = 0;
        do {
          puVar17 = (uint *)((long)param_1 + lVar20);
          lVar20 = lVar20 + 0x30;
          uVar9 = (*puVar17 & 0xff00ff00) >> 8 | (*puVar17 & 0xff00ff) << 8;
          uVar10 = (puVar17[1] & 0xff00ff00) >> 8 | (puVar17[1] & 0xff00ff) << 8;
          uVar11 = (puVar17[2] & 0xff00ff00) >> 8 | (puVar17[2] & 0xff00ff) << 8;
          uVar12 = (puVar17[3] & 0xff00ff00) >> 8 | (puVar17[3] & 0xff00ff) << 8;
          uVar13 = (puVar17[8] & 0xff00ff00) >> 8 | (puVar17[8] & 0xff00ff) << 8;
          uVar14 = (puVar17[9] & 0xff00ff00) >> 8 | (puVar17[9] & 0xff00ff) << 8;
          uVar15 = (puVar17[10] & 0xff00ff00) >> 8 | (puVar17[10] & 0xff00ff) << 8;
          uVar16 = (puVar17[0xb] & 0xff00ff00) >> 8 | (puVar17[0xb] & 0xff00ff) << 8;
          uVar18 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar18;
          uVar19 = (uVar14 >> 0x10 | uVar14 << 0x10) + uVar19;
          uVar26 = (uVar15 >> 0x10 | uVar15 << 0x10) + uVar26;
          uVar27 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar27;
          uVar13 = (puVar17[4] & 0xff00ff00) >> 8 | (puVar17[4] & 0xff00ff) << 8;
          uVar14 = (puVar17[5] & 0xff00ff00) >> 8 | (puVar17[5] & 0xff00ff) << 8;
          uVar15 = (puVar17[6] & 0xff00ff00) >> 8 | (puVar17[6] & 0xff00ff) << 8;
          uVar24 = ((uVar9 >> 0x10 | uVar9 << 0x10) + uVar24) - uVar18 ^
                   (uVar18 >> 0x1c | uVar18 * 0x10);
          uVar9 = (puVar17[7] & 0xff00ff00) >> 8 | (puVar17[7] & 0xff00ff) << 8;
          uVar29 = ((uVar10 >> 0x10 | uVar10 << 0x10) + uVar29) - uVar19 ^
                   (uVar19 >> 0x1c | uVar19 * 0x10);
          uVar30 = ((uVar11 >> 0x10 | uVar11 << 0x10) + uVar30) - uVar26 ^
                   (uVar26 >> 0x1c | uVar26 * 0x10);
          uVar28 = ((uVar12 >> 0x10 | uVar12 << 0x10) + uVar28) - uVar27 ^
                   (uVar27 >> 0x1c | uVar27 * 0x10);
          iVar25 = (uVar13 >> 0x10 | uVar13 << 0x10) + iVar25;
          iVar23 = (uVar14 >> 0x10 | uVar14 << 0x10) + iVar23;
          iVar21 = (uVar15 >> 0x10 | uVar15 << 0x10) + iVar21;
          iVar22 = (uVar9 >> 0x10 | uVar9 << 0x10) + iVar22;
          iVar1 = uVar18 + iVar25;
          iVar2 = uVar19 + iVar23;
          iVar3 = uVar26 + iVar21;
          iVar4 = uVar27 + iVar22;
          uVar18 = iVar25 - uVar24 ^ (uVar24 >> 0x1a | uVar24 << 6);
          uVar19 = iVar23 - uVar29 ^ (uVar29 >> 0x1a | uVar29 << 6);
          uVar26 = iVar21 - uVar30 ^ (uVar30 >> 0x1a | uVar30 << 6);
          uVar27 = iVar22 - uVar28 ^ (uVar28 >> 0x1a | uVar28 << 6);
          iVar25 = uVar24 + iVar1;
          iVar23 = uVar29 + iVar2;
          iVar21 = uVar30 + iVar3;
          iVar22 = uVar28 + iVar4;
          uVar9 = iVar1 - uVar18 ^ (uVar18 >> 0x18 | uVar18 << 8);
          uVar10 = iVar2 - uVar19 ^ (uVar19 >> 0x18 | uVar19 << 8);
          uVar11 = iVar3 - uVar26 ^ (uVar26 >> 0x18 | uVar26 << 8);
          uVar12 = iVar4 - uVar27 ^ (uVar27 >> 0x18 | uVar27 << 8);
          iVar1 = uVar18 + iVar25;
          iVar2 = uVar19 + iVar23;
          iVar3 = uVar26 + iVar21;
          iVar4 = uVar27 + iVar22;
          uVar24 = iVar25 - uVar9 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
          uVar29 = iVar23 - uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10);
          uVar30 = iVar21 - uVar11 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
          uVar28 = iVar22 - uVar12 ^ (uVar12 >> 0x10 | uVar12 << 0x10);
          iVar25 = uVar9 + iVar1;
          iVar23 = uVar10 + iVar2;
          iVar21 = uVar11 + iVar3;
          iVar22 = uVar12 + iVar4;
          uVar9 = iVar1 - uVar24 ^ (uVar24 >> 0xd | uVar24 << 0x13);
          uVar10 = iVar2 - uVar29 ^ (uVar29 >> 0xd | uVar29 << 0x13);
          uVar11 = iVar3 - uVar30 ^ (uVar30 >> 0xd | uVar30 << 0x13);
          uVar24 = uVar24 + iVar25;
          uVar12 = iVar4 - uVar28 ^ (uVar28 >> 0xd | uVar28 << 0x13);
          uVar29 = uVar29 + iVar23;
          uVar30 = uVar30 + iVar21;
          uVar28 = uVar28 + iVar22;
          uVar18 = iVar25 - uVar9 ^ (uVar9 >> 0x1c | uVar9 << 4);
          uVar19 = iVar23 - uVar10 ^ (uVar10 >> 0x1c | uVar10 << 4);
          uVar26 = iVar21 - uVar11 ^ (uVar11 >> 0x1c | uVar11 << 4);
          uVar27 = iVar22 - uVar12 ^ (uVar12 >> 0x1c | uVar12 << 4);
          iVar25 = uVar9 + uVar24;
          iVar23 = uVar10 + uVar29;
          iVar21 = uVar11 + uVar30;
          iVar22 = uVar12 + uVar28;
        } while ((int)lVar20 != 0x180);
        param_2 = param_2 - 0x180;
        param_1 = param_1 + 0x60;
      } while (0x17f < param_2);
    }
    for (; 0x2f < param_2; param_2 = param_2 - 0x30) {
      uVar9 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
      uVar10 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
      uVar11 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
      uVar12 = (param_1[3] & 0xff00ff00) >> 8 | (param_1[3] & 0xff00ff) << 8;
      uVar13 = (param_1[8] & 0xff00ff00) >> 8 | (param_1[8] & 0xff00ff) << 8;
      uVar14 = (param_1[9] & 0xff00ff00) >> 8 | (param_1[9] & 0xff00ff) << 8;
      uVar15 = (param_1[10] & 0xff00ff00) >> 8 | (param_1[10] & 0xff00ff) << 8;
      uVar16 = (param_1[0xb] & 0xff00ff00) >> 8 | (param_1[0xb] & 0xff00ff) << 8;
      uVar18 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar18;
      uVar19 = (uVar14 >> 0x10 | uVar14 << 0x10) + uVar19;
      uVar26 = (uVar15 >> 0x10 | uVar15 << 0x10) + uVar26;
      uVar27 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar27;
      uVar13 = (param_1[4] & 0xff00ff00) >> 8 | (param_1[4] & 0xff00ff) << 8;
      uVar14 = (param_1[5] & 0xff00ff00) >> 8 | (param_1[5] & 0xff00ff) << 8;
      uVar15 = (param_1[6] & 0xff00ff00) >> 8 | (param_1[6] & 0xff00ff) << 8;
      uVar16 = (param_1[7] & 0xff00ff00) >> 8 | (param_1[7] & 0xff00ff) << 8;
      uVar24 = ((uVar9 >> 0x10 | uVar9 << 0x10) + uVar24) - uVar18 ^
               (uVar18 >> 0x1c | uVar18 * 0x10);
      uVar29 = ((uVar10 >> 0x10 | uVar10 << 0x10) + uVar29) - uVar19 ^
               (uVar19 >> 0x1c | uVar19 * 0x10);
      uVar30 = ((uVar11 >> 0x10 | uVar11 << 0x10) + uVar30) - uVar26 ^
               (uVar26 >> 0x1c | uVar26 * 0x10);
      uVar28 = ((uVar12 >> 0x10 | uVar12 << 0x10) + uVar28) - uVar27 ^
               (uVar27 >> 0x1c | uVar27 * 0x10);
      iVar25 = (uVar13 >> 0x10 | uVar13 << 0x10) + iVar25;
      iVar23 = (uVar14 >> 0x10 | uVar14 << 0x10) + iVar23;
      iVar21 = (uVar15 >> 0x10 | uVar15 << 0x10) + iVar21;
      iVar22 = (uVar16 >> 0x10 | uVar16 << 0x10) + iVar22;
      iVar1 = uVar18 + iVar25;
      iVar2 = uVar19 + iVar23;
      iVar3 = uVar26 + iVar21;
      iVar4 = uVar27 + iVar22;
      uVar18 = iVar25 - uVar24 ^ (uVar24 >> 0x1a | uVar24 << 6);
      uVar19 = iVar23 - uVar29 ^ (uVar29 >> 0x1a | uVar29 << 6);
      uVar26 = iVar21 - uVar30 ^ (uVar30 >> 0x1a | uVar30 << 6);
      uVar27 = iVar22 - uVar28 ^ (uVar28 >> 0x1a | uVar28 << 6);
      iVar25 = uVar24 + iVar1;
      iVar23 = uVar29 + iVar2;
      iVar21 = uVar30 + iVar3;
      iVar22 = uVar28 + iVar4;
      uVar9 = iVar1 - uVar18 ^ (uVar18 >> 0x18 | uVar18 << 8);
      uVar10 = iVar2 - uVar19 ^ (uVar19 >> 0x18 | uVar19 << 8);
      uVar11 = iVar3 - uVar26 ^ (uVar26 >> 0x18 | uVar26 << 8);
      uVar12 = iVar4 - uVar27 ^ (uVar27 >> 0x18 | uVar27 << 8);
      iVar1 = uVar18 + iVar25;
      iVar2 = uVar19 + iVar23;
      iVar3 = uVar26 + iVar21;
      iVar4 = uVar27 + iVar22;
      uVar24 = iVar25 - uVar9 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
      uVar29 = iVar23 - uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10);
      uVar30 = iVar21 - uVar11 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
      uVar28 = iVar22 - uVar12 ^ (uVar12 >> 0x10 | uVar12 << 0x10);
      iVar25 = uVar9 + iVar1;
      iVar5 = uVar10 + iVar2;
      iVar6 = uVar11 + iVar3;
      iVar7 = uVar12 + iVar4;
      uVar19 = iVar1 - uVar24 ^ (uVar24 >> 0xd | uVar24 << 0x13);
      uVar26 = iVar2 - uVar29 ^ (uVar29 >> 0xd | uVar29 << 0x13);
      uVar24 = uVar24 + iVar25;
      uVar27 = iVar3 - uVar30 ^ (uVar30 >> 0xd | uVar30 << 0x13);
      uVar29 = uVar29 + iVar5;
      uVar9 = iVar4 - uVar28 ^ (uVar28 >> 0xd | uVar28 << 0x13);
      uVar30 = uVar30 + iVar6;
      uVar28 = uVar28 + iVar7;
      uVar18 = iVar25 - uVar19 ^ (uVar19 >> 0x1c | uVar19 << 4);
      iVar25 = uVar19 + uVar24;
      param_1 = param_1 + 0xc;
      iVar23 = uVar26 + uVar29;
      iVar21 = uVar27 + uVar30;
      iVar22 = uVar9 + uVar28;
      uVar19 = iVar5 - uVar26 ^ (uVar26 >> 0x1c | uVar26 << 4);
      uVar26 = iVar6 - uVar27 ^ (uVar27 >> 0x1c | uVar27 << 4);
      uVar27 = iVar7 - uVar9 ^ (uVar9 >> 0x1c | uVar9 << 4);
    }
  }
  else {
    if (0x17f < param_2) {
      puVar17 = param_1;
      do {
        lVar20 = 0;
        param_1 = puVar17 + 0x60;
        do {
          puVar8 = (uint *)((long)puVar17 + lVar20);
          lVar20 = lVar20 + 0x30;
          uVar9 = (*puVar8 & 0xff00ff00) >> 8 | (*puVar8 & 0xff00ff) << 8;
          uVar10 = (puVar8[1] & 0xff00ff00) >> 8 | (puVar8[1] & 0xff00ff) << 8;
          uVar11 = (puVar8[2] & 0xff00ff00) >> 8 | (puVar8[2] & 0xff00ff) << 8;
          uVar12 = (puVar8[3] & 0xff00ff00) >> 8 | (puVar8[3] & 0xff00ff) << 8;
          uVar13 = (puVar8[8] & 0xff00ff00) >> 8 | (puVar8[8] & 0xff00ff) << 8;
          uVar14 = (puVar8[9] & 0xff00ff00) >> 8 | (puVar8[9] & 0xff00ff) << 8;
          uVar15 = (puVar8[10] & 0xff00ff00) >> 8 | (puVar8[10] & 0xff00ff) << 8;
          uVar16 = (puVar8[0xb] & 0xff00ff00) >> 8 | (puVar8[0xb] & 0xff00ff) << 8;
          uVar18 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar18;
          uVar19 = (uVar14 >> 0x10 | uVar14 << 0x10) + uVar19;
          uVar26 = (uVar15 >> 0x10 | uVar15 << 0x10) + uVar26;
          uVar27 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar27;
          uVar13 = (puVar8[4] & 0xff00ff00) >> 8 | (puVar8[4] & 0xff00ff) << 8;
          uVar14 = (puVar8[5] & 0xff00ff00) >> 8 | (puVar8[5] & 0xff00ff) << 8;
          uVar15 = (puVar8[6] & 0xff00ff00) >> 8 | (puVar8[6] & 0xff00ff) << 8;
          uVar24 = ((uVar9 >> 0x10 | uVar9 << 0x10) + uVar24) - uVar18 ^
                   (uVar18 >> 0x1c | uVar18 * 0x10);
          uVar9 = (puVar8[7] & 0xff00ff00) >> 8 | (puVar8[7] & 0xff00ff) << 8;
          uVar29 = ((uVar10 >> 0x10 | uVar10 << 0x10) + uVar29) - uVar19 ^
                   (uVar19 >> 0x1c | uVar19 * 0x10);
          uVar30 = ((uVar11 >> 0x10 | uVar11 << 0x10) + uVar30) - uVar26 ^
                   (uVar26 >> 0x1c | uVar26 * 0x10);
          uVar28 = ((uVar12 >> 0x10 | uVar12 << 0x10) + uVar28) - uVar27 ^
                   (uVar27 >> 0x1c | uVar27 * 0x10);
          iVar25 = (uVar13 >> 0x10 | uVar13 << 0x10) + iVar25;
          iVar23 = (uVar14 >> 0x10 | uVar14 << 0x10) + iVar23;
          iVar21 = (uVar15 >> 0x10 | uVar15 << 0x10) + iVar21;
          iVar22 = (uVar9 >> 0x10 | uVar9 << 0x10) + iVar22;
          iVar1 = uVar18 + iVar25;
          iVar2 = uVar19 + iVar23;
          iVar3 = uVar26 + iVar21;
          iVar4 = uVar27 + iVar22;
          uVar18 = iVar25 - uVar24 ^ (uVar24 >> 0x1a | uVar24 << 6);
          uVar19 = iVar23 - uVar29 ^ (uVar29 >> 0x1a | uVar29 << 6);
          uVar26 = iVar21 - uVar30 ^ (uVar30 >> 0x1a | uVar30 << 6);
          uVar27 = iVar22 - uVar28 ^ (uVar28 >> 0x1a | uVar28 << 6);
          iVar25 = uVar24 + iVar1;
          iVar23 = uVar29 + iVar2;
          iVar21 = uVar30 + iVar3;
          iVar22 = uVar28 + iVar4;
          uVar9 = iVar1 - uVar18 ^ (uVar18 >> 0x18 | uVar18 << 8);
          uVar10 = iVar2 - uVar19 ^ (uVar19 >> 0x18 | uVar19 << 8);
          uVar11 = iVar3 - uVar26 ^ (uVar26 >> 0x18 | uVar26 << 8);
          uVar12 = iVar4 - uVar27 ^ (uVar27 >> 0x18 | uVar27 << 8);
          iVar1 = uVar18 + iVar25;
          iVar2 = uVar19 + iVar23;
          iVar3 = uVar26 + iVar21;
          iVar4 = uVar27 + iVar22;
          uVar24 = iVar25 - uVar9 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
          uVar29 = iVar23 - uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10);
          uVar30 = iVar21 - uVar11 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
          uVar28 = iVar22 - uVar12 ^ (uVar12 >> 0x10 | uVar12 << 0x10);
          iVar25 = uVar9 + iVar1;
          iVar23 = uVar10 + iVar2;
          iVar21 = uVar11 + iVar3;
          iVar22 = uVar12 + iVar4;
          uVar9 = iVar1 - uVar24 ^ (uVar24 >> 0xd | uVar24 << 0x13);
          uVar10 = iVar2 - uVar29 ^ (uVar29 >> 0xd | uVar29 << 0x13);
          uVar11 = iVar3 - uVar30 ^ (uVar30 >> 0xd | uVar30 << 0x13);
          uVar24 = uVar24 + iVar25;
          uVar12 = iVar4 - uVar28 ^ (uVar28 >> 0xd | uVar28 << 0x13);
          uVar29 = uVar29 + iVar23;
          uVar30 = uVar30 + iVar21;
          uVar28 = uVar28 + iVar22;
          uVar18 = iVar25 - uVar9 ^ (uVar9 >> 0x1c | uVar9 << 4);
          uVar19 = iVar23 - uVar10 ^ (uVar10 >> 0x1c | uVar10 << 4);
          uVar26 = iVar21 - uVar11 ^ (uVar11 >> 0x1c | uVar11 << 4);
          uVar27 = iVar22 - uVar12 ^ (uVar12 >> 0x1c | uVar12 << 4);
          iVar25 = uVar9 + uVar24;
          iVar23 = uVar10 + uVar29;
          iVar21 = uVar11 + uVar30;
          iVar22 = uVar12 + uVar28;
        } while ((int)lVar20 != 0x180);
        param_2 = param_2 - 0x180;
        puVar17 = param_1;
      } while (0x17f < param_2);
    }
    for (; 0x2f < param_2; param_2 = param_2 - 0x30) {
      uVar9 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
      uVar10 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
      uVar11 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
      uVar12 = (param_1[3] & 0xff00ff00) >> 8 | (param_1[3] & 0xff00ff) << 8;
      uVar13 = (param_1[8] & 0xff00ff00) >> 8 | (param_1[8] & 0xff00ff) << 8;
      uVar14 = (param_1[9] & 0xff00ff00) >> 8 | (param_1[9] & 0xff00ff) << 8;
      uVar15 = (param_1[10] & 0xff00ff00) >> 8 | (param_1[10] & 0xff00ff) << 8;
      uVar16 = (param_1[0xb] & 0xff00ff00) >> 8 | (param_1[0xb] & 0xff00ff) << 8;
      uVar18 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar18;
      uVar19 = (uVar14 >> 0x10 | uVar14 << 0x10) + uVar19;
      uVar26 = (uVar15 >> 0x10 | uVar15 << 0x10) + uVar26;
      uVar27 = (uVar16 >> 0x10 | uVar16 << 0x10) + uVar27;
      uVar13 = (param_1[4] & 0xff00ff00) >> 8 | (param_1[4] & 0xff00ff) << 8;
      uVar14 = (param_1[5] & 0xff00ff00) >> 8 | (param_1[5] & 0xff00ff) << 8;
      uVar15 = (param_1[6] & 0xff00ff00) >> 8 | (param_1[6] & 0xff00ff) << 8;
      uVar16 = (param_1[7] & 0xff00ff00) >> 8 | (param_1[7] & 0xff00ff) << 8;
      uVar24 = ((uVar9 >> 0x10 | uVar9 << 0x10) + uVar24) - uVar18 ^
               (uVar18 >> 0x1c | uVar18 * 0x10);
      uVar29 = ((uVar10 >> 0x10 | uVar10 << 0x10) + uVar29) - uVar19 ^
               (uVar19 >> 0x1c | uVar19 * 0x10);
      uVar30 = ((uVar11 >> 0x10 | uVar11 << 0x10) + uVar30) - uVar26 ^
               (uVar26 >> 0x1c | uVar26 * 0x10);
      uVar28 = ((uVar12 >> 0x10 | uVar12 << 0x10) + uVar28) - uVar27 ^
               (uVar27 >> 0x1c | uVar27 * 0x10);
      iVar25 = (uVar13 >> 0x10 | uVar13 << 0x10) + iVar25;
      iVar23 = (uVar14 >> 0x10 | uVar14 << 0x10) + iVar23;
      iVar21 = (uVar15 >> 0x10 | uVar15 << 0x10) + iVar21;
      iVar22 = (uVar16 >> 0x10 | uVar16 << 0x10) + iVar22;
      iVar1 = uVar18 + iVar25;
      iVar2 = uVar19 + iVar23;
      iVar3 = uVar26 + iVar21;
      iVar4 = uVar27 + iVar22;
      uVar18 = iVar25 - uVar24 ^ (uVar24 >> 0x1a | uVar24 << 6);
      uVar19 = iVar23 - uVar29 ^ (uVar29 >> 0x1a | uVar29 << 6);
      uVar26 = iVar21 - uVar30 ^ (uVar30 >> 0x1a | uVar30 << 6);
      uVar27 = iVar22 - uVar28 ^ (uVar28 >> 0x1a | uVar28 << 6);
      iVar25 = uVar24 + iVar1;
      iVar23 = uVar29 + iVar2;
      iVar21 = uVar30 + iVar3;
      iVar22 = uVar28 + iVar4;
      uVar9 = iVar1 - uVar18 ^ (uVar18 >> 0x18 | uVar18 << 8);
      uVar10 = iVar2 - uVar19 ^ (uVar19 >> 0x18 | uVar19 << 8);
      uVar11 = iVar3 - uVar26 ^ (uVar26 >> 0x18 | uVar26 << 8);
      uVar12 = iVar4 - uVar27 ^ (uVar27 >> 0x18 | uVar27 << 8);
      iVar1 = uVar18 + iVar25;
      iVar2 = uVar19 + iVar23;
      iVar3 = uVar26 + iVar21;
      iVar4 = uVar27 + iVar22;
      uVar24 = iVar25 - uVar9 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
      uVar29 = iVar23 - uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10);
      uVar30 = iVar21 - uVar11 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
      uVar28 = iVar22 - uVar12 ^ (uVar12 >> 0x10 | uVar12 << 0x10);
      iVar25 = uVar9 + iVar1;
      iVar5 = uVar10 + iVar2;
      iVar6 = uVar11 + iVar3;
      iVar7 = uVar12 + iVar4;
      uVar19 = iVar1 - uVar24 ^ (uVar24 >> 0xd | uVar24 << 0x13);
      uVar26 = iVar2 - uVar29 ^ (uVar29 >> 0xd | uVar29 << 0x13);
      uVar24 = uVar24 + iVar25;
      uVar27 = iVar3 - uVar30 ^ (uVar30 >> 0xd | uVar30 << 0x13);
      uVar29 = uVar29 + iVar5;
      uVar9 = iVar4 - uVar28 ^ (uVar28 >> 0xd | uVar28 << 0x13);
      uVar30 = uVar30 + iVar6;
      uVar28 = uVar28 + iVar7;
      uVar18 = iVar25 - uVar19 ^ (uVar19 >> 0x1c | uVar19 << 4);
      iVar25 = uVar19 + uVar24;
      param_1 = param_1 + 0xc;
      iVar23 = uVar26 + uVar29;
      iVar21 = uVar27 + uVar30;
      iVar22 = uVar9 + uVar28;
      uVar19 = iVar5 - uVar26 ^ (uVar26 >> 0x1c | uVar26 << 4);
      uVar26 = iVar6 - uVar27 ^ (uVar27 >> 0x1c | uVar27 << 4);
      uVar27 = iVar7 - uVar9 ^ (uVar9 >> 0x1c | uVar9 << 4);
    }
  }
  if (param_2 != 0) {
    FUN_0015cf00(&local_90,0x30);
    memcpy(&local_90,param_1,param_2);
    uVar9 = (local_70 & 0xff00ff00) >> 8 | (local_70 & 0xff00ff) << 8;
    uVar10 = (local_90 & 0xff00ff00) >> 8 | (local_90 & 0xff00ff) << 8;
    uVar11 = (local_88 & 0xff00ff00) >> 8 | (local_88 & 0xff00ff) << 8;
    uVar12 = (uStack_84 & 0xff00ff00) >> 8 | (uStack_84 & 0xff00ff) << 8;
    uVar13 = (local_68 & 0xff00ff00) >> 8 | (local_68 & 0xff00ff) << 8;
    uVar14 = (uStack_64 & 0xff00ff00) >> 8 | (uStack_64 & 0xff00ff) << 8;
    uVar18 = (uVar9 >> 0x10 | uVar9 << 0x10) + uVar18;
    uVar9 = (uStack_8c & 0xff00ff00) >> 8 | (uStack_8c & 0xff00ff) << 8;
    uVar15 = (uStack_6c & 0xff00ff00) >> 8 | (uStack_6c & 0xff00ff) << 8;
    uVar19 = (uVar15 >> 0x10 | uVar15 << 0x10) + uVar19;
    uVar26 = (uVar13 >> 0x10 | uVar13 << 0x10) + uVar26;
    uVar27 = (uVar14 >> 0x10 | uVar14 << 0x10) + uVar27;
    uVar13 = (local_80 & 0xff00ff00) >> 8 | (local_80 & 0xff00ff) << 8;
    uVar24 = ((uVar10 >> 0x10 | uVar10 << 0x10) + uVar24) - uVar18 ^
             (uVar18 >> 0x1c | uVar18 * 0x10);
    uVar10 = (uStack_7c & 0xff00ff00) >> 8 | (uStack_7c & 0xff00ff) << 8;
    uVar14 = (local_78 & 0xff00ff00) >> 8 | (local_78 & 0xff00ff) << 8;
    uVar15 = (uStack_74 & 0xff00ff00) >> 8 | (uStack_74 & 0xff00ff) << 8;
    iVar25 = (uVar13 >> 0x10 | uVar13 << 0x10) + iVar25;
    uVar29 = ((uVar9 >> 0x10 | uVar9 << 0x10) + uVar29) - uVar19 ^ (uVar19 >> 0x1c | uVar19 * 0x10);
    uVar30 = ((uVar11 >> 0x10 | uVar11 << 0x10) + uVar30) - uVar26 ^
             (uVar26 >> 0x1c | uVar26 * 0x10);
    uVar28 = ((uVar12 >> 0x10 | uVar12 << 0x10) + uVar28) - uVar27 ^
             (uVar27 >> 0x1c | uVar27 * 0x10);
    iVar23 = (uVar10 >> 0x10 | uVar10 << 0x10) + iVar23;
    iVar21 = (uVar14 >> 0x10 | uVar14 << 0x10) + iVar21;
    iVar22 = (uVar15 >> 0x10 | uVar15 << 0x10) + iVar22;
    iVar1 = uVar18 + iVar25;
    iVar2 = uVar19 + iVar23;
    iVar3 = uVar26 + iVar21;
    iVar4 = uVar27 + iVar22;
    uVar18 = iVar25 - uVar24 ^ (uVar24 >> 0x1a | uVar24 << 6);
    uVar19 = iVar23 - uVar29 ^ (uVar29 >> 0x1a | uVar29 << 6);
    uVar26 = iVar21 - uVar30 ^ (uVar30 >> 0x1a | uVar30 << 6);
    uVar27 = iVar22 - uVar28 ^ (uVar28 >> 0x1a | uVar28 << 6);
    iVar25 = uVar24 + iVar1;
    iVar23 = uVar29 + iVar2;
    iVar21 = uVar30 + iVar3;
    iVar22 = uVar28 + iVar4;
    uVar9 = iVar1 - uVar18 ^ (uVar18 >> 0x18 | uVar18 << 8);
    uVar10 = iVar2 - uVar19 ^ (uVar19 >> 0x18 | uVar19 << 8);
    uVar11 = iVar3 - uVar26 ^ (uVar26 >> 0x18 | uVar26 << 8);
    uVar12 = iVar4 - uVar27 ^ (uVar27 >> 0x18 | uVar27 << 8);
    iVar1 = uVar18 + iVar25;
    iVar2 = uVar19 + iVar23;
    iVar3 = uVar26 + iVar21;
    iVar4 = uVar27 + iVar22;
    uVar24 = iVar25 - uVar9 ^ (uVar9 >> 0x10 | uVar9 << 0x10);
    uVar29 = iVar23 - uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10);
    uVar30 = iVar21 - uVar11 ^ (uVar11 >> 0x10 | uVar11 << 0x10);
    uVar28 = iVar22 - uVar12 ^ (uVar12 >> 0x10 | uVar12 << 0x10);
    iVar25 = uVar9 + iVar1;
    iVar23 = uVar10 + iVar2;
    iVar21 = uVar11 + iVar3;
    iVar22 = uVar12 + iVar4;
    uVar9 = iVar1 - uVar24 ^ (uVar24 >> 0xd | uVar24 << 0x13);
    uVar10 = iVar2 - uVar29 ^ (uVar29 >> 0xd | uVar29 << 0x13);
    uVar11 = iVar3 - uVar30 ^ (uVar30 >> 0xd | uVar30 << 0x13);
    uVar29 = uVar29 + iVar23;
    uVar12 = iVar4 - uVar28 ^ (uVar28 >> 0xd | uVar28 << 0x13);
    uVar24 = uVar24 + iVar25;
    uVar30 = uVar30 + iVar21;
    uVar28 = uVar28 + iVar22;
    uVar18 = iVar25 - uVar9 ^ (uVar9 >> 0x1c | uVar9 << 4);
    uVar19 = iVar23 - uVar10 ^ (uVar10 >> 0x1c | uVar10 << 4);
    uVar26 = iVar21 - uVar11 ^ (uVar11 >> 0x1c | uVar11 << 4);
    uVar27 = iVar22 - uVar12 ^ (uVar12 >> 0x1c | uVar12 << 4);
    iVar25 = uVar9 + uVar24;
    iVar23 = uVar10 + uVar29;
    iVar21 = uVar11 + uVar30;
    iVar22 = uVar12 + uVar28;
  }
  uVar24 = uVar24 - uVar30 ^ (uVar30 >> 0x1c | uVar30 << 4);
  uVar9 = uVar29 - uVar24 ^ (uVar24 >> 0x1a | uVar24 << 6);
  iVar1 = uVar24 + uVar29 + uVar30;
  uVar29 = (uVar29 + uVar30) - uVar9 ^ (uVar9 >> 0x18 | uVar9 << 8);
  iVar2 = uVar9 + iVar1;
  uVar24 = iVar1 - uVar29 ^ (uVar29 >> 0x10 | uVar29 << 0x10);
  iVar1 = uVar29 + iVar2;
  uVar30 = iVar2 - uVar24 ^ (uVar24 >> 0xd | uVar24 << 0x13);
  iVar2 = uVar24 + iVar1;
  uVar29 = (iVar1 - uVar30 ^ (uVar30 >> 0x1c | uVar30 << 4)) + iVar23;
  iVar25 = iVar2 + iVar25 + uVar30;
  uVar24 = (iVar2 + uVar28) - uVar29 ^ (uVar29 >> 0x1c | uVar29 * 0x10);
  iVar23 = uVar29 + iVar25;
  uVar29 = iVar25 - uVar24 ^ (uVar24 >> 0x1a | uVar24 << 6);
  iVar25 = uVar24 + iVar23;
  uVar24 = iVar23 - uVar29 ^ (uVar29 >> 0x18 | uVar29 << 8);
  iVar23 = uVar29 + iVar25;
  uVar29 = iVar25 - uVar24 ^ (uVar24 >> 0x10 | uVar24 << 0x10);
  iVar25 = uVar24 + iVar23;
  uVar24 = iVar23 - uVar29 ^ (uVar29 >> 0xd | uVar29 << 0x13);
  iVar23 = uVar29 + iVar25;
  iVar22 = iVar23 + iVar22 + uVar24;
  uVar18 = (iVar25 - uVar24 ^ (uVar24 >> 0x1c | uVar24 << 4)) + uVar18;
  uVar29 = (iVar23 + iVar21) - uVar18 ^ (uVar18 >> 0x1c | uVar18 * 0x10);
  iVar25 = uVar18 + iVar22;
  uVar18 = iVar22 - uVar29 ^ (uVar29 >> 0x1a | uVar29 << 6);
  iVar23 = uVar29 + iVar25;
  uVar29 = iVar25 - uVar18 ^ (uVar18 >> 0x18 | uVar18 << 8);
  iVar25 = uVar18 + iVar23;
  uVar18 = iVar23 - uVar29 ^ (uVar29 >> 0x10 | uVar29 << 0x10);
  iVar23 = uVar29 + iVar25;
  uVar29 = iVar25 - uVar18 ^ (uVar18 >> 0xd | uVar18 << 0x13);
  iVar25 = uVar18 + iVar23;
  uVar18 = iVar25 + uVar26 + uVar29;
  uVar26 = ((iVar23 - uVar29 ^ (uVar29 >> 0x1c | uVar29 << 4)) + uVar27 ^ uVar18) -
           (uVar18 >> 0x12 | uVar18 * 0x4000);
  uVar19 = (uVar26 ^ iVar25 + uVar19) - (uVar26 >> 0x15 | uVar26 * 0x800);
  uVar18 = (uVar19 ^ uVar18) - (uVar19 >> 7 | uVar19 * 0x2000000);
  uVar26 = (uVar18 ^ uVar26) - (uVar18 >> 0x10 | uVar18 * 0x10000);
  uVar19 = (uVar26 ^ uVar19) - (uVar26 >> 0x1c | uVar26 * 0x10);
  uVar18 = (uVar19 ^ uVar18) - (uVar19 >> 0x12 | uVar19 * 0x4000);
  return CONCAT44(uVar18,(uVar18 ^ uVar26) - (uVar18 >> 8 | uVar18 * 0x1000000));
}


