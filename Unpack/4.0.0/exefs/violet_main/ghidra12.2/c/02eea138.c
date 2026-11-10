/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eea138; name: FUN_02eea138
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_02eea138(int *param_1,uint param_2,float *param_3,float *param_4,byte *param_5,
                  ulong param_6,ulong param_7,undefined8 *param_8,short *param_9)

{
  float *pfVar1;
  ushort *puVar2;
  int *piVar3;
  float *pfVar4;
  ushort uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  int iVar33;
  ulong uVar34;
  byte *pbVar35;
  long lVar36;
  short sVar37;
  uint uVar38;
  int *piVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  long lVar43;
  uint uVar44;
  undefined8 *puVar45;
  float *pfVar46;
  uint uVar47;
  undefined8 *puVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  ulong uVar52;
  ulong uVar53;
  int *piVar54;
  float *pfVar55;
  uint uVar56;
  long lVar57;
  byte bVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined8 uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  undefined8 uVar73;
  float fVar84;
  undefined1 auVar74 [16];
  float fVar82;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  int iVar83;
  undefined1 auVar81 [16];
  float fVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar94;
  undefined1 auVar95 [12];
  float fVar99;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar105;
  float fVar109;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  ulong uVar119;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  int iVar126;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  float fVar127;
  float fVar128;
  float fVar133;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  float fVar134;
  undefined1 auVar131 [16];
  float fVar135;
  undefined1 auVar132 [16];
  float fVar136;
  float fVar141;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar142 [16];
  float fVar143;
  int iVar144;
  float fVar146;
  ulong uVar145;
  int iVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  int iVar151;
  float fVar157;
  ulong uVar152;
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  int iVar158;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined8 uVar159;
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined4 local_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  undefined8 uStack_440;
  undefined8 uStack_438;
  float local_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  float local_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  undefined1 auStack_50 [16];
  
  uVar44 = param_1[5];
  piVar3 = param_1 + 4;
  uVar41 = (uint)param_7;
  if (uVar44 == 0) {
    if (uVar41 == 0xffffffff) {
LAB_02eeadc8:
      if ((param_6 & 1) == 0) {
        bVar51 = param_5[4] >> 6;
      }
      else {
        pbVar35 = param_5 + 4;
        param_5 = param_5 + (*pbVar35 >> 6);
        bVar51 = *pbVar35 & 3;
      }
      iVar33 = param_1[1];
      fVar61 = *param_3;
      fVar62 = param_3[1];
      fVar63 = param_3[2];
      fVar64 = param_3[3];
      bVar58 = *param_5;
      uVar52 = (ulong)bVar58;
      lVar43 = 0;
      if (*param_1 != 0) {
        lVar43 = (long)*param_1 + (long)param_1;
      }
      if (bVar51 == 1) {
        if (iVar33 < 1) {
          uVar53 = 0xff;
        }
        else {
          puVar45 = (undefined8 *)(lVar43 + uVar52 * 0xc);
          uVar65 = *puVar45;
          uVar34 = 0;
          fVar105 = 3.40282e+38;
          uVar53 = 0xff;
          fVar109 = 1.0;
          do {
            puVar48 = (undefined8 *)(lVar43 + (uVar34 & 0xff) * 0xc);
            uVar73 = *puVar48;
            fVar99 = fVar61 * 0.01 + ((float)uVar73 - (float)uVar65);
            fVar72 = fVar62 * 0.01 +
                     ((float)((ulong)uVar73 >> 0x20) - (float)((ulong)uVar65 >> 0x20));
            fVar82 = fVar63 * 0.01 + (*(float *)(puVar48 + 1) - *(float *)(puVar45 + 1));
            fVar84 = fVar61 * fVar99 + fVar62 * fVar72 + fVar63 * fVar82;
            fVar99 = fVar99 * fVar99 + fVar72 * fVar72 + fVar82 * fVar82;
            fVar72 = (float)CONCAT13((byte)(-(uint)(fVar84 < 0.0) >> 0x18) & 0x80 ^
                                     (byte)((uint)(fVar84 * fVar84) >> 0x18),
                                     SUB43(fVar84 * fVar84,0));
            bVar6 = fVar99 * fVar105 <= fVar109 * fVar72;
            uVar44 = (uint)uVar34;
            if (bVar6) {
              uVar44 = (uint)uVar53;
            }
            uVar53 = (ulong)uVar44;
            uVar44 = (uint)uVar34 + 1;
            uVar34 = (ulong)uVar44;
            if (bVar6) {
              fVar99 = fVar109;
              fVar72 = fVar105;
            }
            fVar105 = fVar72;
            fVar109 = fVar99;
          } while ((int)(uVar44 & 0xff) < iVar33);
        }
LAB_02eeaf6c:
        pfVar46 = (float *)(lVar43 + (uVar53 & 0xff) * 0xc);
        puVar45 = (undefined8 *)(lVar43 + uVar52 * 0xc);
        uVar65 = *puVar45;
        fVar105 = *(float *)(puVar45 + 1);
        fVar99 = (float)uVar65;
        fVar72 = (float)((ulong)uVar65 >> 0x20);
        fVar82 = *pfVar46;
        fVar84 = pfVar46[1];
        fVar109 = pfVar46[2];
        auVar104._0_4_ = fVar82 - fVar99;
        auVar104._4_4_ = fVar84 - fVar72;
        auVar104._8_4_ = fVar109 - fVar105;
        auVar104._12_4_ = fVar109 - fVar105;
        uVar34 = uVar52;
        if (0 < iVar33) {
          fVar85 = (float)(0x5f375a86 -
                          ((int)(auVar104._0_4_ * auVar104._0_4_ + auVar104._4_4_ * auVar104._4_4_ +
                                auVar104._8_4_ * auVar104._8_4_) >> 1));
          fVar94 = (float)(0x5f375a86 -
                          ((int)(auVar104._0_4_ * auVar104._0_4_ + auVar104._4_4_ * auVar104._4_4_ +
                                auVar104._8_4_ * auVar104._8_4_) >> 1));
          auVar115._0_4_ = auVar104._0_4_ * fVar85;
          auVar115._4_4_ = auVar104._4_4_ * fVar94;
          auVar115._8_4_ = auVar104._8_4_ * fVar85;
          auVar115._12_4_ = auVar104._12_4_ * fVar94;
          auVar76 = NEON_ext(auVar115,auVar115,4,1);
          fVar85 = fVar61 * auVar115._0_4_ + fVar62 * auVar115._4_4_ + fVar63 * auVar115._8_4_;
          fVar94 = fVar61 * auVar115._0_4_ + fVar62 * auVar115._4_4_ + fVar63 * auVar115._8_4_;
          uVar119 = 0;
          auVar91._0_4_ = fVar61 - auVar115._0_4_ * fVar85;
          auVar91._4_4_ = fVar62 - auVar115._4_4_ * fVar94;
          auVar91._8_4_ = fVar63 - auVar115._8_4_ * fVar85;
          auVar91._12_4_ = fVar64 - auVar115._12_4_ * fVar94;
          auVar79._0_4_ = fVar99 * auVar91._0_4_;
          auVar79._4_4_ = fVar72 * auVar91._4_4_;
          auVar79._8_4_ = fVar105 * auVar91._8_4_;
          auVar79._12_4_ = fVar105 * auVar91._12_4_;
          auVar86 = NEON_ext(auVar79,auVar79,8,1);
          fVar85 = 0.01 - (auVar79._0_4_ + auVar79._4_4_ + auVar86._0_4_);
          auVar86 = NEON_ext(auVar91,auVar91,4,1);
          auVar116._0_4_ = auVar76._0_4_ * auVar91._0_4_ - auVar115._0_4_ * auVar86._0_4_;
          auVar116._4_4_ = auVar76._4_4_ * auVar91._4_4_ - auVar115._4_4_ * auVar86._4_4_;
          auVar116._8_4_ = auVar115._0_4_ * auVar91._8_4_ - auVar115._8_4_ * auVar91._0_4_;
          auVar116._12_4_ = auVar115._4_4_ * fVar85 - auVar115._12_4_ * auVar91._4_4_;
          auVar86 = NEON_ext(auVar116,auVar116,4,1);
          fVar94 = -(fVar99 * auVar86._0_4_ + fVar72 * auVar86._4_4_ + fVar105 * auVar116._0_4_);
          auVar117 = ZEXT816(0xff7fffeeff7fffee);
          uVar145 = NEON_fmov(0x3f800000,4);
          do {
            uVar44 = (uint)uVar119;
            if (((uint)bVar58 != (uVar44 & 0xff)) && ((uVar44 & 0xff) != ((uint)uVar53 & 0xff))) {
              puVar45 = (undefined8 *)(lVar43 + (uVar119 & 0xff) * 0xc);
              fVar133 = *(float *)(puVar45 + 1);
              uVar65 = *puVar45;
              fVar59 = (float)uVar65;
              auVar130._0_4_ = auVar91._0_4_ * fVar59;
              fVar60 = (float)((ulong)uVar65 >> 0x20);
              auVar130._4_4_ = auVar91._4_4_ * fVar60;
              auVar130._8_4_ = auVar91._8_4_ * fVar133;
              auVar130._12_4_ = fVar85 * fVar133;
              auVar76 = NEON_ext(auVar130,auVar130,8,1);
              auVar137._0_4_ = auVar86._0_4_ * fVar59;
              auVar137._4_4_ = auVar86._4_4_ * fVar60;
              auVar137._8_4_ = auVar116._0_4_ * fVar133;
              auVar137._12_4_ = fVar94 * fVar133;
              auVar107 = NEON_ext(auVar137,auVar137,8,1);
              fVar133 = auVar130._0_4_ + auVar130._4_4_ + auVar76._0_4_ + fVar85;
              fVar60 = auVar107._0_4_ + fVar94;
              fVar133 = fVar133 * fVar133;
              fVar59 = auVar137._0_4_ + auVar137._4_4_ + fVar60;
              fVar60 = auVar137._0_4_ + auVar137._4_4_ + fVar60;
              fVar59 = fVar59 * fVar59;
              bVar6 = auVar117._0_4_ * fVar133 < (float)uVar145 * fVar59;
              iVar83 = -(uint)bVar6;
              uVar41 = uVar44;
              if (!bVar6) {
                uVar41 = (uint)uVar34;
              }
              uVar34 = (ulong)uVar41;
              uVar119 = CONCAT44(iVar83,iVar83);
              uVar145 = uVar145 ^ (uVar145 ^ (uint)fVar133) & uVar119;
              auVar117._0_8_ =
                   auVar117._0_8_ ^ (auVar117._0_8_ ^ CONCAT44(fVar60 * fVar60,fVar59)) & uVar119;
            }
            uVar119 = (ulong)(uVar44 + 1);
          } while ((int)(uVar44 + 1 & 0xff) < iVar33);
        }
      }
      else {
        uVar53 = (ulong)param_5[1];
        if (bVar51 == 2) goto LAB_02eeaf6c;
        if (bVar51 != 3) {
          uVar52 = 0;
          goto LAB_02eeb76c;
        }
        puVar45 = (undefined8 *)(lVar43 + uVar52 * 0xc);
        pfVar46 = (float *)(lVar43 + uVar53 * 0xc);
        uVar65 = *puVar45;
        fVar99 = (float)uVar65;
        fVar72 = (float)((ulong)uVar65 >> 0x20);
        fVar82 = *pfVar46;
        fVar84 = pfVar46[1];
        fVar105 = *(float *)(puVar45 + 1);
        fVar109 = pfVar46[2];
        auVar104._0_4_ = fVar82 - fVar99;
        auVar104._4_4_ = fVar84 - fVar72;
        auVar104._8_4_ = fVar109 - fVar105;
        auVar104._12_4_ = fVar109 - fVar105;
        uVar34 = (ulong)param_5[2];
      }
      pfVar46 = (float *)(lVar43 + (uVar34 & 0xff) * 0xc);
      fVar85 = pfVar46[2];
      fVar94 = *pfVar46;
      fVar133 = pfVar46[1];
      auVar118._0_4_ = fVar94 - fVar82;
      auVar118._4_4_ = fVar133 - fVar84;
      auVar118._8_4_ = fVar85 - fVar109;
      auVar118._12_4_ = fVar85 - fVar109;
      auVar86 = NEON_ext(auVar118,auVar118,4,1);
      auVar76 = NEON_ext(auVar104,auVar104,4,1);
      auVar92._0_4_ = auVar76._0_4_ * auVar118._0_4_ - auVar104._0_4_ * auVar86._0_4_;
      auVar92._4_4_ = auVar76._4_4_ * auVar118._4_4_ - auVar104._4_4_ * auVar86._4_4_;
      auVar92._8_4_ = auVar104._0_4_ * auVar118._8_4_ - auVar104._8_4_ * auVar118._0_4_;
      auVar92._12_4_ = auVar104._4_4_ * auVar118._12_4_ - auVar104._12_4_ * auVar118._4_4_;
      auVar86 = NEON_ext(auVar92,auVar92,4,1);
      fVar59 = auVar86._0_4_;
      fVar60 = auVar86._4_4_;
      auVar98._0_8_ = auVar86._0_8_;
      auVar98._8_4_ = auVar92._0_4_;
      auVar98._12_4_ = 0;
      fVar127 = fVar59 * fVar59 + fVar60 * fVar60 + auVar92._0_4_ * auVar92._0_4_;
      fVar134 = fVar59 * fVar59 + fVar60 * fVar60 + auVar92._0_4_ * auVar92._0_4_;
      uVar119 = CONCAT44(-(uint)(0.0 < fVar134),-(uint)(0.0 < fVar127)) & 0x100000001;
      if (fVar127 == 0.0) {
        fVar127 = 0.0;
        fVar134 = 0.0;
      }
      else {
        uVar65 = NEON_fmov(0x3f800000,4);
        fVar127 = (float)uVar65 / SQRT(fVar127);
        fVar134 = (float)((ulong)uVar65 >> 0x20) / SQRT(fVar134);
      }
      iVar83 = (int)uVar119;
      iVar126 = (int)(uVar119 >> 0x20);
      auVar123._0_4_ = (iVar83 << 0x1f) >> 0x1f;
      auVar123._4_4_ = (iVar126 << 0x1f) >> 0x1f;
      auVar123._8_4_ = (iVar83 << 0x1f) >> 0x1f;
      auVar123._12_4_ = (iVar126 << 0x1f) >> 0x1f;
      auVar131._0_4_ = fVar59 * fVar127;
      auVar131._4_4_ = fVar60 * fVar134;
      auVar131._8_4_ = auVar92._0_4_ * fVar127;
      auVar131._12_4_ = fVar134 * 0.0;
      auVar98 = auVar98 ^ (auVar98 ^ auVar131) & auVar123;
      auVar95 = auVar98._0_12_;
      auVar124._0_4_ = fVar61 * auVar98._0_4_;
      auVar124._4_4_ = fVar62 * auVar98._4_4_;
      auVar124._8_4_ = fVar63 * auVar98._8_4_;
      auVar124._12_4_ = fVar64 * auVar98._12_4_;
      auVar86 = NEON_ext(auVar124,auVar124,8,1);
      if (auVar124._0_4_ + auVar124._4_4_ + auVar86._0_4_ < 0.0) {
        uVar119 = uVar53;
      }
      else {
        auVar104._0_4_ = fVar94 - fVar99;
        auVar104._4_4_ = fVar133 - fVar72;
        auVar104._8_4_ = fVar85 - fVar105;
        auVar104._12_4_ = fVar85 - fVar105;
        auVar118._0_4_ = fVar82 - fVar94;
        auVar118._4_4_ = fVar84 - fVar133;
        auVar118._8_4_ = fVar109 - fVar85;
        auVar118._12_4_ = fVar109 - fVar85;
        auVar95._0_4_ = -auVar98._0_4_;
        auVar95._4_4_ = -auVar98._4_4_;
        auVar95._8_4_ = -auVar98._8_4_;
        uVar119 = uVar34;
        uVar34 = uVar53;
        fVar94 = fVar82;
        fVar133 = fVar84;
        fVar85 = fVar109;
      }
      uVar44 = (uint)uVar34;
      uVar41 = (uint)uVar119;
      auVar125._0_4_ = fVar99 - fVar94;
      auVar125._4_4_ = fVar72 - fVar133;
      auVar125._8_4_ = fVar105 - fVar85;
      auVar125._12_4_ = fVar105 - fVar85;
      fVar128 = 0.0;
      fVar135 = 0.0;
      fVar84 = auVar104._0_4_;
      fVar85 = auVar104._4_4_;
      fVar94 = auVar104._8_4_;
      fVar148 = 0.0;
      fVar149 = 0.0;
      fVar60 = auVar118._0_4_;
      fVar127 = auVar118._4_4_;
      fVar134 = auVar118._8_4_;
      fVar136 = fVar94 * fVar94 + fVar84 * fVar84 + fVar85 * fVar85;
      fVar141 = fVar94 * fVar94 + fVar84 * fVar84 + fVar85 * fVar85;
      uVar65 = NEON_fmov(0x3f800000,4);
      fVar133 = (float)uVar65;
      fVar59 = (float)((ulong)uVar65 >> 0x20);
      fVar109 = fVar128;
      fVar82 = fVar135;
      if (fVar136 != 0.0) {
        fVar109 = fVar133 / SQRT(fVar136);
        fVar82 = fVar59 / SQRT(fVar141);
      }
      fVar143 = fVar134 * fVar134 + fVar60 * fVar60 + fVar127 * fVar127;
      fVar146 = fVar134 * fVar134 + fVar60 * fVar60 + fVar127 * fVar127;
      if (fVar143 != 0.0) {
        fVar148 = fVar133 / SQRT(fVar143);
        fVar149 = fVar59 / SQRT(fVar146);
      }
      fVar150 = auVar125._8_4_ * auVar125._8_4_ +
                auVar125._0_4_ * auVar125._0_4_ + auVar125._4_4_ * auVar125._4_4_;
      fVar157 = auVar125._8_4_ * auVar125._8_4_ +
                auVar125._0_4_ * auVar125._0_4_ + auVar125._4_4_ * auVar125._4_4_;
      if (fVar150 != 0.0) {
        fVar128 = fVar133 / SQRT(fVar150);
        fVar135 = fVar59 / SQRT(fVar157);
      }
      if (iVar33 < 1) {
        fVar109 = -3.40282e+38;
        uVar47 = 0;
        bVar51 = 0xff;
      }
      else {
        puVar45 = (undefined8 *)(lVar43 + (uVar119 & 0xff) * 0xc);
        uVar65 = *puVar45;
        uVar53 = CONCAT44(-(uint)(0.0 < fVar141),-(uint)(0.0 < fVar136)) & 0x100000001;
        uVar145 = CONCAT44(-(uint)(0.0 < fVar146),-(uint)(0.0 < fVar143)) & 0x100000001;
        uVar152 = CONCAT44(-(uint)(0.0 < fVar157),-(uint)(0.0 < fVar150)) & 0x100000001;
        bVar49 = 0;
        iVar151 = (int)uVar152;
        iVar158 = (int)(uVar152 >> 0x20);
        iVar83 = (int)uVar53;
        iVar126 = (int)(uVar53 >> 0x20);
        iVar144 = (int)uVar145;
        iVar147 = (int)(uVar145 >> 0x20);
        auVar138._0_4_ = (iVar83 << 0x1f) >> 0x1f;
        auVar138._4_4_ = (iVar126 << 0x1f) >> 0x1f;
        auVar138._8_4_ = (iVar83 << 0x1f) >> 0x1f;
        auVar138._12_4_ = (iVar126 << 0x1f) >> 0x1f;
        fVar61 = fVar61 * 0.01;
        fVar62 = fVar62 * 0.01;
        fVar63 = fVar63 * 0.01;
        fVar64 = fVar64 * 0.01;
        uVar47 = 0;
        fVar136 = *(float *)(puVar45 + 1);
        auVar142._0_4_ = fVar84 * fVar109;
        auVar142._4_4_ = fVar85 * fVar82;
        auVar142._8_4_ = fVar94 * fVar109;
        auVar142._12_4_ = auVar104._12_4_ * fVar82;
        puVar45 = (undefined8 *)(lVar43 + (uVar34 & 0xff) * 0xc);
        auVar132._0_4_ = auVar125._0_4_ * fVar128;
        auVar132._4_4_ = auVar125._4_4_ * fVar135;
        auVar132._8_4_ = auVar125._8_4_ * fVar128;
        auVar132._12_4_ = auVar125._12_4_ * fVar135;
        auVar104 = auVar104 ^ (auVar104 ^ auVar142) & auVar138;
        auVar139._0_4_ = (iVar144 << 0x1f) >> 0x1f;
        auVar139._4_4_ = (iVar147 << 0x1f) >> 0x1f;
        auVar139._8_4_ = (iVar144 << 0x1f) >> 0x1f;
        auVar139._12_4_ = (iVar147 << 0x1f) >> 0x1f;
        fVar82 = *(float *)(puVar45 + 1);
        uVar73 = *puVar45;
        auVar17._4_4_ = fVar127 * fVar149;
        auVar17._0_4_ = fVar60 * fVar148;
        auVar17._8_4_ = fVar134 * fVar148;
        auVar17._12_4_ = auVar118._12_4_ * fVar149;
        auVar118 = auVar118 ^ (auVar118 ^ auVar17) & auVar139;
        auVar140._0_4_ = (iVar151 << 0x1f) >> 0x1f;
        auVar140._4_4_ = (iVar158 << 0x1f) >> 0x1f;
        auVar140._8_4_ = (iVar151 << 0x1f) >> 0x1f;
        auVar140._12_4_ = (iVar158 << 0x1f) >> 0x1f;
        auVar125 = auVar125 ^ (auVar125 ^ auVar132) & auVar140;
        auVar86 = NEON_ext(auVar104,auVar104,4,1);
        auVar76 = NEON_ext(auVar118,auVar118,4,1);
        auVar107 = NEON_ext(auVar125,auVar125,4,1);
        fVar109 = -3.40282e+38;
        bVar50 = 0xff;
        do {
          puVar45 = (undefined8 *)(lVar43 + (ulong)bVar49 * 0xc);
          fVar84 = *(float *)(puVar45 + 1);
          uVar159 = *puVar45;
          fVar127 = (float)uVar159;
          fVar134 = (float)((ulong)uVar159 >> 0x20);
          auVar161._0_4_ = fVar61 + (fVar127 - fVar99);
          auVar161._4_4_ = fVar62 + (fVar134 - fVar72);
          auVar161._8_4_ = fVar63 + (fVar84 - fVar105);
          auVar161._12_4_ = fVar64 + (fVar84 - fVar105);
          auVar111 = NEON_ext(auVar161,auVar161,4,1);
          fVar85 = auVar95._0_4_;
          fVar94 = auVar95._4_4_;
          fVar60 = auVar95._8_4_;
          auVar162._0_4_ = auVar104._0_4_ * auVar111._0_4_ - auVar86._0_4_ * auVar161._0_4_;
          auVar162._4_4_ = auVar104._4_4_ * auVar111._4_4_ - auVar86._4_4_ * auVar161._4_4_;
          auVar162._8_4_ = auVar104._8_4_ * auVar161._0_4_ - auVar104._0_4_ * auVar161._8_4_;
          auVar162._12_4_ = auVar104._12_4_ * auVar161._4_4_ - auVar104._4_4_ * auVar161._12_4_;
          auVar111 = NEON_ext(auVar162,auVar162,4,1);
          fVar128 = auVar111._0_4_;
          fVar135 = auVar111._4_4_;
          auVar163._8_4_ = auVar162._0_4_;
          auVar163._0_8_ = auVar111._0_8_;
          auVar163._12_4_ = 0;
          fVar149 = fVar128 * fVar128 + fVar135 * fVar135 + auVar162._0_4_ * auVar162._0_4_;
          fVar143 = fVar128 * fVar128 + fVar135 * fVar135 + auVar162._0_4_ * auVar162._0_4_;
          uVar53 = CONCAT44(-(uint)(0.0 < fVar143),-(uint)(0.0 < fVar149)) & 0x100000001;
          fVar141 = 0.0;
          fVar148 = 0.0;
          if (fVar149 != 0.0) {
            fVar141 = fVar133 / SQRT(fVar149);
            fVar148 = fVar59 / SQRT(fVar143);
          }
          iVar83 = (int)uVar53;
          iVar126 = (int)(uVar53 >> 0x20);
          bVar30 = ABS(fVar85 * auVar161._0_4_ + fVar94 * auVar161._4_4_ + fVar60 * auVar161._8_4_)
                   < 0.06666667;
          auVar165._0_4_ = fVar128 * fVar141;
          auVar165._4_4_ = fVar135 * fVar148;
          auVar165._8_4_ = auVar162._0_4_ * fVar141;
          auVar165._12_4_ = fVar148 * 0.0;
          fVar135 = fVar61 + (fVar127 - (float)uVar65);
          fVar141 = fVar62 + (fVar134 - (float)((ulong)uVar65 >> 0x20));
          fVar148 = fVar63 + (fVar84 - fVar136);
          fVar149 = fVar64 + (fVar84 - fVar136);
          auVar168._0_4_ = (iVar83 << 0x1f) >> 0x1f;
          auVar168._4_4_ = (iVar126 << 0x1f) >> 0x1f;
          auVar168._8_4_ = (iVar83 << 0x1f) >> 0x1f;
          auVar168._12_4_ = (iVar126 << 0x1f) >> 0x1f;
          auVar163 = auVar163 ^ (auVar163 ^ auVar165) & auVar168;
          auVar22._4_4_ = fVar141;
          auVar22._0_4_ = fVar135;
          auVar22._8_4_ = fVar148;
          auVar22._12_4_ = fVar149;
          auVar23._4_4_ = fVar141;
          auVar23._0_4_ = fVar135;
          auVar23._8_4_ = fVar148;
          auVar23._12_4_ = fVar149;
          auVar111 = NEON_ext(auVar22,auVar23,4,1);
          fVar128 = fVar85 * auVar163._0_4_ + fVar94 * auVar163._4_4_ + fVar60 * auVar163._8_4_;
          bVar6 = fVar109 < fVar128;
          if (bVar30 && bVar6) {
            uVar47 = 1;
          }
          fVar128 = (float)((uint)fVar128 ^
                           ((uint)fVar128 ^ (uint)fVar109) & ~-(uint)(bVar30 && bVar6));
          auVar155._0_4_ = auVar118._0_4_ * auVar111._0_4_ - auVar76._0_4_ * fVar135;
          auVar155._4_4_ = auVar118._4_4_ * auVar111._4_4_ - auVar76._4_4_ * fVar141;
          auVar155._8_4_ = auVar118._8_4_ * fVar135 - auVar118._0_4_ * fVar148;
          auVar155._12_4_ = auVar118._12_4_ * fVar141 - auVar118._4_4_ * fVar149;
          auVar111 = NEON_ext(auVar155,auVar155,4,1);
          fVar109 = auVar111._0_4_;
          fVar149 = auVar111._4_4_;
          auVar156._8_4_ = auVar155._0_4_;
          auVar156._0_8_ = auVar111._0_8_;
          auVar156._12_4_ = 0;
          fVar150 = auVar155._0_4_ * auVar155._0_4_ + fVar109 * fVar109 + fVar149 * fVar149;
          fVar157 = auVar155._0_4_ * auVar155._0_4_ + fVar109 * fVar109 + fVar149 * fVar149;
          fVar143 = 0.0;
          fVar146 = 0.0;
          uVar53 = CONCAT44(-(uint)(0.0 < fVar157),-(uint)(0.0 < fVar150)) & 0x100000001;
          if (fVar150 != 0.0) {
            fVar143 = fVar133 / SQRT(fVar150);
            fVar146 = fVar59 / SQRT(fVar157);
          }
          iVar83 = (int)uVar53;
          iVar126 = (int)(uVar53 >> 0x20);
          auVar169._0_4_ = (iVar83 << 0x1f) >> 0x1f;
          auVar169._4_4_ = (iVar126 << 0x1f) >> 0x1f;
          auVar169._8_4_ = (iVar83 << 0x1f) >> 0x1f;
          auVar169._12_4_ = (iVar126 << 0x1f) >> 0x1f;
          auVar18._4_4_ = fVar149 * fVar146;
          auVar18._0_4_ = fVar109 * fVar143;
          auVar18._8_4_ = auVar155._0_4_ * fVar143;
          auVar18._12_4_ = fVar146 * 0.0;
          auVar156 = auVar156 ^ (auVar156 ^ auVar18) & auVar169;
          fVar149 = fVar61 + (fVar127 - (float)uVar73);
          fVar143 = fVar62 + (fVar134 - (float)((ulong)uVar73 >> 0x20));
          fVar146 = fVar63 + (fVar84 - fVar82);
          fVar84 = fVar64 + (fVar84 - fVar82);
          fVar109 = fVar85 * auVar156._0_4_ + fVar94 * auVar156._4_4_ + fVar60 * auVar156._8_4_;
          bVar7 = fVar128 < fVar109;
          bVar31 = ABS(fVar60 * fVar148 + fVar85 * fVar135 + fVar94 * fVar141) < 0.06666667;
          auVar19._4_4_ = fVar143;
          auVar19._0_4_ = fVar149;
          auVar19._8_4_ = fVar146;
          auVar19._12_4_ = fVar84;
          auVar20._4_4_ = fVar143;
          auVar20._0_4_ = fVar149;
          auVar20._8_4_ = fVar146;
          auVar20._12_4_ = fVar84;
          auVar111 = NEON_ext(auVar19,auVar20,4,1);
          fVar128 = (float)((uint)fVar128 ^
                           ((uint)fVar128 ^ (uint)fVar109) & -(uint)(bVar31 && bVar7));
          auVar166._0_4_ = auVar125._0_4_ * auVar111._0_4_ - auVar107._0_4_ * fVar149;
          auVar166._4_4_ = auVar125._4_4_ * auVar111._4_4_ - auVar107._4_4_ * fVar143;
          auVar166._8_4_ = auVar125._8_4_ * fVar149 - auVar125._0_4_ * fVar146;
          auVar166._12_4_ = auVar125._12_4_ * fVar143 - auVar125._4_4_ * fVar84;
          auVar111 = NEON_ext(auVar166,auVar166,4,1);
          fVar127 = auVar111._0_4_;
          fVar134 = auVar111._4_4_;
          auVar170._0_8_ = auVar111._0_8_;
          auVar170._8_4_ = auVar166._0_4_;
          auVar170._12_4_ = 0;
          fVar109 = auVar166._0_4_ * auVar166._0_4_ + fVar127 * fVar127 + fVar134 * fVar134;
          fVar84 = auVar166._0_4_ * auVar166._0_4_ + fVar127 * fVar127 + fVar134 * fVar134;
          uVar56 = 2;
          if (!bVar31 || !bVar7) {
            uVar56 = uVar47;
          }
          uVar53 = CONCAT44(-(uint)(0.0 < fVar84),-(uint)(0.0 < fVar109)) & 0x100000001;
          iVar83 = (int)uVar53;
          iVar126 = (int)(uVar53 >> 0x20);
          fVar135 = 0.0;
          fVar141 = 0.0;
          if (fVar109 != 0.0) {
            fVar135 = fVar133 / SQRT(fVar109);
            fVar141 = fVar59 / SQRT(fVar84);
          }
          auVar167._0_4_ = fVar127 * fVar135;
          auVar167._4_4_ = fVar134 * fVar141;
          auVar167._8_4_ = auVar166._0_4_ * fVar135;
          auVar167._12_4_ = fVar141 * 0.0;
          auVar21._4_4_ = (iVar126 << 0x1f) >> 0x1f;
          auVar21._0_4_ = (iVar83 << 0x1f) >> 0x1f;
          auVar21._8_4_ = (iVar83 << 0x1f) >> 0x1f;
          auVar21._12_4_ = (iVar126 << 0x1f) >> 0x1f;
          auVar167 = auVar167 ^ (auVar167 ^ auVar170) & ~auVar21;
          bVar32 = ABS(fVar60 * fVar146 + fVar85 * fVar149 + fVar94 * fVar143) < 0.06666667;
          fVar109 = fVar85 * auVar167._0_4_ + fVar94 * auVar167._4_4_ + fVar60 * auVar167._8_4_;
          bVar8 = fVar128 < fVar109;
          uVar47 = 3;
          if (!bVar32 || !bVar8) {
            uVar47 = uVar56;
          }
          bVar51 = bVar49;
          if (((!bVar30 || !bVar6) && (!bVar31 || !bVar7)) && (!bVar32 || !bVar8)) {
            bVar51 = bVar50;
          }
          bVar49 = bVar49 + 1;
          fVar109 = (float)((uint)fVar128 ^
                           ((uint)fVar128 ^ (uint)fVar109) & -(uint)(bVar32 && bVar8));
          bVar50 = bVar51;
        } while ((int)(uint)bVar49 < iVar33);
      }
      local_450 = (float)CONCAT13((char)uVar34,CONCAT12((char)uVar34,CONCAT11((char)uVar119,bVar58))
                                 );
      uVar56 = uVar44;
      if (0.9 < fVar109) {
        if (uVar47 < 3) {
          iVar33 = 3;
          if (uVar47 != 2) {
            lVar43 = 0;
            do {
              *(undefined1 *)((long)&local_450 + lVar43 + 3) =
                   *(undefined1 *)((long)&local_450 + (ulong)((int)lVar43 + 2));
              iVar33 = (int)(lVar43 + -2);
              *(undefined1 *)((long)&local_450 + lVar43 + 2) =
                   *(undefined1 *)((long)&local_450 + (ulong)((int)lVar43 + 1));
              lVar43 = lVar43 + -2;
            } while (-(3 - uVar47 & 0xfffffffe) != iVar33);
            iVar33 = iVar33 + 3;
          }
          if ((3 - uVar47 & 1) != 0) {
            *(undefined1 *)((long)&local_450 + (long)iVar33) =
                 *(undefined1 *)((long)&local_450 + (ulong)(iVar33 - 1));
          }
        }
        *(byte *)((long)&local_450 + (ulong)uVar47) = bVar51;
        uVar52 = (ulong)(byte)local_450;
        uVar41 = (uint)local_450 >> 8 & 0xff;
        uVar44 = (uint)local_450 >> 0x10 & 0xff;
        uVar56 = (uint)local_450 >> 0x18;
      }
      uVar38 = (uint)uVar52;
      uVar47 = uVar41;
      if (uVar38 <= (uVar41 & 0xff)) {
        uVar47 = uVar38;
      }
      uVar42 = uVar44;
      if ((uVar47 & 0xff) <= (uVar44 & 0xff)) {
        uVar42 = uVar47;
      }
      uVar40 = 2;
      if ((uVar47 & 0xff) <= (uVar44 & 0xff)) {
        uVar40 = (uint)((uVar41 & 0xff) < uVar38);
      }
      uVar44 = 3;
      if ((uVar42 & 0xff) <= (uVar56 & 0xff)) {
        uVar44 = uVar40;
      }
      bVar51 = *(byte *)((ulong)&local_450 | (ulong)uVar44);
      uVar56 = (uint)bVar51;
      bVar58 = *(byte *)((ulong)&local_450 | (ulong)(uVar44 + 1) & 3);
      uVar41 = (uint)bVar58;
      bVar49 = *(byte *)((ulong)&local_450 | (ulong)(uVar44 - 1) & 3);
      uVar38 = (uint)bVar49;
      bVar50 = *(byte *)((ulong)&local_450 | (ulong)(uVar44 + 2) & 3);
      uVar44 = (uint)bVar50;
      uVar42 = (uint)bVar58;
      uVar47 = (uint)bVar51;
      if ((((bVar49 == 0xff) && (uVar38 = (uint)bVar50, bVar50 == 0xff)) &&
          (uVar38 = uVar42, bVar58 == 0xff)) && (uVar38 = uVar47, bVar51 == 0xff)) {
        uVar41 = 0xff;
        uVar44 = 0xff;
      }
      else {
        if (bVar50 == 0xff) {
          uVar44 = uVar38;
          if (uVar47 != 0xff) {
            uVar44 = uVar47;
          }
          if (uVar42 != 0xff) {
            uVar44 = uVar42;
          }
        }
        if ((uVar42 == 0xff) && (uVar41 = uVar38, uVar47 != 0xff)) {
          uVar41 = (uint)bVar51;
        }
        uVar47 = uVar38;
        if (bVar51 == 0xff) {
          uVar56 = uVar38;
        }
      }
      uVar52 = (ulong)(uVar41 << 8 | uVar44 << 0x10 | uVar47 << 0x18 | uVar56);
    }
    else {
      lVar43 = 0;
      if (*param_1 != 0) {
        lVar43 = (long)*param_1 + (long)param_1;
      }
      puVar45 = (undefined8 *)(lVar43 + (ulong)(uVar41 >> 0x18) * 0xc);
      uVar65 = *puVar45;
      fVar61 = (float)uVar65;
      fVar62 = (float)((ulong)uVar65 >> 0x20);
      fVar63 = *(float *)(puVar45 + 1);
      puVar48 = (undefined8 *)(lVar43 + (ulong)(uVar41 >> 0x10 & 0xff) * 0xc);
      uVar65 = *puVar48;
      puVar45 = (undefined8 *)(lVar43 + (ulong)(uVar41 >> 8 & 0xff) * 0xc);
      uVar73 = *puVar45;
      fVar72 = (float)uVar73;
      fVar84 = fVar72 - fVar61;
      fVar82 = (float)((ulong)uVar73 >> 0x20);
      fVar85 = fVar82 - fVar62;
      fVar64 = *(float *)(puVar45 + 1);
      puVar45 = (undefined8 *)(lVar43 + (ulong)(uVar41 & 0xff) * 0xc);
      uVar73 = *puVar45;
      fVar99 = *(float *)(puVar45 + 1) - *(float *)(puVar48 + 1);
      fVar105 = (float)uVar73 - (float)uVar65;
      fVar109 = (float)((ulong)uVar73 >> 0x20) - (float)((ulong)uVar65 >> 0x20);
      uVar65 = NEON_ext(CONCAT44(fVar85,fVar84),(ulong)(uint)(fVar64 - fVar63),4,1);
      uVar73 = NEON_ext(CONCAT44(fVar109,fVar105),(ulong)(uint)fVar99,4,1);
      auVar86._0_4_ = (fVar72 - fVar61) * (float)uVar73 - fVar105 * (float)uVar65;
      auVar86._4_4_ =
           (fVar82 - fVar62) * (float)((ulong)uVar73 >> 0x20) -
           fVar109 * (float)((ulong)uVar65 >> 0x20);
      auVar86._8_4_ = (fVar64 - fVar63) * fVar105 - fVar84 * fVar99;
      auVar86._12_4_ = (fVar64 - fVar63) * fVar109 - fVar85 * fVar99;
      auVar76 = NEON_ext(auVar86,auVar86,4,1);
      fVar64 = auVar76._0_4_;
      fVar105 = auVar76._4_4_;
      fVar109 = fVar64 * fVar64 + fVar105 * fVar105 + auVar86._0_4_ * auVar86._0_4_;
      fVar99 = fVar64 * fVar64 + fVar105 * fVar105 + auVar86._0_4_ * auVar86._0_4_;
      auVar76._8_4_ = auVar86._0_4_;
      auVar76._12_4_ = 0;
      uVar52 = CONCAT44(-(uint)(0.0 < fVar99),-(uint)(0.0 < fVar109)) & 0x100000001;
      if (fVar109 == 0.0) {
        fVar109 = 0.0;
        fVar99 = 0.0;
      }
      else {
        uVar65 = NEON_fmov(0x3f800000,4);
        fVar109 = (float)uVar65 / SQRT(fVar109);
        fVar99 = (float)((ulong)uVar65 >> 0x20) / SQRT(fVar99);
      }
      iVar33 = (int)uVar52;
      iVar83 = (int)(uVar52 >> 0x20);
      auVar113._0_4_ = (iVar33 << 0x1f) >> 0x1f;
      auVar113._4_4_ = (iVar83 << 0x1f) >> 0x1f;
      auVar113._8_4_ = (iVar33 << 0x1f) >> 0x1f;
      auVar113._12_4_ = (iVar83 << 0x1f) >> 0x1f;
      auVar154._0_4_ = fVar64 * fVar109;
      auVar154._4_4_ = fVar105 * fVar99;
      auVar154._8_4_ = auVar86._0_4_ * fVar109;
      auVar154._12_4_ = fVar99 * 0.0;
      auVar76 = auVar76 ^ (auVar76 ^ auVar154) & auVar113;
      fVar64 = auVar76._0_4_ * -*param_3;
      fVar105 = auVar76._4_4_ * -param_3[1];
      fVar109 = auVar76._8_4_ * -param_3[2];
      fVar61 = -(fVar61 * auVar76._0_4_ + fVar62 * auVar76._4_4_ + fVar63 * auVar76._8_4_) *
               -param_3[3];
      auVar107._4_4_ = fVar105;
      auVar107._0_4_ = fVar64;
      auVar107._8_4_ = fVar109;
      auVar107._12_4_ = fVar61;
      auVar111._4_4_ = fVar105;
      auVar111._0_4_ = fVar64;
      auVar111._8_4_ = fVar109;
      auVar111._12_4_ = fVar61;
      auVar86 = NEON_ext(auVar107,auVar111,8,1);
      if (fVar64 + fVar105 + auVar86._0_4_ <= 0.99) goto LAB_02eeadc8;
      FUN_02eeb8dc(param_1,param_7 & 0xffffffff,auStack_50,&local_450);
      fVar63 = (float)uStack_438;
      fVar64 = (float)((ulong)uStack_438 >> 0x20);
      fVar61 = (float)uStack_440;
      fVar62 = (float)((ulong)uStack_440 >> 0x20);
      auVar102._0_4_ = fVar61 - local_450;
      auVar102._4_4_ = fVar62 - fStack_44c;
      auVar102._8_4_ = fVar63 - fStack_448;
      auVar102._12_4_ = fVar64 - fStack_444;
      auVar77._0_4_ = local_420 - local_450;
      auVar77._4_4_ = fStack_41c - fStack_44c;
      auVar77._8_4_ = fStack_418 - fStack_448;
      auVar77._12_4_ = fStack_414 - fStack_444;
      auVar107 = NEON_ext(auVar77,auVar77,4,1);
      auVar76 = NEON_ext(auVar102,auVar102,4,1);
      auVar160._0_4_ = ABS(fVar61 - local_450);
      auVar160._4_4_ = ABS(fVar62 - fStack_44c);
      auVar160._8_4_ = ABS(fVar63 - fStack_448);
      auVar160._12_4_ = ABS(fVar64 - fStack_444);
      auVar111 = NEON_ext(auVar160,auVar160,8,1);
      fVar105 = *param_4 - local_450;
      fVar109 = param_4[1] - fStack_44c;
      fVar99 = param_4[2] - fStack_448;
      fVar82 = auVar102._0_4_ * auVar107._0_4_ - auVar77._0_4_ * auVar76._0_4_;
      auVar120._0_8_ =
           CONCAT44(auVar102._4_4_ * auVar107._4_4_ - auVar77._4_4_ * auVar76._4_4_,fVar82);
      auVar120._8_4_ = auVar102._8_4_ * auVar77._0_4_ - auVar77._8_4_ * auVar102._0_4_;
      auVar120._12_4_ = auVar102._12_4_ * auVar77._4_4_ - auVar77._12_4_ * auVar102._4_4_;
      auVar153._0_4_ = ABS(local_420 - local_450);
      auVar153._4_4_ = ABS(fStack_41c - fStack_44c);
      auVar153._8_4_ = ABS(fStack_418 - fStack_448);
      auVar153._12_4_ = ABS(fStack_414 - fStack_444);
      auVar86 = NEON_ext(auVar120,auVar120,4,1);
      uVar65 = NEON_ext(auVar86._0_8_,auVar120._0_8_,4,1);
      fVar133 = auVar86._0_4_;
      fVar59 = auVar86._4_4_;
      auVar113 = NEON_ext(auVar153,auVar153,8,1);
      fVar94 = (float)((ulong)uVar65 >> 0x20);
      auVar164._0_4_ = ABS(fVar133);
      auVar164._4_4_ = ABS(fVar59);
      auVar164._8_4_ = ABS(fVar82);
      auVar164._12_4_ = 0;
      auVar129._0_4_ = auVar77._0_4_ * (float)uVar65 - auVar107._0_4_ * fVar133;
      auVar129._4_4_ = auVar77._4_4_ * fVar94 - auVar107._4_4_ * fVar59;
      auVar129._8_4_ = auVar77._8_4_ * fVar133 - auVar77._0_4_ * fVar82;
      auVar129._12_4_ = auVar77._12_4_ * fVar59 - auVar77._4_4_ * 0.0;
      auVar86 = NEON_ext(auVar129,auVar129,4,1);
      auVar107 = NEON_ext(auVar164,auVar164,8,1);
      fVar84 = auVar102._0_4_ * auVar86._0_4_;
      fVar85 = auVar102._4_4_ * auVar86._4_4_;
      fVar72 = fVar84 + fVar85 + auVar102._8_4_ * auVar129._0_4_;
      if (ABS(fVar72) <=
          (auVar111._0_4_ + auVar160._0_4_ + auVar160._4_4_) * 1.1920929e-07 *
          (auVar113._0_4_ + auVar153._0_4_ + auVar153._4_4_) *
          (auVar164._0_4_ + auVar164._4_4_ + auVar107._0_4_)) {
        fVar82 = 0.0;
        fVar84 = 0.0;
        fVar85 = 0.0;
        fVar94 = 0.0;
        fVar72 = 0.0;
        fVar133 = 0.0;
      }
      else {
        uVar73 = NEON_fmov(0x3f800000,4);
        auVar103._0_4_ = auVar76._0_4_ * fVar133 - auVar102._0_4_ * (float)uVar65;
        auVar103._4_4_ = auVar76._4_4_ * fVar59 - auVar102._4_4_ * fVar94;
        auVar103._8_4_ = auVar102._0_4_ * fVar82 - auVar102._8_4_ * fVar133;
        auVar103._12_4_ = auVar102._4_4_ * 0.0 - auVar102._12_4_ * fVar59;
        auVar76 = NEON_ext(auVar103,auVar103,4,1);
        fVar72 = (float)uVar73 / fVar72;
        fVar133 = (float)((ulong)uVar73 >> 0x20) /
                  (fVar84 + fVar85 + auVar102._8_4_ * auVar129._0_4_);
        fVar82 = auVar86._0_4_ * fVar72;
        fVar84 = auVar76._0_4_ * fVar133;
        fVar85 = auVar86._4_4_ * fVar72;
        fVar94 = auVar76._4_4_ * fVar133;
        fVar72 = auVar129._0_4_ * fVar72;
        fVar133 = auVar103._0_4_ * fVar133;
      }
      fVar72 = fVar82 * fVar105 + fVar85 * fVar109 + fVar72 * fVar99;
      fVar105 = fVar84 * fVar105 + fVar94 * fVar109 + fVar133 * fVar99;
      if (((fVar72 < -0.001) || (fVar105 < -0.001)) || (1.001 < fVar72 + fVar105)) {
        auVar97._0_4_ = fVar61 - local_430;
        auVar97._4_4_ = fVar62 - fStack_42c;
        auVar97._8_4_ = fVar63 - fStack_428;
        auVar97._12_4_ = fVar64 - fStack_424;
        auVar121._0_4_ = local_420 - local_430;
        auVar121._4_4_ = fStack_41c - fStack_42c;
        auVar121._8_4_ = fStack_418 - fStack_428;
        auVar121._12_4_ = fStack_414 - fStack_424;
        auVar76 = NEON_ext(auVar97,auVar97,4,1);
        auVar107 = NEON_ext(auVar121,auVar121,4,1);
        fVar61 = ABS(fVar61 - local_430);
        fVar62 = ABS(fVar62 - fStack_42c);
        auVar13._4_4_ = fVar62;
        auVar13._0_4_ = fVar61;
        auVar13._8_4_ = ABS(fVar63 - fStack_428);
        auVar13._12_4_ = ABS(fVar64 - fStack_424);
        auVar14._4_4_ = fVar62;
        auVar14._0_4_ = fVar61;
        auVar14._8_4_ = ABS(fVar63 - fStack_428);
        auVar14._12_4_ = ABS(fVar64 - fStack_424);
        auVar111 = NEON_ext(auVar13,auVar14,8,1);
        auVar69._0_4_ = ABS(local_420 - local_430);
        auVar69._4_4_ = ABS(fStack_41c - fStack_42c);
        auVar69._8_4_ = ABS(fStack_418 - fStack_428);
        auVar69._12_4_ = ABS(fStack_414 - fStack_424);
        auVar113 = NEON_ext(auVar69,auVar69,8,1);
        local_430 = *param_4 - local_430;
        fStack_42c = param_4[1] - fStack_42c;
        fStack_428 = param_4[2] - fStack_428;
        fVar64 = auVar97._0_4_ * auVar107._0_4_ - auVar121._0_4_ * auVar76._0_4_;
        auVar114._0_8_ =
             CONCAT44(auVar97._4_4_ * auVar107._4_4_ - auVar121._4_4_ * auVar76._4_4_,fVar64);
        auVar114._8_4_ = auVar97._8_4_ * auVar121._0_4_ - auVar121._8_4_ * auVar97._0_4_;
        auVar114._12_4_ = auVar97._12_4_ * auVar121._4_4_ - auVar121._12_4_ * auVar97._4_4_;
        auVar86 = NEON_ext(auVar114,auVar114,4,1);
        uVar65 = NEON_ext(auVar86._0_8_,auVar114._0_8_,4,1);
        fVar72 = auVar86._0_4_;
        auVar78._0_4_ = ABS(fVar72);
        fVar82 = auVar86._4_4_;
        auVar78._4_4_ = ABS(fVar82);
        auVar78._8_4_ = ABS(fVar64);
        auVar78._12_4_ = 0;
        fVar99 = (float)((ulong)uVar65 >> 0x20);
        auVar154 = NEON_ext(auVar78,auVar78,8,1);
        auVar122._0_4_ = auVar121._0_4_ * (float)uVar65 - auVar107._0_4_ * fVar72;
        auVar122._4_4_ = auVar121._4_4_ * fVar99 - auVar107._4_4_ * fVar82;
        auVar122._8_4_ = auVar121._8_4_ * fVar72 - auVar121._0_4_ * fVar64;
        auVar122._12_4_ = auVar121._12_4_ * fVar82 - auVar121._4_4_ * 0.0;
        auVar86 = NEON_ext(auVar122,auVar122,4,1);
        fVar105 = auVar97._0_4_ * auVar86._0_4_;
        fVar109 = auVar97._4_4_ * auVar86._4_4_;
        fVar63 = auVar97._8_4_ * auVar122._0_4_ + fVar105 + fVar109;
        if (ABS(fVar63) <=
            (auVar111._0_4_ + fVar61 + fVar62) * 1.1920929e-07 *
            (auVar113._0_4_ + auVar69._0_4_ + auVar69._4_4_) *
            (auVar154._0_4_ + auVar78._0_4_ + auVar78._4_4_)) {
          fVar62 = 0.0;
          fVar64 = 0.0;
          fVar105 = 0.0;
          fVar109 = 0.0;
          fVar63 = 0.0;
          fVar61 = 0.0;
        }
        else {
          uVar73 = NEON_fmov(0x3f800000,4);
          fVar63 = (float)uVar73 / fVar63;
          fVar84 = (float)((ulong)uVar73 >> 0x20) /
                   (auVar97._8_4_ * auVar122._0_4_ + fVar105 + fVar109);
          fVar61 = auVar76._0_4_ * fVar72 - auVar97._0_4_ * (float)uVar65;
          fVar62 = auVar76._4_4_ * fVar82 - auVar97._4_4_ * fVar99;
          fVar64 = auVar97._0_4_ * fVar64 - auVar97._8_4_ * fVar72;
          fVar105 = auVar97._4_4_ * 0.0 - auVar97._12_4_ * fVar82;
          auVar15._4_4_ = fVar62;
          auVar15._0_4_ = fVar61;
          auVar15._8_4_ = fVar64;
          auVar15._12_4_ = fVar105;
          auVar16._4_4_ = fVar62;
          auVar16._0_4_ = fVar61;
          auVar16._8_4_ = fVar64;
          auVar16._12_4_ = fVar105;
          auVar76 = NEON_ext(auVar15,auVar16,4,1);
          fVar62 = auVar86._0_4_ * fVar63;
          fVar64 = auVar76._0_4_ * fVar84;
          fVar105 = auVar86._4_4_ * fVar63;
          fVar109 = auVar76._4_4_ * fVar84;
          fVar63 = auVar122._0_4_ * fVar63;
          fVar61 = fVar61 * fVar84;
        }
        fVar62 = fVar62 * local_430 + fVar105 * fStack_42c + fVar63 * fStack_428;
        fVar61 = fVar64 * local_430 + fVar109 * fStack_42c + fVar61 * fStack_428;
        if (((fVar62 < -0.001) || (fVar61 < -0.001)) || (1.001 < fVar62 + fVar61)) {
          param_6 = param_6 & 0xffffffff;
          goto LAB_02eeadc8;
        }
      }
      uVar52 = param_7 & 0xffffffff;
    }
LAB_02eeb76c:
    uVar44 = (uint)uVar52;
    if (param_1[5] == 0) {
      lVar43 = 0;
      if (*param_1 != 0) {
        lVar43 = (long)*param_1 + (long)param_1;
      }
      puVar45 = (undefined8 *)(lVar43 + (ulong)(uVar44 >> 0x18) * 0xc);
      uVar65 = *puVar45;
      fVar61 = (float)uVar65;
      fVar62 = (float)((ulong)uVar65 >> 0x20);
      fVar63 = *(float *)(puVar45 + 1);
      puVar48 = (undefined8 *)(lVar43 + (ulong)(uVar44 >> 0x10 & 0xff) * 0xc);
      uVar65 = *puVar48;
      puVar45 = (undefined8 *)(lVar43 + (ulong)(uVar44 >> 8 & 0xff) * 0xc);
      uVar73 = *puVar45;
      fVar72 = (float)uVar73;
      fVar84 = fVar72 - fVar61;
      fVar82 = (float)((ulong)uVar73 >> 0x20);
      fVar85 = fVar82 - fVar62;
      fVar64 = *(float *)(puVar45 + 1);
      puVar45 = (undefined8 *)(lVar43 + (ulong)(uVar44 & 0xff) * 0xc);
      uVar73 = *puVar45;
      fVar99 = *(float *)(puVar45 + 1) - *(float *)(puVar48 + 1);
      fVar105 = (float)uVar73 - (float)uVar65;
      fVar109 = (float)((ulong)uVar73 >> 0x20) - (float)((ulong)uVar65 >> 0x20);
      uVar65 = NEON_ext(CONCAT44(fVar85,fVar84),(ulong)(uint)(fVar64 - fVar63),4,1);
      uVar73 = NEON_ext(CONCAT44(fVar109,fVar105),(ulong)(uint)fVar99,4,1);
      auVar80._0_4_ = (fVar72 - fVar61) * (float)uVar73 - fVar105 * (float)uVar65;
      auVar80._4_4_ =
           (fVar82 - fVar62) * (float)((ulong)uVar73 >> 0x20) -
           fVar109 * (float)((ulong)uVar65 >> 0x20);
      auVar80._8_4_ = (fVar64 - fVar63) * fVar105 - fVar84 * fVar99;
      auVar80._12_4_ = (fVar64 - fVar63) * fVar109 - fVar85 * fVar99;
      auVar86 = NEON_ext(auVar80,auVar80,4,1);
      fVar64 = auVar86._0_4_;
      fVar109 = auVar86._4_4_;
      auVar70._8_4_ = auVar80._0_4_;
      auVar70._0_8_ = auVar86._0_8_;
      auVar70._12_4_ = 0;
      fVar105 = fVar64 * fVar64 + fVar109 * fVar109 + auVar80._0_4_ * auVar80._0_4_;
      fVar99 = fVar64 * fVar64 + fVar109 * fVar109 + auVar80._0_4_ * auVar80._0_4_;
      uVar53 = CONCAT44(-(uint)(0.0 < fVar99),-(uint)(0.0 < fVar105)) & 0x100000001;
      param_8[1] = (ulong)(uint)auVar80._0_4_;
      *param_8 = auVar86._0_8_;
      if (fVar105 == 0.0) {
        fVar105 = 0.0;
        fVar99 = 0.0;
      }
      else {
        uVar65 = NEON_fmov(0x3f800000,4);
        fVar105 = (float)uVar65 / SQRT(fVar105);
        fVar99 = (float)((ulong)uVar65 >> 0x20) / SQRT(fVar99);
      }
      iVar33 = (int)uVar53;
      iVar83 = (int)(uVar53 >> 0x20);
      auVar81._0_4_ = (iVar33 << 0x1f) >> 0x1f;
      auVar81._4_4_ = (iVar83 << 0x1f) >> 0x1f;
      auVar81._8_4_ = (iVar33 << 0x1f) >> 0x1f;
      auVar81._12_4_ = (iVar83 << 0x1f) >> 0x1f;
      auVar93._0_4_ = fVar64 * fVar105;
      auVar93._4_4_ = fVar109 * fVar99;
      auVar93._8_4_ = auVar80._0_4_ * fVar105;
      auVar93._12_4_ = fVar99 * 0.0;
      sVar37 = 0;
      auVar70 = auVar70 ^ (auVar70 ^ auVar93) & auVar81;
      auVar71._0_12_ = auVar70._0_12_;
      auVar71._12_4_ = -(fVar61 * auVar70._0_4_ + fVar62 * auVar70._4_4_ + fVar63 * auVar70._8_4_);
      param_8[1] = auVar71._8_8_;
      *param_8 = auVar70._0_8_;
      goto LAB_02eea63c;
    }
    puVar45 = (undefined8 *)((long)(param_1 + 2) + (long)(int)uVar44 * 0x10 + (long)param_1[2]);
    uVar65 = *puVar45;
    param_8[1] = puVar45[1];
    *param_8 = uVar65;
    lVar43 = (long)(int)uVar44 * 4 + (long)param_1[4];
  }
  else {
    fVar61 = -(float)*(undefined8 *)param_3;
    fVar62 = -(float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar63 = -(float)*(undefined8 *)(param_3 + 2);
    fVar64 = -(float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20);
    lVar43 = (long)*piVar3 + (long)piVar3;
    lVar57 = 0;
    if (*piVar3 != 0) {
      lVar57 = lVar43;
    }
    if (uVar41 == 0xffffffff) {
LAB_02eea1c4:
      if (param_1[9] == 0) {
        bVar6 = false;
      }
      else {
        if ((param_6 & 1) == 0) {
          bVar51 = param_5[4] >> 6;
          pbVar35 = param_5;
        }
        else {
          bVar51 = param_5[4] & 3;
          pbVar35 = param_5 + (param_5[4] >> 6);
        }
        if (bVar51 == 2) {
          uVar56 = *(uint *)((long)(param_1 + 10) + (ulong)*pbVar35 * 4 + (long)param_1[10]);
          puVar2 = (ushort *)(lVar43 + (ulong)(ushort)uVar56 * 4);
          bVar51 = (byte)puVar2[1];
          uVar47 = (uVar56 >> 0x10 & 0xff) + 1;
          uVar38 = 0;
          if (bVar51 != 0) {
            uVar38 = uVar47 / bVar51;
          }
          piVar39 = param_1 + 8;
          piVar54 = param_1 + 6;
          bVar51 = *(byte *)((long)piVar54 +
                            (ulong)*puVar2 + (ulong)(uVar47 - uVar38 * bVar51) + (long)*piVar54);
          uVar47 = uVar56 >> 0x10;
          bVar58 = bVar51;
          do {
            bVar49 = (byte)uVar47;
            uVar52 = (ulong)uVar56;
            if (pbVar35[1] == bVar58) {
              lVar57 = (long)*piVar39 + (long)piVar39;
              goto LAB_02eea5c0;
            }
            puVar2 = (ushort *)(lVar43 + (ulong)(uVar56 & 0xffff) * 4);
            bVar58 = (byte)puVar2[1];
            iVar83 = (uint)bVar58 + (uVar47 & 0xff) + -1;
            iVar33 = 0;
            if (bVar58 != 0) {
              iVar33 = iVar83 / (int)(uint)bVar58;
            }
            lVar36 = (ulong)(iVar83 - iVar33 * (uint)bVar58 & 0xff) + (ulong)*puVar2;
            bVar58 = *(byte *)((long)piVar54 + lVar36 + *piVar54);
            uVar56 = *(uint *)((long)piVar39 + lVar36 * 4 + (long)*piVar39);
            uVar47 = uVar56 >> 0x10;
          } while (bVar58 != bVar51);
        }
        else if (bVar51 == 1) {
          uVar41 = *(uint *)((long)(param_1 + 10) + (ulong)*pbVar35 * 4 + (long)param_1[10]);
          uVar52 = (ulong)uVar41;
          puVar2 = (ushort *)(lVar43 + (ulong)(ushort)uVar41 * 4);
          bVar51 = (byte)puVar2[1];
          uVar44 = (uVar41 >> 0x10 & 0xff) + 1;
          uVar47 = 0;
          if (bVar51 != 0) {
            uVar47 = uVar44 / bVar51;
          }
          uVar41 = uVar41 >> 0x10;
          piVar39 = param_1 + 6;
          iVar33 = *param_1;
          bVar51 = *(byte *)((long)piVar39 +
                            (ulong)*puVar2 + (ulong)(uVar44 - uVar47 * bVar51) + (long)*piVar39);
          puVar48 = (undefined8 *)((long)param_1 + (ulong)bVar51 * 0xc + (long)iVar33);
          puVar45 = (undefined8 *)((long)param_1 + (ulong)*pbVar35 * 0xc + (long)iVar33);
          uVar73 = *puVar48;
          fVar105 = *(float *)(puVar45 + 1);
          uVar65 = *puVar45;
          lVar57 = (long)param_1[8] + (long)(param_1 + 8);
          fVar109 = (float)uVar65;
          fVar72 = fVar109 - (float)uVar73;
          fVar99 = (float)((ulong)uVar65 >> 0x20);
          fVar82 = fVar99 - (float)((ulong)uVar73 >> 0x20);
          fVar84 = fVar105 - *(float *)(puVar48 + 1);
          fVar85 = SQRT(fVar72 * fVar72 + fVar82 * fVar82 + fVar84 * fVar84);
          fVar72 = (fVar72 / fVar85) * fVar61 +
                   (fVar82 / SQRT(fVar72 * fVar72 + fVar82 * fVar82 + fVar84 * fVar84)) * fVar62 +
                   (fVar84 / fVar85) * fVar63;
          uVar53 = uVar52;
          uVar44 = uVar41;
          do {
            puVar2 = (ushort *)(lVar43 + (ulong)((uint)uVar53 & 0xffff) * 4);
            bVar58 = (byte)puVar2[1];
            iVar126 = (uint)bVar58 + (uVar41 & 0xff) + -1;
            iVar83 = 0;
            if (bVar58 != 0) {
              iVar83 = iVar126 / (int)(uint)bVar58;
            }
            lVar36 = (ulong)(iVar126 - iVar83 * (uint)bVar58 & 0xff) + (ulong)*puVar2;
            bVar58 = *(byte *)((long)piVar39 + lVar36 + *piVar39);
            uVar47 = *(uint *)(lVar57 + lVar36 * 4);
            uVar53 = (ulong)uVar47;
            puVar45 = (undefined8 *)((long)param_1 + (ulong)bVar58 * 0xc + (long)iVar33);
            uVar65 = *puVar45;
            uVar41 = uVar47 >> 0x10;
            fVar82 = fVar109 - (float)uVar65;
            fVar84 = fVar99 - (float)((ulong)uVar65 >> 0x20);
            fVar85 = fVar105 - *(float *)(puVar45 + 1);
            fVar94 = SQRT(fVar82 * fVar82 + fVar84 * fVar84 + fVar85 * fVar85);
            fVar82 = (fVar82 / fVar94) * fVar61 +
                     (fVar84 / SQRT(fVar82 * fVar82 + fVar84 * fVar84 + fVar85 * fVar85)) * fVar62 +
                     (fVar85 / fVar94) * fVar63;
            bVar6 = fVar82 < fVar72;
            fVar72 = (float)((uint)fVar72 ^ ((uint)fVar72 ^ (uint)fVar82) & -(uint)bVar6);
            if (!bVar6) {
              uVar47 = (uint)uVar52;
            }
            uVar52 = (ulong)uVar47;
            uVar47 = uVar41;
            if (!bVar6) {
              uVar47 = uVar44;
            }
            bVar49 = (byte)uVar47;
            uVar44 = uVar47;
          } while (bVar58 != bVar51);
LAB_02eea5c0:
          uVar41 = *(uint *)(lVar57 + ((ulong)*(ushort *)(lVar43 + (uVar52 & 0xffff) * 4) +
                                      (ulong)bVar49) * 4);
          pfVar46 = (float *)((long)param_1[2] + (long)(param_1 + 2));
          pfVar4 = pfVar46 + (uVar52 & 0xffff) * 4;
          pfVar55 = pfVar46 + ((ulong)uVar41 & 0xffff) * 4;
          auVar67._0_4_ = *pfVar4 * fVar61;
          auVar67._4_4_ = pfVar4[1] * fVar62;
          auVar67._8_4_ = pfVar4[2] * fVar63;
          auVar67._12_4_ = pfVar4[3] * fVar64;
          fVar61 = *pfVar55 * fVar61;
          fVar62 = pfVar55[1] * fVar62;
          auVar86 = NEON_ext(auVar67,auVar67,8,1);
          auVar9._4_4_ = fVar62;
          auVar9._0_4_ = fVar61;
          auVar9._8_4_ = pfVar55[2] * fVar63;
          auVar9._12_4_ = pfVar55[3] * fVar64;
          auVar10._4_4_ = fVar62;
          auVar10._0_4_ = fVar61;
          auVar10._8_4_ = pfVar55[2] * fVar63;
          auVar10._12_4_ = pfVar55[3] * fVar64;
          auVar76 = NEON_ext(auVar9,auVar10,8,1);
          uVar44 = (uint)uVar52;
          if (auVar67._0_4_ + auVar67._4_4_ + auVar86._0_4_ <= fVar61 + fVar62 + auVar76._0_4_) {
            uVar44 = uVar41;
          }
          param_7 = (ulong)(uVar44 & 0xffff);
          goto LAB_02eea61c;
        }
        bVar6 = true;
      }
      iVar33 = param_1[2];
      uVar47 = param_1[3];
      pfVar46 = (float *)((long)iVar33 + (long)(param_1 + 2));
      pfVar4 = (float *)0x0;
      if (iVar33 != 0) {
        pfVar4 = pfVar46;
      }
      pfVar55 = pfVar4;
      if ((int)uVar47 < 5) {
        uVar56 = 0;
        auVar66._8_4_ = 0xff7fffee;
        auVar66._0_8_ = 0xff7fffeeff7fffee;
        auVar66._12_4_ = 0xff7fffee;
        auVar86 = ZEXT816(0);
      }
      else {
        auVar66._8_4_ = 0xff7fffee;
        auVar66._0_8_ = 0xff7fffeeff7fffee;
        auVar66._12_4_ = 0xff7fffee;
        auVar87._8_8_ = _UNK_03cab988;
        auVar87._0_8_ = _DAT_03cab980;
        auVar86 = ZEXT816(0);
        iVar33 = 0;
        do {
          fVar105 = *pfVar55;
          pfVar24 = pfVar55 + 1;
          pfVar25 = pfVar55 + 2;
          pfVar26 = pfVar55 + 3;
          auVar106._0_4_ = pfVar55[4] * fVar61;
          auVar106._4_4_ = pfVar55[5] * fVar62;
          auVar106._8_4_ = pfVar55[6] * fVar63;
          auVar106._12_4_ = pfVar55[7] * fVar64;
          iVar33 = iVar33 + 4;
          pfVar1 = pfVar55 + 8;
          pfVar27 = pfVar55 + 9;
          pfVar28 = pfVar55 + 10;
          pfVar29 = pfVar55 + 0xb;
          auVar112._0_4_ = pfVar55[0xc] * fVar61;
          auVar112._4_4_ = pfVar55[0xd] * fVar62;
          auVar112._8_4_ = pfVar55[0xe] * fVar63;
          auVar112._12_4_ = pfVar55[0xf] * fVar64;
          pfVar55 = pfVar55 + 0x10;
          auVar100._0_4_ = fVar105 * fVar61;
          auVar100._4_4_ = *pfVar24 * fVar62;
          auVar100._8_4_ = *pfVar25 * fVar63;
          auVar100._12_4_ = *pfVar26 * fVar64;
          auVar110._0_4_ = *pfVar1 * fVar61;
          auVar110._4_4_ = *pfVar27 * fVar62;
          auVar110._8_4_ = *pfVar28 * fVar63;
          auVar110._12_4_ = *pfVar29 * fVar64;
          auVar76 = NEON_ext(auVar100,auVar100,8,1);
          auVar107 = NEON_ext(auVar106,auVar106,8,1);
          auVar111 = NEON_ext(auVar110,auVar110,8,1);
          auVar113 = NEON_ext(auVar112,auVar112,8,1);
          auVar101._0_4_ = auVar76._0_4_ + auVar100._0_4_ + auVar100._4_4_;
          auVar101._4_4_ = auVar107._0_4_ + auVar106._0_4_ + auVar106._4_4_;
          fVar105 = auVar111._0_4_ + auVar110._0_4_ + auVar110._4_4_;
          fVar109 = auVar113._0_4_ + auVar112._0_4_ + auVar112._4_4_;
          auVar101._12_4_ = fVar109;
          auVar101._8_4_ = fVar105;
          auVar108._0_4_ = -(uint)(auVar66._0_4_ < auVar101._0_4_);
          auVar108._4_4_ = -(uint)(auVar66._4_4_ < auVar101._4_4_);
          auVar108._8_4_ = -(uint)(auVar66._8_4_ < fVar105);
          auVar108._12_4_ = -(uint)(auVar66._12_4_ < fVar109);
          auVar66 = auVar66 ^ (auVar66 ^ auVar101) & auVar108;
          auVar86 = auVar86 ^ (auVar86 ^ auVar87) & auVar108;
          auVar88._0_4_ = auVar87._0_4_ + 4;
          auVar88._4_4_ = auVar87._4_4_ + 4;
          auVar88._8_4_ = auVar87._8_4_ + 4;
          auVar88._12_4_ = auVar87._12_4_ + 4;
          auVar87 = auVar88;
        } while (iVar33 < (int)(uVar47 - 4));
        uVar56 = uVar47 - 1 & 0xfffffffc;
      }
      auVar76 = NEON_rev64(auVar66,4);
      auVar96._0_4_ = -(uint)(auVar76._0_4_ <= auVar66._0_4_);
      auVar96._4_4_ = -(uint)(auVar76._4_4_ <= auVar66._4_4_);
      auVar96._8_4_ = -(uint)(auVar76._8_4_ <= auVar66._8_4_);
      auVar96._12_4_ = -(uint)(auVar76._12_4_ <= auVar66._12_4_);
      auVar76 = NEON_fmax(auVar66,auVar76,4);
      auVar107 = NEON_rev64(auVar86,4);
      auVar86 = auVar86 ^ (auVar86 ^ auVar107) & ~auVar96;
      auVar107 = NEON_ext(auVar76,auVar76,8,1);
      auVar89._0_8_ =
           CONCAT44(-(uint)(auVar107._4_4_ <= auVar76._4_4_),
                    -(uint)(auVar107._0_4_ <= auVar76._0_4_));
      auVar89._8_8_ = 0;
      auVar76 = NEON_ext(auVar86,auVar86,8,1);
      param_7 = (auVar86._0_8_ ^ (auVar86._0_8_ ^ auVar76._0_8_) & ~auVar89._0_8_) & 0xffffffff;
      if ((int)uVar56 < (int)uVar47) {
        fVar105 = (float)NEON_fmaxnmv(auVar66,4);
        do {
          fVar109 = *pfVar55 * fVar61 + pfVar55[1] * fVar62 + pfVar55[2] * fVar63;
          uVar38 = uVar56;
          if (fVar109 <= fVar105) {
            uVar38 = (uint)param_7;
          }
          param_7 = (ulong)uVar38;
          uVar56 = uVar56 + 1;
          if (fVar109 <= fVar105) {
            fVar109 = fVar105;
          }
          fVar105 = fVar109;
          pfVar55 = pfVar55 + 4;
        } while (uVar47 != uVar56);
      }
      if (!bVar6 && (param_2 & 0x80) == 0) {
        uVar47 = (uint)param_7;
        if (uVar47 != uVar41) {
          pfVar55 = pfVar46 + (long)(int)uVar47 * 4;
          auVar75._0_4_ = *pfVar55 * fVar61;
          auVar75._4_4_ = pfVar55[1] * fVar62;
          auVar75._8_4_ = pfVar55[2] * fVar63;
          auVar75._12_4_ = pfVar55[3] * fVar64;
          auVar89 = NEON_ext(auVar75,auVar75,8,1);
          if (*(float *)(PTR_DAT_047d1a38 + (ulong)*(byte *)(lVar57 + (long)(int)uVar47 * 4 + 3) * 4
                        ) <= auVar75._0_4_ + auVar75._4_4_ + auVar89._0_4_) goto LAB_02eea61c;
        }
        if ((param_6 & 1) == 0) {
          bVar51 = param_5[4] >> 6;
        }
        else {
          pbVar35 = param_5 + 4;
          param_5 = param_5 + (*pbVar35 >> 6);
          bVar51 = *pbVar35 & 3;
        }
        if (bVar51 == 2) {
          iVar33 = param_1[6];
          lVar43 = 0;
          if (iVar33 != 0) {
            lVar43 = (long)iVar33 + (long)(param_1 + 6);
          }
          if (0 < (int)uVar44) {
            bVar51 = *param_5;
            uVar52 = 0;
            uVar41 = 0;
            bVar58 = param_5[1];
            do {
              puVar2 = (ushort *)(lVar57 + uVar52 * 4);
              bVar49 = (byte)puVar2[1];
              uVar5 = *puVar2;
              uVar53 = (ulong)uVar5;
              if ((uint)uVar5 < (uint)bVar49) {
                uVar47 = (uint)bVar49 - (uint)uVar5;
                uVar34 = (ulong)uVar47 & 3;
                if (~uVar53 + (ulong)bVar49 < 3) {
                  bVar30 = false;
                  bVar6 = false;
                }
                else {
                  bVar30 = false;
                  bVar6 = false;
                  lVar36 = -(bVar49 - uVar53 & 0xfffffffffffffffc);
                  do {
                    pbVar35 = (byte *)(lVar43 + 1 + uVar53);
                    uVar53 = uVar53 + 4;
                    bVar6 = (bool)(bVar6 | pbVar35[-1] == bVar51 | *pbVar35 == bVar51 |
                                   pbVar35[1] == bVar51 | pbVar35[2] == bVar51);
                    bVar30 = (bool)(bVar30 | pbVar35[-1] == bVar58 | *pbVar35 == bVar58 |
                                    pbVar35[1] == bVar58 | pbVar35[2] == bVar58);
                    lVar36 = lVar36 + 4;
                  } while (lVar36 != 0);
                }
                if ((uVar47 & 3) != 0) {
                  pbVar35 = (byte *)(lVar43 + uVar53);
                  do {
                    bVar6 = (bool)(bVar6 | *pbVar35 == bVar51);
                    bVar30 = (bool)(bVar30 | *pbVar35 == bVar58);
                    uVar34 = uVar34 - 1;
                    pbVar35 = pbVar35 + 1;
                  } while (uVar34 != 0);
                }
                if ((bVar6) && (bVar30)) {
                  (&local_450)[uVar41] = (int)uVar52;
                  if (uVar41 == 1) goto LAB_02eea938;
                  uVar41 = 1;
                }
              }
              uVar52 = uVar52 + 1;
            } while (uVar52 != uVar44);
            if (uVar41 != 0) {
              if (uVar41 == 2) {
LAB_02eea938:
                uVar52 = (ulong)(int)local_450;
                param_7 = (ulong)(int)fStack_44c;
                pfVar55 = pfVar4 + param_7 * 4;
                pfVar4 = pfVar4 + uVar52 * 4;
                auVar68._0_4_ = *pfVar55 * fVar61;
                auVar68._4_4_ = pfVar55[1] * fVar62;
                auVar68._8_4_ = pfVar55[2] * fVar63;
                auVar68._12_4_ = pfVar55[3] * fVar64;
                auVar86 = NEON_ext(auVar68,auVar68,8,1);
                fVar61 = *pfVar4 * fVar61;
                fVar62 = pfVar4[1] * fVar62;
                auVar11._4_4_ = fVar62;
                auVar11._0_4_ = fVar61;
                auVar11._8_4_ = pfVar4[2] * fVar63;
                auVar11._12_4_ = pfVar4[3] * fVar64;
                auVar12._4_4_ = fVar62;
                auVar12._0_4_ = fVar61;
                auVar12._8_4_ = pfVar4[2] * fVar63;
                auVar12._12_4_ = pfVar4[3] * fVar64;
                auVar76 = NEON_ext(auVar11,auVar12,8,1);
                if (fVar61 + fVar62 + auVar76._0_4_ < auVar68._0_4_ + auVar68._4_4_ + auVar86._0_4_)
                goto LAB_02eea61c;
              }
              else {
                uVar52 = (ulong)(uint)local_450;
              }
              param_7 = uVar52 & 0xffffffff;
            }
          }
        }
        else if (bVar51 == 1) {
          iVar33 = param_1[6];
          lVar43 = 0;
          if (iVar33 != 0) {
            lVar43 = (long)iVar33 + (long)(param_1 + 6);
          }
          lVar36 = 0;
          if (*param_1 != 0) {
            lVar36 = (long)*param_1 + (long)param_1;
          }
          if (0 < (int)uVar44) {
            bVar51 = *param_5;
            puVar45 = (undefined8 *)(lVar36 + (ulong)bVar51 * 0xc);
            fVar64 = 0.0;
            auVar90._8_8_ = auVar89._8_8_;
            auVar90._0_8_ = NEON_fmov(0x3f800000,4);
            uVar52 = 0;
            do {
              puVar2 = (ushort *)(lVar57 + uVar52 * 4);
              bVar58 = (byte)puVar2[1];
              uVar5 = *puVar2;
              uVar53 = (ulong)uVar5;
              if ((uint)uVar5 < (uint)bVar58) {
                iVar33 = (uint)bVar58 + (uint)uVar5 + -1;
                do {
                  bVar49 = *(byte *)(lVar43 + iVar33);
                  if (bVar49 == bVar51) {
                    fVar105 = *(float *)(puVar45 + 1);
                    bVar49 = *(byte *)(lVar43 + uVar53);
LAB_02eea6fc:
                    puVar48 = (undefined8 *)(lVar36 + (ulong)bVar49 * 0xc);
                    uVar65 = *puVar48;
                    fVar109 = (float)*puVar45 - (float)uVar65;
                    fVar99 = (float)((ulong)*puVar45 >> 0x20) - (float)((ulong)uVar65 >> 0x20);
                    fVar105 = fVar105 - *(float *)(puVar48 + 1);
                    fVar72 = fVar109 * fVar109 + fVar99 * fVar99 + fVar105 * fVar105;
                    fVar82 = 0.0;
                    fVar84 = 0.0;
                    fVar85 = 0.0;
                    if (fVar72 != 0.0) {
                      fVar72 = SQRT(fVar72);
                      fVar82 = fVar109 / fVar72;
                      fVar84 = fVar99 / SQRT(fVar109 * fVar109 + fVar99 * fVar99 + fVar105 * fVar105
                                            );
                      fVar85 = fVar105 / fVar72;
                    }
                    fVar105 = fVar82 * fVar61 + fVar84 * fVar62 + fVar85 * fVar63;
                    uVar41 = (uint)uVar52;
                    if (fVar105 == auVar90._0_4_) {
                      pfVar55 = pfVar4 + uVar52 * 4;
                      fVar105 = *pfVar55 * fVar61 + pfVar55[1] * fVar62 + pfVar55[2] * fVar63;
                      bVar6 = fVar64 < fVar105;
                      fVar64 = (float)((uint)fVar64 ^ ((uint)fVar64 ^ (uint)fVar105) & -(uint)bVar6)
                      ;
                      if (!bVar6) {
                        uVar41 = (uint)param_7;
                      }
                      param_7 = (ulong)uVar41;
                    }
                    else if (fVar105 < auVar90._0_4_) {
                      pfVar55 = pfVar4 + uVar52 * 4;
                      param_7 = uVar52 & 0xffffffff;
                      fVar64 = *pfVar55 * fVar61 + pfVar55[1] * fVar62 + pfVar55[2] * fVar63;
                      auVar90 = ZEXT416((uint)fVar105);
                    }
                  }
                  else if (*(byte *)(lVar43 + uVar53) == bVar51) {
                    fVar105 = *(float *)(puVar45 + 1);
                    goto LAB_02eea6fc;
                  }
                  iVar33 = (int)uVar53;
                  uVar53 = uVar53 + 1;
                } while (bVar58 != uVar53);
              }
              uVar52 = uVar52 + 1;
            } while (uVar52 != uVar44);
          }
        }
      }
    }
    else {
      pfVar46 = (float *)((long)param_1[2] + (long)(param_1 + 2));
      pfVar4 = pfVar46 + (long)(int)uVar41 * 4;
      auVar74._0_4_ = *pfVar4 * fVar61;
      auVar74._4_4_ = pfVar4[1] * fVar62;
      auVar74._8_4_ = pfVar4[2] * fVar63;
      auVar74._12_4_ = pfVar4[3] * fVar64;
      auVar86 = NEON_ext(auVar74,auVar74,8,1);
      if (auVar74._0_4_ + auVar74._4_4_ + auVar86._0_4_ <
          *(float *)(PTR_DAT_047d1a38 +
                    (ulong)*(byte *)(lVar57 + (param_7 & 0xffffffff) * 4 + 3) * 4))
      goto LAB_02eea1c4;
      param_7 = param_7 & 0xffffffff;
    }
LAB_02eea61c:
    uVar65 = *(undefined8 *)(pfVar46 + (long)(int)param_7 * 4);
    uVar52 = param_7 & 0xffffffff;
    param_8[1] = *(undefined8 *)(pfVar46 + (long)(int)param_7 * 4 + 2);
    *param_8 = uVar65;
    lVar43 = (long)(int)param_7 * 4 + (long)*piVar3;
  }
  sVar37 = (ushort)*(byte *)((long)piVar3 + lVar43 + 3) << 8;
LAB_02eea63c:
  *param_9 = sVar37;
  return uVar52;
}


