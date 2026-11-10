/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00421730; name: FUN_00421730
 */


void FUN_00421730(int *param_1,int *param_2,int *param_3)

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
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  
  lVar9 = (long)param_3[6];
  lVar18 = (long)param_3[7];
  lVar10 = (long)param_3[2];
  lVar19 = (long)param_3[3];
  lVar31 = lVar9 * 0x13;
  lVar30 = (long)param_3[4];
  lVar20 = (long)param_3[5];
  lVar11 = (long)*param_3;
  lVar21 = (long)param_3[1];
  lVar36 = lVar20 * 0x13;
  lVar33 = lVar18 * 0x13;
  lVar12 = (long)*param_2;
  lVar22 = (long)param_2[1];
  lVar13 = (long)param_2[8];
  lVar23 = (long)param_2[9];
  lVar35 = lVar23 * 2;
  lVar14 = (long)param_2[4];
  lVar24 = (long)param_2[5];
  lVar15 = (long)param_2[2];
  lVar25 = (long)param_2[3];
  lVar41 = lVar25 * 2;
  lVar38 = lVar22 * 2;
  lVar16 = (long)param_2[6];
  lVar26 = (long)param_2[7];
  lVar32 = lVar26 * 2;
  lVar17 = (long)param_3[8];
  lVar40 = lVar17 * 0x13;
  lVar39 = (long)param_3[9] * 0x13;
  lVar34 = lVar24 * 2;
  lVar28 = lVar11 * lVar14 + lVar21 * lVar41 + lVar10 * lVar15 + lVar19 * lVar38 + lVar30 * lVar12 +
           lVar36 * lVar35 + lVar31 * lVar13 + lVar33 * lVar32 + lVar40 * lVar16 + lVar39 * lVar34;
  uVar1 = lVar28 + 0x2000000;
  lVar27 = lVar19 * 0x13;
  lVar29 = lVar30 * 0x13;
  lVar37 = lVar11 * lVar12 + lVar21 * lVar35 * 0x13 + lVar10 * 0x13 * lVar13 + lVar27 * lVar32 +
           lVar29 * lVar16 + lVar36 * lVar34 + lVar31 * lVar14 + lVar33 * lVar41 + lVar40 * lVar15 +
           lVar39 * lVar38;
  uVar2 = lVar37 + 0x2000000;
  lVar3 = lVar11 * lVar22 + lVar21 * lVar12 + lVar10 * 0x13 * lVar23 + lVar27 * lVar13 +
          lVar29 * lVar26 + lVar36 * lVar16 + lVar31 * lVar24 + lVar33 * lVar14 + lVar40 * lVar25 +
          lVar39 * lVar15 + ((long)uVar2 >> 0x1a);
  lVar4 = lVar3 + 0x1000000;
  lVar27 = lVar11 * lVar15 + lVar21 * lVar38 + lVar10 * lVar12 + lVar27 * lVar35 + lVar29 * lVar13 +
           lVar36 * lVar32 + lVar31 * lVar16 + lVar33 * lVar34 + lVar40 * lVar14 + lVar39 * lVar41 +
           (lVar4 >> 0x19);
  lVar5 = lVar27 + 0x2000000;
  lVar29 = lVar11 * lVar25 + lVar21 * lVar15 + lVar10 * lVar22 + lVar19 * lVar12 + lVar29 * lVar23 +
           lVar36 * lVar13 + lVar31 * lVar26 + lVar33 * lVar16 + lVar40 * lVar24 + lVar39 * lVar14 +
           (lVar5 >> 0x1a);
  lVar31 = lVar11 * lVar24 + lVar21 * lVar14 + lVar10 * lVar25 + lVar19 * lVar15 + lVar30 * lVar22 +
           lVar20 * lVar12 + lVar31 * lVar23 + lVar33 * lVar13 + lVar40 * lVar26 + lVar39 * lVar16 +
           ((long)uVar1 >> 0x1a);
  lVar36 = lVar31 + 0x1000000;
  lVar33 = lVar11 * lVar16 + lVar21 * lVar34 + lVar10 * lVar14 + lVar19 * lVar41 + lVar30 * lVar15 +
           lVar20 * lVar38 + lVar9 * lVar12 + lVar33 * lVar35 + lVar40 * lVar13 + lVar39 * lVar32 +
           (lVar36 >> 0x19);
  lVar6 = lVar29 + 0x1000000;
  lVar7 = lVar33 + 0x2000000;
  lVar40 = lVar11 * lVar26 + lVar21 * lVar16 + lVar10 * lVar24 + lVar19 * lVar14 + lVar30 * lVar25 +
           lVar20 * lVar15 + lVar9 * lVar22 + lVar18 * lVar12 + lVar40 * lVar23 + lVar39 * lVar13 +
           (lVar7 >> 0x1a);
  lVar8 = lVar40 + 0x1000000;
  lVar32 = lVar11 * lVar13 + lVar21 * lVar32 + lVar10 * lVar16 + lVar19 * lVar34 + lVar30 * lVar14 +
           lVar20 * lVar41 + lVar9 * lVar15 + lVar18 * lVar38 + lVar17 * lVar12 + lVar39 * lVar35 +
           (lVar8 >> 0x19);
  lVar34 = lVar32 + 0x2000000;
  lVar9 = lVar11 * lVar23 + lVar21 * lVar13 + lVar10 * lVar26 + lVar19 * lVar16 + lVar30 * lVar24 +
          lVar20 * lVar14 + lVar9 * lVar25 + lVar18 * lVar15 + lVar17 * lVar22 + param_3[9] * lVar12
          + (lVar34 >> 0x1a);
  lVar10 = lVar9 + 0x1000000;
  lVar30 = (lVar37 - (uVar2 & 0xfffffffffc000000)) + (lVar10 >> 0x19) * 0x13;
  uVar2 = lVar30 + 0x2000000;
  *param_1 = (int)lVar30 - ((uint)uVar2 & 0xfc000000);
  param_1[1] = ((int)lVar3 - ((uint)lVar4 & 0xfe000000)) + (int)(uVar2 >> 0x1a);
  param_1[2] = (int)lVar27 - ((uint)lVar5 & 0xfc000000);
  param_1[3] = (int)lVar29 - ((uint)lVar6 & 0xfe000000);
  lVar3 = (lVar28 - (uVar1 & 0xfffffffffc000000)) + (lVar6 >> 0x19);
  uVar1 = lVar3 + 0x2000000;
  param_1[4] = (int)lVar3 - ((uint)uVar1 & 0xfc000000);
  param_1[5] = ((int)lVar31 - ((uint)lVar36 & 0xfe000000)) + (int)(uVar1 >> 0x1a);
  param_1[6] = (int)lVar33 - ((uint)lVar7 & 0xfc000000);
  param_1[7] = (int)lVar40 - ((uint)lVar8 & 0xfe000000);
  param_1[8] = (int)lVar32 - ((uint)lVar34 & 0xfc000000);
  param_1[9] = (int)lVar9 - ((uint)lVar10 & 0xfe000000);
  return;
}


