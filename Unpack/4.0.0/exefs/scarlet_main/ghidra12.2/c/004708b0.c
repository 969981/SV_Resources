/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004708b0; name: FUN_004708b0
 */


void FUN_004708b0(byte *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
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
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  uint uVar40;
  uint uVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  
  bVar30 = param_1[8];
  bVar31 = param_1[9];
  bVar32 = param_1[10];
  bVar33 = param_1[0xb];
  bVar34 = param_1[0xc];
  bVar35 = param_1[0xd];
  uVar40 = (uint)bVar30 << 0x18 | (uint)bVar31 << 0x10 | (uint)bVar32 << 8 | (uint)bVar33;
  bVar36 = param_1[2];
  uVar8 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)bVar36 << 8;
  bVar37 = param_1[0xe];
  bVar38 = param_1[6];
  uVar9 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)bVar38 << 8;
  uVar45 = (uint)(CONCAT14(param_1[7],uVar8) >> 8);
  bVar39 = param_1[0xf];
  uVar41 = (uint)bVar34 << 0x18 | (uint)bVar35 << 0x10 | (uint)bVar37 << 8 | (uint)bVar39;
  uVar8 = (uVar8 | param_1[3]) + uVar40 + 0x61c88647;
  uVar1 = ((uVar9 | param_1[7]) - uVar41) + 0x9e3779b9;
  uVar14 = *(uint *)(&DAT_03cffda4 + (ulong)(uVar1 & 0xff) * 4);
  uVar15 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar16 = *(uint *)(&DAT_03d005a4 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  uVar17 = *(uint *)(&DAT_03d009a4 + (ulong)(uVar1 >> 0x18) * 4);
  uVar1 = uVar45 + uVar40 + 0xc3910c8d;
  uVar48 = (uint)(CONCAT14(param_1[3],uVar9) >> 8);
  uVar9 = (uVar48 - uVar41) + 0x3c6ef373;
  uVar40 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar41 = *(uint *)(&DAT_03cffda4 + (ulong)(uVar1 & 0xff) * 4);
  uVar18 = *(uint *)(&DAT_03d005a4 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  uVar19 = *(uint *)(&DAT_03d009a4 + (ulong)(uVar1 >> 0x18) * 4);
  uVar20 = *(uint *)(&DAT_03cffda4 + (ulong)(uVar9 & 0xff) * 4);
  *param_2 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_03cffda4 + (ulong)(uVar8 & 0xff) * 4) ^
             *(uint *)(&DAT_03d005a4 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&DAT_03d009a4 + (ulong)(uVar8 >> 0x18) * 4);
  param_2[1] = uVar15 ^ uVar14 ^ uVar16 ^ uVar17;
  uVar15 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar9 >> 8 & 0xff) * 4);
  uVar16 = *(uint *)(&DAT_03d005a4 + (ulong)(uVar9 >> 0x10 & 0xff) * 4);
  uVar17 = *(uint *)(&DAT_03d009a4 + (ulong)(uVar9 >> 0x18) * 4);
  uVar9 = (uint)bVar34 | ((uint)bVar31 << 0x10 | (uint)bVar32 << 8 | (uint)bVar33) << 8;
  uVar8 = uVar45 + uVar9 + 0x8722191a;
  uVar21 = *(uint *)(&DAT_03cffda4 + (ulong)(uVar8 & 0xff) * 4);
  uVar14 = (uint)bVar30 | ((uint)bVar35 << 0x10 | (uint)bVar37 << 8 | (uint)bVar39) << 8;
  uVar22 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar8 >> 8 & 0xff) * 4);
  uVar1 = (uVar48 - uVar14) + 0x78dde6e6;
  uVar23 = *(uint *)(&DAT_03d005a4 + (ulong)(uVar8 >> 0x10 & 0xff) * 4);
  uVar24 = *(uint *)(&DAT_03d009a4 + (ulong)(uVar8 >> 0x18) * 4);
  uVar25 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar26 = *(uint *)(&DAT_03cffda4 + (ulong)(uVar1 & 0xff) * 4);
  uVar27 = *(uint *)(&DAT_03d005a4 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  uVar28 = *(uint *)(&DAT_03d009a4 + (ulong)(uVar1 >> 0x18) * 4);
  uVar47 = (uint)(((ulong)(uint)bVar36 << 0x20) >> 8) | uVar48 >> 8;
  uVar46 = (uint)(CONCAT14(bVar38,uVar45) >> 8);
  uVar8 = uVar46 + uVar9 + 0xe443234;
  uVar1 = (uVar47 - uVar14) + 0xf1bbcdcc;
  uVar9 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar8 >> 8 & 0xff) * 4);
  uVar14 = *(uint *)(&DAT_03cffda4 + (ulong)(uVar8 & 0xff) * 4);
  uVar29 = *(uint *)(&DAT_03d005a4 + (ulong)(uVar8 >> 0x10 & 0xff) * 4);
  uVar8 = *(uint *)(&DAT_03d009a4 + (ulong)(uVar8 >> 0x18) * 4);
  param_2[2] = uVar40 ^ uVar41 ^ uVar18 ^ uVar19;
  param_2[3] = uVar15 ^ uVar20 ^ uVar16 ^ uVar17;
  uVar15 = *(uint *)(&DAT_03cffda4 + (ulong)(uVar1 & 0xff) * 4);
  param_2[4] = uVar22 ^ uVar21 ^ uVar23 ^ uVar24;
  param_2[5] = uVar25 ^ uVar26 ^ uVar27 ^ uVar28;
  uVar16 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar17 = *(uint *)(&DAT_03d005a4 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  uVar1 = *(uint *)(&DAT_03d009a4 + (ulong)(uVar1 >> 0x18) * 4);
  param_2[6] = uVar9 ^ uVar14 ^ uVar29 ^ uVar8;
  param_2[7] = uVar16 ^ uVar15 ^ uVar17 ^ uVar1;
  iVar2 = CONCAT31(CONCAT21(CONCAT11(bVar32,bVar33),bVar34),bVar35);
  iVar3 = CONCAT31(CONCAT21(CONCAT11(bVar37,bVar39),bVar30),bVar31);
  uVar8 = uVar46 + iVar2 + 0x1c886467;
  uVar1 = (uVar47 - iVar3) + 0xe3779b99;
  uVar9 = *(uint *)(&DAT_03cffda4 + (ulong)(uVar1 & 0xff) * 4);
  uVar14 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar15 = *(uint *)(&DAT_03d005a4 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  uVar1 = *(uint *)(&DAT_03d009a4 + (ulong)(uVar1 >> 0x18) * 4);
  param_2[8] = *(uint *)(&DAT_03d001a4 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_03cffda4 + (ulong)(uVar8 & 0xff) * 4) ^
               *(uint *)(&DAT_03d005a4 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_03d009a4 + (ulong)(uVar8 >> 0x18) * 4);
  param_2[9] = uVar14 ^ uVar9 ^ uVar15 ^ uVar1;
  uVar10 = CONCAT44(uVar48 >> 8,uVar46);
  uVar16 = (uint)(CONCAT44(uVar45 >> 8,uVar47) >> 8);
  iVar42 = (int)(uVar10 >> 8);
  uVar8 = iVar42 + iVar2 + 0x3910c8cd;
  uVar1 = (uVar16 - iVar3) + 0xc6ef3733;
  uVar9 = *(uint *)(&DAT_03cffda4 + (ulong)(uVar1 & 0xff) * 4);
  uVar14 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar15 = *(uint *)(&DAT_03d005a4 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  uVar1 = *(uint *)(&DAT_03d009a4 + (ulong)(uVar1 >> 0x18) * 4);
  param_2[10] = *(uint *)(&DAT_03d001a4 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_03cffda4 + (ulong)(uVar8 & 0xff) * 4) ^
                *(uint *)(&DAT_03d005a4 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_03d009a4 + (ulong)(uVar8 >> 0x18) * 4);
  param_2[0xb] = uVar14 ^ uVar9 ^ uVar15 ^ uVar1;
  iVar2 = CONCAT31(CONCAT21(CONCAT11(bVar33,bVar34),bVar35),bVar37);
  iVar3 = CONCAT31(CONCAT21(CONCAT11(bVar39,bVar30),bVar31),bVar32);
  uVar8 = iVar42 + iVar2 + 0x72219199;
  uVar1 = (uVar16 - iVar3) + 0x8dde6e67;
  iVar42 = CONCAT31(CONCAT21(CONCAT11(bVar34,bVar35),bVar37),bVar39);
  iVar43 = CONCAT31(CONCAT21(CONCAT11(bVar30,bVar31),bVar32),bVar33);
  iVar4 = CONCAT31(CONCAT21(CONCAT11(bVar35,bVar37),bVar39),bVar30);
  uVar9 = *(uint *)(&DAT_03cffda4 + (ulong)(uVar1 & 0xff) * 4);
  iVar5 = CONCAT31(CONCAT21(CONCAT11(bVar31,bVar32),bVar33),bVar34);
  uVar14 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  iVar6 = CONCAT31(CONCAT21(CONCAT11(bVar37,bVar39),bVar30),bVar31);
  uVar15 = *(uint *)(&DAT_03d005a4 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  uVar1 = *(uint *)(&DAT_03d009a4 + (ulong)(uVar1 >> 0x18) * 4);
  param_2[0xc] = *(uint *)(&DAT_03d001a4 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_03cffda4 + (ulong)(uVar8 & 0xff) * 4) ^
                 *(uint *)(&DAT_03d005a4 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_03d009a4 + (ulong)(uVar8 >> 0x18) * 4);
  param_2[0xd] = uVar14 ^ uVar9 ^ uVar15 ^ uVar1;
  uVar11 = (ulong)(uVar47 >> 8) << 0x20 | uVar10 >> 8 & 0xffffffff;
  uVar17 = (uint)(CONCAT44(uVar46 >> 8,uVar16) >> 8);
  iVar44 = (int)(uVar11 >> 8);
  uVar8 = iVar44 + iVar2 + 0xe4432331;
  uVar1 = (uVar17 - iVar3) + 0x1bbcdccf;
  uVar10 = (uVar10 >> 0x10 & 0xffffff) << 0x20 | (ulong)uVar17;
  iVar2 = CONCAT31(CONCAT21(CONCAT11(bVar32,bVar33),bVar34),bVar35);
  uVar9 = *(uint *)(&DAT_03cffda4 + (ulong)(uVar1 & 0xff) * 4);
  iVar3 = CONCAT31(CONCAT21(CONCAT11(bVar39,bVar30),bVar31),bVar32);
  uVar14 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  iVar7 = CONCAT31(CONCAT21(CONCAT11(bVar33,bVar34),bVar35),bVar37);
  uVar15 = *(uint *)(&DAT_03d005a4 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  uVar1 = *(uint *)(&DAT_03d009a4 + (ulong)(uVar1 >> 0x18) * 4);
  param_2[0xe] = *(uint *)(&DAT_03d001a4 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_03cffda4 + (ulong)(uVar8 & 0xff) * 4) ^
                 *(uint *)(&DAT_03d005a4 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_03d009a4 + (ulong)(uVar8 >> 0x18) * 4);
  param_2[0xf] = uVar14 ^ uVar9 ^ uVar15 ^ uVar1;
  uVar8 = iVar44 + iVar42 + 0xc8864662;
  uVar1 = (uVar17 - iVar43) + 0x3779b99e;
  uVar9 = *(uint *)(&DAT_03cffda4 + (ulong)(uVar1 & 0xff) * 4);
  uVar14 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar15 = *(uint *)(&DAT_03d005a4 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  uVar1 = *(uint *)(&DAT_03d009a4 + (ulong)(uVar1 >> 0x18) * 4);
  param_2[0x10] =
       *(uint *)(&DAT_03d001a4 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_03cffda4 + (ulong)(uVar8 & 0xff) * 4) ^
       *(uint *)(&DAT_03d005a4 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_03d009a4 + (ulong)(uVar8 >> 0x18) * 4);
  param_2[0x11] = uVar14 ^ uVar9 ^ uVar15 ^ uVar1;
  uVar12 = (ulong)(uVar16 >> 8) << 0x20 | uVar11 >> 8 & 0xffffffff;
  iVar44 = (int)(uVar12 >> 8);
  uVar8 = iVar44 + iVar42 + 0x910c8cc4;
  iVar42 = (int)(uVar10 >> 8);
  uVar1 = (iVar42 - iVar43) + 0x6ef3733c;
  uVar9 = iVar44 + iVar4 + 0x22191988;
  uVar11 = (uVar11 >> 0x10 & 0xffffff) << 0x20 | uVar10 >> 8 & 0xffffffff;
  uVar14 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar15 = *(uint *)(&DAT_03cffda4 + (ulong)(uVar1 & 0xff) * 4);
  uVar16 = *(uint *)(&DAT_03d005a4 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  uVar1 = *(uint *)(&DAT_03d009a4 + (ulong)(uVar1 >> 0x18) * 4);
  param_2[0x12] =
       *(uint *)(&DAT_03d001a4 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_03cffda4 + (ulong)(uVar8 & 0xff) * 4) ^
       *(uint *)(&DAT_03d005a4 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_03d009a4 + (ulong)(uVar8 >> 0x18) * 4);
  param_2[0x13] = uVar14 ^ uVar15 ^ uVar16 ^ uVar1;
  uVar8 = (iVar42 - iVar5) + 0xdde6e678;
  uVar1 = *(uint *)(&DAT_03cffda4 + (ulong)(uVar8 & 0xff) * 4);
  uVar14 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar8 >> 8 & 0xff) * 4);
  uVar15 = *(uint *)(&DAT_03d005a4 + (ulong)(uVar8 >> 0x10 & 0xff) * 4);
  uVar8 = *(uint *)(&DAT_03d009a4 + (ulong)(uVar8 >> 0x18) * 4);
  param_2[0x14] =
       *(uint *)(&DAT_03d001a4 + (ulong)(uVar9 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_03cffda4 + (ulong)(uVar9 & 0xff) * 4) ^
       *(uint *)(&DAT_03d005a4 + (ulong)(uVar9 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_03d009a4 + (ulong)(uVar9 >> 0x18) * 4);
  param_2[0x15] = uVar14 ^ uVar1 ^ uVar15 ^ uVar8;
  uVar13 = (ulong)(uVar17 >> 8) << 0x20 | uVar12 >> 8 & 0xffffffff;
  iVar42 = (int)(uVar13 >> 8);
  uVar8 = iVar42 + iVar4 + 0x4432330f;
  iVar43 = (int)(uVar11 >> 8);
  uVar1 = (iVar43 - iVar5) + 0xbbcdccf1;
  uVar9 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar14 = *(uint *)(&DAT_03cffda4 + (ulong)(uVar1 & 0xff) * 4);
  uVar15 = *(uint *)(&DAT_03d005a4 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  uVar1 = *(uint *)(&DAT_03d009a4 + (ulong)(uVar1 >> 0x18) * 4);
  param_2[0x16] =
       *(uint *)(&DAT_03d001a4 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_03cffda4 + (ulong)(uVar8 & 0xff) * 4) ^
       *(uint *)(&DAT_03d005a4 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_03d009a4 + (ulong)(uVar8 >> 0x18) * 4);
  param_2[0x17] = uVar9 ^ uVar14 ^ uVar15 ^ uVar1;
  uVar8 = iVar42 + iVar6 + 0x8864661d;
  uVar1 = (iVar43 - iVar2) + 0x779b99e3;
  uVar12 = (uVar12 >> 0x10 & 0xffffff) << 0x20 | uVar11 >> 8 & 0xffffffff;
  uVar9 = *(uint *)(&DAT_03cffda4 + (ulong)(uVar1 & 0xff) * 4);
  uVar14 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar15 = *(uint *)(&DAT_03d005a4 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  uVar1 = *(uint *)(&DAT_03d009a4 + (ulong)(uVar1 >> 0x18) * 4);
  param_2[0x18] =
       *(uint *)(&DAT_03d001a4 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_03cffda4 + (ulong)(uVar8 & 0xff) * 4) ^
       *(uint *)(&DAT_03d005a4 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_03d009a4 + (ulong)(uVar8 >> 0x18) * 4);
  param_2[0x19] = uVar14 ^ uVar9 ^ uVar15 ^ uVar1;
  uVar10 = (uVar10 >> 0x10 & 0xffffff) << 0x20 | uVar13 >> 8 & 0xffffffff;
  iVar42 = (int)(uVar10 >> 8);
  uVar8 = iVar42 + iVar6 + 0x10c8cc3a;
  iVar43 = (int)(uVar12 >> 8);
  uVar1 = (iVar43 - iVar2) + 0xef3733c6;
  uVar9 = iVar42 + iVar3 + 0x21919873;
  uVar14 = *(uint *)(&DAT_03cffda4 + (ulong)(uVar1 & 0xff) * 4);
  uVar15 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar16 = *(uint *)(&DAT_03d005a4 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  uVar1 = *(uint *)(&DAT_03d009a4 + (ulong)(uVar1 >> 0x18) * 4);
  param_2[0x1a] =
       *(uint *)(&DAT_03d001a4 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_03cffda4 + (ulong)(uVar8 & 0xff) * 4) ^
       *(uint *)(&DAT_03d005a4 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_03d009a4 + (ulong)(uVar8 >> 0x18) * 4);
  param_2[0x1b] = uVar15 ^ uVar14 ^ uVar16 ^ uVar1;
  uVar8 = (iVar43 - iVar7) + 0xde6e678d;
  uVar1 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar8 >> 8 & 0xff) * 4);
  uVar14 = *(uint *)(&DAT_03cffda4 + (ulong)(uVar8 & 0xff) * 4);
  uVar15 = *(uint *)(&DAT_03d005a4 + (ulong)(uVar8 >> 0x10 & 0xff) * 4);
  uVar8 = *(uint *)(&DAT_03d009a4 + (ulong)(uVar8 >> 0x18) * 4);
  param_2[0x1c] =
       *(uint *)(&DAT_03d001a4 + (ulong)(uVar9 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_03cffda4 + (ulong)(uVar9 & 0xff) * 4) ^
       *(uint *)(&DAT_03d005a4 + (ulong)(uVar9 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_03d009a4 + (ulong)(uVar9 >> 0x18) * 4);
  param_2[0x1d] = uVar1 ^ uVar14 ^ uVar15 ^ uVar8;
  uVar8 = ((uint)(((uVar11 >> 0x10 & 0xffffff) << 0x20) >> 8) | (uint)(uVar10 >> 0x10) & 0xffffff) +
          iVar3 + 0x432330e5;
  uVar1 = (((uint)(((uVar13 >> 0x10 & 0xffffff) << 0x20) >> 8) | (uint)(uVar12 >> 0x10) & 0xffffff)
          - iVar7) + 0xbcdccf1b;
  uVar9 = *(uint *)(&DAT_03cffda4 + (ulong)(uVar1 & 0xff) * 4);
  uVar14 = *(uint *)(&DAT_03d001a4 + (ulong)(uVar1 >> 8 & 0xff) * 4);
  uVar15 = *(uint *)(&DAT_03d005a4 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  uVar1 = *(uint *)(&DAT_03d009a4 + (ulong)(uVar1 >> 0x18) * 4);
  param_2[0x1e] =
       *(uint *)(&DAT_03d001a4 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_03cffda4 + (ulong)(uVar8 & 0xff) * 4) ^
       *(uint *)(&DAT_03d005a4 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
       *(uint *)(&DAT_03d009a4 + (ulong)(uVar8 >> 0x18) * 4);
  param_2[0x1f] = uVar14 ^ uVar9 ^ uVar15 ^ uVar1;
  return;
}


