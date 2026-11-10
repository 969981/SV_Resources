/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008cdcac; name: FUN_008cdcac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008cdcac(undefined8 param_1,char *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar26;
  float fVar39;
  undefined1 auVar27 [12];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar25;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar40;
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  uint uVar48;
  float fVar53;
  uint uVar55;
  undefined1 auVar49 [16];
  uint uVar54;
  uint uVar56;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar57;
  uint uVar58;
  float fVar63;
  float fVar67;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar64;
  uint uVar65;
  float fVar66;
  uint uVar68;
  float fVar69;
  uint uVar70;
  float fVar71;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar74;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  ulong uVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  undefined8 uVar82;
  float fVar83;
  float fVar84;
  undefined8 uVar85;
  float fVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  float fVar96;
  float fVar98;
  float fVar99;
  float fVar100;
  undefined1 auVar97 [16];
  float fVar101;
  float fVar102;
  undefined8 uVar103;
  char *local_28;
  
  fVar12 = (float)DAT_03cb5410;
  fVar10 = (float)DAT_03cb56b0;
  fVar40 = (float)_DAT_03cab9d0;
  fVar13 = (float)((ulong)_DAT_03cab9d0 >> 0x20);
  fVar14 = (float)_UNK_03cab9d8;
  fVar25 = (float)_DAT_03caac70;
  fVar39 = (float)((ulong)_DAT_03caac70 >> 0x20);
  fVar26 = (float)_UNK_03caac78;
  if (*param_2 == '\0') {
    lVar8 = *(long *)(param_2 + 0x78);
    if (*(char *)(*(long *)(param_2 + 0x238) + 2) == '\0') {
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_008ce77c;
      fVar10 = *(float *)(param_2 + 0x2d0);
      fVar12 = *(float *)(param_2 + 0x2d4);
      fVar25 = *(float *)(param_2 + 0x2d8);
      fVar39 = *(float *)(lVar8 + 0x60);
      fVar26 = *(float *)(lVar8 + 100);
      fVar40 = *(float *)(lVar8 + 0x68);
      fVar13 = *(float *)(lVar8 + 0x6c);
      fVar14 = *(float *)(lVar8 + 0x70);
      fVar64 = *(float *)(lVar8 + 0x74);
      fVar74 = *(float *)(lVar8 + 0x78);
      fVar42 = *(float *)(lVar8 + 0x7c);
      fVar96 = (float)*(undefined8 *)(param_2 + 0x2c0);
      fVar98 = (float)((ulong)*(undefined8 *)(param_2 + 0x2c0) >> 0x20);
      fVar47 = *(float *)(lVar8 + 0x80);
      fVar53 = *(float *)(lVar8 + 0x84);
      fVar41 = *(float *)(lVar8 + 0x88);
      fVar24 = *(float *)(lVar8 + 0x8c);
      fVar43 = *(float *)(lVar8 + 0x90);
      fVar57 = *(float *)(lVar8 + 0x94);
      fVar63 = *(float *)(lVar8 + 0x98);
      fVar67 = *(float *)(lVar8 + 0x9c);
      fVar99 = (float)*(undefined8 *)(param_2 + 0x2c8);
      fVar66 = *(float *)(param_2 + 0x2e0);
      fVar69 = *(float *)(param_2 + 0x2e4);
      fVar71 = *(float *)(param_2 + 0x2e8);
      fVar44 = *(float *)(param_2 + 0x2f0);
      fVar45 = *(float *)(param_2 + 0x2f4);
      fVar46 = *(float *)(param_2 + 0x2f8);
      *(ulong *)(param_2 + 0x348) =
           CONCAT44(fVar13 * fVar96 + fVar42 * fVar98 + fVar24 * fVar99,
                    fVar40 * fVar96 + fVar74 * fVar98 + fVar41 * fVar99);
      *(ulong *)(param_2 + 0x340) =
           CONCAT44(fVar26 * fVar96 + fVar64 * fVar98 + fVar53 * fVar99,
                    fVar39 * fVar96 + fVar14 * fVar98 + fVar47 * fVar99);
      *(ulong *)(param_2 + 0x358) =
           CONCAT44(fVar13 * fVar10 + fVar42 * fVar12 + fVar24 * fVar25,
                    fVar40 * fVar10 + fVar74 * fVar12 + fVar41 * fVar25);
      *(ulong *)(param_2 + 0x350) =
           CONCAT44(fVar26 * fVar10 + fVar64 * fVar12 + fVar53 * fVar25,
                    fVar39 * fVar10 + fVar14 * fVar12 + fVar47 * fVar25);
      auVar27 = SUB1612(*(undefined1 (*) [16])(param_2 + 800),0);
      auVar16 = SUB1612(*(undefined1 (*) [16])(param_2 + 0x330),0);
      *(ulong *)(param_2 + 0x368) =
           CONCAT44(fVar13 * fVar66 + fVar42 * fVar69 + fVar24 * fVar71,
                    fVar40 * fVar66 + fVar74 * fVar69 + fVar41 * fVar71);
      *(ulong *)(param_2 + 0x360) =
           CONCAT44(fVar26 * fVar66 + fVar64 * fVar69 + fVar53 * fVar71,
                    fVar39 * fVar66 + fVar14 * fVar69 + fVar47 * fVar71);
      *(float *)(param_2 + 0x378) = fVar63 + fVar40 * fVar44 + fVar74 * fVar45 + fVar41 * fVar46;
      *(float *)(param_2 + 0x37c) = fVar67 + fVar13 * fVar44 + fVar42 * fVar45 + fVar24 * fVar46;
      *(float *)(param_2 + 0x370) = fVar43 + fVar39 * fVar44 + fVar14 * fVar45 + fVar47 * fVar46;
      *(float *)(param_2 + 0x374) = fVar57 + fVar26 * fVar44 + fVar64 * fVar45 + fVar53 * fVar46;
      fVar10 = (float)*(undefined8 *)(param_2 + 0x308);
      uVar11 = *(undefined8 *)(param_2 + 0x300);
      auVar15 = SUB1612(*(undefined1 (*) [16])(param_2 + 0x310),0);
      auVar60 = *(undefined1 (*) [16])(lVar8 + 0xa0);
      auVar97 = *(undefined1 (*) [16])(lVar8 + 0xb0);
      auVar33 = *(undefined1 (*) [16])(lVar8 + 0xc0);
      auVar79 = *(undefined1 (*) [16])(lVar8 + 0xd0);
      goto LAB_008ce73c;
    }
    fVar64 = *(float *)(param_2 + 0x608);
    if (*(long *)(*(long *)(param_2 + 0x238) + 0x298) == 0) {
      auVar27 = *(undefined1 (*) [12])(param_2 + 0x60c);
      fVar74 = *(float *)PTR_FloatPi_047d23a0;
    }
    else {
      fVar74 = *(float *)PTR_FloatPi_047d23a0;
      fVar42 = fVar74 / *(float *)PTR_FloatDegree180_047d2390;
      auVar27._4_4_ = fVar42 * *(float *)(param_2 + 0x610);
      auVar27._0_4_ = *(float *)(param_2 + 0x60c) * fVar42;
      auVar27._8_4_ = fVar42 * *(float *)(param_2 + 0x614);
    }
    fVar42 = *(float *)PTR_Float1Divided2Pi_047d23d0;
    fVar47 = auVar27._0_4_ * fVar42;
    fVar53 = auVar27._4_4_ * fVar42;
    fVar41 = auVar27._8_4_ * fVar42;
    fVar24 = *(float *)PTR_Float2Pi_047d23e8;
    auVar79._0_4_ = (int)(fVar47 + (float)(-(uint)(0.0 <= fVar47) & 0x80000000 ^ 0xbf000000));
    auVar79._4_4_ = (int)(fVar53 + (float)(-(uint)(0.0 <= fVar53) & 0x80000000 ^ 0xbf000000));
    auVar79._8_4_ = (int)(fVar41 + (float)(-(uint)(0.0 <= fVar41) & 0x80000000 ^ 0xbf000000));
    auVar79._12_4_ =
         (int)(fVar42 * 0.0 + (float)(-(uint)(0.0 <= fVar42 * 0.0) & 0x80000000 ^ 0xbf000000));
    auVar60 = NEON_scvtf(auVar79,4);
    fVar42 = auVar27._0_4_ - auVar60._0_4_ * fVar24;
    fVar53 = auVar27._4_4_ - auVar60._4_4_ * fVar24;
    fVar41 = auVar27._8_4_ - auVar60._8_4_ * fVar24;
    fVar24 = 0.0 - auVar60._12_4_ * fVar24;
    fVar47 = *(float *)PTR_FloatPiDivided2_047d23f0;
    fVar43 = -fVar47;
    uVar58 = -(uint)(fVar47 < fVar42);
    uVar65 = -(uint)(fVar47 < fVar53);
    uVar68 = -(uint)(fVar47 < fVar41);
    uVar70 = -(uint)(fVar47 < fVar24);
    fVar42 = (float)((uint)fVar42 ^ ((uint)fVar42 ^ (uint)(fVar74 - fVar42)) & uVar58);
    fVar53 = (float)((uint)fVar53 ^ ((uint)fVar53 ^ (uint)(fVar74 - fVar53)) & uVar65);
    fVar41 = (float)((uint)fVar41 ^ ((uint)fVar41 ^ (uint)(fVar74 - fVar41)) & uVar68);
    fVar24 = (float)((uint)fVar24 ^ ((uint)fVar24 ^ (uint)(fVar74 - fVar24)) & uVar70);
    fVar74 = -fVar74;
    uVar48 = -(uint)(fVar42 < fVar43);
    uVar54 = -(uint)(fVar53 < fVar43);
    uVar55 = -(uint)(fVar41 < fVar43);
    uVar56 = -(uint)(fVar24 < fVar43);
    fVar47 = (float)((uint)(fVar74 - fVar42) ^ ((uint)(fVar74 - fVar42) ^ (uint)fVar42) & ~uVar48);
    fVar53 = (float)((uint)(fVar74 - fVar53) ^ ((uint)(fVar74 - fVar53) ^ (uint)fVar53) & ~uVar54);
    fVar41 = (float)((uint)(fVar74 - fVar41) ^ ((uint)(fVar74 - fVar41) ^ (uint)fVar41) & ~uVar55);
    fVar24 = (float)((uint)(fVar74 - fVar24) ^ ((uint)(fVar74 - fVar24) ^ (uint)fVar24) & ~uVar56);
    auVar50._0_8_ =
         CONCAT17(~(byte)(uVar54 >> 0x18) & ~(byte)(uVar65 >> 0x18),
                  CONCAT16(~(byte)(uVar54 >> 0x10) & ~(byte)(uVar65 >> 0x10),
                           CONCAT15(~(byte)(uVar54 >> 8) & ~(byte)(uVar65 >> 8),
                                    CONCAT14(~(byte)uVar54 & ~(byte)uVar65,
                                             CONCAT13(~(byte)(uVar48 >> 0x18) &
                                                      ~(byte)(uVar58 >> 0x18),
                                                      CONCAT12(~(byte)(uVar48 >> 0x10) &
                                                               ~(byte)(uVar58 >> 0x10),
                                                               CONCAT11(~(byte)(uVar48 >> 8) &
                                                                        ~(byte)(uVar58 >> 8),
                                                                        ~(byte)uVar48 &
                                                                        ~(byte)uVar58)))))));
    auVar50[8] = ~(byte)uVar55 & ~(byte)uVar68;
    auVar50[9] = ~(byte)(uVar55 >> 8) & ~(byte)(uVar68 >> 8);
    auVar50[10] = ~(byte)(uVar55 >> 0x10) & ~(byte)(uVar68 >> 0x10);
    auVar50[0xb] = ~(byte)(uVar55 >> 0x18) & ~(byte)(uVar68 >> 0x18);
    auVar50[0xc] = ~(byte)uVar56 & ~(byte)uVar70;
    auVar50[0xd] = ~(byte)(uVar56 >> 8) & ~(byte)(uVar70 >> 8);
    auVar50[0xe] = ~(byte)(uVar56 >> 0x10) & ~(byte)(uVar70 >> 0x10);
    auVar50[0xf] = ~(byte)(uVar56 >> 0x18) & ~(byte)(uVar70 >> 0x18);
    fVar74 = *(float *)(PTR_SinCoefficients_047d23d8 + 4);
    fVar43 = *(float *)PTR_SinCoefficients_047d23d8;
    fVar67 = fVar47 * fVar47;
    fVar66 = fVar53 * fVar53;
    fVar69 = fVar41 * fVar41;
    fVar71 = fVar24 * fVar24;
    fVar57 = -*(float *)(PTR_SinCoefficients_047d23d8 + 8);
    fVar42 = *(float *)(PTR_SinCoefficients_047d23d8 + 0xc);
    fVar63 = -*(float *)(PTR_SinCoefficients_047d23d8 + 0x10);
    auVar60 = NEON_fmov(0x3f800000,4);
    auVar33._0_4_ =
         fVar47 * (auVar60._0_4_ +
                  fVar67 * (fVar63 + fVar67 * (fVar42 + fVar67 * (fVar57 + fVar67 * (fVar74 - fVar67
                                                                                              * 
                                                  fVar43)))));
    auVar33._4_4_ =
         fVar53 * (auVar60._4_4_ +
                  fVar66 * (fVar63 + fVar66 * (fVar42 + fVar66 * (fVar57 + fVar66 * (fVar74 - fVar66
                                                                                              * 
                                                  fVar43)))));
    auVar33._8_4_ =
         fVar41 * (auVar60._8_4_ +
                  fVar69 * (fVar63 + fVar69 * (fVar42 + fVar69 * (fVar57 + fVar69 * (fVar74 - fVar69
                                                                                              * 
                                                  fVar43)))));
    auVar33._12_4_ =
         fVar24 * (auVar60._12_4_ +
                  fVar71 * (fVar63 + fVar71 * (fVar42 + fVar71 * (fVar57 + fVar71 * (fVar74 - fVar71
                                                                                              * 
                                                  fVar43)))));
    fVar74 = *(float *)(PTR_CosCoefficients_047d23e0 + 4);
    fVar47 = *(float *)PTR_CosCoefficients_047d23e0;
    fVar53 = -*(float *)(PTR_CosCoefficients_047d23e0 + 8);
    fVar42 = *(float *)(PTR_CosCoefficients_047d23e0 + 0xc);
    fVar41 = -*(float *)(PTR_CosCoefficients_047d23e0 + 0x10);
    auVar73._0_4_ =
         auVar60._0_4_ +
         fVar67 * (fVar41 + fVar67 * (fVar42 + fVar67 * (fVar53 + fVar67 * (fVar74 - fVar67 * fVar47
                                                                           ))));
    auVar73._4_4_ =
         auVar60._4_4_ +
         fVar66 * (fVar41 + fVar66 * (fVar42 + fVar66 * (fVar53 + fVar66 * (fVar74 - fVar66 * fVar47
                                                                           ))));
    auVar73._8_4_ =
         auVar60._8_4_ +
         fVar69 * (fVar41 + fVar69 * (fVar42 + fVar69 * (fVar53 + fVar69 * (fVar74 - fVar69 * fVar47
                                                                           ))));
    auVar73._12_4_ =
         auVar60._12_4_ +
         fVar71 * (fVar41 + fVar71 * (fVar42 + fVar71 * (fVar53 + fVar71 * (fVar74 - fVar71 * fVar47
                                                                           ))));
    auVar60._0_4_ = -auVar73._0_4_;
    auVar60._4_4_ = -auVar73._4_4_;
    auVar60._8_4_ = -auVar73._8_4_;
    auVar60._12_4_ = -auVar73._12_4_;
    auVar61._8_8_ = auVar50._8_8_;
    auVar61._0_8_ = auVar50._0_8_;
    auVar60 = auVar60 ^ (auVar60 ^ auVar73) & auVar61;
    fVar66 = auVar60._4_4_;
    auVar97 = NEON_ext(auVar60,auVar60,8,1);
    auVar79 = NEON_ext(auVar33,auVar33,8,1);
    fVar74 = auVar97._0_4_;
    fVar42 = auVar79._0_4_;
    fVar41 = fVar74 * fVar66;
    fVar24 = fVar42 * fVar66;
    fVar10 = auVar33._4_4_ * fVar10;
    fVar53 = auVar60._0_4_;
    fVar43 = fVar42 * auVar33._0_4_ * fVar40 + fVar74 * auVar33._4_4_ * fVar53;
    fVar57 = fVar74 * auVar33._0_4_ * fVar13 + fVar42 * auVar33._4_4_ * fVar53;
    fVar63 = auVar33._0_4_ * 0.0 * fVar14 + fVar66 * fVar12 * fVar53;
    fVar47 = (float)*(undefined8 *)(param_2 + 0x600);
    fVar67 = fVar41 * fVar47;
    fVar69 = fVar24 * fVar47;
    fVar47 = fVar10 * fVar47;
    fVar44 = fVar42 * fVar53 * fVar25 + fVar74 * auVar33._4_4_ * auVar33._0_4_;
    fVar45 = fVar74 * fVar53 * fVar39 + fVar42 * auVar33._4_4_ * auVar33._0_4_;
    fVar46 = fVar53 * 0.0 * fVar26 + fVar66 * fVar12 * auVar33._0_4_;
    fVar99 = (float)*(undefined8 *)(lVar8 + 0x60);
    fVar100 = (float)((ulong)*(undefined8 *)(lVar8 + 0x60) >> 0x20);
    fVar101 = (float)*(undefined8 *)(lVar8 + 0x68);
    fVar102 = (float)((ulong)*(undefined8 *)(lVar8 + 0x68) >> 0x20);
    fVar12 = *(float *)(param_2 + 0x620);
    fVar26 = *(float *)(lVar8 + 0x80);
    fVar40 = *(float *)(lVar8 + 0x84);
    fVar13 = *(float *)(lVar8 + 0x88);
    fVar14 = *(float *)(lVar8 + 0x8c);
    uVar103 = *(undefined8 *)(lVar8 + 0x98);
    uVar11 = *(undefined8 *)(lVar8 + 0x90);
    fVar42 = (float)((ulong)*(undefined8 *)(param_2 + 0x600) >> 0x20);
    fVar74 = fVar44 * fVar42;
    fVar53 = fVar45 * fVar42;
    fVar42 = fVar46 * fVar42;
    fVar81 = (float)*(undefined8 *)(lVar8 + 0x70);
    fVar83 = (float)((ulong)*(undefined8 *)(lVar8 + 0x70) >> 0x20);
    fVar84 = (float)*(undefined8 *)(lVar8 + 0x78);
    fVar86 = (float)((ulong)*(undefined8 *)(lVar8 + 0x78) >> 0x20);
    fVar96 = fVar43 * fVar64;
    fVar98 = fVar57 * fVar64;
    fVar64 = fVar63 * fVar64;
    fVar25 = fVar100 * fVar67 + fVar83 * fVar69 + fVar40 * fVar47;
    fVar39 = fVar102 * fVar67 + fVar86 * fVar69 + fVar14 * fVar47;
    fVar66 = (float)*(undefined8 *)(param_2 + 0x618);
    fVar71 = (float)((ulong)*(undefined8 *)(param_2 + 0x618) >> 0x20);
    *(ulong *)(param_2 + 0x348) =
         CONCAT17((char)((uint)fVar39 >> 0x18),
                  CONCAT16((char)((uint)fVar39 >> 0x10),
                           CONCAT15((char)((uint)fVar39 >> 8),
                                    CONCAT14(SUB41(fVar39,0),
                                             fVar101 * fVar67 + fVar84 * fVar69 + fVar13 * fVar47)))
                 );
    *(ulong *)(param_2 + 0x340) =
         CONCAT17((char)((uint)fVar25 >> 0x18),
                  CONCAT16((char)((uint)fVar25 >> 0x10),
                           CONCAT15((char)((uint)fVar25 >> 8),
                                    CONCAT14(SUB41(fVar25,0),
                                             fVar99 * fVar67 + fVar81 * fVar69 + fVar26 * fVar47))))
    ;
    *(float *)(param_2 + 0x358) = fVar101 * fVar74 + fVar84 * fVar53 + fVar13 * fVar42;
    *(float *)(param_2 + 0x35c) = fVar102 * fVar74 + fVar86 * fVar53 + fVar14 * fVar42;
    *(float *)(param_2 + 0x350) = fVar99 * fVar74 + fVar81 * fVar53 + fVar26 * fVar42;
    *(float *)(param_2 + 0x354) = fVar100 * fVar74 + fVar83 * fVar53 + fVar40 * fVar42;
    *(ulong *)(param_2 + 0x368) =
         CONCAT44(fVar102 * fVar96 + fVar86 * fVar98 + fVar14 * fVar64,
                  fVar101 * fVar96 + fVar84 * fVar98 + fVar13 * fVar64);
    *(ulong *)(param_2 + 0x360) =
         CONCAT44(fVar100 * fVar96 + fVar83 * fVar98 + fVar40 * fVar64,
                  fVar99 * fVar96 + fVar81 * fVar98 + fVar26 * fVar64);
    *(ulong *)(param_2 + 0x378) =
         CONCAT44((float)((ulong)uVar103 >> 0x20) +
                  fVar102 * fVar66 + fVar86 * fVar71 + fVar14 * fVar12,
                  (float)uVar103 + fVar101 * fVar66 + fVar84 * fVar71 + fVar13 * fVar12);
    *(ulong *)(param_2 + 0x370) =
         CONCAT44((float)((ulong)uVar11 >> 0x20) +
                  fVar100 * fVar66 + fVar83 * fVar71 + fVar40 * fVar12,
                  (float)uVar11 + fVar99 * fVar66 + fVar81 * fVar71 + fVar26 * fVar12);
    auVar60 = *(undefined1 (*) [16])(lVar8 + 0xb0);
    fVar26 = (float)*(undefined8 *)(lVar8 + 0xa0);
    fVar40 = (float)((ulong)*(undefined8 *)(lVar8 + 0xa0) >> 0x20);
    fVar13 = (float)*(undefined8 *)(lVar8 + 0xa8);
    fVar14 = (float)((ulong)*(undefined8 *)(lVar8 + 0xa8) >> 0x20);
    fVar64 = auVar60._0_4_;
    fVar74 = auVar60._4_4_;
    fVar42 = auVar60._8_4_;
    fVar47 = auVar60._12_4_;
    fVar53 = (float)*(undefined8 *)(lVar8 + 0xc0);
    fVar67 = (float)((ulong)*(undefined8 *)(lVar8 + 0xc0) >> 0x20);
    fVar69 = (float)*(undefined8 *)(lVar8 + 200);
    fVar96 = (float)((ulong)*(undefined8 *)(lVar8 + 200) >> 0x20);
    fVar25 = fVar40 * fVar41 + fVar74 * fVar24 + fVar67 * fVar10;
    fVar39 = fVar14 * fVar41 + fVar47 * fVar24 + fVar96 * fVar10;
    auVar97._0_8_ =
         CONCAT44(fVar40 * fVar44 + fVar74 * fVar45 + fVar67 * fVar46,
                  fVar26 * fVar44 + fVar64 * fVar45 + fVar53 * fVar46);
    auVar97._8_4_ = fVar13 * fVar44 + fVar42 * fVar45 + fVar69 * fVar46;
    auVar97._12_4_ = fVar14 * fVar44 + fVar47 * fVar45 + fVar96 * fVar46;
    auVar51._0_8_ =
         CONCAT44(fVar40 * fVar43 + fVar74 * fVar57 + fVar67 * fVar63,
                  fVar26 * fVar43 + fVar64 * fVar57 + fVar53 * fVar63);
    auVar51._8_4_ = fVar13 * fVar43 + fVar42 * fVar57 + fVar69 * fVar63;
    auVar51._12_4_ = fVar14 * fVar43 + fVar47 * fVar57 + fVar96 * fVar63;
    uVar11 = CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0xd0) >> 0x20) +
                      fVar40 * fVar66 + fVar74 * fVar71 + fVar67 * fVar12,
                      (float)*(undefined8 *)(lVar8 + 0xd0) +
                      fVar26 * fVar66 + fVar64 * fVar71 + fVar53 * fVar12);
    uVar103 = CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0xd8) >> 0x20) +
                       fVar14 * fVar66 + fVar47 * fVar71 + fVar96 * fVar12,
                       (float)*(undefined8 *)(lVar8 + 0xd8) +
                       fVar13 * fVar66 + fVar42 * fVar71 + fVar69 * fVar12);
    *(ulong *)(param_2 + 0x388) =
         CONCAT17((char)((uint)fVar39 >> 0x18),
                  CONCAT16((char)((uint)fVar39 >> 0x10),
                           CONCAT15((char)((uint)fVar39 >> 8),
                                    CONCAT14(SUB41(fVar39,0),
                                             fVar13 * fVar41 + fVar42 * fVar24 + fVar69 * fVar10))))
    ;
    *(ulong *)(param_2 + 0x380) =
         CONCAT17((char)((uint)fVar25 >> 0x18),
                  CONCAT16((char)((uint)fVar25 >> 0x10),
                           CONCAT15((char)((uint)fVar25 >> 8),
                                    CONCAT14(SUB41(fVar25,0),
                                             fVar26 * fVar41 + fVar64 * fVar24 + fVar53 * fVar10))))
    ;
    *(long *)(param_2 + 0x398) = auVar97._8_8_;
    *(undefined8 *)(param_2 + 0x390) = auVar97._0_8_;
    *(long *)(param_2 + 0x3a8) = auVar51._8_8_;
    *(undefined8 *)(param_2 + 0x3a0) = auVar51._0_8_;
  }
  else {
    lVar8 = *(long *)(param_2 + 0x238);
    fVar64 = (float)((ulong)DAT_03cb5410 >> 0x20);
    fVar74 = (float)((ulong)DAT_03cb56b0 >> 0x20);
    fVar47 = (float)((ulong)_UNK_03cab9d8 >> 0x20);
    fVar42 = (float)((ulong)_UNK_03caac78 >> 0x20);
    if (*(char *)(*(long *)(param_2 + 0xa0) + 0x7e4) == '\0') {
      if (*(char *)(lVar8 + 2) == '\0') {
        *(undefined8 *)(param_2 + 0x360) = *(undefined8 *)(param_2 + 0x2e0);
        *(undefined8 *)(param_2 + 0x368) = *(undefined8 *)(param_2 + 0x2e8);
        *(undefined8 *)(param_2 + 0x370) = *(undefined8 *)(param_2 + 0x2f0);
        *(undefined8 *)(param_2 + 0x378) = *(undefined8 *)(param_2 + 0x2f8);
        *(undefined8 *)(param_2 + 0x340) = *(undefined8 *)(param_2 + 0x2c0);
        *(undefined8 *)(param_2 + 0x348) = *(undefined8 *)(param_2 + 0x2c8);
        *(undefined8 *)(param_2 + 0x350) = *(undefined8 *)(param_2 + 0x2d0);
        *(undefined8 *)(param_2 + 0x358) = *(undefined8 *)(param_2 + 0x2d8);
        *(undefined8 *)(param_2 + 0x398) = *(undefined8 *)(param_2 + 0x318);
        *(undefined8 *)(param_2 + 0x390) = *(undefined8 *)(param_2 + 0x310);
        *(undefined8 *)(param_2 + 0x388) = *(undefined8 *)(param_2 + 0x308);
        *(undefined8 *)(param_2 + 0x380) = *(undefined8 *)(param_2 + 0x300);
        *(undefined8 *)(param_2 + 0x3b8) = *(undefined8 *)(param_2 + 0x338);
        *(undefined8 *)(param_2 + 0x3b0) = *(undefined8 *)(param_2 + 0x330);
        *(undefined8 *)(param_2 + 0x3a8) = *(undefined8 *)(param_2 + 0x328);
        *(undefined8 *)(param_2 + 0x3a0) = *(undefined8 *)(param_2 + 800);
      }
      else {
        fVar53 = *(float *)(param_2 + 0x608);
        if (*(long *)(lVar8 + 0x298) == 0) {
          auVar16 = *(undefined1 (*) [12])(param_2 + 0x60c);
          fVar41 = *(float *)PTR_FloatPi_047d23a0;
        }
        else {
          fVar41 = *(float *)PTR_FloatPi_047d23a0;
          fVar24 = fVar41 / *(float *)PTR_FloatDegree180_047d2390;
          auVar16._4_4_ = fVar24 * *(float *)(param_2 + 0x610);
          auVar16._0_4_ = *(float *)(param_2 + 0x60c) * fVar24;
          auVar16._8_4_ = fVar24 * *(float *)(param_2 + 0x614);
        }
        fVar24 = *(float *)PTR_Float1Divided2Pi_047d23d0;
        fVar57 = auVar16._0_4_ * fVar24;
        fVar63 = auVar16._4_4_ * fVar24;
        fVar67 = auVar16._8_4_ * fVar24;
        fVar43 = -fVar41;
        auVar62._0_4_ = (int)(fVar57 + (float)(-(uint)(0.0 <= fVar57) & 0x80000000 ^ 0xbf000000));
        auVar62._4_4_ = (int)(fVar63 + (float)(-(uint)(0.0 <= fVar63) & 0x80000000 ^ 0xbf000000));
        auVar62._8_4_ = (int)(fVar67 + (float)(-(uint)(0.0 <= fVar67) & 0x80000000 ^ 0xbf000000));
        auVar62._12_4_ =
             (int)(fVar24 * 0.0 + (float)(-(uint)(0.0 <= fVar24 * 0.0) & 0x80000000 ^ 0xbf000000));
        fVar24 = *(float *)PTR_Float2Pi_047d23e8;
        auVar60 = NEON_scvtf(auVar62,4);
        fVar101 = *(float *)PTR_SinCoefficients_047d23d8;
        auVar21._0_4_ = auVar16._0_4_ - auVar60._0_4_ * fVar24;
        auVar21._4_4_ = auVar16._4_4_ - auVar60._4_4_ * fVar24;
        auVar21._8_4_ = auVar16._8_4_ - auVar60._8_4_ * fVar24;
        auVar21._12_4_ = 0.0 - auVar60._12_4_ * fVar24;
        fVar57 = *(float *)PTR_FloatPiDivided2_047d23f0;
        fVar24 = *(float *)(PTR_SinCoefficients_047d23d8 + 4);
        fVar63 = -fVar57;
        iVar3 = -(uint)(fVar57 < auVar21._0_4_);
        iVar4 = -(uint)(fVar57 < auVar21._4_4_);
        bVar87 = (byte)((uint)iVar4 >> 8);
        bVar88 = (byte)((uint)iVar4 >> 0x10);
        bVar89 = (byte)((uint)iVar4 >> 0x18);
        iVar5 = -(uint)(fVar57 < auVar21._8_4_);
        bVar90 = (byte)((uint)iVar5 >> 8);
        bVar91 = (byte)((uint)iVar5 >> 0x10);
        bVar92 = (byte)((uint)iVar5 >> 0x18);
        iVar6 = -(uint)(fVar57 < auVar21._12_4_);
        bVar93 = (byte)((uint)iVar6 >> 8);
        bVar94 = (byte)((uint)iVar6 >> 0x10);
        bVar95 = (byte)((uint)iVar6 >> 0x18);
        auVar34._0_4_ = fVar41 - auVar21._0_4_;
        auVar34._4_4_ = fVar41 - auVar21._4_4_;
        auVar34._8_4_ = fVar41 - auVar21._8_4_;
        auVar34._12_4_ = fVar41 - auVar21._12_4_;
        auVar2[4] = (byte)iVar4;
        auVar2._0_4_ = iVar3;
        auVar2[5] = bVar87;
        auVar2[6] = bVar88;
        auVar2[7] = bVar89;
        auVar2[8] = (byte)iVar5;
        auVar2[9] = bVar90;
        auVar2[10] = bVar91;
        auVar2[0xb] = bVar92;
        auVar2[0xc] = (byte)iVar6;
        auVar2[0xd] = bVar93;
        auVar2[0xe] = bVar94;
        auVar2[0xf] = bVar95;
        auVar21 = auVar21 ^ (auVar21 ^ auVar34) & auVar2;
        auVar35._0_4_ = -(uint)(auVar21._0_4_ < fVar63);
        auVar35._4_4_ = -(uint)(auVar21._4_4_ < fVar63);
        auVar35._8_4_ = -(uint)(auVar21._8_4_ < fVar63);
        auVar35._12_4_ = -(uint)(auVar21._12_4_ < fVar63);
        auVar52._0_4_ = fVar43 - auVar21._0_4_;
        auVar52._4_4_ = fVar43 - auVar21._4_4_;
        auVar52._8_4_ = fVar43 - auVar21._8_4_;
        auVar52._12_4_ = fVar43 - auVar21._12_4_;
        fVar41 = *(float *)(PTR_SinCoefficients_047d23d8 + 0xc);
        auVar21 = auVar21 ^ (auVar21 ^ auVar52) & auVar35;
        fVar44 = *(float *)PTR_CosCoefficients_047d23e0;
        fVar43 = *(float *)(PTR_CosCoefficients_047d23e0 + 4);
        fVar67 = auVar21._0_4_;
        fVar96 = fVar67 * fVar67;
        fVar66 = auVar21._4_4_;
        fVar98 = fVar66 * fVar66;
        fVar69 = auVar21._8_4_;
        fVar99 = fVar69 * fVar69;
        fVar71 = auVar21._12_4_;
        fVar100 = fVar71 * fVar71;
        fVar57 = *(float *)(PTR_CosCoefficients_047d23e0 + 0xc);
        fVar102 = -*(float *)(PTR_CosCoefficients_047d23e0 + 8);
        fVar45 = -*(float *)(PTR_SinCoefficients_047d23d8 + 8);
        auVar36[0] = ~(byte)auVar35._0_4_ & ~(byte)iVar3;
        auVar36[1] = ~(byte)((uint)auVar35._0_4_ >> 8) & ~(byte)((uint)iVar3 >> 8);
        auVar36[2] = ~(byte)((uint)auVar35._0_4_ >> 0x10) & ~(byte)((uint)iVar3 >> 0x10);
        auVar36[3] = ~(byte)((uint)auVar35._0_4_ >> 0x18) & ~(byte)((uint)iVar3 >> 0x18);
        auVar36[4] = ~(byte)auVar35._4_4_ & ~(byte)iVar4;
        auVar36[5] = ~(byte)((uint)auVar35._4_4_ >> 8) & ~bVar87;
        auVar36[6] = ~(byte)((uint)auVar35._4_4_ >> 0x10) & ~bVar88;
        auVar36[7] = ~(byte)((uint)auVar35._4_4_ >> 0x18) & ~bVar89;
        auVar36[8] = ~(byte)auVar35._8_4_ & ~(byte)iVar5;
        auVar36[9] = ~(byte)((uint)auVar35._8_4_ >> 8) & ~bVar90;
        auVar36[10] = ~(byte)((uint)auVar35._8_4_ >> 0x10) & ~bVar91;
        auVar36[0xb] = ~(byte)((uint)auVar35._8_4_ >> 0x18) & ~bVar92;
        auVar36[0xc] = ~(byte)auVar35._12_4_ & ~(byte)iVar6;
        auVar36[0xd] = ~(byte)((uint)auVar35._12_4_ >> 8) & ~bVar93;
        auVar36[0xe] = ~(byte)((uint)auVar35._12_4_ >> 0x10) & ~bVar94;
        auVar36[0xf] = ~(byte)((uint)auVar35._12_4_ >> 0x18) & ~bVar95;
        fVar63 = -*(float *)(PTR_SinCoefficients_047d23d8 + 0x10);
        fVar46 = -*(float *)(PTR_CosCoefficients_047d23e0 + 0x10);
        auVar60 = NEON_fmov(0x3f800000,4);
        auVar80._0_4_ =
             auVar60._0_4_ +
             fVar96 * (fVar46 + fVar96 * (fVar57 + fVar96 * (fVar102 +
                                                            fVar96 * (fVar43 - fVar96 * fVar44))));
        auVar80._4_4_ =
             auVar60._4_4_ +
             fVar98 * (fVar46 + fVar98 * (fVar57 + fVar98 * (fVar102 +
                                                            fVar98 * (fVar43 - fVar98 * fVar44))));
        auVar80._8_4_ =
             auVar60._8_4_ +
             fVar99 * (fVar46 + fVar99 * (fVar57 + fVar99 * (fVar102 +
                                                            fVar99 * (fVar43 - fVar99 * fVar44))));
        auVar80._12_4_ =
             auVar60._12_4_ +
             fVar100 * (fVar46 + fVar100 * (fVar57 + fVar100 * (fVar102 +
                                                               fVar100 * (fVar43 - fVar100 * fVar44)
                                                               )));
        auVar22._0_4_ =
             fVar67 * (auVar60._0_4_ +
                      fVar96 * (fVar63 + fVar96 * (fVar41 + fVar96 * (fVar45 + fVar96 * (fVar24 - 
                                                  fVar96 * fVar101)))));
        auVar22._4_4_ =
             fVar66 * (auVar60._4_4_ +
                      fVar98 * (fVar63 + fVar98 * (fVar41 + fVar98 * (fVar45 + fVar98 * (fVar24 - 
                                                  fVar98 * fVar101)))));
        auVar22._8_4_ =
             fVar69 * (auVar60._8_4_ +
                      fVar99 * (fVar63 + fVar99 * (fVar41 + fVar99 * (fVar45 + fVar99 * (fVar24 - 
                                                  fVar99 * fVar101)))));
        auVar22._12_4_ =
             fVar71 * (auVar60._12_4_ +
                      fVar100 * (fVar63 + fVar100 * (fVar41 + fVar100 * (fVar45 + fVar100 * (fVar24 
                                                  - fVar100 * fVar101)))));
        auVar37._0_4_ = -auVar80._0_4_;
        auVar37._4_4_ = -auVar80._4_4_;
        auVar37._8_4_ = -auVar80._8_4_;
        auVar37._12_4_ = -auVar80._12_4_;
        auVar37 = auVar37 ^ (auVar37 ^ auVar80) & auVar36;
        fVar63 = auVar37._4_4_;
        auVar60 = NEON_ext(auVar22,auVar22,8,1);
        auVar97 = NEON_ext(auVar37,auVar37,8,1);
        fVar41 = auVar97._0_4_;
        fVar24 = auVar60._0_4_;
        fVar64 = fVar64 * 0.0;
        fVar74 = fVar74 * 0.0;
        fVar57 = auVar37._0_4_;
        fVar43 = (float)*(undefined8 *)(param_2 + 0x600);
        auVar77._0_8_ = CONCAT44(fVar24 * fVar63 * fVar43,fVar41 * fVar63 * fVar43);
        auVar77._8_4_ = auVar22._4_4_ * fVar10 * fVar43;
        auVar77._12_4_ = fVar74 * fVar43;
        fVar25 = fVar24 * fVar57 * fVar25 + fVar41 * auVar22._4_4_ * auVar22._0_4_;
        fVar39 = fVar41 * fVar57 * fVar39 + fVar24 * auVar22._4_4_ * auVar22._0_4_;
        auVar23._0_8_ = CONCAT44(fVar39,fVar25);
        auVar23._8_4_ = fVar57 * 0.0 * fVar26 + fVar63 * fVar12 * auVar22._0_4_;
        auVar23._12_4_ = fVar57 * 0.0 * fVar42 + fVar64 * auVar22._0_4_;
        fVar26 = fVar24 * auVar22._0_4_ * fVar40 + fVar41 * auVar22._4_4_ * fVar57;
        fVar40 = fVar41 * auVar22._0_4_ * fVar13 + fVar24 * auVar22._4_4_ * fVar57;
        auVar38._0_8_ = CONCAT44(fVar40,fVar26);
        auVar38._8_4_ = auVar22._0_4_ * 0.0 * fVar14 + fVar63 * fVar12 * fVar57;
        auVar38._12_4_ = auVar22._0_4_ * 0.0 * fVar47 + fVar64 * fVar57;
        fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 0x600) >> 0x20);
        *(ulong *)(param_2 + 0x388) = CONCAT44(fVar74,auVar22._4_4_ * fVar10);
        *(ulong *)(param_2 + 0x380) = CONCAT44(fVar24 * fVar63,fVar41 * fVar63);
        *(long *)(param_2 + 0x398) = auVar23._8_8_;
        *(undefined8 *)(param_2 + 0x390) = auVar23._0_8_;
        *(long *)(param_2 + 0x348) = auVar77._8_8_;
        *(undefined8 *)(param_2 + 0x340) = auVar77._0_8_;
        *(ulong *)(param_2 + 0x358) = CONCAT44(auVar23._12_4_ * fVar12,auVar23._8_4_ * fVar12);
        *(ulong *)(param_2 + 0x350) = CONCAT44(fVar39 * fVar12,fVar25 * fVar12);
        *(long *)(param_2 + 0x3a8) = auVar38._8_8_;
        *(undefined8 *)(param_2 + 0x3a0) = auVar38._0_8_;
        uVar75 = (ulong)SUB124(*(undefined1 (*) [12])(param_2 + 0x618),8);
        *(ulong *)(param_2 + 0x3b8) = uVar75;
        uVar11 = SUB128(*(undefined1 (*) [12])(param_2 + 0x618),0);
        *(undefined8 *)(param_2 + 0x3b0) = uVar11;
        *(ulong *)(param_2 + 0x368) = CONCAT44(auVar38._12_4_ * fVar53,auVar38._8_4_ * fVar53);
        *(ulong *)(param_2 + 0x360) = CONCAT44(fVar40 * fVar53,fVar26 * fVar53);
        *(ulong *)(param_2 + 0x378) = uVar75;
        *(undefined8 *)(param_2 + 0x370) = uVar11;
      }
      lVar8 = *(long *)(param_2 + 0x548);
      if (*(char *)(*(long *)(lVar8 + 0xa0) + 0x753) == '\x01') goto LAB_008ce77c;
      fVar10 = *(float *)(param_2 + 0x350);
      fVar12 = *(float *)(param_2 + 0x354);
      fVar25 = *(float *)(param_2 + 0x358);
      fVar39 = *(float *)(lVar8 + 0x340);
      fVar26 = *(float *)(lVar8 + 0x344);
      fVar40 = *(float *)(lVar8 + 0x348);
      fVar13 = *(float *)(lVar8 + 0x34c);
      fVar14 = *(float *)(lVar8 + 0x350);
      fVar64 = *(float *)(lVar8 + 0x354);
      fVar74 = *(float *)(lVar8 + 0x358);
      fVar42 = *(float *)(lVar8 + 0x35c);
      fVar96 = (float)*(undefined8 *)(param_2 + 0x340);
      fVar98 = (float)((ulong)*(undefined8 *)(param_2 + 0x340) >> 0x20);
      fVar47 = *(float *)(lVar8 + 0x360);
      fVar53 = *(float *)(lVar8 + 0x364);
      fVar41 = *(float *)(lVar8 + 0x368);
      fVar24 = *(float *)(lVar8 + 0x36c);
      fVar43 = *(float *)(lVar8 + 0x370);
      fVar57 = *(float *)(lVar8 + 0x374);
      fVar63 = *(float *)(lVar8 + 0x378);
      fVar67 = *(float *)(lVar8 + 0x37c);
      fVar99 = (float)*(undefined8 *)(param_2 + 0x348);
      fVar66 = *(float *)(param_2 + 0x360);
      fVar69 = *(float *)(param_2 + 0x364);
      fVar71 = *(float *)(param_2 + 0x368);
      fVar44 = *(float *)(param_2 + 0x370);
      fVar45 = *(float *)(param_2 + 0x374);
      fVar46 = *(float *)(param_2 + 0x378);
      *(ulong *)(param_2 + 0x348) =
           CONCAT44(fVar13 * fVar96 + fVar42 * fVar98 + fVar24 * fVar99,
                    fVar40 * fVar96 + fVar74 * fVar98 + fVar41 * fVar99);
      *(ulong *)(param_2 + 0x340) =
           CONCAT44(fVar26 * fVar96 + fVar64 * fVar98 + fVar53 * fVar99,
                    fVar39 * fVar96 + fVar14 * fVar98 + fVar47 * fVar99);
      *(ulong *)(param_2 + 0x358) =
           CONCAT44(fVar13 * fVar10 + fVar42 * fVar12 + fVar24 * fVar25,
                    fVar40 * fVar10 + fVar74 * fVar12 + fVar41 * fVar25);
      *(ulong *)(param_2 + 0x350) =
           CONCAT44(fVar26 * fVar10 + fVar64 * fVar12 + fVar53 * fVar25,
                    fVar39 * fVar10 + fVar14 * fVar12 + fVar47 * fVar25);
      auVar27 = SUB1612(*(undefined1 (*) [16])(param_2 + 0x3a0),0);
      auVar16 = SUB1612(*(undefined1 (*) [16])(param_2 + 0x3b0),0);
      *(ulong *)(param_2 + 0x368) =
           CONCAT44(fVar13 * fVar66 + fVar42 * fVar69 + fVar24 * fVar71,
                    fVar40 * fVar66 + fVar74 * fVar69 + fVar41 * fVar71);
      *(ulong *)(param_2 + 0x360) =
           CONCAT44(fVar26 * fVar66 + fVar64 * fVar69 + fVar53 * fVar71,
                    fVar39 * fVar66 + fVar14 * fVar69 + fVar47 * fVar71);
      *(float *)(param_2 + 0x378) = fVar63 + fVar40 * fVar44 + fVar74 * fVar45 + fVar41 * fVar46;
      *(float *)(param_2 + 0x37c) = fVar67 + fVar13 * fVar44 + fVar42 * fVar45 + fVar24 * fVar46;
      *(float *)(param_2 + 0x370) = fVar43 + fVar39 * fVar44 + fVar14 * fVar45 + fVar47 * fVar46;
      *(float *)(param_2 + 0x374) = fVar57 + fVar26 * fVar44 + fVar64 * fVar45 + fVar53 * fVar46;
      fVar10 = (float)*(undefined8 *)(param_2 + 0x388);
      uVar11 = *(undefined8 *)(param_2 + 0x380);
      auVar15 = SUB1612(*(undefined1 (*) [16])(param_2 + 0x390),0);
      auVar60 = *(undefined1 (*) [16])(lVar8 + 0x380);
      auVar97 = *(undefined1 (*) [16])(lVar8 + 0x390);
      auVar33 = *(undefined1 (*) [16])(lVar8 + 0x3a0);
      auVar79 = *(undefined1 (*) [16])(lVar8 + 0x3b0);
