/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03271194; name: FUN_03271194
 */


void FUN_03271194(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  byte bVar15;
  long lVar16;
  double dVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  byte bVar21;
  double dVar22;
  double dVar23;
  long lVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  byte bVar37;
  long lVar35;
  double dVar36;
  long lVar38;
  long lVar39;
  double dVar40;
  double dVar41;
  int iVar42;
  long lVar43;
  ulong uVar44;
  byte bVar49;
  double dVar45;
  long lVar46;
  byte bVar50;
  byte bVar51;
  double dVar47;
  double dVar48;
  double dVar52;
  long lVar53;
  
  dVar10 = param_1[2];
  dVar1 = param_1[3];
  dVar32 = *param_2;
  dVar29 = param_2[1];
  dVar20 = *param_3;
  dVar30 = param_3[1];
  dVar34 = param_3[2];
  dVar2 = param_3[3];
  dVar28 = param_2[2];
  dVar3 = param_2[3];
  dVar22 = dVar32 * dVar2;
  dVar52 = dVar29 * dVar2;
  lVar16 = (((ulong)((ushort)((ulong)dVar10 >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
           -0x340000000000000;
  lVar18 = (((ulong)((ushort)((ulong)dVar1 >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
           -0x340000000000000;
  dVar45 = dVar3 * dVar30;
  dVar13 = dVar29 * dVar34 - dVar28 * dVar30;
  lVar35 = (CONCAT17((char)((ulong)dVar32 >> 0x38),(uint7)((ulong)dVar32 >> 0x30) << 0x30) &
           0x7ff0ffffffffffff) + 0xfcc0000000000000;
  lVar38 = (CONCAT17((char)((ulong)dVar29 >> 0x38),(uint7)((ulong)dVar29 >> 0x30) << 0x30) &
           0x7ff0ffffffffffff) + 0xfcc0000000000000;
  dVar14 = dVar45 - dVar52;
  lVar39 = (CONCAT17((char)((ulong)dVar20 >> 0x38),(uint7)((ulong)dVar20 >> 0x30) << 0x30) &
           0x7ff0ffffffffffff) + 0xfcc0000000000000;
  lVar43 = (CONCAT17((char)((ulong)dVar30 >> 0x38),(uint7)((ulong)dVar30 >> 0x30) << 0x30) &
           0x7ff0ffffffffffff) + 0xfcc0000000000000;
  dVar23 = dVar3 * dVar20;
  lVar46 = (CONCAT17((char)((ulong)dVar45 >> 0x38),(uint7)((ulong)dVar45 >> 0x30) << 0x30) &
           0x7ff0ffffffffffff) + 0xfcc0000000000000;
  bVar4 = (byte)((ulong)lVar16 >> 0x38);
  bVar27 = (char)bVar4 >> 7;
  bVar15 = (byte)((ulong)lVar18 >> 0x38);
  bVar21 = (char)bVar15 >> 7;
  dVar17 = (double)((ulong)CONCAT11(bVar4 & ~bVar27,(byte)((ulong)lVar16 >> 0x30) & ~bVar27) << 0x30
                   );
  dVar19 = (double)((ulong)CONCAT11(bVar15 & ~bVar21,(byte)((ulong)lVar18 >> 0x30) & ~bVar21) <<
                   0x30);
  lVar53 = (CONCAT17((char)((ulong)dVar52 >> 0x38),(uint7)((ulong)dVar52 >> 0x30) << 0x30) &
           0x7ff0ffffffffffff) + 0xfcc0000000000000;
  bVar4 = (byte)((ulong)lVar46 >> 0x38);
  bVar26 = (char)bVar4 >> 7;
  lVar24 = (CONCAT17((char)((ulong)dVar23 >> 0x38),(uint7)((ulong)dVar23 >> 0x30) << 0x30) &
           0x7ff0ffffffffffff) + 0xfcc0000000000000;
  lVar18 = (CONCAT17((char)((ulong)dVar22 >> 0x38),(uint7)((ulong)dVar22 >> 0x30) << 0x30) &
           0x7ff0ffffffffffff) + 0xfcc0000000000000;
  bVar15 = (byte)((ulong)lVar39 >> 0x38);
  bVar21 = (char)bVar15 >> 7;
  bVar27 = (byte)((ulong)lVar43 >> 0x38);
  bVar25 = (char)bVar27 >> 7;
  dVar48 = (double)((ulong)CONCAT11(bVar15 & ~bVar21,(byte)((ulong)lVar39 >> 0x30) & ~bVar21) <<
                   0x30);
  dVar40 = (double)((ulong)CONCAT11(bVar27 & ~bVar25,(byte)((ulong)lVar43 >> 0x30) & ~bVar25) <<
                   0x30);
  bVar15 = (byte)((ulong)lVar35 >> 0x38);
  bVar21 = (char)bVar15 >> 7;
  bVar27 = (byte)((ulong)lVar38 >> 0x38);
  bVar25 = (char)bVar27 >> 7;
  dVar47 = (double)((ulong)CONCAT11(bVar15 & ~bVar21,(byte)((ulong)lVar35 >> 0x30) & ~bVar21) <<
                   0x30);
  dVar41 = (double)((ulong)CONCAT11(bVar27 & ~bVar25,(byte)((ulong)lVar38 >> 0x30) & ~bVar25) <<
                   0x30);
  lVar16 = (CONCAT17((char)((ulong)dVar14 >> 0x38),(uint7)((ulong)dVar14 >> 0x30) << 0x30) &
           0x7ff0ffffffffffff) + 0xfcc0000000000000;
  bVar15 = (byte)((ulong)lVar53 >> 0x38);
  bVar49 = (char)bVar15 >> 7;
  bVar27 = (byte)((ulong)lVar18 >> 0x38);
  bVar50 = (char)bVar27 >> 7;
  bVar21 = (byte)((ulong)lVar24 >> 0x38);
  bVar51 = (char)bVar21 >> 7;
  uVar12 = (((ulong)((ushort)((ulong)dVar2 >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
           0xfcc0000000000000;
  iVar11 = (int)((long)uVar12 >> 0x3f);
  bVar25 = (byte)((ulong)lVar16 >> 0x38);
  bVar37 = (char)bVar25 >> 7;
  uVar44 = (((ulong)((ushort)((ulong)dVar3 >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
           0xfcc0000000000000;
  iVar42 = (int)((long)uVar44 >> 0x3f);
  dVar8 = (double)(uVar44 & (CONCAT44(iVar42,iVar42) ^ 0xffffffffffffffff));
  dVar9 = (double)(uVar12 & (CONCAT44(iVar11,iVar11) ^ 0xffffffffffffffff));
  dVar31 = ABS(dVar2) * dVar41 + ABS(dVar29) * dVar9 + dVar9 * dVar41 +
           (double)((ulong)CONCAT11(bVar15 & ~bVar49,(byte)((ulong)lVar53 >> 0x30) & ~bVar49) <<
                   0x30) +
           ABS(dVar30) * dVar8 + ABS(dVar3) * dVar40 + dVar8 * dVar40 +
           (double)((ulong)CONCAT11(bVar4 & ~bVar26,(byte)((ulong)lVar46 >> 0x30) & ~bVar26) << 0x30
                   ) +
           (double)((ulong)CONCAT11(bVar25 & ~bVar37,(byte)((ulong)lVar16 >> 0x30) & ~bVar37) <<
                   0x30);
  dVar36 = dVar28 * dVar20 - dVar32 * dVar34;
  lVar16 = (((ulong)((ushort)((ulong)(dVar22 - dVar23) >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
           -0x340000000000000;
  bVar4 = (byte)((ulong)lVar16 >> 0x38);
  bVar15 = (char)bVar4 >> 7;
  dVar33 = (double)((ulong)CONCAT11(bVar21 & ~bVar51,(byte)((ulong)lVar24 >> 0x30) & ~bVar51) <<
                   0x30) + ABS(dVar20) * dVar8 + ABS(dVar3) * dVar48 + dVar8 * dVar48 +
           ABS(dVar2) * dVar47 + ABS(dVar32) * dVar9 + dVar9 * dVar47 +
           (double)((ulong)CONCAT11(bVar27 & ~bVar50,(byte)((ulong)lVar18 >> 0x30) & ~bVar50) <<
                   0x30) +
           (double)((ulong)CONCAT11(bVar4 & ~bVar15,(byte)((ulong)lVar16 >> 0x30) & ~bVar15) << 0x30
                   );
  dVar8 = dVar32 * dVar30;
  dVar32 = ABS(dVar30) * dVar47 + ABS(dVar32) * dVar40 + dVar47 * dVar40;
  uVar5 = (ushort)((ulong)dVar8 >> 0x30);
  lVar24 = (((ulong)(uVar5 & 0xfff0) & 0x7fff) << 0x30) + -0x340000000000000;
  bVar4 = (byte)((ulong)lVar24 >> 0x38);
  bVar26 = (char)bVar4 >> 7;
  dVar40 = dVar29 * dVar20;
  dVar30 = dVar8 - dVar40;
  dVar47 = ABS(dVar20) * dVar41 + ABS(dVar29) * dVar48 + dVar41 * dVar48;
  uVar6 = (ushort)((ulong)dVar40 >> 0x30);
  lVar18 = (((ulong)(uVar6 & 0xfff0) & 0x7fff) << 0x30) + -0x340000000000000;
  bVar15 = (byte)((ulong)lVar18 >> 0x38);
  bVar21 = (char)bVar15 >> 7;
  uVar7 = (ushort)((ulong)dVar30 >> 0x30);
  lVar16 = (((ulong)(uVar7 & 0xfff0) & 0x7fff) << 0x30) + -0x340000000000000;
  bVar27 = (byte)((ulong)lVar16 >> 0x38);
  bVar25 = (char)bVar27 >> 7;
  dVar20 = dVar47 + (double)((ulong)CONCAT11(bVar15 & ~bVar21,
                                             (byte)((ulong)lVar18 >> 0x30) & ~bVar21) << 0x30) +
           dVar32 + (double)((ulong)CONCAT11(bVar4 & ~bVar26,(byte)((ulong)lVar24 >> 0x30) & ~bVar26
                                            ) << 0x30) +
           (double)((ulong)CONCAT11(bVar27 & ~bVar25,(byte)((ulong)lVar16 >> 0x30) & ~bVar25) <<
                   0x30);
  lVar16 = (((ulong)(uVar5 & 0xfff0) & 0x7fff) << 0x30) + -0x340000000000000;
  bVar4 = (byte)((ulong)lVar16 >> 0x38);
  bVar21 = (char)bVar4 >> 7;
  lVar18 = (((ulong)(uVar6 & 0xfff0) & 0x7fff) << 0x30) + -0x340000000000000;
  bVar15 = (byte)((ulong)lVar18 >> 0x38);
  bVar26 = (char)bVar15 >> 7;
  lVar24 = (((ulong)(uVar7 & 0xfff0) & 0x7fff) << 0x30) + -0x340000000000000;
  bVar27 = (byte)((ulong)lVar24 >> 0x38);
  bVar25 = (char)bVar27 >> 7;
  dVar29 = param_1[1];
  dVar9 = ABS(dVar10);
  dVar32 = dVar47 + (double)((ulong)CONCAT11(bVar15 & ~bVar26,
                                             (byte)((ulong)lVar18 >> 0x30) & ~bVar26) << 0x30) +
           dVar32 + (double)((ulong)CONCAT11(bVar4 & ~bVar21,(byte)((ulong)lVar16 >> 0x30) & ~bVar21
                                            ) << 0x30) +
           (double)((ulong)CONCAT11(bVar27 & ~bVar25,(byte)((ulong)lVar24 >> 0x30) & ~bVar25) <<
                   0x30);
  dVar41 = *param_1;
  dVar14 = dVar14 * dVar10;
  dVar47 = dVar14 + dVar13 * dVar1 + dVar29 * (dVar28 * dVar2 - dVar3 * dVar34);
  lVar16 = (CONCAT17((char)((ulong)dVar14 >> 0x38),(uint7)((ulong)dVar14 >> 0x30) << 0x30) &
           0x7ff0ffffffffffff) + 0xfcc0000000000000;
  uVar12 = (ulong)dVar47 & 0x7ff0000000000000;
  if (uVar12 < 0x340000000000001) {
    uVar12 = 0x340000000000000;
  }
  bVar4 = (byte)((ulong)lVar16 >> 0x38);
  bVar15 = (char)bVar4 >> 7;
  dVar14 = (double)((ulong)CONCAT11(bVar4 & ~bVar15,(byte)((ulong)lVar16 >> 0x30) & ~bVar15) << 0x30
                   ) + ABS(dVar45 - dVar52) * dVar17 + dVar9 * dVar31 + dVar31 * dVar17 +
           (double)(uVar12 + 0xfcc0000000000000);
  dVar48 = dVar30 * dVar1 + dVar41 * (dVar52 - dVar45) + dVar29 * (dVar23 - dVar22);
  dVar13 = dVar30 * dVar10 + dVar41 * dVar13 + dVar29 * dVar36;
  param_4[2] = -dVar48;
  param_4[3] = dVar13;
  dVar29 = (dVar22 - dVar23) * dVar10;
  dVar34 = dVar29 + dVar36 * dVar1 + dVar41 * (dVar3 * dVar34 - dVar28 * dVar2);
  lVar16 = (((ulong)((ushort)((ulong)dVar29 >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
           -0x340000000000000;
  uVar12 = (ulong)dVar34 & 0x7ff0000000000000;
  if (uVar12 < 0x340000000000001) {
    uVar12 = 0x340000000000000;
  }
  lVar18 = (((ulong)((ushort)((ulong)(dVar30 * dVar1) >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
           -0x340000000000000;
  uVar44 = (ulong)dVar48 & 0x7ff0000000000000;
  if (uVar44 < 0x340000000000001) {
    uVar44 = 0x340000000000000;
  }
  bVar4 = (byte)((ulong)lVar16 >> 0x38);
  bVar15 = (char)bVar4 >> 7;
  dVar28 = (double)((ulong)CONCAT11(bVar4 & ~bVar15,(byte)((ulong)lVar16 >> 0x30) & ~bVar15) << 0x30
                   ) + ABS(dVar22 - dVar23) * dVar17 + dVar9 * dVar33 + dVar33 * dVar17 +
           (double)(uVar12 + 0xfcc0000000000000);
  *param_4 = -dVar47;
  param_4[1] = -dVar34;
  param_4[4] = dVar14 + dVar14;
  param_4[5] = dVar28 + dVar28;
  bVar4 = (byte)((ulong)lVar18 >> 0x38);
  bVar15 = (char)bVar4 >> 7;
  uVar12 = (ulong)dVar13 & 0x7ff0000000000000;
  if (uVar12 < 0x340000000000001) {
    uVar12 = 0x340000000000000;
  }
  dVar20 = (double)((ulong)CONCAT11(bVar4 & ~bVar15,(byte)((ulong)lVar18 >> 0x30) & ~bVar15) << 0x30
                   ) + ABS(dVar8 - dVar40) * dVar19 + ABS(dVar1) * dVar20 + dVar20 * dVar19 +
           (double)(uVar44 + 0xfcc0000000000000);
  lVar16 = (((ulong)((ushort)((ulong)(dVar30 * dVar10) >> 0x30) & 0xfff0) & 0x7fff) << 0x30) +
           -0x340000000000000;
  bVar4 = (byte)((ulong)lVar16 >> 0x38);
  bVar15 = (char)bVar4 >> 7;
  dVar10 = (double)((ulong)CONCAT11(bVar4 & ~bVar15,(byte)((ulong)lVar16 >> 0x30) & ~bVar15) << 0x30
                   ) + ABS(dVar8 - dVar40) * dVar17 + dVar9 * dVar32 + dVar32 * dVar17 +
           (double)(uVar12 + 0xfcc0000000000000);
  param_4[6] = dVar20 + dVar20;
  param_4[7] = dVar10 + dVar10;
  return;
}


