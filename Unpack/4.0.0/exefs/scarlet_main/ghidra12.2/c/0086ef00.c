/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0086ef00; name: FUN_0086ef00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0086ef00(float *param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  uint uVar21;
  undefined1 auVar22 [12];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar30;
  float fVar31;
  undefined1 auVar29 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar44;
  float fVar45;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar61;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar62;
  byte bVar64;
  ulong uVar63;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  float fVar68;
  byte bVar69;
  float fVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  uint uVar89;
  undefined1 auVar90 [12];
  int iVar93;
  undefined1 auVar91 [16];
  int iVar94;
  int iVar95;
  undefined1 auVar92 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  
  fVar19 = *(float *)(param_2 + 2);
  fVar20 = *(float *)((long)param_2 + 0x14);
  fVar28 = *(float *)(param_2 + 3);
  fVar30 = *(float *)((long)param_2 + 0x1c);
  fVar85 = (float)*param_2;
  auVar27._0_4_ = fVar19 - fVar85;
  fVar86 = (float)((ulong)*param_2 >> 0x20);
  auVar27._4_4_ = fVar20 - fVar86;
  fVar87 = (float)param_2[1];
  auVar27._8_4_ = fVar28 - fVar87;
  fVar88 = (float)((ulong)param_2[1] >> 0x20);
  auVar27._12_4_ = fVar30 - fVar88;
  fVar31 = *(float *)(param_2 + 4);
  fVar32 = *(float *)((long)param_2 + 0x24);
  fVar40 = *(float *)(param_2 + 5);
  fVar44 = *(float *)((long)param_2 + 0x2c);
  auVar41._0_4_ = fVar85 - fVar31;
  auVar41._4_4_ = fVar86 - fVar32;
  auVar41._8_4_ = fVar87 - fVar40;
  auVar41._12_4_ = fVar88 - fVar44;
  auVar26 = NEON_ext(auVar27,auVar27,4,1);
  auVar29 = NEON_ext(auVar41,auVar41,4,1);
  auVar82._0_4_ = auVar27._0_4_ * auVar29._0_4_ - auVar41._0_4_ * auVar26._0_4_;
  auVar82._4_4_ = auVar27._4_4_ * auVar29._4_4_ - auVar41._4_4_ * auVar26._4_4_;
  auVar82._8_4_ = auVar27._8_4_ * auVar41._0_4_ - auVar41._8_4_ * auVar27._0_4_;
  auVar82._12_4_ = auVar27._12_4_ * auVar41._4_4_ - auVar41._12_4_ * auVar27._4_4_;
  auVar41 = NEON_ext(auVar82,auVar82,4,1);
  fVar45 = *param_1;
  fVar46 = param_1[1];
  fVar58 = param_1[2];
  fVar61 = param_1[3];
  fVar9 = param_1[4];
  fVar10 = param_1[5];
  fVar11 = param_1[6];
  fVar62 = (float)*param_4;
  fVar70 = (float)((ulong)*param_4 >> 0x20);
  auVar26._0_4_ = fVar45 - fVar85;
  auVar26._4_4_ = fVar46 - fVar86;
  auVar26._8_4_ = fVar58 - fVar87;
  auVar26._12_4_ = fVar61 - fVar88;
  fVar57 = auVar26._0_4_ * auVar41._0_4_;
  fVar68 = auVar26._4_4_ * auVar41._4_4_;
  fVar33 = (auVar26._0_4_ + fVar62 * fVar9) * auVar41._0_4_;
  fVar35 = (auVar26._4_4_ + fVar70 * fVar10) * auVar41._4_4_;
  fVar37 = (auVar26._8_4_ + fVar62 * fVar11) * auVar82._0_4_;
  fVar56 = fVar57 + fVar68 + auVar26._8_4_ * auVar82._0_4_;
  fVar57 = fVar57 + fVar68 + auVar26._8_4_ * auVar82._0_4_;
  fVar68 = fVar33 + fVar35 + fVar37;
  if (0.0 <= fVar56 * fVar68) {
    return 0;
  }
  bVar66 = (byte)(-(uint)(fVar56 < 0.0) >> 0x18);
  bVar67 = (byte)(-(uint)(fVar57 < 0.0) >> 0x18);
  auVar81._0_4_ = fVar31 - fVar19;
  auVar81._4_4_ = fVar32 - fVar20;
  auVar81._8_4_ = fVar40 - fVar28;
  auVar81._12_4_ = fVar44 - fVar30;
  fVar34 = (float)param_2[6];
  fVar5 = fVar85 - fVar34;
  fVar36 = (float)((ulong)param_2[6] >> 0x20);
  fVar6 = fVar86 - fVar36;
  uVar47 = (undefined1)((uint)fVar6 >> 8);
  uVar48 = (undefined1)((uint)fVar6 >> 0x10);
  uVar49 = (undefined1)((uint)fVar6 >> 0x18);
  fVar38 = (float)param_2[7];
  fVar100 = fVar87 - fVar38;
  uVar50 = (undefined1)((uint)fVar100 >> 8);
  uVar51 = (undefined1)((uint)fVar100 >> 0x10);
  uVar52 = (undefined1)((uint)fVar100 >> 0x18);
  fVar39 = (float)((ulong)param_2[7] >> 0x20);
  fVar101 = fVar88 - fVar39;
  uVar53 = (undefined1)((uint)fVar101 >> 8);
  uVar54 = (undefined1)((uint)fVar101 >> 0x10);
  uVar55 = (undefined1)((uint)fVar101 >> 0x18);
  auVar84._0_4_ = fVar34 - fVar31;
  auVar84._4_4_ = fVar36 - fVar32;
  auVar84._8_4_ = fVar38 - fVar40;
  auVar84._12_4_ = fVar39 - fVar44;
  uVar63 = CONCAT17(bVar67,(uint7)(bVar66 & 0x80) << 0x18) & 0x80ffffffffffffff;
  bVar66 = bVar66 & 0x80;
  bVar67 = bVar67 & 0x80;
  bVar64 = (byte)(uVar63 >> 0x18);
  bVar65 = (byte)(uVar63 >> 0x38);
  auVar42._0_8_ =
       CONCAT17(bVar65 ^ auVar41[7],
                CONCAT16(auVar41[6],
                         CONCAT15(auVar41[5],
                                  CONCAT14(auVar41[4],CONCAT13(bVar64 ^ auVar41[3],auVar41._0_3_))))
               );
  auVar42[8] = SUB41(auVar82._0_4_,0);
  auVar42[9] = (undefined1)((uint)auVar82._0_4_ >> 8);
  auVar42[10] = (undefined1)((uint)auVar82._0_4_ >> 0x10);
  auVar42[0xb] = bVar66 ^ (byte)((uint)auVar82._0_4_ >> 0x18);
  auVar42._12_3_ = 0;
  auVar42[0xf] = bVar67;
  param_5[1] = auVar42._8_8_;
  *param_5 = auVar42._0_8_;
  auVar41 = NEON_ext(auVar27,auVar27,8,1);
  auVar82 = NEON_ext(auVar81,auVar81,8,1);
  fVar13 = auVar41._0_4_;
  fVar14 = auVar82._0_4_;
  auVar82 = NEON_ext(auVar84,auVar84,8,1);
  *param_4 = CONCAT44(fVar70 * (fVar57 / (fVar57 - (fVar33 + fVar35 + fVar37))),
                      fVar62 * (fVar56 / (fVar56 - fVar68)));
  auVar97[4] = SUB41(fVar6,0);
  auVar97._0_4_ = fVar5;
  auVar97[5] = uVar47;
  auVar97[6] = uVar48;
  auVar97[7] = uVar49;
  auVar97[8] = SUB41(fVar100,0);
  auVar97[9] = uVar50;
  auVar97[10] = uVar51;
  auVar97[0xb] = uVar52;
  auVar97[0xc] = SUB41(fVar101,0);
  auVar97[0xd] = uVar53;
  auVar97[0xe] = uVar54;
  auVar97[0xf] = uVar55;
  auVar99[4] = SUB41(fVar6,0);
  auVar99._0_4_ = fVar5;
  auVar99[5] = uVar47;
  auVar99[6] = uVar48;
  auVar99[7] = uVar49;
  auVar99[8] = SUB41(fVar100,0);
  auVar99[9] = uVar50;
  auVar99[10] = uVar51;
  auVar99[0xb] = uVar52;
  auVar99[0xc] = SUB41(fVar101,0);
  auVar99[0xd] = uVar53;
  auVar99[0xe] = uVar54;
  auVar99[0xf] = uVar55;
  auVar41 = NEON_ext(auVar97,auVar99,8,1);
  fVar57 = auVar82._0_4_;
  fVar68 = auVar41._0_4_;
  fVar70 = (float)(((int)(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10) >> 1) + 0x1fbb4000);
  fVar35 = (float)(((int)(fVar11 * fVar11 + fVar9 * fVar9 + fVar10 * fVar10) >> 1) + 0x1fbb4000);
  fVar100 = fVar45 + fVar45;
  fVar101 = fVar46 + fVar46;
  fVar37 = fVar58 + fVar58;
  fVar102 = fVar61 + fVar61;
  auVar96._0_4_ = fVar100 - (fVar19 + fVar31);
  auVar96._4_4_ = fVar101 - (fVar20 + fVar32);
  auVar96._8_4_ = fVar37 - (fVar28 + fVar40);
  auVar96._12_4_ = fVar102 - (fVar30 + fVar44);
  auVar98._0_4_ = fVar100 - (fVar31 + fVar34);
  auVar98._4_4_ = fVar101 - (fVar32 + fVar36);
  auVar98._8_4_ = fVar37 - (fVar40 + fVar38);
  auVar98._12_4_ = fVar102 - (fVar44 + fVar39);
  auVar83._0_4_ = fVar13 * fVar13 + auVar27._0_4_ * auVar27._0_4_ + auVar27._4_4_ * auVar27._4_4_;
  auVar83._4_4_ = fVar14 * fVar14 + auVar81._0_4_ * auVar81._0_4_ + auVar81._4_4_ * auVar81._4_4_;
  auVar83._8_4_ = fVar57 * fVar57 + auVar84._0_4_ * auVar84._0_4_ + auVar84._4_4_ * auVar84._4_4_;
  auVar83._12_4_ = fVar68 * fVar68 + fVar5 * fVar5 + fVar6 * fVar6;
  auVar91._0_4_ = fVar100 - (fVar19 + fVar85);
  auVar91._4_4_ = fVar101 - (fVar20 + fVar86);
  auVar91._8_4_ = fVar37 - (fVar28 + fVar87);
  auVar91._12_4_ = fVar102 - (fVar30 + fVar88);
  fVar100 = fVar100 - (fVar85 + fVar34);
  fVar101 = fVar101 - (fVar86 + fVar36);
  fVar37 = fVar37 - (fVar87 + fVar38);
  fVar102 = fVar102 - (fVar88 + fVar39);
  auVar29._8_8_ = 0xffffffffffffffff;
  auVar29._0_8_ = 0xffffffffffffffff;
  auVar41 = NEON_sshl(auVar83,auVar29,4);
  fVar62 = (float)*(undefined8 *)PTR_DAT_047d1ae0 +
           (float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x260) *
           (float)(((int)(auVar26._8_4_ * auVar26._8_4_ +
                         auVar26._0_4_ * auVar26._0_4_ + auVar26._4_4_ * auVar26._4_4_) >> 1) +
                  0x1fbb4000);
  fVar33 = (float)((ulong)*(undefined8 *)PTR_DAT_047d1ae0 >> 0x20) +
           (float)((ulong)*(undefined8 *)(PTR_DAT_047d19b0 + 0x260) >> 0x20) *
           (float)(((int)(auVar26._8_4_ * auVar26._8_4_ +
                         auVar26._0_4_ * auVar26._0_4_ + auVar26._4_4_ * auVar26._4_4_) >> 1) +
                  0x1fbb4000);
  fVar103 = fVar70 * (float)(auVar41._0_4_ + 0x1fbb4000) * (fVar62 + fVar62);
  fVar104 = fVar35 * (float)(auVar41._4_4_ + 0x1fbb4000) * (fVar33 + fVar33);
  fVar105 = fVar70 * (float)(auVar41._8_4_ + 0x1fbb4000) * (fVar62 + fVar62);
  fVar106 = fVar35 * (float)(auVar41._12_4_ + 0x1fbb4000) * (fVar33 + fVar33);
  auVar82 = NEON_ext(auVar91,auVar91,8,1);
  auVar29 = NEON_ext(auVar96,auVar96,8,1);
  auVar99 = NEON_ext(auVar98,auVar98,8,1);
  auVar7._4_4_ = fVar101;
  auVar7._0_4_ = fVar100;
  auVar7._8_4_ = fVar37;
  auVar7._12_4_ = fVar102;
  auVar8._4_4_ = fVar101;
  auVar8._0_4_ = fVar100;
  auVar8._8_4_ = fVar37;
  auVar8._12_4_ = fVar102;
  auVar97 = NEON_ext(auVar7,auVar8,8,1);
  fVar70 = auVar82._0_4_ * (auVar27._0_4_ * fVar10 - auVar27._4_4_ * fVar9) +
           auVar91._0_4_ * (auVar27._4_4_ * fVar11 - fVar13 * fVar10) +
           auVar91._4_4_ * (fVar13 * fVar9 - auVar27._0_4_ * fVar11);
  fVar35 = auVar29._0_4_ * (auVar81._0_4_ * fVar10 - auVar81._4_4_ * fVar9) +
           auVar96._0_4_ * (auVar81._4_4_ * fVar11 - fVar14 * fVar10) +
           auVar96._4_4_ * (fVar14 * fVar9 - auVar81._0_4_ * fVar11);
  fVar37 = auVar99._0_4_ * (auVar84._0_4_ * fVar10 - auVar84._4_4_ * fVar9) +
           auVar98._0_4_ * (auVar84._4_4_ * fVar11 - fVar57 * fVar10) +
           auVar98._4_4_ * (fVar57 * fVar9 - auVar84._0_4_ * fVar11);
  fVar85 = auVar97._0_4_ * (fVar5 * fVar10 - fVar6 * fVar9) +
           fVar100 * (fVar6 * fVar11 - fVar68 * fVar10) +
           fVar101 * (fVar68 * fVar9 - fVar5 * fVar11);
  bVar69 = (byte)_DAT_03cab270;
  bVar71 = (byte)((ulong)_DAT_03cab270 >> 0x20);
  bVar73 = (byte)_UNK_03cab278;
  bVar77 = (byte)((ulong)_UNK_03cab278 >> 0x20);
  fVar86 = 0.0 - fVar103;
  fVar87 = 0.0 - fVar104;
  fVar88 = 0.0 - fVar105;
  fVar100 = 0.0 - fVar106;
  iVar93 = -(uint)(fVar35 < fVar87);
  iVar94 = -(uint)(fVar37 < fVar88);
  iVar95 = -(uint)(fVar85 < fVar100);
  uVar89 = (uint)(-(fVar70 < fVar86) & bVar69);
  bVar72 = (byte)((ulong)_DAT_03cab270 >> 0x38);
  auVar90._0_8_ =
       CONCAT17((byte)((uint)iVar93 >> 0x18) & bVar72,(uint7)CONCAT14((byte)iVar93 & bVar71,uVar89))
  ;
  auVar90[8] = (byte)iVar94 & bVar73;
  bVar74 = (byte)((ulong)_UNK_03cab278 >> 8);
  auVar90[9] = (byte)((uint)iVar94 >> 8) & bVar74;
  bVar75 = (byte)((ulong)_UNK_03cab278 >> 0x10);
  auVar90[10] = (byte)((uint)iVar94 >> 0x10) & bVar75;
  bVar76 = (byte)((ulong)_UNK_03cab278 >> 0x18);
  auVar90[0xb] = (byte)((uint)iVar94 >> 0x18) & bVar76;
  auVar92[0xc] = (byte)iVar95 & bVar77;
  auVar92._0_12_ = auVar90;
  bVar78 = (byte)((ulong)_UNK_03cab278 >> 0x28);
  auVar92[0xd] = (byte)((uint)iVar95 >> 8) & bVar78;
  bVar79 = (byte)((ulong)_UNK_03cab278 >> 0x30);
  auVar92[0xe] = (byte)((uint)iVar95 >> 0x10) & bVar79;
  bVar80 = (byte)((ulong)_UNK_03cab278 >> 0x38);
  auVar92[0xf] = (byte)((uint)iVar95 >> 0x18) & bVar80;
  uVar12 = 2;
  if (0.0 <= fVar56) {
    uVar12 = 1;
  }
  uVar12 = uVar12 & (param_3 ^ 3);
  uVar89 = (uVar12 >> (ulong)(uVar89 + (int)((ulong)auVar90._0_8_ >> 0x20) +
                              auVar90._8_4_ + auVar92._12_4_ & 0x1f) |
           uVar12 >> (ulong)((byte)((-(fVar103 < fVar70) & bVar69) + (-(fVar104 < fVar35) & bVar71)
                                   + (-(fVar105 < fVar37) & bVar73) + (-(fVar106 < fVar85) & bVar77)
                                   ) & 0x1f)) & uVar12;
  if ((uVar89 != 0) &&
     (fVar37 = (float)CONCAT13(bVar66 ^ (byte)((uint)fVar37 >> 0x18),SUB43(fVar37,0)),
     ((fVar86 <= (float)CONCAT13(bVar64 ^ (byte)((uint)fVar70 >> 0x18),SUB43(fVar70,0)) ||
      fVar87 <= (float)CONCAT13(bVar65 ^ (byte)((uint)fVar35 >> 0x18),SUB43(fVar35,0))) ||
     fVar88 <= fVar37) ||
     fVar100 <=
     (float)(CONCAT17(bVar67 ^ (byte)((uint)fVar85 >> 0x18),
                      CONCAT16((char)((uint)fVar85 >> 0x10),
                               CONCAT15((char)((uint)fVar85 >> 8),CONCAT14(SUB41(fVar85,0),fVar37)))
                     ) >> 0x20))) {
    fVar70 = (float)(0x5f375a86 - auVar41._0_4_);
    fVar35 = (float)(0x5f375a86 - auVar41._4_4_);
    fVar37 = (float)(0x5f375a86 - auVar41._8_4_);
    fVar56 = (float)(0x5f375a86 - auVar41._12_4_);
    auVar17._0_4_ = fVar45 - fVar19;
    auVar17._4_4_ = fVar46 - fVar20;
    auVar17._8_4_ = fVar58 - fVar28;
    auVar17._12_4_ = fVar61 - fVar30;
    auVar23._0_4_ = fVar45 - fVar31;
    auVar23._4_4_ = fVar46 - fVar32;
    auVar23._8_4_ = fVar58 - fVar40;
    auVar23._12_4_ = fVar61 - fVar44;
    auVar59._0_4_ = fVar13 * fVar70;
    auVar59._4_4_ = fVar14 * fVar35;
    auVar59._8_4_ = fVar57 * fVar37;
    auVar59._12_4_ = fVar68 * fVar56;
    auVar43._0_4_ = auVar27._0_4_ * fVar70;
    auVar43._4_4_ = auVar81._0_4_ * fVar35;
    auVar43._8_4_ = auVar84._0_4_ * fVar37;
    auVar43._12_4_ = fVar5 * fVar56;
    fVar70 = auVar27._4_4_ * fVar70;
    fVar35 = auVar81._4_4_ * fVar35;
    uVar47 = (undefined1)((uint)fVar35 >> 8);
    uVar48 = (undefined1)((uint)fVar35 >> 0x10);
    uVar49 = (undefined1)((uint)fVar35 >> 0x18);
    fVar37 = auVar84._4_4_ * fVar37;
    uVar50 = (undefined1)((uint)fVar37 >> 8);
    uVar51 = (undefined1)((uint)fVar37 >> 0x10);
    uVar52 = (undefined1)((uint)fVar37 >> 0x18);
    fVar6 = fVar6 * fVar56;
    uVar53 = (undefined1)((uint)fVar6 >> 8);
    uVar54 = (undefined1)((uint)fVar6 >> 0x10);
    uVar55 = (undefined1)((uint)fVar6 >> 0x18);
    auVar41 = NEON_ext(auVar43,auVar43,0xc,1);
    auVar25._0_4_ = fVar45 - fVar34;
    auVar25._4_4_ = fVar46 - fVar36;
    auVar25._8_4_ = fVar58 - fVar38;
    auVar25._12_4_ = fVar61 - fVar39;
    fVar40 = auVar43._0_4_ + auVar41._0_4_;
    fVar44 = auVar43._4_4_ + auVar41._4_4_;
    fVar45 = auVar43._8_4_ + auVar41._8_4_;
    fVar46 = auVar43._12_4_ + auVar41._12_4_;
    auVar2[4] = SUB41(fVar35,0);
    auVar2._0_4_ = fVar70;
    auVar2[5] = uVar47;
    auVar2[6] = uVar48;
    auVar2[7] = uVar49;
    auVar2[8] = SUB41(fVar37,0);
    auVar2[9] = uVar50;
    auVar2[10] = uVar51;
    auVar2[0xb] = uVar52;
    auVar2[0xc] = SUB41(fVar6,0);
    auVar2[0xd] = uVar53;
    auVar2[0xe] = uVar54;
    auVar2[0xf] = uVar55;
    auVar3[4] = SUB41(fVar35,0);
    auVar3._0_4_ = fVar70;
    auVar3[5] = uVar47;
    auVar3[6] = uVar48;
    auVar3[7] = uVar49;
    auVar3[8] = SUB41(fVar37,0);
    auVar3[9] = uVar50;
    auVar3[10] = uVar51;
    auVar3[0xb] = uVar52;
    auVar3[0xc] = SUB41(fVar6,0);
    auVar3[0xd] = uVar53;
    auVar3[0xe] = uVar54;
    auVar3[0xf] = uVar55;
    auVar41 = NEON_ext(auVar2,auVar3,0xc,1);
    fVar70 = fVar70 + auVar41._0_4_;
    fVar35 = fVar35 + auVar41._4_4_;
    fVar37 = fVar37 + auVar41._8_4_;
    fVar6 = fVar6 + auVar41._12_4_;
    auVar41 = NEON_ext(auVar59,auVar59,0xc,1);
    fVar58 = auVar59._0_4_ + auVar41._0_4_;
    fVar61 = auVar59._4_4_ + auVar41._4_4_;
    fVar56 = auVar59._8_4_ + auVar41._8_4_;
    fVar85 = auVar59._12_4_ + auVar41._12_4_;
    fVar57 = fVar10 * fVar40 - fVar9 * fVar70;
    fVar68 = fVar10 * fVar44 - fVar9 * fVar35;
    fVar19 = fVar10 * fVar45 - fVar9 * fVar37;
    fVar20 = fVar10 * fVar46 - fVar9 * fVar6;
    fVar28 = fVar11 * fVar70 - fVar10 * fVar58;
    fVar30 = fVar11 * fVar35 - fVar10 * fVar61;
    fVar31 = fVar11 * fVar37 - fVar10 * fVar56;
    fVar32 = fVar11 * fVar6 - fVar10 * fVar85;
    fVar40 = fVar9 * fVar58 - fVar11 * fVar40;
    fVar44 = fVar9 * fVar61 - fVar11 * fVar44;
    fVar45 = fVar9 * fVar56 - fVar11 * fVar45;
    fVar46 = fVar9 * fVar85 - fVar11 * fVar46;
    auVar60._0_4_ = fVar57 * fVar57 + fVar28 * fVar28 + fVar40 * fVar40;
    auVar60._4_4_ = fVar68 * fVar68 + fVar30 * fVar30 + fVar44 * fVar44;
    auVar60._8_4_ = fVar19 * fVar19 + fVar31 * fVar31 + fVar45 * fVar45;
    auVar60._12_4_ = fVar20 * fVar20 + fVar32 * fVar32 + fVar46 * fVar46;
    auVar27 = NEON_ext(auVar26,auVar26,8,1);
    auVar41 = NEON_ext(auVar17,auVar17,8,1);
    auVar4._8_8_ = 0xffffffffffffffff;
    auVar4._0_8_ = 0xffffffffffffffff;
    auVar97 = NEON_sshl(auVar60,auVar4,4);
    auVar82 = NEON_ext(auVar23,auVar23,8,1);
    auVar29 = NEON_ext(auVar25,auVar25,8,1);
    fVar57 = (auVar27._0_4_ * fVar57 + auVar26._0_4_ * fVar28 + auVar26._4_4_ * fVar40) *
             (float)(0x5f375a86 - auVar97._0_4_);
    fVar68 = (auVar41._0_4_ * fVar68 + auVar17._0_4_ * fVar30 + auVar17._4_4_ * fVar44) *
             (float)(0x5f375a86 - auVar97._4_4_);
    fVar19 = (auVar82._0_4_ * fVar19 + auVar23._0_4_ * fVar31 + auVar23._4_4_ * fVar45) *
             (float)(0x5f375a86 - auVar97._8_4_);
    fVar20 = (auVar29._0_4_ * fVar20 + auVar25._0_4_ * fVar32 + auVar25._4_4_ * fVar46) *
             (float)(0x5f375a86 - auVar97._12_4_);
    iVar93 = -(uint)(fVar33 < fVar68);
    iVar94 = -(uint)(fVar62 < fVar19);
    iVar95 = -(uint)(fVar33 < fVar20);
    uVar21 = (uint)(-(fVar62 < fVar57) & bVar69);
    auVar22._0_8_ =
         CONCAT17((byte)((uint)iVar93 >> 0x18) & bVar72,
                  (uint7)CONCAT14((byte)iVar93 & bVar71,uVar21));
    auVar22[8] = (byte)iVar94 & bVar73;
    auVar22[9] = (byte)((uint)iVar94 >> 8) & bVar74;
    auVar22[10] = (byte)((uint)iVar94 >> 0x10) & bVar75;
    auVar22[0xb] = (byte)((uint)iVar94 >> 0x18) & bVar76;
    auVar24[0xc] = (byte)iVar95 & bVar77;
    auVar24._0_12_ = auVar22;
    auVar24[0xd] = (byte)((uint)iVar95 >> 8) & bVar78;
    auVar24[0xe] = (byte)((uint)iVar95 >> 0x10) & bVar79;
    auVar24[0xf] = (byte)((uint)iVar95 >> 0x18) & bVar80;
    iVar93 = -(uint)(fVar68 < 0.0 - fVar33);
    iVar94 = -(uint)(fVar19 < 0.0 - fVar62);
    iVar95 = -(uint)(fVar20 < 0.0 - fVar33);
    uVar15 = (uint)(-(fVar57 < 0.0 - fVar62) & bVar69);
    auVar16._0_8_ =
         CONCAT17((byte)((uint)iVar93 >> 0x18) & bVar72,
                  (uint7)CONCAT14((byte)iVar93 & bVar71,uVar15));
    auVar16[8] = (byte)iVar94 & bVar73;
    auVar16[9] = (byte)((uint)iVar94 >> 8) & bVar74;
    auVar16[10] = (byte)((uint)iVar94 >> 0x10) & bVar75;
    auVar16[0xb] = (byte)((uint)iVar94 >> 0x18) & bVar76;
    auVar18[0xc] = (byte)iVar95 & bVar77;
    auVar18._0_12_ = auVar16;
    auVar18[0xd] = (byte)((uint)iVar95 >> 8) & bVar78;
    auVar18[0xe] = (byte)((uint)iVar95 >> 0x10) & bVar79;
    auVar18[0xf] = (byte)((uint)iVar95 >> 0x18) & bVar80;
    uVar1 = 0;
    if (((uVar12 >> (ulong)(uVar15 + (int)((ulong)auVar16._0_8_ >> 0x20) +
                            auVar16._8_4_ + auVar18._12_4_ & 0x1f) |
         uVar12 >> (ulong)(uVar21 + (int)((ulong)auVar22._0_8_ >> 0x20) +
                           auVar22._8_4_ + auVar24._12_4_ & 0x1f)) & uVar12) != 0) {
      uVar1 = uVar89;
    }
    return uVar1;
  }
  return uVar89;
}