LAB_008ce73c:
      fVar12 = (float)uVar11;
      fVar74 = auVar60._0_4_;
      fVar42 = auVar60._4_4_;
      fVar47 = auVar60._8_4_;
      fVar53 = auVar60._12_4_;
      fVar25 = (float)((ulong)uVar11 >> 0x20);
      fVar41 = auVar97._0_4_;
      fVar24 = auVar97._4_4_;
      fVar43 = auVar97._8_4_;
      fVar57 = auVar97._12_4_;
      fVar13 = auVar27._0_4_;
      fVar14 = auVar27._4_4_;
      fVar63 = auVar33._0_4_;
      fVar67 = auVar33._4_4_;
      fVar66 = auVar33._8_4_;
      fVar69 = auVar33._12_4_;
      fVar39 = auVar15._0_4_;
      fVar26 = auVar15._4_4_;
      fVar40 = auVar15._8_4_;
      fVar64 = auVar27._8_4_;
      uVar82 = CONCAT44(fVar42 * fVar13 + fVar24 * fVar14 + fVar67 * fVar64,
                        fVar74 * fVar13 + fVar41 * fVar14 + fVar63 * fVar64);
      uVar85 = CONCAT44(fVar53 * fVar13 + fVar57 * fVar14 + fVar69 * fVar64,
                        fVar47 * fVar13 + fVar43 * fVar14 + fVar66 * fVar64);
      fVar13 = auVar16._0_4_;
      fVar14 = auVar16._4_4_;
      fVar64 = auVar16._8_4_;
      *(ulong *)(param_2 + 0x388) =
           CONCAT44(fVar53 * fVar12 + fVar57 * fVar25 + fVar69 * fVar10,
                    fVar47 * fVar12 + fVar43 * fVar25 + fVar66 * fVar10);
      *(ulong *)(param_2 + 0x380) =
           CONCAT44(fVar42 * fVar12 + fVar24 * fVar25 + fVar67 * fVar10,
                    fVar74 * fVar12 + fVar41 * fVar25 + fVar63 * fVar10);
      *(ulong *)(param_2 + 0x398) =
           CONCAT44(fVar53 * fVar39 + fVar57 * fVar26 + fVar69 * fVar40,
                    fVar47 * fVar39 + fVar43 * fVar26 + fVar66 * fVar40);
      *(ulong *)(param_2 + 0x390) =
           CONCAT44(fVar42 * fVar39 + fVar24 * fVar26 + fVar67 * fVar40,
                    fVar74 * fVar39 + fVar41 * fVar26 + fVar63 * fVar40);
      uVar11 = CONCAT44(auVar79._4_4_ + fVar42 * fVar13 + fVar24 * fVar14 + fVar67 * fVar64,
                        auVar79._0_4_ + fVar74 * fVar13 + fVar41 * fVar14 + fVar63 * fVar64);
      uVar103 = CONCAT44(auVar79._12_4_ + fVar53 * fVar13 + fVar57 * fVar14 + fVar69 * fVar64,
                         auVar79._8_4_ + fVar47 * fVar13 + fVar43 * fVar14 + fVar66 * fVar64);
    }
    else {
      if (*(char *)(lVar8 + 2) == '\0') {
        *(undefined8 *)(param_2 + 0x360) = *(undefined8 *)(param_2 + 0x2e0);
        *(undefined8 *)(param_2 + 0x368) = *(undefined8 *)(param_2 + 0x2e8);
        *(undefined8 *)(param_2 + 0x378) = *(undefined8 *)(param_2 + 0x2f8);
        *(undefined8 *)(param_2 + 0x370) = *(undefined8 *)(param_2 + 0x2f0);
        *(undefined8 *)(param_2 + 0x340) = *(undefined8 *)(param_2 + 0x2c0);
        *(undefined8 *)(param_2 + 0x398) = *(undefined8 *)(param_2 + 0x318);
        auVar19 = *(undefined1 (*) [16])(param_2 + 0x370);
        *(undefined8 *)(param_2 + 0x348) = *(undefined8 *)(param_2 + 0x2c8);
        *(undefined8 *)(param_2 + 0x350) = *(undefined8 *)(param_2 + 0x2d0);
        *(undefined8 *)(param_2 + 0x358) = *(undefined8 *)(param_2 + 0x2d8);
        *(undefined8 *)(param_2 + 0x390) = *(undefined8 *)(param_2 + 0x310);
        *(undefined8 *)(param_2 + 0x388) = *(undefined8 *)(param_2 + 0x308);
        *(undefined8 *)(param_2 + 0x3b8) = *(undefined8 *)(param_2 + 0x338);
        *(undefined8 *)(param_2 + 0x3a8) = *(undefined8 *)(param_2 + 0x328);
        *(undefined8 *)(param_2 + 0x380) = *(undefined8 *)(param_2 + 0x300);
        *(undefined8 *)(param_2 + 0x3b0) = *(undefined8 *)(param_2 + 0x330);
        *(undefined8 *)(param_2 + 0x3a0) = *(undefined8 *)(param_2 + 800);
      }
      else {
        fVar53 = *(float *)(param_2 + 0x608);
        if (*(long *)(lVar8 + 0x298) == 0) {
          auVar15 = *(undefined1 (*) [12])(param_2 + 0x60c);
          fVar41 = *(float *)PTR_FloatPi_047d23a0;
        }
        else {
          fVar41 = *(float *)PTR_FloatPi_047d23a0;
          fVar24 = fVar41 / *(float *)PTR_FloatDegree180_047d2390;
          auVar15._4_4_ = fVar24 * *(float *)(param_2 + 0x610);
          auVar15._0_4_ = *(float *)(param_2 + 0x60c) * fVar24;
          auVar15._8_4_ = fVar24 * *(float *)(param_2 + 0x614);
        }
        fVar24 = *(float *)PTR_Float1Divided2Pi_047d23d0;
        fVar57 = auVar15._0_4_ * fVar24;
        fVar63 = auVar15._4_4_ * fVar24;
        fVar67 = auVar15._8_4_ * fVar24;
        fVar43 = -fVar41;
        auVar59._0_4_ = (int)(fVar57 + (float)(-(uint)(0.0 <= fVar57) & 0x80000000 ^ 0xbf000000));
        auVar59._4_4_ = (int)(fVar63 + (float)(-(uint)(0.0 <= fVar63) & 0x80000000 ^ 0xbf000000));
        auVar59._8_4_ = (int)(fVar67 + (float)(-(uint)(0.0 <= fVar67) & 0x80000000 ^ 0xbf000000));
        auVar59._12_4_ =
             (int)(fVar24 * 0.0 + (float)(-(uint)(0.0 <= fVar24 * 0.0) & 0x80000000 ^ 0xbf000000));
        fVar24 = *(float *)PTR_Float2Pi_047d23e8;
        auVar60 = NEON_scvtf(auVar59,4);
        fVar101 = *(float *)PTR_SinCoefficients_047d23d8;
        auVar17._0_4_ = auVar15._0_4_ - auVar60._0_4_ * fVar24;
        auVar17._4_4_ = auVar15._4_4_ - auVar60._4_4_ * fVar24;
        auVar17._8_4_ = auVar15._8_4_ - auVar60._8_4_ * fVar24;
        auVar17._12_4_ = 0.0 - auVar60._12_4_ * fVar24;
        fVar57 = *(float *)PTR_FloatPiDivided2_047d23f0;
        fVar24 = *(float *)(PTR_SinCoefficients_047d23d8 + 4);
        fVar63 = -fVar57;
        iVar3 = -(uint)(fVar57 < auVar17._0_4_);
        iVar4 = -(uint)(fVar57 < auVar17._4_4_);
        bVar87 = (byte)((uint)iVar4 >> 8);
        bVar88 = (byte)((uint)iVar4 >> 0x10);
        bVar89 = (byte)((uint)iVar4 >> 0x18);
        iVar5 = -(uint)(fVar57 < auVar17._8_4_);
        bVar90 = (byte)((uint)iVar5 >> 8);
        bVar91 = (byte)((uint)iVar5 >> 0x10);
        bVar92 = (byte)((uint)iVar5 >> 0x18);
        iVar6 = -(uint)(fVar57 < auVar17._12_4_);
        bVar93 = (byte)((uint)iVar6 >> 8);
        bVar94 = (byte)((uint)iVar6 >> 0x10);
        bVar95 = (byte)((uint)iVar6 >> 0x18);
        auVar28._0_4_ = fVar41 - auVar17._0_4_;
        auVar28._4_4_ = fVar41 - auVar17._4_4_;
        auVar28._8_4_ = fVar41 - auVar17._8_4_;
        auVar28._12_4_ = fVar41 - auVar17._12_4_;
        auVar1[4] = (byte)iVar4;
        auVar1._0_4_ = iVar3;
        auVar1[5] = bVar87;
        auVar1[6] = bVar88;
        auVar1[7] = bVar89;
        auVar1[8] = (byte)iVar5;
        auVar1[9] = bVar90;
        auVar1[10] = bVar91;
        auVar1[0xb] = bVar92;
        auVar1[0xc] = (byte)iVar6;
        auVar1[0xd] = bVar93;
        auVar1[0xe] = bVar94;
        auVar1[0xf] = bVar95;
        auVar17 = auVar17 ^ (auVar17 ^ auVar28) & auVar1;
        auVar29._0_4_ = -(uint)(auVar17._0_4_ < fVar63);
        auVar29._4_4_ = -(uint)(auVar17._4_4_ < fVar63);
        auVar29._8_4_ = -(uint)(auVar17._8_4_ < fVar63);
        auVar29._12_4_ = -(uint)(auVar17._12_4_ < fVar63);
        auVar49._0_4_ = fVar43 - auVar17._0_4_;
        auVar49._4_4_ = fVar43 - auVar17._4_4_;
        auVar49._8_4_ = fVar43 - auVar17._8_4_;
        auVar49._12_4_ = fVar43 - auVar17._12_4_;
        fVar41 = *(float *)(PTR_SinCoefficients_047d23d8 + 0xc);
        auVar17 = auVar17 ^ (auVar17 ^ auVar49) & auVar29;
        fVar44 = *(float *)PTR_CosCoefficients_047d23e0;
        fVar43 = *(float *)(PTR_CosCoefficients_047d23e0 + 4);
        fVar67 = auVar17._0_4_;
        fVar96 = fVar67 * fVar67;
        fVar66 = auVar17._4_4_;
        fVar98 = fVar66 * fVar66;
        fVar69 = auVar17._8_4_;
        fVar99 = fVar69 * fVar69;
        fVar71 = auVar17._12_4_;
        fVar100 = fVar71 * fVar71;
        fVar57 = *(float *)(PTR_CosCoefficients_047d23e0 + 0xc);
        fVar102 = -*(float *)(PTR_CosCoefficients_047d23e0 + 8);
        fVar45 = -*(float *)(PTR_SinCoefficients_047d23d8 + 8);
        auVar30[0] = ~(byte)auVar29._0_4_ & ~(byte)iVar3;
        auVar30[1] = ~(byte)((uint)auVar29._0_4_ >> 8) & ~(byte)((uint)iVar3 >> 8);
        auVar30[2] = ~(byte)((uint)auVar29._0_4_ >> 0x10) & ~(byte)((uint)iVar3 >> 0x10);
        auVar30[3] = ~(byte)((uint)auVar29._0_4_ >> 0x18) & ~(byte)((uint)iVar3 >> 0x18);
        auVar30[4] = ~(byte)auVar29._4_4_ & ~(byte)iVar4;
        auVar30[5] = ~(byte)((uint)auVar29._4_4_ >> 8) & ~bVar87;
        auVar30[6] = ~(byte)((uint)auVar29._4_4_ >> 0x10) & ~bVar88;
        auVar30[7] = ~(byte)((uint)auVar29._4_4_ >> 0x18) & ~bVar89;
        auVar30[8] = ~(byte)auVar29._8_4_ & ~(byte)iVar5;
        auVar30[9] = ~(byte)((uint)auVar29._8_4_ >> 8) & ~bVar90;
        auVar30[10] = ~(byte)((uint)auVar29._8_4_ >> 0x10) & ~bVar91;
        auVar30[0xb] = ~(byte)((uint)auVar29._8_4_ >> 0x18) & ~bVar92;
        auVar30[0xc] = ~(byte)auVar29._12_4_ & ~(byte)iVar6;
        auVar30[0xd] = ~(byte)((uint)auVar29._12_4_ >> 8) & ~bVar93;
        auVar30[0xe] = ~(byte)((uint)auVar29._12_4_ >> 0x10) & ~bVar94;
        auVar30[0xf] = ~(byte)((uint)auVar29._12_4_ >> 0x18) & ~bVar95;
        fVar63 = -*(float *)(PTR_SinCoefficients_047d23d8 + 0x10);
        fVar46 = -*(float *)(PTR_CosCoefficients_047d23e0 + 0x10);
        auVar60 = NEON_fmov(0x3f800000,4);
        auVar78._0_4_ =
             auVar60._0_4_ +
             fVar96 * (fVar46 + fVar96 * (fVar57 + fVar96 * (fVar102 +
                                                            fVar96 * (fVar43 - fVar96 * fVar44))));
        auVar78._4_4_ =
             auVar60._4_4_ +
             fVar98 * (fVar46 + fVar98 * (fVar57 + fVar98 * (fVar102 +
                                                            fVar98 * (fVar43 - fVar98 * fVar44))));
        auVar78._8_4_ =
             auVar60._8_4_ +
             fVar99 * (fVar46 + fVar99 * (fVar57 + fVar99 * (fVar102 +
                                                            fVar99 * (fVar43 - fVar99 * fVar44))));
        auVar78._12_4_ =
             auVar60._12_4_ +
             fVar100 * (fVar46 + fVar100 * (fVar57 + fVar100 * (fVar102 +
                                                               fVar100 * (fVar43 - fVar100 * fVar44)
                                                               )));
        auVar18._0_4_ =
             fVar67 * (auVar60._0_4_ +
                      fVar96 * (fVar63 + fVar96 * (fVar41 + fVar96 * (fVar45 + fVar96 * (fVar24 - 
                                                  fVar96 * fVar101)))));
        auVar18._4_4_ =
             fVar66 * (auVar60._4_4_ +
                      fVar98 * (fVar63 + fVar98 * (fVar41 + fVar98 * (fVar45 + fVar98 * (fVar24 - 
                                                  fVar98 * fVar101)))));
        auVar18._8_4_ =
             fVar69 * (auVar60._8_4_ +
                      fVar99 * (fVar63 + fVar99 * (fVar41 + fVar99 * (fVar45 + fVar99 * (fVar24 - 
                                                  fVar99 * fVar101)))));
        auVar18._12_4_ =
             fVar71 * (auVar60._12_4_ +
                      fVar100 * (fVar63 + fVar100 * (fVar41 + fVar100 * (fVar45 + fVar100 * (fVar24 
                                                  - fVar100 * fVar101)))));
        auVar31._0_4_ = -auVar78._0_4_;
        auVar31._4_4_ = -auVar78._4_4_;
        auVar31._8_4_ = -auVar78._8_4_;
        auVar31._12_4_ = -auVar78._12_4_;
        auVar31 = auVar31 ^ (auVar31 ^ auVar78) & auVar30;
        fVar63 = auVar31._4_4_;
        auVar60 = NEON_ext(auVar18,auVar18,8,1);
        auVar97 = NEON_ext(auVar31,auVar31,8,1);
        fVar41 = auVar97._0_4_;
        fVar24 = auVar60._0_4_;
        fVar64 = fVar64 * 0.0;
        fVar74 = fVar74 * 0.0;
        fVar57 = auVar31._0_4_;
        fVar43 = (float)*(undefined8 *)(param_2 + 0x600);
        auVar76._0_8_ = CONCAT44(fVar24 * fVar63 * fVar43,fVar41 * fVar63 * fVar43);
        auVar76._8_4_ = auVar18._4_4_ * fVar10 * fVar43;
        auVar76._12_4_ = fVar74 * fVar43;
        fVar43 = fVar24 * fVar57 * fVar25 + fVar41 * auVar18._4_4_ * auVar18._0_4_;
        fVar67 = fVar41 * fVar57 * fVar39 + fVar24 * auVar18._4_4_ * auVar18._0_4_;
        auVar72._0_8_ = CONCAT44(fVar67,fVar43);
        auVar72._8_4_ = fVar57 * 0.0 * fVar26 + fVar63 * fVar12 * auVar18._0_4_;
        auVar72._12_4_ = fVar57 * 0.0 * fVar42 + fVar64 * auVar18._0_4_;
        auVar27 = *(undefined1 (*) [12])(param_2 + 0x618);
        fVar25 = fVar24 * auVar18._0_4_ * fVar40 + fVar41 * auVar18._4_4_ * fVar57;
        fVar39 = fVar41 * auVar18._0_4_ * fVar13 + fVar24 * auVar18._4_4_ * fVar57;
        auVar32._0_8_ = CONCAT44(fVar39,fVar25);
        auVar32._8_4_ = auVar18._0_4_ * 0.0 * fVar14 + fVar63 * fVar12 * fVar57;
        auVar32._12_4_ = auVar18._0_4_ * 0.0 * fVar47 + fVar64 * fVar57;
        fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 0x600) >> 0x20);
        *(ulong *)(param_2 + 0x388) = CONCAT44(fVar74,auVar18._4_4_ * fVar10);
        *(ulong *)(param_2 + 0x380) = CONCAT44(fVar24 * fVar63,fVar41 * fVar63);
        *(long *)(param_2 + 0x398) = auVar72._8_8_;
        *(undefined8 *)(param_2 + 0x390) = auVar72._0_8_;
        *(long *)(param_2 + 0x348) = auVar76._8_8_;
        *(undefined8 *)(param_2 + 0x340) = auVar76._0_8_;
        *(ulong *)(param_2 + 0x358) = CONCAT44(auVar72._12_4_ * fVar12,auVar72._8_4_ * fVar12);
        *(ulong *)(param_2 + 0x350) = CONCAT44(fVar67 * fVar12,fVar43 * fVar12);
        auVar19._12_4_ = 0;
        auVar19._0_12_ = auVar27;
        *(long *)(param_2 + 0x3a8) = auVar32._8_8_;
        *(undefined8 *)(param_2 + 0x3a0) = auVar32._0_8_;
        *(ulong *)(param_2 + 0x3b8) = (ulong)auVar27._8_4_;
        *(long *)(param_2 + 0x3b0) = auVar27._0_8_;
        *(ulong *)(param_2 + 0x368) = CONCAT44(auVar32._12_4_ * fVar53,auVar32._8_4_ * fVar53);
        *(ulong *)(param_2 + 0x360) = CONCAT44(fVar39 * fVar53,fVar25 * fVar53);
        *(ulong *)(param_2 + 0x378) = (ulong)auVar27._8_4_;
        *(long *)(param_2 + 0x370) = auVar27._0_8_;
      }
      fVar10 = auVar19._0_4_ + (float)*(undefined8 *)(param_2 + 0x5c0);
      fVar12 = auVar19._4_4_ + (float)((ulong)*(undefined8 *)(param_2 + 0x5c0) >> 0x20);
      fVar25 = auVar19._8_4_ + (float)*(undefined8 *)(param_2 + 0x5c8);
      uVar11 = CONCAT44(auVar19._12_4_ + (float)((ulong)*(undefined8 *)(param_2 + 0x5c8) >> 0x20),
                        fVar25);
      lVar8 = *(long *)(param_2 + 0x548);
      *(undefined8 *)(param_2 + 0x378) = uVar11;
      *(ulong *)(param_2 + 0x370) = CONCAT44(fVar12,fVar10);
      *(undefined8 *)(param_2 + 0x3b8) = uVar11;
      *(ulong *)(param_2 + 0x3b0) = CONCAT44(fVar12,fVar10);
      if (*(char *)(*(long *)(lVar8 + 0xa0) + 0x753) == '\x01') goto LAB_008ce77c;
      fVar39 = *(float *)(param_2 + 0x340);
      fVar26 = *(float *)(param_2 + 0x344);
      fVar40 = *(float *)(param_2 + 0x348);
      fVar13 = *(float *)(param_2 + 0x350);
      fVar14 = *(float *)(param_2 + 0x354);
      fVar64 = *(float *)(param_2 + 0x358);
      fVar74 = *(float *)(param_2 + 0x360);
      fVar42 = *(float *)(param_2 + 0x364);
      fVar47 = *(float *)(param_2 + 0x368);
      fVar53 = *(float *)(lVar8 + 0x340);
      fVar41 = *(float *)(lVar8 + 0x344);
      fVar24 = *(float *)(lVar8 + 0x348);
      fVar43 = *(float *)(lVar8 + 0x34c);
      fVar57 = *(float *)(lVar8 + 0x350);
      fVar63 = *(float *)(lVar8 + 0x354);
      fVar67 = *(float *)(lVar8 + 0x358);
      fVar66 = *(float *)(lVar8 + 0x35c);
      fVar69 = *(float *)(lVar8 + 0x360);
      fVar71 = *(float *)(lVar8 + 0x364);
      fVar44 = *(float *)(lVar8 + 0x368);
      fVar45 = *(float *)(lVar8 + 0x36c);
      fVar46 = *(float *)(lVar8 + 0x370);
      fVar96 = *(float *)(lVar8 + 0x374);
      fVar98 = *(float *)(lVar8 + 0x378);
      fVar99 = *(float *)(lVar8 + 0x37c);
      auVar60 = *(undefined1 (*) [16])(param_2 + 0x3a0);
      *(ulong *)(param_2 + 0x348) =
           CONCAT44(fVar43 * fVar39 + fVar66 * fVar26 + fVar45 * fVar40,
                    fVar24 * fVar39 + fVar67 * fVar26 + fVar44 * fVar40);
      *(ulong *)(param_2 + 0x340) =
           CONCAT44(fVar41 * fVar39 + fVar63 * fVar26 + fVar71 * fVar40,
                    fVar53 * fVar39 + fVar57 * fVar26 + fVar69 * fVar40);
      *(float *)(param_2 + 0x358) = fVar24 * fVar13 + fVar67 * fVar14 + fVar44 * fVar64;
      *(float *)(param_2 + 0x35c) = fVar43 * fVar13 + fVar66 * fVar14 + fVar45 * fVar64;
      *(float *)(param_2 + 0x350) = fVar53 * fVar13 + fVar57 * fVar14 + fVar69 * fVar64;
      *(float *)(param_2 + 0x354) = fVar41 * fVar13 + fVar63 * fVar14 + fVar71 * fVar64;
      *(ulong *)(param_2 + 0x368) =
           CONCAT44(fVar43 * fVar74 + fVar66 * fVar42 + fVar45 * fVar47,
                    fVar24 * fVar74 + fVar67 * fVar42 + fVar44 * fVar47);
      *(ulong *)(param_2 + 0x360) =
           CONCAT44(fVar41 * fVar74 + fVar63 * fVar42 + fVar71 * fVar47,
                    fVar53 * fVar74 + fVar57 * fVar42 + fVar69 * fVar47);
      *(float *)(param_2 + 0x378) = fVar98 + fVar24 * fVar10 + fVar67 * fVar12 + fVar44 * fVar25;
      *(float *)(param_2 + 0x37c) = fVar99 + fVar43 * fVar10 + fVar66 * fVar12 + fVar45 * fVar25;
      *(float *)(param_2 + 0x370) = fVar46 + fVar53 * fVar10 + fVar57 * fVar12 + fVar69 * fVar25;
      *(float *)(param_2 + 0x374) = fVar96 + fVar41 * fVar10 + fVar63 * fVar12 + fVar71 * fVar25;
      fVar39 = *(float *)(param_2 + 0x380);
      fVar26 = *(float *)(param_2 + 900);
      fVar40 = *(float *)(param_2 + 0x388);
      fVar13 = *(float *)(param_2 + 0x390);
      fVar14 = *(float *)(param_2 + 0x394);
      fVar64 = *(float *)(param_2 + 0x398);
      auVar97 = *(undefined1 (*) [16])(lVar8 + 0x380);
      auVar33 = *(undefined1 (*) [16])(lVar8 + 0x390);
      fVar74 = auVar97._0_4_;
      fVar42 = auVar97._4_4_;
      fVar47 = auVar97._8_4_;
      fVar53 = auVar97._12_4_;
      fVar41 = auVar33._0_4_;
      fVar24 = auVar33._4_4_;
      fVar43 = auVar33._8_4_;
      fVar57 = auVar33._12_4_;
      auVar97 = *(undefined1 (*) [16])(lVar8 + 0x3a0);
      auVar33 = *(undefined1 (*) [16])(lVar8 + 0x3b0);
      fVar63 = auVar97._0_4_;
      fVar67 = auVar97._4_4_;
      fVar66 = auVar97._8_4_;
      fVar69 = auVar97._12_4_;
      auVar20._0_8_ =
           CONCAT44(fVar42 * fVar13 + fVar24 * fVar14 + fVar67 * fVar64,
                    fVar74 * fVar13 + fVar41 * fVar14 + fVar63 * fVar64);
      auVar20._8_4_ = fVar47 * fVar13 + fVar43 * fVar14 + fVar66 * fVar64;
      auVar20._12_4_ = fVar53 * fVar13 + fVar57 * fVar14 + fVar69 * fVar64;
      fVar13 = auVar60._0_4_;
      fVar14 = auVar60._4_4_;
      fVar64 = auVar60._8_4_;
      uVar82 = CONCAT44(fVar42 * fVar13 + fVar24 * fVar14 + fVar67 * fVar64,
                        fVar74 * fVar13 + fVar41 * fVar14 + fVar63 * fVar64);
      uVar85 = CONCAT44(fVar53 * fVar13 + fVar57 * fVar14 + fVar69 * fVar64,
                        fVar47 * fVar13 + fVar43 * fVar14 + fVar66 * fVar64);
      *(ulong *)(param_2 + 0x388) =
           CONCAT44(fVar53 * fVar39 + fVar57 * fVar26 + fVar69 * fVar40,
                    fVar47 * fVar39 + fVar43 * fVar26 + fVar66 * fVar40);
      *(ulong *)(param_2 + 0x380) =
           CONCAT44(fVar42 * fVar39 + fVar24 * fVar26 + fVar67 * fVar40,
                    fVar74 * fVar39 + fVar41 * fVar26 + fVar63 * fVar40);
      *(long *)(param_2 + 0x398) = auVar20._8_8_;
      *(undefined8 *)(param_2 + 0x390) = auVar20._0_8_;
      uVar11 = CONCAT44(auVar33._4_4_ + fVar42 * fVar10 + fVar24 * fVar12 + fVar67 * fVar25,
                        auVar33._0_4_ + fVar74 * fVar10 + fVar41 * fVar12 + fVar63 * fVar25);
      uVar103 = CONCAT44(auVar33._12_4_ + fVar53 * fVar10 + fVar57 * fVar12 + fVar69 * fVar25,
                         auVar33._8_4_ + fVar47 * fVar10 + fVar43 * fVar12 + fVar66 * fVar25);
    }
    *(undefined8 *)(param_2 + 0x3a8) = uVar85;
    *(undefined8 *)(param_2 + 0x3a0) = uVar82;
  }
  *(undefined8 *)(param_2 + 0x3b8) = uVar103;
  *(undefined8 *)(param_2 + 0x3b0) = uVar11;
LAB_008ce77c:
  lVar9 = *(long *)(param_2 + 0x3e0);
  lVar8 = *(long *)(param_2 + 1000);
  local_28 = param_2;
  if ((*(long *)(param_2 + 0x3f0) != 0) &&
     (pcVar7 = *(code **)(*(long *)(param_2 + 0x3f0) + 0x18), pcVar7 != (code *)0x0)) {
    (*pcVar7)(&local_28);
  }
  if ((lVar9 != 0) && (pcVar7 = *(code **)(lVar9 + 0x18), pcVar7 != (code *)0x0)) {
    (*pcVar7)(&local_28);
  }
  if ((lVar8 != 0) && (pcVar7 = *(code **)(lVar8 + 0x18), pcVar7 != (code *)0x0)) {
    (*pcVar7)(&local_28);
  }
  return;
}


