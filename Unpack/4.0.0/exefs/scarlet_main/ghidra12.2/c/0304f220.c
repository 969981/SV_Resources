/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0304f220; name: FUN_0304f220
 */


void FUN_0304f220(float *param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lVar10;
  bool bVar11;
  long lVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  float fVar17;
  ulong uVar18;
  int iVar24;
  undefined1 auVar20 [16];
  int iVar23;
  int iVar25;
  undefined1 auVar21 [16];
  ulong uVar19;
  undefined1 auVar22 [16];
  uint uVar26;
  uint uVar27;
  undefined1 auVar28 [16];
  float fVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  float fVar40;
  uint uVar41;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  uint uVar42;
  float fVar43;
  float fVar44;
  uint uVar45;
  undefined8 uVar46;
  undefined1 auVar47 [12];
  undefined1 auVar48 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar59;
  undefined1 auVar60 [12];
  float fVar62;
  float fVar63;
  undefined1 auVar61 [16];
  float fVar64;
  uint uVar65;
  float fVar66;
  uint uVar67;
  undefined1 auVar68 [12];
  uint uVar73;
  float fVar74;
  float fVar76;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  uint uVar75;
  uint uVar77;
  undefined1 auVar72 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 auVar91 [12];
  undefined1 auVar92 [16];
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar102 [12];
  float fVar104;
  float fVar105;
  undefined1 auVar103 [16];
  float fVar106;
  uint uVar107;
  undefined1 auVar108 [12];
  uint uVar111;
  undefined1 auVar109 [16];
  uint uVar112;
  uint uVar113;
  undefined1 auVar110 [16];
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  byte local_3f0;
  byte bStack_3ef;
  byte bStack_3ee;
  byte bStack_3ed;
  byte local_3e0;
  byte bStack_3df;
  byte bStack_3de;
  byte bStack_3dd;
  byte local_3c0;
  byte bStack_3bf;
  byte bStack_3be;
  byte bStack_3bd;
  byte local_3a0;
  byte bStack_39f;
  byte bStack_39e;
  byte bStack_39d;
  byte local_360;
  byte bStack_35f;
  byte bStack_35e;
  byte bStack_35d;
  byte local_340;
  byte bStack_33f;
  byte bStack_33e;
  byte bStack_33d;
  byte local_310;
  byte bStack_30f;
  byte bStack_30e;
  byte bStack_30d;
  byte local_2f0;
  byte bStack_2ef;
  byte bStack_2ee;
  byte bStack_2ed;
  byte local_2d0;
  byte bStack_2cf;
  byte bStack_2ce;
  byte bStack_2cd;
  byte local_270;
  byte bStack_26f;
  byte bStack_26e;
  byte bStack_26d;
  byte local_250;
  byte bStack_24f;
  byte bStack_24e;
  byte bStack_24d;
  byte local_220;
  byte bStack_21f;
  byte bStack_21e;
  byte bStack_21d;
  float local_a4;
  
  *(float *)(param_2 + 0x1c) = param_1[0x24];
  *(float *)(param_2 + 0x74) = param_1[0x27];
  *(float *)(param_2 + 0xd8) = param_1[0x28];
  fVar13 = param_1[0x27];
  *(float *)(param_2 + 0x78) = 1.0 / fVar13;
  fVar17 = param_1[0x28];
  *(float *)(param_2 + 0xdc) = 1.0 / fVar17;
  fVar13 = (1.0 / fVar13) * param_1[0x25];
  *(float *)(param_2 + 0x68) = fVar13;
  fVar17 = (1.0 / fVar17) * param_1[0x26];
  *(float *)(param_2 + 0x6c) = 1.0 / fVar13;
  *(float *)(param_2 + 0xcc) = fVar17;
  *(float *)(param_2 + 0xd0) = 1.0 / fVar17;
  auVar109._0_4_ = *param_1 * param_1[0x10];
  auVar109._4_4_ = param_1[1] * param_1[0x11];
  auVar109._8_4_ = param_1[2] * param_1[0x12];
  auVar109._12_4_ = param_1[3] * param_1[0x13];
  lVar10 = 0;
  auVar48._0_4_ = param_1[0x10] * param_1[4];
  auVar48._4_4_ = param_1[0x11] * param_1[5];
  auVar48._8_4_ = param_1[0x12] * param_1[6];
  auVar48._12_4_ = param_1[0x13] * param_1[7];
  auVar33 = NEON_ext(auVar109,auVar109,8,1);
  auVar20 = NEON_ext(auVar48,auVar48,8,1);
  fVar13 = auVar48._0_4_ + auVar48._4_4_ + auVar20._0_4_;
  fVar17 = auVar109._0_4_ + auVar109._4_4_ + auVar33._0_4_;
  fVar29 = ABS(fVar17 - fVar13);
  fVar43 = 1.0 / fVar29;
  *(float *)(param_2 + 0x18) = fVar29;
  *(float *)(param_2 + 0x7c) = 1.0 - param_1[0x29];
  *(float *)(param_2 + 0x80) = param_1[0x29] * ABS(fVar43 * -fVar13);
  *(float *)(param_2 + 0xe0) = 1.0 - param_1[0x29];
  *(float *)(param_2 + 0xe4) = param_1[0x29] * ABS(fVar43 * fVar17);
  auVar20 = *(undefined1 (*) [16])(param_1 + 0xc);
  fVar13 = -param_1[0x27];
  bVar11 = true;
  auVar69._0_4_ = (*param_1 - param_1[8]) + param_1[0x14] * fVar13;
  auVar69._4_4_ = (param_1[1] - param_1[9]) + param_1[0x15] * fVar13;
  auVar69._8_4_ = (param_1[2] - param_1[10]) + param_1[0x16] * fVar13;
  auVar69._12_4_ = (param_1[3] - param_1[0xb]) + param_1[0x17] * fVar13;
  auVar48 = NEON_ext(auVar20,auVar20,8,1);
  uVar46 = NEON_ext(auVar20._0_8_,auVar48._0_8_,4,1);
  auVar48 = NEON_ext(auVar69,auVar69,4,1);
  fVar17 = (float)((ulong)uVar46 >> 0x20);
  fVar29 = auVar20._0_4_;
  fVar43 = auVar20._4_4_;
  auVar70._0_4_ = (float)uVar46 * auVar69._0_4_ - fVar29 * auVar48._0_4_;
  auVar70._4_4_ = fVar17 * auVar69._4_4_ - fVar43 * auVar48._4_4_;
  auVar70._8_4_ = fVar29 * auVar69._8_4_ - auVar20._8_4_ * auVar69._0_4_;
  auVar70._12_4_ = fVar43 * auVar69._12_4_ - auVar20._12_4_ * auVar69._4_4_;
  auVar48 = NEON_ext(auVar70,auVar70,4,1);
  fVar55 = (float)*(undefined8 *)(param_1 + 0x20);
  fVar44 = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  fVar57 = (float)*(undefined8 *)(param_1 + 0x22);
  fVar54 = (float)((ulong)*(undefined8 *)(param_1 + 0x22) >> 0x20);
  auVar71._0_4_ =
       auVar48._0_4_ *
       (param_1[0x18] * auVar70._4_4_ + param_1[0x1c] * auVar70._8_4_ + fVar55 * auVar70._0_4_);
  auVar71._4_4_ =
       auVar48._4_4_ *
       (param_1[0x19] * auVar70._4_4_ + param_1[0x1d] * auVar70._8_4_ + fVar44 * auVar70._0_4_);
  auVar71._8_4_ =
       auVar70._0_4_ *
       (param_1[0x1a] * auVar70._4_4_ + param_1[0x1e] * auVar70._8_4_ + fVar57 * auVar70._0_4_);
  auVar71._12_4_ =
       (param_1[0x1b] * auVar70._4_4_ + param_1[0x1f] * auVar70._8_4_ + fVar54 * auVar70._0_4_) *
       0.0;
  auVar48 = NEON_ext(auVar71,auVar71,8,1);
  fVar13 = *(float *)(param_2 + 0x1c) + auVar71._0_4_ + auVar71._4_4_ + auVar48._0_4_;
  fVar88 = -param_1[0x28];
  auVar34._0_4_ = (param_1[4] - param_1[8]) + param_1[0x14] * fVar88;
  auVar34._4_4_ = (param_1[5] - param_1[9]) + param_1[0x15] * fVar88;
  auVar34._8_4_ = (param_1[6] - param_1[10]) + param_1[0x16] * fVar88;
  auVar34._12_4_ = (param_1[7] - param_1[0xb]) + param_1[0x17] * fVar88;
  auVar48 = NEON_ext(auVar34,auVar34,4,1);
  auVar33._0_4_ = (float)uVar46 * auVar34._0_4_ - fVar29 * auVar48._0_4_;
  auVar33._4_4_ = fVar17 * auVar34._4_4_ - fVar43 * auVar48._4_4_;
  auVar33._8_4_ = fVar29 * auVar34._8_4_ - auVar20._8_4_ * auVar34._0_4_;
  auVar33._12_4_ = fVar43 * auVar34._12_4_ - auVar20._12_4_ * auVar34._4_4_;
  auVar48 = NEON_ext(auVar33,auVar33,4,1);
  auVar20._0_4_ =
       auVar48._0_4_ *
       (param_1[0x18] * auVar33._4_4_ + param_1[0x1c] * auVar33._8_4_ + fVar55 * auVar33._0_4_);
  auVar20._4_4_ =
       auVar48._4_4_ *
       (param_1[0x19] * auVar33._4_4_ + param_1[0x1d] * auVar33._8_4_ + fVar44 * auVar33._0_4_);
  auVar20._8_4_ =
       auVar33._0_4_ *
       (param_1[0x1a] * auVar33._4_4_ + param_1[0x1e] * auVar33._8_4_ + fVar57 * auVar33._0_4_);
  auVar20._12_4_ =
       (param_1[0x1b] * auVar33._4_4_ + param_1[0x1f] * auVar33._8_4_ + fVar54 * auVar33._0_4_) *
       0.0;
  auVar48 = NEON_ext(auVar20,auVar20,8,1);
  local_a4 = *(float *)(param_2 + 0x1c) + auVar20._0_4_ + auVar20._4_4_ + auVar48._0_4_;
  while( true ) {
    lVar12 = param_2 + lVar10 * 100;
    auVar48 = NEON_fmov(0x3f800000,4);
    auVar20 = NEON_fmov(0xc1b80000,4);
    fVar13 = fVar13 * *(float *)(lVar12 + 0x68);
    fVar17 = 0.0001;
    if (1.1920929e-07 <= fVar13) {
      fVar17 = fVar13;
    }
    fVar83 = fVar17 * 0.0625;
    fVar13 = 1.0 - fVar83;
    fVar29 = 1.0 / fVar83;
    uVar26 = -(uint)(fVar13 < 1.1754944e-38);
    uVar14 = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & uVar26;
    iVar23 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar24 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar25 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    uVar65 = -(uint)(fVar29 < 1.1754944e-38);
    uVar73 = -(uint)(fVar29 < 1.1754944e-38);
    uVar75 = -(uint)(fVar29 < 1.1754944e-38);
    uVar77 = -(uint)(fVar29 < 1.1754944e-38);
    auVar21._0_8_ =
         CONCAT17((char)((uint)iVar23 >> 0x18),
                  CONCAT16((char)((uint)iVar23 >> 0x10),
                           (uint6)((ushort)(uVar14 + 0xc0cb0000 >> 0x10) & 0xff80) << 0x10)) &
         0xff80ffffffffffff;
    auVar21._8_2_ = 0;
    auVar21[10] = (byte)((uint)iVar24 >> 0x10) & 0x80;
    auVar21[0xb] = (undefined1)((uint)iVar24 >> 0x18);
    auVar21._12_2_ = 0;
    auVar21[0xf] = (undefined1)((uint)iVar25 >> 0x18);
    auVar21[0xe] = (byte)((uint)iVar25 >> 0x10) & 0x80;
    fVar13 = (float)(uVar14 - (int)auVar21._0_8_);
    uVar14 = (uint)fVar29 ^ ((uint)fVar29 ^ (uint)(fVar29 * 8388608.0)) & uVar65;
    uVar15 = (uint)fVar29 ^ ((uint)fVar29 ^ (uint)(fVar29 * 8388608.0)) & uVar73;
    uVar27 = (uint)fVar29 ^ ((uint)fVar29 ^ (uint)(fVar29 * 8388608.0)) & uVar75;
    uVar67 = (uint)fVar29 ^ ((uint)fVar29 ^ (uint)(fVar29 * 8388608.0)) & uVar77;
    iVar23 = uVar15 + 0xc0cb0000;
    iVar24 = uVar27 + 0xc0cb0000;
    iVar25 = uVar67 + 0xc0cb0000;
    fVar101 = auVar48._0_4_;
    fVar40 = auVar48._4_4_;
    fVar104 = auVar48._8_4_;
    fVar105 = auVar48._12_4_;
    auVar60._0_8_ =
         CONCAT17((char)((uint)iVar23 >> 0x18),
                  CONCAT16((char)((uint)iVar23 >> 0x10),
                           (uint6)((ushort)(uVar14 + 0xc0cb0000 >> 0x10) & 0xff80) << 0x10)) &
         0xff80ffffffffffff;
    auVar60._8_2_ = 0;
    auVar60[10] = (byte)((uint)iVar24 >> 0x10) & 0x80;
    auVar60[0xb] = (undefined1)((uint)iVar24 >> 0x18);
    auVar61._12_2_ = 0;
    auVar61._0_12_ = auVar60;
    auVar61[0xf] = (undefined1)((uint)iVar25 >> 0x18);
    auVar61[0xe] = (byte)((uint)iVar25 >> 0x10) & 0x80;
    fVar29 = fVar101 / (fVar13 + fVar101);
    auVar109 = NEON_fmov(0xbf800000,4);
    auVar48 = NEON_scvtf(auVar21,4);
    fVar43 = (float)(uVar14 - (int)auVar60._0_8_);
    fVar88 = (float)(uVar15 - (int)(auVar60._0_8_ >> 0x20));
    fVar55 = (float)(uVar27 - auVar60._8_4_);
    fVar57 = (float)(uVar67 - auVar61._12_4_);
    fVar90 = auVar109._0_4_;
    fVar13 = fVar13 + fVar90;
    bVar84 = auVar20[0];
    bVar85 = auVar20[1];
    bVar86 = auVar20[2];
    bVar87 = auVar20[3];
    fVar44 = fVar43 + fVar90;
    fVar54 = fVar88 + auVar109._4_4_;
    fVar56 = fVar55 + auVar109._8_4_;
    fVar58 = fVar57 + auVar109._12_4_;
    fVar59 = (float)CONCAT13(bVar87 & (byte)(uVar65 >> 0x18),
                             CONCAT12(bVar86 & (byte)(uVar65 >> 0x10),
                                      CONCAT11(bVar85 & (byte)(uVar65 >> 8),bVar84 & (byte)uVar65)))
    ;
    auVar68._0_8_ =
         CONCAT17(auVar20[7] & (byte)(uVar73 >> 0x18),
                  CONCAT16(auVar20[6] & (byte)(uVar73 >> 0x10),
                           CONCAT15(auVar20[5] & (byte)(uVar73 >> 8),
                                    CONCAT14(auVar20[4] & (byte)uVar73,fVar59))));
    auVar68[8] = auVar20[8] & (byte)uVar75;
    auVar68[9] = auVar20[9] & (byte)(uVar75 >> 8);
    auVar68[10] = auVar20[10] & (byte)(uVar75 >> 0x10);
    auVar68[0xb] = auVar20[0xb] & (byte)(uVar75 >> 0x18);
    auVar72[0xc] = auVar20[0xc] & (byte)uVar77;
    auVar72._0_12_ = auVar68;
    auVar72[0xd] = auVar20[0xd] & (byte)(uVar77 >> 8);
    auVar72[0xe] = auVar20[0xe] & (byte)(uVar77 >> 0x10);
    auVar72[0xf] = auVar20[0xf] & (byte)(uVar77 >> 0x18);
    fVar106 = (float)CONCAT13(bVar87 & (byte)(uVar26 >> 0x18),
                              CONCAT12(bVar86 & (byte)(uVar26 >> 0x10),
                                       CONCAT11(bVar85 & (byte)(uVar26 >> 8),bVar84 & (byte)uVar26))
                             ) + auVar48._0_4_ * 1.1920929e-07;
    fVar43 = fVar101 / (fVar43 + fVar101);
    fVar88 = fVar40 / (fVar88 + fVar40);
    fVar55 = fVar104 / (fVar55 + fVar104);
    fVar57 = fVar105 / (fVar57 + fVar105);
    auVar48 = NEON_scvtf(auVar61,4);
    fVar119 = fVar106 * 0.3465736;
    fVar59 = fVar59 + auVar48._0_4_ * 1.1920929e-07;
    fVar62 = (float)((ulong)auVar68._0_8_ >> 0x20) + auVar48._4_4_ * 1.1920929e-07;
    fVar63 = auVar68._8_4_ + auVar48._8_4_ * 1.1920929e-07;
    fVar64 = auVar72._12_4_ + auVar48._12_4_ * 1.1920929e-07;
    fVar66 = fVar59 * 0.3465736;
    fVar74 = fVar62 * 0.3465736;
    fVar76 = fVar63 * 0.3465736;
    fVar78 = fVar64 * 0.3465736;
    fVar121 = fVar13 * fVar29;
    fVar123 = fVar121 * fVar121;
    fVar93 = fVar44 * fVar43;
    fVar95 = fVar54 * fVar88;
    fVar97 = fVar56 * fVar55;
    fVar99 = fVar58 * fVar57;
    fVar29 = fVar29 * ((0.0 - fVar13) * fVar121 + (fVar13 - (fVar121 + fVar121)));
    fVar89 = fVar119 + fVar121;
    fVar13 = fVar121 * fVar123;
    fVar43 = fVar43 * ((0.0 - fVar44) * fVar93 + (fVar44 - (fVar93 + fVar93)));
    fVar88 = fVar88 * ((0.0 - fVar54) * fVar95 + (fVar54 - (fVar95 + fVar95)));
    fVar55 = fVar55 * ((0.0 - fVar56) * fVar97 + (fVar56 - (fVar97 + fVar97)));
    fVar57 = fVar57 * ((0.0 - fVar58) * fVar99 + (fVar58 - (fVar99 + fVar99)));
    fVar79 = fVar93 * fVar93;
    fVar80 = fVar95 * fVar95;
    fVar81 = fVar97 * fVar97;
    fVar82 = fVar99 * fVar99;
    fVar122 = fVar123 * (fVar123 * (fVar123 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar124 = fVar66 + fVar93;
    fVar125 = fVar74 + fVar95;
    fVar126 = fVar76 + fVar97;
    fVar127 = fVar78 + fVar99;
    fVar94 = fVar93 * fVar79;
    fVar96 = fVar95 * fVar80;
    fVar98 = fVar97 * fVar81;
    fVar100 = fVar99 * fVar82;
    fVar44 = fVar79 * (fVar79 * (fVar79 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar54 = fVar80 * (fVar80 * (fVar80 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar56 = fVar81 * (fVar81 * (fVar81 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar58 = fVar82 * (fVar82 * (fVar82 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar13 = ((fVar121 - (fVar89 - fVar119)) +
             fVar13 * fVar122 +
             fVar29 + fVar122 * (fVar123 * fVar29 +
                                fVar13 + (0.0 - fVar13) +
                                fVar121 * (fVar123 + (0.0 - fVar123) + fVar121 * (fVar29 + fVar29)))
             ) - fVar106 * 9.523271e-10;
    fVar106 = 1.0 / fVar17;
    fVar29 = ((fVar93 - (fVar124 - fVar66)) +
             fVar94 * fVar44 +
             fVar43 + fVar44 * (fVar79 * fVar43 +
                               fVar94 + (0.0 - fVar94) +
                               fVar93 * (fVar79 + (0.0 - fVar79) + fVar93 * (fVar43 + fVar43)))) -
             fVar59 * 9.523271e-10;
    fVar44 = ((fVar95 - (fVar125 - fVar74)) +
             fVar96 * fVar54 +
             fVar88 + fVar54 * (fVar80 * fVar88 +
                               fVar96 + (0.0 - fVar96) +
                               fVar95 * (fVar80 + (0.0 - fVar80) + fVar95 * (fVar88 + fVar88)))) -
             fVar62 * 9.523271e-10;
    fVar43 = ((fVar97 - (fVar126 - fVar76)) +
             fVar98 * fVar56 +
             fVar55 + fVar56 * (fVar81 * fVar55 +
                               fVar98 + (0.0 - fVar98) +
                               fVar97 * (fVar81 + (0.0 - fVar81) + fVar97 * (fVar55 + fVar55)))) -
             fVar63 * 9.523271e-10;
    fVar88 = ((fVar99 - (fVar127 - fVar78)) +
             fVar100 * fVar58 +
             fVar57 + fVar58 * (fVar82 * fVar57 +
                               fVar100 + (0.0 - fVar100) +
                               fVar99 * (fVar82 + (0.0 - fVar82) + fVar99 * (fVar57 + fVar57)))) -
             fVar64 * 9.523271e-10;
    fVar98 = (fVar89 + fVar89 + fVar13 + fVar13) * fVar106;
    fVar13 = (fVar124 + fVar124 + fVar29 + fVar29) * 0.06666667;
    fVar29 = (fVar126 + fVar126 + fVar43 + fVar43) * 0.06666667;
    fVar43 = (fVar127 + fVar127 + fVar88 + fVar88) * 0.06666667;
    fVar88 = fVar98 * 1.442695 + 12582912.0 + -12582912.0;
    fVar55 = fVar13 * 1.442695 + 12582912.0 + -12582912.0;
    fVar57 = fVar29 * 1.442695 + 12582912.0 + -12582912.0;
    fVar54 = fVar43 * 1.442695 + 12582912.0 + -12582912.0;
    fVar56 = (fVar98 - fVar88 * 0.69314575) - fVar88 * 1.4286068e-06;
    fVar58 = (fVar13 - fVar55 * 0.69314575) - fVar55 * 1.4286068e-06;
    fVar59 = (fVar29 - fVar57 * 0.69314575) - fVar57 * 1.4286068e-06;
    fVar43 = (fVar43 - fVar54 * 0.69314575) - fVar54 * 1.4286068e-06;
    uVar14 = (uint)(~(byte)(-(uint)(0 < (int)fVar88) >> 0x18) & 0x83);
    uVar18 = (ulong)(uint)((fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * 0.0013818741
                                                                             + 0.0083752265) +
                                                                   0.041669395) + 0.1666645) +
                                               0.49999982) + fVar101) + fVar101) *
                           (float)(uVar14 * 0x1000000 + 0x7f000000) *
                          (float)((int)fVar88 * 0x800000 + uVar14 * -0x1000000));
    auVar47._0_8_ =
         CONCAT17(~(byte)(-(uint)(0 < (int)((fVar125 + fVar125 + fVar44 + fVar44) * 0.06666667 *
                                            1.442695 + 12582912.0 + -12582912.0)) >> 0x18),
                  (uint7)(~(byte)(-(uint)(0 < (int)fVar55) >> 0x18) & 0x83) << 0x18) &
         0x83ffffffffffffff;
    auVar47._8_3_ = 0;
    auVar47[0xb] = ~(byte)(-(uint)(0 < (int)fVar57) >> 0x18) & 0x83;
    auVar49._12_3_ = 0;
    auVar49._0_12_ = auVar47;
    auVar49[0xf] = ~(byte)(-(uint)(0 < (int)fVar54) >> 0x18) & 0x83;
    uVar18 = uVar18 ^ (uVar18 ^ 0x7f7fffee) & (ulong)-(uint)(88.72 < fVar98);
    auVar8._4_4_ = 0;
    auVar8._0_4_ = -(uint)(88.72 < fVar13);
    auVar8._8_4_ = -(uint)(88.72 < fVar29);
    auVar28._0_4_ =
         (fVar58 * (fVar58 * (fVar58 * (fVar58 * (fVar58 * (fVar58 * 0.0013818741 + 0.0083752265) +
                                                 0.041669395) + 0.1666645) + 0.49999982) + fVar101)
         + fVar101) * (float)((int)auVar47._0_8_ + 0x7f000000) *
         (float)((int)fVar55 * 0x800000 - (int)auVar47._0_8_);
    auVar28._4_4_ = 0;
    auVar28._8_4_ =
         (fVar59 * (fVar59 * (fVar59 * (fVar59 * (fVar59 * (fVar59 * 0.0013818741 + 0.0083752265) +
                                                 0.041669395) + 0.1666645) + 0.0) + fVar104) +
         fVar104) * (float)(auVar47._8_4_ + 0x7f000000) *
         (float)((int)fVar57 * 0x800000 - auVar47._8_4_);
    auVar28._12_4_ =
         (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * 0.0013818741 + 0.0083752265) +
                                                 0.041669395) + 0.1666645) + 0.0) + fVar105) +
         fVar105) * (float)(auVar49._12_4_ + 0x7f000000) *
         (float)((int)fVar54 * 0x800000 - auVar49._12_4_);
    iVar23 = -(uint)(fVar13 < -87.33);
    auVar8._12_4_ = 0;
    auVar28 = auVar28 ^ (auVar28 ^ ZEXT816(0x7f7fffee)) & auVar8;
    fVar63 = (float)CONCAT13(auVar28[3] & ~(byte)((uint)iVar23 >> 0x18),
                             CONCAT12(auVar28[2] & ~(byte)((uint)iVar23 >> 0x10),
                                      CONCAT11(auVar28[1] & ~(byte)((uint)iVar23 >> 8),
                                               auVar28[0] & ~(byte)iVar23)));
    fVar29 = 1.0 - fVar83 * fVar63;
    fVar62 = fVar83 * fVar63 * fVar63;
    uVar26 = -(uint)(fVar29 < 1.1754944e-38);
    uVar75 = (uint)fVar29 ^ ((uint)fVar29 ^ (uint)(fVar29 * 8388608.0)) & uVar26;
    fVar43 = 1.0 - fVar62;
    uVar67 = -(uint)(fVar43 < 1.1754944e-38);
    uVar27 = (uint)fVar43 ^ ((uint)fVar43 ^ (uint)(fVar43 * 8388608.0)) & uVar67;
    fVar62 = fVar62 * fVar63;
    fVar13 = 1.0 - fVar62;
    fVar62 = fVar62 * fVar63;
    fVar88 = 1.0 - fVar62;
    uVar14 = -(uint)(fVar13 < 1.1754944e-38);
    uVar73 = -(uint)(fVar88 < 1.1754944e-38);
    uVar15 = (uint)(fVar13 * 8388608.0) ^ ((uint)(fVar13 * 8388608.0) ^ (uint)fVar13) & ~uVar14;
    uVar65 = (uint)(fVar88 * 8388608.0) ^ ((uint)(fVar88 * 8388608.0) ^ (uint)fVar88) & ~uVar73;
    iVar23 = ((uint)fVar29 ^
             ((uint)fVar29 ^ (uint)(fVar29 * 8388608.0)) & -(uint)(fVar29 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar24 = ((uint)fVar29 ^
             ((uint)fVar29 ^ (uint)(fVar29 * 8388608.0)) & -(uint)(fVar29 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar25 = ((uint)fVar29 ^
             ((uint)fVar29 ^ (uint)(fVar29 * 8388608.0)) & -(uint)(fVar29 < 1.1754944e-38)) +
             0xc0cb0000;
    uVar5 = (ushort)(uVar75 + 0xc0cb0000 >> 0x10);
    auVar1._8_2_ = 0;
    auVar1._0_8_ = CONCAT17((char)((uint)iVar23 >> 0x18),
                            CONCAT16((char)((uint)iVar23 >> 0x10),(uint6)(uVar5 & 0xff80) << 0x10))
                   & 0xff80ffffffffffff;
    auVar1[10] = (byte)((uint)iVar24 >> 0x10) & 0x80;
    auVar1[0xb] = (char)((uint)iVar24 >> 0x18);
    auVar1._12_2_ = 0;
    auVar1[0xe] = (byte)((uint)iVar25 >> 0x10) & 0x80;
    auVar1[0xf] = (char)((uint)iVar25 >> 0x18);
    auVar48 = NEON_scvtf(auVar1,4);
    fVar64 = (float)CONCAT13(bVar87 & (byte)(uVar26 >> 0x18),
                             CONCAT12(bVar86 & (byte)(uVar26 >> 0x10),
                                      CONCAT11(bVar85 & (byte)(uVar26 >> 8),bVar84 & (byte)uVar26)))
             + auVar48._0_4_ * 1.1920929e-07;
    iVar23 = ((uint)fVar43 ^
             ((uint)fVar43 ^ (uint)(fVar43 * 8388608.0)) & -(uint)(fVar43 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar24 = ((uint)fVar43 ^
             ((uint)fVar43 ^ (uint)(fVar43 * 8388608.0)) & -(uint)(fVar43 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar25 = ((uint)fVar43 ^
             ((uint)fVar43 ^ (uint)(fVar43 * 8388608.0)) & -(uint)(fVar43 < 1.1754944e-38)) +
             0xc0cb0000;
    uVar6 = (ushort)(uVar27 + 0xc0cb0000 >> 0x10);
    auVar2._8_2_ = 0;
    auVar2._0_8_ = CONCAT17((char)((uint)iVar23 >> 0x18),
                            CONCAT16((char)((uint)iVar23 >> 0x10),(uint6)(uVar6 & 0xff80) << 0x10))
                   & 0xff80ffffffffffff;
    auVar2[10] = (byte)((uint)iVar24 >> 0x10) & 0x80;
    auVar2[0xb] = (char)((uint)iVar24 >> 0x18);
    auVar2._12_2_ = 0;
    auVar2[0xe] = (byte)((uint)iVar25 >> 0x10) & 0x80;
    auVar2[0xf] = (char)((uint)iVar25 >> 0x18);
    auVar48 = NEON_scvtf(auVar2,4);
    fVar29 = (float)(uVar27 + (uint)(uVar6 & 0xff80) * -0x10000);
    fVar121 = (float)CONCAT13(bVar87 & (byte)(uVar67 >> 0x18),
                              CONCAT12(bVar86 & (byte)(uVar67 >> 0x10),
                                       CONCAT11(bVar85 & (byte)(uVar67 >> 8),bVar84 & (byte)uVar67))
                             ) + auVar48._0_4_ * 1.1920929e-07;
    iVar23 = ((uint)(fVar13 * 8388608.0) ^
             ((uint)(fVar13 * 8388608.0) ^ (uint)fVar13) & ~-(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar24 = ((uint)(fVar13 * 8388608.0) ^
             ((uint)(fVar13 * 8388608.0) ^ (uint)fVar13) & ~-(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar25 = ((uint)(fVar13 * 8388608.0) ^
             ((uint)(fVar13 * 8388608.0) ^ (uint)fVar13) & ~-(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    uVar6 = (ushort)(uVar15 + 0xc0cb0000 >> 0x10);
    auVar3._8_2_ = 0;
    auVar3._0_8_ = CONCAT17((char)((uint)iVar23 >> 0x18),
                            CONCAT16((char)((uint)iVar23 >> 0x10),(uint6)(uVar6 & 0xff80) << 0x10))
                   & 0xff80ffffffffffff;
    auVar3[10] = (byte)((uint)iVar24 >> 0x10) & 0x80;
    auVar3[0xb] = (char)((uint)iVar24 >> 0x18);
    auVar3._12_2_ = 0;
    auVar3[0xe] = (byte)((uint)iVar25 >> 0x10) & 0x80;
    auVar3[0xf] = (char)((uint)iVar25 >> 0x18);
    auVar48 = NEON_scvtf(auVar3,4);
    fVar43 = (float)(uVar15 + (uint)(uVar6 & 0xff80) * -0x10000);
    fVar81 = (float)CONCAT13(bVar87 & (byte)(uVar14 >> 0x18),
                             CONCAT12(bVar86 & (byte)(uVar14 >> 0x10),
                                      CONCAT11(bVar85 & (byte)(uVar14 >> 8),bVar84 & (byte)uVar14)))
             + auVar48._0_4_ * 1.1920929e-07;
    iVar23 = ((uint)(fVar88 * 8388608.0) ^
             ((uint)(fVar88 * 8388608.0) ^ (uint)fVar88) & ~-(uint)(fVar88 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar24 = ((uint)(fVar88 * 8388608.0) ^
             ((uint)(fVar88 * 8388608.0) ^ (uint)fVar88) & ~-(uint)(fVar88 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar25 = ((uint)(fVar88 * 8388608.0) ^
             ((uint)(fVar88 * 8388608.0) ^ (uint)fVar88) & ~-(uint)(fVar88 < 1.1754944e-38)) +
             0xc0cb0000;
    uVar6 = (ushort)(uVar65 + 0xc0cb0000 >> 0x10);
    auVar4._8_2_ = 0;
    auVar4._0_8_ = CONCAT17((char)((uint)iVar23 >> 0x18),
                            CONCAT16((char)((uint)iVar23 >> 0x10),(uint6)(uVar6 & 0xff80) << 0x10))
                   & 0xff80ffffffffffff;
    auVar4[10] = (byte)((uint)iVar24 >> 0x10) & 0x80;
    auVar4[0xb] = (char)((uint)iVar24 >> 0x18);
    auVar4._12_2_ = 0;
    auVar4[0xe] = (byte)((uint)iVar25 >> 0x10) & 0x80;
    auVar4[0xf] = (char)((uint)iVar25 >> 0x18);
    auVar48 = NEON_scvtf(auVar4,4);
    fVar80 = (float)CONCAT13(bVar87 & (byte)(uVar73 >> 0x18),
                             CONCAT12(bVar86 & (byte)(uVar73 >> 0x10),
                                      CONCAT11(bVar85 & (byte)(uVar73 >> 8),bVar84 & (byte)uVar73)))
             + auVar48._0_4_ * 1.1920929e-07;
    fVar13 = (float)(uVar75 + (uint)(uVar5 & 0xff80) * -0x10000);
    fVar55 = (float)(uVar65 + (uint)(uVar6 & 0xff80) * -0x10000);
    fVar88 = fVar13 + fVar90;
    fVar13 = fVar101 / (fVar13 + fVar101);
    fVar94 = fVar88 * fVar13;
    fVar13 = fVar13 * ((0.0 - fVar88) * fVar94 + (fVar88 - (fVar94 + fVar94)));
    fVar88 = fVar29 + fVar90;
    fVar29 = fVar101 / (fVar29 + fVar101);
    fVar44 = fVar88 * fVar29;
    fVar29 = fVar29 * ((0.0 - fVar88) * fVar44 + (fVar88 - (fVar44 + fVar44)));
    fVar88 = fVar43 + fVar90;
    fVar43 = fVar101 / (fVar43 + fVar101);
    fVar54 = fVar88 * fVar43;
    fVar43 = fVar43 * ((0.0 - fVar88) * fVar54 + (fVar88 - (fVar54 + fVar54)));
    fVar57 = fVar55 + fVar90;
    fVar88 = fVar101 / (fVar55 + fVar101);
    fVar58 = fVar57 * fVar88;
    fVar100 = fVar94 * fVar94;
    fVar88 = fVar88 * ((0.0 - fVar57) * fVar58 + (fVar57 - (fVar58 + fVar58)));
    fVar55 = fVar44 * fVar44;
    fVar99 = fVar64 * 0.3465736;
    fVar97 = fVar99 + fVar94;
    fVar95 = fVar94 * fVar100;
    fVar123 = fVar54 * fVar54;
    fVar119 = fVar121 * 0.3465736;
    fVar74 = fVar100 * (fVar100 * (fVar100 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar122 = fVar119 + fVar44;
    fVar57 = fVar44 * fVar55;
    fVar78 = fVar58 * fVar58;
    fVar96 = fVar81 * 0.3465736;
    fVar82 = fVar55 * (fVar55 * (fVar55 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar79 = fVar96 + fVar54;
    fVar56 = fVar54 * fVar123;
    fVar89 = fVar123 * (fVar123 * (fVar123 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar66 = fVar80 * 0.3465736;
    fVar76 = fVar66 + fVar58;
    fVar59 = fVar58 * fVar78;
    fVar93 = fVar78 * (fVar78 * (fVar78 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar64 = ((fVar94 - (fVar97 - fVar99)) +
             fVar95 * fVar74 +
             fVar13 + fVar74 * (fVar100 * fVar13 +
                               fVar95 + (0.0 - fVar95) +
                               fVar94 * (fVar100 + (0.0 - fVar100) + fVar94 * (fVar13 + fVar13)))) -
             fVar64 * 9.523271e-10;
    fVar55 = ((fVar44 - (fVar122 - fVar119)) +
             fVar57 * fVar82 +
             fVar29 + fVar82 * (fVar55 * fVar29 +
                               fVar57 + (0.0 - fVar57) +
                               fVar44 * (fVar55 + (0.0 - fVar55) + fVar44 * (fVar29 + fVar29)))) -
             fVar121 * 9.523271e-10;
    fVar13 = ((fVar54 - (fVar79 - fVar96)) +
             fVar56 * fVar89 +
             fVar43 + fVar89 * (fVar123 * fVar43 +
                               fVar56 + (0.0 - fVar56) +
                               fVar54 * (fVar123 + (0.0 - fVar123) + fVar54 * (fVar43 + fVar43)))) -
             fVar81 * 9.523271e-10;
    fVar64 = (fVar97 + fVar97 + fVar64 + fVar64) * fVar106;
    fVar43 = ((fVar58 - (fVar76 - fVar66)) +
             fVar59 * fVar93 +
             fVar88 + fVar93 * (fVar78 * fVar88 +
                               fVar59 + (0.0 - fVar59) +
                               fVar58 * (fVar78 + (0.0 - fVar78) + fVar58 * (fVar88 + fVar88)))) -
             fVar80 * 9.523271e-10;
    fVar29 = fVar64 * 1.442695 + 12582912.0 + -12582912.0;
    fVar66 = (fVar122 + fVar122 + fVar55 + fVar55) * fVar106;
    fVar88 = (fVar64 - fVar29 * 0.69314575) - fVar29 * 1.4286068e-06;
    fVar55 = fVar66 * 1.442695 + 12582912.0 + -12582912.0;
    fVar74 = (fVar79 + fVar79 + fVar13 + fVar13) * fVar106;
    fVar44 = (fVar66 - fVar55 * 0.69314575) - fVar55 * 1.4286068e-06;
    fVar13 = fVar74 * 1.442695 + 12582912.0 + -12582912.0;
    fVar57 = (fVar74 - fVar13 * 0.69314575) - fVar13 * 1.4286068e-06;
    uVar14 = (uint)(~(byte)(-(uint)(0 < (int)fVar29) >> 0x18) & 0x83);
    fVar29 = (fVar88 * (fVar88 * (fVar88 * (fVar88 * (fVar88 * (fVar88 * 0.0013818741 + 0.0083752265
                                                               ) + 0.041669395) + 0.1666645) +
                                 0.49999982) + fVar101) + fVar101) *
             (float)(uVar14 * 0x1000000 + 0x7f000000) *
             (float)((int)fVar29 * 0x800000 + uVar14 * -0x1000000);
    uVar14 = (uint)(~(byte)(-(uint)(0 < (int)fVar55) >> 0x18) & 0x83);
    uVar27 = (uint)fVar29 ^ ((uint)fVar29 ^ 0x7f7fffee) & -(uint)(88.72 < fVar64);
    uVar26 = (uint)(~(byte)(-(uint)(0 < (int)fVar13) >> 0x18) & 0x83);
    fVar29 = (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * 0.0013818741 + 0.0083752265
                                                               ) + 0.041669395) + 0.1666645) +
                                 0.49999982) + fVar101) + fVar101) *
             (float)(uVar14 * 0x1000000 + 0x7f000000) *
             (float)((int)fVar55 * 0x800000 + uVar14 * -0x1000000);
    uVar67 = (uint)fVar29 ^ ((uint)fVar29 ^ 0x7f7fffee) & -(uint)(88.72 < fVar66);
    fVar13 = (fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * 0.0013818741 + 0.0083752265
                                                               ) + 0.041669395) + 0.1666645) +
                                 0.49999982) + fVar101) + fVar101) *
             (float)(uVar26 * 0x1000000 + 0x7f000000) *
             (float)((int)fVar13 * 0x800000 + uVar26 * -0x1000000);
    fVar76 = (fVar76 + fVar76 + fVar43 + fVar43) * fVar106;
    uVar26 = (uint)fVar13 ^ ((uint)fVar13 ^ 0x7f7fffee) & -(uint)(88.72 < fVar74);
    fVar13 = fVar76 * 1.442695 + 12582912.0 + -12582912.0;
    fVar29 = (fVar76 - fVar13 * 0.69314575) - fVar13 * 1.4286068e-06;
    uVar14 = (uint)(~(byte)(-(uint)(0 < (int)fVar13) >> 0x18) & 0x83);
    fVar13 = (fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * 0.0013818741 + 0.0083752265
                                                               ) + 0.041669395) + 0.1666645) +
                                 0.49999982) + fVar101) + fVar101) *
             (float)(uVar14 * 0x1000000 + 0x7f000000) *
             (float)((int)fVar13 * 0x800000 + uVar14 * -0x1000000);
    uVar15 = (uint)fVar13 ^ ((uint)fVar13 ^ 0x7f7fffee) & -(uint)(88.72 < fVar76);
    fVar62 = fVar62 * fVar63;
    fVar13 = 1.0 - fVar62;
    fVar62 = fVar62 * fVar63;
    uVar65 = -(uint)(fVar13 < 1.1754944e-38);
    uVar14 = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & uVar65;
    iVar23 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar24 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar25 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    auVar35._0_8_ =
         CONCAT17((char)((uint)iVar23 >> 0x18),
                  CONCAT16((char)((uint)iVar23 >> 0x10),
                           (uint6)((ushort)(uVar14 + 0xc0cb0000 >> 0x10) & 0xff80) << 0x10)) &
         0xff80ffffffffffff;
    auVar35._8_2_ = 0;
    auVar35[10] = (byte)((uint)iVar24 >> 0x10) & 0x80;
    auVar35[0xb] = (undefined1)((uint)iVar24 >> 0x18);
    auVar35._12_2_ = 0;
    auVar35[0xf] = (undefined1)((uint)iVar25 >> 0x18);
    auVar35[0xe] = (byte)((uint)iVar25 >> 0x10) & 0x80;
    fVar13 = (float)(uVar14 - (int)auVar35._0_8_);
    auVar48 = NEON_scvtf(auVar35,4);
    fVar29 = fVar13 + fVar90;
    fVar13 = fVar101 / (fVar13 + fVar101);
    fVar88 = (float)CONCAT13(bVar87 & (byte)(uVar65 >> 0x18),
                             CONCAT12(bVar86 & (byte)(uVar65 >> 0x10),
                                      CONCAT11(bVar85 & (byte)(uVar65 >> 8),bVar84 & (byte)uVar65)))
             + auVar48._0_4_ * 1.1920929e-07;
    fVar55 = fVar29 * fVar13;
    fVar13 = fVar13 * ((0.0 - fVar29) * fVar55 + (fVar29 - (fVar55 + fVar55)));
    fVar29 = fVar55 * fVar55;
    fVar54 = fVar55 * fVar29;
    fVar44 = fVar29 * (fVar29 * (fVar29 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar43 = fVar88 * 0.3465736;
    fVar57 = fVar43 + fVar55;
    fVar13 = ((fVar55 - (fVar57 - fVar43)) +
             fVar54 * fVar44 +
             fVar13 + fVar44 * (fVar29 * fVar13 +
                               fVar54 + (0.0 - fVar54) +
                               fVar55 * (fVar29 + (0.0 - fVar29) + fVar55 * (fVar13 + fVar13)))) -
             fVar88 * 9.523271e-10;
    fVar89 = (fVar57 + fVar57 + fVar13 + fVar13) * fVar106;
    fVar13 = fVar89 * 1.442695 + 12582912.0 + -12582912.0;
    fVar29 = (fVar89 - fVar13 * 0.69314575) - fVar13 * 1.4286068e-06;
    uVar14 = (uint)(~(byte)(-(uint)(0 < (int)fVar13) >> 0x18) & 0x83);
    fVar13 = (fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * 0.0013818741 + 0.0083752265
                                                               ) + 0.041669395) + 0.1666645) +
                                 0.49999982) + fVar101) + fVar101) *
             (float)(uVar14 * 0x1000000 + 0x7f000000) *
             (float)((int)fVar13 * 0x800000 + uVar14 * -0x1000000);
    uVar65 = (uint)fVar13 ^ ((uint)fVar13 ^ 0x7f7fffee) & -(uint)(88.72 < fVar89);
    fVar13 = 1.0 - fVar62;
    uVar73 = -(uint)(fVar13 < 1.1754944e-38);
    uVar14 = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & uVar73;
    iVar23 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar24 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar25 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    auVar36._0_8_ =
         CONCAT17((char)((uint)iVar23 >> 0x18),
                  CONCAT16((char)((uint)iVar23 >> 0x10),
                           (uint6)((ushort)(uVar14 + 0xc0cb0000 >> 0x10) & 0xff80) << 0x10)) &
         0xff80ffffffffffff;
    auVar36._8_2_ = 0;
    auVar36[10] = (byte)((uint)iVar24 >> 0x10) & 0x80;
    auVar36[0xb] = (undefined1)((uint)iVar24 >> 0x18);
    auVar36._12_2_ = 0;
    auVar36[0xf] = (undefined1)((uint)iVar25 >> 0x18);
    auVar36[0xe] = (byte)((uint)iVar25 >> 0x10) & 0x80;
    fVar13 = (float)(uVar14 - (int)auVar36._0_8_);
    auVar48 = NEON_scvtf(auVar36,4);
    fVar29 = fVar13 + fVar90;
    fVar13 = fVar101 / (fVar13 + fVar101);
    fVar88 = (float)CONCAT13(bVar87 & (byte)(uVar73 >> 0x18),
                             CONCAT12(bVar86 & (byte)(uVar73 >> 0x10),
                                      CONCAT11(bVar85 & (byte)(uVar73 >> 8),bVar84 & (byte)uVar73)))
             + auVar48._0_4_ * 1.1920929e-07;
    fVar55 = fVar29 * fVar13;
    fVar13 = fVar13 * ((0.0 - fVar29) * fVar55 + (fVar29 - (fVar55 + fVar55)));
    fVar29 = fVar55 * fVar55;
    fVar54 = fVar55 * fVar29;
    fVar44 = fVar29 * (fVar29 * (fVar29 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar43 = fVar88 * 0.3465736;
    fVar57 = fVar43 + fVar55;
    fVar13 = ((fVar55 - (fVar57 - fVar43)) +
             fVar54 * fVar44 +
             fVar13 + fVar44 * (fVar29 * fVar13 +
                               fVar54 + (0.0 - fVar54) +
                               fVar55 * (fVar29 + (0.0 - fVar29) + fVar55 * (fVar13 + fVar13)))) -
             fVar88 * 9.523271e-10;
    fVar93 = (fVar57 + fVar57 + fVar13 + fVar13) * fVar106;
    fVar13 = fVar93 * 1.442695 + 12582912.0 + -12582912.0;
    fVar29 = (fVar93 - fVar13 * 0.69314575) - fVar13 * 1.4286068e-06;
    fVar62 = fVar62 * fVar63;
    uVar14 = (uint)(~(byte)(-(uint)(0 < (int)fVar13) >> 0x18) & 0x83);
    fVar13 = (fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * 0.0013818741 + 0.0083752265
                                                               ) + 0.041669395) + 0.1666645) +
                                 0.49999982) + fVar101) + fVar101) *
             (float)(uVar14 * 0x1000000 + 0x7f000000) *
             (float)((int)fVar13 * 0x800000 + uVar14 * -0x1000000);
    uVar73 = (uint)fVar13 ^ ((uint)fVar13 ^ 0x7f7fffee) & -(uint)(88.72 < fVar93);
    fVar13 = 1.0 - fVar62;
    uVar75 = -(uint)(fVar13 < 1.1754944e-38);
    uVar14 = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & uVar75;
    iVar23 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar24 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar25 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    uVar7 = CONCAT17((char)((uint)iVar23 >> 0x18),
                     CONCAT16((char)((uint)iVar23 >> 0x10),
                              (uint6)((uVar14 + 0xc0cb0000 >> 0x10 & 0xff80) << 0x10))) &
            0xff8000ffffffffff;
    auVar37._8_2_ = 0;
    auVar37._0_8_ = uVar7;
    auVar37[10] = (byte)((uint)iVar24 >> 0x10) & 0x80;
    auVar37[0xb] = (undefined1)((uint)iVar24 >> 0x18);
    auVar37._12_2_ = 0;
    auVar37[0xf] = (undefined1)((uint)iVar25 >> 0x18);
    auVar37[0xe] = (byte)((uint)iVar25 >> 0x10) & 0x80;
    fVar13 = (float)(uVar14 - (int)uVar7);
    auVar48 = NEON_scvtf(auVar37,4);
    fVar29 = fVar13 + fVar90;
    fVar13 = fVar101 / (fVar13 + fVar101);
    fVar88 = (float)CONCAT13(bVar87 & (byte)(uVar75 >> 0x18),
                             CONCAT12(bVar86 & (byte)(uVar75 >> 0x10),
                                      CONCAT11(bVar85 & (byte)(uVar75 >> 8),bVar84 & (byte)uVar75)))
             + auVar48._0_4_ * 1.1920929e-07;
    fVar55 = fVar29 * fVar13;
    fVar13 = fVar13 * ((0.0 - fVar29) * fVar55 + (fVar29 - (fVar55 + fVar55)));
    fVar29 = fVar55 * fVar55;
    fVar54 = fVar55 * fVar29;
    fVar44 = fVar29 * (fVar29 * (fVar29 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar43 = fVar88 * 0.3465736;
    fVar57 = fVar43 + fVar55;
    fVar13 = ((fVar55 - (fVar57 - fVar43)) +
             fVar54 * fVar44 +
             fVar13 + fVar44 * (fVar29 * fVar13 +
                               fVar54 + (0.0 - fVar54) +
                               fVar55 * (fVar29 + (0.0 - fVar29) + fVar55 * (fVar13 + fVar13)))) -
             fVar88 * 9.523271e-10;
    fVar94 = (fVar57 + fVar57 + fVar13 + fVar13) * fVar106;
    fVar13 = fVar94 * 1.442695 + 12582912.0 + -12582912.0;
    fVar29 = (fVar94 - fVar13 * 0.69314575) - fVar13 * 1.4286068e-06;
    uVar14 = (uint)(~(byte)(-(uint)(0 < (int)fVar13) >> 0x18) & 0x83);
    fVar13 = (fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * 0.0013818741 + 0.0083752265
                                                               ) + 0.041669395) + 0.1666645) +
                                 0.49999982) + fVar101) + fVar101) *
             (float)(uVar14 * 0x1000000 + 0x7f000000) *
             (float)((int)fVar13 * 0x800000 + uVar14 * -0x1000000);
    uVar75 = (uint)fVar13 ^ ((uint)fVar13 ^ 0x7f7fffee) & -(uint)(88.72 < fVar94);
    fVar62 = fVar62 * fVar63;
    fVar13 = 1.0 - fVar62;
    uVar77 = -(uint)(fVar13 < 1.1754944e-38);
    uVar14 = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & uVar77;
    iVar23 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar24 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar25 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    uVar7 = CONCAT17((char)((uint)iVar23 >> 0x18),
                     CONCAT16((char)((uint)iVar23 >> 0x10),
                              (uint6)((uVar14 + 0xc0cb0000 >> 0x10 & 0xff80) << 0x10))) &
            0xff8000ffffffffff;
    auVar38._8_2_ = 0;
    auVar38._0_8_ = uVar7;
    auVar38[10] = (byte)((uint)iVar24 >> 0x10) & 0x80;
    auVar38[0xb] = (undefined1)((uint)iVar24 >> 0x18);
    auVar38._12_2_ = 0;
    auVar38[0xf] = (undefined1)((uint)iVar25 >> 0x18);
    auVar38[0xe] = (byte)((uint)iVar25 >> 0x10) & 0x80;
    fVar13 = (float)(uVar14 - (int)uVar7);
    auVar48 = NEON_scvtf(auVar38,4);
    fVar29 = fVar13 + fVar90;
    fVar13 = fVar101 / (fVar13 + fVar101);
    fVar88 = (float)CONCAT13(bVar87 & (byte)(uVar77 >> 0x18),
                             CONCAT12(bVar86 & (byte)(uVar77 >> 0x10),
                                      CONCAT11(bVar85 & (byte)(uVar77 >> 8),bVar84 & (byte)uVar77)))
             + auVar48._0_4_ * 1.1920929e-07;
    fVar55 = fVar29 * fVar13;
    fVar13 = fVar13 * ((0.0 - fVar29) * fVar55 + (fVar29 - (fVar55 + fVar55)));
    fVar29 = fVar55 * fVar55;
    fVar54 = fVar55 * fVar29;
    fVar44 = fVar29 * (fVar29 * (fVar29 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar43 = fVar88 * 0.3465736;
    fVar57 = fVar43 + fVar55;
    fVar13 = ((fVar55 - (fVar57 - fVar43)) +
             fVar54 * fVar44 +
             fVar13 + fVar44 * (fVar29 * fVar13 +
                               fVar54 + (0.0 - fVar54) +
                               fVar55 * (fVar29 + (0.0 - fVar29) + fVar55 * (fVar13 + fVar13)))) -
             fVar88 * 9.523271e-10;
    fVar95 = (fVar57 + fVar57 + fVar13 + fVar13) * fVar106;
    fVar13 = fVar95 * 1.442695 + 12582912.0 + -12582912.0;
    fVar29 = (fVar95 - fVar13 * 0.69314575) - fVar13 * 1.4286068e-06;
    uVar14 = (uint)(~(byte)(-(uint)(0 < (int)fVar13) >> 0x18) & 0x83);
    fVar62 = fVar62 * fVar63;
    fVar13 = (fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * 0.0013818741 + 0.0083752265
                                                               ) + 0.041669395) + 0.1666645) +
                                 0.49999982) + fVar101) + fVar101) *
             (float)(uVar14 * 0x1000000 + 0x7f000000) *
             (float)((int)fVar13 * 0x800000 + uVar14 * -0x1000000);
    uVar77 = (uint)fVar13 ^ ((uint)fVar13 ^ 0x7f7fffee) & -(uint)(88.72 < fVar95);
    fVar13 = 1.0 - fVar62;
    uVar45 = -(uint)(fVar13 < 1.1754944e-38);
    uVar14 = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & uVar45;
    iVar23 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar24 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar25 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    auVar39._0_8_ =
         CONCAT17((char)((uint)iVar23 >> 0x18),
                  CONCAT16((char)((uint)iVar23 >> 0x10),
                           (uint6)((ushort)(uVar14 + 0xc0cb0000 >> 0x10) & 0xff80) << 0x10)) &
         0xff80ffffffffffff;
    auVar39._8_2_ = 0;
    auVar39[10] = (byte)((uint)iVar24 >> 0x10) & 0x80;
    auVar39[0xb] = (undefined1)((uint)iVar24 >> 0x18);
    auVar39._12_2_ = 0;
    auVar39[0xf] = (undefined1)((uint)iVar25 >> 0x18);
    auVar39[0xe] = (byte)((uint)iVar25 >> 0x10) & 0x80;
    fVar13 = (float)(uVar14 - (int)auVar39._0_8_);
    auVar48 = NEON_scvtf(auVar39,4);
    fVar29 = fVar13 + fVar90;
    fVar13 = fVar101 / (fVar13 + fVar101);
    fVar88 = (float)CONCAT13(bVar87 & (byte)(uVar45 >> 0x18),
                             CONCAT12(bVar86 & (byte)(uVar45 >> 0x10),
                                      CONCAT11(bVar85 & (byte)(uVar45 >> 8),bVar84 & (byte)uVar45)))
             + auVar48._0_4_ * 1.1920929e-07;
    fVar55 = fVar29 * fVar13;
    fVar13 = fVar13 * ((0.0 - fVar29) * fVar55 + (fVar29 - (fVar55 + fVar55)));
    fVar29 = fVar55 * fVar55;
    fVar54 = fVar55 * fVar29;
    fVar44 = fVar29 * (fVar29 * (fVar29 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar43 = fVar88 * 0.3465736;
    fVar57 = fVar43 + fVar55;
    fVar13 = ((fVar55 - (fVar57 - fVar43)) +
             fVar54 * fVar44 +
             fVar13 + fVar44 * (fVar29 * fVar13 +
                               fVar54 + (0.0 - fVar54) +
                               fVar55 * (fVar29 + (0.0 - fVar29) + fVar55 * (fVar13 + fVar13)))) -
             fVar88 * 9.523271e-10;
    fVar79 = (fVar57 + fVar57 + fVar13 + fVar13) * fVar106;
    fVar13 = fVar79 * 1.442695 + 12582912.0 + -12582912.0;
    fVar29 = (fVar79 - fVar13 * 0.69314575) - fVar13 * 1.4286068e-06;
    uVar14 = (uint)(~(byte)(-(uint)(0 < (int)fVar13) >> 0x18) & 0x83);
    uVar30 = (ulong)(uint)((fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * 0.0013818741
                                                                             + 0.0083752265) +
                                                                   0.041669395) + 0.1666645) +
                                               0.49999982) + fVar101) + fVar101) *
                           (float)(uVar14 * 0x1000000 + 0x7f000000) *
                          (float)((int)fVar13 * 0x800000 + uVar14 * -0x1000000));
    fVar62 = fVar62 * fVar63;
    uVar30 = uVar30 ^ (uVar30 ^ 0x7f7fffee) & (ulong)-(uint)(88.72 < fVar79);
    fVar13 = 1.0 - fVar62;
    uVar45 = -(uint)(fVar13 < 1.1754944e-38);
    uVar14 = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & uVar45;
    iVar23 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar24 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar25 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    uVar7 = CONCAT17((char)((uint)iVar23 >> 0x18),
                     CONCAT16((char)((uint)iVar23 >> 0x10),
                              (uint6)((uVar14 + 0xc0cb0000 >> 0x10 & 0xff80) << 0x10))) &
            0xff8000ffffffffff;
    auVar50._8_2_ = 0;
    auVar50._0_8_ = uVar7;
    auVar50[10] = (byte)((uint)iVar24 >> 0x10) & 0x80;
    auVar50[0xb] = (undefined1)((uint)iVar24 >> 0x18);
    auVar50._12_2_ = 0;
    auVar50[0xf] = (undefined1)((uint)iVar25 >> 0x18);
    auVar50[0xe] = (byte)((uint)iVar25 >> 0x10) & 0x80;
    fVar13 = (float)(uVar14 - (int)uVar7);
    auVar48 = NEON_scvtf(auVar50,4);
    fVar29 = fVar13 + fVar90;
    fVar13 = fVar101 / (fVar13 + fVar101);
    fVar88 = (float)CONCAT13(bVar87 & (byte)(uVar45 >> 0x18),
                             CONCAT12(bVar86 & (byte)(uVar45 >> 0x10),
                                      CONCAT11(bVar85 & (byte)(uVar45 >> 8),bVar84 & (byte)uVar45)))
             + auVar48._0_4_ * 1.1920929e-07;
    fVar55 = fVar29 * fVar13;
    fVar13 = fVar13 * ((0.0 - fVar29) * fVar55 + (fVar29 - (fVar55 + fVar55)));
    fVar29 = fVar55 * fVar55;
    fVar54 = fVar55 * fVar29;
    fVar44 = fVar29 * (fVar29 * (fVar29 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar43 = fVar88 * 0.3465736;
    fVar57 = fVar43 + fVar55;
    fVar13 = ((fVar55 - (fVar57 - fVar43)) +
             fVar54 * fVar44 +
             fVar13 + fVar44 * (fVar29 * fVar13 +
                               fVar54 + (0.0 - fVar54) +
                               fVar55 * (fVar29 + (0.0 - fVar29) + fVar55 * (fVar13 + fVar13)))) -
             fVar88 * 9.523271e-10;
    fVar97 = (fVar57 + fVar57 + fVar13 + fVar13) * fVar106;
    fVar13 = fVar97 * 1.442695 + 12582912.0 + -12582912.0;
    fVar29 = (fVar97 - fVar13 * 0.69314575) - fVar13 * 1.4286068e-06;
    uVar14 = (uint)(~(byte)(-(uint)(0 < (int)fVar13) >> 0x18) & 0x83);
    fVar62 = fVar62 * fVar63;
    uVar31 = (ulong)(uint)((fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * 0.0013818741
                                                                             + 0.0083752265) +
                                                                   0.041669395) + 0.1666645) +
                                               0.49999982) + fVar101) + fVar101) *
                           (float)(uVar14 * 0x1000000 + 0x7f000000) *
                          (float)((int)fVar13 * 0x800000 + uVar14 * -0x1000000));
    uVar31 = uVar31 ^ (uVar31 ^ 0x7f7fffee) & (ulong)-(uint)(88.72 < fVar97);
    fVar13 = 1.0 - fVar62;
    uVar45 = -(uint)(fVar13 < 1.1754944e-38);
    uVar14 = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & uVar45;
    iVar23 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar24 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar25 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    auVar51._0_8_ =
         CONCAT17((char)((uint)iVar23 >> 0x18),
                  CONCAT16((char)((uint)iVar23 >> 0x10),
                           (uint6)((ushort)(uVar14 + 0xc0cb0000 >> 0x10) & 0xff80) << 0x10)) &
         0xff80ffffffffffff;
    auVar51._8_2_ = 0;
    auVar51[10] = (byte)((uint)iVar24 >> 0x10) & 0x80;
    auVar51[0xb] = (undefined1)((uint)iVar24 >> 0x18);
    auVar51._12_2_ = 0;
    auVar51[0xf] = (undefined1)((uint)iVar25 >> 0x18);
    auVar51[0xe] = (byte)((uint)iVar25 >> 0x10) & 0x80;
    fVar13 = (float)(uVar14 - (int)auVar51._0_8_);
    auVar48 = NEON_scvtf(auVar51,4);
    fVar29 = fVar13 + fVar90;
    fVar13 = fVar101 / (fVar13 + fVar101);
    fVar88 = (float)CONCAT13(bVar87 & (byte)(uVar45 >> 0x18),
                             CONCAT12(bVar86 & (byte)(uVar45 >> 0x10),
                                      CONCAT11(bVar85 & (byte)(uVar45 >> 8),bVar84 & (byte)uVar45)))
             + auVar48._0_4_ * 1.1920929e-07;
    fVar55 = fVar29 * fVar13;
    fVar13 = fVar13 * ((0.0 - fVar29) * fVar55 + (fVar29 - (fVar55 + fVar55)));
    fVar29 = fVar55 * fVar55;
    fVar54 = fVar55 * fVar29;
    fVar44 = fVar29 * (fVar29 * (fVar29 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar43 = fVar88 * 0.3465736;
    fVar57 = fVar43 + fVar55;
    fVar13 = ((fVar55 - (fVar57 - fVar43)) +
             fVar54 * fVar44 +
             fVar13 + fVar44 * (fVar29 * fVar13 +
                               fVar54 + (0.0 - fVar54) +
                               fVar55 * (fVar29 + (0.0 - fVar29) + fVar55 * (fVar13 + fVar13)))) -
             fVar88 * 9.523271e-10;
    fVar78 = (fVar57 + fVar57 + fVar13 + fVar13) * fVar106;
    fVar13 = fVar78 * 1.442695 + 12582912.0 + -12582912.0;
    fVar29 = (fVar78 - fVar13 * 0.69314575) - fVar13 * 1.4286068e-06;
    uVar14 = (uint)(~(byte)(-(uint)(0 < (int)fVar13) >> 0x18) & 0x83);
    uVar19 = (ulong)(uint)((fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * 0.0013818741
                                                                             + 0.0083752265) +
                                                                   0.041669395) + 0.1666645) +
                                               0.49999982) + fVar101) + fVar101) *
                           (float)(uVar14 * 0x1000000 + 0x7f000000) *
                          (float)((int)fVar13 * 0x800000 + uVar14 * -0x1000000));
    uVar19 = uVar19 ^ (uVar19 ^ 0x7f7fffee) & (ulong)-(uint)(88.72 < fVar78);
    fVar62 = fVar62 * fVar63;
    fVar13 = 1.0 - fVar62;
    uVar45 = -(uint)(fVar13 < 1.1754944e-38);
    uVar14 = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & uVar45;
    iVar23 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar24 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar25 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    uVar7 = CONCAT17((char)((uint)iVar23 >> 0x18),
                     CONCAT16((char)((uint)iVar23 >> 0x10),
                              (uint6)((uVar14 + 0xc0cb0000 >> 0x10 & 0xff80) << 0x10))) &
            0xff8000ffffffffff;
    auVar52._8_2_ = 0;
    auVar52._0_8_ = uVar7;
    auVar52[10] = (byte)((uint)iVar24 >> 0x10) & 0x80;
    auVar52[0xb] = (undefined1)((uint)iVar24 >> 0x18);
    auVar52._12_2_ = 0;
    auVar52[0xf] = (undefined1)((uint)iVar25 >> 0x18);
    auVar52[0xe] = (byte)((uint)iVar25 >> 0x10) & 0x80;
    fVar13 = (float)(uVar14 - (int)uVar7);
    auVar48 = NEON_scvtf(auVar52,4);
    fVar29 = fVar13 + fVar90;
    fVar13 = fVar101 / (fVar13 + fVar101);
    fVar88 = (float)CONCAT13(bVar87 & (byte)(uVar45 >> 0x18),
                             CONCAT12(bVar86 & (byte)(uVar45 >> 0x10),
                                      CONCAT11(bVar85 & (byte)(uVar45 >> 8),bVar84 & (byte)uVar45)))
             + auVar48._0_4_ * 1.1920929e-07;
    fVar55 = fVar29 * fVar13;
    fVar13 = fVar13 * ((0.0 - fVar29) * fVar55 + (fVar29 - (fVar55 + fVar55)));
    fVar29 = fVar55 * fVar55;
    fVar54 = fVar55 * fVar29;
    fVar44 = fVar29 * (fVar29 * (fVar29 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar43 = fVar88 * 0.3465736;
    fVar57 = fVar43 + fVar55;
    fVar13 = ((fVar55 - (fVar57 - fVar43)) +
             fVar54 * fVar44 +
             fVar13 + fVar44 * (fVar29 * fVar13 +
                               fVar54 + (0.0 - fVar54) +
                               fVar55 * (fVar29 + (0.0 - fVar29) + fVar55 * (fVar13 + fVar13)))) -
             fVar88 * 9.523271e-10;
    fVar120 = (fVar57 + fVar57 + fVar13 + fVar13) * fVar106;
    fVar13 = fVar120 * 1.442695 + 12582912.0 + -12582912.0;
    fVar29 = (fVar120 - fVar13 * 0.69314575) - fVar13 * 1.4286068e-06;
    uVar14 = (uint)(~(byte)(-(uint)(0 < (int)fVar13) >> 0x18) & 0x83);
    uVar32 = (ulong)(uint)((fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * 0.0013818741
                                                                             + 0.0083752265) +
                                                                   0.041669395) + 0.1666645) +
                                               0.49999982) + fVar101) + fVar101) *
                           (float)(uVar14 * 0x1000000 + 0x7f000000) *
                          (float)((int)fVar13 * 0x800000 + uVar14 * -0x1000000));
    fVar62 = fVar62 * fVar63;
    uVar32 = uVar32 ^ (uVar32 ^ 0x7f7fffee) & (ulong)-(uint)(88.72 < fVar120);
    fVar13 = 1.0 - fVar62;
    uVar45 = -(uint)(fVar13 < 1.1754944e-38);
    uVar14 = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & uVar45;
    iVar23 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar24 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    iVar25 = ((uint)fVar13 ^
             ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & -(uint)(fVar13 < 1.1754944e-38)) +
             0xc0cb0000;
    uVar7 = CONCAT17((char)((uint)iVar23 >> 0x18),
                     CONCAT16((char)((uint)iVar23 >> 0x10),
                              (uint6)((uVar14 + 0xc0cb0000 >> 0x10 & 0xff80) << 0x10))) &
            0xff8000ffffffffff;
    auVar53._8_2_ = 0;
    auVar53._0_8_ = uVar7;
    auVar53[10] = (byte)((uint)iVar24 >> 0x10) & 0x80;
    auVar53[0xb] = (undefined1)((uint)iVar24 >> 0x18);
    auVar53._12_2_ = 0;
    auVar53[0xf] = (undefined1)((uint)iVar25 >> 0x18);
    auVar53[0xe] = (byte)((uint)iVar25 >> 0x10) & 0x80;
    fVar13 = (float)(uVar14 - (int)uVar7);
    auVar48 = NEON_scvtf(auVar53,4);
    fVar29 = fVar13 + fVar90;
    fVar43 = fVar101 / (fVar13 + fVar101);
    fVar55 = (float)CONCAT13(bVar87 & (byte)(uVar45 >> 0x18),
                             CONCAT12(bVar86 & (byte)(uVar45 >> 0x10),
                                      CONCAT11(bVar85 & (byte)(uVar45 >> 8),bVar84 & (byte)uVar45)))
             + auVar48._0_4_ * 1.1920929e-07;
    fVar44 = fVar29 * fVar43;
    fVar43 = fVar43 * ((0.0 - fVar29) * fVar44 + (fVar29 - (fVar44 + fVar44)));
    fVar29 = fVar44 * fVar44;
    fVar13 = fVar44 * fVar29;
    fVar57 = fVar29 * (fVar29 * (fVar29 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar88 = fVar55 * 0.3465736;
    fVar54 = fVar88 + fVar44;
    fVar13 = ((fVar44 - (fVar54 - fVar88)) +
             fVar13 * fVar57 +
             fVar43 + fVar57 * (fVar29 * fVar43 +
                               fVar13 + (0.0 - fVar13) +
                               fVar44 * (fVar29 + (0.0 - fVar29) + fVar44 * (fVar43 + fVar43)))) -
             fVar55 * 9.523271e-10;
    fVar96 = (fVar54 + fVar54 + fVar13 + fVar13) * fVar106;
    fVar13 = fVar96 * 1.442695 + 12582912.0 + -12582912.0;
    fVar29 = (fVar96 - fVar13 * 0.69314575) - fVar13 * 1.4286068e-06;
    uVar14 = (uint)(~(byte)(-(uint)(0 < (int)fVar13) >> 0x18) & 0x83);
    uVar16 = (ulong)(uint)((fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * 0.0013818741
                                                                             + 0.0083752265) +
                                                                   0.041669395) + 0.1666645) +
                                               0.49999982) + fVar101) + fVar101) *
                           (float)(uVar14 * 0x1000000 + 0x7f000000) *
                          (float)((int)fVar13 * 0x800000 + uVar14 * -0x1000000));
    uVar16 = uVar16 ^ (uVar16 ^ 0x7f7fffee) & (ulong)-(uint)(88.72 < fVar96);
    fVar13 = 1.0 - fVar62 * fVar63;
    uVar107 = -(uint)(fVar13 < 1.1754944e-38);
    uVar111 = -(uint)(fVar13 < 1.1754944e-38);
    uVar112 = -(uint)(fVar13 < 1.1754944e-38);
    uVar113 = -(uint)(fVar13 < 1.1754944e-38);
    uVar14 = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & uVar107;
    uVar45 = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & uVar111;
    uVar41 = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & uVar112;
    uVar42 = (uint)fVar13 ^ ((uint)fVar13 ^ (uint)(fVar13 * 8388608.0)) & uVar113;
    iVar23 = uVar45 + 0xc0cb0000;
    iVar24 = uVar41 + 0xc0cb0000;
    iVar25 = uVar42 + 0xc0cb0000;
    uVar7 = CONCAT17((char)((uint)iVar23 >> 0x18),
                     CONCAT16((char)((uint)iVar23 >> 0x10),
                              (uint6)((uVar14 + 0xc0cb0000 >> 0x10 & 0xff80) << 0x10))) &
            0xff8000ffffffffff;
    auVar91._8_2_ = 0;
    auVar91._0_8_ = uVar7;
    auVar91[10] = (byte)((uint)iVar24 >> 0x10) & 0x80;
    auVar91[0xb] = (undefined1)((uint)iVar24 >> 0x18);
    auVar92._12_2_ = 0;
    auVar92._0_12_ = auVar91;
    auVar92[0xf] = (undefined1)((uint)iVar25 >> 0x18);
    auVar92[0xe] = (byte)((uint)iVar25 >> 0x10) & 0x80;
    fVar13 = (float)(uVar14 - (int)uVar7);
    fVar29 = (float)(uVar45 - (int)(uVar7 >> 0x20));
    fVar43 = (float)(uVar41 - auVar91._8_4_);
    fVar88 = (float)(uVar42 - auVar92._12_4_);
    auVar48 = NEON_scvtf(auVar92,4);
    fVar90 = fVar13 + fVar90;
    fVar55 = fVar29 + auVar109._4_4_;
    fVar44 = fVar43 + auVar109._8_4_;
    fVar57 = fVar88 + auVar109._12_4_;
    fVar80 = fVar101 / (fVar13 + fVar101);
    fVar40 = fVar40 / (fVar29 + fVar40);
    fVar81 = fVar104 / (fVar43 + fVar104);
    fVar82 = fVar105 / (fVar88 + fVar105);
    fVar125 = (float)CONCAT13(bVar87 & (byte)(uVar107 >> 0x18),
                              CONCAT12(bVar86 & (byte)(uVar107 >> 0x10),
                                       CONCAT11(bVar85 & (byte)(uVar107 >> 8),bVar84 & (byte)uVar107
                                               )));
    auVar108._0_8_ =
         CONCAT17(auVar20[7] & (byte)(uVar111 >> 0x18),
                  CONCAT16(auVar20[6] & (byte)(uVar111 >> 0x10),
                           CONCAT15(auVar20[5] & (byte)(uVar111 >> 8),
                                    CONCAT14(auVar20[4] & (byte)uVar111,fVar125))));
    auVar108[8] = auVar20[8] & (byte)uVar112;
    auVar108[9] = auVar20[9] & (byte)(uVar112 >> 8);
    auVar108[10] = auVar20[10] & (byte)(uVar112 >> 0x10);
    auVar108[0xb] = auVar20[0xb] & (byte)(uVar112 >> 0x18);
    auVar110[0xc] = auVar20[0xc] & (byte)uVar113;
    auVar110._0_12_ = auVar108;
    auVar110[0xd] = auVar20[0xd] & (byte)(uVar113 >> 8);
    auVar110[0xe] = auVar20[0xe] & (byte)(uVar113 >> 0x10);
    auVar110[0xf] = auVar20[0xf] & (byte)(uVar113 >> 0x18);
    fVar125 = fVar125 + auVar48._0_4_ * 1.1920929e-07;
    fVar126 = (float)((ulong)auVar108._0_8_ >> 0x20) + auVar48._4_4_ * 1.1920929e-07;
    fVar127 = auVar108._8_4_ + auVar48._8_4_ * 1.1920929e-07;
    fVar114 = auVar110._12_4_ + auVar48._12_4_ * 1.1920929e-07;
    fVar115 = fVar90 * fVar80;
    fVar116 = fVar55 * fVar40;
    fVar117 = fVar44 * fVar81;
    fVar118 = fVar57 * fVar82;
    fVar80 = fVar80 * ((0.0 - fVar90) * fVar115 + (fVar90 - (fVar115 + fVar115)));
    fVar40 = fVar40 * ((0.0 - fVar55) * fVar116 + (fVar55 - (fVar116 + fVar116)));
    fVar81 = fVar81 * ((0.0 - fVar44) * fVar117 + (fVar44 - (fVar117 + fVar117)));
    fVar82 = fVar82 * ((0.0 - fVar57) * fVar118 + (fVar57 - (fVar118 + fVar118)));
    fVar90 = fVar115 * fVar115;
    fVar100 = fVar116 * fVar116;
    fVar121 = fVar117 * fVar117;
    fVar123 = fVar118 * fVar118;
    fVar56 = fVar115 * fVar90;
    fVar58 = fVar116 * fVar100;
    fVar59 = fVar117 * fVar121;
    fVar62 = fVar118 * fVar123;
    fVar13 = fVar90 * (fVar90 * (fVar90 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar43 = fVar100 * (fVar100 * (fVar100 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar55 = fVar121 * (fVar121 * (fVar121 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar57 = fVar123 * (fVar123 * (fVar123 * 0.12945557 + 0.141983) + 0.200015) + 0.33333325;
    fVar99 = fVar125 * 0.3465736;
    fVar119 = fVar126 * 0.3465736;
    fVar122 = fVar127 * 0.3465736;
    fVar124 = fVar114 * 0.3465736;
    fVar29 = fVar99 + fVar115;
    fVar88 = fVar119 + fVar116;
    fVar44 = fVar122 + fVar117;
    fVar54 = fVar124 + fVar118;
    fVar13 = ((fVar115 - (fVar29 - fVar99)) +
             fVar56 * fVar13 +
             fVar80 + fVar13 * (fVar90 * fVar80 +
                               fVar56 + (0.0 - fVar56) +
                               fVar115 * (fVar90 + (0.0 - fVar90) + fVar115 * (fVar80 + fVar80)))) -
             fVar125 * 9.523271e-10;
    fVar43 = ((fVar116 - (fVar88 - fVar119)) +
             fVar58 * fVar43 +
             fVar40 + fVar43 * (fVar100 * fVar40 +
                               fVar58 + (0.0 - fVar58) +
                               fVar116 * (fVar100 + (0.0 - fVar100) + fVar116 * (fVar40 + fVar40))))
             - fVar126 * 9.523271e-10;
    fVar55 = ((fVar117 - (fVar44 - fVar122)) +
             fVar59 * fVar55 +
             fVar81 + fVar55 * (fVar121 * fVar81 +
                               fVar59 + (0.0 - fVar59) +
                               fVar117 * (fVar121 + (0.0 - fVar121) + fVar117 * (fVar81 + fVar81))))
             - fVar127 * 9.523271e-10;
    fVar57 = ((fVar118 - (fVar54 - fVar124)) +
             fVar62 * fVar57 +
             fVar82 + fVar57 * (fVar123 * fVar82 +
                               fVar62 + (0.0 - fVar62) +
                               fVar118 * (fVar123 + (0.0 - fVar123) + fVar118 * (fVar82 + fVar82))))
             - fVar114 * 9.523271e-10;
    fVar13 = (fVar29 + fVar29 + fVar13 + fVar13) * fVar106;
    fVar29 = (fVar44 + fVar44 + fVar55 + fVar55) * fVar106;
    fVar55 = (fVar54 + fVar54 + fVar57 + fVar57) * fVar106;
    fVar44 = fVar13 * 1.442695 + 12582912.0 + -12582912.0;
    fVar57 = fVar29 * 1.442695 + 12582912.0 + -12582912.0;
    fVar54 = fVar55 * 1.442695 + 12582912.0 + -12582912.0;
    fVar56 = (fVar13 - fVar44 * 0.69314575) - fVar44 * 1.4286068e-06;
    fVar58 = (fVar29 - fVar57 * 0.69314575) - fVar57 * 1.4286068e-06;
    fVar55 = (fVar55 - fVar54 * 0.69314575) - fVar54 * 1.4286068e-06;
    auVar102._0_8_ =
         CONCAT17(~(byte)(-(uint)(0 < (int)((fVar88 + fVar88 + fVar43 + fVar43) * fVar106 * 1.442695
                                            + 12582912.0 + -12582912.0)) >> 0x18),
                  (uint7)(~(byte)(-(uint)(0 < (int)fVar44) >> 0x18) & 0x83) << 0x18) &
         0x83ffffffffffffff;
    auVar102._8_3_ = 0;
    auVar102[0xb] = ~(byte)(-(uint)(0 < (int)fVar57) >> 0x18) & 0x83;
    auVar103._12_3_ = 0;
    auVar103._0_12_ = auVar102;
    auVar103[0xf] = ~(byte)(-(uint)(0 < (int)fVar54) >> 0x18) & 0x83;
    auVar22._0_4_ =
         (fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * 0.0013818741 + 0.0083752265) +
                                                 0.041669395) + 0.1666645) + 0.49999982) + fVar101)
         + fVar101) * (float)((int)auVar102._0_8_ + 0x7f000000) *
         (float)((int)fVar44 * 0x800000 - (int)auVar102._0_8_);
    auVar22._4_4_ = 0;
    auVar22._8_4_ =
         (fVar58 * (fVar58 * (fVar58 * (fVar58 * (fVar58 * (fVar58 * 0.0013818741 + 0.0083752265) +
                                                 0.041669395) + 0.1666645) + 0.0) + fVar104) +
         fVar104) * (float)(auVar102._8_4_ + 0x7f000000) *
         (float)((int)fVar57 * 0x800000 - auVar102._8_4_);
    auVar22._12_4_ =
         (fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * 0.0013818741 + 0.0083752265) +
                                                 0.041669395) + 0.1666645) + 0.0) + fVar105) +
         fVar105) * (float)(auVar103._12_4_ + 0x7f000000) *
         (float)((int)fVar54 * 0x800000 - auVar103._12_4_);
    auVar9._4_4_ = 0;
    auVar9._0_4_ = -(uint)(88.72 < fVar13);
    auVar9._8_4_ = -(uint)(88.72 < fVar29);
    auVar9._12_4_ = 0;
    auVar22 = auVar22 ^ (auVar22 ^ ZEXT816(0x7f7fffee)) & auVar9;
    *(float *)(lVar12 + 0x70) = fVar17;
    *(float *)(lVar12 + 0x60) = fVar63;
    *(float *)(lVar12 + 100) = fVar83;
    local_220 = (byte)uVar18;
    bStack_21f = (byte)(uVar18 >> 8);
    bStack_21e = (byte)(uVar18 >> 0x10);
    bStack_21d = (byte)(uVar18 >> 0x18);
    iVar23 = -(uint)(fVar98 < -87.33);
    local_270 = (byte)uVar26;
    bStack_26f = (byte)(uVar26 >> 8);
    bStack_26e = (byte)(uVar26 >> 0x10);
    bStack_26d = (byte)(uVar26 >> 0x18);
    iVar25 = -(uint)(fVar64 < -87.33);
    local_250 = (byte)uVar27;
    bStack_24f = (byte)(uVar27 >> 8);
    bStack_24e = (byte)(uVar27 >> 0x10);
    bStack_24d = (byte)(uVar27 >> 0x18);
    iVar24 = -(uint)(fVar120 < -87.33);
    *(float *)(lVar12 + 0x20) =
         1.0 - (float)CONCAT13(bStack_21d & ~(byte)((uint)iVar23 >> 0x18),
                               CONCAT12(bStack_21e & ~(byte)((uint)iVar23 >> 0x10),
                                        CONCAT11(bStack_21f & ~(byte)((uint)iVar23 >> 8),
                                                 local_220 & ~(byte)iVar23)));
    *(float *)(lVar12 + 0x24) =
         1.0 - (float)CONCAT13(bStack_24d & ~(byte)((uint)iVar25 >> 0x18),
                               CONCAT12(bStack_24e & ~(byte)((uint)iVar25 >> 0x10),
                                        CONCAT11(bStack_24f & ~(byte)((uint)iVar25 >> 8),
                                                 local_250 & ~(byte)iVar25)));
    iVar23 = -(uint)(fVar66 < -87.33);
    iVar25 = -(uint)(fVar74 < -87.33);
    *(float *)(lVar12 + 0x28) =
         1.0 - (float)CONCAT13((byte)(uVar67 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                               CONCAT12((byte)(uVar67 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                                        CONCAT11((byte)(uVar67 >> 8) & ~(byte)((uint)iVar23 >> 8),
                                                 (byte)uVar67 & ~(byte)iVar23)));
    *(float *)(lVar12 + 0x2c) =
         1.0 - (float)CONCAT13(bStack_26d & ~(byte)((uint)iVar25 >> 0x18),
                               CONCAT12(bStack_26e & ~(byte)((uint)iVar25 >> 0x10),
                                        CONCAT11(bStack_26f & ~(byte)((uint)iVar25 >> 8),
                                                 local_270 & ~(byte)iVar25)));
    local_2d0 = (byte)uVar65;
    bStack_2cf = (byte)(uVar65 >> 8);
    bStack_2ce = (byte)(uVar65 >> 0x10);
    bStack_2cd = (byte)(uVar65 >> 0x18);
    iVar23 = -(uint)(fVar76 < -87.33);
    iVar25 = -(uint)(fVar89 < -87.33);
    *(float *)(lVar12 + 0x30) =
         1.0 - (float)CONCAT13((byte)(uVar15 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                               CONCAT12((byte)(uVar15 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                                        CONCAT11((byte)(uVar15 >> 8) & ~(byte)((uint)iVar23 >> 8),
                                                 (byte)uVar15 & ~(byte)iVar23)));
    *(float *)(lVar12 + 0x34) =
         1.0 - (float)CONCAT13(bStack_2cd & ~(byte)((uint)iVar25 >> 0x18),
                               CONCAT12(bStack_2ce & ~(byte)((uint)iVar25 >> 0x10),
                                        CONCAT11(bStack_2cf & ~(byte)((uint)iVar25 >> 8),
                                                 local_2d0 & ~(byte)iVar25)));
    iVar25 = -(uint)(fVar93 < -87.33);
    iVar23 = -(uint)(fVar94 < -87.33);
    local_2f0 = (byte)uVar73;
    bStack_2ef = (byte)(uVar73 >> 8);
    bStack_2ee = (byte)(uVar73 >> 0x10);
    bStack_2ed = (byte)(uVar73 >> 0x18);
    local_310 = (byte)uVar75;
    bStack_30f = (byte)(uVar75 >> 8);
    bStack_30e = (byte)(uVar75 >> 0x10);
    bStack_30d = (byte)(uVar75 >> 0x18);
    *(float *)(lVar12 + 0x38) =
         1.0 - (float)CONCAT13(bStack_2ed & ~(byte)((uint)iVar25 >> 0x18),
                               CONCAT12(bStack_2ee & ~(byte)((uint)iVar25 >> 0x10),
                                        CONCAT11(bStack_2ef & ~(byte)((uint)iVar25 >> 8),
                                                 local_2f0 & ~(byte)iVar25)));
    *(float *)(lVar12 + 0x3c) =
         1.0 - (float)CONCAT13(bStack_30d & ~(byte)((uint)iVar23 >> 0x18),
                               CONCAT12(bStack_30e & ~(byte)((uint)iVar23 >> 0x10),
                                        CONCAT11(bStack_30f & ~(byte)((uint)iVar23 >> 8),
                                                 local_310 & ~(byte)iVar23)));
    iVar25 = -(uint)(fVar95 < -87.33);
    local_340 = (byte)uVar77;
    bStack_33f = (byte)(uVar77 >> 8);
    bStack_33e = (byte)(uVar77 >> 0x10);
    bStack_33d = (byte)(uVar77 >> 0x18);
    local_360 = (byte)uVar30;
    bStack_35f = (byte)(uVar30 >> 8);
    bStack_35e = (byte)(uVar30 >> 0x10);
    bStack_35d = (byte)(uVar30 >> 0x18);
    iVar23 = -(uint)(fVar79 < -87.33);
    *(float *)(lVar12 + 0x40) =
         1.0 - (float)CONCAT13(bStack_33d & ~(byte)((uint)iVar25 >> 0x18),
                               CONCAT12(bStack_33e & ~(byte)((uint)iVar25 >> 0x10),
                                        CONCAT11(bStack_33f & ~(byte)((uint)iVar25 >> 8),
                                                 local_340 & ~(byte)iVar25)));
    *(float *)(lVar12 + 0x44) =
         1.0 - (float)CONCAT13(bStack_35d & ~(byte)((uint)iVar23 >> 0x18),
                               CONCAT12(bStack_35e & ~(byte)((uint)iVar23 >> 0x10),
                                        CONCAT11(bStack_35f & ~(byte)((uint)iVar23 >> 8),
                                                 local_360 & ~(byte)iVar23)));
    iVar23 = -(uint)(fVar97 < -87.33);
    local_3a0 = (byte)uVar31;
    bStack_39f = (byte)(uVar31 >> 8);
    bStack_39e = (byte)(uVar31 >> 0x10);
    bStack_39d = (byte)(uVar31 >> 0x18);
    local_3c0 = (byte)uVar19;
    bStack_3bf = (byte)(uVar19 >> 8);
    bStack_3be = (byte)(uVar19 >> 0x10);
    bStack_3bd = (byte)(uVar19 >> 0x18);
    iVar25 = -(uint)(fVar78 < -87.33);
    *(float *)(lVar12 + 0x48) =
         1.0 - (float)CONCAT13(bStack_39d & ~(byte)((uint)iVar23 >> 0x18),
                               CONCAT12(bStack_39e & ~(byte)((uint)iVar23 >> 0x10),
                                        CONCAT11(bStack_39f & ~(byte)((uint)iVar23 >> 8),
                                                 local_3a0 & ~(byte)iVar23)));
    *(float *)(lVar12 + 0x4c) =
         1.0 - (float)CONCAT13(bStack_3bd & ~(byte)((uint)iVar25 >> 0x18),
                               CONCAT12(bStack_3be & ~(byte)((uint)iVar25 >> 0x10),
                                        CONCAT11(bStack_3bf & ~(byte)((uint)iVar25 >> 8),
                                                 local_3c0 & ~(byte)iVar25)));
    iVar23 = -(uint)(fVar96 < -87.33);
    local_3f0 = (byte)uVar16;
    bStack_3ef = (byte)(uVar16 >> 8);
    bStack_3ee = (byte)(uVar16 >> 0x10);
    bStack_3ed = (byte)(uVar16 >> 0x18);
    local_3e0 = (byte)uVar32;
    bStack_3df = (byte)(uVar32 >> 8);
    bStack_3de = (byte)(uVar32 >> 0x10);
    bStack_3dd = (byte)(uVar32 >> 0x18);
    *(undefined4 *)(lVar12 + 0x5c) = 0x3f800000;
    *(float *)(lVar12 + 0x50) =
         1.0 - (float)CONCAT13(bStack_3dd & ~(byte)((uint)iVar24 >> 0x18),
                               CONCAT12(bStack_3de & ~(byte)((uint)iVar24 >> 0x10),
                                        CONCAT11(bStack_3df & ~(byte)((uint)iVar24 >> 8),
                                                 local_3e0 & ~(byte)iVar24)));
    *(float *)(lVar12 + 0x54) =
         1.0 - (float)CONCAT13(bStack_3ed & ~(byte)((uint)iVar23 >> 0x18),
                               CONCAT12(bStack_3ee & ~(byte)((uint)iVar23 >> 0x10),
                                        CONCAT11(bStack_3ef & ~(byte)((uint)iVar23 >> 8),
                                                 local_3f0 & ~(byte)iVar23)));
    iVar23 = -(uint)(fVar13 < -87.33);
    *(float *)(lVar12 + 0x58) =
         1.0 - (float)CONCAT13(auVar22[3] & ~(byte)((uint)iVar23 >> 0x18),
                               CONCAT12(auVar22[2] & ~(byte)((uint)iVar23 >> 0x10),
                                        CONCAT11(auVar22[1] & ~(byte)((uint)iVar23 >> 8),
                                                 auVar22[0] & ~(byte)iVar23)));
    if (!bVar11) break;
    fVar13 = (&local_a4)[lVar10];
    bVar11 = false;
    lVar10 = 1;
  }
  return;
}


