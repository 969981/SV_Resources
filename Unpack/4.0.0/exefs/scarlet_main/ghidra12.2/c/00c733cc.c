/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c733cc; name: FUN_00c733cc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c733cc(undefined1 (*param_1) [16],float *param_2)

{
  undefined1 auVar1 [12];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  undefined1 auVar14 [16];
  float fVar16;
  float fVar18;
  float fVar19;
  undefined1 auVar17 [16];
  float fVar20;
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  float fVar24;
  float fVar25;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar26 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 auVar35 [12];
  float fVar39;
  float fVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar53;
  float fVar54;
  undefined1 auVar48 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  float fVar55;
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar69;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  
  auVar46 = *param_1;
  auVar17 = param_1[1];
  auVar48 = NEON_ext(auVar17,auVar17,0xc,1);
  fVar40 = auVar17._0_4_;
  fVar29 = auVar17._4_4_;
  fVar27 = auVar17._8_4_;
  fVar15 = auVar17._12_4_;
  auVar14._4_12_ = auVar48._4_12_;
  auVar14._0_4_ = fVar40;
  auVar50._12_4_ = auVar48._12_4_;
  auVar50._0_8_ = auVar14._0_8_;
  auVar50._8_4_ = fVar29;
  auVar49._8_8_ = auVar50._8_8_;
  auVar49._4_4_ = auVar48._0_4_;
  auVar49._0_4_ = fVar40;
  auVar51._0_12_ = auVar49._0_12_;
  auVar51._12_4_ = auVar48._4_4_;
  auVar41._4_12_ = auVar46._4_12_;
  auVar41._0_4_ = 0x2b8cbccc;
  auVar31._0_4_ = -(uint)(ABS(auVar46._0_4_) < 1e-12);
  auVar31._4_4_ = auVar31._0_4_;
  auVar31._8_4_ = auVar31._0_4_;
  auVar31._12_4_ = auVar31._0_4_;
  fVar22 = fVar29 * fVar29 + fVar29 * fVar29;
  fVar23 = fVar27 * fVar27 + fVar27 * fVar27;
  auVar14 = NEON_fmov(0x3f800000,4);
  fVar57 = auVar14._0_4_ - (fVar40 * fVar40 + fVar40 * fVar40);
  fVar58 = auVar14._4_4_ - fVar22;
  auVar17 = auVar46 ^ (auVar46 ^ auVar41) & auVar31;
  auVar48 = NEON_ext(auVar51,auVar51,8,1);
  fVar34 = fVar40 * fVar15 + fVar40 * fVar15;
  fVar39 = fVar29 * fVar15 + fVar29 * fVar15;
  fVar40 = fVar27 * fVar15 + fVar27 * fVar15;
  auVar42._4_12_ = auVar41._4_12_;
  auVar42._0_4_ = fVar57;
  auVar44._12_4_ = auVar46._12_4_;
  auVar44._0_8_ = auVar42._0_8_;
  auVar44._8_4_ = fVar58;
  auVar43._8_8_ = auVar44._8_8_;
  auVar43._4_4_ = fVar57;
  auVar43._0_4_ = fVar57;
  auVar45._0_12_ = auVar43._0_12_;
  auVar45._12_4_ = fVar58;
  fVar24 = auVar48._0_4_ * fVar27;
  fVar27 = auVar48._4_4_ * fVar27;
  fVar29 = auVar48._8_4_ * fVar29;
  auVar46 = NEON_ext(auVar45,auVar45,0xc,1);
  auVar52._0_4_ = auVar17._0_4_;
  auVar52._4_4_ = 0x2b8cbccc;
  auVar52._8_8_ = auVar17._8_8_;
  fVar24 = fVar24 + fVar24;
  fVar27 = fVar27 + fVar27;
  fVar29 = fVar29 + fVar29;
  auVar32._0_4_ = -(uint)(ABS(auVar17._4_4_) < 1e-12);
  auVar32._4_4_ = auVar32._0_4_;
  auVar32._8_4_ = auVar32._0_4_;
  auVar32._12_4_ = auVar32._0_4_;
  auVar17 = auVar17 ^ (auVar17 ^ auVar52) & auVar32;
  auVar36._12_4_ = auVar17._12_4_;
  auVar36._8_4_ = 0x2b8cbccc;
  auVar36._0_8_ = auVar17._0_8_;
  auVar71._0_4_ = -(uint)(ABS(auVar17._8_4_) < 1e-12);
  auVar71._4_4_ = auVar71._0_4_;
  auVar71._8_4_ = auVar71._0_4_;
  auVar71._12_4_ = auVar71._0_4_;
  auVar17 = auVar17 ^ (auVar17 ^ auVar36) & auVar71;
  fVar20 = auVar17._0_4_;
  fVar16 = (auVar46._0_4_ - fVar23) * fVar20;
  fVar18 = (fVar29 + fVar40) * fVar20;
  fVar19 = (fVar27 - fVar39) * fVar20;
  fVar20 = fVar20 * 0.0;
  fVar55 = auVar17._4_4_;
  fVar47 = (fVar29 - fVar40) * fVar55;
  fVar53 = (auVar46._4_4_ - fVar23) * fVar55;
  fVar54 = (fVar24 + fVar34) * fVar55;
  fVar55 = fVar55 * 0.0;
  fVar40 = *param_2;
  fVar29 = param_2[1];
  fVar15 = param_2[2];
  fVar23 = param_2[3];
  fVar57 = param_2[4];
  fVar58 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  fVar13 = auVar17._8_4_;
  fVar10 = (fVar27 + fVar39) * fVar13;
  fVar11 = (fVar24 - fVar34) * fVar13;
  fVar12 = (auVar46._8_4_ - fVar22) * fVar13;
  fVar13 = fVar13 * 0.0;
  fVar27 = param_2[8];
  fVar22 = param_2[9];
  fVar24 = param_2[10];
  fVar34 = param_2[0xb];
  fVar39 = param_2[0xc];
  fVar4 = param_2[0xd];
  fVar5 = param_2[0xe];
  fVar6 = param_2[0xf];
  fVar25 = fVar40 * fVar16 + fVar57 * fVar18 + fVar27 * fVar19 + fVar39 * fVar20;
  fVar28 = fVar29 * fVar16 + fVar58 * fVar18 + fVar22 * fVar19 + fVar4 * fVar20;
  fVar30 = fVar15 * fVar16 + fVar2 * fVar18 + fVar24 * fVar19 + fVar5 * fVar20;
  fVar20 = fVar23 * fVar16 + fVar3 * fVar18 + fVar34 * fVar19 + fVar6 * fVar20;
  fVar16 = fVar40 * fVar47 + fVar57 * fVar53 + fVar27 * fVar54 + fVar39 * fVar55;
  fVar18 = fVar29 * fVar47 + fVar58 * fVar53 + fVar22 * fVar54 + fVar4 * fVar55;
  fVar19 = fVar15 * fVar47 + fVar2 * fVar53 + fVar24 * fVar54 + fVar5 * fVar55;
  fVar55 = fVar23 * fVar47 + fVar3 * fVar53 + fVar34 * fVar54 + fVar6 * fVar55;
  auVar37._0_4_ = fVar40 * fVar10 + fVar57 * fVar11 + fVar27 * fVar12 + fVar39 * fVar13;
  auVar37._4_4_ = fVar29 * fVar10 + fVar58 * fVar11 + fVar22 * fVar12 + fVar4 * fVar13;
  auVar37._8_4_ = fVar15 * fVar10 + fVar2 * fVar11 + fVar24 * fVar12 + fVar5 * fVar13;
  auVar37._12_4_ = fVar23 * fVar10 + fVar3 * fVar11 + fVar34 * fVar12 + fVar6 * fVar13;
  auVar46._0_4_ = fVar25 * fVar25 + fVar28 * fVar28;
  auVar46._4_4_ = fVar30 * fVar30 + fVar20 * fVar20;
  auVar46._8_4_ = fVar25 * fVar25 + fVar28 * fVar28;
  auVar46._12_4_ = fVar30 * fVar30 + fVar20 * fVar20;
  auVar17 = NEON_ext(auVar46,auVar46,4,1);
  auVar48._0_4_ = fVar16 * fVar16 + fVar18 * fVar18;
  auVar48._4_4_ = fVar19 * fVar19 + fVar55 * fVar55;
  auVar48._8_4_ = fVar16 * fVar16 + fVar18 * fVar18;
  auVar48._12_4_ = fVar19 * fVar19 + fVar55 * fVar55;
  auVar66._0_4_ = auVar37._0_4_ * auVar37._0_4_ + auVar37._4_4_ * auVar37._4_4_;
  auVar66._4_4_ = auVar37._8_4_ * auVar37._8_4_ + auVar37._12_4_ * auVar37._12_4_;
  auVar66._8_4_ = auVar37._0_4_ * auVar37._0_4_ + auVar37._4_4_ * auVar37._4_4_;
  auVar66._12_4_ = auVar37._8_4_ * auVar37._8_4_ + auVar37._12_4_ * auVar37._12_4_;
  auVar7._0_4_ = auVar17._0_4_ + auVar17._4_4_;
  auVar7._4_4_ = auVar17._8_4_ + auVar17._12_4_;
  auVar7._8_4_ = auVar17._0_4_ + auVar17._4_4_;
  auVar7._12_4_ = auVar17._8_4_ + auVar17._12_4_;
  auVar17 = NEON_ext(auVar48,auVar48,4,1);
  auVar8._0_4_ = auVar17._0_4_ + auVar17._4_4_;
  auVar8._4_4_ = auVar17._8_4_ + auVar17._12_4_;
  auVar8._8_4_ = auVar17._0_4_ + auVar17._4_4_;
  auVar8._12_4_ = auVar17._8_4_ + auVar17._12_4_;
  auVar17 = NEON_ext(auVar66,auVar66,4,1);
  auVar9._0_4_ = auVar17._0_4_ + auVar17._4_4_;
  auVar9._4_4_ = auVar17._8_4_ + auVar17._12_4_;
  auVar9._8_4_ = auVar17._0_4_ + auVar17._4_4_;
  auVar9._12_4_ = auVar17._8_4_ + auVar17._12_4_;
  auVar17 = NEON_frsqrte(auVar7,4);
  auVar46 = NEON_frsqrte(auVar8,4);
  auVar66 = NEON_frsqrte(auVar9,4);
  auVar60._0_4_ = auVar7._0_4_ * auVar17._0_4_;
  auVar60._4_4_ = auVar7._4_4_ * auVar17._4_4_;
  auVar60._8_4_ = auVar7._8_4_ * auVar17._8_4_;
  auVar60._12_4_ = auVar7._12_4_ * auVar17._12_4_;
  auVar73._0_4_ = auVar9._0_4_ * auVar66._0_4_;
  auVar73._4_4_ = auVar9._4_4_ * auVar66._4_4_;
  auVar73._8_4_ = auVar9._8_4_ * auVar66._8_4_;
  auVar73._12_4_ = auVar9._12_4_ * auVar66._12_4_;
  auVar70._0_4_ = auVar8._0_4_ * auVar46._0_4_;
  auVar70._4_4_ = auVar8._4_4_ * auVar46._4_4_;
  auVar70._8_4_ = auVar8._8_4_ * auVar46._8_4_;
  auVar70._12_4_ = auVar8._12_4_ * auVar46._12_4_;
  auVar48 = NEON_frsqrts(auVar17,auVar60,4);
  auVar71 = NEON_frsqrts(auVar46,auVar70,4);
  auVar56._0_4_ = auVar17._0_4_ * auVar48._0_4_;
  auVar56._4_4_ = auVar17._4_4_ * auVar48._4_4_;
  auVar56._8_4_ = auVar17._8_4_ * auVar48._8_4_;
  auVar56._12_4_ = auVar17._12_4_ * auVar48._12_4_;
  auVar17 = NEON_frsqrts(auVar66,auVar73,4);
  auVar61._0_4_ = auVar66._0_4_ * auVar17._0_4_;
  auVar61._4_4_ = auVar66._4_4_ * auVar17._4_4_;
  auVar61._8_4_ = auVar66._8_4_ * auVar17._8_4_;
  auVar61._12_4_ = auVar66._12_4_ * auVar17._12_4_;
  auVar67._0_4_ = auVar7._0_4_ * auVar56._0_4_;
  auVar67._4_4_ = auVar7._4_4_ * auVar56._4_4_;
  auVar67._8_4_ = auVar7._8_4_ * auVar56._8_4_;
  auVar67._12_4_ = auVar7._12_4_ * auVar56._12_4_;
  auVar59._0_4_ = auVar46._0_4_ * auVar71._0_4_;
  auVar59._4_4_ = auVar46._4_4_ * auVar71._4_4_;
  auVar59._8_4_ = auVar46._8_4_ * auVar71._8_4_;
  auVar59._12_4_ = auVar46._12_4_ * auVar71._12_4_;
  auVar66 = NEON_frsqrts(auVar56,auVar67,4);
  auVar72._0_4_ = auVar8._0_4_ * auVar59._0_4_;
  auVar72._4_4_ = auVar8._4_4_ * auVar59._4_4_;
  auVar72._8_4_ = auVar8._8_4_ * auVar59._8_4_;
  auVar72._12_4_ = auVar8._12_4_ * auVar59._12_4_;
  iVar69 = -(uint)(auVar9._8_4_ == 0.0);
  auVar48 = NEON_frsqrts(auVar59,auVar72,4);
  auVar46 = NEON_fmov(0x40800000,4);
  auVar17._4_4_ = auVar9._4_4_ * auVar61._4_4_;
  auVar17._0_4_ = auVar9._0_4_ * auVar61._0_4_;
  auVar17._8_4_ = auVar9._8_4_ * auVar61._8_4_;
  auVar17._12_4_ = auVar9._12_4_ * auVar61._12_4_;
  auVar17 = NEON_frsqrts(auVar61,auVar17,4);
  iVar62 = -(uint)(auVar7._0_4_ == 0.0);
  iVar63 = -(uint)(auVar7._4_4_ == 0.0);
  iVar64 = -(uint)(auVar7._8_4_ == 0.0);
  iVar65 = -(uint)(auVar7._12_4_ == 0.0);
  fVar25 = auVar56._0_4_ * auVar66._0_4_ * fVar25;
  fVar28 = auVar56._4_4_ * auVar66._4_4_ * fVar28;
  fVar30 = auVar56._8_4_ * auVar66._8_4_ * fVar30;
  fVar20 = auVar56._12_4_ * auVar66._12_4_ * fVar20;
  auVar26._0_4_ =
       (float)CONCAT13((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar62 >> 0x18),
                       CONCAT12((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar62 >> 0x10),
                                CONCAT11((byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar62 >> 8),
                                         SUB41(fVar25,0) & ~(byte)iVar62)));
  auVar26[4] = SUB41(fVar28,0) & ~(byte)iVar63;
  auVar26[5] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar63 >> 8);
  auVar26[6] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10);
  auVar26[7] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18);
  auVar26[8] = SUB41(fVar30,0) & ~(byte)iVar64;
  auVar26[9] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar64 >> 8);
  auVar26[10] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10);
  auVar26[0xb] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18);
  auVar26[0xc] = SUB41(fVar20,0) & ~(byte)iVar65;
  auVar26[0xd] = (byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar65 >> 8);
  auVar26[0xe] = (byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10);
  auVar26[0xf] = (byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18);
  iVar62 = -(uint)(auVar8._0_4_ == 0.0);
  iVar63 = -(uint)(auVar8._4_4_ == 0.0);
  iVar64 = -(uint)(auVar8._8_4_ == 0.0);
  iVar65 = -(uint)(auVar8._12_4_ == 0.0);
  fVar16 = fVar16 * auVar59._0_4_ * auVar48._0_4_;
  fVar18 = fVar18 * auVar59._4_4_ * auVar48._4_4_;
  fVar19 = fVar19 * auVar59._8_4_ * auVar48._8_4_;
  fVar55 = fVar55 * auVar59._12_4_ * auVar48._12_4_;
  auVar33._0_8_ =
       CONCAT17((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18),
                CONCAT16((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10),
                         CONCAT15((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar63 >> 8),
                                  CONCAT14(SUB41(fVar18,0) & ~(byte)iVar63,
                                           CONCAT13((byte)((uint)fVar16 >> 0x18) &
                                                    ~(byte)((uint)iVar62 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar16 >> 0x10) &
                                                             ~(byte)((uint)iVar62 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar16 >> 8) &
                                                                      ~(byte)((uint)iVar62 >> 8),
                                                                      SUB41(fVar16,0) &
                                                                      ~(byte)iVar62)))))));
  auVar33[8] = SUB41(fVar19,0) & ~(byte)iVar64;
  auVar33[9] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar64 >> 8);
  auVar33[10] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10);
  auVar33[0xb] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18);
  auVar33[0xc] = SUB41(fVar55,0) & ~(byte)iVar65;
  auVar33[0xd] = (byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar65 >> 8);
  auVar33[0xe] = (byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10);
  auVar33[0xf] = (byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18);
  fVar29 = auVar37._4_4_ * auVar61._4_4_ * auVar17._4_4_;
  auVar1._4_8_ = auVar37._8_8_;
  auVar1._0_4_ = fVar29;
  auVar38._0_8_ = auVar1._0_8_ << 0x20;
  auVar38._8_4_ = auVar37._8_4_ * auVar61._8_4_ * auVar17._8_4_;
  auVar38._12_4_ = auVar37._12_4_ * auVar61._12_4_ * auVar17._12_4_;
  fVar40 = (float)((ulong)auVar33._0_8_ >> 0x20);
  NEON_ext(auVar26,auVar26,8,1);
  NEON_ext(auVar33,auVar33,8,1);
  auVar35._0_8_ =
       (long)CONCAT81(auVar38._8_8_,
                      (byte)((uint)fVar29 >> 0x18) & ~(byte)(-(uint)(auVar9._4_4_ == 0.0) >> 0x18))
       << 0x38;
  auVar35[8] = SUB41(auVar38._8_4_,0) & ~(byte)iVar69;
  auVar35[9] = (byte)((uint)auVar38._8_4_ >> 8) & ~(byte)((uint)iVar69 >> 8);
  auVar35[10] = (byte)((uint)auVar38._8_4_ >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
  auVar35[0xb] = (byte)((uint)auVar38._8_4_ >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
  fVar29 = auVar35._8_4_;
  auVar21._0_4_ =
       SQRT(auVar14._0_4_ + (float)_DAT_03cab3a0 * auVar26._0_4_ + (float)_DAT_03cac210 * fVar40 +
            (float)_DAT_03cabb00 * fVar29) * 0.5 * auVar46._0_4_;
  auVar21._4_4_ =
       SQRT(auVar14._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * auVar26._0_4_ +
            (float)((ulong)_DAT_03cac210 >> 0x20) * fVar40 +
            (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar29) * 0.5 * auVar46._4_4_;
  auVar21._8_4_ =
       SQRT(auVar14._8_4_ + (float)_UNK_03cab3a8 * auVar26._0_4_ + (float)_UNK_03cac218 * fVar40 +
            (float)_UNK_03cabb08 * fVar29) * 0.5 * auVar46._8_4_;
  auVar21._12_4_ =
       SQRT(auVar14._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * auVar26._0_4_ +
            (float)((ulong)_UNK_03cac218 >> 0x20) * fVar40 +
            (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar29) * 0.5 * auVar46._12_4_;
  auVar17 = NEON_frecpe(auVar21,4);
  auVar46 = NEON_frecps(auVar17,auVar21,4);
  auVar68._0_4_ = auVar17._0_4_ * auVar46._0_4_;
  auVar68._4_4_ = auVar17._4_4_ * auVar46._4_4_;
  auVar68._8_4_ = auVar17._8_4_ * auVar46._8_4_;
  auVar68._12_4_ = auVar17._12_4_ * auVar46._12_4_;
  NEON_frecps(auVar68,auVar21,4);
  return;
}


