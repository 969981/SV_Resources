/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00423520; name: FUN_00423520
 */


void FUN_00423520(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
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
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  int *piVar49;
  long lVar50;
  long lVar51;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  
  FUN_004239e0();
  FUN_004239e0(param_1 + 0x14,param_2 + 10);
  lVar18 = (long)param_2[0x18];
  lVar41 = (long)param_2[0x19];
  lVar19 = (long)param_2[0x14];
  lVar23 = (long)param_2[0x15];
  lVar45 = lVar23 * 2;
  lVar20 = (long)param_2[0x1a];
  lVar24 = (long)param_2[0x1b];
  lVar43 = lVar19 * 2;
  lVar21 = (long)param_2[0x1c];
  lVar25 = (long)param_2[0x1d];
  lVar48 = lVar20 * 0x13;
  lVar50 = lVar24 * 0x26;
  lVar22 = (long)param_2[0x16];
  lVar26 = (long)param_2[0x17];
  lVar40 = lVar25 * 0x26;
  lVar38 = lVar41 * 2;
  lVar51 = lVar21 * 0x13;
  lVar47 = lVar26 * 2;
  lVar37 = lVar18 * 2;
  lVar46 = lVar22 * 2;
  lVar39 = lVar24 * 2;
  lVar42 = (lVar19 * lVar19 + lVar41 * lVar41 * 0x26 + lVar48 * lVar37 + lVar50 * lVar47 +
            lVar51 * lVar46 + lVar40 * lVar45) * 2;
  uVar11 = lVar42 + 0x2000000;
  lVar44 = (lVar22 * lVar22 + lVar47 * lVar45 + lVar18 * lVar43 + lVar50 * lVar24 +
            lVar20 * lVar51 * 2 + lVar40 * lVar38) * 2;
  uVar12 = lVar44 + 0x2000000;
  lVar19 = ((long)uVar11 >> 0x1a) +
           (lVar43 * lVar23 + lVar48 * lVar38 + lVar50 * lVar18 + lVar51 * lVar47 + lVar40 * lVar22)
           * 2;
  lVar13 = ((long)uVar12 >> 0x1a) +
           (lVar46 * lVar26 + lVar18 * lVar45 + lVar41 * lVar43 + lVar51 * lVar39 + lVar40 * lVar20)
           * 2;
  lVar14 = lVar19 + 0x1000000;
  lVar15 = lVar13 + 0x1000000;
  lVar23 = (lVar14 >> 0x19) +
           (lVar45 * lVar23 + lVar22 * lVar43 + lVar48 * lVar20 + lVar50 * lVar38 + lVar51 * lVar37
           + lVar40 * lVar47) * 2;
  lVar48 = (lVar15 >> 0x19) +
           (lVar18 * lVar46 + lVar47 * lVar26 + lVar38 * lVar45 + lVar20 * lVar43 + lVar51 * lVar21
           + lVar40 * lVar39) * 2;
  lVar16 = lVar23 + 0x2000000;
  lVar22 = (lVar16 >> 0x1a) +
           (lVar45 * lVar22 + lVar26 * lVar43 + lVar50 * lVar20 + lVar51 * lVar38 + lVar40 * lVar18)
           * 2;
  lVar26 = lVar48 + 0x2000000;
  lVar50 = (lVar26 >> 0x1a) +
           (lVar47 * lVar18 + lVar41 * lVar46 + lVar20 * lVar45 + lVar24 * lVar43 + lVar40 * lVar21)
           * 2;
  lVar51 = lVar22 + 0x1000000;
  lVar44 = (lVar44 - (uVar12 & 0xfffffffffc000000)) + (lVar51 >> 0x19);
  lVar17 = lVar50 + 0x1000000;
  lVar18 = (lVar17 >> 0x19) +
           (lVar18 * lVar18 + lVar20 * lVar46 + lVar38 * lVar47 + lVar39 * lVar45 + lVar21 * lVar43
           + lVar40 * lVar25) * 2;
  lVar38 = lVar18 + 0x2000000;
  lVar20 = (lVar38 >> 0x1a) +
           (lVar37 * lVar41 + lVar20 * lVar47 + lVar24 * lVar46 + lVar21 * lVar45 + lVar25 * lVar43)
           * 2;
  lVar21 = lVar20 + 0x1000000;
  lVar41 = (lVar42 - (uVar11 & 0xfffffffffc000000)) + (lVar21 >> 0x19) * 0x13;
  uVar11 = lVar44 + 0x2000000;
  param_1[0x22] = (int)lVar44 - ((uint)uVar11 & 0xfc000000);
  param_1[0x23] = ((int)lVar13 - ((uint)lVar15 & 0xfe000000)) + (int)(uVar11 >> 0x1a);
  uVar11 = lVar41 + 0x2000000;
  param_1[0x26] = (int)lVar18 - ((uint)lVar38 & 0xfc000000);
  param_1[0x27] = (int)lVar20 - ((uint)lVar21 & 0xfe000000);
  param_1[0x1e] = (int)lVar41 - ((uint)uVar11 & 0xfc000000);
  param_1[0x1f] = ((int)lVar19 - ((uint)lVar14 & 0xfe000000)) + (int)(uVar11 >> 0x1a);
  param_1[0x20] = (int)lVar23 - ((uint)lVar16 & 0xfc000000);
  param_1[0x21] = (int)lVar22 - ((uint)lVar51 & 0xfe000000);
  param_1[0x24] = (int)lVar48 - ((uint)lVar26 & 0xfc000000);
  param_1[0x25] = (int)lVar50 - ((uint)lVar17 & 0xfe000000);
  piVar49 = param_1 + 10;
  *piVar49 = param_2[10] + *param_2;
  param_1[0xb] = param_2[0xb] + param_2[1];
  param_1[0xc] = param_2[0xc] + param_2[2];
  param_1[0xd] = param_2[0xd] + param_2[3];
  param_1[0xe] = param_2[0xe] + param_2[4];
  param_1[0xf] = param_2[0xf] + param_2[5];
  param_1[0x10] = param_2[0x10] + param_2[6];
  param_1[0x11] = param_2[0x11] + param_2[7];
  param_1[0x12] = param_2[0x12] + param_2[8];
  param_1[0x13] = param_2[0x13] + param_2[9];
  FUN_004239e0(&local_88,piVar49);
  iVar1 = *param_1 + param_1[0x14];
  iVar27 = param_1[0x14] - *param_1;
  *piVar49 = iVar1;
  iVar2 = param_1[1] + param_1[0x15];
  iVar3 = param_1[2] + param_1[0x16];
  iVar4 = param_1[3] + param_1[0x17];
  iVar5 = param_1[4] + param_1[0x18];
  iVar6 = param_1[5] + param_1[0x19];
  iVar7 = param_1[6] + param_1[0x1a];
  iVar8 = param_1[7] + param_1[0x1b];
  iVar9 = param_1[8] + param_1[0x1c];
  iVar10 = param_1[9] + param_1[0x1d];
  iVar28 = param_1[0x15] - param_1[1];
  iVar29 = param_1[0x16] - param_1[2];
  iVar30 = param_1[0x17] - param_1[3];
  iVar31 = param_1[0x18] - param_1[4];
  iVar32 = param_1[0x19] - param_1[5];
  iVar33 = param_1[0x1a] - param_1[6];
  iVar34 = param_1[0x1b] - param_1[7];
  iVar35 = param_1[0x1c] - param_1[8];
  iVar36 = param_1[0x1d] - param_1[9];
  param_1[0xb] = iVar2;
  param_1[0xc] = iVar3;
  param_1[0xd] = iVar4;
  param_1[0xe] = iVar5;
  param_1[0xf] = iVar6;
  param_1[0x10] = iVar7;
  param_1[0x11] = iVar8;
  param_1[0x12] = iVar9;
  param_1[0x13] = iVar10;
  param_1[0x14] = iVar27;
  param_1[0x15] = iVar28;
  param_1[0x16] = iVar29;
  param_1[0x17] = iVar30;
  param_1[0x18] = iVar31;
  param_1[0x19] = iVar32;
  param_1[0x1a] = iVar33;
  param_1[0x1b] = iVar34;
  param_1[0x1c] = iVar35;
  param_1[0x1d] = iVar36;
  *param_1 = local_88 - iVar1;
  param_1[1] = local_84 - iVar2;
  param_1[2] = local_80 - iVar3;
  param_1[3] = local_7c - iVar4;
  param_1[4] = local_78 - iVar5;
  param_1[5] = local_74 - iVar6;
  param_1[6] = local_70 - iVar7;
  param_1[7] = local_6c - iVar8;
  param_1[8] = local_68 - iVar9;
  param_1[0x1e] = param_1[0x1e] - iVar27;
  param_1[0x1f] = param_1[0x1f] - iVar28;
  param_1[0x20] = param_1[0x20] - iVar29;
  param_1[0x21] = param_1[0x21] - iVar30;
  param_1[0x22] = param_1[0x22] - iVar31;
  param_1[0x23] = param_1[0x23] - iVar32;
  param_1[0x24] = param_1[0x24] - iVar33;
  param_1[9] = local_64 - iVar10;
  param_1[0x25] = param_1[0x25] - iVar34;
  param_1[0x26] = param_1[0x26] - iVar35;
  param_1[0x27] = param_1[0x27] - iVar36;
  return;
}


