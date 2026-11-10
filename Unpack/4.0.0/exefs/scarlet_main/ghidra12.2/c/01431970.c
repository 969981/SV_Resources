/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01431970; name: FUN_01431970
 */


void FUN_01431970(undefined1 param_1 [16],long param_2,undefined2 *param_3,undefined8 param_4)

{
  undefined2 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 auVar17 [16];
  int iVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  long lVar32;
  long lVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float extraout_s0;
  float extraout_s0_00;
  float fVar36;
  float extraout_var;
  float extraout_var_01;
  float extraout_var_00;
  float fVar39;
  float extraout_var_02;
  float fVar40;
  float extraout_var_03;
  float extraout_var_04;
  float fVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar58;
  float fVar59;
  undefined1 auVar54 [16];
  float fVar60;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar61;
  float fVar67;
  float fVar68;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar69;
  undefined1 auVar66 [16];
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  byte bVar92;
  byte bVar93;
  char cVar94;
  byte bVar95;
  char cVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  char cVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  char cVar104;
  byte bVar105;
  char cVar106;
  byte bVar107;
  char cVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  char cVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  char cVar116;
  byte bVar117;
  uint uVar118;
  byte bVar120;
  byte bVar122;
  byte bVar123;
  int iVar121;
  byte bVar124;
  byte bVar126;
  byte bVar127;
  int iVar125;
  byte bVar128;
  undefined1 auVar119 [16];
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  float fVar135;
  undefined1 auVar133 [16];
  float fVar136;
  undefined1 auVar134 [16];
  float fVar137;
  undefined1 auVar139 [12];
  ulong uVar138;
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  byte bVar150;
  ulong uVar151;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined8 local_50;
  ulong uStack_48;
  
  if (*(char *)(param_2 + 0x66) == '\0') {
    return;
  }
  lVar33 = *(long *)(param_2 + 0x70);
  uVar78 = param_1[8];
  uVar79 = param_1[9];
  uVar80 = param_1[10];
  uVar81 = param_1[0xb];
  uVar82 = param_1[0xc];
  uVar83 = param_1[0xd];
  uVar84 = param_1[0xe];
  uVar85 = param_1[0xf];
  lVar32 = FUN_00c4c40c(lVar33,*param_3);
  auVar38 = *(undefined1 (*) [16])(lVar32 + 0x30);
  fVar36 = auVar38._0_4_;
  fVar39 = auVar38._4_4_;
  auVar54 = *(undefined1 (*) [16])(lVar33 + 0x410);
  fVar40 = auVar38._8_4_;
  fVar41 = auVar38._12_4_;
  local_50 = CONCAT44(*(float *)(lVar33 + 0x3e4) * fVar36 +
                      (float)((ulong)*(undefined8 *)(lVar33 + 0x3f0) >> 0x20) * fVar39 +
                      (float)((ulong)*(undefined8 *)(lVar33 + 0x400) >> 0x20) * fVar40 +
                      auVar54._4_4_ * fVar41,
                      *(float *)(lVar33 + 0x3e0) * fVar36 +
                      (float)*(undefined8 *)(lVar33 + 0x3f0) * fVar39 +
                      (float)*(undefined8 *)(lVar33 + 0x400) * fVar40 + auVar54._0_4_ * fVar41);
  uStack_48 = (ulong)(uint)(*(float *)(lVar33 + 1000) * fVar36 +
                            (float)*(undefined8 *)(lVar33 + 0x3f8) * fVar39 +
                            (float)*(undefined8 *)(lVar33 + 0x408) * fVar40 + auVar54._8_4_ * fVar41
                           );
  iVar70 = *(int *)(param_2 + 0x238);
  if (iVar70 == 1) {
    auVar38[9] = uVar79;
    auVar38[8] = uVar78;
    auVar38[10] = uVar80;
    auVar38[0xb] = uVar81;
    auVar38[0xc] = uVar82;
    auVar38[0xd] = uVar83;
    auVar38[0xe] = uVar84;
    auVar38[0xf] = uVar85;
    auVar38._0_8_ = param_1._0_8_;
    FUN_014325e4(auVar38,param_2,param_3,param_4,&local_50);
    fVar36 = extraout_s0;
    fVar39 = extraout_var;
    fVar40 = extraout_var_01;
    fVar41 = extraout_var_03;
  }
  else {
    if (iVar70 != 3) {
      if (iVar70 != 2) {
        return;
      }
      if ((*(float *)(param_3 + 2) <= 0.0) && (*(float *)(param_3 + 4) <= 0.0)) {
        return;
      }
      auVar37[9] = uVar79;
      auVar37[8] = uVar78;
      auVar37[10] = uVar80;
      auVar37[0xb] = uVar81;
      auVar37[0xc] = uVar82;
      auVar37[0xd] = uVar83;
      auVar37[0xe] = uVar84;
      auVar37[0xf] = uVar85;
      auVar37._0_8_ = param_1._0_8_;
      auVar38 = FUN_014325e4(auVar37,param_2,param_3,param_4,&local_50);
      *(long *)(param_3 + 0x5c) = auVar38._8_8_;
      *(long *)(param_3 + 0x58) = auVar38._0_8_;
      uVar1 = *param_3;
      goto LAB_01431d40;
    }
    FUN_00c8eb50(*(undefined8 *)(param_2 + 0x70),param_3[1]);
    fVar36 = extraout_s0_00;
    fVar39 = extraout_var_00;
    fVar40 = extraout_var_02;
    fVar41 = extraout_var_04;
  }
  if (*(float *)(param_2 + 0x23c) == 0.0) {
    fVar49 = 1.0;
  }
  else {
    fVar49 = *(float *)(param_2 + 0x240) / *(float *)(param_2 + 0x23c);
    if (1.0 < fVar49) {
      fVar49 = 1.0;
    }
  }
  fVar46 = (float)*(undefined8 *)(param_3 + 0x5c);
  fVar48 = (float)((ulong)*(undefined8 *)(param_3 + 0x5c) >> 0x20);
  fVar42 = (float)*(undefined8 *)(param_3 + 0x58);
  fVar44 = (float)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20);
  auVar34._0_4_ = fVar36 * fVar42 + fVar39 * fVar44;
  auVar34._4_4_ = fVar40 * fVar46 + fVar41 * fVar48;
  auVar34._8_4_ = fVar36 * fVar42 + fVar39 * fVar44;
  auVar34._12_4_ = fVar40 * fVar46 + fVar41 * fVar48;
  auVar38 = NEON_ext(auVar34,auVar34,4,1);
  auVar74 = NEON_fmov(0xbf800000,4);
  auVar35._0_4_ = auVar38._0_4_ + auVar38._4_4_;
  auVar35._4_4_ = auVar38._8_4_ + auVar38._12_4_;
  auVar35._8_4_ = auVar38._0_4_ + auVar38._4_4_;
  auVar35._12_4_ = auVar38._8_4_ + auVar38._12_4_;
  auVar54 = NEON_fmax(auVar35,auVar74,4);
  auVar38 = NEON_fmov(0x3f800000,4);
  auVar54 = NEON_fmin(auVar54,auVar38,4);
  auVar62._0_4_ = -(uint)(auVar54._0_4_ < 0.0);
  auVar62._4_4_ = -(uint)(auVar54._4_4_ < 0.0);
  auVar62._8_4_ = -(uint)(auVar54._8_4_ < 0.0);
  auVar62._12_4_ = -(uint)(auVar54._12_4_ < 0.0);
  auVar63 = auVar38 ^ (auVar38 ^ auVar74) & auVar62;
  uVar1 = *param_3;
  fVar43 = auVar54._0_4_ * auVar63._0_4_;
  cVar94 = (char)((uint)fVar43 >> 0x18);
  fVar45 = auVar54._4_4_ * auVar63._4_4_;
  cVar96 = (char)((uint)fVar45 >> 0x18);
  fVar47 = auVar54._8_4_ * auVar63._8_4_;
  cVar100 = (char)((uint)fVar47 >> 0x18);
  fVar50 = auVar54._12_4_ * auVar63._12_4_;
  cVar104 = (char)((uint)fVar50 >> 0x18);
  fVar36 = fVar36 * auVar63._0_4_;
  fVar39 = fVar39 * auVar63._4_4_;
  fVar40 = fVar40 * auVar63._8_4_;
  fVar41 = fVar41 * auVar63._12_4_;
  fVar53 = auVar38._0_4_;
  fVar58 = auVar38._4_4_;
  fVar59 = auVar38._8_4_;
  fVar60 = auVar38._12_4_;
  auVar64._8_4_ = 0xc0490fdb;
  auVar64._0_8_ = 0xc0490fdbc0490fdb;
  auVar64._12_4_ = 0xc0490fdb;
  fVar61 = SQRT(fVar53 - fVar43 * fVar43);
  cVar106 = (char)((uint)fVar61 >> 0x18);
  fVar67 = SQRT(fVar58 - fVar45 * fVar45);
  cVar108 = (char)((uint)fVar67 >> 0x18);
  fVar68 = SQRT(fVar59 - fVar47 * fVar47);
  cVar112 = (char)((uint)fVar68 >> 0x18);
  fVar69 = SQRT(fVar60 - fVar50 * fVar50);
  cVar116 = (char)((uint)fVar69 >> 0x18);
  iVar18 = -(uint)(fVar43 == -INFINITY);
  iVar19 = -(uint)(fVar47 == -INFINITY);
  iVar20 = -(uint)(fVar50 == -INFINITY);
  auVar88._8_4_ = 0x40490fdb;
  auVar88._0_8_ = 0x40490fdb40490fdb;
  auVar88._12_4_ = 0x40490fdb;
  bVar129 = cVar106 >> 7;
  iVar70 = (int)cVar108 >> 7;
  bVar130 = cVar108 >> 7;
  bVar131 = cVar112 >> 7;
  iVar71 = (int)cVar116 >> 7;
  bVar132 = cVar116 >> 7;
  iVar10 = -(uint)(fVar61 == 0.0);
  iVar11 = -(uint)(fVar68 == 0.0);
  iVar12 = -(uint)(fVar69 == 0.0);
  uVar118 = -(uint)(fVar61 == INFINITY);
  iVar121 = -(uint)(fVar68 == INFINITY);
  iVar125 = -(uint)(fVar69 == INFINITY);
  uVar5 = -(uint)(fVar61 == -0.0);
  bVar107 = (byte)(uVar5 >> 0x18);
  bVar109 = (byte)(-(uint)(fVar67 == -0.0) >> 0x18);
  iVar6 = -(uint)(fVar68 == -0.0);
  bVar110 = (byte)((uint)iVar6 >> 8);
  bVar111 = (byte)((uint)iVar6 >> 0x10);
  bVar113 = (byte)((uint)iVar6 >> 0x18);
  iVar7 = -(uint)(fVar69 == -0.0);
  bVar114 = (byte)((uint)iVar7 >> 8);
  bVar115 = (byte)((uint)iVar7 >> 0x10);
  bVar117 = (byte)((uint)iVar7 >> 0x18);
  auVar140._0_4_ = -(uint)(0.0 <= fVar61 / fVar43);
  auVar140._4_4_ = -(uint)(0.0 <= fVar67 / fVar45);
  auVar140._8_4_ = -(uint)(0.0 <= fVar68 / fVar47);
  auVar140._12_4_ = -(uint)(0.0 <= fVar69 / fVar50);
  auVar133._0_4_ = ABS(fVar61 / fVar43);
  auVar133._4_4_ = ABS(fVar67 / fVar45);
  auVar133._8_4_ = ABS(fVar68 / fVar47);
  auVar133._12_4_ = ABS(fVar69 / fVar50);
  iVar14 = -(uint)(fVar43 == INFINITY);
  iVar15 = -(uint)(fVar47 == INFINITY);
  iVar16 = -(uint)(fVar50 == INFINITY);
  auVar87[0xb] = bVar131;
  auVar87._8_3_ = (int3)((int)cVar112 >> 7);
  auVar87[0xc] = (char)iVar71;
  auVar87[0xd] = (char)((uint)iVar71 >> 8);
  auVar87[0xe] = (char)((uint)iVar71 >> 0x10);
  auVar87[0xf] = bVar132;
  auVar87[3] = bVar129;
  auVar87._0_3_ = (int3)((int)cVar106 >> 7);
  auVar87[4] = (char)iVar70;
  auVar87[5] = (char)((uint)iVar70 >> 8);
  auVar87[6] = (char)((uint)iVar70 >> 0x10);
  auVar87[7] = bVar130;
  auVar152._0_4_ = -(uint)(auVar133._0_4_ <= 2.4142137);
  auVar152._4_4_ = -(uint)(auVar133._4_4_ <= 2.4142137);
  auVar152._8_4_ = -(uint)(auVar133._8_4_ <= 2.4142137);
  auVar152._12_4_ = -(uint)(auVar133._12_4_ <= 2.4142137);
  auVar54 = auVar74 ^ (auVar74 ^ auVar38) & auVar140;
  fVar43 = -auVar54._4_4_;
  fVar47 = -auVar54._8_4_;
  fVar50 = -auVar54._12_4_;
  iVar70 = (int)cVar94 >> 7;
  bVar92 = (byte)((uint)iVar70 >> 8);
  bVar93 = (byte)((uint)iVar70 >> 0x10);
  bVar95 = cVar94 >> 7;
  iVar71 = (int)cVar96 >> 7;
  bVar97 = cVar96 >> 7;
  iVar72 = (int)cVar100 >> 7;
  bVar98 = (byte)((uint)iVar72 >> 8);
  bVar99 = (byte)((uint)iVar72 >> 0x10);
  bVar101 = cVar100 >> 7;
  iVar73 = (int)cVar104 >> 7;
  bVar102 = (byte)((uint)iVar73 >> 8);
  bVar103 = (byte)((uint)iVar73 >> 0x10);
  bVar105 = cVar104 >> 7;
  iVar26 = -(uint)(auVar133._0_4_ <= 0.41421354);
  iVar27 = -(uint)(auVar133._4_4_ <= 0.41421354);
  bVar142 = (byte)((uint)iVar27 >> 8);
  bVar143 = (byte)((uint)iVar27 >> 0x10);
  bVar144 = (byte)((uint)iVar27 >> 0x18);
  iVar28 = -(uint)(auVar133._8_4_ <= 0.41421354);
  bVar145 = (byte)((uint)iVar28 >> 8);
  bVar146 = (byte)((uint)iVar28 >> 0x10);
  bVar147 = (byte)((uint)iVar28 >> 0x18);
  iVar29 = -(uint)(auVar133._12_4_ <= 0.41421354);
  bVar148 = (byte)((uint)iVar29 >> 8);
  bVar149 = (byte)((uint)iVar29 >> 0x10);
  bVar150 = (byte)((uint)iVar29 >> 0x18);
  auVar88 = auVar88 ^ (auVar88 ^ auVar64) & auVar87;
  auVar119[0] = ~(byte)uVar118;
  auVar119[1] = ~(byte)(uVar118 >> 8);
  auVar119[2] = ~(byte)(uVar118 >> 0x10);
  auVar119[3] = ~(byte)(uVar118 >> 0x18);
  auVar119._4_3_ = 0;
  bVar120 = (byte)(-(uint)(fVar67 == INFINITY) >> 0x18);
  auVar119[7] = ~bVar120;
  auVar119[8] = ~(byte)iVar121;
  bVar122 = (byte)((uint)iVar121 >> 8);
  auVar119[9] = ~bVar122;
  bVar123 = (byte)((uint)iVar121 >> 0x10);
  auVar119[10] = ~bVar123;
  bVar124 = (byte)((uint)iVar121 >> 0x18);
  auVar119[0xb] = ~bVar124;
  auVar119[0xc] = ~(byte)iVar125;
  bVar126 = (byte)((uint)iVar125 >> 8);
  auVar119[0xd] = ~bVar126;
  bVar127 = (byte)((uint)iVar125 >> 0x10);
  bVar128 = (byte)((uint)iVar125 >> 0x18);
  auVar119[0xe] = ~bVar127;
  auVar119[0xf] = ~bVar128;
  auVar30[4] = SUB41(fVar43,0);
  auVar30._0_4_ = -auVar54._0_4_;
  auVar30[5] = (char)((uint)fVar43 >> 8);
  auVar30[6] = (char)((uint)fVar43 >> 0x10);
  auVar30[7] = (char)((uint)fVar43 >> 0x18);
  auVar30[8] = SUB41(fVar47,0);
  auVar30[9] = (char)((uint)fVar47 >> 8);
  auVar30[10] = (char)((uint)fVar47 >> 0x10);
  auVar30[0xb] = (char)((uint)fVar47 >> 0x18);
  auVar30[0xc] = SUB41(fVar50,0);
  auVar30[0xd] = (char)((uint)fVar50 >> 8);
  auVar30[0xe] = (char)((uint)fVar50 >> 0x10);
  auVar30[0xf] = (char)((uint)fVar50 >> 0x18);
  auVar54 = auVar54 ^ (auVar54 ^ auVar30) & ~auVar152;
  fVar43 = (auVar133._4_4_ + auVar74._4_4_) / (auVar133._4_4_ + fVar58);
  fVar47 = (auVar133._8_4_ + auVar74._8_4_) / (auVar133._8_4_ + fVar59);
  fVar50 = (auVar133._12_4_ + auVar74._12_4_) / (auVar133._12_4_ + fVar60);
  auVar38 = NEON_frecpe(auVar133,4);
  auVar63 = NEON_frecps(auVar38,auVar133,4);
  auVar75._0_4_ = auVar38._0_4_ * auVar63._0_4_;
  auVar75._4_4_ = auVar38._4_4_ * auVar63._4_4_;
  auVar75._8_4_ = auVar38._8_4_ * auVar63._8_4_;
  auVar75._12_4_ = auVar38._12_4_ * auVar63._12_4_;
  auVar38 = NEON_frecps(auVar75,auVar133,4);
  auVar153._0_4_ = auVar75._0_4_ * auVar38._0_4_;
  auVar153._4_4_ = auVar75._4_4_ * auVar38._4_4_;
  auVar153._8_4_ = auVar75._8_4_ * auVar38._8_4_;
  auVar153._12_4_ = auVar75._12_4_ * auVar38._12_4_;
  auVar86._8_4_ = 0xbfc90fdb;
  auVar86._0_8_ = 0xbfc90fdbbfc90fdb;
  auVar86._12_4_ = 0xbfc90fdb;
  auVar31[4] = SUB41(fVar43,0);
  auVar31._0_4_ = (auVar133._0_4_ + auVar74._0_4_) / (auVar133._0_4_ + fVar53);
  auVar31[5] = (char)((uint)fVar43 >> 8);
  auVar31[6] = (char)((uint)fVar43 >> 0x10);
  auVar31[7] = (char)((uint)fVar43 >> 0x18);
  auVar31[8] = SUB41(fVar47,0);
  auVar31[9] = (char)((uint)fVar47 >> 8);
  auVar31[10] = (char)((uint)fVar47 >> 0x10);
  auVar31[0xb] = (char)((uint)fVar47 >> 0x18);
  auVar31[0xc] = SUB41(fVar50,0);
  auVar31[0xd] = (char)((uint)fVar50 >> 8);
  auVar31[0xe] = (char)((uint)fVar50 >> 0x10);
  auVar31[0xf] = (char)((uint)fVar50 >> 0x18);
  auVar22[4] = (byte)iVar27;
  auVar22._0_4_ = iVar26;
  auVar22[5] = bVar142;
  auVar22[6] = bVar143;
  auVar22[7] = bVar144;
  auVar22[8] = (byte)iVar28;
  auVar22[9] = bVar145;
  auVar22[10] = bVar146;
  auVar22[0xb] = bVar147;
  auVar22[0xc] = (byte)iVar29;
  auVar22[0xd] = bVar148;
  auVar22[0xe] = bVar149;
  auVar22[0xf] = bVar150;
  auVar133 = auVar133 ^ (auVar133 ^ auVar153 ^ (auVar153 ^ auVar31) & auVar152) & ~auVar22;
  auVar74[8] = 0xdb;
  auVar74._0_8_ = 0x3f490fdb3f490fdb;
  auVar74[9] = 0xf;
  auVar74[10] = 0x49;
  auVar74[0xb] = 0x3f;
  auVar74[0xc] = 0xdb;
  auVar74[0xd] = 0xf;
  auVar74[0xe] = 0x49;
  auVar74[0xf] = 0x3f;
  auVar86 = auVar86 ^ (auVar86 ^ auVar74) & auVar152;
  fVar68 = auVar133._0_4_;
  fVar43 = fVar68 * fVar68;
  fVar69 = auVar133._4_4_;
  fVar47 = fVar69 * fVar69;
  fVar135 = auVar133._8_4_;
  fVar50 = fVar135 * fVar135;
  fVar136 = auVar133._12_4_;
  fVar61 = fVar136 * fVar136;
  fVar137 = (float)CONCAT13(auVar88[3] & bVar95,
                            CONCAT12(auVar88[2] & bVar93,
                                     CONCAT11(auVar88[1] & bVar92,auVar88[0] & (byte)iVar70)));
  auVar139._0_8_ =
       CONCAT17(auVar88[7] & bVar97,
                CONCAT16(auVar88[6] & (byte)((uint)iVar71 >> 0x10),
                         CONCAT15(auVar88[5] & (byte)((uint)iVar71 >> 8),
                                  CONCAT14(auVar88[4] & (byte)iVar71,fVar137))));
  auVar139[8] = auVar88[8] & (byte)iVar72;
  auVar139[9] = auVar88[9] & bVar98;
  auVar139[10] = auVar88[10] & bVar99;
  auVar139[0xb] = auVar88[0xb] & bVar101;
  auVar141[0xc] = auVar88[0xc] & (byte)iVar73;
  auVar141._0_12_ = auVar139;
  auVar141[0xd] = auVar88[0xd] & bVar102;
  auVar141[0xe] = auVar88[0xe] & bVar103;
  auVar141[0xf] = auVar88[0xf] & bVar105;
  auVar134._0_4_ =
       auVar54._0_4_ *
       ((float)CONCAT13(auVar86[3] & ~(byte)((uint)iVar26 >> 0x18),
                        CONCAT12(auVar86[2] & ~(byte)((uint)iVar26 >> 0x10),
                                 CONCAT11(auVar86[1] & ~(byte)((uint)iVar26 >> 8),
                                          auVar86[0] & ~(byte)iVar26))) +
       (fVar53 + fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * 0.07692308 + -0.09090909
                                                                  ) + 0.11111111) + -0.14285715) +
                                    0.2) + -0.33333334)) * fVar68) + fVar137;
  auVar134._4_4_ =
       auVar54._4_4_ *
       ((float)CONCAT13(auVar86[7] & ~bVar144,
                        CONCAT12(auVar86[6] & ~bVar143,
                                 CONCAT11(auVar86[5] & ~bVar142,auVar86[4] & ~(byte)iVar27))) +
       (fVar58 + fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * 0.07692308 + -0.09090909
                                                                  ) + 0.11111111) + -0.14285715) +
                                    0.2) + -0.33333334)) * fVar69) +
       (float)((ulong)auVar139._0_8_ >> 0x20);
  auVar134._8_4_ =
       auVar54._8_4_ *
       ((float)CONCAT13(auVar86[0xb] & ~bVar147,
                        CONCAT12(auVar86[10] & ~bVar146,
                                 CONCAT11(auVar86[9] & ~bVar145,auVar86[8] & ~(byte)iVar28))) +
       (fVar59 + fVar50 * (fVar50 * (fVar50 * (fVar50 * (fVar50 * (fVar50 * 0.07692308 + -0.09090909
                                                                  ) + 0.11111111) + -0.14285715) +
                                    0.2) + -0.33333334)) * fVar135) + auVar139._8_4_;
  auVar134._12_4_ =
       auVar54._12_4_ *
       ((float)CONCAT13(auVar86[0xf] & ~bVar150,
                        CONCAT12(auVar86[0xe] & ~bVar149,
                                 CONCAT11(auVar86[0xd] & ~bVar148,auVar86[0xc] & ~(byte)iVar29))) +
       (fVar60 + fVar61 * (fVar61 * (fVar61 * (fVar61 * (fVar61 * (fVar61 * 0.07692308 + -0.09090909
                                                                  ) + 0.11111111) + -0.14285715) +
                                    0.2) + -0.33333334)) * fVar136) + auVar141._12_4_;
  uVar138 = CONCAT17(bVar109,(uint7)uVar5) & 0xc0490fdbc0490fdb;
  uVar151 = CONCAT17(bVar120,(uint7)uVar118) & 0x3f490fdb3f490fdb;
  auVar23[8] = 0xe4;
  auVar23._0_8_ = 0x4016cbe44016cbe4;
  auVar23[9] = 0xcb;
  auVar23[10] = 0x16;
  auVar23[0xb] = 0x40;
  auVar23[0xc] = 0xe4;
  auVar23[0xd] = 0xcb;
  auVar23[0xe] = 0x16;
  auVar23[0xf] = 0x40;
  auVar88 = auVar88 ^ (auVar88 ^ auVar23) & ~auVar119;
  auVar24[8] = 0xdb;
  auVar24._0_8_ = 0x3fc90fdb3fc90fdb;
  auVar24[9] = 0xf;
  auVar24[10] = 0xc9;
  auVar24[0xb] = 0x3f;
  auVar24[0xc] = 0xdb;
  auVar24[0xd] = 0xf;
  auVar24[0xe] = 0xc9;
  auVar24[0xf] = 0x3f;
  auVar25[8] = 0xdb;
  auVar25._0_8_ = 0x3fc90fdb3fc90fdb;
  auVar25[9] = 0xf;
  auVar25[10] = 0xc9;
  auVar25[0xb] = 0x3f;
  auVar25[0xc] = 0xdb;
  auVar25[0xd] = 0xf;
  auVar25[0xe] = 0xc9;
  auVar25[0xf] = 0x3f;
  auVar17[1] = ~(byte)((uint)iVar18 >> 8);
  auVar17[0] = ~(byte)iVar18;
  auVar17[2] = ~(byte)((uint)iVar18 >> 0x10);
  auVar17[3] = ~(byte)((uint)iVar18 >> 0x18);
  auVar17._4_3_ = 0;
  auVar17[7] = ~(byte)(-(uint)(fVar45 == -INFINITY) >> 0x18);
  auVar17[8] = ~(byte)iVar19;
  auVar17[9] = ~(byte)((uint)iVar19 >> 8);
  auVar17[10] = ~(byte)((uint)iVar19 >> 0x10);
  auVar17[0xb] = ~(byte)((uint)iVar19 >> 0x18);
  auVar17[0xc] = ~(byte)iVar20;
  auVar17[0xd] = ~(byte)((uint)iVar20 >> 8);
  auVar17[0xe] = ~(byte)((uint)iVar20 >> 0x10);
  auVar17[0xf] = ~(byte)((uint)iVar20 >> 0x18);
  auVar88 = auVar88 ^ (auVar88 ^ auVar25 ^ (auVar24 ^ auVar134) & auVar119) & auVar17;
  auVar21[8] = (byte)iVar121 & 0xdb;
  auVar21._0_8_ =
       CONCAT17(bVar130 & auVar119[7],
                (uint7)CONCAT13(bVar129 & auVar119[3] & 0x80 | (byte)(uVar151 >> 0x18),(int3)uVar151
                               )) & 0x80ffffffffffffff;
  auVar21[9] = bVar122 & 0xf;
  auVar21[10] = bVar123 & 0x49;
  auVar21[0xb] = bVar131 & auVar119[0xb] & 0x80 | bVar124 & 0x3f;
  auVar21[0xc] = (byte)iVar125 & 0xdb;
  auVar21[0xd] = bVar126 & 0xf;
  auVar21[0xe] = bVar127 & 0x49;
  auVar21[0xf] = bVar132 & auVar119[0xf] & 0x80 | bVar128 & 0x3f;
  auVar13[1] = ~(byte)((uint)iVar14 >> 8);
  auVar13[0] = ~(byte)iVar14;
  auVar13[2] = ~(byte)((uint)iVar14 >> 0x10);
  auVar13[3] = ~(byte)((uint)iVar14 >> 0x18);
  auVar13._4_3_ = 0;
  auVar13[7] = ~(byte)(-(uint)(fVar45 == INFINITY) >> 0x18);
  auVar13[8] = ~(byte)iVar15;
  auVar13[9] = ~(byte)((uint)iVar15 >> 8);
  auVar13[10] = ~(byte)((uint)iVar15 >> 0x10);
  auVar13[0xb] = ~(byte)((uint)iVar15 >> 0x18);
  auVar13[0xc] = ~(byte)iVar16;
  auVar13[0xd] = ~(byte)((uint)iVar16 >> 8);
  auVar13[0xe] = ~(byte)((uint)iVar16 >> 0x10);
  auVar13[0xf] = ~(byte)((uint)iVar16 >> 0x18);
  auVar88 = auVar88 ^ (auVar88 ^ auVar21) & ~auVar13;
  auVar2[1] = (~(byte)(uVar5 >> 8) & 0xf | (byte)(uVar138 >> 8)) & bVar92;
  auVar2[0] = (~(byte)uVar5 & 0xdb | (byte)uVar138) & (byte)iVar70;
  auVar2[2] = (~(byte)(uVar5 >> 0x10) & 0x49 | (byte)(uVar138 >> 0x10)) & bVar93;
  auVar2[3] = (~bVar107 & 0x40 | (byte)(uVar138 >> 0x18)) & bVar95 | bVar107 & ~bVar95 & 0x80;
  auVar2._4_3_ = 0;
  auVar2[7] = (byte)(uVar138 >> 0x38) & bVar97 | bVar109 & ~bVar97 & 0x80;
  auVar2[8] = (~(byte)iVar6 & 0xdb | (byte)iVar6 & 0xdb) & (byte)iVar72;
  auVar2[9] = (~bVar110 & 0xf | bVar110 & 0xf) & bVar98;
  auVar2[10] = (~bVar111 & 0x49 | bVar111 & 0x49) & bVar99;
  auVar2[0xb] = (~bVar113 & 0x40 | bVar113 & 0xc0) & bVar101 | bVar113 & ~bVar101 & 0x80;
  auVar2[0xc] = (~(byte)iVar7 & 0xdb | (byte)iVar7 & 0xdb) & (byte)iVar73;
  auVar2[0xd] = (~bVar114 & 0xf | bVar114 & 0xf) & bVar102;
  auVar2[0xe] = (~bVar115 & 0x49 | bVar115 & 0x49) & bVar103;
  auVar2[0xf] = (~bVar117 & 0x40 | bVar117 & 0xc0) & bVar105 | bVar117 & ~bVar105 & 0x80;
  auVar8[1] = ~(byte)((uint)iVar10 >> 8);
  auVar8[0] = ~(byte)iVar10;
  auVar8[2] = ~(byte)((uint)iVar10 >> 0x10);
  auVar8[3] = ~(byte)((uint)iVar10 >> 0x18);
  auVar8._4_3_ = 0;
  auVar8[7] = ~(byte)(-(uint)(fVar67 == 0.0) >> 0x18);
  auVar8[8] = ~(byte)iVar11;
  auVar8[9] = ~(byte)((uint)iVar11 >> 8);
  auVar8[10] = ~(byte)((uint)iVar11 >> 0x10);
  auVar8[0xb] = ~(byte)((uint)iVar11 >> 0x18);
  auVar8[0xc] = ~(byte)iVar12;
  auVar8[0xd] = ~(byte)((uint)iVar12 >> 8);
  auVar8[0xe] = ~(byte)((uint)iVar12 >> 0x10);
  auVar8[0xf] = ~(byte)((uint)iVar12 >> 0x18);
  auVar88 = auVar88 ^ (auVar88 ^ auVar2) & ~auVar8;
  fVar47 = auVar88._0_4_;
  fVar50 = auVar88._12_4_;
  fVar43 = fVar47 - fVar47 * fVar49;
  fVar50 = fVar50 - fVar50 * fVar49;
  fVar45 = fVar49 * fVar47;
  iVar70 = -(uint)(ABS(fVar43) == INFINITY);
  iVar71 = -(uint)(ABS(fVar45) == INFINITY);
  iVar72 = -(uint)(ABS(fVar47) == INFINITY);
  iVar73 = -(uint)(ABS(fVar50) == INFINITY);
  auVar89._0_4_ = -(uint)(0.0 <= fVar43);
  auVar89._4_4_ = -(uint)(0.0 <= fVar45);
  auVar89._8_4_ = -(uint)(0.0 <= fVar47);
  auVar89._12_4_ = -(uint)(0.0 <= fVar50);
  auVar4[0xb] = 0x3f;
  auVar4._0_11_ = ZEXT811(0x3f0000003f000000);
  auVar4._12_3_ = 0;
  auVar4[0xf] = 0x3f;
  auVar9[0xb] = 0xbf;
  auVar9._0_11_ = ZEXT811(0xbf000000bf000000);
  auVar9._12_3_ = 0;
  auVar9[0xf] = 0xbf;
  auVar90[0xb] = 0xbf;
  auVar90._0_11_ = ZEXT811(0xbf000000bf000000);
  auVar90._12_3_ = 0;
  auVar90[0xf] = 0xbf;
  auVar90 = auVar90 ^ (auVar9 ^ auVar4) & auVar89;
  auVar91._0_4_ = (int)(auVar90._0_4_ + fVar43 * 0.15915494);
  auVar91._4_4_ = (int)(auVar90._4_4_ + fVar45 * 0.15915494);
  auVar91._8_4_ = (int)(auVar90._8_4_ + fVar47 * 0.15915494);
  auVar91._12_4_ = (int)(auVar90._12_4_ + fVar50 * 0.15915494);
  auVar38 = NEON_scvtf(auVar91,4);
  fVar43 = fVar43 + auVar38._0_4_ * -6.2831855;
  fVar45 = fVar45 + auVar38._4_4_ * -6.2831855;
  fVar47 = fVar47 + auVar38._8_4_ * -6.2831855;
  fVar50 = fVar50 + auVar38._12_4_ * -6.2831855;
  auVar76._0_4_ = -(uint)(fVar43 < -1.5707964);
  auVar76._4_4_ = -(uint)(fVar45 < -1.5707964);
  auVar76._8_4_ = -(uint)(fVar47 < -1.5707964);
  auVar76._12_4_ = -(uint)(fVar50 < -1.5707964);
  auVar65._0_4_ = -3.1415927 - fVar43;
  auVar65._4_4_ = -3.1415927 - fVar45;
  auVar65._8_4_ = -3.1415927 - fVar47;
  auVar65._12_4_ = -3.1415927 - fVar50;
  auVar3[4] = SUB41(fVar45,0);
  auVar3._0_4_ = fVar43;
  auVar3[5] = (char)((uint)fVar45 >> 8);
  auVar3[6] = (char)((uint)fVar45 >> 0x10);
  auVar3[7] = (char)((uint)fVar45 >> 0x18);
  auVar3[8] = SUB41(fVar47,0);
  auVar3[9] = (char)((uint)fVar47 >> 8);
  auVar3[10] = (char)((uint)fVar47 >> 0x10);
  auVar3[0xb] = (char)((uint)fVar47 >> 0x18);
  auVar3[0xc] = SUB41(fVar50,0);
  auVar3[0xd] = (char)((uint)fVar50 >> 8);
  auVar3[0xe] = (char)((uint)fVar50 >> 0x10);
  auVar3[0xf] = (char)((uint)fVar50 >> 0x18);
  auVar65 = auVar65 ^ (auVar65 ^ auVar3) & ~auVar76;
  auVar77._0_4_ = -(uint)(1.5707964 < auVar65._0_4_);
  auVar77._4_4_ = -(uint)(1.5707964 < auVar65._4_4_);
  auVar77._8_4_ = -(uint)(1.5707964 < auVar65._8_4_);
  auVar77._12_4_ = -(uint)(1.5707964 < auVar65._12_4_);
  auVar55._0_4_ = 3.1415927 - auVar65._0_4_;
  auVar55._4_4_ = 3.1415927 - auVar65._4_4_;
  auVar55._8_4_ = 3.1415927 - auVar65._8_4_;
  auVar55._12_4_ = 3.1415927 - auVar65._12_4_;
  auVar55 = auVar55 ^ (auVar55 ^ auVar65) & ~auVar77;
  fVar43 = auVar55._0_4_;
  fVar61 = fVar43 * fVar43;
  fVar45 = auVar55._4_4_;
  fVar67 = fVar45 * fVar45;
  fVar47 = auVar55._8_4_;
  fVar68 = fVar47 * fVar47;
  fVar50 = auVar55._12_4_;
  fVar69 = fVar50 * fVar50;
  auVar66[0] = ~(byte)iVar70;
  auVar66[1] = ~(byte)((uint)iVar70 >> 8);
  auVar66[2] = ~(byte)((uint)iVar70 >> 0x10);
  auVar66[3] = ~(byte)((uint)iVar70 >> 0x18);
  auVar66[4] = ~(byte)iVar71;
  auVar66[5] = ~(byte)((uint)iVar71 >> 8);
  auVar66[6] = ~(byte)((uint)iVar71 >> 0x10);
  auVar66[7] = ~(byte)((uint)iVar71 >> 0x18);
  auVar66[8] = ~(byte)iVar72;
  auVar66[9] = ~(byte)((uint)iVar72 >> 8);
  auVar66[10] = ~(byte)((uint)iVar72 >> 0x10);
  auVar66[0xb] = ~(byte)((uint)iVar72 >> 0x18);
  auVar66[0xc] = ~(byte)iVar73;
  auVar66[0xd] = ~(byte)((uint)iVar73 >> 8);
  auVar66[0xe] = ~(byte)((uint)iVar73 >> 0x10);
  auVar66[0xf] = ~(byte)((uint)iVar73 >> 0x18);
  auVar51._0_4_ =
       fVar43 * (fVar53 + fVar61 * (fVar61 * (fVar61 * (fVar61 * (fVar61 * -2.5052108e-08 +
                                                                 2.7557319e-06) + -0.0001984127) +
                                             0.008333334) + -0.16666667));
  auVar51._4_4_ =
       fVar45 * (fVar58 + fVar67 * (fVar67 * (fVar67 * (fVar67 * (fVar67 * -2.5052108e-08 +
                                                                 2.7557319e-06) + -0.0001984127) +
                                             0.008333334) + -0.16666667));
  auVar51._8_4_ =
       fVar47 * (fVar59 + fVar68 * (fVar68 * (fVar68 * (fVar68 * (fVar68 * -2.5052108e-08 +
                                                                 2.7557319e-06) + -0.0001984127) +
                                             0.008333334) + -0.16666667));
  auVar51._12_4_ =
       fVar50 * (fVar60 + fVar69 * (fVar69 * (fVar69 * (fVar69 * (fVar69 * -2.5052108e-08 +
                                                                 2.7557319e-06) + -0.0001984127) +
                                             0.008333334) + -0.16666667));
  auVar56._8_4_ = 0x7fc00000;
  auVar56._0_8_ = 0x7fc000007fc00000;
  auVar56._12_4_ = 0x7fc00000;
  auVar51 = auVar51 ^ (auVar51 ^ auVar56) & ~auVar66;
  fVar67 = auVar51._8_4_;
  fVar50 = auVar51._0_4_;
  fVar61 = auVar51._4_4_;
  fVar43 = fVar42 + (fVar36 - fVar42) * fVar49;
  fVar45 = fVar44 + (fVar39 - fVar44) * fVar49;
  fVar47 = fVar46 + (fVar40 - fVar46) * fVar49;
  fVar49 = fVar48 + (fVar41 - fVar48) * fVar49;
  iVar70 = -(uint)(fVar67 == 0.0);
  iVar71 = -(uint)(fVar67 == 0.0);
  iVar72 = -(uint)(fVar67 == 0.0);
  iVar73 = -(uint)(fVar67 == 0.0);
  auVar52[0] = ~(byte)iVar70;
  auVar52[1] = ~(byte)((uint)iVar70 >> 8);
  auVar52[2] = ~(byte)((uint)iVar70 >> 0x10);
  auVar52[3] = ~(byte)((uint)iVar70 >> 0x18);
  auVar52[4] = ~(byte)iVar71;
  auVar52[5] = ~(byte)((uint)iVar71 >> 8);
  auVar52[6] = ~(byte)((uint)iVar71 >> 0x10);
  auVar52[7] = ~(byte)((uint)iVar71 >> 0x18);
  auVar52[8] = ~(byte)iVar72;
  auVar52[9] = ~(byte)((uint)iVar72 >> 8);
  auVar52[10] = ~(byte)((uint)iVar72 >> 0x10);
  auVar52[0xb] = ~(byte)((uint)iVar72 >> 0x18);
  auVar52[0xc] = ~(byte)iVar73;
  auVar52[0xd] = ~(byte)((uint)iVar73 >> 8);
  auVar52[0xe] = ~(byte)((uint)iVar73 >> 0x10);
  auVar52[0xf] = ~(byte)((uint)iVar73 >> 0x18);
  auVar57._0_4_ = (fVar42 * fVar50 + fVar36 * fVar61) / fVar67;
  auVar57._4_4_ = (fVar44 * fVar50 + fVar39 * fVar61) / fVar67;
  auVar57._8_4_ = (fVar46 * fVar50 + fVar40 * fVar61) / fVar67;
  auVar57._12_4_ = (fVar48 * fVar50 + fVar41 * fVar61) / fVar67;
  auVar54._4_4_ = fVar45;
  auVar54._0_4_ = fVar43;
  auVar54._8_4_ = fVar47;
  auVar54._12_4_ = fVar49;
  auVar63._4_4_ = fVar45;
  auVar63._0_4_ = fVar43;
  auVar63._8_4_ = fVar47;
  auVar63._12_4_ = fVar49;
  auVar63 = auVar63 ^ (auVar54 ^ auVar57) & auVar52;
  *(long *)(param_3 + 0x5c) = auVar63._8_8_;
  *(long *)(param_3 + 0x58) = auVar63._0_8_;
LAB_01431d40:
  FUN_00d172e8(*(undefined8 *)(param_2 + 0x70),uVar1);
  return;
}


