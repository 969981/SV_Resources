/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f93cb0; name: FUN_01f93cb0
 */


void FUN_01f93cb0(long param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined1 auVar35 [12];
  undefined1 auVar36 [12];
  undefined1 auVar37 [12];
  undefined1 auVar38 [12];
  undefined1 auVar39 [12];
  undefined1 auVar40 [12];
  undefined1 auVar41 [12];
  undefined1 auVar42 [12];
  uint5 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [12];
  undefined1 auVar51 [12];
  bool bVar52;
  long lVar53;
  undefined8 uVar54;
  undefined8 extraout_d0;
  undefined1 auVar55 [16];
  undefined8 extraout_var;
  ulong uVar56;
  undefined1 auVar57 [16];
  float fVar58;
  int iVar59;
  float fVar61;
  ulong uVar60;
  int iVar62;
  float fVar63;
  float fVar64;
  uint6 uVar65;
  float fVar67;
  ulong uVar66;
  float fVar68;
  float fVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  float fVar76;
  undefined1 auVar77 [12];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  ulong uVar81;
  float fVar85;
  byte bVar87;
  undefined1 in_q8 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  byte bVar86;
  byte bVar88;
  undefined1 auVar84 [16];
  int iVar93;
  int iVar94;
  undefined1 in_q9 [16];
  undefined8 uVar95;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  int iVar96;
  int iVar100;
  undefined1 in_q11 [16];
  undefined8 uVar101;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar102;
  undefined1 auVar99 [16];
  int iVar110;
  byte bVar112;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  undefined1 in_q12 [16];
  undefined8 uVar113;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  byte bVar119;
  undefined1 auVar106 [16];
  int iVar111;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar124;
  float fVar125;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  float fVar126;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar127 [12];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  ulong uVar133;
  int iVar140;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  int iVar139;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  int iVar141;
  float fVar148;
  ulong uVar142;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  byte bVar149;
  byte bVar150;
  byte bVar151;
  byte bVar152;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  ulong uVar156;
  undefined1 auVar157 [16];
  undefined1 uVar158;
  undefined1 uVar159;
  undefined1 uVar160;
  undefined1 uVar161;
  undefined1 uVar162;
  undefined1 uVar163;
  undefined1 uVar164;
  undefined1 uVar165;
  undefined1 uVar166;
  undefined1 auVar167 [16];
  byte bVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  byte bVar173;
  
  if ((param_2 & 1) == 0) {
    lVar53 = FUN_00da75d8();
    uVar113 = in_q12._8_8_;
    uVar101 = in_q11._8_8_;
    uVar95 = in_q9._8_8_;
    uVar54 = in_q8._8_8_;
  }
  else {
    lVar53 = FUN_00d3ccd4();
    uVar113 = in_q12._8_8_;
    uVar101 = in_q11._8_8_;
    uVar95 = in_q9._8_8_;
    uVar54 = in_q8._8_8_;
  }
  if (lVar53 != 0) {
    bVar52 = (param_2 & 1) == 0;
    lVar1 = 0x2c4;
    if (bVar52) {
      lVar1 = 0x2c0;
    }
    puVar2 = (undefined8 *)(param_1 + 0x300);
    if (bVar52) {
      puVar2 = (undefined8 *)(param_1 + 0x2d0);
    }
    if (*(int *)(param_1 + lVar1) != 0) {
      fVar47 = *(float *)(puVar2 + 2);
      fVar124 = *(float *)((long)puVar2 + 0x14);
      fVar4 = *(float *)(puVar2 + 3);
      fVar5 = *(float *)((long)puVar2 + 0x1c);
      auVar167 = NEON_fmov(0xbf800000,4);
      fVar78 = fVar124 * fVar5 + fVar124 * fVar5;
      fVar79 = fVar4 * fVar5 + fVar4 * fVar5;
      fVar80 = fVar5 * 0.0 + fVar5 * 0.0;
      auVar55._0_4_ = fVar47 * fVar47 + fVar124 * fVar124;
      auVar55._4_4_ = fVar4 * fVar4 + fVar5 * fVar5;
      auVar55._8_4_ = fVar47 * fVar47 + fVar124 * fVar124;
      auVar55._12_4_ = fVar4 * fVar4 + fVar5 * fVar5;
      fVar63 = fVar4 * fVar4 + fVar4 * fVar4;
      auVar51._4_8_ = uVar54;
      auVar51._0_4_ = 0xc016cbe4;
      auVar82._0_8_ = auVar51._0_8_ << 0x20;
      auVar82._8_4_ = 0xc016cbe4;
      auVar82._12_4_ = 0xc016cbe4;
      fVar102 = fVar47 * fVar4 + fVar47 * fVar4;
      fVar148 = fVar47 * fVar124 + fVar47 * fVar124;
      auVar57 = NEON_fmov(0x3f800000,4);
      fVar64 = (fVar47 * fVar5 + fVar47 * fVar5) - (fVar124 * fVar4 + fVar124 * fVar4);
      fVar67 = fVar78 - fVar102;
      fVar68 = fVar79 - fVar148;
      fVar69 = fVar80 - 0.0;
      fVar4 = auVar57._0_4_;
      fVar5 = auVar57._4_4_;
      fVar3 = fVar5 - fVar67 * fVar67;
      fVar67 = auVar57._8_4_;
      fVar76 = fVar67 - fVar68 * fVar68;
      fVar85 = auVar57._12_4_;
      fVar69 = fVar85 - fVar69 * fVar69;
      fVar58 = (fVar4 - (fVar124 * fVar124 + fVar124 * fVar124)) - fVar63;
      fVar61 = (fVar5 - (fVar47 * fVar47 + fVar47 * fVar47)) -
               (fVar124 * fVar124 + fVar124 * fVar124);
      auVar143._4_4_ = fVar58;
      auVar143._0_4_ = fVar58;
      auVar143._8_4_ = fVar58;
      auVar143._12_4_ = fVar58;
      fVar78 = fVar78 + fVar102;
      auVar55 = NEON_ext(auVar55,auVar55,4,1);
      auVar134[4] = SUB41(fVar3,0);
      auVar134._0_4_ = fVar4 - fVar64 * fVar64;
      auVar134[5] = (char)((uint)fVar3 >> 8);
      auVar134[6] = (char)((uint)fVar3 >> 0x10);
      auVar134[7] = (char)((uint)fVar3 >> 0x18);
      auVar134[8] = SUB41(fVar76,0);
      auVar134[9] = (char)((uint)fVar76 >> 8);
      auVar134[10] = (char)((uint)fVar76 >> 0x10);
      auVar134[0xb] = (char)((uint)fVar76 >> 0x18);
      auVar134[0xc] = SUB41(fVar69,0);
      auVar134[0xd] = (char)((uint)fVar69 >> 8);
      auVar134[0xe] = (char)((uint)fVar69 >> 0x10);
      auVar134[0xf] = (char)((uint)fVar69 >> 0x18);
      auVar134 = NEON_fmax(auVar134,ZEXT816(0),4);
      auVar50._4_8_ = uVar95;
      auVar50._0_4_ = 0x4016cbe4;
      auVar89._0_8_ = auVar50._0_8_ << 0x20;
      auVar89._8_4_ = 0x4016cbe4;
      auVar89._12_4_ = 0x4016cbe4;
      auVar134 = NEON_fmin(auVar134,auVar57,4);
      fVar3 = SQRT(auVar134._0_4_);
      auVar135._4_4_ = fVar68;
      auVar135._0_4_ = fVar68;
      auVar135._8_4_ = fVar68;
      auVar135._12_4_ = fVar68;
      fVar76 = ABS(fVar68 / fVar58);
      fVar69 = ABS(fVar68 / fVar58);
      uVar70 = SUB41(fVar69,0);
      uVar71 = (undefined1)((uint)fVar69 >> 8);
      uVar72 = (undefined1)((uint)fVar69 >> 0x10);
      uVar158 = (undefined1)((uint)fVar69 >> 0x18);
      fVar102 = ABS(fVar68 / fVar58);
      uVar159 = SUB41(fVar102,0);
      uVar160 = (undefined1)((uint)fVar102 >> 8);
      uVar161 = (undefined1)((uint)fVar102 >> 0x10);
      uVar162 = (undefined1)((uint)fVar102 >> 0x18);
      fVar124 = ABS(fVar68 / fVar58);
      uVar163 = SUB41(fVar124,0);
      uVar164 = (undefined1)((uint)fVar124 >> 8);
      uVar165 = (undefined1)((uint)fVar124 >> 0x10);
      uVar166 = (undefined1)((uint)fVar124 >> 0x18);
      auVar18._4_8_ = uVar101;
      auVar18._0_4_ = fVar69 + fVar5;
      auVar97._0_8_ = auVar18._0_8_ << 0x20;
      auVar97._8_4_ = fVar102 + fVar67;
      auVar97._12_4_ = fVar124 + fVar85;
      auVar7[4] = uVar70;
      auVar7._0_4_ = fVar76;
      auVar7[5] = uVar71;
      auVar7[6] = uVar72;
      auVar7[7] = uVar158;
      auVar7[8] = uVar159;
      auVar7[9] = uVar160;
      auVar7[10] = uVar161;
      auVar7[0xb] = uVar162;
      auVar7[0xc] = uVar163;
      auVar7[0xd] = uVar164;
      auVar7[0xe] = uVar165;
      auVar7[0xf] = uVar166;
      auVar128 = NEON_frecpe(auVar7,4);
      auVar19._4_8_ = uVar113;
      auVar19._0_4_ = -(uint)(fVar69 <= 2.4142137);
      auVar103._0_8_ = auVar19._0_8_ << 0x20;
      auVar103._8_4_ = -(uint)(fVar102 <= 2.4142137);
      auVar103._12_4_ = -(uint)(fVar124 <= 2.4142137);
      iVar111 = -(uint)(fVar69 <= 0.41421354);
      iVar62 = -(uint)(fVar102 <= 0.41421354);
      bVar86 = (byte)((uint)iVar62 >> 8);
      bVar87 = (byte)((uint)iVar62 >> 0x10);
      bVar88 = (byte)((uint)iVar62 >> 0x18);
      iVar59 = -(uint)(fVar124 <= 0.41421354);
      bVar149 = (byte)((uint)iVar59 >> 8);
      bVar150 = (byte)((uint)iVar59 >> 0x10);
      bVar151 = (byte)((uint)iVar59 >> 0x18);
      auVar20._4_8_ = auVar97._8_8_;
      auVar20._0_4_ = (fVar69 + auVar167._4_4_) / (fVar69 + fVar5);
      auVar98._0_8_ = auVar20._0_8_ << 0x20;
      auVar98._8_4_ = (fVar102 + auVar167._8_4_) / auVar97._8_4_;
      auVar98._12_4_ = (fVar124 + auVar167._12_4_) / auVar97._12_4_;
      auVar8[4] = uVar70;
      auVar8._0_4_ = fVar76;
      auVar8[5] = uVar71;
      auVar8[6] = uVar72;
      auVar8[7] = uVar158;
      auVar8[8] = uVar159;
      auVar8[9] = uVar160;
      auVar8[10] = uVar161;
      auVar8[0xb] = uVar162;
      auVar8[0xc] = uVar163;
      auVar8[0xd] = uVar164;
      auVar8[0xe] = uVar165;
      auVar8[0xf] = uVar166;
      auVar134 = NEON_frecps(auVar128,auVar8,4);
      auVar120._0_4_ = auVar128._0_4_ * auVar134._0_4_;
      auVar120._4_4_ = auVar128._4_4_ * auVar134._4_4_;
      auVar120._8_4_ = auVar128._8_4_ * auVar134._8_4_;
      auVar120._12_4_ = auVar128._12_4_ * auVar134._12_4_;
      auVar9[4] = uVar70;
      auVar9._0_4_ = fVar76;
      auVar9[5] = uVar71;
      auVar9[6] = uVar72;
      auVar9[7] = uVar158;
      auVar9[8] = uVar159;
      auVar9[9] = uVar160;
      auVar9[10] = uVar161;
      auVar9[0xb] = uVar162;
      auVar9[0xc] = uVar163;
      auVar9[0xd] = uVar164;
      auVar9[0xe] = uVar165;
      auVar9[0xf] = uVar166;
      auVar134 = NEON_frecps(auVar120,auVar9,4);
      auVar21._4_8_ = auVar120._8_8_;
      auVar21._0_4_ = auVar120._4_4_ * auVar134._4_4_;
      auVar121._0_8_ = auVar21._0_8_ << 0x20;
      auVar121._8_4_ = auVar120._8_4_ * auVar134._8_4_;
      auVar121._12_4_ = auVar120._12_4_ * auVar134._12_4_;
      auVar98 = auVar98 ^ (auVar98 ^ auVar121) & ~auVar103;
      auVar46[4] = uVar159;
      auVar46._0_4_ = fVar69;
      auVar46[5] = uVar160;
      auVar46[6] = uVar161;
      auVar46[7] = uVar162;
      auVar46[8] = uVar163;
      auVar46[9] = uVar164;
      auVar46[10] = uVar165;
      auVar46[0xb] = uVar166;
      auVar46._12_4_ = 0;
      auVar45[4] = (byte)iVar62;
      auVar45._0_4_ = iVar111;
      auVar45[5] = bVar86;
      auVar45[6] = bVar87;
      auVar45[7] = bVar88;
      auVar45[8] = (byte)iVar59;
      auVar45[9] = bVar149;
      auVar45[10] = bVar150;
      auVar45[0xb] = bVar151;
      auVar45._12_4_ = 0;
      auVar98 = auVar98 ^ (auVar98 ^ auVar46 << 0x20) & auVar45 << 0x20;
      fVar76 = auVar98._4_4_;
      fVar124 = fVar76 * fVar76;
      fVar69 = auVar98._8_4_;
      fVar125 = fVar69 * fVar69;
      fVar102 = auVar98._12_4_;
      fVar126 = fVar102 * fVar102;
      auVar44._8_4_ = -(uint)(0.0 <= fVar68 / fVar58);
      auVar44._4_4_ = -(uint)(0.0 <= fVar68 / fVar58);
      auVar44._0_4_ = -(uint)(0.0 <= fVar68 / fVar58);
      auVar44._12_4_ = 0;
      auVar134 = auVar167 ^ (auVar167 ^ auVar57) & auVar44 << 0x20;
      auVar77._4_4_ = -auVar134._8_4_;
      auVar77._0_4_ = -auVar134._4_4_;
      auVar77._8_4_ = -auVar134._12_4_;
      auVar77 = auVar77 ^ (auVar77 ^ auVar134._4_12_) & auVar103._4_12_;
      auVar10[8] = 0xdb;
      auVar10._0_8_ = 0x3f490fdb00000000;
      auVar10[9] = 0xf;
      auVar10[10] = 0x49;
      auVar10[0xb] = 0x3f;
      auVar10[0xc] = 0xdb;
      auVar10[0xd] = 0xf;
      auVar10[0xe] = 0x49;
      auVar10[0xf] = 0x3f;
      auVar12._8_4_ = 0xbfc90fdb;
      auVar12._0_8_ = 0xbfc90fdbbfc90fdb;
      auVar12._12_4_ = 0xbfc90fdb;
      auVar104._8_4_ = 0xbfc90fdb;
      auVar104._0_8_ = 0xbfc90fdbbfc90fdb;
      auVar104._12_4_ = 0xbfc90fdb;
      auVar104 = auVar104 ^ (auVar12 ^ auVar10) & auVar103;
      iVar110 = -(uint)(fVar68 == -INFINITY);
      auVar22._4_8_ = auVar104._8_8_;
      auVar22._0_4_ = iVar110;
      auVar105._0_8_ = auVar22._0_8_ << 0x20;
      auVar105._8_4_ = -(uint)(fVar68 == -INFINITY);
      auVar105._12_4_ = -(uint)(fVar68 == -INFINITY);
      iVar100 = (int)fVar68 >> 0x1f;
      auVar23._4_8_ = auVar98._8_8_;
      auVar23._0_4_ = iVar100;
      auVar99._0_8_ = auVar23._0_8_ << 0x20;
      auVar99._8_4_ = iVar100;
      auVar99._12_4_ = iVar100;
      auVar129._8_8_ = auVar99._8_8_;
      auVar129._0_8_ = auVar99._0_8_;
      auVar24._1_11_ = auVar105._5_11_;
      auVar24[0] = ~(byte)iVar110;
      auVar106._0_5_ = auVar24._0_5_ << 0x20;
      bVar153 = (byte)((uint)iVar110 >> 8);
      auVar106[5] = ~bVar153;
      bVar154 = (byte)((uint)iVar110 >> 0x10);
      auVar106[6] = ~bVar154;
      bVar112 = (byte)((uint)iVar110 >> 0x18);
      auVar106[7] = ~bVar112;
      auVar106[8] = ~(byte)auVar105._8_4_;
      bVar114 = (byte)((uint)auVar105._8_4_ >> 8);
      auVar106[9] = ~bVar114;
      bVar115 = (byte)((uint)auVar105._8_4_ >> 0x10);
      auVar106[10] = ~bVar115;
      bVar116 = (byte)((uint)auVar105._8_4_ >> 0x18);
      auVar106[0xb] = ~bVar116;
      auVar106[0xc] = ~(byte)auVar105._12_4_;
      bVar117 = (byte)((uint)auVar105._12_4_ >> 8);
      auVar106[0xd] = ~bVar117;
      bVar118 = (byte)((uint)auVar105._12_4_ >> 0x10);
      bVar119 = (byte)((uint)auVar105._12_4_ >> 0x18);
      auVar106[0xe] = ~bVar118;
      auVar106[0xf] = ~bVar119;
      iVar100 = -(uint)(fVar68 == INFINITY);
      auVar25._4_8_ = auVar134._8_8_;
      auVar25._0_4_ = iVar100;
      auVar122._0_8_ = auVar25._0_8_ << 0x20;
      auVar122._8_4_ = -(uint)(fVar68 == INFINITY);
      auVar122._12_4_ = -(uint)(fVar68 == INFINITY);
      auVar26._1_11_ = auVar122._5_11_;
      auVar26[0] = ~(byte)iVar100;
      auVar123._0_5_ = auVar26._0_5_ << 0x20;
      auVar123[5] = ~(byte)((uint)iVar100 >> 8);
      auVar123[6] = ~(byte)((uint)iVar100 >> 0x10);
      auVar123[7] = ~(byte)((uint)iVar100 >> 0x18);
      auVar123[8] = ~(byte)auVar122._8_4_;
      auVar123[9] = ~(byte)((uint)auVar122._8_4_ >> 8);
      auVar123[10] = ~(byte)((uint)auVar122._8_4_ >> 0x10);
      auVar123[0xb] = ~(byte)((uint)auVar122._8_4_ >> 0x18);
      auVar123[0xc] = ~(byte)auVar122._12_4_;
      auVar123[0xd] = ~(byte)((uint)auVar122._12_4_ >> 8);
      auVar123[0xe] = ~(byte)((uint)auVar122._12_4_ >> 0x10);
      auVar123[0xf] = ~(byte)((uint)auVar122._12_4_ >> 0x18);
      bVar152 = (byte)((int)fVar68 >> 0x1f);
      auVar128[8] = 0xdb;
      auVar128._0_8_ = 0xc0490fdb00000000;
      auVar128[9] = 0xf;
      auVar128[10] = 0x49;
      auVar128[0xb] = 0xc0;
      auVar128[0xc] = 0xdb;
      auVar128[0xd] = 0xf;
      auVar128[0xe] = 0x49;
      auVar128[0xf] = 0xc0;
      auVar6[8] = 0xdb;
      auVar6._0_8_ = 0x40490fdb00000000;
      auVar6[9] = 0xf;
      auVar6[10] = 0x49;
      auVar6[0xb] = 0x40;
      auVar6[0xc] = 0xdb;
      auVar6[0xd] = 0xf;
      auVar6[0xe] = 0x49;
      auVar6[0xf] = 0x40;
      auVar130[8] = 0xdb;
      auVar130._0_8_ = 0x40490fdb00000000;
      auVar130[9] = 0xf;
      auVar130[10] = 0x49;
      auVar130[0xb] = 0x40;
      auVar130[0xc] = 0xdb;
      auVar130[0xd] = 0xf;
      auVar130[0xe] = 0x49;
      auVar130[0xf] = 0x40;
      auVar130 = auVar130 ^ (auVar6 ^ auVar128) & auVar129;
      auVar50 = auVar82._4_12_ ^ (auVar82._4_12_ ^ auVar130._4_12_) & auVar106._4_12_;
      fVar76 = auVar77._0_4_ *
               ((float)CONCAT13(auVar104[7] & ~(byte)((uint)iVar111 >> 0x18),
                                CONCAT12(auVar104[6] & ~(byte)((uint)iVar111 >> 0x10),
                                         CONCAT11(auVar104[5] & ~(byte)((uint)iVar111 >> 8),
                                                  auVar104[4] & ~(byte)iVar111))) +
               (fVar5 + fVar124 * (fVar124 * (fVar124 * (fVar124 * (fVar124 * (fVar124 * 0.07692308
                                                                              + -0.09090909) +
                                                                   0.11111111) + -0.14285715) + 0.2)
                                  + -0.33333334)) * fVar76);
      auVar27._4_8_ = auVar77._4_8_;
      auVar27._0_4_ = fVar76;
      auVar73._0_8_ = auVar27._0_8_ << 0x20;
      auVar73._8_4_ =
           auVar77._4_4_ *
           ((float)CONCAT13(auVar104[0xb] & ~bVar88,
                            CONCAT12(auVar104[10] & ~bVar87,
                                     CONCAT11(auVar104[9] & ~bVar86,auVar104[8] & ~(byte)iVar62))) +
           (fVar67 + fVar125 * (fVar125 * (fVar125 * (fVar125 * (fVar125 * (fVar125 * 0.07692308 +
                                                                           -0.09090909) + 0.11111111
                                                                ) + -0.14285715) + 0.2) +
                               -0.33333334)) * fVar69);
      auVar73._12_4_ =
           auVar77._8_4_ *
           ((float)CONCAT13(auVar104[0xf] & ~bVar151,
                            CONCAT12(auVar104[0xe] & ~bVar150,
                                     CONCAT11(auVar104[0xd] & ~bVar149,auVar104[0xc] & ~(byte)iVar59
                                             ))) +
           (fVar85 + fVar126 * (fVar126 * (fVar126 * (fVar126 * (fVar126 * (fVar126 * 0.07692308 +
                                                                           -0.09090909) + 0.11111111
                                                                ) + -0.14285715) + 0.2) +
                               -0.33333334)) * fVar102);
      bVar155 = (byte)((int)fVar58 >> 0x1f);
      auVar18 = auVar123._4_12_;
      auVar28._1_11_ = auVar130._5_11_;
      auVar28[0] = auVar130[4] & bVar155;
      auVar127._0_8_ =
           CONCAT17(auVar130[7] & bVar155,
                    CONCAT16(auVar130[6] & bVar155,
                             CONCAT15(auVar130[5] & bVar155,auVar28._0_5_ << 0x20)));
      auVar127[8] = auVar130[8] & bVar155;
      auVar127[9] = auVar130[9] & bVar155;
      auVar127[10] = auVar130[10] & bVar155;
      auVar127[0xb] = auVar130[0xb] & bVar155;
      auVar131[0xc] = auVar130[0xc] & bVar155;
      auVar131._0_12_ = auVar127;
      auVar131[0xd] = auVar130[0xd] & bVar155;
      auVar131[0xe] = auVar130[0xe] & bVar155;
      auVar131[0xf] = auVar130[0xf] & bVar155;
      auVar29._4_8_ = auVar89._8_8_;
      auVar29._0_4_ = 0xbf490fdb;
      auVar90._0_8_ = auVar29._0_8_ << 0x20;
      auVar90._8_4_ = 0xbf490fdb;
      auVar90._12_4_ = 0xbf490fdb;
      auVar30._1_11_ = auVar90._5_11_;
      auVar30[0] = (byte)iVar110 & 0xdb;
      auVar91._0_8_ =
           CONCAT17(bVar112,CONCAT16(bVar154,CONCAT15(bVar153,auVar30._0_5_ << 0x20))) &
           0xbf490fffffffffff;
      auVar91[8] = (byte)auVar105._8_4_ & 0xdb;
      auVar91[9] = bVar114 & 0xf;
      auVar91[10] = bVar115 & 0x49;
      auVar91[0xb] = bVar116 & 0xbf;
      auVar91[0xc] = (byte)auVar105._12_4_ & 0xdb;
      auVar91[0xd] = bVar117 & 0xf;
      auVar91[0xe] = bVar118 & 0x49;
      auVar91[0xf] = bVar119 & 0xbf;
      auVar31._4_8_ = auVar73._8_8_;
      auVar31._0_4_ = fVar76 + (float)((ulong)auVar127._0_8_ >> 0x20);
      auVar74._0_8_ = auVar31._0_8_ << 0x20;
      auVar74._8_4_ = auVar73._8_4_ + auVar127._8_4_;
      auVar74._12_4_ = auVar73._12_4_ + auVar131._12_4_;
      auVar32._1_11_ = auVar91._5_11_;
      auVar32[0] = (char)(auVar91._0_8_ >> 0x20);
      auVar92._0_5_ = auVar32._0_5_ << 0x20;
      auVar92[5] = (undefined1)(auVar91._0_8_ >> 0x28);
      auVar92[6] = (undefined1)(auVar91._0_8_ >> 0x30);
      auVar92[7] = bVar152 & auVar106[7] & 0x80 | (byte)(auVar91._0_8_ >> 0x38);
      auVar92[8] = auVar91[8];
      auVar92[9] = auVar91[9];
      auVar92[10] = auVar91[10];
      auVar92[0xb] = bVar152 & auVar106[0xb] & 0x80 | auVar91[0xb];
      auVar92[0xc] = auVar91[0xc];
      auVar92[0xd] = auVar91[0xd];
      auVar92[0xe] = auVar91[0xe];
      auVar92[0xf] = bVar152 & auVar106[0xf] & 0x80 | auVar91[0xf];
      fVar76 = (fVar79 + fVar148) / ((fVar67 - (fVar47 * fVar47 + fVar47 * fVar47)) - fVar63);
      fVar69 = (fVar80 + 0.0) / 0.0;
      auVar33._4_8_ = auVar131._8_8_;
      auVar33._0_4_ = 0x3fc90fdb;
      auVar132._0_8_ = auVar33._0_8_ << 0x20;
      auVar132._8_4_ = 0x3fc90fdb;
      auVar132._12_4_ = 0x3fc90fdb;
      auVar13._8_4_ = 0xbfc90fdb;
      auVar13._0_8_ = 0xbfc90fdbbfc90fdb;
      auVar13._12_4_ = 0xbfc90fdb;
      auVar51 = auVar74._4_12_ ^ (auVar74._4_12_ ^ auVar13._4_12_) & ~auVar106._4_12_;
      iVar111 = -(uint)(fVar58 == -INFINITY);
      auVar34._4_8_ = auVar106._8_8_;
      auVar34._0_4_ = iVar111;
      auVar107._0_8_ = auVar34._0_8_ << 0x20;
      auVar107._8_4_ = -(uint)(fVar58 == -INFINITY);
      auVar107._12_4_ = -(uint)(fVar58 == -INFINITY);
      auVar35._1_11_ = auVar107._5_11_;
      auVar35[0] = ~(byte)iVar111;
      auVar108._0_5_ = auVar35._0_5_ << 0x20;
      auVar108[5] = ~(byte)((uint)iVar111 >> 8);
      auVar108[6] = ~(byte)((uint)iVar111 >> 0x10);
      auVar108[7] = ~(byte)((uint)iVar111 >> 0x18);
      auVar108[8] = ~(byte)auVar107._8_4_;
      auVar108[9] = ~(byte)((uint)auVar107._8_4_ >> 8);
      auVar108[10] = ~(byte)((uint)auVar107._8_4_ >> 0x10);
      auVar108[0xb] = ~(byte)((uint)auVar107._8_4_ >> 0x18);
      auVar108[0xc] = ~(byte)auVar107._12_4_;
      auVar108[0xd] = ~(byte)((uint)auVar107._12_4_ >> 8);
      auVar108[0xe] = ~(byte)((uint)auVar107._12_4_ >> 0x10);
      auVar108[0xf] = ~(byte)((uint)auVar107._12_4_ >> 0x18);
      auVar51 = auVar51 ^ (auVar51 ^ auVar132._4_12_) & ~auVar18;
      iVar111 = -(uint)(fVar58 == INFINITY);
      auVar36._4_8_ = auVar143._8_8_;
      auVar36._0_4_ = iVar111;
      auVar144._0_8_ = auVar36._0_8_ << 0x20;
      auVar144._8_4_ = -(uint)(fVar58 == INFINITY);
      auVar144._12_4_ = -(uint)(fVar58 == INFINITY);
      auVar37._1_11_ = auVar144._5_11_;
      auVar37[0] = ~(byte)iVar111;
      auVar145._0_5_ = auVar37._0_5_ << 0x20;
      auVar145[5] = ~(byte)((uint)iVar111 >> 8);
      auVar145[6] = ~(byte)((uint)iVar111 >> 0x10);
      auVar145[7] = ~(byte)((uint)iVar111 >> 0x18);
      auVar145[8] = ~(byte)auVar144._8_4_;
      auVar145[9] = ~(byte)((uint)auVar144._8_4_ >> 8);
      auVar145[10] = ~(byte)((uint)auVar144._8_4_ >> 0x10);
      auVar145[0xb] = ~(byte)((uint)auVar144._8_4_ >> 0x18);
      auVar145[0xc] = ~(byte)auVar144._12_4_;
      auVar145[0xd] = ~(byte)((uint)auVar144._12_4_ >> 8);
      auVar145[0xe] = ~(byte)((uint)auVar144._12_4_ >> 0x10);
      auVar145[0xf] = ~(byte)((uint)auVar144._12_4_ >> 0x18);
      auVar11[8] = 0xdb;
      auVar11._0_8_ = 0x3f490fdb00000000;
      auVar11[9] = 0xf;
      auVar11[10] = 0x49;
      auVar11[0xb] = 0x3f;
      auVar11[0xc] = 0xdb;
      auVar11[0xd] = 0xf;
      auVar11[0xe] = 0x49;
      auVar11[0xf] = 0x3f;
      auVar51 = auVar51 ^ (auVar51 ^ auVar50 ^ (auVar50 ^ auVar89._4_12_) & ~auVar18) &
                          ~auVar108._4_12_;
      auVar83._0_4_ = ABS(fVar64 / fVar3);
      auVar83._4_4_ = ABS(fVar78 / fVar61);
      auVar83._8_4_ = ABS(fVar76);
      auVar83._12_4_ = ABS(fVar69);
      auVar51 = auVar51 ^ (auVar51 ^ auVar92._4_12_ ^ (auVar92._4_12_ ^ auVar11._4_12_) & ~auVar18)
                          & ~auVar145._4_12_;
      auVar128 = NEON_frecpe(auVar83,4);
      auVar109._0_4_ = (auVar83._0_4_ + auVar167._0_4_) / (auVar83._0_4_ + fVar4);
      auVar109._4_4_ = (auVar83._4_4_ + auVar167._4_4_) / (auVar83._4_4_ + fVar5);
      auVar109._8_4_ = (auVar83._8_4_ + auVar167._8_4_) / (auVar83._8_4_ + fVar67);
      auVar109._12_4_ = (auVar83._12_4_ + auVar167._12_4_) / (auVar83._12_4_ + fVar85);
      auVar134 = NEON_frecps(auVar128,auVar83,4);
      iVar140 = -(uint)(auVar83._0_4_ <= 2.4142137);
      iVar111 = -(uint)(auVar83._4_4_ <= 2.4142137);
      bVar170 = (byte)iVar111;
      bVar171 = (byte)((uint)iVar111 >> 8);
      bVar172 = (byte)((uint)iVar111 >> 0x10);
      bVar173 = (byte)((uint)iVar111 >> 0x18);
      iVar100 = -(uint)(auVar83._8_4_ <= 2.4142137);
      uVar70 = (undefined1)((uint)iVar100 >> 8);
      uVar71 = (undefined1)((uint)iVar100 >> 0x10);
      uVar72 = (undefined1)((uint)iVar100 >> 0x18);
      iVar141 = -(uint)(auVar83._12_4_ <= 2.4142137);
      uVar158 = (undefined1)((uint)iVar141 >> 8);
      uVar159 = (undefined1)((uint)iVar141 >> 0x10);
      uVar160 = (undefined1)((uint)iVar141 >> 0x18);
      iVar111 = -(uint)(auVar83._0_4_ <= 0.41421354);
      iVar110 = -(uint)(auVar83._4_4_ <= 0.41421354);
      bVar119 = (byte)((uint)iVar110 >> 8);
      bVar168 = (byte)((uint)iVar110 >> 0x10);
      bVar169 = (byte)((uint)iVar110 >> 0x18);
      iVar62 = -(uint)(auVar83._8_4_ <= 0.41421354);
      iVar59 = -(uint)(auVar83._12_4_ <= 0.41421354);
      auVar146._0_4_ = auVar128._0_4_ * auVar134._0_4_;
      auVar146._4_4_ = auVar128._4_4_ * auVar134._4_4_;
      auVar146._8_4_ = auVar128._8_4_ * auVar134._8_4_;
      auVar146._12_4_ = auVar128._12_4_ * auVar134._12_4_;
      auVar134 = NEON_frecps(auVar146,auVar83,4);
      auVar147._0_4_ = auVar146._0_4_ * auVar134._0_4_;
      auVar147._4_4_ = auVar146._4_4_ * auVar134._4_4_;
      auVar147._8_4_ = auVar146._8_4_ * auVar134._8_4_;
      auVar147._12_4_ = auVar146._12_4_ * auVar134._12_4_;
      iVar93 = -(uint)(fVar68 == -0.0);
      iVar94 = -(uint)(fVar68 == -0.0);
      iVar96 = -(uint)(fVar68 == -0.0);
      auVar16[4] = bVar170;
      auVar16._0_4_ = iVar140;
      auVar16[5] = bVar171;
      auVar16[6] = bVar172;
      auVar16[7] = bVar173;
      auVar16[8] = (char)iVar100;
      auVar16[9] = uVar70;
      auVar16[10] = uVar71;
      auVar16[0xb] = uVar72;
      auVar16[0xc] = (char)iVar141;
      auVar16[0xd] = uVar158;
      auVar16[0xe] = uVar159;
      auVar16[0xf] = uVar160;
      auVar147 = auVar147 ^ (auVar147 ^ auVar109) & auVar16;
      bVar86 = (byte)((uint)iVar93 >> 8);
      bVar87 = (byte)((uint)iVar93 >> 0x10);
      bVar149 = (byte)((uint)iVar93 >> 0x18);
      bVar112 = ~(byte)iVar94;
      auVar48[1] = bVar112;
      auVar48[0] = ~bVar149;
      bVar88 = (byte)((uint)iVar94 >> 8);
      bVar114 = ~bVar88;
      auVar48[2] = bVar114;
      bVar150 = (byte)((uint)iVar94 >> 0x10);
      bVar115 = ~bVar150;
      auVar48[3] = bVar115;
      bVar151 = (byte)((uint)iVar94 >> 0x18);
      auVar48[4] = ~bVar151;
      bVar116 = ~(byte)iVar96;
      auVar48[5] = bVar116;
      bVar152 = (byte)((uint)iVar96 >> 8);
      bVar117 = ~bVar152;
      auVar48[6] = bVar117;
      bVar153 = (byte)((uint)iVar96 >> 0x10);
      bVar118 = ~bVar153;
      auVar48[7] = bVar118;
      bVar154 = (byte)((uint)iVar96 >> 0x18);
      auVar48[8] = ~bVar154;
      auVar48._9_7_ = 0;
      iVar139 = -(uint)(fVar68 == 0.0);
      auVar38._4_8_ = auVar135._8_8_;
      auVar38._0_4_ = iVar139;
      auVar136._0_8_ = auVar38._0_8_ << 0x20;
      auVar136._8_4_ = -(uint)(fVar68 == 0.0);
      auVar136._12_4_ = -(uint)(fVar68 == 0.0);
      auVar39._1_11_ = auVar136._5_11_;
      auVar39[0] = ~(byte)iVar139;
      auVar137._0_5_ = auVar39._0_5_ << 0x20;
      auVar137[5] = ~(byte)((uint)iVar139 >> 8);
      auVar137[6] = ~(byte)((uint)iVar139 >> 0x10);
      auVar137[7] = ~(byte)((uint)iVar139 >> 0x18);
      auVar137[8] = ~(byte)auVar136._8_4_;
      auVar137[9] = ~(byte)((uint)auVar136._8_4_ >> 8);
      auVar137[10] = ~(byte)((uint)auVar136._8_4_ >> 0x10);
      auVar137[0xb] = ~(byte)((uint)auVar136._8_4_ >> 0x18);
      auVar137[0xc] = ~(byte)auVar136._12_4_;
      auVar137[0xd] = ~(byte)((uint)auVar136._12_4_ >> 8);
      auVar137[0xe] = ~(byte)((uint)auVar136._12_4_ >> 0x10);
      auVar137[0xf] = ~(byte)((uint)auVar136._12_4_ >> 0x18);
      auVar15[4] = (byte)iVar110;
      auVar15._0_4_ = iVar111;
      auVar15[5] = bVar119;
      auVar15[6] = bVar168;
      auVar15[7] = bVar169;
      auVar15[8] = (char)iVar62;
      auVar15[9] = (char)((uint)iVar62 >> 8);
      auVar15[10] = (char)((uint)iVar62 >> 0x10);
      auVar15[0xb] = (char)((uint)iVar62 >> 0x18);
      auVar15[0xc] = (char)iVar59;
      auVar15[0xd] = (char)((uint)iVar59 >> 8);
      auVar15[0xe] = (char)((uint)iVar59 >> 0x10);
      auVar15[0xf] = (char)((uint)iVar59 >> 0x18);
      auVar147 = auVar147 ^ (auVar147 ^ auVar83) & auVar15;
      auVar40._1_11_ = auVar83._5_11_;
      auVar40[0] = (byte)iVar93 & 0xdb;
      uVar81 = CONCAT17(bVar149,CONCAT16(bVar87,CONCAT15(bVar86,auVar40._0_5_ << 0x20))) &
               0xc0490fffffffffff;
      auVar41._1_11_ = SUB1611(auVar48 << 0x38,5);
      auVar41[0] = ~(byte)iVar93 & 0xdb;
      uVar60 = CONCAT17(~bVar149,CONCAT16(~bVar87,CONCAT15(~bVar86,auVar41._0_5_ << 0x20))) &
               0x40490fffffffffff;
      auVar84[5] = ((byte)(uVar60 >> 0x28) | (byte)(uVar81 >> 0x28)) & bVar155;
      auVar84[6] = ((byte)(uVar60 >> 0x30) | (byte)(uVar81 >> 0x30)) & bVar155;
      bVar86 = ((byte)(uVar60 >> 0x38) | (byte)(uVar81 >> 0x38)) & bVar155;
      auVar84[8] = (bVar112 & 0xdb | (byte)iVar94 & 0xdb) & bVar155;
      auVar49[1] = auVar84[8];
      auVar49[0] = bVar86;
      auVar84[9] = (bVar114 & 0xf | bVar88 & 0xf) & bVar155;
      auVar49[2] = auVar84[9];
      auVar84[10] = (bVar115 & 0x49 | bVar150 & 0x49) & bVar155;
      auVar49[3] = auVar84[10];
      bVar87 = (~bVar151 & 0x40 | bVar151 & 0xc0) & bVar155;
      auVar49[4] = bVar87;
      auVar84[0xc] = (bVar116 & 0xdb | (byte)iVar96 & 0xdb) & bVar155;
      auVar49[5] = auVar84[0xc];
      auVar84[0xd] = (bVar117 & 0xf | bVar152 & 0xf) & bVar155;
      auVar49[6] = auVar84[0xd];
      auVar84[0xe] = (bVar118 & 0x49 | bVar153 & 0x49) & bVar155;
      auVar49[7] = auVar84[0xe];
      bVar88 = (~bVar154 & 0x40 | bVar154 & 0xc0) & bVar155;
      auVar49[8] = bVar88;
      auVar49._9_7_ = 0;
      auVar42._1_11_ = SUB1611(auVar49 << 0x38,5);
      auVar42[0] = ((byte)(uVar60 >> 0x20) | (byte)(uVar81 >> 0x20)) & bVar155;
      auVar84._0_5_ = auVar42._0_5_ << 0x20;
      auVar84[7] = bVar86 | bVar149 & ~bVar155 & 0x80;
      auVar84[0xb] = bVar87 | bVar151 & ~bVar155 & 0x80;
      auVar84[0xf] = bVar88 | bVar154 & ~bVar155 & 0x80;
      auVar75._4_12_ = auVar51 ^ (auVar51 ^ auVar84._4_12_) & ~auVar137._4_12_;
      fVar102 = auVar147._0_4_;
      fVar67 = fVar102 * fVar102;
      fVar148 = auVar147._4_4_;
      fVar85 = fVar148 * fVar148;
      auVar75._0_4_ = 0xbfc90fdb;
      auVar138._0_4_ = -(uint)(0.0 <= fVar64 / fVar3);
      auVar138._4_4_ = -(uint)(0.0 <= fVar78 / fVar61);
      auVar138._8_4_ = -(uint)(0.0 <= fVar76);
      auVar138._12_4_ = -(uint)(0.0 <= fVar69);
      auVar167 = auVar167 ^ (auVar167 ^ auVar57) & auVar138;
      auVar17[4] = bVar170;
      auVar17._0_4_ = iVar140;
      auVar17[5] = bVar171;
      auVar17[6] = bVar172;
      auVar17[7] = bVar173;
      auVar17[8] = (char)iVar100;
      auVar17[9] = uVar70;
      auVar17[10] = uVar71;
      auVar17[0xb] = uVar72;
      auVar17[0xc] = (char)iVar141;
      auVar17[0xd] = uVar158;
      auVar17[0xe] = uVar159;
      auVar17[0xf] = uVar160;
      auVar57[8] = 0xdb;
      auVar57._0_8_ = 0x3f490fdb3f490fdb;
      auVar57[9] = 0xf;
      auVar57[10] = 0x49;
      auVar57[0xb] = 0x3f;
      auVar57[0xc] = 0xdb;
      auVar57[0xd] = 0xf;
      auVar57[0xe] = 0x49;
      auVar57[0xf] = 0x3f;
      auVar14._8_4_ = 0xbfc90fdb;
      auVar14._0_8_ = 0xbfc90fdbbfc90fdb;
      auVar14._12_4_ = 0xbfc90fdb;
      auVar157._8_4_ = 0xbfc90fdb;
      auVar157._0_8_ = 0xbfc90fdbbfc90fdb;
      auVar157._12_4_ = 0xbfc90fdb;
      auVar157 = auVar157 ^ (auVar14 ^ auVar57) & auVar17;
      iVar59 = -(uint)(fVar64 == INFINITY);
      iVar100 = -(uint)(fVar78 == INFINITY);
      fVar69 = (float)CONCAT13(auVar157[3] & ~(byte)((uint)iVar111 >> 0x18),
                               CONCAT12(auVar157[2] & ~(byte)((uint)iVar111 >> 0x10),
                                        CONCAT11(auVar157[1] & ~(byte)((uint)iVar111 >> 8),
                                                 auVar157[0] & ~(byte)iVar111)));
      iVar111 = -(uint)(fVar3 == INFINITY);
      iVar62 = -(uint)(fVar61 == INFINITY);
      iVar141 = -(uint)(fVar64 == -INFINITY);
      iVar93 = -(uint)(fVar78 == -INFINITY);
      uVar66 = CONCAT44((int)fVar78 >> 0x1f,(int)fVar64 >> 0x1f);
      uVar81 = ~uVar66 & 0x8000000080000000;
      bVar149 = ~(byte)iVar59;
      bVar150 = ~(byte)((uint)iVar59 >> 8);
      bVar151 = ~(byte)((uint)iVar59 >> 0x10);
      bVar152 = ~(byte)((uint)iVar59 >> 0x18);
      bVar153 = ~(byte)iVar100;
      bVar154 = ~(byte)((uint)iVar100 >> 8);
      bVar155 = ~(byte)((uint)iVar100 >> 0x10);
      bVar112 = ~(byte)((uint)iVar100 >> 0x18);
      uVar56 = auVar167._0_8_ &
               CONCAT17(bVar173,CONCAT16(bVar172,CONCAT15(bVar171,CONCAT14(bVar170,iVar140))));
      bVar86 = (byte)((uint)iVar93 >> 8);
      bVar87 = (byte)((uint)iVar93 >> 0x10);
      bVar88 = (byte)((uint)iVar93 >> 0x18);
      uVar142 = CONCAT17(~bVar88,CONCAT16(~bVar87,CONCAT15(~bVar86,CONCAT14(~(byte)iVar93,
                                                                            CONCAT13(~(byte)((uint)
                                                  iVar141 >> 0x18),
                                                  CONCAT12(~(byte)((uint)iVar141 >> 0x10),
                                                           CONCAT11(~(byte)((uint)iVar141 >> 8),
                                                                    ~(byte)iVar141)))))));
      uVar60 = (uVar81 ^ 0x5fc43f005fc43f) & uVar142;
      uVar133 = CONCAT44(-auVar167._4_4_,-auVar167._0_4_) &
                CONCAT17(~bVar173,CONCAT16(~bVar172,CONCAT15(~bVar171,CONCAT14(~bVar170,CONCAT13(~(
                                                  byte)((uint)iVar140 >> 0x18),
                                                  CONCAT12(~(byte)((uint)iVar140 >> 0x10),
                                                           CONCAT11(~(byte)((uint)iVar140 >> 8),
                                                                    ~(byte)iVar140)))))));
      fVar76 = (float)CONCAT13((byte)(uVar133 >> 0x18) | (byte)(uVar56 >> 0x18),
                               CONCAT12((byte)(uVar133 >> 0x10) | (byte)(uVar56 >> 0x10),
                                        CONCAT11((byte)(uVar133 >> 8) | (byte)(uVar56 >> 8),
                                                 (byte)uVar133 | (byte)uVar56)));
      uVar156 = CONCAT44((int)fVar61 >> 0x1f,(int)fVar3 >> 0x1f);
      uVar81 = (uVar81 ^ 0xc0490fdbc0490fdb) & uVar156;
      fVar4 = fVar76 * (fVar69 + (fVar4 + fVar67 * (fVar67 * (fVar67 * (fVar67 * (fVar67 * (fVar67 *
                                                                                                                                                                                        
                                                  0.07692308 + -0.09090909) + 0.11111111) +
                                                  -0.14285715) + 0.2) + -0.33333334)) * fVar102) +
              (float)uVar81;
      fVar5 = (float)(CONCAT17((byte)(uVar133 >> 0x38) | (byte)(uVar56 >> 0x38),
                               CONCAT16((byte)(uVar133 >> 0x30) | (byte)(uVar56 >> 0x30),
                                        CONCAT15((byte)(uVar133 >> 0x28) | (byte)(uVar56 >> 0x28),
                                                 CONCAT14((byte)(uVar133 >> 0x20) |
                                                          (byte)(uVar56 >> 0x20),fVar76)))) >> 0x20)
              * ((float)(CONCAT17(auVar157[7] & ~bVar169,
                                  CONCAT16(auVar157[6] & ~bVar168,
                                           CONCAT15(auVar157[5] & ~bVar119,
                                                    CONCAT14(auVar157[4] & ~(byte)iVar110,fVar69))))
                        >> 0x20) +
                (fVar5 + fVar85 * (fVar85 * (fVar85 * (fVar85 * (fVar85 * (fVar85 * 0.07692308 +
                                                                          -0.09090909) + 0.11111111)
                                                      + -0.14285715) + 0.2) + -0.33333334)) *
                fVar148) + (float)(uVar81 >> 0x20);
      uVar70 = (undefined1)((uint)fVar5 >> 8);
      uVar71 = (undefined1)((uint)fVar5 >> 0x10);
      uVar72 = (undefined1)((uint)fVar5 >> 0x18);
      uVar81 = CONCAT17(uVar72,CONCAT16(uVar71,CONCAT15(uVar70,CONCAT14(SUB41(fVar5,0),fVar4)))) ^
               (CONCAT17(uVar72,CONCAT16(uVar71,CONCAT15(uVar70,CONCAT14(SUB41(fVar5,0),fVar4)))) ^
               0xbfc90fdbbfc90fdb) & ~uVar142;
      uVar81 = uVar81 ^ (uVar81 ^ 0x3fc90fdb3fc90fdb) &
                        ~CONCAT17(bVar112,CONCAT16(bVar155,CONCAT15(bVar154,CONCAT14(bVar153,
                                                  CONCAT13(bVar152,CONCAT12(bVar151,CONCAT11(bVar150
                                                  ,bVar149)))))));
      iVar110 = -(uint)(fVar3 == -INFINITY);
      iVar140 = -(uint)(fVar61 == -INFINITY);
      iVar59 = -(uint)(fVar64 == -0.0);
      iVar100 = -(uint)(fVar78 == -0.0);
      uVar65 = CONCAT15(bVar86,CONCAT14((byte)iVar93,iVar141)) & 0xfdbbf490fdb;
      uVar43 = (uint5)(uVar66 >> 0x18) & (uint5)(uVar142 >> 0x18) & 0x8000000080;
      uVar56 = CONCAT17((byte)(uVar43 >> 0x20) | bVar88 & 0xbf,
                        CONCAT16(bVar87,CONCAT15((char)(uVar65 >> 0x28),
                                                 CONCAT14((char)(uVar65 >> 0x20),
                                                          CONCAT13((byte)uVar43 |
                                                                   (byte)(uVar65 >> 0x18),
                                                                   (int3)uVar65))))) &
               0xff49ffffffffffff;
      uVar56 = uVar56 ^ (uVar56 ^ 0x3f490fdb3f490fdb) &
                        ~CONCAT17(bVar112,CONCAT16(bVar155,CONCAT15(bVar154,CONCAT14(bVar153,
                                                  CONCAT13(bVar152,CONCAT12(bVar151,CONCAT11(bVar150
                                                  ,bVar149)))))));
      uVar56 = uVar56 ^ (uVar56 ^ uVar81 ^ (uVar81 ^ uVar60 ^ 0xc016cbe4c016cbe4 ^
                                                     (uVar60 ^ 0x8000000080000000) &
                                                     ~CONCAT17(bVar112,CONCAT16(bVar155,CONCAT15(
                                                  bVar154,CONCAT14(bVar153,CONCAT13(bVar152,CONCAT12
                                                  (bVar151,CONCAT11(bVar150,bVar149)))))))) &
                                           ~CONCAT17(~(byte)((uint)iVar140 >> 0x18),
                                                     CONCAT16(~(byte)((uint)iVar140 >> 0x10),
                                                              CONCAT15(~(byte)((uint)iVar140 >> 8),
                                                                       CONCAT14(~(byte)iVar140,
                                                                                CONCAT13(~(byte)((
                                                  uint)iVar110 >> 0x18),
                                                  CONCAT12(~(byte)((uint)iVar110 >> 0x10),
                                                           CONCAT11(~(byte)((uint)iVar110 >> 8),
                                                                    ~(byte)iVar110)))))))) &
                        CONCAT17(~(byte)((uint)iVar62 >> 0x18),
                                 CONCAT16(~(byte)((uint)iVar62 >> 0x10),
                                          CONCAT15(~(byte)((uint)iVar62 >> 8),
                                                   CONCAT14(~(byte)iVar62,
                                                            CONCAT13(~(byte)((uint)iVar111 >> 0x18),
                                                                     CONCAT12(~(byte)((uint)iVar111
                                                                                     >> 0x10),
                                                                              CONCAT11(~(byte)((uint
                                                  )iVar111 >> 8),~(byte)iVar111)))))));
      bVar86 = (byte)((uint)iVar59 >> 0x18);
      bVar87 = (byte)((uint)iVar100 >> 0x18);
      uVar81 = CONCAT17(~bVar87,CONCAT16(~(byte)((uint)iVar100 >> 0x10),
                                         CONCAT15(~(byte)((uint)iVar100 >> 8),
                                                  CONCAT14(~(byte)iVar100,
                                                           CONCAT13(~bVar86,CONCAT12(~(byte)((uint)
                                                  iVar59 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar59 >> 8),~(byte)iVar59)
                                                  )))))) & 0x40490fdb40490fdb;
      uVar66 = CONCAT44(iVar100,iVar59) & 0xc0490fdbc0490fdb;
      uVar60 = CONCAT17(bVar87 & ~(byte)((int)fVar61 >> 0x1f),
                        (uint7)(bVar86 & ~(byte)((int)fVar3 >> 0x1f)) << 0x18) & 0x8000000080000000;
      uVar54 = puVar2[1];
      *(undefined8 *)(lVar53 + 0x2b0) = *puVar2;
      *(undefined8 *)(lVar53 + 0x2b8) = uVar54;
      *(undefined4 *)(lVar53 + 0x2c0) = *(undefined4 *)(puVar2 + 4);
      uVar156 = CONCAT17((byte)(uVar81 >> 0x38) | (byte)(uVar66 >> 0x38),
                         CONCAT16((byte)(uVar81 >> 0x30) | (byte)(uVar66 >> 0x30),
                                  CONCAT15((byte)(uVar81 >> 0x28) | (byte)(uVar66 >> 0x28),
                                           CONCAT14((byte)(uVar81 >> 0x20) | (byte)(uVar66 >> 0x20),
                                                    CONCAT13((byte)(uVar81 >> 0x18) |
                                                             (byte)(uVar66 >> 0x18),
                                                             CONCAT12((byte)(uVar81 >> 0x10) |
                                                                      (byte)(uVar66 >> 0x10),
                                                                      CONCAT11((byte)(uVar81 >> 8) |
                                                                               (byte)(uVar66 >> 8),
                                                                               (byte)uVar81 |
                                                                               (byte)uVar66))))))) &
                uVar156;
      iVar111 = -(uint)(fVar64 == 0.0);
      iVar62 = -(uint)(fVar78 == 0.0);
      uVar56 = uVar56 ^ (uVar56 ^ CONCAT17((byte)(uVar156 >> 0x38) | (byte)(uVar60 >> 0x38),
                                           CONCAT16((char)(uVar156 >> 0x30),
                                                    CONCAT15((char)(uVar156 >> 0x28),
                                                             CONCAT14((char)(uVar156 >> 0x20),
                                                                      CONCAT13((byte)(uVar156 >>
                                                                                     0x18) |
                                                                               (byte)(uVar60 >> 0x18
                                                                                     ),(int3)uVar156
                                                                              )))))) &
                        ~CONCAT17(~(byte)((uint)iVar62 >> 0x18),
                                  CONCAT16(~(byte)((uint)iVar62 >> 0x10),
                                           CONCAT15(~(byte)((uint)iVar62 >> 8),
                                                    CONCAT14(~(byte)iVar62,
                                                             CONCAT13(~(byte)((uint)iVar111 >> 0x18)
                                                                      ,CONCAT12(~(byte)((uint)
                                                  iVar111 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar111 >> 8),
                                                           ~(byte)iVar111)))))));
      *(undefined8 *)(lVar53 + 0x2e8) = puVar2[3];
      *(undefined8 *)(lVar53 + 0x2e0) = puVar2[2];
      uVar54 = NEON_rev64(uVar56 ^ (uVar56 ^ auVar75._0_8_ ^
                                             (auVar75._0_8_ ^ CONCAT44(-auVar75._4_4_,0x3fc90fdb)) &
                                             ~CONCAT44(-(uint)(fVar64 < 0.0),-(uint)(fVar64 < 0.0)))
                                   & CONCAT44(-(uint)(ABS(ABS(fVar64) -
                                                          (auVar55._8_4_ + auVar55._12_4_)) <=
                                                     1.1920929e-07),
                                              -(uint)(ABS(ABS(fVar64) -
                                                          (auVar55._0_4_ + auVar55._4_4_)) <=
                                                     1.1920929e-07)),4);
      *(undefined8 *)(lVar53 + 0x2c4) = uVar54;
      FUN_01f958f8();
      *(undefined8 *)(lVar53 + 0x540) = *(undefined8 *)(lVar53 + 0x2e0);
      *(undefined8 *)(lVar53 + 0x2d8) = extraout_var;
      *(undefined8 *)(lVar53 + 0x2d0) = extraout_d0;
      *(undefined8 *)(lVar53 + 0x530) = *(undefined8 *)(lVar53 + 0x2d0);
      *(undefined8 *)(lVar53 + 0x538) = *(undefined8 *)(lVar53 + 0x2d8);
      *(undefined8 *)(lVar53 + 0x550) = *(undefined8 *)(lVar53 + 0x2b0);
      *(undefined8 *)(lVar53 + 0x548) = *(undefined8 *)(lVar53 + 0x2e8);
      *(undefined8 *)(lVar53 + 0x558) = *(undefined8 *)(lVar53 + 0x2b8);
    }
  }
  return;
}


