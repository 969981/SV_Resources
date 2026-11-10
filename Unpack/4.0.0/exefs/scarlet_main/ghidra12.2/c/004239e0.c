/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004239e0; name: FUN_004239e0
 */


void FUN_004239e0(int *param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
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
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  
  lVar11 = (long)param_2[2];
  lVar16 = (long)param_2[3];
  lVar12 = (long)*param_2;
  lVar17 = (long)param_2[1];
  lVar25 = lVar17 * 2;
  lVar26 = lVar16 * 2;
  lVar13 = (long)param_2[8];
  lVar18 = (long)param_2[9];
  lVar33 = lVar13 * 0x13;
  lVar14 = (long)param_2[4];
  lVar24 = (long)param_2[5];
  lVar32 = lVar14 * 2;
  lVar15 = (long)param_2[6];
  lVar19 = (long)param_2[7];
  lVar30 = lVar19 * 0x26;
  lVar27 = lVar12 * 2;
  lVar21 = lVar15 * 0x13;
  lVar22 = lVar11 * 2;
  lVar31 = lVar24 * 2;
  lVar28 = lVar18 * 0x26;
  lVar23 = lVar19 * 2;
  lVar20 = lVar11 * lVar11 + lVar26 * lVar25 + lVar14 * lVar27 + lVar30 * lVar19 +
           lVar15 * lVar33 * 2 + lVar28 * lVar31;
  lVar29 = lVar12 * lVar12 + lVar24 * lVar24 * 0x26 + lVar21 * lVar32 + lVar30 * lVar26 +
           lVar33 * lVar22 + lVar28 * lVar25;
  uVar1 = lVar20 + 0x2000000;
  lVar12 = lVar22 * lVar16 + lVar14 * lVar25 + lVar24 * lVar27 + lVar33 * lVar23 + lVar28 * lVar15 +
           ((long)uVar1 >> 0x1a);
  uVar2 = lVar29 + 0x2000000;
  lVar3 = lVar27 * lVar17 + lVar21 * lVar31 + lVar30 * lVar14 + lVar33 * lVar26 + lVar28 * lVar11 +
          ((long)uVar2 >> 0x1a);
  lVar4 = lVar3 + 0x1000000;
  lVar17 = lVar25 * lVar17 + lVar11 * lVar27 + lVar21 * lVar15 + lVar30 * lVar31 + lVar33 * lVar32 +
           lVar28 * lVar26 + (lVar4 >> 0x19);
  lVar21 = lVar12 + 0x1000000;
  lVar5 = lVar17 + 0x2000000;
  lVar6 = lVar14 * lVar22 + lVar26 * lVar16 + lVar31 * lVar25 + lVar15 * lVar27 + lVar33 * lVar13 +
          lVar28 * lVar23 + (lVar21 >> 0x19);
  lVar7 = lVar6 + 0x2000000;
  lVar8 = lVar26 * lVar14 + lVar24 * lVar22 + lVar15 * lVar25 + lVar19 * lVar27 + lVar28 * lVar13 +
          (lVar7 >> 0x1a);
  lVar9 = lVar8 + 0x1000000;
  lVar23 = lVar14 * lVar14 + lVar15 * lVar22 + lVar31 * lVar26 + lVar23 * lVar25 + lVar13 * lVar27 +
           lVar28 * lVar18 + (lVar9 >> 0x19);
  lVar10 = lVar23 + 0x2000000;
  lVar13 = lVar32 * lVar24 + lVar15 * lVar26 + lVar19 * lVar22 + lVar13 * lVar25 + lVar18 * lVar27 +
           (lVar10 >> 0x1a);
  lVar18 = lVar13 + 0x1000000;
  lVar24 = (lVar29 - (uVar2 & 0xfffffffffc000000)) + (lVar18 >> 0x19) * 0x13;
  uVar2 = lVar24 + 0x2000000;
  lVar11 = lVar25 * lVar11 + lVar16 * lVar27 + lVar30 * lVar15 + lVar33 * lVar31 + lVar28 * lVar14 +
           (lVar5 >> 0x1a);
  *param_1 = (int)lVar24 - ((uint)uVar2 & 0xfc000000);
  param_1[1] = ((int)lVar3 - ((uint)lVar4 & 0xfe000000)) + (int)(uVar2 >> 0x1a);
  lVar3 = lVar11 + 0x1000000;
  lVar4 = (lVar20 - (uVar1 & 0xfffffffffc000000)) + (lVar3 >> 0x19);
  uVar1 = lVar4 + 0x2000000;
  param_1[4] = (int)lVar4 - ((uint)uVar1 & 0xfc000000);
  param_1[5] = ((int)lVar12 - ((uint)lVar21 & 0xfe000000)) + (int)(uVar1 >> 0x1a);
  param_1[6] = (int)lVar6 - ((uint)lVar7 & 0xfc000000);
  param_1[7] = (int)lVar8 - ((uint)lVar9 & 0xfe000000);
  param_1[2] = (int)lVar17 - ((uint)lVar5 & 0xfc000000);
  param_1[3] = (int)lVar11 - ((uint)lVar3 & 0xfe000000);
  param_1[8] = (int)lVar23 - ((uint)lVar10 & 0xfc000000);
  param_1[9] = (int)lVar13 - ((uint)lVar18 & 0xfe000000);
  return;
}


