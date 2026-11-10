/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00473050; name: FUN_00473050
 */


void FUN_00473050(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  long local_68;
  
  uVar21 = *param_1;
  uVar23 = param_1[1];
  uVar20 = param_1[2];
  uVar22 = param_1[3];
  uVar24 = param_1[4];
  local_68 = param_3;
  do {
    uVar5 = uVar23 >> 2 | uVar23 << 0x1e;
    uVar1 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar2 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar23 = uVar24 + 0x5a827999 + (uVar20 & uVar23 | uVar22 & (uVar23 ^ 0xffffffff)) +
             (uVar21 >> 0x1b | uVar21 << 5) + uVar1;
    uVar6 = uVar21 >> 2 | uVar21 << 0x1e;
    uVar24 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
    uVar24 = uVar24 >> 0x10 | uVar24 << 0x10;
    uVar22 = uVar22 + 0x5a827999 + (uVar5 & uVar21 | uVar20 & (uVar21 ^ 0xffffffff)) + uVar2 +
             (uVar23 >> 0x1b | uVar23 * 0x20);
    uVar21 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
    uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
    uVar7 = uVar23 >> 2 | uVar23 * 0x40000000;
    uVar20 = uVar20 + 0x5a827999 + (uVar6 & uVar23 | uVar5 & (uVar23 ^ 0xffffffff)) + uVar24 +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar23 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
    uVar3 = uVar23 >> 0x10 | uVar23 << 0x10;
    uVar8 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar22 = uVar5 + 0x5a827999 + (uVar7 & uVar22 | uVar6 & (uVar22 ^ 0xffffffff)) + uVar21 +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar9 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar23 = (param_2[6] & 0xff00ff00) >> 8 | (param_2[6] & 0xff00ff) << 8;
    uVar5 = uVar23 >> 0x10 | uVar23 << 0x10;
    uVar23 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
    uVar4 = uVar23 >> 0x10 | uVar23 << 0x10;
    uVar20 = uVar6 + 0x5a827999 + (uVar8 & uVar20 | uVar7 & (uVar20 ^ 0xffffffff)) + uVar3 +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar10 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = (param_2[7] & 0xff00ff00) >> 8 | (param_2[7] & 0xff00ff) << 8;
    uVar6 = uVar23 >> 0x10 | uVar23 << 0x10;
    uVar22 = uVar7 + 0x5a827999 + (uVar9 & uVar22 | uVar8 & (uVar22 ^ 0xffffffff)) + uVar4 +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar11 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar20 = uVar8 + 0x5a827999 + (uVar10 & uVar20 | uVar9 & (uVar20 ^ 0xffffffff)) + uVar5 +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar12 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = (param_2[9] & 0xff00ff00) >> 8 | (param_2[9] & 0xff00ff) << 8;
    uVar7 = uVar23 >> 0x10 | uVar23 << 0x10;
    uVar22 = uVar9 + 0x5a827999 + (uVar11 & uVar22 | uVar10 & (uVar22 ^ 0xffffffff)) + uVar6 +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar13 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar23 = (param_2[8] & 0xff00ff00) >> 8 | (param_2[8] & 0xff00ff) << 8;
    uVar8 = uVar23 >> 0x10 | uVar23 << 0x10;
    uVar20 = uVar10 + 0x5a827999 + (uVar12 & uVar20 | uVar11 & (uVar20 ^ 0xffffffff)) + uVar8 +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar23 = (param_2[10] & 0xff00ff00) >> 8 | (param_2[10] & 0xff00ff) << 8;
    uVar9 = uVar23 >> 0x10 | uVar23 << 0x10;
    uVar14 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = (param_2[0xb] & 0xff00ff00) >> 8 | (param_2[0xb] & 0xff00ff) << 8;
    uVar10 = uVar23 >> 0x10 | uVar23 << 0x10;
    uVar22 = uVar11 + 0x5a827999 + (uVar13 & uVar22 | uVar12 & (uVar22 ^ 0xffffffff)) + uVar7 +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar15 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar23 = (param_2[0xc] & 0xff00ff00) >> 8 | (param_2[0xc] & 0xff00ff) << 8;
    uVar11 = uVar23 >> 0x10 | uVar23 << 0x10;
    uVar20 = uVar12 + 0x5a827999 + (uVar14 & uVar20 | uVar13 & (uVar20 ^ 0xffffffff)) + uVar9 +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar16 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = (param_2[0xd] & 0xff00ff00) >> 8 | (param_2[0xd] & 0xff00ff) << 8;
    uVar12 = uVar23 >> 0x10 | uVar23 << 0x10;
    uVar22 = uVar13 + 0x5a827999 + (uVar15 & uVar22 | uVar14 & (uVar22 ^ 0xffffffff)) + uVar10 +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar17 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar20 = uVar14 + 0x5a827999 + (uVar16 & uVar20 | uVar15 & (uVar20 ^ 0xffffffff)) + uVar11 +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar18 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = (param_2[0xf] & 0xff00ff00) >> 8 | (param_2[0xf] & 0xff00ff) << 8;
    uVar13 = uVar23 >> 0x10 | uVar23 << 0x10;
    uVar22 = uVar15 + 0x5a827999 + (uVar17 & uVar22 | uVar16 & (uVar22 ^ 0xffffffff)) + uVar12 +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar15 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar23 = (param_2[0xe] & 0xff00ff00) >> 8 | (param_2[0xe] & 0xff00ff) << 8;
    uVar14 = uVar23 >> 0x10 | uVar23 << 0x10;
    uVar20 = uVar16 + 0x5a827999 + (uVar18 & uVar20 | uVar17 & (uVar20 ^ 0xffffffff)) + uVar14 +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar16 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = uVar24 ^ uVar1 ^ uVar8 ^ uVar12;
    uVar1 = uVar23 >> 0x1f | uVar23 << 1;
    uVar22 = uVar17 + 0x5a827999 + (uVar15 & uVar22 | uVar18 & (uVar22 ^ 0xffffffff)) + uVar13 +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar17 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar23 = uVar21 ^ uVar2 ^ uVar7 ^ uVar14;
    uVar2 = uVar23 >> 0x1f | uVar23 << 1;
    uVar20 = uVar18 + 0x5a827999 + uVar1 + (uVar16 & uVar20 | uVar15 & (uVar20 ^ 0xffffffff)) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar18 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = uVar3 ^ uVar24 ^ uVar9 ^ uVar13;
    uVar24 = uVar23 >> 0x1f | uVar23 << 1;
    uVar22 = uVar15 + 0x5a827999 + uVar2 + (uVar17 & uVar22 | uVar16 & (uVar22 ^ 0xffffffff)) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar23 = uVar4 ^ uVar21 ^ uVar10 ^ uVar1;
    uVar21 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar15 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar5 ^ uVar3 ^ uVar11 ^ uVar2;
    uVar20 = uVar16 + 0x5a827999 + uVar24 + (uVar18 & uVar20 | uVar17 & (uVar20 ^ 0xffffffff)) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar3 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar16 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar6 ^ uVar4 ^ uVar12 ^ uVar24;
    uVar4 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar19 = uVar23 >> 0x1f | uVar23 << 1;
    uVar22 = uVar15 + 0x5a827999 + uVar17 + (uVar21 & uVar22 | uVar18 & (uVar22 ^ 0xffffffff)) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar23 = uVar8 ^ uVar5 ^ uVar14 ^ uVar15;
    uVar5 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar20 = uVar16 + 0x6ed9eba1 + uVar18 + (uVar3 ^ uVar21 ^ uVar20) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar17 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar7 ^ uVar6 ^ uVar13 ^ uVar16;
    uVar6 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar22 = uVar19 + 0x6ed9eba1 + uVar21 + (uVar4 ^ uVar3 ^ uVar22) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar18 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar9 ^ uVar8 ^ uVar1 ^ uVar19;
    uVar8 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar20 = uVar17 + 0x6ed9eba1 + uVar3 + (uVar5 ^ uVar4 ^ uVar20) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar3 = uVar23 >> 0x1f | uVar23 << 1;
    uVar22 = uVar18 + 0x6ed9eba1 + uVar4 + (uVar6 ^ uVar5 ^ uVar22) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar23 = uVar10 ^ uVar7 ^ uVar2 ^ uVar17;
    uVar4 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar3 + 0x6ed9eba1 + uVar5 + (uVar8 ^ uVar6 ^ uVar20) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar5 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar20 = uVar11 ^ uVar9 ^ uVar24 ^ uVar18;
    uVar7 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar9 = uVar20 >> 0x1f | uVar20 << 1;
    uVar21 = uVar12 ^ uVar10 ^ uVar15 ^ uVar3;
    uVar10 = uVar23 >> 2 | uVar23 * 0x40000000;
    uVar20 = uVar4 + 0x6ed9eba1 + uVar6 + (uVar5 ^ uVar8 ^ uVar22) +
             (uVar23 >> 0x1b | uVar23 * 0x20);
    uVar21 = uVar21 >> 0x1f | uVar21 << 1;
    uVar22 = uVar9 + 0x6ed9eba1 + uVar8 + (uVar7 ^ uVar5 ^ uVar23) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar23 = uVar14 ^ uVar11 ^ uVar16 ^ uVar4;
    uVar6 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar8 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar13 ^ uVar12 ^ uVar19 ^ uVar9;
    uVar11 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar20 = uVar21 + 0x6ed9eba1 + uVar5 + (uVar10 ^ uVar7 ^ uVar20) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar5 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar14 ^ uVar1 ^ uVar17 ^ uVar21;
    uVar12 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar14 = uVar23 >> 0x1f | uVar23 << 1;
    uVar22 = uVar8 + 0x6ed9eba1 + uVar7 + (uVar6 ^ uVar10 ^ uVar22) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar23 = uVar13 ^ uVar2 ^ uVar18 ^ uVar8;
    uVar7 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar20 = uVar5 + 0x6ed9eba1 + uVar10 + (uVar11 ^ uVar6 ^ uVar20) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar10 = uVar23 >> 0x1f | uVar23 << 1;
    uVar22 = uVar14 + 0x6ed9eba1 + uVar6 + (uVar12 ^ uVar11 ^ uVar22) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar23 = uVar24 ^ uVar1 ^ uVar3 ^ uVar5;
    uVar1 = uVar23 >> 0x1f | uVar23 << 1;
    uVar6 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar20 = uVar10 + 0x6ed9eba1 + uVar11 + (uVar7 ^ uVar12 ^ uVar20) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar23 = uVar2 ^ uVar15 ^ uVar4 ^ uVar14;
    uVar2 = uVar23 >> 0x1f | uVar23 << 1;
    uVar11 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar22 = uVar1 + 0x6ed9eba1 + uVar12 + (uVar6 ^ uVar7 ^ uVar22) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar23 = uVar24 ^ uVar16 ^ uVar9 ^ uVar10;
    uVar24 = uVar23 >> 0x1f | uVar23 << 1;
    uVar12 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar20 = uVar2 + 0x6ed9eba1 + uVar7 + (uVar11 ^ uVar6 ^ uVar20) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar23 = uVar19 ^ uVar15 ^ uVar21 ^ uVar1;
    uVar7 = uVar23 >> 0x1f | uVar23 << 1;
    uVar13 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar22 = uVar24 + 0x6ed9eba1 + uVar6 + (uVar12 ^ uVar11 ^ uVar22) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar23 = uVar16 ^ uVar17 ^ uVar8 ^ uVar2;
    uVar6 = uVar23 >> 0x1f | uVar23 << 1;
    uVar15 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar20 = uVar7 + 0x6ed9eba1 + uVar11 + (uVar13 ^ uVar12 ^ uVar20) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar23 = uVar19 ^ uVar18 ^ uVar5 ^ uVar24;
    uVar11 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar16 = uVar23 >> 0x1f | uVar23 << 1;
    uVar19 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar22 = uVar6 + 0x6ed9eba1 + uVar12 + (uVar15 ^ uVar13 ^ uVar22) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar23 = uVar3 ^ uVar17 ^ uVar14 ^ uVar7;
    uVar12 = uVar23 >> 0x1f | uVar23 << 1;
    uVar17 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar20 = uVar16 + 0x6ed9eba1 + uVar13 + (uVar11 ^ uVar15 ^ uVar20) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar23 = uVar18 ^ uVar4 ^ uVar10 ^ uVar6;
    uVar13 = uVar23 >> 0x1f | uVar23 << 1;
    uVar18 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar22 = uVar12 + 0x6ed9eba1 + uVar15 + (uVar19 ^ uVar11 ^ uVar22) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar23 = uVar3 ^ uVar9 ^ uVar1 ^ uVar16;
    uVar3 = uVar23 >> 0x1f | uVar23 << 1;
    uVar20 = uVar13 + 0x6ed9eba1 + uVar11 + (uVar17 ^ uVar19 ^ uVar20) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar11 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = uVar21 ^ uVar4 ^ uVar2 ^ uVar12;
    uVar4 = uVar23 >> 0x1f | uVar23 << 1;
    uVar22 = uVar3 + 0x8f1bbcdc + uVar19 + ((uVar22 | uVar18) & uVar17 | uVar22 & uVar18) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar15 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar23 = uVar9 ^ uVar8 ^ uVar24 ^ uVar13;
    uVar9 = uVar23 >> 0x1f | uVar23 << 1;
    uVar20 = uVar4 + 0x8f1bbcdc + uVar17 + ((uVar20 | uVar11) & uVar18 | uVar20 & uVar11) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar17 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = uVar21 ^ uVar5 ^ uVar7 ^ uVar3;
    uVar21 = uVar23 >> 0x1f | uVar23 << 1;
    uVar22 = uVar9 + 0x8f1bbcdc + uVar18 + ((uVar22 | uVar15) & uVar11 | uVar22 & uVar15) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar18 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar23 = uVar14 ^ uVar8 ^ uVar6 ^ uVar4;
    uVar8 = uVar23 >> 0x1f | uVar23 << 1;
    uVar20 = uVar21 + 0x8f1bbcdc + uVar11 + ((uVar20 | uVar17) & uVar15 | uVar20 & uVar17) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar11 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = uVar5 ^ uVar10 ^ uVar16 ^ uVar9;
    uVar5 = uVar23 >> 0x1f | uVar23 << 1;
    uVar22 = uVar8 + 0x8f1bbcdc + uVar15 + ((uVar22 | uVar18) & uVar17 | uVar22 & uVar18) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar23 = uVar14 ^ uVar1 ^ uVar12 ^ uVar21;
    uVar14 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar15 = uVar23 >> 0x1f | uVar23 << 1;
    uVar20 = uVar5 + 0x8f1bbcdc + uVar17 + ((uVar20 | uVar11) & uVar18 | uVar20 & uVar11) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar17 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = uVar2 ^ uVar10 ^ uVar13 ^ uVar8;
    uVar10 = uVar23 >> 0x1f | uVar23 << 1;
    uVar22 = uVar15 + 0x8f1bbcdc + uVar18 + ((uVar22 | uVar14) & uVar11 | uVar22 & uVar14) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar18 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar23 = uVar1 ^ uVar24 ^ uVar3 ^ uVar5;
    uVar1 = uVar23 >> 0x1f | uVar23 << 1;
    uVar20 = uVar10 + 0x8f1bbcdc + uVar11 + ((uVar20 | uVar17) & uVar14 | uVar20 & uVar17) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar11 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = uVar2 ^ uVar7 ^ uVar4 ^ uVar15;
    uVar2 = uVar23 >> 0x1f | uVar23 << 1;
    uVar22 = uVar1 + 0x8f1bbcdc + uVar14 + ((uVar22 | uVar18) & uVar17 | uVar22 & uVar18) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar14 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar23 = uVar6 ^ uVar24 ^ uVar9 ^ uVar10;
    uVar24 = uVar23 >> 0x1f | uVar23 << 1;
    uVar20 = uVar2 + 0x8f1bbcdc + uVar17 + ((uVar20 | uVar11) & uVar18 | uVar20 & uVar11) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar17 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = uVar7 ^ uVar16 ^ uVar21 ^ uVar1;
    uVar7 = uVar23 >> 0x1f | uVar23 << 1;
    uVar22 = uVar24 + 0x8f1bbcdc + uVar18 + ((uVar22 | uVar14) & uVar11 | uVar22 & uVar14) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar23 = uVar6 ^ uVar12 ^ uVar8 ^ uVar2;
    uVar6 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar18 = uVar23 >> 0x1f | uVar23 << 1;
    uVar20 = uVar7 + 0x8f1bbcdc + uVar11 + ((uVar20 | uVar17) & uVar14 | uVar20 & uVar17) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar11 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = uVar13 ^ uVar16 ^ uVar5 ^ uVar24;
    uVar16 = uVar23 >> 0x1f | uVar23 << 1;
    uVar22 = uVar18 + 0x8f1bbcdc + uVar14 + ((uVar22 | uVar6) & uVar17 | uVar22 & uVar6) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar14 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar23 = uVar12 ^ uVar3 ^ uVar15 ^ uVar7;
    uVar12 = uVar23 >> 0x1f | uVar23 << 1;
    uVar20 = uVar16 + 0x8f1bbcdc + uVar17 + ((uVar20 | uVar11) & uVar6 | uVar20 & uVar11) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar17 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = uVar13 ^ uVar4 ^ uVar10 ^ uVar18;
    uVar13 = uVar23 >> 0x1f | uVar23 << 1;
    uVar22 = uVar12 + 0x8f1bbcdc + uVar6 + ((uVar22 | uVar14) & uVar11 | uVar22 & uVar14) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar6 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar23 = uVar9 ^ uVar3 ^ uVar1 ^ uVar16;
    uVar3 = uVar23 >> 0x1f | uVar23 << 1;
    uVar20 = uVar13 + 0x8f1bbcdc + uVar11 + ((uVar20 | uVar17) & uVar14 | uVar20 & uVar17) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar11 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = uVar4 ^ uVar21 ^ uVar2 ^ uVar12;
    uVar4 = uVar23 >> 0x1f | uVar23 << 1;
    uVar22 = uVar3 + 0x8f1bbcdc + uVar14 + ((uVar22 | uVar6) & uVar17 | uVar22 & uVar6) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar23 = uVar9 ^ uVar8 ^ uVar24 ^ uVar13;
    uVar9 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar14 = uVar23 >> 0x1f | uVar23 << 1;
    uVar20 = uVar4 + 0x8f1bbcdc + uVar17 + ((uVar20 | uVar11) & uVar6 | uVar20 & uVar11) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar17 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = uVar5 ^ uVar21 ^ uVar7 ^ uVar3;
    uVar19 = uVar23 >> 0x1f | uVar23 << 1;
    uVar22 = uVar14 + 0x8f1bbcdc + uVar6 + ((uVar22 | uVar9) & uVar11 | uVar22 & uVar9) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar23 = uVar8 ^ uVar15 ^ uVar18 ^ uVar4;
    uVar21 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar6 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar5 ^ uVar10 ^ uVar16 ^ uVar14;
    uVar20 = uVar19 + 0x8f1bbcdc + uVar11 + ((uVar20 | uVar17) & uVar9 | uVar20 & uVar17) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar5 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar8 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar1 ^ uVar15 ^ uVar12 ^ uVar19;
    uVar22 = uVar6 + 0xca62c1d6 + uVar9 + (uVar21 ^ uVar17 ^ uVar22) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar9 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar11 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar10 ^ uVar2 ^ uVar13 ^ uVar6;
    uVar20 = uVar8 + 0xca62c1d6 + uVar17 + (uVar5 ^ uVar21 ^ uVar20) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar10 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar15 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar1 ^ uVar24 ^ uVar3 ^ uVar8;
    uVar22 = uVar11 + 0xca62c1d6 + uVar21 + (uVar9 ^ uVar5 ^ uVar22) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar21 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar17 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar7 ^ uVar2 ^ uVar4 ^ uVar11;
    uVar20 = uVar15 + 0xca62c1d6 + uVar5 + (uVar10 ^ uVar9 ^ uVar20) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar1 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar5 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar24 ^ uVar18 ^ uVar14 ^ uVar15;
    uVar22 = uVar17 + 0xca62c1d6 + uVar9 + (uVar21 ^ uVar10 ^ uVar22) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar24 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar2 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar7 ^ uVar16 ^ uVar19 ^ uVar17;
    uVar20 = uVar5 + 0xca62c1d6 + uVar10 + (uVar1 ^ uVar21 ^ uVar20) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar7 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar9 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar12 ^ uVar18 ^ uVar6 ^ uVar5;
    uVar22 = uVar2 + 0xca62c1d6 + uVar21 + (uVar24 ^ uVar1 ^ uVar22) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar21 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar10 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar16 ^ uVar13 ^ uVar8 ^ uVar2;
    uVar20 = uVar9 + 0xca62c1d6 + uVar1 + (uVar7 ^ uVar24 ^ uVar20) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar1 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar16 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar12 ^ uVar3 ^ uVar11 ^ uVar9;
    uVar22 = uVar10 + 0xca62c1d6 + uVar24 + (uVar21 ^ uVar7 ^ uVar22) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar12 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar18 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar4 ^ uVar13 ^ uVar15 ^ uVar10;
    uVar20 = uVar16 + 0xca62c1d6 + uVar7 + (uVar1 ^ uVar21 ^ uVar20) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar7 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar13 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar3 ^ uVar14 ^ uVar17 ^ uVar16;
    uVar22 = uVar18 + 0xca62c1d6 + uVar21 + (uVar12 ^ uVar1 ^ uVar22) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar3 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar21 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar4 ^ uVar19 ^ uVar5 ^ uVar18;
    uVar20 = uVar13 + 0xca62c1d6 + uVar1 + (uVar7 ^ uVar12 ^ uVar20) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar4 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar24 = uVar23 >> 0x1f | uVar23 << 1;
    uVar23 = uVar6 ^ uVar14 ^ uVar2 ^ uVar13;
    uVar22 = uVar21 + 0xca62c1d6 + uVar12 + (uVar3 ^ uVar7 ^ uVar22) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar12 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar1 = uVar23 >> 0x1f | uVar23 << 1;
    uVar20 = uVar24 + 0xca62c1d6 + uVar7 + (uVar4 ^ uVar3 ^ uVar20) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar21 = uVar19 ^ uVar8 ^ uVar9 ^ uVar21;
    uVar7 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = uVar21 >> 0x1f | uVar21 << 1;
    uVar22 = uVar1 + 0xca62c1d6 + uVar3 + (uVar12 ^ uVar4 ^ uVar22) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar3 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar24 = uVar6 ^ uVar11 ^ uVar10 ^ uVar24;
    uVar2 = uVar24 >> 0x1f | uVar24 << 1;
    uVar6 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar20 = uVar23 + 0xca62c1d6 + uVar4 + (uVar7 ^ uVar12 ^ uVar20) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar23 = uVar11 ^ uVar17 ^ uVar18 ^ uVar23;
    uVar1 = uVar15 ^ uVar8 ^ uVar16 ^ uVar1;
    uVar24 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar22 = uVar2 + 0xca62c1d6 + uVar12 + (uVar3 ^ uVar7 ^ uVar22) +
             (uVar20 >> 0x1b | uVar20 * 0x20);
    uVar4 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar2 = uVar15 ^ uVar5 ^ uVar13 ^ uVar2;
    uVar21 = (uVar1 >> 0x1f | uVar1 << 1) + 0xca62c1d6 + uVar7 + (uVar6 ^ uVar3 ^ uVar20) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar1 = (uVar23 >> 0x1f | uVar23 << 1) + 0xca62c1d6 + uVar3 + (uVar24 ^ uVar6 ^ uVar22) +
            (uVar21 >> 0x1b | uVar21 * 0x20);
    uVar20 = (uVar21 >> 2 | uVar21 * 0x40000000) + param_1[2];
    uVar22 = uVar4 + param_1[3];
    param_1[2] = uVar20;
    param_1[3] = uVar22;
    uVar23 = uVar1 + param_1[1];
    uVar21 = *param_1 + 0xca62c1d6 + (uVar2 >> 0x1f | uVar2 << 1) + uVar6 +
             (uVar4 ^ uVar24 ^ uVar21) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar24 = uVar24 + param_1[4];
    param_1[4] = uVar24;
    local_68 = local_68 + -1;
    *param_1 = uVar21;
    param_1[1] = uVar23;
    param_2 = param_2 + 0x10;
  } while (local_68 != 0);
  return;
}


