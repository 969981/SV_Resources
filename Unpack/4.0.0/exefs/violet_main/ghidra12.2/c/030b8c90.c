/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030b8c90; name: FUN_030b8c90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_030b8c90(undefined1 param_1 [16],float *param_2,undefined8 *param_3,undefined8 *param_4,
                 float *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  undefined1 auVar9 [12];
  float fVar14;
  byte bVar15;
  undefined4 uVar17;
  byte bVar18;
  byte bVar19;
  uint uVar7;
  float fVar8;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar16;
  byte bVar20;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar21;
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  float fVar37;
  float fVar39;
  ulong uVar38;
  float fVar40;
  int iVar41;
  float fVar43;
  int iVar44;
  byte bVar45;
  float fVar46;
  undefined1 auVar42 [16];
  float fVar47;
  ulong uVar48;
  int iVar49;
  int iVar50;
  byte bVar51;
  byte bVar55;
  byte bVar56;
  float fVar52;
  float fVar53;
  float fVar54;
  byte bVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  byte bVar64;
  float fVar65;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar75;
  byte bVar76;
  undefined8 uVar66;
  float fVar73;
  float fVar74;
  byte bVar77;
  byte bVar80;
  byte bVar81;
  float fVar78;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  undefined8 uVar79;
  byte bVar86;
  float fVar87;
  undefined1 auVar88 [12];
  float fVar92;
  float fVar93;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  int iVar94;
  float fVar95;
  int iVar96;
  int iVar97;
  int iVar98;
  int iVar99;
  float fVar100;
  int iVar101;
  int iVar102;
  int iVar103;
  int iVar104;
  byte bVar105;
  byte bVar106;
  byte bVar109;
  byte bVar111;
  float fVar107;
  byte bVar110;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  int iVar108;
  float fVar115;
  int iVar116;
  float fVar117;
  int iVar118;
  int iVar119;
  
  fVar6 = param_1._0_4_;
  fVar8 = *param_2;
  fVar14 = param_2[1];
  fVar65 = param_2[2];
  fVar74 = param_2[3];
  fVar37 = (float)*param_3;
  fVar53 = (float)*param_4;
  fVar21 = fVar37 - fVar53;
  fVar39 = (float)((ulong)*param_3 >> 0x20);
  fVar54 = (float)((ulong)*param_4 >> 0x20);
  fVar26 = fVar39 - fVar54;
  fVar40 = (float)param_3[1];
  fVar43 = (float)param_4[1];
  fVar27 = fVar40 - fVar43;
  fVar46 = (float)((ulong)param_3[1] >> 0x20);
  fVar47 = (float)((ulong)param_4[1] >> 0x20);
  fVar52 = (fVar37 - fVar8) * fVar21;
  fVar58 = (fVar39 - fVar14) * fVar26;
  fVar60 = (fVar40 - fVar65) * fVar27;
  uVar66 = NEON_fmov(0x3f800000,4);
  uVar66 = NEON_fminnm(CONCAT44((fVar52 + fVar58 + fVar60) /
                                (fVar21 * fVar21 + fVar26 * fVar26 + fVar27 * fVar27),
                                (fVar52 + fVar58 + fVar60) /
                                (fVar21 * fVar21 + fVar26 * fVar26 + fVar27 * fVar27)),uVar66,4);
  uVar66 = NEON_fmax(uVar66,0,4);
  fVar52 = (float)((ulong)uVar66 >> 0x20);
  fVar21 = (fVar37 - fVar8) - fVar21 * (float)uVar66;
  fVar26 = (fVar39 - fVar14) - fVar26 * fVar52;
  fVar27 = (fVar40 - fVar65) - fVar27 * (float)uVar66;
  fVar52 = (fVar46 - fVar74) - (fVar46 - fVar47) * fVar52;
  auVar10._0_4_ = fVar21 * fVar21;
  auVar10._4_4_ = fVar26 * fVar26;
  auVar10._8_4_ = fVar27 * fVar27;
  auVar10._12_4_ = fVar52 * fVar52;
  auVar24 = NEON_ext(auVar10,auVar10,8,1);
  fVar21 = fVar6 * fVar6;
  fVar26 = param_1._4_4_ * param_1._4_4_;
  if (auVar10._0_4_ + auVar10._4_4_ + auVar24._0_4_ < fVar21) {
    param_5[0] = 0.0;
    param_5[1] = 0.0;
    return 1;
  }
  fVar58 = fVar53 - fVar37;
  fVar60 = fVar54 - fVar39;
  fVar61 = fVar43 - fVar40;
  fVar27 = fVar61 * fVar61 + fVar58 * fVar58 + fVar60 * fVar60;
  fVar52 = fVar61 * fVar61 + fVar58 * fVar58 + fVar60 * fVar60;
  uVar28 = (undefined1)((uint)fVar52 >> 0x10);
  uVar29 = (undefined1)((uint)fVar52 >> 0x18);
  if (0.0 < fVar27) {
    if (0.0 < fVar6) {
      fVar6 = fVar58 / fVar27;
      fVar73 = fVar60 / fVar52;
      fVar78 = fVar61 / fVar27;
      iVar41 = -(uint)(fVar27 == 0.0);
      iVar44 = -(uint)(fVar52 == 0.0);
      iVar16 = -(uint)(fVar27 == 0.0);
      auVar89._0_4_ = fVar8 - fVar37;
      auVar89._4_4_ = fVar14 - fVar39;
      auVar89._8_4_ = fVar65 - fVar40;
      auVar89._12_4_ = fVar74 - fVar46;
      fVar39 = (float)CONCAT13((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18),
                               CONCAT12((byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10),
                                        CONCAT11((byte)((uint)fVar6 >> 8) &
                                                 ~(byte)((uint)iVar41 >> 8),
                                                 SUB41(fVar6,0) & ~(byte)iVar41)));
      fVar46 = (float)CONCAT13((byte)((uint)fVar78 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                               CONCAT12((byte)((uint)fVar78 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar78 >> 8) &
                                                  ~(byte)((uint)iVar16 >> 8),
                                                  SUB41(fVar78,0) & ~(byte)iVar16)));
      auVar24._0_4_ = fVar8 - fVar53;
      auVar24._4_4_ = fVar14 - fVar54;
      auVar24._8_4_ = fVar65 - fVar43;
      auVar24._12_4_ = fVar74 - fVar47;
      fVar8 = auVar89._8_4_ * fVar61 + auVar89._0_4_ * fVar58 + auVar89._4_4_ * fVar60;
      fVar14 = auVar89._8_4_ * fVar61 + auVar89._0_4_ * fVar58 + auVar89._4_4_ * fVar60;
      fVar74 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
      fVar65 = (float)*(undefined8 *)(param_2 + 4);
      fVar47 = (float)*(undefined8 *)(param_2 + 6);
      fVar40 = (float)(CONCAT17((byte)((uint)fVar73 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                                CONCAT16((byte)((uint)fVar73 >> 0x10) &
                                         ~(byte)((uint)iVar44 >> 0x10),
                                         CONCAT15((byte)((uint)fVar73 >> 8) &
                                                  ~(byte)((uint)iVar44 >> 8),
                                                  CONCAT14(SUB41(fVar73,0) & ~(byte)iVar44,fVar39)))
                               ) >> 0x20);
      fVar107 = auVar89._0_4_ - fVar39 * fVar8;
      fVar115 = auVar89._4_4_ - fVar40 * fVar14;
      fVar117 = auVar89._8_4_ - fVar46 * fVar8;
      fVar6 = fVar58 * fVar65 + fVar60 * fVar74 + fVar61 * fVar47;
      fVar37 = fVar58 * fVar65 + fVar60 * fVar74 + fVar61 * fVar47;
      auVar90 = NEON_ext(auVar89,auVar89,8,1);
      auVar10 = NEON_ext(auVar24,auVar24,8,1);
      fVar61 = fVar65 - fVar39 * fVar6;
      fVar78 = fVar74 - fVar40 * fVar37;
      fVar62 = fVar47 - fVar46 * fVar6;
      auVar91 = NEON_fmov(0x3f800000,4);
      fVar39 = fVar47 * fVar47 + fVar65 * fVar65 + fVar74 * fVar74;
      fVar40 = fVar47 * fVar47 + fVar65 * fVar65 + fVar74 * fVar74;
      fVar46 = fVar62 * fVar62 + fVar61 * fVar61 + fVar78 * fVar78;
      fVar53 = fVar62 * fVar62 + fVar61 * fVar61 + fVar78 * fVar78;
      fVar54 = auVar91._0_4_ / SQRT(fVar39);
      fVar43 = auVar91._4_4_ / SQRT(fVar40);
      fVar58 = auVar91._8_4_ / SQRT(fVar46);
      fVar60 = auVar91._12_4_ / SQRT(fVar53);
      iVar41 = -(uint)(fVar39 <= 0.0);
      iVar44 = -(uint)(fVar40 <= 0.0);
      iVar16 = -(uint)(fVar46 <= 0.0);
      iVar94 = -(uint)(fVar53 <= 0.0);
      fVar87 = (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18),
                               CONCAT12((byte)((uint)fVar54 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar54 >> 8) &
                                                  ~(byte)((uint)iVar41 >> 8),
                                                  SUB41(fVar54,0) & ~(byte)iVar41)));
      auVar88._0_8_ =
           CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                    CONCAT16((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10),
                             CONCAT15((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar44 >> 8),
                                      CONCAT14(SUB41(fVar43,0) & ~(byte)iVar44,fVar87))));
      auVar88[8] = SUB41(fVar58,0) & ~(byte)iVar16;
      auVar88[9] = (byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar16 >> 8);
      auVar88[10] = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10);
      auVar88[0xb] = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18);
      auVar91[0xc] = SUB41(fVar60,0) & ~(byte)iVar94;
      auVar91._0_12_ = auVar88;
      auVar91[0xd] = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar94 >> 8);
      auVar91[0xe] = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
      auVar91[0xf] = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
      fVar92 = (float)((ulong)auVar88._0_8_ >> 0x20);
      fVar93 = auVar88._8_4_;
      fVar95 = auVar91._12_4_;
      fVar54 = (auVar90._0_4_ * fVar47 + auVar89._0_4_ * fVar65 + auVar89._4_4_ * fVar74) *
               fVar87 * fVar87;
      fVar43 = (auVar10._0_4_ * fVar47 + auVar24._0_4_ * fVar65 + auVar24._4_4_ * fVar74) *
               fVar92 * fVar92;
      fVar58 = (fVar117 * fVar62 + fVar107 * fVar61 + fVar115 * fVar78) * fVar93 * fVar93;
      fVar60 = (fVar117 * fVar62 + fVar107 * fVar61 + fVar115 * fVar78) * fVar95 * fVar95;
      fVar73 = auVar89._0_4_ - fVar65 * fVar54;
      fVar59 = auVar24._0_4_ - fVar65 * fVar43;
      fVar63 = fVar107 - fVar61 * fVar58;
      fVar107 = fVar107 - fVar61 * fVar60;
      fVar65 = auVar89._4_4_ - fVar74 * fVar54;
      fVar74 = auVar24._4_4_ - fVar74 * fVar43;
      fVar61 = fVar115 - fVar78 * fVar58;
      fVar115 = fVar115 - fVar78 * fVar60;
      fVar78 = auVar90._0_4_ - fVar47 * fVar54;
      fVar47 = auVar10._0_4_ - fVar47 * fVar43;
      fVar100 = fVar117 - fVar62 * fVar58;
      fVar117 = fVar117 - fVar62 * fVar60;
      fVar65 = fVar78 * fVar78 + fVar73 * fVar73 + fVar65 * fVar65;
      fVar74 = fVar47 * fVar47 + fVar59 * fVar59 + fVar74 * fVar74;
      fVar47 = fVar100 * fVar100 + fVar63 * fVar63 + fVar61 * fVar61;
      fVar61 = fVar117 * fVar117 + fVar107 * fVar107 + fVar115 * fVar115;
      iVar41 = -(uint)(fVar65 < fVar21);
      iVar44 = -(uint)(fVar74 < fVar26);
      iVar16 = -(uint)(fVar47 < fVar21);
      iVar94 = -(uint)(fVar61 < fVar26);
      bVar51 = (byte)iVar41;
      bVar64 = (byte)iVar44;
      bVar55 = (byte)((uint)iVar41 >> 8);
      bVar67 = (byte)((uint)iVar44 >> 8);
      bVar56 = (byte)((uint)iVar41 >> 0x10);
      bVar69 = (byte)((uint)iVar44 >> 0x10);
      bVar45 = (byte)((uint)iVar44 >> 0x18);
      bVar57 = (byte)((uint)iVar41 >> 0x18);
      bVar105 = (byte)iVar16;
      bVar109 = (byte)((uint)iVar16 >> 8);
      bVar111 = (byte)((uint)iVar16 >> 0x10);
      bVar113 = (byte)((uint)iVar16 >> 0x18);
      bVar106 = (byte)iVar94;
      bVar110 = (byte)((uint)iVar94 >> 8);
      bVar112 = (byte)((uint)iVar94 >> 0x10);
      bVar114 = (byte)((uint)iVar94 >> 0x18);
      if (CONCAT13(bVar45 | bVar57 | bVar113 | bVar114,
                   CONCAT12(bVar69 | bVar56 | bVar111 | bVar112,
                            CONCAT11(bVar67 | bVar55 | bVar109 | bVar110,
                                     bVar64 | bVar51 | bVar105 | bVar106))) != 0) {
        fVar65 = fVar21 - fVar65;
        fVar74 = fVar26 - fVar74;
        fVar21 = fVar21 - fVar47;
        fVar26 = fVar26 - fVar61;
        iVar96 = -(uint)(0.0 <= fVar8);
        iVar98 = -(uint)(0.0 <= fVar14);
        iVar101 = -(uint)(0.0 <= fVar8);
        iVar103 = -(uint)(0.0 <= fVar14);
        iVar108 = -(uint)(fVar8 <= fVar27);
        iVar116 = -(uint)(fVar14 <= fVar52);
        iVar118 = -(uint)(fVar8 <= fVar27);
        uVar3 = (undefined2)
                (CONCAT15((char)((uint)fVar52 >> 8),CONCAT14(SUB41(fVar52,0),fVar27)) >> 0x20);
        iVar119 = -(uint)(fVar14 <= (float)CONCAT13(uVar29,CONCAT12(uVar28,uVar3)));
        uVar79 = *(undefined8 *)(PTR_DAT_047d1ae8 + 0x38);
        uVar66 = *(undefined8 *)(PTR_DAT_047d1ae8 + 0x30);
        fVar65 = (float)CONCAT13((byte)((uint)fVar65 >> 0x18) & bVar57,
                                 CONCAT12((byte)((uint)fVar65 >> 0x10) & bVar56,
                                          CONCAT11((byte)((uint)fVar65 >> 8) & bVar55,
                                                   SUB41(fVar65,0) & bVar51)));
        auVar22._0_8_ =
             CONCAT17((byte)((uint)fVar74 >> 0x18) & bVar45,
                      CONCAT16((byte)((uint)fVar74 >> 0x10) & bVar69,
                               CONCAT15((byte)((uint)fVar74 >> 8) & bVar67,
                                        CONCAT14(SUB41(fVar74,0) & bVar64,fVar65))));
        auVar22[8] = SUB41(fVar21,0) & bVar105;
        auVar22[9] = (byte)((uint)fVar21 >> 8) & bVar109;
        auVar22[10] = (byte)((uint)fVar21 >> 0x10) & bVar111;
        auVar22[0xb] = (byte)((uint)fVar21 >> 0x18) & bVar113;
        auVar90[0xc] = SUB41(fVar26,0) & bVar106;
        auVar90._0_12_ = auVar22;
        auVar90[0xd] = (byte)((uint)fVar26 >> 8) & bVar110;
        auVar90[0xe] = (byte)((uint)fVar26 >> 0x10) & bVar112;
        auVar90[0xf] = (byte)((uint)fVar26 >> 0x18) & bVar114;
        fVar65 = SQRT(fVar65);
        fVar74 = SQRT((float)((ulong)auVar22._0_8_ >> 0x20));
        fVar21 = SQRT(auVar22._8_4_);
        fVar26 = SQRT(auVar90._12_4_);
        fVar65 = (float)CONCAT13((byte)((uint)fVar65 >> 0x18) & bVar57,
                                 CONCAT12((byte)((uint)fVar65 >> 0x10) & bVar56,
                                          CONCAT11((byte)((uint)fVar65 >> 8) & bVar55,
                                                   SUB41(fVar65,0) & bVar51)));
        auVar23._0_8_ =
             CONCAT17((byte)((uint)fVar74 >> 0x18) & bVar45,
                      CONCAT16((byte)((uint)fVar74 >> 0x10) & bVar69,
                               CONCAT15((byte)((uint)fVar74 >> 8) & bVar67,
                                        CONCAT14(SUB41(fVar74,0) & bVar64,fVar65))));
        auVar23[8] = SUB41(fVar21,0) & bVar105;
        auVar23[9] = (byte)((uint)fVar21 >> 8) & bVar109;
        auVar23[10] = (byte)((uint)fVar21 >> 0x10) & bVar111;
        auVar23[0xb] = (byte)((uint)fVar21 >> 0x18) & bVar113;
        auVar25[0xc] = SUB41(fVar26,0) & bVar106;
        auVar25._0_12_ = auVar23;
        auVar25[0xd] = (byte)((uint)fVar26 >> 8) & bVar110;
        auVar25[0xe] = (byte)((uint)fVar26 >> 0x10) & bVar112;
        auVar25[0xf] = (byte)((uint)fVar26 >> 0x18) & bVar114;
        fVar87 = fVar87 * fVar65;
        fVar92 = fVar92 * (float)((ulong)auVar23._0_8_ >> 0x20);
        fVar93 = fVar93 * auVar23._8_4_;
        fVar95 = fVar95 * auVar25._12_4_;
        iVar41 = -(uint)(ABS(fVar54) <= fVar87);
        iVar44 = -(uint)(ABS(fVar43) <= fVar92);
        iVar16 = -(uint)(ABS(fVar58) <= fVar93);
        iVar94 = -(uint)(ABS(fVar60) <= fVar95);
        bVar68 = (byte)((ulong)uVar66 >> 8);
        bVar70 = (byte)((ulong)uVar66 >> 0x10);
        bVar71 = (byte)((ulong)uVar66 >> 0x18);
        bVar72 = (byte)((ulong)uVar66 >> 0x20);
        bVar75 = (byte)((ulong)uVar66 >> 0x28);
        bVar76 = (byte)((ulong)uVar66 >> 0x30);
        bVar77 = (byte)((ulong)uVar66 >> 0x38);
        bVar80 = (byte)((ulong)uVar79 >> 8);
        bVar81 = (byte)((ulong)uVar79 >> 0x10);
        bVar82 = (byte)((ulong)uVar79 >> 0x18);
        bVar83 = (byte)((ulong)uVar79 >> 0x20);
        bVar84 = (byte)((ulong)uVar79 >> 0x28);
        bVar85 = (byte)((ulong)uVar79 >> 0x30);
        bVar86 = (byte)((ulong)uVar79 >> 0x38);
        if (CONCAT13((bVar71 | (byte)((uint)iVar108 >> 0x18) & (byte)((uint)iVar96 >> 0x18)) &
                     (byte)((uint)iVar41 >> 0x18) & bVar57 |
                     (bVar77 | (byte)((uint)iVar116 >> 0x18) & (byte)((uint)iVar98 >> 0x18)) &
                     (byte)((uint)iVar44 >> 0x18) & bVar45 |
                     (bVar82 | (byte)((uint)iVar118 >> 0x18) & (byte)((uint)iVar101 >> 0x18)) &
                     (byte)((uint)iVar16 >> 0x18) & bVar113 |
                     (bVar86 | (byte)((uint)iVar119 >> 0x18) & (byte)((uint)iVar103 >> 0x18)) &
                     (byte)((uint)iVar94 >> 0x18) & bVar114,
                     CONCAT12((bVar70 | (byte)((uint)iVar108 >> 0x10) & (byte)((uint)iVar96 >> 0x10)
                              ) & (byte)((uint)iVar41 >> 0x10) & bVar56 |
                              (bVar76 | (byte)((uint)iVar116 >> 0x10) & (byte)((uint)iVar98 >> 0x10)
                              ) & (byte)((uint)iVar44 >> 0x10) & bVar69 |
                              (bVar81 | (byte)((uint)iVar118 >> 0x10) &
                                        (byte)((uint)iVar101 >> 0x10)) &
                              (byte)((uint)iVar16 >> 0x10) & bVar111 |
                              (bVar85 | (byte)((uint)iVar119 >> 0x10) &
                                        (byte)((uint)iVar103 >> 0x10)) &
                              (byte)((uint)iVar94 >> 0x10) & bVar112,
                              CONCAT11((bVar68 | (byte)((uint)iVar108 >> 8) &
                                                 (byte)((uint)iVar96 >> 8)) &
                                       (byte)((uint)iVar41 >> 8) & bVar55 |
                                       (bVar75 | (byte)((uint)iVar116 >> 8) &
                                                 (byte)((uint)iVar98 >> 8)) &
                                       (byte)((uint)iVar44 >> 8) & bVar67 |
                                       (bVar80 | (byte)((uint)iVar118 >> 8) &
                                                 (byte)((uint)iVar101 >> 8)) &
                                       (byte)((uint)iVar16 >> 8) & bVar109 |
                                       (bVar84 | (byte)((uint)iVar119 >> 8) &
                                                 (byte)((uint)iVar103 >> 8)) &
                                       (byte)((uint)iVar94 >> 8) & bVar110,
                                       ((byte)uVar66 | (byte)iVar108 & (byte)iVar96) &
                                       (byte)iVar41 & bVar51 |
                                       (bVar72 | (byte)iVar116 & (byte)iVar98) &
                                       (byte)iVar44 & bVar64 |
                                       ((byte)uVar79 | (byte)iVar118 & (byte)iVar101) &
                                       (byte)iVar16 & bVar105 |
                                       (bVar83 | (byte)iVar119 & (byte)iVar103) &
                                       (byte)iVar94 & bVar106))) == 0) {
          iVar97 = -(uint)(0.0 < fVar39);
          iVar99 = -(uint)(0.0 < fVar40);
          iVar102 = -(uint)(0.0 < fVar46);
          iVar104 = -(uint)(0.0 < fVar53);
          auVar13._0_8_ = *(undefined8 *)param_5;
          auVar13._8_8_ = auVar13._0_8_;
          auVar42._0_4_ = (0.0 - fVar54) - fVar87;
          auVar42._4_4_ = (0.0 - fVar43) - fVar92;
          auVar42._8_4_ = (0.0 - fVar58) - fVar93;
          auVar42._12_4_ = (0.0 - fVar60) - fVar95;
          iVar119 = -(uint)(0.0 - fVar8 <= fVar6 * auVar42._0_4_);
          iVar49 = -(uint)(0.0 - fVar14 <= fVar37 * auVar42._4_4_);
          iVar44 = -(uint)(0.0 - fVar8 <= fVar6 * auVar42._8_4_);
          iVar50 = -(uint)(0.0 - fVar14 <= fVar37 * auVar42._12_4_);
          iVar96 = -(uint)(fVar6 * auVar42._0_4_ <= fVar27 - fVar8);
          iVar98 = -(uint)(fVar37 * auVar42._4_4_ <= fVar52 - fVar14);
          iVar41 = -(uint)(fVar6 * auVar42._8_4_ <= fVar27 - fVar8);
          iVar101 = -(uint)(fVar37 * auVar42._12_4_ <=
                           (float)CONCAT13(uVar29,CONCAT12(uVar28,uVar3)) - fVar14);
          bVar15 = (byte)iVar41 & (byte)iVar44;
          bVar18 = (byte)((uint)iVar41 >> 8) & (byte)((uint)iVar44 >> 8);
          bVar19 = (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar44 >> 0x10);
          bVar20 = (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar44 >> 0x18);
          iVar103 = -(uint)(auVar42._0_4_ <= (float)auVar13._0_8_);
          fVar8 = (float)((ulong)auVar13._0_8_ >> 0x20);
          iVar108 = -(uint)(auVar42._4_4_ <= fVar8);
          iVar116 = -(uint)(auVar42._8_4_ <= (float)auVar13._0_8_);
          iVar118 = -(uint)(auVar42._12_4_ <= fVar8);
          iVar41 = -(uint)(0.0 <= auVar42._0_4_);
          iVar44 = -(uint)(0.0 <= auVar42._4_4_);
          iVar16 = -(uint)(0.0 <= auVar42._8_4_);
          iVar94 = -(uint)(0.0 <= auVar42._12_4_);
          auVar12[0] = (bVar15 & (byte)iVar96 & (byte)iVar119 ^ (byte)uVar66) & bVar51 &
                       (byte)iVar41 & (byte)iVar97 & (byte)iVar103;
          auVar12[1] = (bVar18 & (byte)((uint)iVar96 >> 8) & (byte)((uint)iVar119 >> 8) ^ bVar68) &
                       bVar55 & (byte)((uint)iVar41 >> 8) & (byte)((uint)iVar97 >> 8) &
                                (byte)((uint)iVar103 >> 8);
          auVar12[2] = (bVar19 & (byte)((uint)iVar96 >> 0x10) & (byte)((uint)iVar119 >> 0x10) ^
                       bVar70) & bVar56 &
                       (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar97 >> 0x10) &
                       (byte)((uint)iVar103 >> 0x10);
          auVar12[3] = (bVar20 & (byte)((uint)iVar96 >> 0x18) & (byte)((uint)iVar119 >> 0x18) ^
                       bVar71) & bVar57 &
                       (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar97 >> 0x18) &
                       (byte)((uint)iVar103 >> 0x18);
          auVar12[4] = (bVar15 & (byte)iVar98 & (byte)iVar49 ^ bVar72) & bVar64 &
                       (byte)iVar44 & (byte)iVar99 & (byte)iVar108;
          auVar12[5] = (bVar18 & (byte)((uint)iVar98 >> 8) & (byte)((uint)iVar49 >> 8) ^ bVar75) &
                       bVar67 & (byte)((uint)iVar44 >> 8) & (byte)((uint)iVar99 >> 8) &
                                (byte)((uint)iVar108 >> 8);
          auVar12[6] = (bVar19 & (byte)((uint)iVar98 >> 0x10) & (byte)((uint)iVar49 >> 0x10) ^
                       bVar76) & bVar69 &
                       (byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar99 >> 0x10) &
                       (byte)((uint)iVar108 >> 0x10);
          auVar12[7] = (bVar20 & (byte)((uint)iVar98 >> 0x18) & (byte)((uint)iVar49 >> 0x18) ^
                       bVar77) & bVar45 &
                       (byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar99 >> 0x18) &
                       (byte)((uint)iVar108 >> 0x18);
          auVar12[8] = (bVar15 ^ (byte)uVar79) & bVar105 &
                       (byte)iVar16 & (byte)iVar102 & (byte)iVar116;
          auVar12[9] = (bVar18 ^ bVar80) & bVar109 &
                       (byte)((uint)iVar16 >> 8) & (byte)((uint)iVar102 >> 8) &
                       (byte)((uint)iVar116 >> 8);
          auVar12[10] = (bVar19 ^ bVar81) & bVar111 &
                        (byte)((uint)iVar16 >> 0x10) & (byte)((uint)iVar102 >> 0x10) &
                        (byte)((uint)iVar116 >> 0x10);
          auVar12[0xb] = (bVar20 ^ bVar82) & bVar113 &
                         (byte)((uint)iVar16 >> 0x18) & (byte)((uint)iVar102 >> 0x18) &
                         (byte)((uint)iVar116 >> 0x18);
          auVar12[0xc] = (bVar15 & (byte)iVar101 & (byte)iVar50 ^ bVar83) & bVar106 &
                         (byte)iVar94 & (byte)iVar104 & (byte)iVar118;
          auVar12[0xd] = (bVar18 & (byte)((uint)iVar101 >> 8) & (byte)((uint)iVar50 >> 8) ^ bVar84)
                         & bVar110 &
                         (byte)((uint)iVar94 >> 8) & (byte)((uint)iVar104 >> 8) &
                         (byte)((uint)iVar118 >> 8);
          auVar12[0xe] = (bVar19 & (byte)((uint)iVar101 >> 0x10) & (byte)((uint)iVar50 >> 0x10) ^
                         bVar85) & bVar112 &
                         (byte)((uint)iVar94 >> 0x10) & (byte)((uint)iVar104 >> 0x10) &
                         (byte)((uint)iVar118 >> 0x10);
          auVar12[0xf] = (bVar20 & (byte)((uint)iVar101 >> 0x18) & (byte)((uint)iVar50 >> 0x18) ^
                         bVar86) & bVar114 &
                         (byte)((uint)iVar94 >> 0x18) & (byte)((uint)iVar104 >> 0x18) &
                         (byte)((uint)iVar118 >> 0x18);
          if (CONCAT13(auVar12[3] | auVar12[7] | auVar12[0xb] | auVar12[0xf],
                       CONCAT12(auVar12[2] | auVar12[6] | auVar12[10] | auVar12[0xe],
                                CONCAT11(auVar12[1] | auVar12[5] | auVar12[9] | auVar12[0xd],
                                         auVar12[0] | auVar12[4] | auVar12[8] | auVar12[0xc]))) != 0
             ) {
            auVar13 = auVar13 ^ (auVar13 ^ auVar42) & auVar12;
            uVar66 = auVar13._0_8_;
            uVar66 = NEON_fminp(uVar66,uVar66,4);
            uVar17 = auVar13._8_4_;
            uVar66 = NEON_fmin(CONCAT44(uVar17,uVar17),uVar66,4);
            *(undefined8 *)param_5 = uVar66;
            return 2;
          }
        }
      }
    }
  }
  else {
    fVar52 = (float)*(undefined8 *)(param_2 + 4);
    fVar53 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
    fVar54 = (float)*(undefined8 *)(param_2 + 6);
    fVar6 = fVar54 * fVar54 + fVar52 * fVar52 + fVar53 * fVar53;
    fVar27 = fVar54 * fVar54 + fVar52 * fVar52 + fVar53 * fVar53;
    if (fVar6 != 0.0) {
      fVar8 = fVar8 - fVar37;
      fVar14 = fVar14 - fVar39;
      fVar65 = fVar65 - fVar40;
      fVar40 = fVar8 * fVar52 + fVar14 * fVar53 + fVar65 * fVar54;
      fVar43 = fVar8 * fVar52 + fVar14 * fVar53 + fVar65 * fVar54;
      fVar47 = -fVar40;
      fVar58 = -fVar43;
      fVar37 = fVar47 / fVar6;
      fVar52 = fVar8 + fVar52 * fVar37;
      fVar39 = fVar14 + fVar53 * (fVar58 / fVar27);
      fVar37 = fVar65 + fVar54 * fVar37;
      fVar52 = fVar52 * fVar52;
      fVar39 = fVar39 * fVar39;
      fVar37 = fVar37 * fVar37;
      fVar53 = ((fVar37 + fVar52 + fVar39) - fVar21) * -fVar6;
      if (0.0 <= fVar53) {
        fVar53 = SQRT(fVar53);
        fVar26 = SQRT(((fVar37 + fVar52 + fVar39) - fVar26) * -fVar27);
        uVar66 = *(undefined8 *)(PTR_DAT_047d19e0 + 8);
        uVar38 = *(ulong *)PTR_DAT_047d19e0;
        fVar47 = fVar47 - fVar53;
        fVar58 = fVar58 - fVar26;
        uVar48 = CONCAT44(fVar58,fVar47);
        iVar41 = -(uint)(fVar47 < 0.0);
        iVar44 = -(uint)(fVar58 < 0.0);
        uVar48 = uVar48 ^ (uVar48 ^ CONCAT44(fVar26 - fVar43,fVar53 - fVar40)) &
                          CONCAT44(iVar44,iVar41) & uVar38;
        fVar26 = (float)uVar48;
        fVar52 = *param_5 * fVar6;
        bVar4 = false;
        bVar5 = false;
        if (0.0 <= fVar26) {
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar52) && !NAN(fVar26)) {
            bVar4 = fVar52 == fVar26;
            bVar5 = fVar26 <= fVar52;
          }
        }
        if (bVar5 && !bVar4) {
          fVar8 = fVar8 * fVar8;
          fVar14 = fVar14 * fVar14;
          uVar28 = (undefined1)((uint)fVar14 >> 8);
          uVar29 = (undefined1)((uint)fVar14 >> 0x10);
          uVar30 = (undefined1)((uint)fVar14 >> 0x18);
          fVar65 = fVar65 * fVar65;
          uVar31 = (undefined1)((uint)fVar65 >> 8);
          uVar32 = (undefined1)((uint)fVar65 >> 0x10);
          uVar33 = (undefined1)((uint)fVar65 >> 0x18);
          fVar74 = (fVar74 - fVar46) * (fVar74 - fVar46);
          uVar34 = (undefined1)((uint)fVar74 >> 8);
          uVar35 = (undefined1)((uint)fVar74 >> 0x10);
          uVar36 = (undefined1)((uint)fVar74 >> 0x18);
          *(ulong *)param_5 = CONCAT44((float)(uVar48 >> 0x20) / fVar27,fVar26 / fVar6);
          auVar1[4] = SUB41(fVar14,0);
          auVar1._0_4_ = fVar8;
          auVar1[5] = uVar28;
          auVar1[6] = uVar29;
          auVar1[7] = uVar30;
          auVar1[8] = SUB41(fVar65,0);
          auVar1[9] = uVar31;
          auVar1[10] = uVar32;
          auVar1[0xb] = uVar33;
          auVar1[0xc] = SUB41(fVar74,0);
          auVar1[0xd] = uVar34;
          auVar1[0xe] = uVar35;
          auVar1[0xf] = uVar36;
          auVar2[4] = SUB41(fVar14,0);
          auVar2._0_4_ = fVar8;
          auVar2[5] = uVar28;
          auVar2[6] = uVar29;
          auVar2[7] = uVar30;
          auVar2[8] = SUB41(fVar65,0);
          auVar2[9] = uVar31;
          auVar2[10] = uVar32;
          auVar2[0xb] = uVar33;
          auVar2[0xc] = SUB41(fVar74,0);
          auVar2[0xd] = uVar34;
          auVar2[0xe] = uVar35;
          auVar2[0xf] = uVar36;
          auVar10 = NEON_ext(auVar1,auVar2,8,1);
          if (fVar21 < auVar10._0_4_ + fVar8 + fVar14) {
            return 2;
          }
          bVar45 = (byte)((uint)iVar44 >> 0x18);
          uVar7 = (uint)(byte)((byte)iVar41 & (byte)uVar38 & (byte)_DAT_03cab270);
          auVar9._0_8_ = CONCAT17(bVar45 & (byte)(uVar38 >> 0x38) &
                                  (byte)((ulong)_DAT_03cab270 >> 0x38),
                                  (uint7)CONCAT14((byte)iVar44 & (byte)(uVar38 >> 0x20) &
                                                  (byte)((ulong)_DAT_03cab270 >> 0x20),uVar7));
          auVar9[8] = (byte)iVar41 & (byte)uVar66 & (byte)_UNK_03cab278;
          auVar9[9] = (byte)((uint)iVar41 >> 8) & (byte)((ulong)uVar66 >> 8) &
                      (byte)((ulong)_UNK_03cab278 >> 8);
          auVar9[10] = (byte)((uint)iVar41 >> 0x10) & (byte)((ulong)uVar66 >> 0x10) &
                       (byte)((ulong)_UNK_03cab278 >> 0x10);
          auVar9[0xb] = (byte)((uint)iVar41 >> 0x18) & (byte)((ulong)uVar66 >> 0x18) &
                        (byte)((ulong)_UNK_03cab278 >> 0x18);
          auVar11[0xc] = (byte)iVar44 & (byte)((ulong)uVar66 >> 0x20) &
                         (byte)((ulong)_UNK_03cab278 >> 0x20);
          auVar11._0_12_ = auVar9;
          auVar11[0xd] = (byte)((uint)iVar44 >> 8) & (byte)((ulong)uVar66 >> 0x28) &
                         (byte)((ulong)_UNK_03cab278 >> 0x28);
          auVar11[0xe] = (byte)((uint)iVar44 >> 0x10) & (byte)((ulong)uVar66 >> 0x30) &
                         (byte)((ulong)_UNK_03cab278 >> 0x30);
          auVar11[0xf] = bVar45 & (byte)((ulong)uVar66 >> 0x38) &
                         (byte)((ulong)_UNK_03cab278 >> 0x38);
          return uVar7 + (int)((ulong)auVar9._0_8_ >> 0x20) + auVar9._8_4_ + auVar11._12_4_ & 4 | 1;
        }
      }
    }
  }
  return 0;
}


