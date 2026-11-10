/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0318ac30; name: FUN_0318ac30
 */


bool FUN_0318ac30(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 long *param_5,long *param_6,undefined8 param_7,float *param_8)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [12];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [12];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  long lVar15;
  long lVar16;
  byte bVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar37;
  undefined1 auVar36 [16];
  float fVar38;
  int iVar39;
  float fVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar68;
  undefined1 auVar67 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar62 [16];
  undefined1 auVar61 [16];
  byte bVar77;
  float fVar69;
  byte bVar81;
  byte bVar82;
  float fVar79;
  undefined8 uVar71;
  byte bVar86;
  byte bVar87;
  float fVar84;
  undefined1 auVar72 [15];
  byte bVar91;
  float fVar89;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  int iVar70;
  byte bVar78;
  int iVar80;
  byte bVar83;
  int iVar85;
  byte bVar88;
  int iVar90;
  byte bVar92;
  byte bVar93;
  undefined1 auVar76 [16];
  undefined1 in_q20 [16];
  undefined1 auVar99 [16];
  undefined1 auVar98 [16];
  undefined1 auVar97 [16];
  undefined1 auVar96 [16];
  undefined1 auVar95 [16];
  undefined1 auVar94 [16];
  undefined1 auVar100 [16];
  undefined1 in_q22 [16];
  undefined1 auVar106 [16];
  undefined1 auVar105 [16];
  undefined1 auVar104 [16];
  undefined1 auVar103 [16];
  undefined1 auVar102 [16];
  undefined1 auVar101 [16];
  
  lVar15 = *param_6;
  fVar27 = (float)*(undefined8 *)(param_1 + 0x30);
  fVar20 = (float)*param_3;
  fVar21 = fVar27 * fVar20;
  fVar28 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  fVar24 = (float)((ulong)*param_3 >> 0x20);
  fVar25 = fVar28 * fVar24;
  fVar29 = (float)*(undefined8 *)(param_1 + 0x38);
  fVar30 = (float)param_3[1];
  fVar26 = fVar29 * fVar30;
  fVar22 = fVar21 + fVar25 + fVar26;
  fVar26 = fVar21 + fVar25 + fVar26;
  fVar21 = (float)*param_2;
  fVar31 = fVar20 * fVar21;
  fVar25 = (float)((ulong)*param_2 >> 0x20);
  fVar33 = fVar24 * fVar25;
  fVar23 = (float)param_2[1];
  fVar35 = fVar30 * fVar23;
  fVar32 = fVar31 + fVar33 + fVar35;
  auVar36._0_4_ = fVar21 - fVar20 * fVar32;
  auVar36._4_4_ = fVar25 - fVar24 * (fVar31 + fVar33 + fVar35);
  auVar36._8_4_ = fVar23 - fVar30 * fVar32;
  fVar25 = (float)((ulong)param_2[1] >> 0x20) + *(float *)(param_1 + 0xa0);
  auVar36._12_4_ = fVar25;
  fVar23 = (float)param_2[2] - (float)*(undefined8 *)(param_1 + 0x50);
  fVar31 = (float)((ulong)param_2[2] >> 0x20) -
           (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
  fVar32 = (float)param_2[3] - (float)*(undefined8 *)(param_1 + 0x58);
  fVar58 = (fVar27 - fVar20 * fVar22) - auVar36._0_4_;
  fVar59 = (fVar28 - fVar24 * fVar26) - auVar36._4_4_;
  fVar60 = (fVar29 - fVar30 * fVar22) - auVar36._8_4_;
  auVar36 = NEON_ext(auVar36,auVar36,8,1);
  fVar27 = fVar20 * fVar23;
  fVar29 = fVar24 * fVar31;
  fVar22 = fVar30 * fVar32;
  fVar37 = auVar36._4_4_ * auVar36._4_4_;
  fVar28 = fVar27 + fVar29 + fVar22;
  fVar35 = (float)param_5[4];
  fVar38 = fVar58 * fVar35;
  fVar34 = (float)((ulong)param_5[4] >> 0x20);
  fVar40 = fVar59 * fVar34;
  fVar21 = fVar60 * (float)param_5[5];
  fVar23 = fVar23 - fVar20 * fVar28;
  fVar31 = fVar31 - fVar24 * (fVar27 + fVar29 + fVar22);
  fVar32 = fVar32 - fVar30 * fVar28;
  fVar22 = (float)param_5[2];
  fVar27 = fVar22 * fVar58;
  fVar33 = (float)((ulong)param_5[2] >> 0x20);
  fVar29 = fVar33 * fVar59;
  fVar20 = (float)param_5[3] * fVar60;
  fVar28 = fVar27 + fVar29 + fVar20;
  fVar20 = fVar27 + fVar29 + fVar20;
  fVar29 = fVar38 + fVar40 + fVar21;
  fVar21 = fVar38 + fVar40 + fVar21;
  fVar22 = fVar22 * fVar23;
  fVar33 = fVar33 * fVar31;
  fVar30 = (float)param_5[3] * fVar32;
  fVar40 = fVar60 * fVar60 + fVar58 * fVar58 + fVar59 * fVar59;
  fVar68 = fVar60 * fVar60 + fVar58 * fVar58 + fVar59 * fVar59;
  fVar35 = fVar35 * fVar23;
  fVar34 = fVar34 * fVar31;
  fVar32 = (float)param_5[5] * fVar32;
  fVar24 = fVar22 + fVar33 + fVar30;
  fVar30 = fVar22 + fVar33 + fVar30;
  fVar31 = fVar35 + fVar34 + fVar32;
  fVar32 = fVar35 + fVar34 + fVar32;
  fVar33 = fVar40 - fVar37;
  fVar37 = fVar68 - fVar37;
  fVar22 = (float)param_5[10];
  fVar23 = (float)((ulong)param_5[10] >> 0x20);
  fVar27 = fVar22 * (float)param_5[6] - fVar24;
  uVar44 = SUB41(fVar27,0);
  uVar18 = (undefined1)((uint)fVar27 >> 8);
  uVar19 = (undefined1)((uint)fVar27 >> 0x10);
  uVar45 = (undefined1)((uint)fVar27 >> 0x18);
  fVar27 = fVar23 * (float)((ulong)param_5[6] >> 0x20) - fVar30;
  uVar46 = SUB41(fVar27,0);
  uVar47 = (undefined1)((uint)fVar27 >> 8);
  uVar48 = (undefined1)((uint)fVar27 >> 0x10);
  uVar49 = (undefined1)((uint)fVar27 >> 0x18);
  fVar27 = fVar22 * (float)param_5[7] - fVar24;
  uVar50 = SUB41(fVar27,0);
  uVar51 = (undefined1)((uint)fVar27 >> 8);
  uVar52 = (undefined1)((uint)fVar27 >> 0x10);
  uVar53 = (undefined1)((uint)fVar27 >> 0x18);
  fVar27 = fVar23 * (float)((ulong)param_5[7] >> 0x20) - fVar30;
  uVar54 = SUB41(fVar27,0);
  uVar55 = (undefined1)((uint)fVar27 >> 8);
  uVar56 = (undefined1)((uint)fVar27 >> 0x10);
  uVar57 = (undefined1)((uint)fVar27 >> 0x18);
  fVar27 = fVar22 * (float)param_5[8] - fVar31;
  fVar35 = fVar23 * (float)((ulong)param_5[8] >> 0x20) - fVar32;
  fVar34 = fVar22 * (float)param_5[9] - fVar31;
  fVar38 = fVar23 * (float)((ulong)param_5[9] >> 0x20) - fVar32;
  if (0.0 <= fVar33) {
    lVar16 = 0;
    do {
      uVar71 = *(undefined8 *)(*param_5 + lVar16 * 8 + 8);
      auVar74._0_4_ =
           (float)CONCAT13(uVar45,CONCAT12(uVar19,CONCAT11(uVar18,uVar44))) *
           (float)CONCAT13(uVar45,CONCAT12(uVar19,CONCAT11(uVar18,uVar44))) + fVar27 * fVar27;
      auVar74._4_4_ =
           (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46))) *
           (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46))) + fVar35 * fVar35;
      auVar74._8_4_ =
           (float)CONCAT13(uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50))) *
           (float)CONCAT13(uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50))) + fVar34 * fVar34;
      auVar74._12_4_ =
           (float)CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar55,uVar54))) *
           (float)CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar55,uVar54))) + fVar38 * fVar38;
      fVar25 = fVar28 * (float)CONCAT13(uVar45,CONCAT12(uVar19,CONCAT11(uVar18,uVar44))) +
               fVar29 * fVar27;
      fVar40 = fVar20 * (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46))) +
               fVar21 * fVar35;
      fVar58 = fVar28 * (float)CONCAT13(uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50))) +
               fVar29 * fVar34;
      fVar38 = fVar20 * (float)CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar55,uVar54))) +
               fVar21 * fVar38;
      iVar39 = -(uint)(fVar25 < 0.0);
      iVar41 = -(uint)(fVar40 < 0.0);
      iVar42 = -(uint)(fVar58 < 0.0);
      iVar43 = -(uint)(fVar38 < 0.0);
      fVar27 = fVar25 * fVar25 - fVar33 * auVar74._0_4_;
      fVar26 = fVar40 * fVar40 - fVar37 * auVar74._4_4_;
      fVar35 = fVar58 * fVar58 - fVar33 * auVar74._8_4_;
      fVar34 = fVar38 * fVar38 - fVar37 * auVar74._12_4_;
      auVar11[1] = 0;
      auVar11[0] = (byte)((ulong)uVar71 >> 8);
      auVar11._2_10_ = in_q22._6_10_;
      auVar103._0_8_ = auVar11._0_8_ << 0x20;
      auVar103._10_6_ = in_q22._10_6_;
      auVar103[8] = (char)((ulong)uVar71 >> 0x10);
      auVar103[9] = 0;
      auVar105._14_2_ = in_q22._14_2_;
      auVar105._0_12_ = auVar103._0_12_;
      auVar105[0xc] = (char)((ulong)uVar71 >> 0x18);
      auVar105[0xd] = 0;
      auVar101._4_12_ = auVar105._4_12_;
      auVar101._1_3_ = 0;
      auVar101[0] = (byte)uVar71;
      auVar102._8_8_ = auVar105._8_8_;
      auVar102._0_6_ = auVar101._0_6_;
      auVar102._6_2_ = 0;
      auVar104._12_4_ = auVar105._12_4_;
      auVar104._0_10_ = auVar102._0_10_;
      auVar104._10_2_ = 0;
      auVar106._0_14_ = auVar104._0_14_;
      auVar106._14_2_ = 0;
      iVar70 = -(uint)(0.0 < fVar27);
      iVar80 = -(uint)(0.0 < fVar26);
      iVar85 = -(uint)(0.0 < fVar35);
      iVar90 = -(uint)(0.0 < fVar34);
      bVar17 = (byte)((uint)iVar70 >> 8);
      bVar77 = (byte)((uint)iVar70 >> 0x10);
      bVar78 = (byte)((uint)iVar70 >> 0x18);
      bVar81 = (byte)((uint)iVar80 >> 8);
      bVar82 = (byte)((uint)iVar80 >> 0x10);
      bVar83 = (byte)((uint)iVar80 >> 0x18);
      bVar86 = (byte)((uint)iVar85 >> 8);
      bVar87 = (byte)((uint)iVar85 >> 0x10);
      bVar88 = (byte)((uint)iVar85 >> 0x18);
      bVar91 = (byte)((uint)iVar90 >> 8);
      bVar92 = (byte)((uint)iVar90 >> 0x10);
      bVar93 = (byte)((uint)iVar90 >> 0x18);
      auVar36 = *(undefined1 (*) [16])(lVar15 + lVar16 * 0x10);
      fVar25 = (-fVar25 -
               SQRT((float)CONCAT13((byte)((uint)fVar27 >> 0x18) & bVar78,
                                    CONCAT12((byte)((uint)fVar27 >> 0x10) & bVar77,
                                             CONCAT11((byte)((uint)fVar27 >> 8) & bVar17,
                                                      SUB41(fVar27,0) & (byte)iVar70))))) /
               auVar74._0_4_;
      fVar26 = (-fVar40 -
               SQRT((float)CONCAT13((byte)((uint)fVar26 >> 0x18) & bVar83,
                                    CONCAT12((byte)((uint)fVar26 >> 0x10) & bVar82,
                                             CONCAT11((byte)((uint)fVar26 >> 8) & bVar81,
                                                      SUB41(fVar26,0) & (byte)iVar80))))) /
               auVar74._4_4_;
      fVar40 = (-fVar58 -
               SQRT((float)CONCAT13((byte)((uint)fVar35 >> 0x18) & bVar88,
                                    CONCAT12((byte)((uint)fVar35 >> 0x10) & bVar87,
                                             CONCAT11((byte)((uint)fVar35 >> 8) & bVar86,
                                                      SUB41(fVar35,0) & (byte)iVar85))))) /
               auVar74._8_4_;
      fVar58 = (-fVar38 -
               SQRT((float)CONCAT13((byte)((uint)fVar34 >> 0x18) & bVar93,
                                    CONCAT12((byte)((uint)fVar34 >> 0x10) & bVar92,
                                             CONCAT11((byte)((uint)fVar34 >> 8) & bVar91,
                                                      SUB41(fVar34,0) & (byte)iVar90))))) /
               auVar74._12_4_;
      auVar61[1] = 0;
      auVar61[0] = (byte)((ulong)uVar71 >> 0x20);
      auVar61._2_14_ = auVar74._2_14_;
      auVar63._6_10_ = auVar74._6_10_;
      auVar63._0_4_ = auVar61._0_4_;
      auVar63[4] = (char)((ulong)uVar71 >> 0x28);
      auVar63[5] = 0;
      auVar65._10_6_ = auVar74._10_6_;
      auVar65._0_8_ = auVar63._0_8_;
      auVar65[8] = (char)((ulong)uVar71 >> 0x30);
      auVar65[9] = 0;
      auVar66._14_2_ = (undefined2)((uint)auVar74._12_4_ >> 0x10);
      auVar66._0_12_ = auVar65._0_12_;
      auVar66[0xc] = (char)((ulong)uVar71 >> 0x38);
      auVar66[0xd] = 0;
      auVar62._4_12_ = auVar66._4_12_;
      auVar62._0_4_ = auVar63._0_4_ & 0xffff;
      auVar64._8_8_ = auVar66._8_8_;
      auVar64._0_6_ = auVar62._0_6_;
      auVar64._6_2_ = 0;
      auVar100._12_4_ = auVar66._12_4_;
      auVar100._0_10_ = auVar64._0_10_;
      auVar100._10_2_ = 0;
      auVar67._0_14_ = auVar100._0_14_;
      auVar67._14_2_ = 0;
      auVar74 = NEON_ucvtf(auVar106,4);
      auVar75 = NEON_ucvtf(auVar67,4);
      auVar100 = NEON_fmov(0xbf800000,4);
      in_q22._0_4_ = -(uint)(fVar25 < auVar36._0_4_);
      in_q22._4_4_ = -(uint)(fVar26 < auVar36._4_4_);
      in_q22._8_4_ = -(uint)(fVar40 < auVar36._8_4_);
      in_q22._12_4_ = -(uint)(fVar58 < auVar36._12_4_);
      auVar76[1] = bVar17 & (byte)((uint)iVar39 >> 8) & (byte)((uint)in_q22._0_4_ >> 8);
      auVar76[0] = (byte)iVar70 & (byte)iVar39 & (byte)in_q22._0_4_;
      auVar76[2] = bVar77 & (byte)((uint)iVar39 >> 0x10) & (byte)((uint)in_q22._0_4_ >> 0x10);
      auVar76[3] = bVar78 & (byte)((uint)iVar39 >> 0x18) & (byte)((uint)in_q22._0_4_ >> 0x18);
      auVar76[4] = (byte)iVar80 & (byte)iVar41 & (byte)in_q22._4_4_;
      auVar76[5] = bVar81 & (byte)((uint)iVar41 >> 8) & (byte)((uint)in_q22._4_4_ >> 8);
      auVar76[6] = bVar82 & (byte)((uint)iVar41 >> 0x10) & (byte)((uint)in_q22._4_4_ >> 0x10);
      auVar76[7] = bVar83 & (byte)((uint)iVar41 >> 0x18) & (byte)((uint)in_q22._4_4_ >> 0x18);
      auVar76[9] = bVar86 & (byte)((uint)iVar42 >> 8) & (byte)((uint)in_q22._8_4_ >> 8);
      auVar76[8] = (byte)iVar85 & (byte)iVar42 & (byte)in_q22._8_4_;
      auVar76[10] = bVar87 & (byte)((uint)iVar42 >> 0x10) & (byte)((uint)in_q22._8_4_ >> 0x10);
      auVar76[0xb] = bVar88 & (byte)((uint)iVar42 >> 0x18) & (byte)((uint)in_q22._8_4_ >> 0x18);
      auVar76[0xc] = (byte)iVar90 & (byte)iVar43 & (byte)in_q22._12_4_;
      auVar76[0xd] = bVar91 & (byte)((uint)iVar43 >> 8) & (byte)((uint)in_q22._12_4_ >> 8);
      auVar76[0xe] = bVar92 & (byte)((uint)iVar43 >> 0x10) & (byte)((uint)in_q22._12_4_ >> 0x10);
      auVar76[0xf] = bVar93 & (byte)((uint)iVar43 >> 0x18) & (byte)((uint)in_q22._12_4_ >> 0x18);
      fVar27 = fVar22 * (auVar75._0_4_ * 0.007874016 + auVar100._0_4_) - fVar31;
      fVar35 = fVar23 * (auVar75._4_4_ * 0.007874016 + auVar100._4_4_) - fVar32;
      fVar34 = fVar22 * (auVar75._8_4_ * 0.007874016 + auVar100._8_4_) - fVar31;
      fVar38 = fVar23 * (auVar75._12_4_ * 0.007874016 + auVar100._12_4_) - fVar32;
      auVar75[4] = SUB41(fVar26,0);
      auVar75._0_4_ = fVar25;
      auVar75[5] = (char)((uint)fVar26 >> 8);
      auVar75[6] = (char)((uint)fVar26 >> 0x10);
      auVar75[7] = (char)((uint)fVar26 >> 0x18);
      auVar75[8] = SUB41(fVar40,0);
      auVar75[9] = (char)((uint)fVar40 >> 8);
      auVar75[10] = (char)((uint)fVar40 >> 0x10);
      auVar75[0xb] = (char)((uint)fVar40 >> 0x18);
      auVar75[0xc] = SUB41(fVar58,0);
      auVar75[0xd] = (char)((uint)fVar58 >> 8);
      auVar75[0xe] = (char)((uint)fVar58 >> 0x10);
      auVar75[0xf] = (char)((uint)fVar58 >> 0x18);
      auVar36 = auVar36 ^ (auVar36 ^ auVar75) & auVar76;
      fVar25 = fVar22 * (auVar74._0_4_ * 0.007874016 + auVar100._0_4_) - fVar24;
      uVar44 = SUB41(fVar25,0);
      uVar18 = (undefined1)((uint)fVar25 >> 8);
      uVar19 = (undefined1)((uint)fVar25 >> 0x10);
      uVar45 = (undefined1)((uint)fVar25 >> 0x18);
      fVar25 = fVar23 * (auVar74._4_4_ * 0.007874016 + auVar100._4_4_) - fVar30;
      uVar46 = SUB41(fVar25,0);
      uVar47 = (undefined1)((uint)fVar25 >> 8);
      uVar48 = (undefined1)((uint)fVar25 >> 0x10);
      uVar49 = (undefined1)((uint)fVar25 >> 0x18);
      fVar25 = fVar22 * (auVar74._8_4_ * 0.007874016 + auVar100._8_4_) - fVar24;
      uVar50 = SUB41(fVar25,0);
      uVar51 = (undefined1)((uint)fVar25 >> 8);
      uVar52 = (undefined1)((uint)fVar25 >> 0x10);
      uVar53 = (undefined1)((uint)fVar25 >> 0x18);
      fVar25 = fVar23 * (auVar74._12_4_ * 0.007874016 + auVar100._12_4_) - fVar30;
      uVar54 = SUB41(fVar25,0);
      uVar55 = (undefined1)((uint)fVar25 >> 8);
      uVar56 = (undefined1)((uint)fVar25 >> 0x10);
      uVar57 = (undefined1)((uint)fVar25 >> 0x18);
      puVar1 = (undefined8 *)(lVar15 + lVar16 * 0x10);
      puVar1[1] = auVar36._8_8_;
      *puVar1 = auVar36._0_8_;
      lVar16 = lVar16 + 1;
    } while (lVar16 != 0x20);
  }
  else {
    fVar69 = 0.0;
    fVar79 = 0.0;
    fVar84 = 0.0;
    fVar89 = 0.0;
    if (fVar40 != 0.0) {
      fVar68 = SQRT(fVar68);
      fVar69 = fVar58 / SQRT(fVar40);
      fVar79 = fVar59 / fVar68;
      fVar84 = fVar60 / SQRT(fVar40);
      fVar89 = (((float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20) -
                (float)((ulong)param_3[1] >> 0x20) * fVar26) - fVar25) / fVar68;
    }
    fVar25 = SQRT(-fVar33) * (float)*param_4;
    fVar26 = SQRT(-fVar37) * (float)((ulong)*param_4 >> 0x20);
    auVar36 = NEON_fmov(0xbf800000,4);
    *(ulong *)(param_8 + 2) = CONCAT44(param_8[3] + fVar89 * fVar26,param_8[2] + fVar84 * fVar25);
    *(ulong *)param_8 = CONCAT44(param_8[1] + fVar79 * fVar26,*param_8 + fVar69 * fVar25);
    lVar16 = 0;
    do {
      uVar71 = *(undefined8 *)(*param_5 + lVar16 * 8 + 8);
      fVar25 = (float)CONCAT13(uVar45,CONCAT12(uVar19,CONCAT11(uVar18,uVar44)));
      fVar26 = (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46)));
      fVar37 = (float)CONCAT13(uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50)));
      fVar40 = (float)CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar55,uVar54)));
      fVar58 = fVar29 * fVar27;
      fVar59 = fVar21 * fVar35;
      fVar60 = fVar29 * fVar34;
      fVar68 = fVar21 * fVar38;
      uVar44 = (undefined1)((ulong)uVar71 >> 0x38);
      bVar17 = (byte)((ulong)uVar71 >> 0x20);
      uVar18 = (undefined1)((ulong)uVar71 >> 0x28);
      auVar72._0_10_ = (unkuint10)CONCAT11(bVar17,uVar44) << 0x38;
      auVar72[10] = uVar18;
      uVar19 = (undefined1)((ulong)uVar71 >> 0x30);
      auVar72[0xb] = 0;
      auVar72[0xc] = uVar19;
      auVar72[0xd] = 0;
      auVar72[0xe] = uVar44;
      auVar3[9] = 0;
      auVar3._0_9_ = (unkuint9)auVar72._8_7_ << 0x40;
      auVar3._10_5_ = auVar72._10_5_;
      auVar4[0xb] = 0;
      auVar4._0_11_ = auVar3._0_11_;
      auVar4._12_3_ = auVar72._12_3_;
      auVar5[0xd] = 0;
      auVar5._0_13_ = auVar4._0_13_;
      auVar5[0xe] = uVar44;
      auVar6[1] = 0;
      auVar6[0] = (byte)((ulong)uVar71 >> 8);
      auVar6._2_10_ = in_q20._6_10_;
      auVar96._0_8_ = auVar6._0_8_ << 0x20;
      auVar96._10_6_ = in_q20._10_6_;
      auVar96[8] = (char)((ulong)uVar71 >> 0x10);
      auVar96[9] = 0;
      auVar98._14_2_ = in_q20._14_2_;
      auVar98._0_12_ = auVar96._0_12_;
      auVar98[0xc] = (char)((ulong)uVar71 >> 0x18);
      auVar98[0xd] = 0;
      auVar94._4_12_ = auVar98._4_12_;
      auVar94._1_3_ = 0;
      auVar94[0] = (byte)uVar71;
      auVar95._8_8_ = auVar98._8_8_;
      auVar95._0_6_ = auVar94._0_6_;
      auVar95._6_2_ = 0;
      auVar97._12_4_ = auVar98._12_4_;
      auVar97._0_10_ = auVar95._0_10_;
      auVar97._10_2_ = 0;
      auVar99._0_14_ = auVar97._0_14_;
      auVar99._14_2_ = 0;
      auVar7[1] = 0;
      auVar7[0] = bVar17;
      auVar7._2_13_ = auVar5._2_13_;
      auVar8[4] = uVar18;
      auVar8._0_4_ = auVar7._0_4_;
      auVar8[5] = 0;
      auVar8._6_9_ = auVar5._6_9_;
      auVar9[8] = uVar19;
      auVar9._0_8_ = auVar8._0_8_;
      auVar9[9] = 0;
      auVar9._10_5_ = auVar5._10_5_;
      auVar10[0xc] = uVar44;
      auVar10._0_12_ = auVar9._0_12_;
      auVar10[0xd] = 0;
      auVar10[0xe] = uVar44;
      auVar12._4_11_ = auVar10._4_11_;
      auVar12._0_4_ = auVar7._0_4_;
      auVar13._6_2_ = 0;
      auVar13._0_6_ = auVar12._0_6_;
      auVar13._8_7_ = auVar10._8_7_;
      auVar14._10_2_ = 0;
      auVar14._0_10_ = auVar13._0_10_;
      auVar14._12_3_ = auVar10._12_3_;
      auVar73._0_14_ = auVar14._0_14_;
      auVar73._14_2_ = 0;
      auVar100 = NEON_ucvtf(auVar99,4);
      auVar74 = NEON_ucvtf(auVar73,4);
      auVar75 = *(undefined1 (*) [16])(lVar15 + lVar16 * 0x10);
      fVar27 = fVar22 * (auVar100._0_4_ * 0.007874016 + auVar36._0_4_) - fVar24;
      uVar44 = SUB41(fVar27,0);
      uVar18 = (undefined1)((uint)fVar27 >> 8);
      uVar19 = (undefined1)((uint)fVar27 >> 0x10);
      uVar45 = (undefined1)((uint)fVar27 >> 0x18);
      fVar27 = fVar23 * (auVar100._4_4_ * 0.007874016 + auVar36._4_4_) - fVar30;
      uVar46 = SUB41(fVar27,0);
      uVar47 = (undefined1)((uint)fVar27 >> 8);
      uVar48 = (undefined1)((uint)fVar27 >> 0x10);
      uVar49 = (undefined1)((uint)fVar27 >> 0x18);
      fVar27 = fVar22 * (auVar100._8_4_ * 0.007874016 + auVar36._8_4_) - fVar24;
      uVar50 = SUB41(fVar27,0);
      uVar51 = (undefined1)((uint)fVar27 >> 8);
      uVar52 = (undefined1)((uint)fVar27 >> 0x10);
      uVar53 = (undefined1)((uint)fVar27 >> 0x18);
      fVar27 = fVar23 * (auVar100._12_4_ * 0.007874016 + auVar36._12_4_) - fVar30;
      uVar54 = SUB41(fVar27,0);
      uVar55 = (undefined1)((uint)fVar27 >> 8);
      uVar56 = (undefined1)((uint)fVar27 >> 0x10);
      uVar57 = (undefined1)((uint)fVar27 >> 0x18);
      fVar27 = fVar22 * (auVar74._0_4_ * 0.007874016 + auVar36._0_4_) - fVar31;
      fVar35 = fVar23 * (auVar74._4_4_ * 0.007874016 + auVar36._4_4_) - fVar32;
      fVar34 = fVar22 * (auVar74._8_4_ * 0.007874016 + auVar36._8_4_) - fVar31;
      fVar38 = fVar23 * (auVar74._12_4_ * 0.007874016 + auVar36._12_4_) - fVar32;
      in_q20._0_4_ = -(uint)(fVar28 * fVar25 + fVar58 <= 0.0);
      in_q20._4_4_ = -(uint)(fVar20 * fVar26 + fVar59 <= 0.0);
      in_q20._8_4_ = -(uint)(fVar28 * fVar37 + fVar60 <= 0.0);
      in_q20._12_4_ = -(uint)(fVar20 * fVar40 + fVar68 <= 0.0);
      auVar2._8_4_ = 0x3c010204;
      auVar2._0_8_ = 0x3c0102043c010204;
      auVar2._12_4_ = 0x3c010204;
      auVar75 = auVar75 ^ (auVar75 ^ auVar2) & in_q20;
      puVar1 = (undefined8 *)(lVar15 + lVar16 * 0x10);
      puVar1[1] = auVar75._8_8_;
      *puVar1 = auVar75._0_8_;
      lVar16 = lVar16 + 1;
    } while (lVar16 != 0x20);
  }
  return fVar33 < 0.0;
}


