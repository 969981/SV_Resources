/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b9e8a4; name: FUN_02b9e8a4
 */


undefined1  [16]
FUN_02b9e8a4(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  undefined1 auVar32 [12];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  undefined1 auVar36 [12];
  undefined1 auVar37 [12];
  undefined1 auVar38 [16];
  ulong uVar39;
  float fVar45;
  float fVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar46;
  float fVar47;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar48;
  float fVar52;
  float fVar54;
  float fVar56;
  undefined1 auVar49 [16];
  float fVar53;
  float fVar55;
  float fVar57;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  byte bVar62;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar74 [12];
  byte bVar82;
  byte bVar83;
  float fVar84;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar86 [12];
  ulong uVar85;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  uint uVar93;
  uint uVar94;
  uint uVar95;
  undefined8 in_register_00005168;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar104;
  undefined8 in_register_000051a8;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar105;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined8 in_register_000051c8;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  int iVar113;
  undefined1 auVar111 [16];
  int iVar114;
  undefined1 auVar112 [16];
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  byte bVar122;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  float fVar137;
  undefined1 auVar138 [12];
  float fVar142;
  undefined1 auVar139 [16];
  float fVar143;
  float fVar144;
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  char cVar145;
  uint uVar151;
  byte bVar152;
  uint uVar153;
  uint uVar154;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar155 [12];
  int iVar160;
  undefined8 in_register_00005368;
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  int iVar161;
  int iVar162;
  int iVar163;
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  float fVar164;
  float fVar165;
  
  fVar104 = param_4[1];
  fVar52 = param_4[2];
  fVar115 = (float)*(undefined8 *)param_4;
  fVar117 = (float)*(undefined8 *)(param_4 + 2);
  fVar116 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
  auVar139 = NEON_fmov(0x3f800000,4);
  auVar99 = NEON_fmov(0xbf800000,4);
  fVar84 = fVar52 * fVar52 + fVar52 * fVar52;
  fVar118 = (float)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20);
  fVar44 = fVar115 * fVar117 + fVar115 * fVar117;
  fVar45 = fVar115 * fVar116 + fVar115 * fVar116;
  fVar71 = fVar104 * fVar118 + fVar104 * fVar118;
  fVar72 = fVar52 * fVar118 + fVar52 * fVar118;
  fVar73 = fVar118 * 0.0 + fVar118 * 0.0;
  fVar137 = auVar139._0_4_;
  auVar87._0_4_ = fVar137 - (fVar116 * fVar116 + fVar116 * fVar116);
  fVar142 = auVar139._4_4_;
  auVar87._4_4_ = fVar142 - (fVar115 * fVar115 + fVar115 * fVar115);
  fVar143 = auVar139._8_4_;
  auVar87._8_4_ = fVar143 - (fVar115 * fVar115 + fVar115 * fVar115);
  fVar144 = auVar139._12_4_;
  auVar87._12_4_ = fVar144 - 0.0;
  fVar48 = (*param_4 * fVar118 + *param_4 * fVar118) - (fVar116 * fVar117 + fVar116 * fVar117);
  fVar52 = fVar71 - fVar44;
  fVar54 = fVar72 - fVar45;
  fVar56 = fVar73 - 0.0;
  cVar145 = (char)((uint)fVar54 >> 0x18);
  fVar164 = auVar87._0_4_ - fVar84;
  fVar165 = auVar87._4_4_ - (fVar104 * fVar104 + fVar104 * fVar104);
  fVar84 = auVar87._8_4_ - fVar84;
  auVar64._8_4_ = 0xc016cbe4;
  auVar64._0_8_ = 0xc016cbe4c016cbe4;
  auVar64._12_4_ = 0xc016cbe4;
  auVar35._4_8_ = auVar87._8_8_;
  auVar35._0_4_ = -(uint)(0.0 <= fVar54 / fVar164);
  auVar88._0_8_ = auVar35._0_8_ << 0x20;
  auVar88._8_4_ = -(uint)(0.0 <= fVar54 / fVar164);
  auVar88._12_4_ = -(uint)(0.0 <= fVar54 / fVar164);
  auVar75._0_4_ = ABS(fVar54 / fVar164);
  auVar75._4_4_ = ABS(fVar54 / fVar164);
  auVar75._8_4_ = ABS(fVar54 / fVar164);
  auVar75._12_4_ = ABS(fVar54 / fVar164);
  fVar104 = auVar75._4_4_ + auVar99._4_4_;
  auVar36._4_8_ = in_register_000051a8;
  auVar36._0_4_ = fVar104;
  auVar100._0_8_ = auVar36._0_8_ << 0x20;
  auVar100._8_4_ = auVar75._8_4_ + auVar99._8_4_;
  auVar100._12_4_ = auVar75._12_4_ + auVar99._12_4_;
  auVar37._4_8_ = in_register_000051c8;
  auVar37._0_4_ = auVar75._4_4_ + fVar142;
  auVar106._0_8_ = auVar37._0_8_ << 0x20;
  auVar106._8_4_ = auVar75._8_4_ + fVar143;
  auVar106._12_4_ = auVar75._12_4_ + fVar144;
  auVar13._4_8_ = auVar100._8_8_;
  auVar13._0_4_ = fVar104 / (auVar75._4_4_ + fVar142);
  auVar101._0_8_ = auVar13._0_8_ << 0x20;
  auVar101._8_4_ = auVar100._8_4_ / auVar106._8_4_;
  auVar101._12_4_ = auVar100._12_4_ / auVar106._12_4_;
  auVar89 = auVar99 ^ (auVar99 ^ auVar139) & auVar88;
  auVar14._4_8_ = auVar106._8_8_;
  auVar14._0_4_ = -auVar89._4_4_;
  auVar107._0_8_ = auVar14._0_8_ << 0x20;
  auVar107._8_4_ = -auVar89._8_4_;
  auVar107._12_4_ = -auVar89._12_4_;
  auVar15._4_8_ = in_register_00005168;
  auVar15._0_4_ = -(uint)(auVar75._4_4_ <= 2.4142137);
  auVar96._0_8_ = auVar15._0_8_ << 0x20;
  auVar96._8_4_ = -(uint)(auVar75._8_4_ <= 2.4142137);
  auVar96._12_4_ = -(uint)(auVar75._12_4_ <= 2.4142137);
  auVar111 = NEON_frecpe(auVar75,4);
  iVar160 = -(uint)(auVar75._4_4_ <= 0.41421354);
  auVar16._4_8_ = in_register_00005368;
  auVar16._0_4_ = iVar160;
  auVar156._0_8_ = auVar16._0_8_ << 0x20;
  auVar156._8_4_ = -(uint)(auVar75._8_4_ <= 0.41421354);
  auVar156._12_4_ = -(uint)(auVar75._12_4_ <= 0.41421354);
  auVar89 = auVar89 ^ (auVar89 ^ auVar107) & ~auVar96;
  auVar108 = NEON_frecps(auVar111,auVar75,4);
  auVar109._0_4_ = auVar111._0_4_ * auVar108._0_4_;
  auVar109._4_4_ = auVar111._4_4_ * auVar108._4_4_;
  auVar109._8_4_ = auVar111._8_4_ * auVar108._8_4_;
  auVar109._12_4_ = auVar111._12_4_ * auVar108._12_4_;
  auVar108 = NEON_frecps(auVar109,auVar75,4);
  auVar40._8_4_ = 0x4016cbe4;
  auVar40._0_8_ = 0x4016cbe44016cbe4;
  auVar40._12_4_ = 0x4016cbe4;
  auVar17._4_8_ = auVar109._8_8_;
  auVar17._0_4_ = auVar109._4_4_ * auVar108._4_4_;
  auVar110._0_8_ = auVar17._0_8_ << 0x20;
  auVar110._8_4_ = auVar109._8_4_ * auVar108._8_4_;
  auVar110._12_4_ = auVar109._12_4_ * auVar108._12_4_;
  auVar101 = auVar101 ^ (auVar101 ^ auVar110) & ~auVar96;
  auVar2._8_4_ = 0x3f490fdb;
  auVar2._0_8_ = 0x3f490fdb3f490fdb;
  auVar2._12_4_ = 0x3f490fdb;
  auVar6[8] = 0xdb;
  auVar6._0_8_ = 0xbfc90fdb00000000;
  auVar6[9] = 0xf;
  auVar6[10] = 0xc9;
  auVar6[0xb] = 0xbf;
  auVar6[0xc] = 0xdb;
  auVar6[0xd] = 0xf;
  auVar6[0xe] = 0xc9;
  auVar6[0xf] = 0xbf;
  auVar97[8] = 0xdb;
  auVar97._0_8_ = 0xbfc90fdb00000000;
  auVar97[9] = 0xf;
  auVar97[10] = 0xc9;
  auVar97[0xb] = 0xbf;
  auVar97[0xc] = 0xdb;
  auVar97[0xd] = 0xf;
  auVar97[0xe] = 0xc9;
  auVar97[0xf] = 0xbf;
  auVar97 = auVar97 ^ (auVar6 ^ auVar2) & auVar96;
  auVar75 = auVar75 ^ (auVar75 ^ auVar101) & ~auVar156;
  auVar18._1_11_ = auVar156._5_11_;
  auVar18[0] = auVar97[4] & ~(byte)iVar160;
  auVar155._0_8_ =
       CONCAT17(auVar97[7] & ~(byte)((uint)iVar160 >> 0x18),
                CONCAT16(auVar97[6] & ~(byte)((uint)iVar160 >> 0x10),
                         CONCAT15(auVar97[5] & ~(byte)((uint)iVar160 >> 8),auVar18._0_5_ << 0x20)));
  auVar155[8] = auVar97[8] & ~(byte)auVar156._8_4_;
  auVar155[9] = auVar97[9] & ~(byte)((uint)auVar156._8_4_ >> 8);
  auVar155[10] = auVar97[10] & ~(byte)((uint)auVar156._8_4_ >> 0x10);
  auVar155[0xb] = auVar97[0xb] & ~(byte)((uint)auVar156._8_4_ >> 0x18);
  auVar157[0xc] = auVar97[0xc] & ~(byte)auVar156._12_4_;
  auVar157._0_12_ = auVar155;
  auVar157[0xd] = auVar97[0xd] & ~(byte)((uint)auVar156._12_4_ >> 8);
  auVar157[0xe] = auVar97[0xe] & ~(byte)((uint)auVar156._12_4_ >> 0x10);
  auVar157[0xf] = auVar97[0xf] & ~(byte)((uint)auVar156._12_4_ >> 0x18);
  fVar104 = auVar75._4_4_;
  fVar105 = fVar104 * fVar104;
  auVar19._4_8_ = auVar101._8_8_;
  auVar19._0_4_ = fVar105;
  auVar102._0_8_ = auVar19._0_8_ << 0x20;
  fVar46 = auVar75._8_4_;
  auVar102._8_4_ = fVar46 * fVar46;
  fVar47 = auVar75._12_4_;
  auVar102._12_4_ = fVar47 * fVar47;
  auVar20._4_8_ = auVar102._8_8_;
  auVar20._0_4_ = (int)cVar145 >> 7;
  auVar103._0_8_ = auVar20._0_8_ << 0x20;
  auVar103._8_4_ = (int)cVar145 >> 7;
  auVar103._12_4_ = (int)cVar145 >> 7;
  auVar108[8] = 0xdb;
  auVar108._0_8_ = 0x40490fdb00000000;
  auVar108[9] = 0xf;
  auVar108[10] = 0x49;
  auVar108[0xb] = 0x40;
  auVar108[0xc] = 0xdb;
  auVar108[0xd] = 0xf;
  auVar108[0xe] = 0x49;
  auVar108[0xf] = 0x40;
  auVar1[8] = 0xdb;
  auVar1._0_8_ = 0xc0490fdb00000000;
  auVar1[9] = 0xf;
  auVar1[10] = 0x49;
  auVar1[0xb] = 0xc0;
  auVar1[0xc] = 0xdb;
  auVar1[0xd] = 0xf;
  auVar1[0xe] = 0x49;
  auVar1[0xf] = 0xc0;
  auVar111[8] = 0xdb;
  auVar111._0_8_ = 0x40490fdb00000000;
  auVar111[9] = 0xf;
  auVar111[10] = 0x49;
  auVar111[0xb] = 0x40;
  auVar111[0xc] = 0xdb;
  auVar111[0xd] = 0xf;
  auVar111[0xe] = 0x49;
  auVar111[0xf] = 0x40;
  auVar111 = auVar111 ^ (auVar108 ^ auVar1) & auVar103;
  iVar160 = -(uint)(fVar54 == INFINITY);
  iVar113 = -(uint)(fVar54 == INFINITY);
  iVar114 = -(uint)(fVar54 == INFINITY);
  fVar104 = auVar89._4_4_ *
            ((float)((ulong)auVar155._0_8_ >> 0x20) +
            (fVar142 +
            fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * 0.07692308 +
                                                                  -0.09090909) + 0.11111111) +
                                            -0.14285715) + 0.2) + -0.33333334)) * fVar104);
  auVar21._4_8_ = auVar75._8_8_;
  auVar21._0_4_ = fVar104;
  auVar76._0_8_ = auVar21._0_8_ << 0x20;
  auVar76._8_4_ =
       auVar89._8_4_ *
       (auVar155._8_4_ +
       (fVar143 +
       auVar102._8_4_ *
       (auVar102._8_4_ *
        (auVar102._8_4_ *
         (auVar102._8_4_ *
          (auVar102._8_4_ * (auVar102._8_4_ * 0.07692308 + -0.09090909) + 0.11111111) + -0.14285715)
        + 0.2) + -0.33333334)) * fVar46);
  auVar76._12_4_ =
       auVar89._12_4_ *
       (auVar157._12_4_ +
       (fVar144 +
       auVar102._12_4_ *
       (auVar102._12_4_ *
        (auVar102._12_4_ *
         (auVar102._12_4_ *
          (auVar102._12_4_ * (auVar102._12_4_ * 0.07692308 + -0.09090909) + 0.11111111) +
         -0.14285715) + 0.2) + -0.33333334)) * fVar47);
  bVar123 = (byte)((int)fVar164 >> 0x1f);
  auVar22._1_11_ = auVar89._5_11_;
  auVar22[0] = auVar111[4] & bVar123;
  auVar86._0_8_ =
       CONCAT17(auVar111[7] & bVar123,
                CONCAT16(auVar111[6] & bVar123,CONCAT15(auVar111[5] & bVar123,auVar22._0_5_ << 0x20)
                        ));
  auVar86[8] = auVar111[8] & bVar123;
  auVar86[9] = auVar111[9] & bVar123;
  auVar86[10] = auVar111[10] & bVar123;
  auVar86[0xb] = auVar111[0xb] & bVar123;
  auVar90[0xc] = auVar111[0xc] & bVar123;
  auVar90._0_12_ = auVar86;
  auVar90[0xd] = auVar111[0xd] & bVar123;
  auVar90[0xe] = auVar111[0xe] & bVar123;
  auVar90[0xf] = auVar111[0xf] & bVar123;
  auVar23._4_8_ = auVar76._8_8_;
  auVar23._0_4_ = fVar104 + (float)((ulong)auVar86._0_8_ >> 0x20);
  auVar77._0_8_ = auVar23._0_8_ << 0x20;
  auVar77._8_4_ = auVar76._8_4_ + auVar86._8_4_;
  auVar77._12_4_ = auVar76._12_4_ + auVar90._12_4_;
  iVar161 = -(uint)(fVar54 == -INFINITY);
  iVar162 = -(uint)(fVar54 == -INFINITY);
  iVar163 = -(uint)(fVar54 == -INFINITY);
  auVar24._1_11_ = param_3._5_11_;
  auVar24[0] = ~(byte)iVar161;
  bVar122 = (byte)((uint)iVar161 >> 8);
  bVar82 = (byte)((uint)iVar161 >> 0x10);
  bVar83 = (byte)((uint)iVar161 >> 0x18);
  bVar62 = ~bVar83;
  auVar58._0_8_ = CONCAT17(bVar62,CONCAT16(~bVar82,CONCAT15(~bVar122,auVar24._0_5_ << 0x20)));
  auVar58[8] = ~(byte)iVar162;
  bVar124 = (byte)((uint)iVar162 >> 8);
  auVar58[9] = ~bVar124;
  bVar125 = (byte)((uint)iVar162 >> 0x10);
  auVar58[10] = ~bVar125;
  bVar126 = (byte)((uint)iVar162 >> 0x18);
  auVar58[0xb] = ~bVar126;
  auVar58[0xc] = ~(byte)iVar163;
  bVar127 = (byte)((uint)iVar163 >> 8);
  auVar58[0xd] = ~bVar127;
  bVar128 = (byte)((uint)iVar163 >> 0x10);
  auVar58[0xe] = ~bVar128;
  bVar129 = (byte)((uint)iVar163 >> 0x18);
  auVar58[0xf] = ~bVar129;
  auVar158._8_8_ = auVar58._8_8_;
  auVar158._0_8_ = auVar58._0_8_;
  auVar25._1_11_ = auVar111._5_11_;
  auVar25[0] = ~(byte)iVar160;
  auVar98._0_8_ =
       CONCAT17(~(byte)((uint)iVar160 >> 0x18),
                CONCAT16(~(byte)((uint)iVar160 >> 0x10),
                         CONCAT15(~(byte)((uint)iVar160 >> 8),auVar25._0_5_ << 0x20)));
  auVar98[8] = ~(byte)iVar113;
  auVar98[9] = ~(byte)((uint)iVar113 >> 8);
  auVar98[10] = ~(byte)((uint)iVar113 >> 0x10);
  auVar98[0xb] = ~(byte)((uint)iVar113 >> 0x18);
  auVar98[0xc] = ~(byte)iVar114;
  auVar98[0xd] = ~(byte)((uint)iVar114 >> 8);
  auVar98[0xe] = ~(byte)((uint)iVar114 >> 0x10);
  auVar98[0xf] = ~(byte)((uint)iVar114 >> 0x18);
  auVar112._8_8_ = auVar98._8_8_;
  auVar112._0_8_ = auVar98._0_8_;
  iVar160 = -(uint)(fVar164 == -INFINITY);
  auVar26._4_8_ = auVar64._8_8_;
  auVar26._0_4_ = iVar160;
  auVar65._0_8_ = auVar26._0_8_ << 0x20;
  auVar65._8_4_ = -(uint)(fVar164 == -INFINITY);
  auVar65._12_4_ = -(uint)(fVar164 == -INFINITY);
  auVar27._1_11_ = auVar65._5_11_;
  auVar27[0] = ~(byte)iVar160;
  auVar66._0_5_ = auVar27._0_5_ << 0x20;
  auVar66[5] = ~(byte)((uint)iVar160 >> 8);
  auVar66[6] = ~(byte)((uint)iVar160 >> 0x10);
  auVar66[7] = ~(byte)((uint)iVar160 >> 0x18);
  auVar66[8] = ~(byte)auVar65._8_4_;
  auVar66[9] = ~(byte)((uint)auVar65._8_4_ >> 8);
  auVar66[10] = ~(byte)((uint)auVar65._8_4_ >> 0x10);
  auVar66[0xb] = ~(byte)((uint)auVar65._8_4_ >> 0x18);
  auVar66[0xc] = ~(byte)auVar65._12_4_;
  auVar66[0xd] = ~(byte)((uint)auVar65._12_4_ >> 8);
  auVar66[0xe] = ~(byte)((uint)auVar65._12_4_ >> 0x10);
  auVar66[0xf] = ~(byte)((uint)auVar65._12_4_ >> 0x18);
  auVar7[8] = 0xdb;
  auVar7._0_8_ = 0xbfc90fdb00000000;
  auVar7[9] = 0xf;
  auVar7[10] = 0xc9;
  auVar7[0xb] = 0xbf;
  auVar7[0xc] = 0xdb;
  auVar7[0xd] = 0xf;
  auVar7[0xe] = 0xc9;
  auVar7[0xf] = 0xbf;
  auVar37 = auVar77._4_12_ ^ (auVar77._4_12_ ^ auVar7._4_12_) & ~auVar58._4_12_;
  auVar36 = auVar40._4_12_ ^
            (auVar40._4_12_ ^ auVar64._4_12_ ^ (auVar64._4_12_ ^ auVar111._4_12_) & auVar158._4_12_)
            & auVar112._4_12_;
  auVar159._8_4_ = 0x3fc90fdb;
  auVar159._0_8_ = 0x3fc90fdb3fc90fdb;
  auVar159._12_4_ = 0x3fc90fdb;
  auVar67._0_4_ = fVar137 - fVar48 * fVar48;
  auVar67._4_4_ = fVar142 - fVar52 * fVar52;
  auVar67._8_4_ = fVar143 - fVar54 * fVar54;
  auVar67._12_4_ = fVar144 - fVar56 * fVar56;
  auVar108 = NEON_fmax(auVar67,ZEXT816(0),4);
  auVar108 = NEON_fmin(auVar108,auVar139,4);
  fVar63 = SQRT(auVar108._0_4_);
  fVar71 = fVar71 + fVar44;
  fVar72 = fVar72 + fVar45;
  fVar73 = fVar73 + 0.0;
  auVar41._0_4_ = ABS(fVar48 / fVar63);
  auVar41._4_4_ = ABS(fVar71 / fVar165);
  auVar41._8_4_ = ABS(fVar72 / fVar84);
  auVar41._12_4_ = ABS(fVar73 / 0.0);
  auVar69._0_4_ = -(uint)(0.0 <= fVar48 / fVar63);
  auVar69._4_4_ = -(uint)(0.0 <= fVar71 / fVar165);
  auVar69._8_4_ = -(uint)(0.0 <= fVar72 / fVar84);
  auVar69._12_4_ = -(uint)(0.0 <= fVar73 / 0.0);
  auVar108 = auVar99 ^ (auVar99 ^ auVar139) & auVar69;
  auVar49._0_4_ = (auVar41._0_4_ + auVar99._0_4_) / (auVar41._0_4_ + fVar137);
  auVar49._4_4_ = (auVar41._4_4_ + auVar99._4_4_) / (auVar41._4_4_ + fVar142);
  auVar49._8_4_ = (auVar41._8_4_ + auVar99._8_4_) / (auVar41._8_4_ + fVar143);
  auVar49._12_4_ = (auVar41._12_4_ + auVar99._12_4_) / (auVar41._12_4_ + fVar144);
  auVar111 = NEON_frecpe(auVar41,4);
  auVar89 = NEON_frecps(auVar111,auVar41,4);
  auVar78._0_4_ = auVar111._0_4_ * auVar89._0_4_;
  auVar78._4_4_ = auVar111._4_4_ * auVar89._4_4_;
  auVar78._8_4_ = auVar111._8_4_ * auVar89._8_4_;
  auVar78._12_4_ = auVar111._12_4_ * auVar89._12_4_;
  auVar111 = NEON_frecps(auVar78,auVar41,4);
  auVar79._0_4_ = auVar78._0_4_ * auVar111._0_4_;
  auVar79._4_4_ = auVar78._4_4_ * auVar111._4_4_;
  auVar79._8_4_ = auVar78._8_4_ * auVar111._8_4_;
  auVar79._12_4_ = auVar78._12_4_ * auVar111._12_4_;
  auVar119._0_4_ = -(uint)(auVar41._0_4_ <= 2.4142137);
  auVar119._4_4_ = -(uint)(auVar41._4_4_ <= 2.4142137);
  auVar119._8_4_ = -(uint)(auVar41._8_4_ <= 2.4142137);
  auVar119._12_4_ = -(uint)(auVar41._12_4_ <= 2.4142137);
  auVar80._0_4_ = -(uint)(auVar41._0_4_ <= 0.41421354);
  auVar80._4_4_ = -(uint)(auVar41._4_4_ <= 0.41421354);
  auVar80._8_4_ = -(uint)(auVar41._8_4_ <= 0.41421354);
  auVar80._12_4_ = -(uint)(auVar41._12_4_ <= 0.41421354);
  auVar41 = auVar41 ^ (auVar41 ^ auVar49 ^ (auVar49 ^ auVar79) & ~auVar119) & ~auVar80;
  fVar45 = auVar41._0_4_;
  fVar105 = fVar45 * fVar45;
  fVar56 = auVar41._4_4_;
  fVar53 = fVar56 * fVar56;
  fVar46 = auVar41._8_4_;
  fVar55 = fVar46 * fVar46;
  fVar47 = auVar41._12_4_;
  fVar57 = fVar47 * fVar47;
  bVar152 = cVar145 >> 7;
  auVar28._1_11_ = auVar58._5_11_;
  auVar28[0] = (byte)iVar161 & 0xdb;
  auVar59._0_8_ =
       CONCAT17(bVar83,CONCAT16(bVar82,CONCAT15(bVar122,auVar28._0_5_ << 0x20))) &
       0xbf490fffffffffff;
  auVar59[8] = (byte)iVar162 & 0xdb;
  auVar59[9] = bVar124 & 0xf;
  auVar59[10] = bVar125 & 0x49;
  auVar59[0xb] = bVar126 & 0xbf;
  auVar59[0xc] = (byte)iVar163 & 0xdb;
  auVar59[0xd] = bVar127 & 0xf;
  auVar59[0xe] = bVar128 & 0x49;
  auVar59[0xf] = bVar129 & 0xbf;
  auVar29._1_11_ = auVar59._5_11_;
  auVar29[0] = (char)(auVar59._0_8_ >> 0x20);
  auVar60._0_5_ = auVar29._0_5_ << 0x20;
  auVar60[5] = (undefined1)(auVar59._0_8_ >> 0x28);
  auVar60[6] = (undefined1)(auVar59._0_8_ >> 0x30);
  auVar60[7] = bVar152 & bVar62 & 0x80 | (byte)(auVar59._0_8_ >> 0x38);
  auVar60[8] = auVar59[8];
  auVar60[9] = auVar59[9];
  auVar60[10] = auVar59[10];
  auVar60[0xb] = bVar152 & auVar58[0xb] & 0x80 | auVar59[0xb];
  auVar60[0xc] = auVar59[0xc];
  auVar60[0xd] = auVar59[0xd];
  auVar60[0xe] = auVar59[0xe];
  auVar60[0xf] = bVar152 & auVar58[0xf] & 0x80 | auVar59[0xf];
  iVar161 = -(uint)(fVar164 == INFINITY);
  iVar162 = -(uint)(fVar164 == INFINITY);
  iVar163 = -(uint)(fVar164 == INFINITY);
  uVar151 = -(uint)(fVar54 == -0.0);
  uVar153 = -(uint)(fVar54 == -0.0);
  uVar154 = -(uint)(fVar54 == -0.0);
  bVar62 = (byte)(uVar151 >> 0x18);
  uVar93 = uVar151 & 0xc0490fdb;
  bVar122 = (byte)(uVar153 >> 0x18);
  uVar94 = uVar153 & 0xc0490fdb;
  bVar82 = (byte)(uVar154 >> 0x18);
  uVar95 = uVar154 & 0xc0490fdb;
  auVar3._8_4_ = 0x3f490fdb;
  auVar3._0_8_ = 0x3f490fdb3f490fdb;
  auVar3._12_4_ = 0x3f490fdb;
  auVar35 = auVar60._4_12_ ^ (auVar60._4_12_ ^ auVar3._4_12_) & ~auVar98._4_12_;
  iVar160 = -(uint)(fVar54 == 0.0);
  iVar113 = -(uint)(fVar54 == 0.0);
  iVar114 = -(uint)(fVar54 == 0.0);
  auVar31[1] = ~(byte)((uint)iVar161 >> 8);
  auVar31[0] = ~(byte)iVar161;
  auVar31[2] = ~(byte)((uint)iVar161 >> 0x10);
  auVar31[3] = ~(byte)((uint)iVar161 >> 0x18);
  auVar31[4] = ~(byte)iVar162;
  auVar31[5] = ~(byte)((uint)iVar162 >> 8);
  auVar31[6] = ~(byte)((uint)iVar162 >> 0x10);
  auVar31[7] = ~(byte)((uint)iVar162 >> 0x18);
  auVar31[8] = ~(byte)iVar163;
  auVar31[9] = ~(byte)((uint)iVar163 >> 8);
  auVar31[10] = ~(byte)((uint)iVar163 >> 0x10);
  auVar31[0xb] = ~(byte)((uint)iVar163 >> 0x18);
  auVar35 = auVar35 ^ (auVar35 ^
                      auVar36 ^ (auVar36 ^ auVar37 ^ (auVar37 ^ auVar159._4_12_) & ~auVar98._4_12_)
                                & auVar66._4_12_) & auVar31;
  bVar152 = bVar62 & ~bVar123 & 0x80;
  auVar146._0_11_ = ZEXT111(bVar152) << 0x38;
  auVar146[0xb] = bVar122 & ~bVar123 & 0x80;
  auVar146._12_3_ = 0;
  auVar146[0xf] = bVar82 & ~bVar123 & 0x80;
  auVar30._1_11_ = auVar146._5_11_;
  auVar30[0] = (~(byte)uVar151 & 0xdb | (byte)uVar93) & bVar123;
  auVar147._0_5_ = auVar30._0_5_ << 0x20;
  auVar147[5] = (~(byte)(uVar151 >> 8) & 0xf | (byte)(uVar93 >> 8)) & bVar123;
  auVar147[6] = (~(byte)(uVar151 >> 0x10) & 0x49 | (byte)(uVar93 >> 0x10)) & bVar123;
  auVar147[7] = (~bVar62 & 0x40 | (byte)(uVar93 >> 0x18)) & bVar123 | bVar152;
  auVar147[8] = (~(byte)uVar153 & 0xdb | (byte)uVar94) & bVar123;
  auVar147[9] = (~(byte)(uVar153 >> 8) & 0xf | (byte)(uVar94 >> 8)) & bVar123;
  auVar147[10] = (~(byte)(uVar153 >> 0x10) & 0x49 | (byte)(uVar94 >> 0x10)) & bVar123;
  auVar147[0xb] = (~bVar122 & 0x40 | (byte)(uVar94 >> 0x18)) & bVar123 | auVar146[0xb];
  auVar147[0xc] = (~(byte)uVar154 & 0xdb | (byte)uVar95) & bVar123;
  auVar147[0xd] = (~(byte)(uVar154 >> 8) & 0xf | (byte)(uVar95 >> 8)) & bVar123;
  auVar147[0xe] = (~(byte)(uVar154 >> 0x10) & 0x49 | (byte)(uVar95 >> 0x10)) & bVar123;
  auVar147[0xf] = (~bVar82 & 0x40 | (byte)(uVar95 >> 0x18)) & bVar123 | auVar146[0xf];
  auVar32[1] = ~(byte)((uint)iVar160 >> 8);
  auVar32[0] = ~(byte)iVar160;
  auVar32[2] = ~(byte)((uint)iVar160 >> 0x10);
  auVar32[3] = ~(byte)((uint)iVar160 >> 0x18);
  auVar32[4] = ~(byte)iVar113;
  auVar32[5] = ~(byte)((uint)iVar113 >> 8);
  auVar32[6] = ~(byte)((uint)iVar113 >> 0x10);
  auVar32[7] = ~(byte)((uint)iVar113 >> 0x18);
  auVar32[8] = ~(byte)iVar114;
  auVar32[9] = ~(byte)((uint)iVar114 >> 8);
  auVar32[10] = ~(byte)((uint)iVar114 >> 0x10);
  auVar32[0xb] = ~(byte)((uint)iVar114 >> 0x18);
  auVar61._4_12_ = auVar35 ^ (auVar35 ^ auVar147._4_12_) & ~auVar32;
  auVar61._0_4_ = 0xbfc90fdb;
  auVar33._8_8_ = auVar64._8_8_;
  auVar33._0_8_ = 0xc016cbe4c016cbe4;
  auVar148._0_4_ = -(uint)(fVar48 < 0.0);
  auVar148._4_4_ = -(uint)(fVar48 < 0.0);
  auVar148._8_4_ = -(uint)(fVar48 < 0.0);
  auVar148._12_4_ = -(uint)(fVar48 < 0.0);
  fVar104 = -auVar61._4_4_;
  fVar52 = -auVar61._8_4_;
  fVar44 = -auVar61._12_4_;
  auVar12[4] = SUB41(fVar104,0);
  auVar12._0_4_ = 0x3fc90fdb;
  auVar12[5] = (char)((uint)fVar104 >> 8);
  auVar12[6] = (char)((uint)fVar104 >> 0x10);
  auVar12[7] = (char)((uint)fVar104 >> 0x18);
  auVar12[8] = SUB41(fVar52,0);
  auVar12[9] = (char)((uint)fVar52 >> 8);
  auVar12[10] = (char)((uint)fVar52 >> 0x10);
  auVar12[0xb] = (char)((uint)fVar52 >> 0x18);
  auVar12[0xc] = SUB41(fVar44,0);
  auVar12[0xd] = (char)((uint)fVar44 >> 8);
  auVar12[0xe] = (char)((uint)fVar44 >> 0x10);
  auVar12[0xf] = (char)((uint)fVar44 >> 0x18);
  auVar149._0_4_ = -auVar108._0_4_;
  auVar149._4_4_ = -auVar108._4_4_;
  auVar149._8_4_ = -auVar108._8_4_;
  auVar149._12_4_ = -auVar108._12_4_;
  auVar108 = auVar108 ^ (auVar108 ^ auVar149) & ~auVar119;
  auVar4._8_4_ = 0x3f490fdb;
  auVar4._0_8_ = 0x3f490fdb3f490fdb;
  auVar4._12_4_ = 0x3f490fdb;
  auVar8[8] = 0xdb;
  auVar8._0_8_ = 0xbfc90fdbbfc90fdb;
  auVar8[9] = 0xf;
  auVar8[10] = 0xc9;
  auVar8[0xb] = 0xbf;
  auVar8[0xc] = 0xdb;
  auVar8[0xd] = 0xf;
  auVar8[0xe] = 0xc9;
  auVar8[0xf] = 0xbf;
  auVar120[8] = 0xdb;
  auVar120._0_8_ = 0xbfc90fdbbfc90fdb;
  auVar120[9] = 0xf;
  auVar120[10] = 0xc9;
  auVar120[0xb] = 0xbf;
  auVar120[0xc] = 0xdb;
  auVar120[0xd] = 0xf;
  auVar120[0xe] = 0xc9;
  auVar120[0xf] = 0xbf;
  auVar120 = auVar120 ^ (auVar8 ^ auVar4) & auVar119;
  fVar104 = (float)CONCAT13(auVar120[3] & ~(byte)((uint)auVar80._0_4_ >> 0x18),
                            CONCAT12(auVar120[2] & ~(byte)((uint)auVar80._0_4_ >> 0x10),
                                     CONCAT11(auVar120[1] & ~(byte)((uint)auVar80._0_4_ >> 8),
                                              auVar120[0] & ~(byte)auVar80._0_4_)));
  auVar74._0_8_ =
       CONCAT17(auVar120[7] & ~(byte)((uint)auVar80._4_4_ >> 0x18),
                CONCAT16(auVar120[6] & ~(byte)((uint)auVar80._4_4_ >> 0x10),
                         CONCAT15(auVar120[5] & ~(byte)((uint)auVar80._4_4_ >> 8),
                                  CONCAT14(auVar120[4] & ~(byte)auVar80._4_4_,fVar104))));
  auVar74[8] = auVar120[8] & ~(byte)auVar80._8_4_;
  auVar74[9] = auVar120[9] & ~(byte)((uint)auVar80._8_4_ >> 8);
  auVar74[10] = auVar120[10] & ~(byte)((uint)auVar80._8_4_ >> 0x10);
  auVar74[0xb] = auVar120[0xb] & ~(byte)((uint)auVar80._8_4_ >> 0x18);
  auVar81[0xc] = auVar120[0xc] & ~(byte)auVar80._12_4_;
  auVar81._0_12_ = auVar74;
  auVar81[0xd] = auVar120[0xd] & ~(byte)((uint)auVar80._12_4_ >> 8);
  auVar81[0xe] = auVar120[0xe] & ~(byte)((uint)auVar80._12_4_ >> 0x10);
  auVar81[0xf] = auVar120[0xf] & ~(byte)((uint)auVar80._12_4_ >> 0x18);
  iVar160 = -(uint)(fVar48 == -INFINITY);
  iVar113 = -(uint)(fVar71 == -INFINITY);
  iVar162 = -(uint)(fVar72 == -INFINITY);
  iVar163 = -(uint)(fVar73 == -INFINITY);
  auVar42._0_8_ = CONCAT44((int)fVar71 >> 0x1f,(int)fVar48 >> 0x1f);
  auVar42._8_4_ = (int)fVar72 >> 0x1f;
  auVar42._12_4_ = (int)fVar73 >> 0x1f;
  bVar62 = ~(byte)((uint)iVar160 >> 0x18);
  bVar152 = (byte)((uint)iVar113 >> 8);
  bVar123 = (byte)((uint)iVar113 >> 0x10);
  bVar124 = (byte)((uint)iVar113 >> 0x18);
  bVar122 = ~bVar124;
  auVar121._0_8_ =
       CONCAT17(bVar122,CONCAT16(~bVar123,CONCAT15(~bVar152,CONCAT14(~(byte)iVar113,
                                                                     CONCAT13(bVar62,CONCAT12(~(byte
                                                  )((uint)iVar160 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar160 >> 8),
                                                           ~(byte)iVar160)))))));
  auVar121[8] = ~(byte)iVar162;
  bVar125 = (byte)((uint)iVar162 >> 8);
  auVar121[9] = ~bVar125;
  bVar126 = (byte)((uint)iVar162 >> 0x10);
  auVar121[10] = ~bVar126;
  bVar127 = (byte)((uint)iVar162 >> 0x18);
  auVar121[0xb] = ~bVar127;
  auVar121[0xc] = ~(byte)iVar163;
  bVar128 = (byte)((uint)iVar163 >> 8);
  auVar121[0xd] = ~bVar128;
  bVar129 = (byte)((uint)iVar163 >> 0x10);
  bVar130 = (byte)((uint)iVar163 >> 0x18);
  auVar121[0xe] = ~bVar129;
  auVar121[0xf] = ~bVar130;
  auVar140._8_8_ = auVar42._8_8_;
  auVar140._0_8_ = auVar42._0_8_;
  auVar150._8_8_ = auVar121._8_8_;
  auVar150._0_8_ = auVar121._0_8_;
  uVar39 = CONCAT17((byte)((int)fVar71 >> 0x1f) & bVar122,
                    (uint7)((byte)((int)fVar48 >> 0x1f) & bVar62 & 0x80) << 0x18) &
           0x80ffffffffffffff;
  auVar89[8] = 0xdb;
  auVar89._0_8_ = 0x40490fdb40490fdb;
  auVar89[9] = 0xf;
  auVar89[10] = 0x49;
  auVar89[0xb] = 0x40;
  auVar89[0xc] = 0xdb;
  auVar89[0xd] = 0xf;
  auVar89[0xe] = 0x49;
  auVar89[0xf] = 0x40;
  auVar139[8] = 0xdb;
  auVar139._0_8_ = 0xc0490fdbc0490fdb;
  auVar139[9] = 0xf;
  auVar139[10] = 0x49;
  auVar139[0xb] = 0xc0;
  auVar139[0xc] = 0xdb;
  auVar139[0xd] = 0xf;
  auVar139[0xe] = 0x49;
  auVar139[0xf] = 0xc0;
  auVar99[8] = 0xdb;
  auVar99._0_8_ = 0x40490fdb40490fdb;
  auVar99[9] = 0xf;
  auVar99[10] = 0x49;
  auVar99[0xb] = 0x40;
  auVar99[0xc] = 0xdb;
  auVar99[0xd] = 0xf;
  auVar99[0xe] = 0x49;
  auVar99[0xf] = 0x40;
  auVar99 = auVar99 ^ (auVar89 ^ auVar139) & auVar140;
  auVar34._8_8_ = auVar40._8_8_;
  auVar34._0_8_ = 0x4016cbe44016cbe4;
  bVar122 = (byte)((int)fVar63 >> 0x1f);
  fVar52 = (float)CONCAT13(auVar99[3] & bVar122,
                           CONCAT12(auVar99[2] & bVar122,
                                    CONCAT11(auVar99[1] & bVar122,auVar99[0] & bVar122)));
  bVar82 = (byte)((int)fVar165 >> 0x1f);
  auVar138._0_8_ =
       CONCAT17(auVar99[7] & bVar82,
                CONCAT16(auVar99[6] & bVar82,
                         CONCAT15(auVar99[5] & bVar82,CONCAT14(auVar99[4] & bVar82,fVar52))));
  bVar83 = (byte)((int)fVar84 >> 0x1f);
  auVar138[8] = auVar99[8] & bVar83;
  auVar138[9] = auVar99[9] & bVar83;
  auVar138[10] = auVar99[10] & bVar83;
  auVar138[0xb] = auVar99[0xb] & bVar83;
  auVar70._0_4_ =
       auVar108._0_4_ *
       (fVar104 +
       (fVar137 +
       fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * (fVar105 * 0.07692308 + -0.09090909) +
                                                  0.11111111) + -0.14285715) + 0.2) + -0.33333334))
       * fVar45) + fVar52;
  auVar70._4_4_ =
       auVar108._4_4_ *
       ((float)((ulong)auVar74._0_8_ >> 0x20) +
       (fVar142 +
       fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * 0.07692308 + -0.09090909) +
                                              0.11111111) + -0.14285715) + 0.2) + -0.33333334)) *
       fVar56) + (float)((ulong)auVar138._0_8_ >> 0x20);
  auVar70._8_4_ =
       auVar108._8_4_ *
       (auVar74._8_4_ +
       (fVar143 +
       fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * 0.07692308 + -0.09090909) +
                                              0.11111111) + -0.14285715) + 0.2) + -0.33333334)) *
       fVar46) + auVar138._8_4_;
  auVar70._12_4_ =
       auVar108._12_4_ *
       (auVar81._12_4_ +
       (fVar144 +
       fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * 0.07692308 + -0.09090909) +
                                              0.11111111) + -0.14285715) + 0.2) + -0.33333334)) *
       fVar47) + 0.0;
  auVar9[8] = 0xdb;
  auVar9._0_8_ = 0xbfc90fdbbfc90fdb;
  auVar9[9] = 0xf;
  auVar9[10] = 0xc9;
  auVar9[0xb] = 0xbf;
  auVar9[0xc] = 0xdb;
  auVar9[0xd] = 0xf;
  auVar9[0xe] = 0xc9;
  auVar9[0xf] = 0xbf;
  auVar70 = auVar70 ^ (auVar70 ^ auVar9) & ~auVar121;
  uVar85 = CONCAT17(bVar124,CONCAT16(bVar123,CONCAT15(bVar152,CONCAT14((byte)iVar113,iVar160)))) &
           0xbf490fdbbf490fdb;
  iVar160 = -(uint)(fVar48 == INFINITY);
  iVar113 = -(uint)(fVar71 == INFINITY);
  iVar114 = -(uint)(fVar72 == INFINITY);
  iVar161 = -(uint)(fVar73 == INFINITY);
  auVar43._0_3_ = (undefined3)uVar85;
  auVar43[3] = (byte)(uVar39 >> 0x18) | (byte)(uVar85 >> 0x18);
  auVar43[4] = (char)(uVar85 >> 0x20);
  auVar43[5] = (char)(uVar85 >> 0x28);
  auVar43[6] = (char)(uVar85 >> 0x30);
  auVar43[7] = (byte)(uVar39 >> 0x38) | (byte)(uVar85 >> 0x38);
  auVar43[8] = (byte)iVar162 & 0xdb;
  auVar43[9] = bVar125 & 0xf;
  auVar43[10] = bVar126 & 0x49;
  auVar43[0xb] = (byte)((int)fVar72 >> 0x1f) & auVar121[0xb] & 0x80 | bVar127 & 0xbf;
  auVar43[0xc] = (byte)iVar163 & 0xdb;
  auVar43[0xd] = bVar128 & 0xf;
  auVar43[0xe] = bVar129 & 0x49;
  auVar43[0xf] = (byte)((int)fVar73 >> 0x1f) & auVar121[0xf] & 0x80 | bVar130 & 0xbf;
  bVar62 = ~(byte)iVar160;
  bVar152 = ~(byte)((uint)iVar160 >> 8);
  bVar123 = ~(byte)((uint)iVar160 >> 0x10);
  bVar124 = ~(byte)((uint)iVar160 >> 0x18);
  bVar125 = ~(byte)iVar113;
  bVar126 = ~(byte)((uint)iVar113 >> 8);
  bVar127 = ~(byte)((uint)iVar113 >> 0x10);
  bVar128 = ~(byte)((uint)iVar113 >> 0x18);
  bVar129 = ~(byte)iVar114;
  bVar130 = ~(byte)((uint)iVar114 >> 8);
  bVar131 = ~(byte)((uint)iVar114 >> 0x10);
  bVar132 = ~(byte)((uint)iVar114 >> 0x18);
  bVar133 = ~(byte)iVar161;
  bVar134 = ~(byte)((uint)iVar161 >> 8);
  bVar135 = ~(byte)((uint)iVar161 >> 0x10);
  bVar136 = ~(byte)((uint)iVar161 >> 0x18);
  auVar141[9] = bVar130;
  auVar141[8] = bVar129;
  auVar141[10] = bVar131;
  auVar141[0xb] = bVar132;
  auVar141[0xc] = bVar133;
  auVar141[0xd] = bVar134;
  auVar141[0xe] = bVar135;
  auVar141[0xf] = bVar136;
  auVar141[1] = bVar152;
  auVar141[0] = bVar62;
  auVar141[2] = bVar123;
  auVar141[3] = bVar124;
  auVar141[4] = bVar125;
  auVar141[5] = bVar126;
  auVar141[6] = bVar127;
  auVar141[7] = bVar128;
  auVar10[1] = bVar152;
  auVar10[0] = bVar62;
  auVar10[2] = bVar123;
  auVar10[3] = bVar124;
  auVar10[4] = bVar125;
  auVar10[5] = bVar126;
  auVar10[6] = bVar127;
  auVar10[7] = bVar128;
  auVar10[8] = bVar129;
  auVar10[9] = bVar130;
  auVar10[10] = bVar131;
  auVar10[0xb] = bVar132;
  auVar10[0xc] = bVar133;
  auVar10[0xd] = bVar134;
  auVar10[0xe] = bVar135;
  auVar10[0xf] = bVar136;
  auVar70 = auVar70 ^ (auVar70 ^ auVar159) & ~auVar10;
  auVar5._8_4_ = 0x3f490fdb;
  auVar5._0_8_ = 0x3f490fdb3f490fdb;
  auVar5._12_4_ = 0x3f490fdb;
  auVar11[1] = bVar152;
  auVar11[0] = bVar62;
  auVar11[2] = bVar123;
  auVar11[3] = bVar124;
  auVar11[4] = bVar125;
  auVar11[5] = bVar126;
  auVar11[6] = bVar127;
  auVar11[7] = bVar128;
  auVar11[8] = bVar129;
  auVar11[9] = bVar130;
  auVar11[10] = bVar131;
  auVar11[0xb] = bVar132;
  auVar11[0xc] = bVar133;
  auVar11[0xd] = bVar134;
  auVar11[0xe] = bVar135;
  auVar11[0xf] = bVar136;
  auVar43 = auVar43 ^ (auVar43 ^ auVar5) & ~auVar11;
  iVar160 = -(uint)(fVar63 == -INFINITY);
  iVar113 = -(uint)(fVar165 == -INFINITY);
  iVar114 = -(uint)(fVar84 == -INFINITY);
  auVar91[0] = ~(byte)iVar160;
  auVar91[1] = ~(byte)((uint)iVar160 >> 8);
  auVar91[2] = ~(byte)((uint)iVar160 >> 0x10);
  auVar91[3] = ~(byte)((uint)iVar160 >> 0x18);
  auVar91[4] = ~(byte)iVar113;
  auVar91[5] = ~(byte)((uint)iVar113 >> 8);
  auVar91[6] = ~(byte)((uint)iVar113 >> 0x10);
  auVar91[7] = ~(byte)((uint)iVar113 >> 0x18);
  auVar91[8] = ~(byte)iVar114;
  auVar91[9] = ~(byte)((uint)iVar114 >> 8);
  auVar91[10] = ~(byte)((uint)iVar114 >> 0x10);
  auVar91[0xb] = ~(byte)((uint)iVar114 >> 0x18);
  auVar91[0xc] = 0xff;
  auVar91[0xd] = 0xff;
  auVar91[0xe] = 0xff;
  auVar91[0xf] = 0xff;
  iVar160 = -(uint)(fVar63 == INFINITY);
  iVar113 = -(uint)(fVar165 == INFINITY);
  iVar114 = -(uint)(fVar84 == INFINITY);
  auVar92[0] = ~(byte)iVar160;
  auVar92[1] = ~(byte)((uint)iVar160 >> 8);
  auVar92[2] = ~(byte)((uint)iVar160 >> 0x10);
  auVar92[3] = ~(byte)((uint)iVar160 >> 0x18);
  auVar92[4] = ~(byte)iVar113;
  auVar92[5] = ~(byte)((uint)iVar113 >> 8);
  auVar92[6] = ~(byte)((uint)iVar113 >> 0x10);
  auVar92[7] = ~(byte)((uint)iVar113 >> 0x18);
  auVar92[8] = ~(byte)iVar114;
  auVar92[9] = ~(byte)((uint)iVar114 >> 8);
  auVar92[10] = ~(byte)((uint)iVar114 >> 0x10);
  auVar92[0xb] = ~(byte)((uint)iVar114 >> 0x18);
  auVar92[0xc] = 0xff;
  auVar92[0xd] = 0xff;
  auVar92[0xe] = 0xff;
  auVar92[0xf] = 0xff;
  auVar43 = auVar43 ^ (auVar43 ^
                      auVar70 ^ (auVar70 ^
                                auVar34 ^ (auVar34 ^ auVar33 ^ (auVar33 ^ auVar99) & auVar150) &
                                          auVar141) & ~auVar91) & auVar92;
  uVar151 = -(uint)(fVar48 == -0.0);
  uVar153 = -(uint)(fVar71 == -0.0);
  uVar154 = -(uint)(fVar72 == -0.0);
  iVar160 = -(uint)(fVar48 == 0.0);
  iVar113 = -(uint)(fVar71 == 0.0);
  iVar114 = -(uint)(fVar72 == 0.0);
  iVar161 = -(uint)(fVar73 == 0.0);
  bVar62 = (byte)(uVar151 >> 0x18);
  bVar152 = (byte)(uVar153 >> 0x18);
  bVar123 = (byte)(uVar154 >> 0x18);
  uVar93 = uVar151 & 0xc0490fdb;
  uVar94 = uVar153 & 0xc0490fdb;
  uVar95 = uVar154 & 0xc0490fdb;
  auVar68[0] = ~(byte)iVar160;
  auVar68[1] = ~(byte)((uint)iVar160 >> 8);
  auVar68[2] = ~(byte)((uint)iVar160 >> 0x10);
  auVar68[3] = ~(byte)((uint)iVar160 >> 0x18);
  auVar68[4] = ~(byte)iVar113;
  auVar68[5] = ~(byte)((uint)iVar113 >> 8);
  auVar68[6] = ~(byte)((uint)iVar113 >> 0x10);
  auVar68[7] = ~(byte)((uint)iVar113 >> 0x18);
  auVar68[8] = ~(byte)iVar114;
  auVar68[9] = ~(byte)((uint)iVar114 >> 8);
  auVar68[10] = ~(byte)((uint)iVar114 >> 0x10);
  auVar68[0xb] = ~(byte)((uint)iVar114 >> 0x18);
  auVar68[0xc] = ~(byte)iVar161;
  auVar68[0xd] = ~(byte)((uint)iVar161 >> 8);
  auVar68[0xe] = ~(byte)((uint)iVar161 >> 0x10);
  auVar68[0xf] = ~(byte)((uint)iVar161 >> 0x18);
  uVar39 = CONCAT17(bVar152 & ~bVar82,(uint7)(bVar62 & ~bVar122 & 0x80) << 0x18) &
           0x80ffffffffffffff;
  auVar50[0xf] = (byte)(-(uint)(fVar73 == -0.0) >> 0x18) & 0x80;
  uVar85 = CONCAT17(~bVar152,CONCAT16(~(byte)(uVar153 >> 0x10),
                                      CONCAT15(~(byte)(uVar153 >> 8),
                                               CONCAT14(~(byte)uVar153,
                                                        CONCAT13(~bVar62,CONCAT12(~(byte)(uVar151 >>
                                                                                         0x10),
                                                                                  CONCAT11(~(byte)(
                                                  uVar151 >> 8),~(byte)uVar151))))))) &
           0x40490fdb40490fdb;
  auVar50[1] = ((byte)(uVar85 >> 8) | (byte)(uVar93 >> 8)) & bVar122;
  auVar50[0] = ((byte)uVar85 | (byte)uVar93) & bVar122;
  auVar38._0_4_ = fVar115 * fVar115 + fVar116 * fVar116;
  auVar38._4_4_ = fVar117 * fVar117 + fVar118 * fVar118;
  auVar38._8_4_ = fVar115 * fVar115 + fVar116 * fVar116;
  auVar38._12_4_ = fVar117 * fVar117 + fVar118 * fVar118;
  auVar50[2] = ((byte)(uVar85 >> 0x10) | (byte)(uVar93 >> 0x10)) & bVar122;
  auVar50[3] = ((byte)(uVar85 >> 0x18) | (byte)(uVar93 >> 0x18)) & bVar122 | (byte)(uVar39 >> 0x18);
  auVar50[4] = ((byte)(uVar85 >> 0x20) | (byte)uVar94) & bVar82;
  auVar50[5] = ((byte)(uVar85 >> 0x28) | (byte)(uVar94 >> 8)) & bVar82;
  auVar50[6] = ((byte)(uVar85 >> 0x30) | (byte)(uVar94 >> 0x10)) & bVar82;
  auVar50[7] = ((byte)(uVar85 >> 0x38) | (byte)(uVar94 >> 0x18)) & bVar82 | (byte)(uVar39 >> 0x38);
  auVar50[8] = (~(byte)uVar154 & 0xdb | (byte)uVar95) & bVar83;
  auVar50[9] = (~(byte)(uVar154 >> 8) & 0xf | (byte)(uVar95 >> 8)) & bVar83;
  auVar50[10] = (~(byte)(uVar154 >> 0x10) & 0x49 | (byte)(uVar95 >> 0x10)) & bVar83;
  auVar50[0xb] = (~bVar123 & 0x40 | (byte)(uVar95 >> 0x18)) & bVar83 | bVar123 & ~bVar83 & 0x80;
  auVar50._12_3_ = 0;
  auVar43 = auVar43 ^ (auVar43 ^ auVar50) & ~auVar68;
  auVar108 = NEON_ext(auVar38,auVar38,4,1);
  auVar51._0_4_ = -(uint)(ABS(ABS(fVar48) - (auVar108._0_4_ + auVar108._4_4_)) <= 1.1920929e-07);
  auVar51._4_4_ = -(uint)(ABS(ABS(fVar48) - (auVar108._8_4_ + auVar108._12_4_)) <= 1.1920929e-07);
  auVar51._8_4_ = -(uint)(ABS(ABS(fVar48) - (auVar108._0_4_ + auVar108._4_4_)) <= 1.1920929e-07);
  auVar51._12_4_ = -(uint)(ABS(ABS(fVar48) - (auVar108._8_4_ + auVar108._12_4_)) <= 1.1920929e-07);
  auVar108 = NEON_ext(ZEXT816(0),auVar61 ^ (auVar61 ^ auVar12) & ~auVar148,8,1);
  auVar108 = NEON_ext(auVar108,auVar108,8,1);
  return auVar43 ^ (auVar43 ^ auVar108) & auVar51;
}


