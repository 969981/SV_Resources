/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324e940; name: FUN_0324e940
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0324e940(float *param_1,float *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  float *pfVar2;
  uint5 uVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar13;
  ulong uVar7;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uVar8;
  undefined1 auVar12 [16];
  float fVar17;
  uint uVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  int iVar27;
  undefined1 auVar28 [12];
  int iVar38;
  float fVar40;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  int iVar42;
  int iVar43;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  byte bVar37;
  byte bVar41;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar44;
  float fVar45;
  float fVar53;
  float fVar54;
  undefined8 uVar46;
  ulong uVar47;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  float fVar74;
  float fVar78;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar79 [12];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar87;
  undefined8 uVar88;
  float fVar93;
  float fVar94;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar95;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar123;
  undefined8 uVar122;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  ushort uVar132;
  ushort uVar135;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  undefined8 uVar146;
  float fVar149;
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  float fVar150;
  undefined1 auVar151 [12];
  float fVar155;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  float fVar163;
  float fVar164;
  float fVar168;
  float fVar169;
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  float local_80 [4];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  fVar125 = (float)param_3[2];
  fVar118 = (float)*param_3;
  fVar127 = (float)((ulong)param_3[2] >> 0x20);
  fVar119 = (float)((ulong)*param_3 >> 0x20);
  fVar114 = (float)param_3[3];
  fVar120 = (float)param_3[1];
  fVar138 = (float)((ulong)param_3[3] >> 0x20);
  fVar56 = (float)((ulong)param_3[1] >> 0x20);
  fVar116 = *(float *)(param_3 + 4);
  fVar117 = *(float *)((long)param_3 + 0x24);
  fVar121 = *(float *)(param_3 + 5);
  fVar123 = *(float *)((long)param_3 + 0x2c);
  fVar113 = (float)param_3[6];
  auVar133._0_4_ = fVar113 - fVar116;
  fVar115 = (float)((ulong)param_3[6] >> 0x20);
  auVar133._4_4_ = fVar115 - fVar117;
  fVar124 = (float)param_3[7];
  auVar133._8_4_ = fVar124 - fVar121;
  fVar126 = (float)((ulong)param_3[7] >> 0x20);
  auVar133._12_4_ = fVar126 - fVar123;
  fVar40 = *param_1;
  fVar21 = param_1[1];
  fVar24 = param_1[2];
  fVar26 = param_1[3];
  fVar141 = fVar125 - fVar118;
  fVar142 = fVar127 - fVar119;
  fVar143 = fVar114 - fVar120;
  fVar144 = fVar138 - fVar56;
  fVar55 = *param_2;
  fVar57 = param_2[1];
  fVar15 = param_2[2];
  fVar16 = param_2[3];
  fVar136 = fVar116 - fVar125;
  fVar137 = fVar117 - fVar127;
  fVar139 = fVar121 - fVar114;
  fVar140 = fVar123 - fVar138;
  auVar75._4_4_ = fVar142;
  auVar75._0_4_ = fVar141;
  auVar75._8_4_ = fVar143;
  auVar75._12_4_ = fVar144;
  auVar111._4_4_ = fVar142;
  auVar111._0_4_ = fVar141;
  auVar111._8_4_ = fVar143;
  auVar111._12_4_ = fVar144;
  auVar160 = NEON_ext(auVar75,auVar111,4,1);
  fVar6 = (fVar118 + fVar125 + fVar116) * 0.33333334;
  fVar13 = (fVar119 + fVar127 + fVar117) * 0.33333334;
  fVar14 = (fVar120 + fVar114 + fVar121) * 0.33333334;
  auVar30._4_4_ = fVar137;
  auVar30._0_4_ = fVar136;
  auVar30._8_4_ = fVar139;
  auVar30._12_4_ = fVar140;
  auVar49._4_4_ = fVar137;
  auVar49._0_4_ = fVar136;
  auVar49._8_4_ = fVar139;
  auVar49._12_4_ = fVar140;
  auVar165 = NEON_ext(auVar30,auVar49,4,1);
  auVar128._0_4_ = fVar118 - fVar113;
  auVar128._4_4_ = fVar119 - fVar115;
  auVar128._8_4_ = fVar120 - fVar124;
  auVar128._12_4_ = fVar56 - fVar126;
  auVar170 = NEON_ext(auVar133,auVar133,4,1);
  auVar29._0_4_ = fVar141 * fVar141;
  auVar29._4_4_ = fVar142 * fVar142;
  auVar29._8_4_ = fVar143 * fVar143;
  auVar29._12_4_ = fVar144 * fVar144;
  auVar48._0_4_ = fVar136 * fVar136;
  auVar48._4_4_ = fVar137 * fVar137;
  auVar48._8_4_ = fVar139 * fVar139;
  auVar48._12_4_ = fVar140 * fVar140;
  auVar110._0_4_ = auVar128._0_4_ * auVar128._0_4_;
  auVar110._4_4_ = auVar128._4_4_ * auVar128._4_4_;
  auVar110._8_4_ = auVar128._8_4_ * auVar128._8_4_;
  auVar110._12_4_ = auVar128._12_4_ * auVar128._12_4_;
  fVar17 = fVar6 - fVar40;
  fVar19 = fVar13 - fVar21;
  fVar22 = fVar14 - fVar24;
  auVar30 = NEON_ext(auVar29,auVar29,8,1);
  fVar6 = fVar6 - fVar55;
  fVar13 = fVar13 - fVar57;
  fVar14 = fVar14 - fVar15;
  auVar49 = NEON_ext(auVar48,auVar48,8,1);
  fVar17 = fVar17 * fVar17;
  fVar19 = fVar19 * fVar19;
  fVar22 = fVar22 * fVar22;
  fVar6 = fVar6 * fVar6;
  fVar13 = fVar13 * fVar13;
  fVar14 = fVar14 * fVar14;
  auVar75 = NEON_ext(auVar128,auVar128,4,1);
  uVar7 = CONCAT44(-(uint)(fVar17 + fVar19 + fVar22 < fVar6 + fVar13 + fVar14),
                   -(uint)(fVar17 + fVar19 + fVar22 < fVar6 + fVar13 + fVar14)) & 0x100000001;
  iVar27 = (int)uVar7;
  iVar38 = (int)(uVar7 >> 0x20);
  fVar61 = fVar141 * auVar165._0_4_ - fVar136 * auVar160._0_4_;
  fVar22 = fVar142 * auVar165._4_4_ - fVar137 * auVar160._4_4_;
  fVar63 = fVar143 * fVar136 - fVar139 * fVar141;
  fVar64 = fVar144 * fVar137 - fVar140 * fVar142;
  fVar19 = fVar61 * fVar61;
  fVar6 = auVar133._0_4_ * auVar133._0_4_;
  fVar13 = auVar133._4_4_ * auVar133._4_4_;
  uVar65 = (undefined1)((uint)fVar13 >> 8);
  uVar66 = (undefined1)((uint)fVar13 >> 0x10);
  uVar67 = (undefined1)((uint)fVar13 >> 0x18);
  fVar14 = auVar133._8_4_ * auVar133._8_4_;
  uVar68 = (undefined1)((uint)fVar14 >> 8);
  uVar69 = (undefined1)((uint)fVar14 >> 0x10);
  uVar70 = (undefined1)((uint)fVar14 >> 0x18);
  fVar17 = auVar133._12_4_ * auVar133._12_4_;
  uVar71 = (undefined1)((uint)fVar17 >> 8);
  uVar72 = (undefined1)((uint)fVar17 >> 0x10);
  uVar73 = (undefined1)((uint)fVar17 >> 0x18);
  auVar111 = NEON_ext(auVar110,auVar110,8,1);
  uVar18 = (iVar27 << 0x1f) >> 0x1f;
  uVar20 = (iVar38 << 0x1f) >> 0x1f;
  uVar23 = (iVar27 << 0x1f) >> 0x1f;
  uVar25 = (iVar38 << 0x1f) >> 0x1f;
  auVar58._4_4_ = fVar22;
  auVar58._0_4_ = fVar61;
  auVar58._8_4_ = fVar63;
  auVar58._12_4_ = fVar64;
  auVar60._4_4_ = fVar22;
  auVar60._0_4_ = fVar61;
  auVar60._8_4_ = fVar63;
  auVar60._12_4_ = fVar64;
  auVar60 = NEON_ext(auVar58,auVar60,4,1);
  fVar22 = auVar60._0_4_;
  fVar64 = fVar22 * fVar22;
  fVar63 = auVar60._4_4_;
  fVar62 = fVar63 * fVar63;
  auVar100[4] = SUB41(fVar13,0);
  auVar100._0_4_ = fVar6;
  auVar100[5] = uVar65;
  auVar100[6] = uVar66;
  auVar100[7] = uVar67;
  auVar100[8] = SUB41(fVar14,0);
  auVar100[9] = uVar68;
  auVar100[10] = uVar69;
  auVar100[0xb] = uVar70;
  auVar100[0xc] = SUB41(fVar17,0);
  auVar100[0xd] = uVar71;
  auVar100[0xe] = uVar72;
  auVar100[0xf] = uVar73;
  auVar107[4] = SUB41(fVar13,0);
  auVar107._0_4_ = fVar6;
  auVar107[5] = uVar65;
  auVar107[6] = uVar66;
  auVar107[7] = uVar67;
  auVar107[8] = SUB41(fVar14,0);
  auVar107[9] = uVar68;
  auVar107[10] = uVar69;
  auVar107[0xb] = uVar70;
  auVar107[0xc] = SUB41(fVar17,0);
  auVar107[0xd] = uVar71;
  auVar107[0xe] = uVar72;
  auVar107[0xf] = uVar73;
  auVar58 = NEON_ext(auVar100,auVar107,8,1);
  fVar145 = auVar30._0_4_ + auVar29._0_4_ + auVar29._4_4_;
  fVar149 = auVar49._0_4_ + auVar48._0_4_ + auVar48._4_4_;
  fVar150 = auVar58._0_4_ + fVar6 + fVar13;
  fVar155 = auVar111._0_4_ + auVar110._0_4_ + auVar110._4_4_;
  bVar5 = true;
  fVar6 = (float)((uint)fVar55 ^ ((uint)fVar55 ^ (uint)fVar40) & uVar18);
  fVar13 = (float)((uint)fVar57 ^ ((uint)fVar57 ^ (uint)fVar21) & uVar20);
  fVar14 = (float)((uint)fVar15 ^ ((uint)fVar15 ^ (uint)fVar24) & uVar23);
  fVar17 = (float)((uint)fVar16 ^ ((uint)fVar16 ^ (uint)fVar26) & uVar25);
  fVar55 = (float)((uint)fVar40 ^ ((uint)fVar40 ^ (uint)fVar55) & uVar18);
  fVar57 = (float)((uint)fVar21 ^ ((uint)fVar21 ^ (uint)fVar57) & uVar20);
  fVar15 = (float)((uint)fVar24 ^ ((uint)fVar24 ^ (uint)fVar15) & uVar23);
  fVar16 = (float)((uint)fVar26 ^ ((uint)fVar26 ^ (uint)fVar16) & uVar25);
  while( true ) {
    fVar26 = fVar16;
    fVar24 = fVar15;
    fVar21 = fVar57;
    fVar40 = fVar55;
    fVar16 = fVar17;
    fVar15 = fVar14;
    fVar57 = fVar13;
    fVar55 = fVar6;
    auVar112._0_4_ = fVar55 - fVar118;
    auVar112._4_4_ = fVar57 - fVar119;
    auVar112._8_4_ = fVar15 - fVar120;
    auVar112._12_4_ = fVar16 - fVar56;
    auVar89._0_4_ = fVar55 - fVar125;
    auVar89._4_4_ = fVar57 - fVar127;
    auVar89._8_4_ = fVar15 - fVar114;
    auVar89._12_4_ = fVar16 - fVar138;
    auVar58 = NEON_ext(auVar112,auVar112,4,1);
    auVar80._0_4_ = fVar55 - fVar116;
    auVar80._4_4_ = fVar57 - fVar117;
    auVar80._8_4_ = fVar15 - fVar121;
    auVar80._12_4_ = fVar16 - fVar123;
    auVar9._0_4_ = fVar55 - fVar113;
    auVar9._4_4_ = fVar57 - fVar115;
    auVar9._8_4_ = fVar15 - fVar124;
    auVar9._12_4_ = fVar16 - fVar126;
    auVar99._0_4_ = fVar141 * auVar58._0_4_ - auVar160._0_4_ * auVar112._0_4_;
    auVar99._4_4_ = fVar142 * auVar58._4_4_ - auVar160._4_4_ * auVar112._4_4_;
    auVar99._8_4_ = fVar143 * auVar112._0_4_ - fVar141 * auVar112._8_4_;
    auVar99._12_4_ = fVar144 * auVar112._4_4_ - fVar142 * auVar112._12_4_;
    auVar58 = NEON_ext(auVar99,auVar99,4,1);
    auVar100 = NEON_ext(auVar89,auVar89,4,1);
    auVar96._0_4_ = fVar22 * auVar58._0_4_;
    auVar96._4_4_ = fVar63 * auVar58._4_4_;
    auVar96._8_4_ = fVar61 * auVar99._0_4_;
    auVar96._12_4_ = 0;
    auVar101._0_4_ = fVar136 * auVar100._0_4_ - auVar165._0_4_ * auVar89._0_4_;
    auVar101._4_4_ = fVar137 * auVar100._4_4_ - auVar165._4_4_ * auVar89._4_4_;
    auVar101._8_4_ = fVar139 * auVar89._0_4_ - fVar136 * auVar89._8_4_;
    auVar101._12_4_ = fVar140 * auVar89._4_4_ - fVar137 * auVar89._12_4_;
    auVar100 = NEON_ext(auVar101,auVar101,4,1);
    auVar58 = NEON_ext(auVar80,auVar80,4,1);
    auVar102._0_4_ = auVar133._0_4_ * auVar58._0_4_ - auVar170._0_4_ * auVar80._0_4_;
    auVar102._4_4_ = auVar133._4_4_ * auVar58._4_4_ - auVar170._4_4_ * auVar80._4_4_;
    auVar102._8_4_ = auVar133._8_4_ * auVar80._0_4_ - auVar133._0_4_ * auVar80._8_4_;
    auVar102._12_4_ = auVar133._12_4_ * auVar80._4_4_ - auVar133._4_4_ * auVar80._12_4_;
    auVar107 = NEON_ext(auVar102,auVar102,4,1);
    auVar58 = NEON_ext(auVar9,auVar9,4,1);
    auVar103._0_4_ = auVar128._0_4_ * auVar58._0_4_ - auVar75._0_4_ * auVar9._0_4_;
    auVar103._4_4_ = auVar128._4_4_ * auVar58._4_4_ - auVar75._4_4_ * auVar9._4_4_;
    auVar103._8_4_ = auVar128._8_4_ * auVar9._0_4_ - auVar128._0_4_ * auVar9._8_4_;
    auVar103._12_4_ = auVar128._12_4_ * auVar9._4_4_ - auVar128._4_4_ * auVar9._12_4_;
    auVar58 = NEON_ext(auVar103,auVar103,4,1);
    auVar104._0_4_ = fVar22 * auVar100._0_4_;
    auVar104._4_4_ = fVar63 * auVar100._4_4_;
    auVar104._8_4_ = fVar61 * auVar101._0_4_;
    auVar104._12_4_ = 0;
    auVar106._0_4_ = fVar22 * auVar107._0_4_;
    auVar106._4_4_ = fVar63 * auVar107._4_4_;
    auVar106._8_4_ = fVar61 * auVar102._0_4_;
    auVar106._12_4_ = 0;
    auVar108._0_4_ = fVar22 * auVar58._0_4_;
    auVar108._4_4_ = fVar63 * auVar58._4_4_;
    auVar108._8_4_ = fVar61 * auVar103._0_4_;
    auVar108._12_4_ = 0;
    auVar58 = NEON_ext(auVar96,auVar96,8,1);
    auVar100 = NEON_ext(auVar104,auVar104,8,1);
    auVar107 = NEON_ext(auVar106,auVar106,8,1);
    auVar30 = NEON_ext(auVar108,auVar108,8,1);
    iVar27 = -(uint)(0.0 <= auVar58._0_4_ + auVar96._0_4_ + auVar96._4_4_);
    iVar38 = -(uint)(0.0 <= auVar100._0_4_ + auVar104._0_4_ + auVar104._4_4_);
    iVar42 = -(uint)(0.0 <= auVar107._0_4_ + auVar106._0_4_ + auVar106._4_4_);
    iVar43 = -(uint)(0.0 <= auVar30._0_4_ + auVar108._0_4_ + auVar108._4_4_);
    if (CONCAT13((byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar27 >> 0x18) &
                 (byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar43 >> 0x18),
                 CONCAT12((byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                          (byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar43 >> 0x10),
                          CONCAT11((byte)((uint)iVar38 >> 8) & (byte)((uint)iVar27 >> 8) &
                                   (byte)((uint)iVar42 >> 8) & (byte)((uint)iVar43 >> 8),
                                   (byte)iVar38 & (byte)iVar27 & (byte)iVar42 & (byte)iVar43))) == 0
       ) {
      auVar31._0_4_ = fVar141 * auVar112._0_4_;
      auVar31._4_4_ = fVar142 * auVar112._4_4_;
      auVar31._8_4_ = fVar143 * auVar112._8_4_;
      auVar31._12_4_ = fVar144 * auVar112._12_4_;
      auVar50._0_4_ = fVar136 * auVar89._0_4_;
      auVar50._4_4_ = fVar137 * auVar89._4_4_;
      auVar50._8_4_ = fVar139 * auVar89._8_4_;
      auVar50._12_4_ = fVar140 * auVar89._12_4_;
      auVar97._0_4_ = auVar133._0_4_ * auVar80._0_4_;
      auVar97._4_4_ = auVar133._4_4_ * auVar80._4_4_;
      auVar97._8_4_ = auVar133._8_4_ * auVar80._8_4_;
      auVar97._12_4_ = auVar133._12_4_ * auVar80._12_4_;
      auVar105._0_4_ = auVar128._0_4_ * auVar9._0_4_;
      auVar105._4_4_ = auVar128._4_4_ * auVar9._4_4_;
      auVar105._8_4_ = auVar128._8_4_ * auVar9._8_4_;
      auVar105._12_4_ = auVar128._12_4_ * auVar9._12_4_;
      auVar58 = NEON_ext(auVar31,auVar31,8,1);
      auVar100 = NEON_ext(auVar50,auVar50,8,1);
      auVar107 = NEON_ext(auVar97,auVar97,8,1);
      auVar30 = NEON_ext(auVar105,auVar105,8,1);
      auVar32._0_4_ = (auVar58._0_4_ + auVar31._0_4_ + auVar31._4_4_) / fVar145;
      auVar32._4_4_ = (auVar100._0_4_ + auVar50._0_4_ + auVar50._4_4_) / fVar149;
      auVar32._12_4_ = (auVar30._0_4_ + auVar105._0_4_ + auVar105._4_4_) / fVar155;
      auVar32._8_4_ = (auVar107._0_4_ + auVar97._0_4_ + auVar97._4_4_) / fVar150;
      auVar58 = NEON_fmov(0x3f800000,4);
      auVar58 = NEON_fminnm(auVar32,auVar58,4);
      auVar58 = NEON_fmax(auVar58,ZEXT816(0),4);
      fVar6 = auVar58._0_4_;
      fVar13 = auVar58._4_4_;
      auVar51._0_4_ = auVar112._0_4_ - fVar141 * fVar6;
      auVar51._4_4_ = auVar112._4_4_ - fVar142 * fVar6;
      auVar51._8_4_ = auVar112._8_4_ - fVar143 * fVar6;
      auVar51._12_4_ = auVar112._12_4_ - fVar144 * fVar6;
      auVar90._0_4_ = auVar89._0_4_ - fVar136 * fVar13;
      auVar90._4_4_ = auVar89._4_4_ - fVar137 * fVar13;
      auVar90._8_4_ = auVar89._8_4_ - fVar139 * fVar13;
      auVar90._12_4_ = auVar89._12_4_ - fVar140 * fVar13;
      fVar6 = auVar58._8_4_;
      fVar13 = auVar58._12_4_;
      auVar10._0_4_ = auVar9._0_4_ - auVar128._0_4_ * fVar13;
      auVar10._4_4_ = auVar9._4_4_ - auVar128._4_4_ * fVar13;
      auVar10._8_4_ = auVar9._8_4_ - auVar128._8_4_ * fVar13;
      auVar10._12_4_ = auVar9._12_4_ - auVar128._12_4_ * fVar13;
      auVar81._0_4_ = auVar80._0_4_ - auVar133._0_4_ * fVar6;
      auVar81._4_4_ = auVar80._4_4_ - auVar133._4_4_ * fVar6;
      auVar81._8_4_ = auVar80._8_4_ - auVar133._8_4_ * fVar6;
      auVar81._12_4_ = auVar80._12_4_ - auVar133._12_4_ * fVar6;
      fVar6 = auVar51._0_4_ * auVar51._0_4_ + auVar51._4_4_ * auVar51._4_4_ +
              auVar51._8_4_ * auVar51._8_4_;
      fVar13 = auVar51._0_4_ * auVar51._0_4_ + auVar51._4_4_ * auVar51._4_4_ +
               auVar51._8_4_ * auVar51._8_4_;
      fVar14 = auVar90._0_4_ * auVar90._0_4_ + auVar90._4_4_ * auVar90._4_4_ +
               auVar90._8_4_ * auVar90._8_4_;
      fVar17 = auVar90._0_4_ * auVar90._0_4_ + auVar90._4_4_ * auVar90._4_4_ +
               auVar90._8_4_ * auVar90._8_4_;
      fVar39 = auVar81._0_4_ * auVar81._0_4_ + auVar81._4_4_ * auVar81._4_4_ +
               auVar81._8_4_ * auVar81._8_4_;
      fVar54 = auVar81._0_4_ * auVar81._0_4_ + auVar81._4_4_ * auVar81._4_4_ +
               auVar81._8_4_ * auVar81._8_4_;
      fVar45 = auVar10._0_4_ * auVar10._0_4_ + auVar10._4_4_ * auVar10._4_4_ +
               auVar10._8_4_ * auVar10._8_4_;
      fVar53 = auVar10._0_4_ * auVar10._0_4_ + auVar10._4_4_ * auVar10._4_4_ +
               auVar10._8_4_ * auVar10._8_4_;
      uVar146 = NEON_fmin(CONCAT44(fVar13,fVar6),CONCAT44(fVar17,fVar14),4);
      uVar7 = CONCAT44(-(uint)(fVar13 < fVar17),-(uint)(fVar6 < fVar14)) & 0x100000001;
      iVar27 = (int)uVar7;
      iVar38 = (int)(uVar7 >> 0x20);
      auVar109._0_4_ = (iVar27 << 0x1f) >> 0x1f;
      auVar109._4_4_ = (iVar38 << 0x1f) >> 0x1f;
      auVar109._8_4_ = (iVar27 << 0x1f) >> 0x1f;
      auVar109._12_4_ = (iVar38 << 0x1f) >> 0x1f;
      uVar7 = CONCAT44(-(uint)(fVar54 < fVar53),-(uint)(fVar39 < fVar45)) & 0x100000001;
      iVar27 = (int)uVar7;
      iVar38 = (int)(uVar7 >> 0x20);
      auVar91._0_4_ = (iVar27 << 0x1f) >> 0x1f;
      auVar91._4_4_ = (iVar38 << 0x1f) >> 0x1f;
      auVar91._8_4_ = (iVar27 << 0x1f) >> 0x1f;
      auVar91._12_4_ = (iVar38 << 0x1f) >> 0x1f;
      auVar10 = auVar10 ^ (auVar10 ^ auVar81) & auVar91;
      uVar88 = NEON_fmin(CONCAT44(fVar54,fVar39),CONCAT44(fVar53,fVar45),4);
      uVar7 = CONCAT44(-(uint)((float)((ulong)uVar146 >> 0x20) < (float)((ulong)uVar88 >> 0x20)),
                       -(uint)((float)uVar146 < (float)uVar88)) & 0x100000001;
      iVar27 = (int)uVar7;
      iVar38 = (int)(uVar7 >> 0x20);
      auVar82._0_4_ = (iVar27 << 0x1f) >> 0x1f;
      auVar82._4_4_ = (iVar38 << 0x1f) >> 0x1f;
      auVar82._8_4_ = (iVar27 << 0x1f) >> 0x1f;
      auVar82._12_4_ = (iVar38 << 0x1f) >> 0x1f;
      auVar83 = auVar10 ^ (auVar10 ^ auVar51 ^ (auVar51 ^ auVar90) & ~auVar109) & auVar82;
      auVar11._8_8_ = auVar10._8_8_;
      auVar11._0_8_ = NEON_fmin(uVar146,uVar88,4);
      uVar7 = NEON_fmov(0x3f800000,4);
    }
    else {
      fVar6 = fVar19 + fVar64 + fVar62;
      fVar13 = fVar19 + fVar64 + fVar62;
      iVar27 = -(uint)(fVar6 == 0.0);
      uVar44 = CONCAT13(~(byte)((uint)iVar27 >> 0x18),
                        CONCAT12(~(byte)((uint)iVar27 >> 0x10),
                                 CONCAT11(~(byte)((uint)iVar27 >> 8),~(byte)iVar27)));
      uVar7 = CONCAT44((fVar61 * auVar112._8_4_ + fVar22 * auVar112._0_4_ + fVar63 * auVar112._4_4_)
                       / fVar13,(fVar61 * auVar112._8_4_ +
                                fVar22 * auVar112._0_4_ + fVar63 * auVar112._4_4_) / fVar6) &
              CONCAT44(uVar44,uVar44);
      fVar14 = (float)(uVar7 >> 0x20);
      auVar11._0_4_ = fVar6 * (float)uVar7 * (float)uVar7;
      auVar11._4_4_ = fVar13 * fVar14 * fVar14;
      auVar11._8_8_ = 0;
      auVar83._8_4_ = fVar61;
      auVar83._0_8_ = auVar60._0_8_;
      auVar83._12_4_ = 0;
    }
    bVar37 = (byte)(-(uint)((float)uVar7 < 0.0) >> 0x18);
    bVar41 = (byte)(-(uint)((float)(uVar7 >> 0x20) < 0.0) >> 0x18);
    uVar7 = CONCAT17(bVar41,(uint7)(bVar37 & 0x80) << 0x18) & 0x80ffffffffffffff;
    fVar6 = (float)CONCAT13((byte)(uVar7 >> 0x18) ^ auVar83[3],auVar83._0_3_);
    auVar79._0_8_ =
         CONCAT17((byte)(uVar7 >> 0x38) ^ auVar83[7],
                  CONCAT16(auVar83[6],CONCAT15(auVar83[5],CONCAT14(auVar83[4],fVar6))));
    auVar79[8] = auVar83[8];
    auVar79[9] = auVar83[9];
    auVar79[10] = auVar83[10];
    auVar79[0xb] = bVar37 & 0x80 ^ auVar83[0xb];
    auVar84[0xc] = auVar83[0xc];
    auVar84._0_12_ = auVar79;
    auVar84[0xd] = auVar83[0xd];
    auVar84[0xe] = auVar83[0xe];
    auVar84[0xf] = bVar41 & 0x80 ^ auVar83[0xf];
    auVar33._0_4_ = (fVar40 - fVar55) * fVar6;
    fVar13 = (float)((ulong)auVar79._0_8_ >> 0x20);
    auVar33._4_4_ = (fVar21 - fVar57) * fVar13;
    fVar14 = auVar79._8_4_;
    auVar33._8_4_ = (fVar24 - fVar15) * fVar14;
    auVar33._12_4_ = (fVar26 - fVar16) * auVar84._12_4_;
    auVar58 = NEON_ext(auVar33,auVar33,8,1);
    if (-1.1920929e-07 < auVar33._0_4_ + auVar33._4_4_ + auVar58._0_4_) break;
    bVar4 = !bVar5;
    bVar5 = false;
    fVar6 = fVar40;
    fVar13 = fVar21;
    fVar14 = fVar24;
    fVar17 = fVar26;
    if (bVar4) {
      fVar156 = fVar55 - fVar40;
      fVar157 = fVar57 - fVar21;
      fVar158 = fVar15 - fVar24;
      fVar159 = fVar16 - fVar26;
      auVar160._0_4_ = fVar141 * fVar156;
      auVar160._4_4_ = fVar142 * fVar157;
      auVar160._8_4_ = fVar143 * fVar158;
      auVar160._12_4_ = fVar144 * fVar159;
      auVar166._0_4_ = fVar136 * fVar156;
      auVar166._4_4_ = fVar137 * fVar157;
      auVar166._8_4_ = fVar139 * fVar158;
      auVar166._12_4_ = fVar140 * fVar159;
      auVar76._0_4_ = auVar133._0_4_ * fVar156;
      auVar76._4_4_ = auVar133._4_4_ * fVar157;
      auVar76._8_4_ = auVar133._8_4_ * fVar158;
      auVar76._12_4_ = auVar133._12_4_ * fVar159;
      auVar85._0_4_ = auVar128._0_4_ * fVar156;
      auVar85._4_4_ = auVar128._4_4_ * fVar157;
      auVar85._8_4_ = auVar128._8_4_ * fVar158;
      auVar85._12_4_ = auVar128._12_4_ * fVar159;
      auVar58 = NEON_ext(auVar160,auVar160,8,1);
      auVar107 = NEON_ext(auVar166,auVar166,8,1);
      auVar60 = NEON_ext(auVar76,auVar76,8,1);
      auVar100 = NEON_ext(auVar85,auVar85,8,1);
      fVar13 = auVar58._0_4_ + auVar160._0_4_ + auVar160._4_4_;
      fVar14 = auVar107._0_4_ + auVar166._0_4_ + auVar166._4_4_;
      fVar163 = auVar60._0_4_ + auVar76._0_4_ + auVar76._4_4_;
      fVar168 = auVar100._0_4_ + auVar85._0_4_ + auVar85._4_4_;
      auVar86._0_4_ = (fVar116 - fVar40) * fVar156;
      auVar86._4_4_ = (fVar117 - fVar21) * fVar157;
      auVar86._8_4_ = (fVar121 - fVar24) * fVar158;
      auVar86._12_4_ = (fVar123 - fVar26) * fVar159;
      auVar92._0_4_ = (fVar113 - fVar40) * fVar156;
      auVar92._4_4_ = (fVar115 - fVar21) * fVar157;
      auVar92._8_4_ = (fVar124 - fVar24) * fVar158;
      auVar92._12_4_ = (fVar126 - fVar26) * fVar159;
      auVar167._0_4_ = (fVar118 - fVar40) * fVar156;
      auVar167._4_4_ = (fVar119 - fVar21) * fVar157;
      auVar167._8_4_ = (fVar120 - fVar24) * fVar158;
      auVar167._12_4_ = (fVar56 - fVar26) * fVar159;
      auVar77._0_4_ = (fVar125 - fVar40) * fVar156;
      auVar77._4_4_ = (fVar127 - fVar21) * fVar157;
      auVar77._8_4_ = (fVar114 - fVar24) * fVar158;
      auVar77._12_4_ = (fVar138 - fVar26) * fVar159;
      auVar107 = NEON_ext(auVar167,auVar167,8,1);
      auVar58 = NEON_ext(auVar77,auVar77,8,1);
      auVar34._0_4_ = fVar141 * (fVar118 - fVar40);
      auVar34._4_4_ = fVar142 * (fVar119 - fVar21);
      auVar34._8_4_ = fVar143 * (fVar120 - fVar24);
      auVar34._12_4_ = fVar144 * (fVar56 - fVar26);
      auVar60 = NEON_ext(auVar86,auVar86,8,1);
      auVar100 = NEON_ext(auVar92,auVar92,8,1);
      auVar52._0_4_ = fVar136 * (fVar125 - fVar40);
      auVar52._4_4_ = fVar137 * (fVar127 - fVar21);
      auVar52._8_4_ = fVar139 * (fVar114 - fVar24);
      auVar52._12_4_ = fVar140 * (fVar138 - fVar26);
      fVar164 = auVar107._0_4_ + auVar167._0_4_ + auVar167._4_4_;
      fVar169 = auVar58._0_4_ + auVar77._0_4_ + auVar77._4_4_;
      fVar74 = auVar60._0_4_ + auVar86._0_4_ + auVar86._4_4_;
      fVar78 = auVar100._0_4_ + auVar92._0_4_ + auVar92._4_4_;
      auVar161._0_4_ = auVar133._0_4_ * (fVar116 - fVar40);
      auVar161._4_4_ = auVar133._4_4_ * (fVar117 - fVar21);
      auVar161._8_4_ = auVar133._8_4_ * (fVar121 - fVar24);
      auVar161._12_4_ = auVar133._12_4_ * (fVar123 - fVar26);
      auVar171._0_4_ = auVar128._0_4_ * (fVar113 - fVar40);
      auVar171._4_4_ = auVar128._4_4_ * (fVar115 - fVar21);
      auVar171._8_4_ = auVar128._8_4_ * (fVar124 - fVar24);
      auVar171._12_4_ = auVar128._12_4_ * (fVar126 - fVar26);
      auVar58 = NEON_ext(auVar34,auVar34,8,1);
      auVar60 = NEON_ext(auVar52,auVar52,8,1);
      auVar100 = NEON_ext(auVar161,auVar161,8,1);
      auVar107 = NEON_ext(auVar171,auVar171,8,1);
      fVar45 = auVar100._0_4_ + auVar161._0_4_ + auVar161._4_4_;
      fVar53 = auVar107._0_4_ + auVar171._0_4_ + auVar171._4_4_;
      fVar6 = auVar58._0_4_ + auVar34._0_4_ + auVar34._4_4_;
      fVar39 = auVar60._0_4_ + auVar52._0_4_ + auVar52._4_4_;
      auVar100 = NEON_fmov(0x3f800000,4);
      fVar17 = fVar158 * fVar158 + fVar156 * fVar156 + fVar157 * fVar157;
      fVar54 = fVar158 * fVar158 + fVar156 * fVar156 + fVar157 * fVar157;
      fVar87 = auVar100._0_4_ / fVar145;
      fVar93 = auVar100._4_4_ / fVar149;
      fVar94 = auVar100._8_4_ / fVar150;
      fVar95 = auVar100._12_4_ / fVar155;
      iVar27 = -(uint)(fVar145 == 0.0);
      iVar38 = -(uint)(fVar149 == 0.0);
      iVar42 = -(uint)(fVar150 == 0.0);
      iVar43 = -(uint)(fVar155 == 0.0);
      auVar152._0_4_ = fVar145 * fVar17 - fVar13 * fVar13;
      auVar152._4_4_ = fVar149 * fVar54 - fVar14 * fVar14;
      auVar152._8_4_ = fVar150 * fVar17 - fVar163 * fVar163;
      auVar152._12_4_ = fVar155 * fVar54 - fVar168 * fVar168;
      auVar162._8_4_ = 0x34000000;
      auVar162._0_8_ = 0x3400000034000000;
      auVar162._12_4_ = 0x34000000;
      auVar147._0_4_ = fVar145 * fVar164 - fVar6 * fVar13;
      auVar147._4_4_ = fVar149 * fVar169 - fVar39 * fVar14;
      auVar147._8_4_ = fVar150 * fVar74 - fVar45 * fVar163;
      auVar147._12_4_ = fVar155 * fVar78 - fVar53 * fVar168;
      auVar58 = NEON_fmax(auVar152,auVar162,4);
      fVar145 = auVar58._0_4_;
      fVar149 = auVar58._4_4_;
      fVar150 = auVar58._8_4_;
      fVar155 = auVar58._12_4_;
      auVar98._0_4_ = -(uint)(auVar147._0_4_ < fVar145);
      auVar98._4_4_ = -(uint)(auVar147._4_4_ < fVar149);
      auVar98._8_4_ = -(uint)(auVar147._8_4_ < fVar150);
      auVar98._12_4_ = -(uint)(auVar147._12_4_ < fVar155);
      auVar60 = ZEXT816(0);
      auVar153._0_4_ = -(uint)(fVar145 <= 1.1920929e-07);
      auVar153._4_4_ = -(uint)(fVar149 <= 1.1920929e-07);
      auVar153._8_4_ = -(uint)(fVar150 <= 1.1920929e-07);
      auVar153._12_4_ = -(uint)(fVar155 <= 1.1920929e-07);
      auVar58 = NEON_fmax(auVar147 ^ (auVar147 ^ auVar58) & ~auVar98,auVar60,4);
      auVar148._0_4_ = auVar58._0_4_ * (auVar100._0_4_ / fVar145);
      auVar148._4_4_ = auVar58._4_4_ * (auVar100._4_4_ / fVar149);
      auVar148._8_4_ = auVar58._8_4_ * (auVar100._8_4_ / fVar150);
      auVar148._12_4_ = auVar58._12_4_ * (auVar100._12_4_ / fVar155);
      auVar148 = auVar148 ^ (auVar148 ^ auVar100) & auVar153;
      fVar145 = (float)CONCAT13((byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                                CONCAT12((byte)((uint)fVar87 >> 0x10) &
                                         ~(byte)((uint)iVar27 >> 0x10),
                                         CONCAT11((byte)((uint)fVar87 >> 8) &
                                                  ~(byte)((uint)iVar27 >> 8),
                                                  SUB41(fVar87,0) & ~(byte)iVar27)));
      auVar151._0_8_ =
           CONCAT17((byte)((uint)fVar93 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                    CONCAT16((byte)((uint)fVar93 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                             CONCAT15((byte)((uint)fVar93 >> 8) & ~(byte)((uint)iVar38 >> 8),
                                      CONCAT14(SUB41(fVar93,0) & ~(byte)iVar38,fVar145))));
      auVar151[8] = SUB41(fVar94,0) & ~(byte)iVar42;
      auVar151[9] = (byte)((uint)fVar94 >> 8) & ~(byte)((uint)iVar42 >> 8);
      auVar151[10] = (byte)((uint)fVar94 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10);
      auVar151[0xb] = (byte)((uint)fVar94 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18);
      auVar154[0xc] = SUB41(fVar95,0) & ~(byte)iVar43;
      auVar154._0_12_ = auVar151;
      auVar154[0xd] = (byte)((uint)fVar95 >> 8) & ~(byte)((uint)iVar43 >> 8);
      auVar154[0xe] = (byte)((uint)fVar95 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10);
      auVar154[0xf] = (byte)((uint)fVar95 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18);
      fVar149 = (float)((ulong)auVar151._0_8_ >> 0x20);
      auVar35._0_4_ = fVar145 * fVar13 * auVar148._0_4_ - fVar145 * fVar6;
      auVar35._4_4_ = fVar149 * fVar14 * auVar148._4_4_ - fVar149 * fVar39;
      auVar35._8_4_ = auVar151._8_4_ * fVar163 * auVar148._8_4_ - auVar151._8_4_ * fVar45;
      auVar35._12_4_ = auVar154._12_4_ * fVar168 * auVar148._12_4_ - auVar154._12_4_ * fVar53;
      uVar146 = NEON_fmov(0x3f800000,4);
      auVar58 = NEON_fminnm(auVar35,auVar100,4);
      auVar58 = NEON_fmax(auVar58,auVar60,4);
      fVar145 = (float)uVar146;
      fVar17 = fVar145 / fVar17;
      fVar149 = (float)((ulong)uVar146 >> 0x20);
      fVar54 = fVar149 / fVar54;
      fVar45 = auVar58._12_4_;
      fVar155 = auVar58._0_4_;
      fVar6 = auVar58._4_4_;
      fVar39 = auVar58._8_4_;
      auVar165._0_4_ = fVar164 * fVar17 + fVar155 * fVar13 * fVar17;
      auVar165._4_4_ = fVar169 * fVar54 + fVar6 * fVar14 * fVar54;
      auVar165._8_4_ = fVar74 * fVar17 + fVar39 * fVar163 * fVar17;
      auVar165._12_4_ = fVar78 * fVar54 + fVar45 * fVar168 * fVar54;
      auVar58 = NEON_fminnm(auVar165,auVar100,4);
      auVar58 = NEON_fmax(auVar58,auVar60,4);
      fVar150 = auVar58._0_4_;
      fVar13 = auVar58._4_4_;
      local_80[0] = (fVar40 - fVar118) + (fVar156 * fVar150 - fVar141 * fVar155);
      local_80[1] = (fVar21 - fVar119) + (fVar157 * fVar150 - fVar142 * fVar155);
      local_80[2] = (fVar24 - fVar120) + (fVar158 * fVar150 - fVar143 * fVar155);
      local_80[3] = (fVar26 - fVar56) + (fVar159 * fVar150 - fVar144 * fVar155);
      fVar56 = auVar58._8_4_;
      fStack_70 = (fVar40 - fVar125) + (fVar156 * fVar13 - fVar136 * fVar6);
      fStack_6c = (fVar21 - fVar127) + (fVar157 * fVar13 - fVar137 * fVar6);
      fStack_68 = (fVar24 - fVar114) + (fVar158 * fVar13 - fVar139 * fVar6);
      fStack_64 = (fVar26 - fVar138) + (fVar159 * fVar13 - fVar140 * fVar6);
      fVar14 = (fVar40 - fVar116) + (fVar156 * fVar56 - auVar133._0_4_ * fVar39);
      fVar17 = (fVar21 - fVar117) + (fVar157 * fVar56 - auVar133._4_4_ * fVar39);
      fVar116 = (fVar24 - fVar121) + (fVar158 * fVar56 - auVar133._8_4_ * fVar39);
      fVar117 = (fVar26 - fVar123) + (fVar159 * fVar56 - auVar133._12_4_ * fVar39);
      fVar114 = auVar58._12_4_;
      auVar129._0_4_ = fStack_70 * fStack_70;
      auVar129._4_4_ = fStack_6c * fStack_6c;
      auVar129._8_4_ = fStack_68 * fStack_68;
      auVar129._12_4_ = fStack_64 * fStack_64;
      auVar131._0_4_ = fVar14 * fVar14;
      auVar131._4_4_ = fVar17 * fVar17;
      auVar131._8_4_ = fVar116 * fVar116;
      auVar131._12_4_ = fVar117 * fVar117;
      fVar121 = (fVar40 - fVar113) + (fVar156 * fVar114 - auVar128._0_4_ * fVar45);
      fVar123 = (fVar21 - fVar115) + (fVar157 * fVar114 - auVar128._4_4_ * fVar45);
      fVar125 = (fVar24 - fVar124) + (fVar158 * fVar114 - auVar128._8_4_ * fVar45);
      fVar127 = (fVar26 - fVar126) + (fVar159 * fVar114 - auVar128._12_4_ * fVar45);
      auVar170._0_4_ = local_80[0] * local_80[0];
      auVar170._4_4_ = local_80[1] * local_80[1];
      auVar170._8_4_ = local_80[2] * local_80[2];
      auVar170._12_4_ = local_80[3] * local_80[3];
      auVar134._0_4_ = fVar121 * fVar121;
      auVar134._4_4_ = fVar123 * fVar123;
      auVar134._8_4_ = fVar125 * fVar125;
      auVar134._12_4_ = fVar127 * fVar127;
      auVar58 = NEON_ext(auVar170,auVar170,8,1);
      auVar60 = NEON_ext(auVar129,auVar129,8,1);
      uStack_58 = CONCAT44(fVar117,fVar116);
      local_60 = CONCAT44(fVar17,fVar14);
      uStack_48 = CONCAT44(fVar127,fVar125);
      uStack_50 = CONCAT44(fVar123,fVar121);
      auVar100 = NEON_ext(auVar131,auVar131,8,1);
      auVar107 = NEON_ext(auVar134,auVar134,8,1);
      auVar12._0_4_ = auVar58._0_4_ + auVar170._0_4_ + auVar170._4_4_;
      auVar12._4_4_ = auVar60._0_4_ + auVar129._0_4_ + auVar129._4_4_;
      auVar130._4_4_ = auVar12._4_4_;
      auVar130._0_4_ = auVar12._0_4_;
      fVar17 = auVar100._0_4_ + auVar131._0_4_ + auVar131._4_4_;
      fVar116 = auVar107._0_4_ + auVar134._0_4_ + auVar134._4_4_;
      auVar130._12_4_ = fVar116;
      auVar130._8_4_ = fVar17;
      fVar14 = (float)NEON_fminnmv(auVar130,4);
      iVar27 = -(uint)(auVar12._0_4_ <= fVar14);
      iVar38 = -(uint)(auVar12._4_4_ <= fVar14);
      iVar42 = -(uint)(fVar17 <= fVar14);
      iVar43 = -(uint)(fVar116 <= fVar14);
      iVar27 = CONCAT13((byte)((uint)iVar27 >> 0x18) & (byte)((ulong)_DAT_03cab270 >> 0x18),
                        CONCAT12((byte)((uint)iVar27 >> 0x10) & (byte)((ulong)_DAT_03cab270 >> 0x10)
                                 ,CONCAT11((byte)((uint)iVar27 >> 8) &
                                           (byte)((ulong)_DAT_03cab270 >> 8),
                                           (byte)iVar27 & (byte)_DAT_03cab270)));
      auVar28._0_8_ =
           CONCAT17((byte)((uint)iVar38 >> 0x18) & (byte)((ulong)_DAT_03cab270 >> 0x38),
                    CONCAT16((byte)((uint)iVar38 >> 0x10) & (byte)((ulong)_DAT_03cab270 >> 0x30),
                             CONCAT15((byte)((uint)iVar38 >> 8) &
                                      (byte)((ulong)_DAT_03cab270 >> 0x28),
                                      CONCAT14((byte)iVar38 & (byte)((ulong)_DAT_03cab270 >> 0x20),
                                               iVar27))));
      auVar28[8] = (byte)iVar42 & (byte)_UNK_03cab278;
      auVar28[9] = (byte)((uint)iVar42 >> 8) & (byte)((ulong)_UNK_03cab278 >> 8);
      auVar28[10] = (byte)((uint)iVar42 >> 0x10) & (byte)((ulong)_UNK_03cab278 >> 0x10);
      auVar28[0xb] = (byte)((uint)iVar42 >> 0x18) & (byte)((ulong)_UNK_03cab278 >> 0x18);
      auVar36[0xc] = (byte)iVar43 & (byte)((ulong)_UNK_03cab278 >> 0x20);
      auVar36._0_12_ = auVar28;
      auVar36[0xd] = (byte)((uint)iVar43 >> 8) & (byte)((ulong)_UNK_03cab278 >> 0x28);
      auVar36[0xe] = (byte)((uint)iVar43 >> 0x10) & (byte)((ulong)_UNK_03cab278 >> 0x30);
      auVar36[0xf] = (byte)((uint)iVar43 >> 0x18) & (byte)((ulong)_UNK_03cab278 >> 0x38);
      cVar1 = PTR_DAT_047d19d8
              [(uint)(iVar27 + (int)((ulong)auVar28._0_8_ >> 0x20) + auVar28._8_4_ + auVar36._12_4_)
              ];
      iVar27 = (int)cVar1;
      if (cVar1 != '\x01') {
        if (cVar1 == '\x03') {
          fVar6 = fVar45;
        }
        else if (iVar27 == 2) {
          fVar6 = fVar39;
        }
        else {
          fVar6 = fVar155;
        }
      }
      iVar38 = (int)cVar1;
      uVar88 = (param_3 + (long)iVar38 * 2)[1];
      uVar146 = param_3[(long)iVar38 * 2];
      pfVar2 = (float *)(param_3 + (ulong)(iVar27 + 1U & 3) * 2);
      fVar14 = *pfVar2;
      fVar117 = pfVar2[1];
      fVar121 = pfVar2[2];
      fVar123 = pfVar2[3];
      if (iVar38 == 3) {
        auVar12._4_4_ = fVar116;
        auVar12._0_4_ = fVar116;
        auVar12._8_8_ = 0;
      }
      else if (iVar38 == 2) {
        auVar12._4_4_ = fVar17;
        auVar12._0_4_ = fVar17;
        auVar12._8_8_ = 0;
      }
      else if (iVar27 == 1) {
        auVar12._0_4_ = auVar12._4_4_;
        auVar12._8_8_ = 0;
      }
      else {
        auVar12._4_4_ = auVar12._0_4_;
        auVar12._8_8_ = 0;
      }
      fVar17 = (float)*(undefined8 *)(local_80 + (long)iVar38 * 4);
      fVar116 = (float)((ulong)*(undefined8 *)(local_80 + (long)iVar38 * 4) >> 0x20);
      fVar125 = (float)*(undefined8 *)(local_80 + (long)iVar38 * 4 + 2);
      fVar127 = fVar17 * fVar17 + fVar116 * fVar116 + fVar125 * fVar125;
      fVar138 = fVar17 * fVar17 + fVar116 * fVar116 + fVar125 * fVar125;
      uVar7 = CONCAT44(-(uint)(fVar138 < 1.4210855e-14),-(uint)(fVar127 < 1.4210855e-14)) &
              0x100000001;
      if (fVar127 == 0.0) {
        fVar127 = 0.0;
        fVar138 = 0.0;
      }
      else {
        fVar127 = fVar145 / SQRT(fVar127);
        fVar138 = fVar149 / SQRT(fVar138);
      }
      fVar113 = (float)((ulong)*(undefined8 *)(local_80 + (long)iVar38 * 4 + 2) >> 0x20) * fVar138;
      uVar132 = (ushort)uVar7;
      uVar135 = (ushort)(uVar7 >> 0x20);
      if (iVar27 - 1U != 0) {
        if (iVar38 == 3) {
          fVar13 = fVar114;
        }
        else if (iVar38 == 2) {
          fVar13 = fVar56;
        }
        else {
          fVar13 = fVar150;
        }
      }
      fVar114 = (float)((uint)(fVar17 * fVar127) ^
                       ((uint)(fVar17 * fVar127) ^ (uint)DAT_03cab620) &
                       (int)((uint)uVar132 << 0x1f) >> 0x1f);
      fVar116 = (float)((uint)(fVar116 * fVar138) ^
                       ((uint)(fVar116 * fVar138) ^ DAT_03cab620._4_4_) &
                       (int)((uint)uVar135 << 0x1f) >> 0x1f);
      fVar125 = (float)((uint)(fVar125 * fVar127) ^
                       ((uint)(fVar125 * fVar127) ^ (uint)DAT_03cab628) &
                       (int)((uint)uVar132 << 0x1f) >> 0x1f);
      fVar113 = (float)((uint)fVar113 ^
                       ((uint)fVar113 ^ DAT_03cab628._4_4_) & (int)((uint)uVar135 << 0x1f) >> 0x1f);
      fVar17 = SQRT(auVar12._0_4_);
      *param_4 = CONCAT44(SQRT(auVar12._4_4_),fVar17);
      *(float *)(param_4 + 3) = fVar125;
      *(float *)((long)param_4 + 0x1c) = fVar113;
      *(float *)(param_4 + 2) = fVar114;
      *(float *)((long)param_4 + 0x14) = fVar116;
      *(float *)(param_4 + 5) = fVar158 * fVar13 + fVar24;
      *(float *)((long)param_4 + 0x2c) = fVar159 * fVar13 + fVar26;
      *(float *)(param_4 + 4) = fVar156 * fVar13 + fVar40;
      *(float *)((long)param_4 + 0x24) = fVar157 * fVar13 + fVar21;
      if ((0.0 < fVar6) && (fVar6 < 1.0)) {
        fVar56 = (float)uVar146;
        fVar115 = (float)((ulong)uVar146 >> 0x20);
        fVar124 = (float)uVar88;
        fVar13 = fVar56 * (fVar145 - fVar6) + fVar6 * fVar14;
        fVar127 = fVar115 * (fVar149 - fVar6) + fVar6 * fVar117;
        fVar138 = fVar124 * (fVar145 - fVar6) + fVar6 * fVar121;
        fVar14 = fVar14 - fVar56;
        fVar117 = fVar117 - fVar115;
        fVar121 = fVar121 - fVar124;
        fVar6 = (fVar121 * fVar125 + fVar14 * fVar114 + fVar117 * fVar116) /
                (fVar121 * fVar121 + fVar14 * fVar14 + fVar117 * fVar117);
        fVar115 = (fVar121 * fVar125 + fVar14 * fVar114 + fVar117 * fVar116) /
                  (fVar121 * fVar121 + fVar14 * fVar14 + fVar117 * fVar117);
        uVar146 = param_3[(ulong)(iVar38 + 2U & 3) * 2];
        fVar114 = fVar114 - fVar14 * fVar6;
        fVar116 = fVar116 - fVar117 * fVar115;
        fVar125 = fVar125 - fVar121 * fVar6;
        pfVar2 = (float *)(param_3 + (ulong)(iVar27 - 1U & 3) * 2);
        fVar117 = (*pfVar2 - fVar13) * fVar114;
        fVar121 = (pfVar2[1] - fVar127) * fVar116;
        fVar56 = (pfVar2[2] - fVar138) * fVar125;
        fVar6 = ((float)uVar146 - fVar13) * fVar114;
        fVar13 = ((float)((ulong)uVar146 >> 0x20) - fVar127) * fVar116;
        fVar14 = ((float)(param_3 + (ulong)(iVar38 + 2U & 3) * 2)[1] - fVar138) * fVar125;
        uVar46 = CONCAT44(fVar117 + fVar121 + fVar56,fVar117 + fVar121 + fVar56);
        uVar146 = CONCAT44(fVar6 + fVar13 + fVar14,fVar6 + fVar13 + fVar14);
        uVar122 = NEON_fmax(uVar46,uVar146,4);
        uVar146 = NEON_fmin(uVar46,uVar146,4);
        uVar146 = NEON_fmin(uVar146,0,4);
        if (fVar17 * 0.1 + (float)uVar146 * -0.3 <= (float)uVar122) {
          fVar6 = SQRT(fVar19 + fVar64 + fVar62);
          fVar117 = SQRT(fVar19 + fVar64 + fVar62);
          fVar22 = fVar22 / fVar6;
          fVar63 = fVar63 / fVar117;
          fVar61 = fVar61 / fVar6;
          fVar117 = 0.0 / fVar117;
          fVar6 = (fVar40 - fVar118) * fVar22;
          fVar13 = (fVar21 - fVar119) * fVar63;
          fVar121 = (fVar24 - fVar120) * fVar61;
          fVar19 = fVar6 + fVar13 + fVar121;
          fVar121 = fVar6 + fVar13 + fVar121;
          fVar64 = auVar112._0_4_ * fVar22 + auVar112._4_4_ * fVar63 + auVar112._8_4_ * fVar61;
          fVar62 = auVar112._0_4_ * fVar22 + auVar112._4_4_ * fVar63 + auVar112._8_4_ * fVar61;
          uVar7 = CONCAT44(fVar62,fVar64);
          fVar6 = fVar19 * fVar19;
          fVar13 = fVar121 * fVar121;
          uVar65 = (undefined1)((uint)fVar13 >> 8);
          uVar66 = (undefined1)((uint)fVar13 >> 0x10);
          uVar67 = (undefined1)((uint)fVar13 >> 0x18);
          fVar64 = fVar64 * fVar64;
          fVar14 = fVar64;
          if (fVar64 >= fVar6) {
            fVar14 = fVar6;
          }
          uVar18 = -(uint)(fVar64 < fVar6);
          if (auVar12._0_4_ <= fVar14) {
            fVar6 = fVar125 * fVar125 + fVar114 * fVar114 + fVar116 * fVar116;
            fVar14 = 0.0;
            fVar55 = 0.0;
            fVar57 = 0.0;
            fVar13 = 0.0;
            if (fVar6 != 0.0) {
              fVar6 = SQRT(fVar6);
              fVar13 = SQRT(fVar125 * fVar125 + fVar114 * fVar114 + fVar116 * fVar116);
              fVar14 = fVar114 / fVar6;
              fVar55 = fVar116 / fVar13;
              fVar57 = fVar125 / fVar6;
              fVar13 = (fVar113 - (fVar123 - (float)((ulong)uVar88 >> 0x20)) * fVar115) / fVar13;
            }
            *(float *)(param_4 + 3) = 0.0 - fVar57;
            *(float *)((long)param_4 + 0x1c) = 0.0 - fVar13;
            *(float *)(param_4 + 2) = 0.0 - fVar14;
            *(float *)((long)param_4 + 0x14) = 0.0 - fVar55;
            uVar146 = CONCAT44(-SQRT(auVar12._4_4_),-fVar17);
          }
          else {
            uVar8 = CONCAT44(uVar18,uVar18);
            uVar47 = uVar7 ^ (uVar7 ^ CONCAT44(fVar121,fVar19)) & uVar8;
            auVar12._0_8_ =
                 CONCAT17(uVar67,CONCAT16(uVar66,CONCAT15(uVar65,CONCAT14(SUB41(fVar13,0),fVar6))))
                 ^ (CONCAT17(uVar67,CONCAT16(uVar66,CONCAT15(uVar65,CONCAT14(SUB41(fVar13,0),fVar6))
                                            )) ^ CONCAT44(fVar62 * fVar62,fVar64)) & uVar8;
            auVar12._8_8_ = 0;
            fVar14 = (float)uVar47;
            bVar37 = (byte)(-(uint)(fVar14 < 0.0) >> 0x18);
            fVar17 = (float)(uVar47 >> 0x20);
            bVar41 = (byte)(-(uint)(fVar17 < 0.0) >> 0x18);
            uVar7 = CONCAT44(fVar121,fVar19) ^ (CONCAT44(fVar121,fVar19) ^ uVar7) & uVar8;
            fVar6 = (float)uVar7;
            fVar116 = ABS(fVar6);
            fVar13 = (float)(uVar7 >> 0x20);
            fVar121 = ABS(fVar13);
            uVar7 = CONCAT17(bVar41,(uint7)(bVar37 & 0x80) << 0x18) & 0x80ffffffffffffff;
            auVar59._0_8_ =
                 CONCAT17((byte)(uVar7 >> 0x38) ^ (byte)((uint)fVar63 >> 0x18),
                          CONCAT16((char)((uint)fVar63 >> 0x10),
                                   CONCAT15((char)((uint)fVar63 >> 8),
                                            CONCAT14(SUB41(fVar63,0),
                                                     CONCAT13((byte)(uVar7 >> 0x18) ^
                                                              (byte)((uint)fVar22 >> 0x18),
                                                              SUB43(fVar22,0))))));
            auVar59[8] = SUB41(fVar61,0);
            auVar59[9] = (char)((uint)fVar61 >> 8);
            auVar59[10] = (char)((uint)fVar61 >> 0x10);
            auVar59[0xb] = bVar37 & 0x80 ^ (byte)((uint)fVar61 >> 0x18);
            auVar59[0xc] = SUB41(fVar117,0);
            auVar59[0xd] = (char)((uint)fVar117 >> 8);
            auVar59[0xe] = (char)((uint)fVar117 >> 0x10);
            auVar59[0xf] = bVar41 & 0x80 ^ (byte)((uint)fVar117 >> 0x18);
            param_4[3] = auVar59._8_8_;
            param_4[2] = auVar59._0_8_;
            *(uint *)(param_4 + 5) = (uint)fVar15 ^ ((uint)fVar15 ^ (uint)fVar24) & ~uVar18;
            *(uint *)((long)param_4 + 0x2c) = (uint)fVar16 ^ ((uint)fVar16 ^ (uint)fVar26) & ~uVar18
            ;
            *(uint *)(param_4 + 4) = (uint)fVar55 ^ ((uint)fVar55 ^ (uint)fVar40) & ~uVar18;
            *(uint *)((long)param_4 + 0x24) = (uint)fVar57 ^ ((uint)fVar57 ^ (uint)fVar21) & ~uVar18
            ;
            uVar3 = (uint5)(CONCAT44(-(uint)(fVar13 * fVar17 < 0.0),-(uint)(fVar6 * fVar14 < 0.0))
                           >> 0x18) & 0x8000000080;
            uVar146 = CONCAT17((byte)(uVar3 >> 0x20) ^ (byte)((uint)fVar121 >> 0x18),
                               CONCAT16((char)((uint)fVar121 >> 0x10),
                                        CONCAT15((char)((uint)fVar121 >> 8),
                                                 CONCAT14(SUB41(fVar121,0),
                                                          CONCAT13((byte)uVar3 ^
                                                                   (byte)((uint)fVar116 >> 0x18),
                                                                   SUB43(fVar116,0))))));
          }
          *param_4 = uVar146;
        }
      }
      return auVar12;
    }
  }
  fVar17 = fVar14 * fVar14 + fVar6 * fVar6 + fVar13 * fVar13;
  if (fVar17 == 0.0) {
    fVar6 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar40 = 0.0;
  }
  else {
    fVar17 = SQRT(fVar17);
    fVar40 = SQRT(fVar14 * fVar14 + fVar6 * fVar6 + fVar13 * fVar13);
    fVar6 = fVar6 / fVar17;
    fVar13 = fVar13 / fVar40;
    fVar14 = fVar14 / fVar17;
    fVar40 = auVar84._12_4_ / fVar40;
  }
  *param_4 = CONCAT44(SQRT(auVar11._4_4_),SQRT(auVar11._0_4_));
  *(float *)(param_4 + 3) = fVar14;
  *(float *)((long)param_4 + 0x1c) = fVar40;
  *(float *)(param_4 + 2) = fVar6;
  *(float *)((long)param_4 + 0x14) = fVar13;
  *(float *)(param_4 + 5) = fVar15;
  *(float *)((long)param_4 + 0x2c) = fVar16;
  *(float *)(param_4 + 4) = fVar55;
  *(float *)((long)param_4 + 0x24) = fVar57;
  return auVar11;
}


