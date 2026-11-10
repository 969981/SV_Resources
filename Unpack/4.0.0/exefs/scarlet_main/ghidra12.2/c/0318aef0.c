/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0318aef0; name: FUN_0318aef0
 */


undefined8
FUN_0318aef0(long param_1,long param_2,undefined1 (*param_3) [12],long *param_4,undefined8 *param_5,
            undefined8 *param_6,long *param_7,long *param_8,float *param_9)

{
  unkbyte9 *pVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 uVar16;
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 auVar33 [12];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  int iVar66;
  float fVar67;
  byte bVar69;
  byte bVar73;
  byte bVar74;
  float fVar70;
  int iVar71;
  float fVar72;
  byte bVar75;
  byte bVar79;
  byte bVar80;
  float fVar76;
  int iVar77;
  float fVar78;
  byte bVar81;
  byte bVar84;
  byte bVar85;
  int iVar82;
  byte bVar86;
  undefined1 auVar68 [16];
  float fVar83;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  int iVar95;
  undefined4 uVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  undefined8 uVar100;
  float fVar102;
  undefined1 auVar101 [16];
  float fVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  float fVar106;
  float fVar107;
  undefined8 uVar108;
  ulong uVar109;
  float fVar110;
  float fVar111;
  float fVar113;
  float fVar114;
  undefined1 auVar112 [12];
  float fVar115;
  int iVar116;
  float fVar117;
  float fVar118;
  int iVar119;
  float fVar120;
  float fVar121;
  int iVar122;
  float fVar123;
  undefined1 auVar124 [12];
  undefined1 auVar125 [16];
  float fVar126;
  float fVar131;
  undefined1 auVar127 [15];
  float fVar130;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
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
  undefined1 uVar143;
  float fVar144;
  float fVar160;
  int iVar162;
  undefined1 auVar146 [16];
  undefined1 auVar152 [16];
  undefined1 auVar151 [16];
  undefined1 auVar150 [16];
  undefined1 auVar149 [16];
  undefined1 auVar148 [16];
  undefined1 auVar147 [16];
  int iVar145;
  undefined1 auVar153 [16];
  int iVar161;
  int iVar163;
  undefined1 auVar159 [16];
  undefined1 auVar158 [16];
  undefined1 auVar157 [16];
  undefined1 auVar156 [16];
  undefined1 auVar155 [16];
  undefined1 auVar154 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [15];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  byte bVar168;
  byte bVar169;
  byte bVar170;
  ulong uVar171;
  
  fVar87 = *(float *)(param_2 + 0xd4);
  if (fVar87 != 0.0) {
    fVar120 = (float)*(undefined8 *)(*param_3 + 8);
    fVar121 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
    fVar98 = (float)*(undefined8 *)*param_3;
    fVar118 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
    uVar108 = NEON_fmov(0x3f800000,4);
    fVar53 = (float)*(undefined8 *)(param_1 + 0x40);
    fVar51 = fVar98 * fVar53;
    fVar59 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
    fVar58 = fVar118 * fVar59;
    fVar61 = (float)*(undefined8 *)(param_1 + 0x48);
    fVar60 = fVar120 * fVar61;
    fVar52 = fVar51 + fVar58 + fVar60;
    fVar60 = fVar51 + fVar58 + fVar60;
    fVar53 = fVar53 - fVar98 * fVar52;
    fVar59 = fVar59 - fVar118 * fVar60;
    fVar61 = fVar61 - fVar120 * fVar52;
    fVar51 = (float)*(undefined8 *)(param_2 + 0x40) -
             ((float)*(undefined8 *)(param_1 + 0x50) - (float)*(undefined8 *)(param_2 + 0x50));
    fVar52 = (float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20) -
             ((float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) -
             (float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20));
    fVar58 = (float)*(undefined8 *)(param_2 + 0x48) -
             ((float)*(undefined8 *)(param_1 + 0x58) - (float)*(undefined8 *)(param_2 + 0x58));
    fVar65 = fVar98 * fVar51;
    fVar70 = fVar118 * fVar52;
    fVar76 = fVar120 * fVar58;
    fVar97 = fVar65 + fVar70 + fVar76;
    fVar76 = fVar65 + fVar70 + fVar76;
    fVar51 = fVar51 - fVar98 * fVar97;
    fVar52 = fVar52 - fVar118 * fVar76;
    fVar58 = fVar58 - fVar120 * fVar97;
    if (*(int *)(param_1 + 0xd8) < *(int *)(param_2 + 0xd8)) {
      fVar65 = 0.0;
      fVar97 = 0.0;
      uVar100 = uVar108;
    }
    else {
      fVar65 = fVar61 * fVar61 + fVar53 * fVar53 + fVar59 * fVar59;
      fVar70 = fVar58 * fVar58 + fVar51 * fVar51 + fVar52 * fVar52;
      bVar168 = ~(fVar70 < fVar65);
      iVar116 = -(uint)bVar168;
      uVar109 = CONCAT44(SQRT(fVar61 * fVar61 + fVar53 * fVar53 + fVar59 * fVar59) * fVar87,
                         SQRT(fVar65) * fVar87);
      uVar109 = uVar109 ^ (uVar109 ^ CONCAT44(fVar87,fVar87)) &
                          CONCAT17((char)((uint)iVar116 >> 0x18),
                                   CONCAT16((char)((uint)iVar116 >> 0x10),
                                            CONCAT15((char)((uint)iVar116 >> 8),
                                                     CONCAT14((char)iVar116,iVar116))));
      fVar65 = (float)uVar109;
      if (fVar65 == 0.0) {
        return 0;
      }
      uVar9 = NEON_fmov(0x3f800000,4);
      fVar97 = (float)((ulong)uVar9 >> 0x20);
      fVar89 = (float)uVar9 - fVar87;
      fVar87 = fVar97 - fVar87;
      iVar116 = -(uint)bVar168;
      uVar171 = CONCAT44(fVar87,fVar89) ^
                (CONCAT44(fVar87,fVar89) ^
                CONCAT44(fVar87 * SQRT(fVar58 * fVar58 + fVar51 * fVar51 + fVar52 * fVar52),
                         fVar89 * SQRT(fVar70))) &
                ~CONCAT17((char)((uint)iVar116 >> 0x18),
                          CONCAT16((char)((uint)iVar116 >> 0x10),
                                   CONCAT15((char)((uint)iVar116 >> 8),
                                            CONCAT14((char)iVar116,iVar116))));
      fVar87 = (float)(uVar109 >> 0x20);
      fVar65 = ((float)uVar171 + fVar65) / fVar65;
      fVar87 = ((float)(uVar171 >> 0x20) + fVar87) / fVar87;
      uVar100 = CONCAT44(fVar87,fVar65);
      fVar65 = (float)uVar9 / fVar65;
      fVar97 = fVar97 / fVar87;
    }
    fVar87 = (float)*(undefined8 *)(param_1 + 0x30) - (float)*(undefined8 *)(param_2 + 0x30);
    fVar70 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20) -
             (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
    fVar88 = (float)*(undefined8 *)(param_1 + 0x38) - (float)*(undefined8 *)(param_2 + 0x38);
    fVar111 = fVar53 - fVar51;
    fVar113 = fVar59 - fVar52;
    fVar114 = fVar61 - fVar58;
    fVar89 = fVar98 * fVar87;
    fVar92 = fVar118 * fVar70;
    fVar94 = fVar120 * fVar88;
    fVar90 = fVar89 + fVar92 + fVar94;
    fVar94 = fVar89 + fVar92 + fVar94;
    fVar123 = *(float *)(param_1 + 0xa0) + *(float *)(param_2 + 0xa0);
    fVar89 = (float)uVar100;
    fVar92 = (float)((ulong)uVar100 >> 0x20);
    fVar87 = fVar87 - fVar98 * fVar90;
    fVar70 = fVar70 - fVar118 * fVar94;
    uVar104 = SUB41(fVar70,0);
    uVar45 = (undefined1)((uint)fVar70 >> 8);
    uVar47 = (undefined1)((uint)fVar70 >> 0x10);
    uVar105 = (undefined1)((uint)fVar70 >> 0x18);
    fVar88 = fVar88 - fVar120 * fVar90;
    fVar106 = ((float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20) -
              (float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20)) - fVar121 * fVar94;
    fVar144 = fVar114 * fVar114 + fVar111 * fVar111 + fVar113 * fVar113;
    fVar160 = fVar114 * fVar114 + fVar111 * fVar111 + fVar113 * fVar113;
    lVar42 = *param_4;
    fVar115 = fVar87 * fVar87 + fVar70 * fVar70 + fVar88 * fVar88;
    fVar117 = fVar87 * fVar87 + fVar70 * fVar70 + fVar88 * fVar88;
    fVar49 = fVar115 - fVar123 * fVar123;
    fVar50 = fVar117 - fVar123 * fVar123;
    fVar90 = *(float *)(param_4 + 6);
    fVar94 = *(float *)((long)param_4 + 0x34);
    fVar62 = *(float *)(param_4 + 7);
    fVar63 = *(float *)((long)param_4 + 0x3c);
    fVar67 = *(float *)(param_4 + 8);
    fVar72 = *(float *)((long)param_4 + 0x44);
    fVar78 = *(float *)(param_4 + 9);
    fVar83 = *(float *)((long)param_4 + 0x4c);
    if (fVar144 == 0.0) {
      auVar128 = ZEXT816(0);
    }
    else {
      fVar130 = SQRT(fVar160);
      auVar128._0_4_ = fVar111 / SQRT(fVar144);
      auVar128._4_4_ = fVar113 / fVar130;
      auVar128._8_4_ = fVar114 / SQRT(fVar144);
      auVar128._12_4_ =
           (((float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20) - fVar121 * fVar60) -
           (((float)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20) -
            ((float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20) -
            (float)((ulong)*(undefined8 *)(param_2 + 0x58) >> 0x20))) - fVar121 * fVar76)) / fVar130
      ;
    }
    fVar51 = (fVar53 - fVar53 * fVar89) - fVar51;
    fVar52 = (fVar59 - fVar59 * fVar92) - fVar52;
    fVar58 = (fVar61 - fVar61 * fVar89) - fVar58;
    lVar41 = *param_7;
    fVar53 = (float)param_4[10];
    fVar59 = (float)((ulong)param_4[10] >> 0x20);
    fVar91 = (float)param_4[2];
    fVar93 = (float)((ulong)param_4[2] >> 0x20);
    fVar61 = (float)param_4[3];
    fVar60 = (float)param_4[4];
    fVar76 = (float)((ulong)param_4[4] >> 0x20);
    fVar130 = (float)param_4[5];
    if (fVar49 <= 0.0) {
      fVar90 = fVar90 * fVar53;
      fVar94 = fVar94 * fVar59;
      fVar62 = fVar62 * fVar53;
      fVar63 = fVar63 * fVar59;
      fVar67 = fVar67 * fVar53;
      fVar72 = fVar72 * fVar59;
      fVar78 = fVar78 * fVar53;
      fVar83 = fVar83 * fVar59;
      fVar98 = 0.0;
      fVar118 = 0.0;
      fVar120 = 0.0;
      fVar121 = 0.0;
      if (fVar115 != 0.0) {
        fVar117 = SQRT(fVar117);
        fVar98 = fVar87 / SQRT(fVar115);
        fVar118 = fVar70 / fVar117;
        fVar120 = fVar88 / SQRT(fVar115);
        fVar121 = fVar106 / fVar117;
      }
      fVar123 = fVar90 * fVar91 + fVar67 * fVar60;
      fVar117 = fVar94 * fVar91 + fVar72 * fVar60;
      fVar88 = fVar62 * fVar91 + fVar78 * fVar60;
      fVar106 = fVar63 * fVar91 + fVar83 * fVar60;
      fVar87 = fVar90 * fVar93 + fVar67 * fVar76;
      uVar104 = SUB41(fVar87,0);
      uVar45 = (undefined1)((uint)fVar87 >> 8);
      uVar47 = (undefined1)((uint)fVar87 >> 0x10);
      uVar105 = (undefined1)((uint)fVar87 >> 0x18);
      fVar87 = fVar94 * fVar93 + fVar72 * fVar76;
      uVar132 = SUB41(fVar87,0);
      uVar133 = (undefined1)((uint)fVar87 >> 8);
      uVar134 = (undefined1)((uint)fVar87 >> 0x10);
      uVar135 = (undefined1)((uint)fVar87 >> 0x18);
      fVar87 = fVar62 * fVar93 + fVar78 * fVar76;
      uVar136 = SUB41(fVar87,0);
      uVar138 = (undefined1)((uint)fVar87 >> 8);
      uVar137 = (undefined1)((uint)fVar87 >> 0x10);
      uVar139 = (undefined1)((uint)fVar87 >> 0x18);
      fVar87 = fVar63 * fVar93 + fVar83 * fVar76;
      uVar140 = SUB41(fVar87,0);
      uVar141 = (undefined1)((uint)fVar87 >> 8);
      uVar142 = (undefined1)((uint)fVar87 >> 0x10);
      uVar143 = (undefined1)((uint)fVar87 >> 0x18);
      fVar70 = fVar90 * fVar61 + fVar67 * fVar130;
      fVar97 = fVar94 * fVar61 + fVar72 * fVar130;
      fVar90 = fVar62 * fVar61 + fVar78 * fVar130;
      fVar94 = fVar63 * fVar61 + fVar83 * fVar130;
      auVar128 = NEON_fmov(0xbf800000,4);
      lVar43 = 0;
      fVar87 = (SQRT(-fVar49) / fVar89) * (float)*param_6;
      fVar65 = (SQRT(-fVar50) / fVar92) * (float)((ulong)*param_6 >> 0x20);
      *(ulong *)(param_9 + 2) =
           CONCAT44(param_9[3] + fVar121 * fVar65,param_9[2] + fVar120 * fVar87);
      *(ulong *)param_9 = CONCAT44(param_9[1] + fVar118 * fVar65,*param_9 + fVar98 * fVar87);
      do {
        fVar49 = fVar89 * fVar123;
        fVar50 = fVar92 * fVar117;
        fVar111 = fVar89 * fVar88;
        fVar113 = fVar92 * fVar106;
        uVar108 = *(undefined8 *)(lVar42 + 8 + lVar43 * 8);
        uVar16 = (undefined1)((ulong)uVar108 >> 0x38);
        bVar168 = (byte)((ulong)uVar108 >> 0x20);
        uVar46 = (undefined1)((ulong)uVar108 >> 0x28);
        auVar165._0_10_ = (unkuint10)CONCAT11(bVar168,uVar16) << 0x38;
        auVar165[10] = uVar46;
        uVar48 = (undefined1)((ulong)uVar108 >> 0x30);
        auVar165[0xb] = 0;
        auVar165[0xc] = uVar48;
        auVar165[0xd] = 0;
        auVar165[0xe] = uVar16;
        auVar20[9] = 0;
        auVar20._0_9_ = (unkuint9)auVar165._8_7_ << 0x40;
        auVar20._10_5_ = auVar165._10_5_;
        auVar21[0xb] = 0;
        auVar21._0_11_ = auVar20._0_11_;
        auVar21._12_3_ = auVar165._12_3_;
        auVar22[0xd] = 0;
        auVar22._0_13_ = auVar21._0_13_;
        auVar22[0xe] = uVar16;
        auVar101._0_4_ = fVar58 + fVar89 * fVar70;
        auVar101._4_4_ = fVar58 + fVar92 * fVar97;
        auVar101._8_4_ = fVar58 + fVar89 * fVar90;
        auVar101._12_4_ = fVar58 + fVar92 * fVar94;
        fVar87 = (float)CONCAT13(uVar105,CONCAT12(uVar47,CONCAT11(uVar45,uVar104)));
        fVar121 = (float)CONCAT13(uVar135,CONCAT12(uVar134,CONCAT11(uVar133,uVar132)));
        fVar65 = (float)CONCAT13(uVar139,CONCAT12(uVar137,CONCAT11(uVar138,uVar136)));
        fVar62 = (float)CONCAT13(uVar143,CONCAT12(uVar142,CONCAT11(uVar141,uVar140)));
        auVar154._2_14_ = auVar101._2_14_;
        auVar154._0_2_ = (ushort)uVar108 & 0xff;
        auVar156._6_10_ = auVar101._6_10_;
        auVar156._0_4_ = auVar154._0_4_;
        auVar156[4] = (char)((ulong)uVar108 >> 8);
        auVar156[5] = 0;
        auVar158._10_6_ = auVar101._10_6_;
        auVar158._0_8_ = auVar156._0_8_;
        auVar158[8] = (char)((ulong)uVar108 >> 0x10);
        auVar158[9] = 0;
        auVar153._14_2_ = (undefined2)((uint)auVar101._12_4_ >> 0x10);
        auVar153._0_12_ = auVar158._0_12_;
        auVar153[0xc] = (char)((ulong)uVar108 >> 0x18);
        auVar153[0xd] = 0;
        auVar155._4_12_ = auVar153._4_12_;
        auVar155._0_4_ = auVar156._0_4_ & 0xffff;
        auVar157._8_8_ = auVar153._8_8_;
        auVar157._0_6_ = auVar155._0_6_;
        auVar157._6_2_ = 0;
        auVar159._12_4_ = auVar153._12_4_;
        auVar159._0_10_ = auVar157._0_10_;
        auVar159._10_2_ = 0;
        auVar167._0_14_ = auVar159._0_14_;
        auVar167._14_2_ = 0;
        auVar23[1] = 0;
        auVar23[0] = bVar168;
        auVar23._2_13_ = auVar22._2_13_;
        auVar24[4] = uVar46;
        auVar24._0_4_ = auVar23._0_4_;
        auVar24[5] = 0;
        auVar24._6_9_ = auVar22._6_9_;
        auVar25[8] = uVar48;
        auVar25._0_8_ = auVar24._0_8_;
        auVar25[9] = 0;
        auVar25._10_5_ = auVar22._10_5_;
        auVar26[0xc] = uVar16;
        auVar26._0_12_ = auVar25._0_12_;
        auVar26[0xd] = 0;
        auVar26[0xe] = uVar16;
        auVar27._4_11_ = auVar26._4_11_;
        auVar27._0_4_ = auVar23._0_4_;
        auVar28._6_2_ = 0;
        auVar28._0_6_ = auVar27._0_6_;
        auVar28._8_7_ = auVar26._8_7_;
        auVar29._10_2_ = 0;
        auVar29._0_10_ = auVar28._0_10_;
        auVar29._12_3_ = auVar26._12_3_;
        auVar166._0_14_ = auVar29._0_14_;
        auVar166._14_2_ = 0;
        auVar167 = NEON_ucvtf(auVar167,4);
        auVar153 = NEON_ucvtf(auVar166,4);
        fVar70 = fVar53 * (auVar167._0_4_ * 0.007874016 + auVar128._0_4_);
        fVar90 = fVar59 * (auVar167._4_4_ * 0.007874016 + auVar128._4_4_);
        fVar94 = fVar53 * (auVar167._8_4_ * 0.007874016 + auVar128._8_4_);
        fVar63 = fVar59 * (auVar167._12_4_ * 0.007874016 + auVar128._12_4_);
        fVar67 = fVar53 * (auVar153._0_4_ * 0.007874016 + auVar128._0_4_);
        fVar72 = fVar59 * (auVar153._4_4_ * 0.007874016 + auVar128._4_4_);
        fVar78 = fVar53 * (auVar153._8_4_ * 0.007874016 + auVar128._8_4_);
        fVar83 = fVar59 * (auVar153._12_4_ * 0.007874016 + auVar128._12_4_);
        puVar2 = (uint *)(lVar41 + lVar43 * 0x10);
        uVar30 = *puVar2;
        uVar31 = puVar2[1];
        uVar32 = puVar2[3];
        fVar123 = fVar91 * fVar70 + fVar60 * fVar67;
        fVar117 = fVar91 * fVar90 + fVar60 * fVar72;
        fVar88 = fVar91 * fVar94 + fVar60 * fVar78;
        fVar106 = fVar91 * fVar63 + fVar60 * fVar83;
        fVar97 = fVar93 * fVar70 + fVar76 * fVar67;
        uVar104 = SUB41(fVar97,0);
        uVar45 = (undefined1)((uint)fVar97 >> 8);
        uVar47 = (undefined1)((uint)fVar97 >> 0x10);
        uVar105 = (undefined1)((uint)fVar97 >> 0x18);
        fVar97 = fVar93 * fVar90 + fVar76 * fVar72;
        uVar132 = SUB41(fVar97,0);
        uVar133 = (undefined1)((uint)fVar97 >> 8);
        uVar134 = (undefined1)((uint)fVar97 >> 0x10);
        uVar135 = (undefined1)((uint)fVar97 >> 0x18);
        fVar97 = fVar93 * fVar94 + fVar76 * fVar78;
        uVar136 = SUB41(fVar97,0);
        uVar138 = (undefined1)((uint)fVar97 >> 8);
        uVar137 = (undefined1)((uint)fVar97 >> 0x10);
        uVar139 = (undefined1)((uint)fVar97 >> 0x18);
        fVar97 = fVar93 * fVar63 + fVar76 * fVar83;
        uVar140 = SUB41(fVar97,0);
        uVar141 = (undefined1)((uint)fVar97 >> 8);
        uVar142 = (undefined1)((uint)fVar97 >> 0x10);
        uVar143 = (undefined1)((uint)fVar97 >> 0x18);
        fVar70 = fVar61 * fVar70 + fVar130 * fVar67;
        fVar97 = fVar61 * fVar90 + fVar130 * fVar72;
        fVar90 = fVar61 * fVar94 + fVar130 * fVar78;
        fVar94 = fVar61 * fVar63 + fVar130 * fVar83;
        puVar4 = (uint *)(lVar41 + lVar43 * 0x10);
        puVar4[2] = puVar2[2] ^
                    (puVar2[2] ^ 0x3c010204) &
                    -(uint)(fVar120 * auVar101._8_4_ +
                            fVar118 * (fVar52 + fVar89 * fVar65) + fVar98 * (fVar51 + fVar111) <=
                           0.0);
        puVar4[3] = uVar32 ^ (uVar32 ^ 0x3c010204) &
                             -(uint)(fVar120 * auVar101._12_4_ +
                                     fVar118 * (fVar52 + fVar92 * fVar62) +
                                     fVar98 * (fVar51 + fVar113) <= 0.0);
        *puVar4 = uVar30 ^ (uVar30 ^ 0x3c010204) &
                           -(uint)(fVar120 * auVar101._0_4_ +
                                   fVar118 * (fVar52 + fVar89 * fVar87) + fVar98 * (fVar51 + fVar49)
                                  <= 0.0);
        puVar4[1] = uVar31 ^ (uVar31 ^ 0x3c010204) &
                             -(uint)(fVar120 * auVar101._4_4_ +
                                     fVar118 * (fVar52 + fVar92 * fVar121) +
                                     fVar98 * (fVar51 + fVar50) <= 0.0);
        lVar43 = lVar43 + 1;
      } while (lVar43 != 0x20);
      return 1;
    }
    lVar44 = *param_8;
    fVar117 = fVar88 * fVar114 + fVar87 * fVar111 + fVar70 * fVar113;
    lVar43 = 0;
    iVar116 = -(uint)(fVar53 == 0.0);
    bVar168 = ~(byte)((uint)iVar116 >> 8);
    bVar169 = ~(byte)((uint)iVar116 >> 0x10);
    bVar170 = ~(byte)((uint)iVar116 >> 0x18);
    iVar95 = -(uint)(fVar117 == 0.0);
    fVar89 = fVar89 * fVar53;
    fVar92 = fVar92 * fVar59;
    auVar101 = NEON_ext(auVar128,auVar128,4,1);
    uVar109 = CONCAT44((float)((ulong)uVar108 >> 0x20) / fVar59,(float)uVar108 / fVar53) &
              CONCAT17(bVar170,CONCAT16(bVar169,CONCAT15(bVar168,CONCAT14(~(byte)iVar116,
                                                                          CONCAT13(bVar170,CONCAT12(
                                                  bVar169,CONCAT11(bVar168,~(byte)iVar116)))))));
    uVar96 = CONCAT13(~(byte)((uint)iVar95 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar95 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar95 >> 8),~(byte)iVar95)));
    fVar107 = fVar65 * (float)uVar109;
    fVar110 = fVar97 * (float)(uVar109 >> 0x20);
    auVar5._12_4_ = fVar121;
    auVar5._0_12_ = *param_3;
    auVar6._12_4_ = fVar121;
    auVar6._0_12_ = *param_3;
    auVar167 = NEON_ext(auVar5,auVar6,4,1);
    uVar171 = CONCAT44((fVar160 * (float)((ulong)*param_5 >> 0x20)) /
                       (fVar88 * fVar114 + fVar87 * fVar111 + fVar70 * fVar113),
                       (fVar144 * (float)*param_5) / fVar117) & CONCAT44(uVar96,uVar96);
    fVar103 = fVar98 * auVar101._0_4_ - auVar167._0_4_ * auVar128._0_4_;
    fVar117 = fVar118 * auVar101._4_4_ - auVar167._4_4_ * auVar128._4_4_;
    fVar115 = fVar120 * auVar128._0_4_ - fVar98 * auVar128._8_4_;
    fVar144 = fVar121 * auVar128._4_4_ - fVar118 * auVar128._12_4_;
    auVar7._4_4_ = fVar117;
    auVar7._0_4_ = fVar103;
    auVar7._8_4_ = fVar115;
    auVar7._12_4_ = fVar144;
    auVar8._4_4_ = fVar117;
    auVar8._0_4_ = fVar103;
    auVar8._8_4_ = fVar115;
    auVar8._12_4_ = fVar144;
    auVar128 = NEON_ext(auVar7,auVar8,4,1);
    fVar99 = (fVar61 * fVar58 + fVar91 * fVar51 + fVar93 * fVar52) * fVar107;
    fVar102 = (fVar61 * fVar58 + fVar91 * fVar51 + fVar93 * fVar52) * fVar110;
    auVar10[4] = uVar104;
    auVar10._0_4_ = fVar87;
    auVar10[5] = uVar45;
    auVar10[6] = uVar47;
    auVar10[7] = uVar105;
    auVar10._8_4_ = fVar88;
    auVar10._12_4_ = fVar106;
    auVar11[4] = uVar104;
    auVar11._0_4_ = fVar87;
    auVar11[5] = uVar45;
    auVar11[6] = uVar47;
    auVar11[7] = uVar105;
    auVar11._8_4_ = fVar88;
    auVar11._12_4_ = fVar106;
    auVar101 = NEON_ext(auVar10,auVar11,4,1);
    fVar107 = (fVar130 * fVar58 + fVar60 * fVar51 + fVar76 * fVar52) * fVar107;
    fVar110 = (fVar130 * fVar58 + fVar60 * fVar51 + fVar76 * fVar52) * fVar110;
    fVar160 = fVar89 * (fVar88 * fVar130 + fVar87 * fVar60 + fVar70 * fVar76);
    fVar64 = fVar92 * (fVar88 * fVar130 + fVar87 * fVar60 + fVar70 * fVar76);
    fVar126 = fVar87 * auVar128._0_4_;
    fVar131 = fVar70 * auVar128._4_4_;
    fVar117 = fVar89 * (fVar88 * fVar61 + fVar87 * fVar91 + fVar70 * fVar93);
    fVar115 = fVar92 * (fVar88 * fVar61 + fVar87 * fVar91 + fVar70 * fVar93);
    fVar144 = auVar167._0_4_ * fVar87 - fVar98 * auVar101._0_4_;
    fVar70 = auVar167._4_4_ * fVar70 - fVar118 * auVar101._4_4_;
    uVar132 = (undefined1)((uint)fVar70 >> 8);
    uVar133 = (undefined1)((uint)fVar70 >> 0x10);
    uVar134 = (undefined1)((uint)fVar70 >> 0x18);
    fVar98 = fVar98 * fVar88 - fVar120 * fVar87;
    uVar135 = (undefined1)((uint)fVar98 >> 8);
    uVar136 = (undefined1)((uint)fVar98 >> 0x10);
    uVar138 = (undefined1)((uint)fVar98 >> 0x18);
    fVar87 = fVar118 * fVar106 -
             fVar121 * (float)(CONCAT17(uVar105,CONCAT16(uVar47,CONCAT15(uVar45,CONCAT14(uVar104,
                                                  fVar87)))) >> 0x20);
    uVar104 = (undefined1)((uint)fVar87 >> 8);
    uVar45 = (undefined1)((uint)fVar87 >> 0x10);
    uVar47 = (undefined1)((uint)fVar87 >> 0x18);
    auVar12[4] = SUB41(fVar70,0);
    auVar12._0_4_ = fVar144;
    auVar12[5] = uVar132;
    auVar12[6] = uVar133;
    auVar12[7] = uVar134;
    auVar12[8] = SUB41(fVar98,0);
    auVar12[9] = uVar135;
    auVar12[10] = uVar136;
    auVar12[0xb] = uVar138;
    auVar12[0xc] = SUB41(fVar87,0);
    auVar12[0xd] = uVar104;
    auVar12[0xe] = uVar45;
    auVar12[0xf] = uVar47;
    auVar13[4] = SUB41(fVar70,0);
    auVar13._0_4_ = fVar144;
    auVar13[5] = uVar132;
    auVar13[6] = uVar133;
    auVar13[7] = uVar134;
    auVar13[8] = SUB41(fVar98,0);
    auVar13[9] = uVar135;
    auVar13[10] = uVar136;
    auVar13[0xb] = uVar138;
    auVar13[0xc] = SUB41(fVar87,0);
    auVar13[0xd] = uVar104;
    auVar13[0xe] = uVar45;
    auVar13[0xf] = uVar47;
    auVar128 = NEON_ext(auVar12,auVar13,4,1);
    uVar108 = NEON_fmax(CONCAT44(ABS(fVar126 + fVar131 + fVar88 * fVar103),
                                 ABS(fVar126 + fVar131 + fVar88 * fVar103)),
                        CONCAT44(fVar123,fVar123),4);
    fVar111 = auVar128._0_4_ * fVar111;
    fVar113 = auVar128._4_4_ * fVar113;
    bVar168 = (byte)(-(uint)(fVar144 * fVar114 + fVar111 + fVar113 < 0.0) >> 0x18);
    uVar109 = CONCAT17((char)(-(uint)(fVar144 * fVar114 + fVar111 + fVar113 < 0.0) >> 0x18),
                       (uint7)(bVar168 & 0x80) << 0x18) & 0x80ffffffffffffff;
    fVar118 = (float)CONCAT13((byte)(uVar109 >> 0x18) ^ auVar128[3],auVar128._0_3_);
    auVar112._0_8_ =
         CONCAT17((byte)(uVar109 >> 0x38) ^ auVar128[7],
                  CONCAT16(auVar128[6],CONCAT15(auVar128[5],CONCAT14(auVar128[4],fVar118))));
    auVar112[8] = SUB41(fVar144,0);
    auVar112[9] = (char)((uint)fVar144 >> 8);
    auVar112[10] = (char)((uint)fVar144 >> 0x10);
    auVar112[0xb] = bVar168 & 0x80 ^ (byte)((uint)fVar144 >> 0x18);
    fVar98 = (float)((ulong)auVar112._0_8_ >> 0x20);
    fVar59 = fVar59 * fVar98;
    fVar87 = fVar53 * auVar112._8_4_;
    fVar91 = fVar91 * fVar53 * fVar118;
    fVar93 = fVar93 * fVar59;
    fVar61 = fVar61 * fVar87;
    fVar60 = fVar60 * fVar53 * fVar118;
    fVar76 = fVar76 * fVar59;
    fVar130 = fVar130 * fVar87;
    fVar52 = fVar52 * fVar98;
    fVar58 = fVar58 * auVar112._8_4_;
    fVar98 = (fVar58 + fVar51 * fVar118 + fVar52) * -fVar65;
    fVar51 = (fVar58 + fVar51 * fVar118 + fVar52) * -fVar97;
    fVar53 = fVar61 + fVar91 + fVar93;
    fVar61 = fVar61 + fVar91 + fVar93;
    fVar87 = fVar123 * ((float)uVar171 / (float)uVar108);
    fVar123 = fVar123 * ((float)(uVar171 >> 0x20) / (float)((ulong)uVar108 >> 0x20));
    fVar59 = fVar130 + fVar60 + fVar76;
    fVar130 = fVar130 + fVar60 + fVar76;
    uVar109 = CONCAT44(fVar51,fVar98) ^
              (CONCAT44(fVar51,fVar98) ^ 0xff7fffeeff7fffee) &
              CONCAT44(-(uint)(0.0 <= fVar123),-(uint)(0.0 <= fVar87));
    do {
      fVar51 = fVar107 + fVar67;
      fVar52 = fVar110 + fVar72;
      fVar98 = fVar107 + fVar78;
      fVar120 = fVar110 + fVar83;
      fVar65 = fVar99 + fVar90;
      fVar70 = fVar102 + fVar94;
      fVar76 = fVar99 + fVar62;
      fVar97 = fVar102 + fVar63;
      fVar58 = fVar160 * fVar51 + fVar117 * fVar65;
      fVar60 = fVar64 * fVar52 + fVar115 * fVar70;
      fVar118 = fVar160 * fVar98 + fVar117 * fVar76;
      fVar121 = fVar64 * fVar120 +
                (float)(CONCAT17((char)((uint)fVar115 >> 0x18),
                                 CONCAT16((char)((uint)fVar115 >> 0x10),
                                          CONCAT15((char)((uint)fVar115 >> 8),
                                                   CONCAT14(SUB41(fVar115,0),fVar117)))) >> 0x20) *
                fVar97;
      fVar88 = fVar89 * fVar89 * (fVar51 * fVar51 + fVar65 * fVar65);
      fVar106 = fVar92 * fVar92 * (fVar52 * fVar52 + fVar70 * fVar70);
      fVar76 = fVar89 * fVar89 * (fVar98 * fVar98 + fVar76 * fVar76);
      fVar97 = fVar92 * fVar92 * (fVar120 * fVar120 + fVar97 * fVar97);
      fVar98 = fVar58 * fVar58 - fVar49 * fVar88;
      fVar120 = fVar60 * fVar60 - fVar50 * fVar106;
      fVar65 = fVar118 * fVar118 - fVar49 * fVar76;
      fVar70 = fVar121 * fVar121 - fVar50 * fVar97;
      pVar1 = (unkbyte9 *)(lVar44 + lVar43 * 0x10);
      uVar108 = *(undefined8 *)((long)pVar1 + 8);
      uVar104 = (undefined1)((ulong)uVar108 >> 8);
      uVar45 = (undefined1)((ulong)uVar108 >> 0x10);
      uVar47 = (undefined1)((ulong)uVar108 >> 0x18);
      uVar105 = (undefined1)((ulong)uVar108 >> 0x20);
      uVar132 = (undefined1)((ulong)uVar108 >> 0x28);
      uVar133 = (undefined1)((ulong)uVar108 >> 0x30);
      uVar134 = (undefined1)((ulong)uVar108 >> 0x38);
      fVar51 = (float)uVar109;
      auVar54._0_4_ = -(uint)(fVar59 * fVar67 + fVar53 * fVar90 < fVar51);
      fVar52 = (float)(uVar109 >> 0x20);
      auVar54._4_4_ = -(uint)(fVar130 * fVar72 + fVar61 * fVar94 < fVar52);
      auVar54._8_4_ = -(uint)(fVar59 * fVar78 + fVar53 * fVar62 < fVar51);
      auVar54._12_4_ = -(uint)(fVar130 * fVar83 + fVar61 * fVar63 < fVar52);
      iVar66 = -(uint)(0.0 <= fVar98);
      iVar71 = -(uint)(0.0 <= fVar120);
      iVar77 = -(uint)(0.0 <= fVar65);
      iVar82 = -(uint)(0.0 <= fVar70);
      bVar169 = (byte)((uint)iVar66 >> 8);
      bVar170 = (byte)((uint)iVar66 >> 0x10);
      bVar69 = (byte)((uint)iVar66 >> 0x18);
      fVar51 = (float)CONCAT13((byte)((uint)fVar98 >> 0x18) & bVar69,
                               CONCAT12((byte)((uint)fVar98 >> 0x10) & bVar170,
                                        CONCAT11((byte)((uint)fVar98 >> 8) & bVar169,
                                                 SUB41(fVar98,0) & (byte)iVar66)));
      bVar73 = (byte)((uint)iVar71 >> 8);
      bVar74 = (byte)((uint)iVar71 >> 0x10);
      bVar75 = (byte)((uint)iVar71 >> 0x18);
      auVar124._0_8_ =
           CONCAT17((byte)((uint)fVar120 >> 0x18) & bVar75,
                    CONCAT16((byte)((uint)fVar120 >> 0x10) & bVar74,
                             CONCAT15((byte)((uint)fVar120 >> 8) & bVar73,
                                      CONCAT14(SUB41(fVar120,0) & (byte)iVar71,fVar51))));
      auVar124[8] = SUB41(fVar65,0) & (byte)iVar77;
      bVar79 = (byte)((uint)iVar77 >> 8);
      auVar124[9] = (byte)((uint)fVar65 >> 8) & bVar79;
      bVar80 = (byte)((uint)iVar77 >> 0x10);
      auVar124[10] = (byte)((uint)fVar65 >> 0x10) & bVar80;
      bVar81 = (byte)((uint)iVar77 >> 0x18);
      auVar124[0xb] = (byte)((uint)fVar65 >> 0x18) & bVar81;
      auVar125[0xc] = SUB41(fVar70,0) & (byte)iVar82;
      auVar125._0_12_ = auVar124;
      bVar84 = (byte)((uint)iVar82 >> 8);
      auVar125[0xd] = (byte)((uint)fVar70 >> 8) & bVar84;
      bVar85 = (byte)((uint)iVar82 >> 0x10);
      auVar125[0xe] = (byte)((uint)fVar70 >> 0x10) & bVar85;
      bVar86 = (byte)((uint)iVar82 >> 0x18);
      auVar125[0xf] = (byte)((uint)fVar70 >> 0x18) & bVar86;
      auVar146._0_4_ = fVar87 + (float)*(undefined8 *)pVar1;
      auVar146._4_4_ = fVar123 + (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
      auVar146._8_4_ = fVar87 + (float)uVar108;
      auVar146._12_4_ = fVar123 + (float)((ulong)uVar108 >> 0x20);
      auVar128 = *(undefined1 (*) [16])(lVar41 + lVar43 * 0x10);
      auVar14[9] = uVar104;
      auVar14._0_9_ = *pVar1;
      auVar14[10] = uVar45;
      auVar14[0xb] = uVar47;
      auVar14[0xc] = uVar105;
      auVar14[0xd] = uVar132;
      auVar14[0xe] = uVar133;
      auVar14[0xf] = uVar134;
      auVar55[9] = uVar104;
      auVar55._0_9_ = *pVar1;
      auVar55[10] = uVar45;
      auVar55[0xb] = uVar47;
      auVar55[0xc] = uVar105;
      auVar55[0xd] = uVar132;
      auVar55[0xe] = uVar133;
      auVar55[0xf] = uVar134;
      auVar55 = auVar55 ^ (auVar14 ^ auVar146) & auVar54;
      iVar116 = -(uint)(fVar88 == 0.0);
      iVar95 = -(uint)(fVar106 == 0.0);
      iVar119 = -(uint)(fVar76 == 0.0);
      iVar122 = -(uint)(fVar97 == 0.0);
      puVar3 = (undefined8 *)(lVar44 + lVar43 * 0x10);
      puVar3[1] = auVar55._8_8_;
      *puVar3 = auVar55._0_8_;
      auVar101 = NEON_fmov(0x3f800000,4);
      auVar56._0_4_ = auVar101._0_4_ / fVar88;
      auVar56._4_4_ = auVar101._4_4_ / fVar106;
      auVar56._8_4_ = auVar101._8_4_ / fVar76;
      auVar56._12_4_ = auVar101._12_4_ / fVar97;
      uVar108 = *(undefined8 *)(lVar42 + 8 + lVar43 * 8);
      auVar164._8_4_ = 0x7f7fffee;
      auVar164._0_8_ = 0x7f7fffee7f7fffee;
      auVar164._12_4_ = 0x7f7fffee;
      uVar104 = (undefined1)((ulong)uVar108 >> 0x38);
      bVar168 = (byte)((ulong)uVar108 >> 0x20);
      uVar45 = (undefined1)((ulong)uVar108 >> 0x28);
      auVar127._0_10_ = (unkuint10)CONCAT11(bVar168,uVar104) << 0x38;
      auVar127[10] = uVar45;
      uVar47 = (undefined1)((ulong)uVar108 >> 0x30);
      auVar127[0xb] = 0;
      auVar127[0xc] = uVar47;
      auVar127[0xd] = 0;
      auVar127[0xe] = uVar104;
      auVar17[9] = 0;
      auVar17._0_9_ = (unkuint9)auVar127._8_7_ << 0x40;
      auVar17._10_5_ = auVar127._10_5_;
      auVar18[0xb] = 0;
      auVar18._0_11_ = auVar17._0_11_;
      auVar18._12_3_ = auVar127._12_3_;
      auVar19[0xd] = 0;
      auVar19._0_13_ = auVar18._0_13_;
      auVar19[0xe] = uVar104;
      auVar33[1] = 0;
      auVar33[0] = (byte)((ulong)uVar108 >> 8);
      auVar33._2_10_ = auVar146._6_10_;
      auVar149._0_8_ = auVar33._0_8_ << 0x20;
      auVar149._10_6_ = auVar146._10_6_;
      auVar149[8] = (char)((ulong)uVar108 >> 0x10);
      auVar149[9] = 0;
      auVar151._14_2_ = (undefined2)((uint)auVar146._12_4_ >> 0x10);
      auVar151._0_12_ = auVar149._0_12_;
      auVar151[0xc] = (char)((ulong)uVar108 >> 0x18);
      auVar151[0xd] = 0;
      auVar147._4_12_ = auVar151._4_12_;
      auVar147._1_3_ = 0;
      auVar147[0] = (byte)uVar108;
      auVar148._8_8_ = auVar151._8_8_;
      auVar148._0_6_ = auVar147._0_6_;
      auVar148._6_2_ = 0;
      auVar150._12_4_ = auVar151._12_4_;
      auVar150._0_10_ = auVar148._0_10_;
      auVar150._10_2_ = 0;
      auVar152._0_14_ = auVar150._0_14_;
      auVar152._14_2_ = 0;
      auVar34[1] = 0;
      auVar34[0] = bVar168;
      auVar34._2_13_ = auVar19._2_13_;
      auVar35[4] = uVar45;
      auVar35._0_4_ = auVar34._0_4_;
      auVar35[5] = 0;
      auVar35._6_9_ = auVar19._6_9_;
      auVar36[8] = uVar47;
      auVar36._0_8_ = auVar35._0_8_;
      auVar36[9] = 0;
      auVar36._10_5_ = auVar19._10_5_;
      auVar37[0xc] = uVar104;
      auVar37._0_12_ = auVar36._0_12_;
      auVar37[0xd] = 0;
      auVar37[0xe] = uVar104;
      auVar38._4_11_ = auVar37._4_11_;
      auVar38._0_4_ = auVar34._0_4_;
      auVar39._6_2_ = 0;
      auVar39._0_6_ = auVar38._0_6_;
      auVar39._8_7_ = auVar37._8_7_;
      auVar40._10_2_ = 0;
      auVar40._0_10_ = auVar39._0_10_;
      auVar40._12_3_ = auVar37._12_3_;
      auVar129._0_14_ = auVar40._0_14_;
      auVar129._14_2_ = 0;
      auVar153 = NEON_ucvtf(auVar152,4);
      fVar51 = -fVar58 - SQRT(fVar51);
      fVar52 = -fVar60 - SQRT((float)((ulong)auVar124._0_8_ >> 0x20));
      fVar58 = -fVar118 - SQRT(auVar124._8_4_);
      fVar60 = -fVar121 - SQRT(auVar125._12_4_);
      auVar15[1] = ~(byte)((uint)iVar116 >> 8);
      auVar15[0] = ~(byte)iVar116;
      auVar15[2] = ~(byte)((uint)iVar116 >> 0x10);
      auVar15[3] = ~(byte)((uint)iVar116 >> 0x18);
      auVar15[4] = ~(byte)iVar95;
      auVar15[5] = ~(byte)((uint)iVar95 >> 8);
      auVar15[6] = ~(byte)((uint)iVar95 >> 0x10);
      auVar15[7] = ~(byte)((uint)iVar95 >> 0x18);
      auVar15[8] = ~(byte)iVar119;
      auVar15[9] = ~(byte)((uint)iVar119 >> 8);
      auVar15[10] = ~(byte)((uint)iVar119 >> 0x10);
      auVar15[0xb] = ~(byte)((uint)iVar119 >> 0x18);
      auVar15[0xc] = ~(byte)iVar122;
      auVar15[0xd] = ~(byte)((uint)iVar122 >> 8);
      auVar15[0xe] = ~(byte)((uint)iVar122 >> 0x10);
      auVar15[0xf] = ~(byte)((uint)iVar122 >> 0x18);
      auVar56 = auVar56 ^ (auVar56 ^ auVar164) & ~auVar15;
      auVar167 = NEON_ucvtf(auVar129,4);
      auVar57._0_4_ = auVar56._0_4_ * fVar51;
      auVar57._4_4_ = auVar56._4_4_ * fVar52;
      auVar57._8_4_ = auVar56._8_4_ * fVar58;
      auVar57._12_4_ = auVar56._12_4_ * fVar60;
      iVar116 = -(uint)(0.0 < fVar51);
      iVar95 = -(uint)(0.0 < fVar52);
      iVar119 = -(uint)(0.0 < fVar58);
      iVar122 = -(uint)(0.0 < fVar60);
      iVar145 = -(uint)(auVar57._0_4_ < auVar128._0_4_);
      iVar161 = -(uint)(auVar57._4_4_ < auVar128._4_4_);
      iVar162 = -(uint)(auVar57._8_4_ < auVar128._8_4_);
      iVar163 = -(uint)(auVar57._12_4_ < auVar128._12_4_);
      auVar68[0] = (byte)iVar116 & (byte)iVar66 & (byte)iVar145;
      auVar68[1] = (byte)((uint)iVar116 >> 8) & bVar169 & (byte)((uint)iVar145 >> 8);
      auVar68[2] = (byte)((uint)iVar116 >> 0x10) & bVar170 & (byte)((uint)iVar145 >> 0x10);
      auVar68[3] = (byte)((uint)iVar116 >> 0x18) & bVar69 & (byte)((uint)iVar145 >> 0x18);
      auVar68[4] = (byte)iVar95 & (byte)iVar71 & (byte)iVar161;
      auVar68[5] = (byte)((uint)iVar95 >> 8) & bVar73 & (byte)((uint)iVar161 >> 8);
      auVar68[6] = (byte)((uint)iVar95 >> 0x10) & bVar74 & (byte)((uint)iVar161 >> 0x10);
      auVar68[7] = (byte)((uint)iVar95 >> 0x18) & bVar75 & (byte)((uint)iVar161 >> 0x18);
      auVar68[8] = (byte)iVar119 & (byte)iVar77 & (byte)iVar162;
      auVar68[9] = (byte)((uint)iVar119 >> 8) & bVar79 & (byte)((uint)iVar162 >> 8);
      auVar68[10] = (byte)((uint)iVar119 >> 0x10) & bVar80 & (byte)((uint)iVar162 >> 0x10);
      auVar68[0xb] = (byte)((uint)iVar119 >> 0x18) & bVar81 & (byte)((uint)iVar162 >> 0x18);
      auVar68[0xc] = (byte)iVar122 & (byte)iVar82 & (byte)iVar163;
      auVar68[0xd] = (byte)((uint)iVar122 >> 8) & bVar84 & (byte)((uint)iVar163 >> 8);
      auVar68[0xe] = (byte)((uint)iVar122 >> 0x10) & bVar85 & (byte)((uint)iVar163 >> 0x10);
      auVar68[0xf] = (byte)((uint)iVar122 >> 0x18) & bVar86 & (byte)((uint)iVar163 >> 0x18);
      auVar128 = auVar128 ^ (auVar128 ^ auVar57) & auVar68;
      auVar101 = NEON_fmov(0xbf800000,4);
      fVar90 = auVar153._0_4_ * 0.007874016 + auVar101._0_4_;
      fVar94 = auVar153._4_4_ * 0.007874016 + auVar101._4_4_;
      fVar62 = auVar153._8_4_ * 0.007874016 + auVar101._8_4_;
      fVar63 = auVar153._12_4_ * 0.007874016 + auVar101._12_4_;
      fVar67 = auVar167._0_4_ * 0.007874016 + auVar101._0_4_;
      fVar72 = auVar167._4_4_ * 0.007874016 + auVar101._4_4_;
      fVar78 = auVar167._8_4_ * 0.007874016 + auVar101._8_4_;
      fVar83 = auVar167._12_4_ * 0.007874016 + auVar101._12_4_;
      puVar3 = (undefined8 *)(lVar41 + lVar43 * 0x10);
      puVar3[1] = auVar128._8_8_;
      *puVar3 = auVar128._0_8_;
      lVar43 = lVar43 + 1;
    } while (lVar43 != 0x20);
  }
  return 0;
}


