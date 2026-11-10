/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f8a48; name: FUN_026f8a48
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_026f8a48(long param_1,float *param_2)

{
  long lVar1;
  long lVar2;
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
  bool bVar13;
  bool bVar14;
  bool bVar15;
  ulong uVar16;
  long lVar17;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar43;
  float fVar44;
  float fVar51;
  float fVar53;
  undefined1 auVar46 [12];
  undefined8 uVar45;
  float fVar50;
  float fVar52;
  float fVar54;
  undefined1 auVar47 [16];
  float fVar55;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar56;
  float fVar57;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar58 [16];
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  float fVar69;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar79;
  undefined1 auVar70 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined1 auVar71 [16];
  undefined1 auVar77 [16];
  undefined1 auVar76 [16];
  undefined1 auVar75 [16];
  undefined1 auVar74 [16];
  undefined1 auVar78 [16];
  undefined1 auVar80 [16];
  undefined8 uVar81;
  undefined8 uVar82;
  float fVar83;
  float fVar87;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  float fVar88;
  float fVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined1 auVar92 [16];
  undefined1 auVar96 [16];
  undefined1 auVar95 [16];
  undefined1 auVar94 [16];
  undefined1 auVar93 [16];
  undefined1 auVar100 [16];
  undefined1 auVar99 [16];
  undefined1 auVar98 [16];
  undefined1 auVar97 [16];
  undefined1 auVar101 [16];
  undefined1 auVar105 [16];
  undefined1 auVar104 [16];
  undefined1 auVar103 [16];
  undefined1 auVar102 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar114;
  undefined8 uVar112;
  float fVar115;
  undefined1 auVar113 [16];
  float fVar116;
  float fVar117;
  float fVar118;
  undefined1 auVar119 [16];
  undefined8 uVar120;
  undefined8 uVar121;
  undefined8 uVar122;
  undefined8 uVar123;
  undefined8 uVar124;
  undefined8 uVar125;
  undefined8 uVar126;
  undefined8 uVar127;
  undefined8 uVar128;
  undefined8 uVar129;
  undefined8 uVar130;
  undefined8 uVar131;
  undefined8 uVar132;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  undefined8 local_190 [4];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  float local_70;
  undefined8 local_60;
  ulong uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  
  auVar8 = *(undefined1 (*) [16])(param_2 + 8);
  fStack_198 = auVar8._8_4_;
  fStack_194 = auVar8._12_4_;
  local_1a0 = auVar8._0_4_;
  fStack_19c = auVar8._4_4_;
  uVar16 = FUN_026f850c(param_1,1);
  if ((uVar16 & 1) == 0) {
    fVar44 = param_2[4];
    fVar51 = param_2[5];
    fVar53 = param_2[6];
    fVar55 = param_2[7];
    fVar43 = fVar44 * (float)_DAT_03cabe50;
    fVar50 = fVar51 * (float)((ulong)_DAT_03cabe50 >> 0x20);
    fVar52 = fVar53 * (float)_UNK_03cabe58;
    fVar54 = fVar55 * (float)((ulong)_UNK_03cabe58 >> 0x20);
    auVar47._0_4_ = fVar43 + fVar50;
    auVar47._4_4_ = fVar52 + fVar54;
    auVar47._8_4_ = fVar43 + fVar50;
    auVar47._12_4_ = fVar52 + fVar54;
    auVar47 = NEON_ext(auVar47,auVar47,4,1);
    fVar43 = auVar47._0_4_ + auVar47._4_4_;
    fVar56 = local_1a0 - ABS(*param_2 * 0.5);
    fVar59 = fStack_19c - ABS(param_2[1] * 0.5);
    fVar61 = fStack_198 - ABS(param_2[2] * 0.5);
    fVar50 = local_1a0 + ABS(*param_2 * 0.5);
    fVar52 = fStack_19c + ABS(param_2[1] * 0.5);
    fVar54 = fStack_198 + ABS(param_2[2] * 0.5);
    fVar40 = 1.0;
    if (0.0 <= fVar43) {
      fVar40 = 0.0;
    }
    fVar41 = 1.0;
    if (0.0 > fVar43) {
      fVar41 = 0.0;
    }
    uStack_58 = (ulong)(uint)fVar61;
    uStack_48 = (ulong)(uint)fVar54;
    local_60 = CONCAT44(fVar59,fVar56);
    local_50 = CONCAT44(fVar52,fVar50);
    memcpy(&local_90,(void *)(param_1 + 0x1b0),0x30);
    fVar43 = (fVar41 * fVar43 - fVar40 * fVar43) + -1.0;
    bVar13 = false;
    bVar14 = false;
    bVar15 = false;
    if (-1.1920929e-07 <= fVar43) {
      bVar13 = false;
      bVar14 = false;
      bVar15 = true;
      if (!NAN(fVar43)) {
        bVar13 = fVar43 < 1.1920929e-07;
        bVar14 = fVar43 == 1.1920929e-07;
        bVar15 = false;
      }
    }
    if (bVar14 || bVar13 != bVar15) {
      auVar109._4_4_ = fStack_7c;
      auVar109._0_4_ = local_80;
      auVar109._8_4_ = fStack_78;
      auVar109._12_4_ = uStack_74;
    }
    else {
      auVar78._0_4_ = fVar44 * fVar44 + fVar51 * fVar51;
      auVar78._4_4_ = fVar53 * fVar53 + fVar55 * fVar55;
      auVar78._8_4_ = fVar44 * fVar44 + fVar51 * fVar51;
      auVar78._12_4_ = fVar53 * fVar53 + fVar55 * fVar55;
      auVar47 = NEON_ext(auVar78,auVar78,4,1);
      fVar43 = auVar47._0_4_ + auVar47._4_4_;
      fVar40 = auVar47._8_4_ + auVar47._12_4_;
      fVar41 = auVar47._0_4_ + auVar47._4_4_;
      fVar42 = auVar47._8_4_ + auVar47._12_4_;
      fVar44 = -fVar44 / fVar43;
      fVar51 = -fVar51 / fVar40;
      fVar53 = -fVar53 / fVar41;
      fVar55 = fVar55 / fVar42;
      iVar63 = -(uint)(fVar43 == 0.0);
      iVar64 = -(uint)(fVar40 == 0.0);
      iVar65 = -(uint)(fVar41 == 0.0);
      iVar66 = -(uint)(fVar42 == 0.0);
      fVar43 = (float)CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18),
                               CONCAT12((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar44 >> 8) &
                                                  ~(byte)((uint)iVar63 >> 8),
                                                  SUB41(fVar44,0) & ~(byte)iVar63)));
      auVar46._0_8_ =
           CONCAT17((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                    CONCAT16((byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                             CONCAT15((byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar64 >> 8),
                                      CONCAT14(SUB41(fVar51,0) & ~(byte)iVar64,fVar43))));
      auVar46[8] = SUB41(fVar53,0) & ~(byte)iVar65;
      auVar46[9] = (byte)((uint)fVar53 >> 8) & ~(byte)((uint)iVar65 >> 8);
      auVar46[10] = (byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10);
      auVar46[0xb] = (byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18);
      auVar111[0xc] = SUB41(fVar55,0) & ~(byte)iVar66;
      auVar111._0_12_ = auVar46;
      auVar111[0xd] = (byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar66 >> 8);
      auVar111[0xe] = (byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
      auVar111[0xf] = (byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
      fVar51 = local_90 - local_1a0;
      fVar53 = fStack_8c - fStack_19c;
      fVar69 = fStack_88 - fStack_198;
      auVar92._4_4_ = fVar69;
      auVar92._0_4_ = fVar69;
      auVar92._8_4_ = fVar69;
      auVar92._12_4_ = fVar69;
      auVar71._0_4_ = -fVar43;
      fVar55 = (float)((ulong)auVar46._0_8_ >> 0x20);
      fVar79 = -fVar55;
      fVar40 = auVar46._8_4_;
      auVar70._8_4_ = -fVar40;
      fVar41 = auVar111._12_4_;
      auVar93._4_12_ = auVar92._4_12_;
      auVar93._0_4_ = fVar51;
      auVar95._0_8_ = auVar93._0_8_;
      auVar95._8_4_ = fVar53;
      auVar95._12_4_ = fVar69;
      auVar94._8_8_ = auVar95._8_8_;
      auVar94._4_4_ = fVar69;
      auVar94._0_4_ = fVar51;
      auVar96._0_12_ = auVar94._0_12_;
      auVar96._12_4_ = fVar69;
      fVar57 = (local_90 + local_80 * local_70) - local_1a0;
      fVar60 = (fStack_8c + fStack_7c * local_70) - fStack_19c;
      fVar62 = (fStack_88 + fStack_78 * local_70) - fStack_198;
      auVar70._4_4_ = auVar70._8_4_;
      auVar70._0_4_ = auVar70._8_4_;
      auVar70._12_4_ = auVar70._8_4_;
      auVar106._4_4_ = fVar40;
      auVar106._0_4_ = fVar40;
      auVar106._8_4_ = fVar40;
      auVar106._12_4_ = fVar40;
      auVar107 = NEON_ext(auVar106,auVar111,0xc,1);
      auVar71._4_12_ = auVar70._4_12_;
      auVar119._0_8_ = auVar71._0_8_;
      auVar119._8_4_ = fVar79;
      auVar119._12_4_ = auVar70._8_4_;
      auVar72._8_8_ = auVar119._8_8_;
      auVar72._4_4_ = auVar70._8_4_;
      auVar72._0_4_ = auVar71._0_4_;
      auVar73._0_12_ = auVar72._0_12_;
      auVar73._12_4_ = auVar70._8_4_;
      auVar108._4_4_ = fVar55;
      auVar108._0_4_ = fVar55;
      auVar108._8_4_ = fVar55;
      auVar108._12_4_ = fVar55;
      auVar109 = NEON_ext(auVar108,auVar107,0xc,1);
      auVar113 = NEON_ext(auVar96,auVar96,8,1);
      fVar44 = auVar113._0_4_;
      auVar97._4_12_ = auVar96._4_12_;
      auVar97._0_4_ = fVar44;
      auVar99._0_8_ = auVar97._0_8_;
      auVar99._8_4_ = auVar113._8_4_;
      auVar99._12_4_ = fVar69;
      auVar98._8_8_ = auVar99._8_8_;
      auVar98._4_4_ = fVar51;
      auVar98._0_4_ = fVar44;
      auVar100._0_12_ = auVar98._0_12_;
      auVar100._12_4_ = fVar53;
      fVar116 = (float)_DAT_03cab640;
      fVar117 = (float)((ulong)_DAT_03cab640 >> 0x20);
      fVar118 = (float)_UNK_03cab648;
      fVar89 = (float)((ulong)_UNK_03cab648 >> 0x20);
      fVar42 = fVar43 * fVar89;
      auVar47 = NEON_ext(auVar100,auVar113,8,1);
      auVar47 = NEON_ext(auVar47,auVar47,0xc,1);
      auVar119 = NEON_ext(auVar73,auVar73,8,1);
      fVar83 = auVar109._0_4_ * fVar116;
      fVar87 = auVar109._4_4_ * fVar117;
      fVar88 = auVar109._8_4_ * fVar118;
      fVar89 = auVar109._12_4_ * fVar89;
      auVar67._0_4_ =
           (fVar51 * fVar41 + fVar43 * fVar116 * 0.0 + auVar47._0_4_ * fVar83) -
           auVar107._0_4_ * fVar44;
      auVar67._4_4_ =
           (fVar53 * fVar41 + fVar55 * fVar117 * 0.0 + auVar47._4_4_ * fVar87) -
           auVar107._4_4_ * auVar113._4_4_;
      auVar67._8_4_ =
           (fVar69 * fVar41 + fVar40 * fVar118 * 0.0 + auVar47._8_4_ * fVar88) -
           auVar107._8_4_ * auVar113._8_4_;
      auVar67._12_4_ =
           (fVar41 * 0.0 + fVar51 * fVar42 + auVar47._12_4_ * fVar89) -
           auVar107._12_4_ * auVar113._12_4_;
      auVar101._4_4_ = auVar67._8_4_;
      auVar101._0_4_ = auVar67._8_4_;
      auVar101._8_4_ = auVar67._8_4_;
      auVar101._12_4_ = auVar67._8_4_;
      auVar109 = NEON_ext(auVar101,auVar67,0xc,1);
      auVar110._4_4_ = auVar67._4_4_;
      auVar110._0_4_ = auVar67._4_4_;
      auVar110._8_4_ = auVar67._4_4_;
      auVar110._12_4_ = auVar67._4_4_;
      fVar44 = auVar119._0_4_;
      auVar74._4_12_ = auVar73._4_12_;
      auVar74._0_4_ = fVar44;
      fVar53 = auVar119._8_4_;
      auVar76._0_8_ = auVar74._0_8_;
      auVar76._8_4_ = fVar53;
      auVar76._12_4_ = auVar70._8_4_;
      auVar75._8_8_ = auVar76._8_8_;
      auVar75._4_4_ = auVar71._0_4_;
      auVar75._0_4_ = fVar44;
      auVar77._0_12_ = auVar75._0_12_;
      auVar77._12_4_ = fVar79;
      auVar111 = NEON_ext(auVar110,auVar109,0xc,1);
      auVar47 = NEON_ext(auVar77,auVar119,8,1);
      auVar78 = NEON_ext(auVar47,auVar47,0xc,1);
      auVar113._4_4_ = fVar62;
      auVar113._0_4_ = fVar57;
      auVar113._8_4_ = fVar60;
      auVar113._12_4_ = fVar62;
      auVar3._4_4_ = fVar62;
      auVar3._0_4_ = fVar57;
      auVar3._8_4_ = fVar60;
      auVar3._12_4_ = fVar62;
      auVar47 = NEON_ext(auVar113,auVar3,8,1);
      auVar104._12_4_ = auVar109._12_4_;
      fVar69 = (auVar71._0_4_ * auVar67._12_4_ + fVar41 * auVar67._0_4_ * fVar116 +
               auVar78._0_4_ * auVar111._0_4_ * fVar116) - auVar109._0_4_ * fVar44;
      fVar114 = (fVar79 * auVar67._12_4_ + fVar41 * auVar67._4_4_ * fVar117 +
                auVar78._4_4_ * auVar111._4_4_ * fVar117) - auVar109._4_4_ * auVar119._4_4_;
      fVar115 = (auVar70._8_4_ * auVar67._12_4_ + fVar41 * auVar67._8_4_ * fVar118 +
                auVar78._8_4_ * auVar111._8_4_ * fVar118) - auVar109._8_4_ * fVar53;
      fVar51 = auVar47._0_4_;
      auVar102._4_12_ = auVar109._4_12_;
      auVar102._0_4_ = fVar51;
      auVar104._0_8_ = auVar102._0_8_;
      auVar104._8_4_ = auVar47._8_4_;
      auVar103._8_8_ = auVar104._8_8_;
      auVar103._4_4_ = fVar57;
      auVar103._0_4_ = fVar51;
      auVar105._0_12_ = auVar103._0_12_;
      auVar105._12_4_ = fVar60;
      auVar109 = NEON_ext(auVar105,auVar47,8,1);
      auVar109 = NEON_ext(auVar109,auVar109,0xc,1);
      auVar58._0_4_ =
           (fVar57 * fVar41 + fVar43 * fVar116 * 0.0 + auVar109._0_4_ * fVar83) -
           auVar107._0_4_ * fVar51;
      auVar58._4_4_ =
           (fVar60 * fVar41 + fVar55 * fVar117 * 0.0 + auVar109._4_4_ * fVar87) -
           auVar107._4_4_ * auVar47._4_4_;
      auVar58._8_4_ =
           (fVar62 * fVar41 + fVar40 * fVar118 * 0.0 + auVar109._8_4_ * fVar88) -
           auVar107._8_4_ * auVar47._8_4_;
      auVar58._12_4_ =
           (fVar41 * 0.0 + fVar57 * fVar42 + auVar109._12_4_ * fVar89) -
           auVar107._12_4_ * auVar47._12_4_;
      local_90 = local_1a0 + fVar69;
      fStack_8c = fStack_19c + fVar114;
      fStack_88 = fStack_198 + fVar115;
      fStack_84 = fStack_194 + 0.0;
      auVar48._4_4_ = auVar58._8_4_;
      auVar48._0_4_ = auVar58._8_4_;
      auVar48._8_4_ = auVar58._8_4_;
      auVar48._12_4_ = auVar58._8_4_;
      auVar47 = NEON_ext(auVar48,auVar58,0xc,1);
      auVar68._4_4_ = auVar58._4_4_;
      auVar68._0_4_ = auVar58._4_4_;
      auVar68._8_4_ = auVar58._4_4_;
      auVar68._12_4_ = auVar58._4_4_;
      auVar113 = NEON_ext(auVar68,auVar47,0xc,1);
      auVar109._0_4_ =
           fVar69 - ((auVar71._0_4_ * auVar58._12_4_ + fVar41 * auVar58._0_4_ * fVar116 +
                     auVar78._0_4_ * auVar113._0_4_ * fVar116) - auVar47._0_4_ * fVar44);
      auVar109._4_4_ =
           fVar114 - ((fVar79 * auVar58._12_4_ + fVar41 * auVar58._4_4_ * fVar117 +
                      auVar78._4_4_ * auVar113._4_4_ * fVar117) - auVar47._4_4_ * auVar119._4_4_);
      auVar109._8_4_ =
           fVar115 - ((auVar70._8_4_ * auVar58._12_4_ + fVar41 * auVar58._8_4_ * fVar118 +
                      auVar78._8_4_ * auVar113._8_4_ * fVar118) - auVar47._8_4_ * fVar53);
      auVar109._12_4_ = 0;
      uStack_74 = 0;
      auVar107._0_4_ = auVar109._0_4_ * auVar109._0_4_ + auVar109._4_4_ * auVar109._4_4_;
      auVar107._4_4_ = auVar109._8_4_ * auVar109._8_4_ + 0.0;
      auVar107._8_4_ = auVar109._0_4_ * auVar109._0_4_ + auVar109._4_4_ * auVar109._4_4_;
      auVar107._12_4_ = auVar109._8_4_ * auVar109._8_4_ + 0.0;
      auVar47 = NEON_ext(auVar107,auVar107,4,1);
      fVar51 = auVar47._0_4_ + auVar47._4_4_;
      fVar44 = (float)(0x5f1ffff9 - ((uint)fVar51 >> 1));
      local_70 = 1.0 / ((fVar51 * -0.70395225 * fVar44 * fVar44 + 1.6819141) * fVar44);
      local_80 = auVar109._0_4_;
      fStack_7c = auVar109._4_4_;
      fStack_78 = auVar109._8_4_;
    }
    fVar55 = fStack_84;
    fVar53 = fStack_88;
    fVar51 = fStack_8c;
    fVar44 = local_90;
    fVar57 = auVar109._0_4_;
    fVar43 = fVar57 * ((fVar56 + fVar50) * 0.5 - local_90);
    fVar60 = auVar109._4_4_;
    fVar40 = fVar60 * ((fVar59 + fVar52) * 0.5 - fStack_8c);
    fVar62 = auVar109._8_4_;
    fVar41 = fVar62 * ((fVar61 + fVar54) * 0.5 - fStack_88);
    fVar69 = auVar109._12_4_;
    fVar42 = fVar69 * (0.0 - fStack_84);
    auVar18._0_4_ = fVar43 + fVar40;
    auVar18._4_4_ = fVar41 + fVar42;
    auVar18._8_4_ = fVar43 + fVar40;
    auVar18._12_4_ = fVar41 + fVar42;
    auVar47 = NEON_ext(auVar18,auVar18,4,1);
    fVar43 = auVar47._0_4_ + auVar47._4_4_;
    fVar40 = (fVar50 - fVar56) * 0.5 * ABS(fVar57);
    fVar41 = (fVar52 - fVar59) * 0.5 * ABS(fVar60);
    fVar42 = (fVar54 - fVar61) * 0.5 * ABS(fVar62);
    auVar19._0_4_ = fVar40 + fVar41;
    auVar19._4_4_ = fVar42 + ABS(fVar69) * 0.0;
    auVar19._8_4_ = fVar40 + fVar41;
    auVar19._12_4_ = fVar42 + ABS(fVar69) * 0.0;
    auVar47 = NEON_ext(auVar19,auVar19,4,1);
    fVar40 = auVar47._0_4_ + auVar47._4_4_;
    if (fVar43 + fVar40 <= *(float *)(param_1 + 0x160)) {
      return auVar8;
    }
    if (*(float *)(param_1 + 0x170) <= fVar43 - fVar40) {
      return auVar8;
    }
    uVar16 = FUN_00ca4a58(auVar8,&local_90,&local_60,0,0);
    if ((uVar16 & 1) == 0) {
      auVar10._8_4_ = fVar61;
      auVar10._0_8_ = CONCAT44(fVar59,fVar56);
      auVar10._12_4_ = 0;
      auVar11._8_4_ = fVar54;
      auVar11._0_8_ = CONCAT44(fVar52,fVar50);
      auVar11._12_4_ = 0;
      auVar9._4_4_ = fVar51;
      auVar9._0_4_ = fVar44;
      auVar9._8_4_ = fVar53;
      auVar9._12_4_ = fVar55;
      FUN_026f92a4(auVar10,auVar11,auVar9,local_110);
      fVar51 = local_110._0_4_;
      fVar53 = local_110._4_4_;
      fVar55 = local_110._8_4_;
      fVar43 = local_110._12_4_;
      auVar20._0_4_ = fVar57 * fVar51 + fVar60 * fVar53;
      auVar20._4_4_ = fVar62 * fVar55 + fVar69 * fVar43;
      auVar20._8_4_ = fVar57 * fVar51 + fVar60 * fVar53;
      auVar20._12_4_ = fVar62 * fVar55 + fVar69 * fVar43;
      auVar47 = NEON_ext(auVar20,auVar20,4,1);
      fVar44 = auVar47._0_4_ + auVar47._4_4_;
      if ((0.0 < fVar44) &&
         (auVar21._0_4_ = fVar51 * fVar51 + fVar53 * fVar53,
         auVar21._4_4_ = fVar55 * fVar55 + fVar43 * fVar43,
         auVar21._8_4_ = fVar51 * fVar51 + fVar53 * fVar53,
         auVar21._12_4_ = fVar55 * fVar55 + fVar43 * fVar43, auVar47 = NEON_ext(auVar21,auVar21,4,1)
         , *(float *)(param_1 + 0x120) * (auVar47._0_4_ + auVar47._4_4_) < fVar44 * fVar44)) {
        return local_110;
      }
      fVar51 = local_100._0_4_;
      fVar53 = local_100._4_4_;
      fVar55 = local_100._8_4_;
      fVar43 = local_100._12_4_;
      auVar22._0_4_ = fVar57 * fVar51 + fVar60 * fVar53;
      auVar22._4_4_ = fVar62 * fVar55 + fVar69 * fVar43;
      auVar22._8_4_ = fVar57 * fVar51 + fVar60 * fVar53;
      auVar22._12_4_ = fVar62 * fVar55 + fVar69 * fVar43;
      auVar47 = NEON_ext(auVar22,auVar22,4,1);
      fVar44 = auVar47._0_4_ + auVar47._4_4_;
      if ((0.0 < fVar44) &&
         (auVar23._0_4_ = fVar51 * fVar51 + fVar53 * fVar53,
         auVar23._4_4_ = fVar55 * fVar55 + fVar43 * fVar43,
         auVar23._8_4_ = fVar51 * fVar51 + fVar53 * fVar53,
         auVar23._12_4_ = fVar55 * fVar55 + fVar43 * fVar43, auVar47 = NEON_ext(auVar23,auVar23,4,1)
         , *(float *)(param_1 + 0x120) * (auVar47._0_4_ + auVar47._4_4_) < fVar44 * fVar44)) {
        return local_100;
      }
      fVar51 = local_f0._0_4_;
      fVar53 = local_f0._4_4_;
      fVar55 = local_f0._8_4_;
      fVar43 = local_f0._12_4_;
      auVar24._0_4_ = fVar57 * fVar51 + fVar60 * fVar53;
      auVar24._4_4_ = fVar62 * fVar55 + fVar69 * fVar43;
      auVar24._8_4_ = fVar57 * fVar51 + fVar60 * fVar53;
      auVar24._12_4_ = fVar62 * fVar55 + fVar69 * fVar43;
      auVar47 = NEON_ext(auVar24,auVar24,4,1);
      fVar44 = auVar47._0_4_ + auVar47._4_4_;
      if ((0.0 < fVar44) &&
         (auVar25._0_4_ = fVar51 * fVar51 + fVar53 * fVar53,
         auVar25._4_4_ = fVar55 * fVar55 + fVar43 * fVar43,
         auVar25._8_4_ = fVar51 * fVar51 + fVar53 * fVar53,
         auVar25._12_4_ = fVar55 * fVar55 + fVar43 * fVar43, auVar47 = NEON_ext(auVar25,auVar25,4,1)
         , *(float *)(param_1 + 0x120) * (auVar47._0_4_ + auVar47._4_4_) < fVar44 * fVar44)) {
        return local_f0;
      }
      fVar51 = local_e0._0_4_;
      fVar53 = local_e0._4_4_;
      fVar55 = local_e0._8_4_;
      fVar43 = local_e0._12_4_;
      auVar26._0_4_ = fVar57 * fVar51 + fVar60 * fVar53;
      auVar26._4_4_ = fVar62 * fVar55 + fVar69 * fVar43;
      auVar26._8_4_ = fVar57 * fVar51 + fVar60 * fVar53;
      auVar26._12_4_ = fVar62 * fVar55 + fVar69 * fVar43;
      auVar47 = NEON_ext(auVar26,auVar26,4,1);
      fVar44 = auVar47._0_4_ + auVar47._4_4_;
      if ((0.0 < fVar44) &&
         (auVar27._0_4_ = fVar51 * fVar51 + fVar53 * fVar53,
         auVar27._4_4_ = fVar55 * fVar55 + fVar43 * fVar43,
         auVar27._8_4_ = fVar51 * fVar51 + fVar53 * fVar53,
         auVar27._12_4_ = fVar55 * fVar55 + fVar43 * fVar43, auVar47 = NEON_ext(auVar27,auVar27,4,1)
         , *(float *)(param_1 + 0x120) * (auVar47._0_4_ + auVar47._4_4_) < fVar44 * fVar44)) {
        return local_e0;
      }
      fVar51 = local_d0._0_4_;
      fVar53 = local_d0._4_4_;
      fVar55 = local_d0._8_4_;
      fVar43 = local_d0._12_4_;
      auVar28._0_4_ = fVar57 * fVar51 + fVar60 * fVar53;
      auVar28._4_4_ = fVar62 * fVar55 + fVar69 * fVar43;
      auVar28._8_4_ = fVar57 * fVar51 + fVar60 * fVar53;
      auVar28._12_4_ = fVar62 * fVar55 + fVar69 * fVar43;
      auVar47 = NEON_ext(auVar28,auVar28,4,1);
      fVar44 = auVar47._0_4_ + auVar47._4_4_;
      if ((0.0 < fVar44) &&
         (auVar29._0_4_ = fVar51 * fVar51 + fVar53 * fVar53,
         auVar29._4_4_ = fVar55 * fVar55 + fVar43 * fVar43,
         auVar29._8_4_ = fVar51 * fVar51 + fVar53 * fVar53,
         auVar29._12_4_ = fVar55 * fVar55 + fVar43 * fVar43, auVar47 = NEON_ext(auVar29,auVar29,4,1)
         , *(float *)(param_1 + 0x120) * (auVar47._0_4_ + auVar47._4_4_) < fVar44 * fVar44)) {
        return local_d0;
      }
      fVar51 = local_c0._0_4_;
      fVar53 = local_c0._4_4_;
      fVar55 = local_c0._8_4_;
      fVar43 = local_c0._12_4_;
      auVar30._0_4_ = fVar57 * fVar51 + fVar60 * fVar53;
      auVar30._4_4_ = fVar62 * fVar55 + fVar69 * fVar43;
      auVar30._8_4_ = fVar57 * fVar51 + fVar60 * fVar53;
      auVar30._12_4_ = fVar62 * fVar55 + fVar69 * fVar43;
      auVar47 = NEON_ext(auVar30,auVar30,4,1);
      fVar44 = auVar47._0_4_ + auVar47._4_4_;
      if ((0.0 < fVar44) &&
         (auVar31._0_4_ = fVar51 * fVar51 + fVar53 * fVar53,
         auVar31._4_4_ = fVar55 * fVar55 + fVar43 * fVar43,
         auVar31._8_4_ = fVar51 * fVar51 + fVar53 * fVar53,
         auVar31._12_4_ = fVar55 * fVar55 + fVar43 * fVar43, auVar47 = NEON_ext(auVar31,auVar31,4,1)
         , *(float *)(param_1 + 0x120) * (auVar47._0_4_ + auVar47._4_4_) < fVar44 * fVar44)) {
        return local_c0;
      }
      fVar51 = local_b0._0_4_;
      fVar53 = local_b0._4_4_;
      fVar55 = local_b0._8_4_;
      fVar43 = local_b0._12_4_;
      auVar32._0_4_ = fVar57 * fVar51 + fVar60 * fVar53;
      auVar32._4_4_ = fVar62 * fVar55 + fVar69 * fVar43;
      auVar32._8_4_ = fVar57 * fVar51 + fVar60 * fVar53;
      auVar32._12_4_ = fVar62 * fVar55 + fVar69 * fVar43;
      auVar47 = NEON_ext(auVar32,auVar32,4,1);
      fVar44 = auVar47._0_4_ + auVar47._4_4_;
      if ((0.0 < fVar44) &&
         (auVar33._0_4_ = fVar51 * fVar51 + fVar53 * fVar53,
         auVar33._4_4_ = fVar55 * fVar55 + fVar43 * fVar43,
         auVar33._8_4_ = fVar51 * fVar51 + fVar53 * fVar53,
         auVar33._12_4_ = fVar55 * fVar55 + fVar43 * fVar43, auVar47 = NEON_ext(auVar33,auVar33,4,1)
         , *(float *)(param_1 + 0x120) * (auVar47._0_4_ + auVar47._4_4_) < fVar44 * fVar44)) {
        return local_b0;
      }
      auVar12._8_4_ = fStack_98;
      auVar12._0_8_ = local_a0;
      auVar12._12_4_ = fStack_94;
      auVar7._8_4_ = fStack_98;
      auVar7._0_8_ = local_a0;
      auVar6._8_4_ = fStack_98;
      auVar6._0_8_ = local_a0;
      auVar5._8_4_ = fStack_98;
      auVar5._0_8_ = local_a0;
      auVar4._8_4_ = fStack_98;
      auVar4._0_8_ = local_a0;
      fVar51 = (float)local_a0;
      fVar53 = (float)((ulong)local_a0 >> 0x20);
      auVar34._0_4_ = fVar57 * fVar51 + fVar60 * fVar53;
      auVar34._4_4_ = fVar62 * fStack_98 + fVar69 * fStack_94;
      auVar34._8_4_ = fVar57 * fVar51 + fVar60 * fVar53;
      auVar34._12_4_ = fVar62 * fStack_98 + fVar69 * fStack_94;
      auVar47 = NEON_ext(auVar34,auVar34,4,1);
      fVar44 = auVar47._0_4_ + auVar47._4_4_;
      if ((0.0 < fVar44) &&
         (auVar35._0_4_ = fVar51 * fVar51 + fVar53 * fVar53,
         auVar35._4_4_ = fStack_98 * fStack_98 + fStack_94 * fStack_94,
         auVar35._8_4_ = fVar51 * fVar51 + fVar53 * fVar53,
         auVar35._12_4_ = fStack_98 * fStack_98 + fStack_94 * fStack_94,
         auVar47 = NEON_ext(auVar35,auVar35,4,1),
         *(float *)(param_1 + 0x120) * (auVar47._0_4_ + auVar47._4_4_) < fVar44 * fVar44)) {
        return auVar12;
      }
      uVar120 = a64_TBL(ZEXT816(0),local_110,DAT_03cb56c8);
      uVar121 = a64_TBL(ZEXT816(0),local_110,DAT_03cb54d8);
      uVar112 = a64_TBL(ZEXT816(0),auVar109,DAT_03cb5488);
      uVar122 = a64_TBL(ZEXT816(0),local_110,DAT_03cb5488);
      uVar124 = a64_TBL(ZEXT816(0),local_110,DAT_03cb54c0);
      uVar45 = a64_TBL(ZEXT816(0),auVar109,DAT_03cb56c8);
      fVar53 = (float)uVar112;
      fVar55 = (float)((ulong)uVar112 >> 0x20);
      fVar44 = (float)uVar45;
      fVar51 = (float)((ulong)uVar45 >> 0x20);
      uVar45 = a64_TBL(ZEXT816(0),auVar109,DAT_03cb54c0);
      uVar112 = a64_TBL(ZEXT816(0),auVar109,DAT_03cb54d8);
      uVar126 = a64_TBL(ZEXT816(0),local_100,DAT_03cb56c8);
      uVar129 = a64_TBL(ZEXT816(0),local_100,DAT_03cb54d8);
      fVar43 = (float)uVar45;
      fVar50 = (float)((ulong)uVar45 >> 0x20);
      uVar123 = a64_TBL(ZEXT816(0),local_100,DAT_03cb5488);
      uVar45 = a64_TBL(ZEXT816(0),local_100,DAT_03cb54c0);
      fVar52 = (float)uVar112;
      fVar54 = (float)((ulong)uVar112 >> 0x20);
      uVar125 = a64_TBL(ZEXT816(0),local_f0,DAT_03cb56c8);
      uVar127 = a64_TBL(ZEXT816(0),local_f0,DAT_03cb54d8);
      uVar130 = a64_TBL(ZEXT816(0),local_f0,DAT_03cb5488);
      uVar81 = a64_TBL(ZEXT816(0),local_f0,DAT_03cb54c0);
      uVar131 = a64_TBL(ZEXT816(0),local_e0,DAT_03cb56c8);
      uVar128 = a64_TBL(ZEXT816(0),local_e0,DAT_03cb5488);
      uVar112 = a64_TBL(ZEXT816(0),local_d0,DAT_03cb56c8);
      uVar132 = a64_TBL(ZEXT816(0),local_e0,DAT_03cb54d8);
      uVar84 = a64_TBL(ZEXT816(0),local_e0,DAT_03cb54c0);
      uVar82 = a64_TBL(ZEXT816(0),local_d0,DAT_03cb54d8);
      uVar85 = a64_TBL(ZEXT816(0),local_d0,DAT_03cb5488);
      uVar90 = a64_TBL(ZEXT816(0),local_d0,DAT_03cb54c0);
      uVar91 = a64_TBL(ZEXT816(0),local_c0,DAT_03cb5488);
      uVar86 = a64_TBL(ZEXT816(0),local_c0,DAT_03cb54d8);
      uStack_168 = CONCAT44(fVar50 * (float)((ulong)uVar127 >> 0x20) -
                            fVar54 * (float)((ulong)uVar81 >> 0x20),
                            fVar43 * (float)uVar127 - fVar52 * (float)uVar81);
      local_170 = CONCAT44(fVar55 * (float)((ulong)uVar125 >> 0x20) -
                           fVar51 * (float)((ulong)uVar130 >> 0x20),
                           fVar53 * (float)uVar125 - fVar44 * (float)uVar130);
      uStack_158 = CONCAT44(fVar50 * (float)((ulong)uVar132 >> 0x20) -
                            fVar54 * (float)((ulong)uVar84 >> 0x20),
                            fVar43 * (float)uVar132 - fVar52 * (float)uVar84);
      uStack_160 = CONCAT44(fVar55 * (float)((ulong)uVar131 >> 0x20) -
                            fVar51 * (float)((ulong)uVar128 >> 0x20),
                            fVar53 * (float)uVar131 - fVar44 * (float)uVar128);
      uVar81 = a64_TBL(ZEXT816(0),local_c0,DAT_03cb56c8);
      uVar125 = a64_TBL(ZEXT816(0),local_c0,DAT_03cb54c0);
      local_190[1] = CONCAT44((float)((ulong)uVar121 >> 0x20) * fVar50 -
                              (float)((ulong)uVar124 >> 0x20) * fVar54,
                              (float)uVar121 * fVar43 - (float)uVar124 * fVar52);
      local_190[0] = CONCAT44((float)((ulong)uVar120 >> 0x20) * fVar55 -
                              (float)((ulong)uVar122 >> 0x20) * fVar51,
                              (float)uVar120 * fVar53 - (float)uVar122 * fVar44);
      local_190[3] = CONCAT44(fVar50 * (float)((ulong)uVar129 >> 0x20) -
                              fVar54 * (float)((ulong)uVar45 >> 0x20),
                              fVar43 * (float)uVar129 - fVar52 * (float)uVar45);
      local_190[2] = CONCAT44(fVar55 * (float)((ulong)uVar126 >> 0x20) -
                              fVar51 * (float)((ulong)uVar123 >> 0x20),
                              fVar53 * (float)uVar126 - fVar44 * (float)uVar123);
      auVar4._12_4_ = fStack_94;
      uVar121 = a64_TBL(ZEXT816(0),auVar4,DAT_03cb54c0);
      uVar120 = a64_TBL(ZEXT816(0),local_b0,DAT_03cb54c0);
      uVar84 = a64_TBL(ZEXT816(0),local_b0,DAT_03cb5488);
      lVar17 = 0;
      uStack_148 = CONCAT44(fVar50 * (float)((ulong)uVar82 >> 0x20) -
                            fVar54 * (float)((ulong)uVar90 >> 0x20),
                            fVar43 * (float)uVar82 - fVar52 * (float)uVar90);
      local_150 = CONCAT44(fVar55 * (float)((ulong)uVar112 >> 0x20) -
                           fVar51 * (float)((ulong)uVar85 >> 0x20),
                           fVar53 * (float)uVar112 - fVar44 * (float)uVar85);
      uStack_138 = CONCAT44(fVar50 * (float)((ulong)uVar86 >> 0x20) -
                            fVar54 * (float)((ulong)uVar125 >> 0x20),
                            fVar43 * (float)uVar86 - fVar52 * (float)uVar125);
      uStack_140 = CONCAT44(fVar55 * (float)((ulong)uVar81 >> 0x20) -
                            fVar51 * (float)((ulong)uVar91 >> 0x20),
                            fVar53 * (float)uVar81 - fVar44 * (float)uVar91);
      uVar45 = a64_TBL(ZEXT816(0),local_b0,DAT_03cb56c8);
      uVar112 = a64_TBL(ZEXT816(0),local_b0,DAT_03cb54d8);
      auVar5._12_4_ = fStack_94;
      uVar82 = a64_TBL(ZEXT816(0),auVar5,DAT_03cb54d8);
      auVar6._12_4_ = fStack_94;
      uVar81 = a64_TBL(ZEXT816(0),auVar6,DAT_03cb56c8);
      auVar7._12_4_ = fStack_94;
      uVar85 = a64_TBL(ZEXT816(0),auVar7,DAT_03cb5488);
      uStack_128 = CONCAT44(fVar50 * (float)((ulong)uVar112 >> 0x20) -
                            fVar54 * (float)((ulong)uVar120 >> 0x20),
                            fVar43 * (float)uVar112 - fVar52 * (float)uVar120);
      local_130 = CONCAT44(fVar55 * (float)((ulong)uVar45 >> 0x20) -
                           fVar51 * (float)((ulong)uVar84 >> 0x20),
                           fVar53 * (float)uVar45 - fVar44 * (float)uVar84);
      uStack_118 = CONCAT44(fVar50 * (float)((ulong)uVar82 >> 0x20) -
                            fVar54 * (float)((ulong)uVar121 >> 0x20),
                            fVar43 * (float)uVar82 - fVar52 * (float)uVar121);
      uStack_120 = CONCAT44(fVar55 * (float)((ulong)uVar81 >> 0x20) -
                            fVar51 * (float)((ulong)uVar85 >> 0x20),
                            fVar53 * (float)uVar81 - fVar44 * (float)uVar85);
      do {
        lVar1 = (long)*(int *)((long)&DAT_03d64c78 + lVar17);
        lVar2 = (long)*(int *)((long)&DAT_03d64c7c + lVar17);
        auVar49._8_8_ = *(undefined8 *)(local_110 + lVar1 * 0x10 + 8);
        auVar49._0_8_ = *(undefined8 *)(local_110 + lVar1 * 0x10);
        uVar112 = a64_TBL(ZEXT816(0),auVar49,DAT_03cb56c8);
        auVar80._0_4_ = (float)*(undefined8 *)(local_110 + lVar2 * 0x10) - (float)auVar49._0_8_;
        fVar43 = (float)((ulong)auVar49._0_8_ >> 0x20);
        auVar80._4_4_ = (float)((ulong)*(undefined8 *)(local_110 + lVar2 * 0x10) >> 0x20) - fVar43;
        auVar80._8_4_ = (float)*(undefined8 *)(local_110 + lVar2 * 0x10 + 8) - (float)auVar49._8_8_;
        fVar50 = (float)((ulong)auVar49._8_8_ >> 0x20);
        auVar80._12_4_ =
             (float)((ulong)*(undefined8 *)(local_110 + lVar2 * 0x10 + 8) >> 0x20) - fVar50;
        uVar81 = a64_TBL(ZEXT816(0),auVar49,DAT_03cb54d8);
        uVar82 = a64_TBL(ZEXT816(0),auVar80,DAT_03cb5488);
        uVar84 = a64_TBL(ZEXT816(0),auVar80,DAT_03cb54c0);
        uVar85 = a64_TBL(ZEXT816(0),auVar49,DAT_03cb5488);
        uVar45 = a64_TBL(ZEXT816(0),auVar49,DAT_03cb54c0);
        uVar86 = a64_TBL(ZEXT816(0),auVar80,DAT_03cb56c8);
        uVar90 = a64_TBL(ZEXT816(0),auVar80,DAT_03cb54d8);
        fVar52 = (float)uVar112 * (float)uVar82 - (float)uVar85 * (float)uVar86;
        fVar54 = (float)((ulong)uVar112 >> 0x20) * (float)((ulong)uVar82 >> 0x20) -
                 (float)((ulong)uVar85 >> 0x20) * (float)((ulong)uVar86 >> 0x20);
        fVar56 = (float)uVar81 * (float)uVar84 - (float)uVar45 * (float)uVar90;
        fVar59 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar84 >> 0x20) -
                 (float)((ulong)uVar45 >> 0x20) * (float)((ulong)uVar90 >> 0x20);
        fVar44 = (float)local_190[lVar1 * 2] * fVar52;
        fVar51 = (float)((ulong)local_190[lVar1 * 2] >> 0x20) * fVar54;
        fVar53 = (float)local_190[lVar1 * 2 + 1] * fVar56;
        fVar55 = (float)((ulong)local_190[lVar1 * 2 + 1] >> 0x20) * fVar59;
        auVar36._0_4_ = fVar44 + fVar51;
        auVar36._4_4_ = fVar53 + fVar55;
        auVar36._8_4_ = fVar44 + fVar51;
        auVar36._12_4_ = fVar53 + fVar55;
        auVar47 = NEON_ext(auVar36,auVar36,4,1);
        fVar44 = auVar47._0_4_ + auVar47._4_4_;
        fVar51 = auVar47._8_4_ + auVar47._12_4_;
        fVar53 = auVar47._0_4_ + auVar47._4_4_;
        fVar55 = auVar47._8_4_ + auVar47._12_4_;
        if (0.0 < fVar44) {
          fVar52 = fVar52 * (float)local_190[lVar2 * 2];
          fVar54 = fVar54 * (float)((ulong)local_190[lVar2 * 2] >> 0x20);
          fVar56 = fVar56 * (float)local_190[lVar2 * 2 + 1];
          fVar59 = fVar59 * (float)((ulong)local_190[lVar2 * 2 + 1] >> 0x20);
          auVar37._0_4_ = fVar52 + fVar54;
          auVar37._4_4_ = fVar56 + fVar59;
          auVar37._8_4_ = fVar52 + fVar54;
          auVar37._12_4_ = fVar56 + fVar59;
          auVar47 = NEON_ext(auVar37,auVar37,4,1);
          fVar52 = auVar47._0_4_ + auVar47._4_4_;
          if (fVar52 < 0.0) {
            fVar52 = (float)auVar49._0_8_ + auVar80._0_4_ * (fVar44 / (fVar44 - fVar52));
            fVar43 = fVar43 + auVar80._4_4_ * (fVar51 / (fVar51 - (auVar47._8_4_ + auVar47._12_4_)))
            ;
            fVar51 = (float)auVar49._8_8_ +
                     auVar80._8_4_ * (fVar53 / (fVar53 - (auVar47._0_4_ + auVar47._4_4_)));
            fVar50 = fVar50 + auVar80._12_4_ *
                              (fVar55 / (fVar55 - (auVar47._8_4_ + auVar47._12_4_)));
            auVar38._0_4_ = fVar57 * fVar52 + fVar60 * fVar43;
            auVar38._4_4_ = fVar62 * fVar51 + fVar69 * fVar50;
            auVar38._8_4_ = fVar57 * fVar52 + fVar60 * fVar43;
            auVar38._12_4_ = fVar62 * fVar51 + fVar69 * fVar50;
            auVar47 = NEON_ext(auVar38,auVar38,4,1);
            fVar44 = auVar47._0_4_ + auVar47._4_4_;
            if ((0.0 < fVar44) &&
               (auVar39._0_4_ = fVar52 * fVar52 + fVar43 * fVar43,
               auVar39._4_4_ = fVar51 * fVar51 + fVar50 * fVar50,
               auVar39._8_4_ = fVar52 * fVar52 + fVar43 * fVar43,
               auVar39._12_4_ = fVar51 * fVar51 + fVar50 * fVar50,
               auVar47 = NEON_ext(auVar39,auVar39,4,1),
               *(float *)(param_1 + 0x120) * (auVar47._0_4_ + auVar47._4_4_) < fVar44 * fVar44)) {
              return auVar49;
            }
          }
        }
        lVar17 = lVar17 + 8;
        if (lVar17 == 0x60) {
          return auVar8;
        }
      } while( true );
    }
  }
  return auVar8;
}


