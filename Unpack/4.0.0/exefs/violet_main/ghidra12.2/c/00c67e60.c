/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c67e60; name: FUN_00c67e60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c67e60(undefined1 param_1 [16],undefined1 param_2 [16],float *param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined1 auVar27 [16];
  int iVar28;
  int iVar29;
  int iVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  float fVar38;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar39 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  float fVar47;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar57 [16];
  float fVar60;
  undefined1 auVar58 [16];
  float fVar61;
  undefined1 auVar59 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  byte bVar71;
  float fVar72;
  byte bVar75;
  float fVar76;
  byte bVar77;
  float fVar78;
  byte bVar79;
  undefined1 auVar73 [16];
  float fVar80;
  undefined1 auVar74 [16];
  float fVar81;
  float fVar82;
  int iVar83;
  byte bVar90;
  float fVar91;
  float fVar92;
  byte bVar93;
  ulong uVar84;
  byte bVar88;
  byte bVar89;
  float fVar94;
  byte bVar97;
  byte bVar98;
  byte bVar103;
  byte bVar104;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar95;
  int iVar96;
  byte bVar99;
  float fVar100;
  float fVar101;
  int iVar102;
  byte bVar105;
  undefined1 auVar87 [16];
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 uVar131;
  undefined1 uVar132;
  undefined1 uVar133;
  undefined1 uVar134;
  undefined1 uVar135;
  undefined1 uVar136;
  undefined1 uVar137;
  undefined1 uVar138;
  undefined1 uVar139;
  undefined1 uVar140;
  undefined1 uVar141;
  undefined1 uVar142;
  ulong uVar143;
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  byte bVar149;
  byte bVar150;
  byte bVar151;
  byte bVar152;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  undefined1 uVar158;
  undefined1 uVar159;
  undefined1 uVar160;
  undefined1 uVar161;
  undefined1 uVar162;
  undefined1 uVar163;
  undefined1 uVar164;
  undefined1 uVar165;
  undefined1 auVar166 [16];
  
  fVar37 = param_1._12_4_;
  fVar36 = param_1._8_4_;
  fVar35 = param_1._4_4_;
  fVar33 = param_1._0_4_;
  fVar47 = fVar33 * param_2._0_4_;
  fVar54 = fVar35 * param_2._4_4_;
  fVar55 = fVar36 * param_2._8_4_;
  fVar56 = fVar37 * param_2._12_4_;
  auVar31._0_4_ = fVar47 + fVar54;
  auVar31._4_4_ = fVar55 + fVar56;
  auVar31._8_4_ = fVar47 + fVar54;
  auVar31._12_4_ = fVar55 + fVar56;
  auVar48 = NEON_ext(auVar31,auVar31,4,1);
  auVar65 = NEON_fmov(0xbf800000,4);
  auVar58._8_4_ = 0xc0490fdb;
  auVar58._0_8_ = 0xc0490fdbc0490fdb;
  auVar58._12_4_ = 0xc0490fdb;
  auVar32._0_4_ = auVar48._0_4_ + auVar48._4_4_;
  auVar32._4_4_ = auVar48._8_4_ + auVar48._12_4_;
  auVar32._8_4_ = auVar48._0_4_ + auVar48._4_4_;
  auVar32._12_4_ = auVar48._8_4_ + auVar48._12_4_;
  auVar73 = NEON_fmax(auVar32,auVar65,4);
  auVar48 = NEON_fmov(0x3f800000,4);
  auVar73 = NEON_fmin(auVar73,auVar48,4);
  auVar130._8_4_ = 0x40490fdb;
  auVar130._0_8_ = 0x40490fdb40490fdb;
  auVar130._12_4_ = 0x40490fdb;
  auVar85._0_4_ = -(uint)(auVar73._0_4_ < 0.0);
  auVar85._4_4_ = -(uint)(auVar73._4_4_ < 0.0);
  auVar85._8_4_ = -(uint)(auVar73._8_4_ < 0.0);
  auVar85._12_4_ = -(uint)(auVar73._12_4_ < 0.0);
  auVar86 = auVar48 ^ (auVar48 ^ auVar65) & auVar85;
  fVar72 = auVar73._0_4_ * auVar86._0_4_;
  fVar76 = auVar73._4_4_ * auVar86._4_4_;
  fVar78 = auVar73._8_4_ * auVar86._8_4_;
  fVar80 = auVar73._12_4_ * auVar86._12_4_;
  fVar38 = param_2._0_4_ * auVar86._0_4_;
  fVar44 = param_2._4_4_ * auVar86._4_4_;
  fVar45 = param_2._8_4_ * auVar86._8_4_;
  fVar46 = param_2._12_4_ * auVar86._12_4_;
  fVar81 = auVar48._0_4_;
  fVar91 = auVar48._4_4_;
  fVar94 = auVar48._8_4_;
  fVar100 = auVar48._12_4_;
  fVar82 = SQRT(fVar81 - fVar72 * fVar72);
  fVar92 = SQRT(fVar91 - fVar76 * fVar76);
  fVar95 = SQRT(fVar94 - fVar78 * fVar78);
  fVar101 = SQRT(fVar100 - fVar80 * fVar80);
  bVar125 = (byte)((int)fVar82 >> 0x1f);
  bVar126 = (byte)((int)fVar92 >> 0x1f);
  bVar127 = (byte)((int)fVar95 >> 0x1f);
  bVar128 = (byte)((int)fVar101 >> 0x1f);
  iVar2 = -(uint)(fVar82 == 0.0);
  iVar3 = -(uint)(fVar95 == 0.0);
  iVar4 = -(uint)(fVar101 == 0.0);
  auVar129[9] = bVar127;
  auVar129[8] = bVar127;
  auVar129[10] = bVar127;
  auVar129[0xb] = bVar127;
  auVar129[0xc] = bVar128;
  auVar129[0xd] = bVar128;
  auVar129[0xe] = bVar128;
  auVar129[0xf] = bVar128;
  auVar129[1] = bVar125;
  auVar129[0] = bVar125;
  auVar129[2] = bVar125;
  auVar129[3] = bVar125;
  auVar129[4] = bVar126;
  auVar129[5] = bVar126;
  auVar129[6] = bVar126;
  auVar129[7] = bVar126;
  iVar6 = -(uint)(fVar72 == INFINITY);
  iVar7 = -(uint)(fVar78 == INFINITY);
  iVar8 = -(uint)(fVar80 == INFINITY);
  auVar144._0_4_ = -(uint)(0.0 <= fVar82 / fVar72);
  auVar144._4_4_ = -(uint)(0.0 <= fVar92 / fVar76);
  auVar144._8_4_ = -(uint)(0.0 <= fVar95 / fVar78);
  auVar144._12_4_ = -(uint)(0.0 <= fVar101 / fVar80);
  fVar47 = ABS(fVar82 / fVar72);
  fVar54 = ABS(fVar92 / fVar76);
  uVar131 = SUB41(fVar54,0);
  uVar132 = (undefined1)((uint)fVar54 >> 8);
  uVar133 = (undefined1)((uint)fVar54 >> 0x10);
  uVar134 = (undefined1)((uint)fVar54 >> 0x18);
  fVar55 = ABS(fVar95 / fVar78);
  uVar135 = SUB41(fVar55,0);
  uVar136 = (undefined1)((uint)fVar55 >> 8);
  uVar137 = (undefined1)((uint)fVar55 >> 0x10);
  uVar138 = (undefined1)((uint)fVar55 >> 0x18);
  fVar56 = ABS(fVar101 / fVar80);
  uVar139 = SUB41(fVar56,0);
  uVar140 = (undefined1)((uint)fVar56 >> 8);
  uVar141 = (undefined1)((uint)fVar56 >> 0x10);
  uVar142 = (undefined1)((uint)fVar56 >> 0x18);
  iVar10 = -(uint)(fVar72 == -INFINITY);
  iVar11 = -(uint)(fVar78 == -INFINITY);
  iVar12 = -(uint)(fVar80 == -INFINITY);
  iVar23 = -(uint)(fVar47 <= 0.41421354);
  iVar24 = -(uint)(fVar54 <= 0.41421354);
  bVar149 = (byte)((uint)iVar24 >> 8);
  bVar150 = (byte)((uint)iVar24 >> 0x10);
  bVar151 = (byte)((uint)iVar24 >> 0x18);
  iVar25 = -(uint)(fVar55 <= 0.41421354);
  bVar152 = (byte)((uint)iVar25 >> 8);
  bVar153 = (byte)((uint)iVar25 >> 0x10);
  bVar154 = (byte)((uint)iVar25 >> 0x18);
  iVar26 = -(uint)(fVar56 <= 0.41421354);
  bVar155 = (byte)((uint)iVar26 >> 8);
  bVar156 = (byte)((uint)iVar26 >> 0x10);
  bVar157 = (byte)((uint)iVar26 >> 0x18);
  iVar28 = -(uint)(fVar47 <= 2.4142137);
  iVar29 = -(uint)(fVar54 <= 2.4142137);
  uVar158 = (undefined1)iVar29;
  uVar159 = (undefined1)((uint)iVar29 >> 8);
  uVar160 = (undefined1)((uint)iVar29 >> 0x10);
  uVar161 = (undefined1)((uint)iVar29 >> 0x18);
  iVar30 = -(uint)(fVar55 <= 2.4142137);
  iVar29 = -(uint)(fVar56 <= 2.4142137);
  uVar162 = (undefined1)iVar29;
  uVar163 = (undefined1)((uint)iVar29 >> 8);
  uVar164 = (undefined1)((uint)iVar29 >> 0x10);
  uVar165 = (undefined1)((uint)iVar29 >> 0x18);
  auVar145[0xc] = uVar162;
  auVar145._8_4_ = iVar30;
  auVar145[0xd] = uVar163;
  auVar145[0xe] = uVar164;
  auVar145[0xf] = uVar165;
  auVar145[4] = uVar158;
  auVar145._0_4_ = iVar28;
  auVar145[5] = uVar159;
  auVar145[6] = uVar160;
  auVar145[7] = uVar161;
  auVar48 = auVar65 ^ (auVar65 ^ auVar48) & auVar144;
  auVar146._0_4_ = -auVar48._0_4_;
  auVar146._4_4_ = -auVar48._4_4_;
  auVar146._8_4_ = -auVar48._8_4_;
  auVar146._12_4_ = -auVar48._12_4_;
  iVar29 = -(uint)(fVar82 == INFINITY);
  bVar108 = (byte)((uint)iVar29 >> 0x18);
  iVar15 = -(uint)(fVar95 == INFINITY);
  bVar112 = (byte)((uint)iVar15 >> 8);
  bVar114 = (byte)((uint)iVar15 >> 0x10);
  bVar116 = (byte)((uint)iVar15 >> 0x18);
  iVar16 = -(uint)(fVar101 == INFINITY);
  bVar119 = (byte)((uint)iVar16 >> 8);
  bVar121 = (byte)((uint)iVar16 >> 0x10);
  bVar123 = (byte)((uint)iVar16 >> 0x18);
  auVar63[0xc] = uVar162;
  auVar63._8_4_ = iVar30;
  auVar63[0xd] = uVar163;
  auVar63[0xe] = uVar164;
  auVar63[0xf] = uVar165;
  auVar63[4] = uVar158;
  auVar63._0_4_ = iVar28;
  auVar63[5] = uVar159;
  auVar63[6] = uVar160;
  auVar63[7] = uVar161;
  auVar130 = auVar130 ^ (auVar130 ^ auVar58) & auVar129;
  iVar83 = -(uint)(fVar82 == -0.0);
  iVar96 = -(uint)(fVar95 == -0.0);
  iVar102 = -(uint)(fVar101 == -0.0);
  auVar146 = auVar146 ^ (auVar146 ^ auVar48) & auVar145;
  bVar88 = (byte)((uint)iVar83 >> 8);
  bVar89 = (byte)((uint)iVar83 >> 0x10);
  bVar90 = (byte)((uint)iVar83 >> 0x18);
  bVar93 = (byte)(-(uint)(fVar92 == -0.0) >> 0x18);
  bVar97 = (byte)((uint)iVar96 >> 8);
  bVar98 = (byte)((uint)iVar96 >> 0x10);
  bVar99 = (byte)((uint)iVar96 >> 0x18);
  bVar103 = (byte)((uint)iVar102 >> 8);
  bVar104 = (byte)((uint)iVar102 >> 0x10);
  bVar105 = (byte)((uint)iVar102 >> 0x18);
  bVar106 = ~(byte)((uint)iVar29 >> 8);
  bVar107 = ~(byte)((uint)iVar29 >> 0x10);
  bVar109 = ~bVar108;
  bVar110 = ~(byte)(-(uint)(fVar92 == INFINITY) >> 0x18);
  bVar111 = ~(byte)iVar15;
  bVar113 = ~bVar112;
  bVar115 = ~bVar114;
  bVar117 = ~bVar116;
  bVar118 = ~(byte)iVar16;
  bVar120 = ~bVar119;
  bVar122 = ~bVar121;
  bVar124 = ~bVar123;
  auVar66._0_4_ = (fVar47 + auVar65._0_4_) / (fVar47 + fVar81);
  auVar66._4_4_ = (fVar54 + auVar65._4_4_) / (fVar54 + fVar91);
  auVar66._8_4_ = (fVar55 + auVar65._8_4_) / (fVar55 + fVar94);
  auVar66._12_4_ = (fVar56 + auVar65._12_4_) / (fVar56 + fVar100);
  auVar18[4] = uVar131;
  auVar18._0_4_ = fVar47;
  auVar18[5] = uVar132;
  auVar18[6] = uVar133;
  auVar18[7] = uVar134;
  auVar18[8] = uVar135;
  auVar18[9] = uVar136;
  auVar18[10] = uVar137;
  auVar18[0xb] = uVar138;
  auVar18[0xc] = uVar139;
  auVar18[0xd] = uVar140;
  auVar18[0xe] = uVar141;
  auVar18[0xf] = uVar142;
  auVar48 = NEON_frecpe(auVar18,4);
  auVar19[4] = uVar131;
  auVar19._0_4_ = fVar47;
  auVar19[5] = uVar132;
  auVar19[6] = uVar133;
  auVar19[7] = uVar134;
  auVar19[8] = uVar135;
  auVar19[9] = uVar136;
  auVar19[10] = uVar137;
  auVar19[0xb] = uVar138;
  auVar19[0xc] = uVar139;
  auVar19[0xd] = uVar140;
  auVar19[0xe] = uVar141;
  auVar19[0xf] = uVar142;
  auVar65 = NEON_frecps(auVar48,auVar19,4);
  auVar62._0_4_ = auVar48._0_4_ * auVar65._0_4_;
  auVar62._4_4_ = auVar48._4_4_ * auVar65._4_4_;
  auVar62._8_4_ = auVar48._8_4_ * auVar65._8_4_;
  auVar62._12_4_ = auVar48._12_4_ * auVar65._12_4_;
  fVar82 = *param_3;
  auVar20[4] = uVar131;
  auVar20._0_4_ = fVar47;
  auVar20[5] = uVar132;
  auVar20[6] = uVar133;
  auVar20[7] = uVar134;
  auVar20[8] = uVar135;
  auVar20[9] = uVar136;
  auVar20[10] = uVar137;
  auVar20[0xb] = uVar138;
  auVar20[0xc] = uVar139;
  auVar20[0xd] = uVar140;
  auVar20[0xe] = uVar141;
  auVar20[0xf] = uVar142;
  auVar48 = NEON_frecps(auVar62,auVar20,4);
  auVar166._0_4_ = auVar62._0_4_ * auVar48._0_4_;
  auVar166._4_4_ = auVar62._4_4_ * auVar48._4_4_;
  auVar166._8_4_ = auVar62._8_4_ * auVar48._8_4_;
  auVar166._12_4_ = auVar62._12_4_ * auVar48._12_4_;
  auVar64._8_4_ = 0xbfc90fdb;
  auVar64._0_8_ = 0xbfc90fdbbfc90fdb;
  auVar64._12_4_ = 0xbfc90fdb;
  auVar27[4] = uVar158;
  auVar27._0_4_ = iVar28;
  auVar27[5] = uVar159;
  auVar27[6] = uVar160;
  auVar27[7] = uVar161;
  auVar27[8] = (char)iVar30;
  auVar27[9] = (char)((uint)iVar30 >> 8);
  auVar27[10] = (char)((uint)iVar30 >> 0x10);
  auVar27[0xb] = (char)((uint)iVar30 >> 0x18);
  auVar27[0xc] = uVar162;
  auVar27[0xd] = uVar163;
  auVar27[0xe] = uVar164;
  auVar27[0xf] = uVar165;
  auVar66 = auVar66 ^ (auVar66 ^ auVar166) & ~auVar27;
  auVar73[8] = 0xdb;
  auVar73._0_8_ = 0x3f490fdb3f490fdb;
  auVar73[9] = 0xf;
  auVar73[10] = 0x49;
  auVar73[0xb] = 0x3f;
  auVar73[0xc] = 0xdb;
  auVar73[0xd] = 0xf;
  auVar73[0xe] = 0x49;
  auVar73[0xf] = 0x3f;
  auVar64 = auVar64 ^ (auVar64 ^ auVar73) & auVar63;
  auVar21[4] = uVar131;
  auVar21._0_4_ = fVar47;
  auVar21[5] = uVar132;
  auVar21[6] = uVar133;
  auVar21[7] = uVar134;
  auVar21[8] = uVar135;
  auVar21[9] = uVar136;
  auVar21[10] = uVar137;
  auVar21[0xb] = uVar138;
  auVar21[0xc] = uVar139;
  auVar21[0xd] = uVar140;
  auVar21[0xe] = uVar141;
  auVar21[0xf] = uVar142;
  auVar22[4] = (byte)iVar24;
  auVar22._0_4_ = iVar23;
  auVar22[5] = bVar149;
  auVar22[6] = bVar150;
  auVar22[7] = bVar151;
  auVar22[8] = (byte)iVar25;
  auVar22[9] = bVar152;
  auVar22[10] = bVar153;
  auVar22[0xb] = bVar154;
  auVar22[0xc] = (byte)iVar26;
  auVar22[0xd] = bVar155;
  auVar22[0xe] = bVar156;
  auVar22[0xf] = bVar157;
  auVar66 = auVar66 ^ (auVar66 ^ auVar21) & auVar22;
  fVar95 = auVar66._0_4_;
  fVar47 = fVar95 * fVar95;
  fVar101 = auVar66._4_4_;
  fVar54 = fVar101 * fVar101;
  fVar60 = auVar66._8_4_;
  fVar55 = fVar60 * fVar60;
  fVar61 = auVar66._12_4_;
  fVar56 = fVar61 * fVar61;
  bVar71 = (byte)((int)fVar72 >> 0x1f);
  bVar75 = (byte)((int)fVar76 >> 0x1f);
  bVar77 = (byte)((int)fVar78 >> 0x1f);
  bVar79 = (byte)((int)fVar80 >> 0x1f);
  uVar143 = (ulong)CONCAT13(~bVar90,CONCAT12(~bVar89,CONCAT11(~bVar88,~(byte)iVar83))) &
            0x40490fdb40490fdb;
  auVar67._0_4_ =
       auVar146._0_4_ *
       ((float)CONCAT13(auVar64[3] & ~(byte)((uint)iVar23 >> 0x18),
                        CONCAT12(auVar64[2] & ~(byte)((uint)iVar23 >> 0x10),
                                 CONCAT11(auVar64[1] & ~(byte)((uint)iVar23 >> 8),
                                          auVar64[0] & ~(byte)iVar23))) +
       (fVar81 + fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * 0.07692308 + -0.09090909
                                                                  ) + 0.11111111) + -0.14285715) +
                                    0.2) + -0.33333334)) * fVar95) +
       (float)CONCAT13(auVar130[3] & bVar71,
                       CONCAT12(auVar130[2] & bVar71,
                                CONCAT11(auVar130[1] & bVar71,auVar130[0] & bVar71)));
  auVar67._4_4_ =
       auVar146._4_4_ *
       ((float)CONCAT13(auVar64[7] & ~bVar151,
                        CONCAT12(auVar64[6] & ~bVar150,
                                 CONCAT11(auVar64[5] & ~bVar149,auVar64[4] & ~(byte)iVar24))) +
       (fVar91 + fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * 0.07692308 + -0.09090909
                                                                  ) + 0.11111111) + -0.14285715) +
                                    0.2) + -0.33333334)) * fVar101) +
       (float)CONCAT13(auVar130[7] & bVar75,
                       CONCAT12(auVar130[6] & bVar75,
                                CONCAT11(auVar130[5] & bVar75,auVar130[4] & bVar75)));
  auVar67._8_4_ =
       auVar146._8_4_ *
       ((float)CONCAT13(auVar64[0xb] & ~bVar154,
                        CONCAT12(auVar64[10] & ~bVar153,
                                 CONCAT11(auVar64[9] & ~bVar152,auVar64[8] & ~(byte)iVar25))) +
       (fVar94 + fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * 0.07692308 + -0.09090909
                                                                  ) + 0.11111111) + -0.14285715) +
                                    0.2) + -0.33333334)) * fVar60) +
       (float)CONCAT13(auVar130[0xb] & bVar77,
                       CONCAT12(auVar130[10] & bVar77,
                                CONCAT11(auVar130[9] & bVar77,auVar130[8] & bVar77)));
  auVar67._12_4_ =
       auVar146._12_4_ *
       ((float)CONCAT13(auVar64[0xf] & ~bVar157,
                        CONCAT12(auVar64[0xe] & ~bVar156,
                                 CONCAT11(auVar64[0xd] & ~bVar155,auVar64[0xc] & ~(byte)iVar26))) +
       (fVar100 +
       fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * 0.07692308 + -0.09090909) +
                                              0.11111111) + -0.14285715) + 0.2) + -0.33333334)) *
       fVar61) + (float)CONCAT13(auVar130[0xf] & bVar79,
                                 CONCAT12(auVar130[0xe] & bVar79,
                                          CONCAT11(auVar130[0xd] & bVar79,auVar130[0xc] & bVar79)));
  auVar147._8_4_ = 0x4016cbe4;
  auVar147._0_8_ = 0x4016cbe44016cbe4;
  auVar147._12_4_ = 0x4016cbe4;
  auVar13[1] = bVar106;
  auVar13[0] = ~(byte)iVar29;
  auVar13[2] = bVar107;
  auVar13[3] = bVar109;
  auVar13._4_3_ = 0;
  auVar13[7] = bVar110;
  auVar13[8] = bVar111;
  auVar13[9] = bVar113;
  auVar13[10] = bVar115;
  auVar13[0xb] = bVar117;
  auVar13[0xc] = bVar118;
  auVar13[0xd] = bVar120;
  auVar13[0xe] = bVar122;
  auVar13[0xf] = bVar124;
  auVar148._8_4_ = 0x3fc90fdb;
  auVar148._0_8_ = 0x3fc90fdb3fc90fdb;
  auVar148._12_4_ = 0x3fc90fdb;
  auVar14[1] = bVar106;
  auVar14[0] = ~(byte)iVar29;
  auVar14[2] = bVar107;
  auVar14[3] = bVar109;
  auVar14._4_3_ = 0;
  auVar14[7] = bVar110;
  auVar14[8] = bVar111;
  auVar14[9] = bVar113;
  auVar14[10] = bVar115;
  auVar14[0xb] = bVar117;
  auVar14[0xc] = bVar118;
  auVar14[0xd] = bVar120;
  auVar14[0xe] = bVar122;
  auVar14[0xf] = bVar124;
  auVar67 = auVar67 ^ (auVar67 ^ auVar148) & ~auVar14;
  uVar84 = CONCAT17(bVar93 & ~bVar75,(uint7)(bVar90 & ~bVar71 & 0x80) << 0x18) & 0x80ffffffffffffff;
  auVar9[1] = ~(byte)((uint)iVar10 >> 8);
  auVar9[0] = ~(byte)iVar10;
  auVar9[2] = ~(byte)((uint)iVar10 >> 0x10);
  auVar9[3] = ~(byte)((uint)iVar10 >> 0x18);
  auVar9._4_3_ = 0;
  auVar9[7] = ~(byte)(-(uint)(fVar76 == -INFINITY) >> 0x18);
  auVar9[8] = ~(byte)iVar11;
  auVar9[9] = ~(byte)((uint)iVar11 >> 8);
  auVar9[10] = ~(byte)((uint)iVar11 >> 0x10);
  auVar9[0xb] = ~(byte)((uint)iVar11 >> 0x18);
  auVar9[0xc] = ~(byte)iVar12;
  auVar9[0xd] = ~(byte)((uint)iVar12 >> 8);
  auVar9[0xe] = ~(byte)((uint)iVar12 >> 0x10);
  auVar9[0xf] = ~(byte)((uint)iVar12 >> 0x18);
  auVar67 = auVar67 ^ (auVar67 ^ auVar130 ^ (auVar130 ^ auVar147) & ~auVar13) & ~auVar9;
  auVar74[0] = ((byte)uVar143 | (byte)iVar83 & 0xdb) & bVar71;
  auVar74[1] = ((byte)(uVar143 >> 8) | bVar88 & 0xf) & bVar71;
  auVar74[2] = ((byte)(uVar143 >> 0x10) | bVar89 & 0x49) & bVar71;
  auVar74[8] = (~(byte)iVar96 & 0xdb | (byte)iVar96 & 0xdb) & bVar77;
  auVar74[9] = (~bVar97 & 0xf | bVar97 & 0xf) & bVar77;
  auVar74[10] = (~bVar98 & 0x49 | bVar98 & 0x49) & bVar77;
  auVar74[0xc] = (~(byte)iVar102 & 0xdb | (byte)iVar102 & 0xdb) & bVar79;
  auVar74[0xd] = (~bVar103 & 0xf | bVar103 & 0xf) & bVar79;
  auVar74[0xe] = (~bVar104 & 0x49 | bVar104 & 0x49) & bVar79;
  auVar17[8] = (byte)iVar15 & 0xdb;
  auVar17._0_8_ =
       CONCAT17(bVar126 & bVar110,
                (uint7)CONCAT13(bVar125 & bVar109 & 0x80 | bVar108 & 0x3f,(int3)iVar29)) &
       0x80490fdbff490fdb;
  auVar17[9] = bVar112 & 0xf;
  auVar17[10] = bVar114 & 0x49;
  auVar17[0xb] = bVar127 & bVar117 & 0x80 | bVar116 & 0x3f;
  auVar17[0xc] = (byte)iVar16 & 0xdb;
  auVar17[0xd] = bVar119 & 0xf;
  auVar17[0xe] = bVar121 & 0x49;
  auVar17[0xf] = bVar128 & bVar124 & 0x80 | bVar123 & 0x3f;
  auVar5[1] = ~(byte)((uint)iVar6 >> 8);
  auVar5[0] = ~(byte)iVar6;
  auVar5[2] = ~(byte)((uint)iVar6 >> 0x10);
  auVar5[3] = ~(byte)((uint)iVar6 >> 0x18);
  auVar5._4_3_ = 0;
  auVar5[7] = ~(byte)(-(uint)(fVar76 == INFINITY) >> 0x18);
  auVar5[8] = ~(byte)iVar7;
  auVar5[9] = ~(byte)((uint)iVar7 >> 8);
  auVar5[10] = ~(byte)((uint)iVar7 >> 0x10);
  auVar5[0xb] = ~(byte)((uint)iVar7 >> 0x18);
  auVar5[0xc] = ~(byte)iVar8;
  auVar5[0xd] = ~(byte)((uint)iVar8 >> 8);
  auVar5[0xe] = ~(byte)((uint)iVar8 >> 0x10);
  auVar5[0xf] = ~(byte)((uint)iVar8 >> 0x18);
  auVar67 = auVar67 ^ (auVar67 ^ auVar17) & ~auVar5;
  auVar74[3] = ((byte)(uVar143 >> 0x18) | bVar90 & 0xc0) & bVar71 | (byte)(uVar84 >> 0x18);
  auVar74._4_3_ = 0;
  auVar74[7] = bVar93 & 0xc0 & bVar75 | (byte)(uVar84 >> 0x38);
  auVar74[0xb] = (~bVar99 & 0x40 | bVar99 & 0xc0) & bVar77 | bVar99 & ~bVar77 & 0x80;
  auVar74[0xf] = (~bVar105 & 0x40 | bVar105 & 0xc0) & bVar79 | bVar105 & ~bVar79 & 0x80;
  auVar86[1] = ~(byte)((uint)iVar2 >> 8);
  auVar86[0] = ~(byte)iVar2;
  auVar86[2] = ~(byte)((uint)iVar2 >> 0x10);
  auVar86[3] = ~(byte)((uint)iVar2 >> 0x18);
  auVar86._4_3_ = 0;
  auVar86[7] = ~(byte)(-(uint)(fVar92 == 0.0) >> 0x18);
  auVar86[8] = ~(byte)iVar3;
  auVar86[9] = ~(byte)((uint)iVar3 >> 8);
  auVar86[10] = ~(byte)((uint)iVar3 >> 0x10);
  auVar86[0xb] = ~(byte)((uint)iVar3 >> 0x18);
  auVar86[0xc] = ~(byte)iVar4;
  auVar86[0xd] = ~(byte)((uint)iVar4 >> 8);
  auVar86[0xe] = ~(byte)((uint)iVar4 >> 0x10);
  auVar86[0xf] = ~(byte)((uint)iVar4 >> 0x18);
  auVar67 = auVar67 ^ (auVar67 ^ auVar74) & ~auVar86;
  fVar55 = auVar67._0_4_;
  fVar56 = auVar67._12_4_;
  fVar47 = fVar55 - fVar55 * fVar82;
  fVar56 = fVar56 - fVar56 * fVar82;
  fVar54 = fVar82 * fVar55;
  auVar87._8_4_ = 0x3f000000;
  auVar87._0_8_ = 0x3f0000003f000000;
  auVar87._12_4_ = 0x3f000000;
  iVar2 = -(uint)(ABS(fVar47) == INFINITY);
  iVar3 = -(uint)(ABS(fVar54) == INFINITY);
  iVar4 = -(uint)(ABS(fVar55) == INFINITY);
  iVar6 = -(uint)(ABS(fVar56) == INFINITY);
  auVar68._0_4_ = -(uint)(0.0 <= fVar47);
  auVar68._4_4_ = -(uint)(0.0 <= fVar54);
  auVar68._8_4_ = -(uint)(0.0 <= fVar55);
  auVar68._12_4_ = -(uint)(0.0 <= fVar56);
  auVar1[0xb] = 0xbf;
  auVar1._0_11_ = ZEXT811(0xbf000000bf000000);
  auVar1._12_3_ = 0;
  auVar1[0xf] = 0xbf;
  auVar69[0xb] = 0xbf;
  auVar69._0_11_ = ZEXT811(0xbf000000bf000000);
  auVar69._12_3_ = 0;
  auVar69[0xf] = 0xbf;
  auVar69 = auVar69 ^ (auVar1 ^ auVar87) & auVar68;
  auVar70._0_4_ = (int)(auVar69._0_4_ + fVar47 * 0.15915494);
  auVar70._4_4_ = (int)(auVar69._4_4_ + fVar54 * 0.15915494);
  auVar70._8_4_ = (int)(auVar69._8_4_ + fVar55 * 0.15915494);
  auVar70._12_4_ = (int)(auVar69._12_4_ + fVar56 * 0.15915494);
  auVar48 = NEON_scvtf(auVar70,4);
  fVar47 = fVar47 + auVar48._0_4_ * -6.2831855;
  fVar54 = fVar54 + auVar48._4_4_ * -6.2831855;
  fVar55 = fVar55 + auVar48._8_4_ * -6.2831855;
  fVar56 = fVar56 + auVar48._12_4_ * -6.2831855;
  fVar47 = (float)((uint)(-3.1415927 - fVar47) ^
                  ((uint)(-3.1415927 - fVar47) ^ (uint)fVar47) & ~-(uint)(fVar47 < -1.5707964));
  fVar54 = (float)((uint)(-3.1415927 - fVar54) ^
                  ((uint)(-3.1415927 - fVar54) ^ (uint)fVar54) & ~-(uint)(fVar54 < -1.5707964));
  fVar55 = (float)((uint)(-3.1415927 - fVar55) ^
                  ((uint)(-3.1415927 - fVar55) ^ (uint)fVar55) & ~-(uint)(fVar55 < -1.5707964));
  fVar56 = (float)((uint)(-3.1415927 - fVar56) ^
                  ((uint)(-3.1415927 - fVar56) ^ (uint)fVar56) & ~-(uint)(fVar56 < -1.5707964));
  fVar47 = (float)((uint)(3.1415927 - fVar47) ^
                  ((uint)(3.1415927 - fVar47) ^ (uint)fVar47) & ~-(uint)(1.5707964 < fVar47));
  fVar54 = (float)((uint)(3.1415927 - fVar54) ^
                  ((uint)(3.1415927 - fVar54) ^ (uint)fVar54) & ~-(uint)(1.5707964 < fVar54));
  fVar55 = (float)((uint)(3.1415927 - fVar55) ^
                  ((uint)(3.1415927 - fVar55) ^ (uint)fVar55) & ~-(uint)(1.5707964 < fVar55));
  fVar56 = (float)((uint)(3.1415927 - fVar56) ^
                  ((uint)(3.1415927 - fVar56) ^ (uint)fVar56) & ~-(uint)(1.5707964 < fVar56));
  fVar95 = fVar47 * fVar47;
  fVar101 = fVar54 * fVar54;
  fVar60 = fVar55 * fVar55;
  fVar61 = fVar56 * fVar56;
  auVar59._8_4_ = 0x7fc00000;
  auVar59._0_8_ = 0x7fc000007fc00000;
  auVar59._12_4_ = 0x7fc00000;
  auVar57._0_4_ =
       fVar47 * (fVar81 + fVar95 * (fVar95 * (fVar95 * (fVar95 * (fVar95 * -2.5052108e-08 +
                                                                 2.7557319e-06) + -0.0001984127) +
                                             0.008333334) + -0.16666667));
  auVar57._4_4_ =
       fVar54 * (fVar91 + fVar101 * (fVar101 * (fVar101 * (fVar101 * (fVar101 * -2.5052108e-08 +
                                                                     2.7557319e-06) + -0.0001984127)
                                               + 0.008333334) + -0.16666667));
  auVar57._8_4_ =
       fVar55 * (fVar94 + fVar60 * (fVar60 * (fVar60 * (fVar60 * (fVar60 * -2.5052108e-08 +
                                                                 2.7557319e-06) + -0.0001984127) +
                                             0.008333334) + -0.16666667));
  auVar57._12_4_ =
       fVar56 * (fVar100 +
                fVar61 * (fVar61 * (fVar61 * (fVar61 * (fVar61 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar48[1] = ~(byte)((uint)iVar2 >> 8);
  auVar48[0] = ~(byte)iVar2;
  auVar48[2] = ~(byte)((uint)iVar2 >> 0x10);
  auVar48[3] = ~(byte)((uint)iVar2 >> 0x18);
  auVar48[4] = ~(byte)iVar3;
  auVar48[5] = ~(byte)((uint)iVar3 >> 8);
  auVar48[6] = ~(byte)((uint)iVar3 >> 0x10);
  auVar48[7] = ~(byte)((uint)iVar3 >> 0x18);
  auVar48[8] = ~(byte)iVar4;
  auVar48[9] = ~(byte)((uint)iVar4 >> 8);
  auVar48[10] = ~(byte)((uint)iVar4 >> 0x10);
  auVar48[0xb] = ~(byte)((uint)iVar4 >> 0x18);
  auVar48[0xc] = ~(byte)iVar6;
  auVar48[0xd] = ~(byte)((uint)iVar6 >> 8);
  auVar48[0xe] = ~(byte)((uint)iVar6 >> 0x10);
  auVar48[0xf] = ~(byte)((uint)iVar6 >> 0x18);
  auVar57 = auVar57 ^ (auVar57 ^ auVar59) & ~auVar48;
  fVar47 = auVar57._0_4_;
  fVar54 = auVar57._4_4_;
  fVar55 = auVar57._8_4_;
  iVar2 = -(uint)(fVar55 == 0.0);
  iVar3 = -(uint)(fVar55 == 0.0);
  iVar4 = -(uint)(fVar55 == 0.0);
  iVar6 = -(uint)(fVar55 == 0.0);
  auVar34._0_4_ = fVar33 + (fVar38 - fVar33) * fVar82;
  auVar34._4_4_ = fVar35 + (fVar44 - fVar35) * fVar82;
  auVar34._8_4_ = fVar36 + (fVar45 - fVar36) * fVar82;
  auVar34._12_4_ = fVar37 + (fVar46 - fVar37) * fVar82;
  auVar39._0_4_ = (fVar33 * fVar47 + fVar38 * fVar54) / fVar55;
  auVar39._4_4_ = (fVar35 * fVar47 + fVar44 * fVar54) / fVar55;
  auVar39._8_4_ = (fVar36 * fVar47 + fVar45 * fVar54) / fVar55;
  auVar39._12_4_ = (fVar37 * fVar47 + fVar46 * fVar54) / fVar55;
  auVar65[1] = ~(byte)((uint)iVar2 >> 8);
  auVar65[0] = ~(byte)iVar2;
  auVar65[2] = ~(byte)((uint)iVar2 >> 0x10);
  auVar65[3] = ~(byte)((uint)iVar2 >> 0x18);
  auVar65[4] = ~(byte)iVar3;
  auVar65[5] = ~(byte)((uint)iVar3 >> 8);
  auVar65[6] = ~(byte)((uint)iVar3 >> 0x10);
  auVar65[7] = ~(byte)((uint)iVar3 >> 0x18);
  auVar65[8] = ~(byte)iVar4;
  auVar65[9] = ~(byte)((uint)iVar4 >> 8);
  auVar65[10] = ~(byte)((uint)iVar4 >> 0x10);
  auVar65[0xb] = ~(byte)((uint)iVar4 >> 0x18);
  auVar65[0xc] = ~(byte)iVar6;
  auVar65[0xd] = ~(byte)((uint)iVar6 >> 8);
  auVar65[0xe] = ~(byte)((uint)iVar6 >> 0x10);
  auVar65[0xf] = ~(byte)((uint)iVar6 >> 0x18);
  auVar34 = auVar34 ^ (auVar34 ^ auVar39) & auVar65;
  auVar48 = NEON_ext(auVar34,auVar34,0xc,1);
  fVar47 = auVar34._0_4_;
  fVar54 = auVar34._4_4_;
  fVar55 = auVar34._8_4_ * auVar34._8_4_;
  fVar56 = auVar34._12_4_ * auVar34._12_4_;
  auVar40._4_12_ = auVar48._4_12_;
  auVar40._0_4_ = fVar47;
  auVar42._12_4_ = auVar48._12_4_;
  auVar42._0_8_ = auVar40._0_8_;
  auVar42._8_4_ = fVar54;
  auVar41._8_8_ = auVar42._8_8_;
  auVar41._4_4_ = auVar48._0_4_;
  auVar41._0_4_ = fVar47;
  auVar43._0_12_ = auVar41._0_12_;
  auVar43._12_4_ = auVar48._4_4_;
  NEON_ext(auVar43,auVar43,8,1);
  auVar49._0_4_ = fVar81 - (fVar47 * fVar47 + fVar47 * fVar47);
  auVar49._4_4_ = fVar91 - (fVar54 * fVar54 + fVar54 * fVar54);
  auVar49._8_4_ = fVar94 - (fVar55 + fVar55);
  auVar49._12_4_ = fVar100 - (fVar56 + fVar56);
  auVar50._4_12_ = auVar49._4_12_;
  auVar50._0_4_ = auVar49._0_4_;
  auVar52._0_8_ = auVar50._0_8_;
  auVar52._8_4_ = auVar49._4_4_;
  auVar52._12_4_ = auVar49._12_4_;
  auVar51._8_8_ = auVar52._8_8_;
  auVar51._4_4_ = auVar49._0_4_;
  auVar51._0_4_ = auVar49._0_4_;
  auVar53._0_12_ = auVar51._0_12_;
  auVar53._12_4_ = auVar49._4_4_;
  NEON_ext(auVar53,auVar53,0xc,1);
  return;
}


