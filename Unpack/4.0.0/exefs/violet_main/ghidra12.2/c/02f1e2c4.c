/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f1e2c4; name: FUN_02f1e2c4
 */


void FUN_02f1e2c4(undefined1 (*param_1) [16],float *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  byte bVar19;
  byte bVar22;
  byte bVar23;
  float fVar20;
  int iVar21;
  byte bVar24;
  byte bVar25;
  byte bVar27;
  byte bVar28;
  int iVar26;
  byte bVar29;
  float fVar30;
  ulong uVar31;
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar45 [12];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar57;
  float fVar58;
  undefined8 uVar59;
  float fVar60;
  float fVar63;
  float fVar64;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  
  fVar8 = (float)*param_3 - (float)*(double *)param_1[1];
  fVar9 = (float)((ulong)*param_3 >> 0x20) - (float)*(double *)(param_1[1] + 8);
  fVar10 = (float)param_3[1] - (float)*(double *)param_1[2];
  fVar11 = (float)((ulong)param_3[1] >> 0x20) - 0.0;
  fVar30 = -fVar8;
  fVar20 = -fVar9;
  auVar62 = *param_1;
  uVar4 = *(undefined8 *)param_1[4];
  fVar12 = auVar62._0_4_;
  fVar13 = auVar62._4_4_;
  fVar54 = fVar13 + fVar13;
  fVar14 = auVar62._8_4_;
  fVar56 = fVar14 + fVar14;
  fVar15 = auVar62._12_4_;
  fVar3 = (float)((int)(short)uVar4 << 0x10);
  fVar5 = (float)((int)(short)((ulong)uVar4 >> 0x10) << 0x10);
  fVar6 = (float)((int)(short)((ulong)uVar4 >> 0x20) << 0x10);
  fVar7 = (float)((int)(short)((ulong)uVar4 >> 0x30) << 0x10);
  fVar57 = (fVar12 + fVar12) * fVar12;
  fVar49 = (fVar12 + fVar12) * fVar15;
  fVar65 = 1.0 - fVar14 * fVar56;
  fVar34 = fVar56 * fVar13 - fVar49;
  fVar73 = fVar65 - fVar54 * fVar13;
  fVar65 = fVar65 - fVar57;
  fVar33 = fVar54 * fVar12 + fVar56 * fVar15;
  fVar74 = fVar54 * fVar12 - fVar56 * fVar15;
  fVar49 = fVar56 * fVar13 + fVar49;
  fVar66 = fVar56 * fVar12 + fVar54 * fVar15;
  fVar56 = fVar56 * fVar12 - fVar54 * fVar15;
  fVar58 = (1.0 - fVar57) - fVar54 * fVar13;
  fVar54 = -fVar10;
  fVar60 = fVar73 * fVar3;
  fVar63 = fVar33 * fVar3;
  fVar64 = fVar56 * fVar3;
  fVar70 = fVar74 * fVar5;
  fVar71 = fVar65 * fVar5;
  fVar72 = fVar49 * fVar5;
  fVar67 = fVar66 * fVar6;
  fVar68 = fVar34 * fVar6;
  fVar69 = fVar58 * fVar6;
  fVar57 = fVar67 * fVar58 + fVar70 * fVar49 + fVar60 * fVar56;
  fVar55 = fVar68 * fVar58 + fVar71 * fVar49 + fVar63 * fVar56;
  fVar56 = fVar69 * fVar58 + fVar72 * fVar49 + fVar64 * fVar56;
  fVar49 = fVar67 * fVar34 + fVar70 * fVar65 + fVar60 * fVar33;
  fVar58 = fVar68 * fVar34 + fVar71 * fVar65 + fVar63 * fVar33;
  fVar33 = fVar69 * fVar34 + fVar72 * fVar65 + fVar64 * fVar33;
  fVar34 = fVar67 * fVar66 + fVar70 * fVar74 + fVar60 * fVar73;
  fVar60 = fVar68 * fVar66 + fVar71 * fVar74 + fVar63 * fVar73;
  fVar63 = fVar69 * fVar66 + fVar72 * fVar74 + fVar64 * fVar73;
  fVar64 = fVar9 * fVar63 + fVar34 * 0.0 + fVar54 * fVar60;
  fVar65 = fVar30 * fVar63 + fVar10 * fVar34 + fVar60 * 0.0;
  fVar66 = fVar63 * 0.0 + fVar20 * fVar34 + fVar8 * fVar60;
  fVar67 = fVar63 * 0.0 + fVar34 * 0.0 + fVar60 * 0.0;
  fVar34 = fVar9 * fVar33 + fVar49 * 0.0 + fVar54 * fVar58;
  fVar60 = fVar30 * fVar33 + fVar10 * fVar49 + fVar58 * 0.0;
  fVar63 = fVar33 * 0.0 + fVar20 * fVar49 + fVar8 * fVar58;
  fVar49 = fVar33 * 0.0 + fVar49 * 0.0 + fVar58 * 0.0;
  fVar33 = 0.01;
  if (fVar7 != 0.0) {
    fVar33 = fVar7;
  }
  fVar74 = fVar9 * fVar56 + fVar57 * 0.0 + fVar54 * fVar55;
  fVar42 = fVar30 * fVar56 + fVar10 * fVar57 + fVar55 * 0.0;
  fVar43 = fVar56 * 0.0 + fVar20 * fVar57 + fVar8 * fVar55;
  fVar44 = fVar56 * 0.0 + fVar57 * 0.0 + fVar55 * 0.0;
  fVar56 = fVar74 * fVar20 + fVar64 * 0.0 + fVar34 * fVar10;
  fVar57 = fVar42 * fVar20 + fVar65 * 0.0 + fVar60 * fVar10;
  fVar55 = fVar43 * fVar20 + fVar66 * 0.0 + fVar63 * fVar10;
  fVar70 = fVar33 - fVar56;
  fVar71 = 0.0 - fVar57;
  fVar72 = 0.0 - fVar55;
  fVar73 = 0.0 - (fVar44 * fVar20 + fVar67 * 0.0 + fVar49 * fVar10);
  fVar58 = fVar74 * fVar8 + fVar64 * fVar54 + fVar34 * 0.0;
  fVar68 = fVar42 * fVar8 + fVar65 * fVar54 + fVar60 * 0.0;
  fVar69 = fVar43 * fVar8 + fVar66 * fVar54 + fVar63 * 0.0;
  auVar35._0_4_ = 0.0 - fVar58;
  auVar35._4_4_ = fVar33 - fVar68;
  auVar35._8_4_ = 0.0 - fVar69;
  auVar35._12_4_ = 0.0 - (fVar44 * fVar8 + fVar67 * fVar54 + fVar49 * 0.0);
  auVar46 = NEON_ext(auVar35,auVar35,4,1);
  fVar64 = fVar74 * 0.0 + fVar64 * fVar9 + fVar34 * fVar30;
  fVar60 = fVar42 * 0.0 + fVar65 * fVar9 + fVar60 * fVar30;
  fVar63 = fVar43 * 0.0 + fVar66 * fVar9 + fVar63 * fVar30;
  fVar20 = ABS(fVar33 - fVar56);
  fVar56 = ABS(0.0 - fVar57);
  fVar34 = ABS(0.0 - fVar55);
  fVar54 = ABS(0.0 - fVar58);
  fVar57 = ABS(fVar33 - fVar68);
  fVar55 = ABS(0.0 - fVar69);
  auVar38._0_4_ = 0.0 - fVar64;
  auVar38._4_4_ = 0.0 - fVar60;
  auVar38._8_4_ = fVar33 - fVar63;
  auVar38._12_4_ = 0.0 - (fVar44 * 0.0 + fVar67 * fVar9 + fVar49 * fVar30);
  auVar48 = NEON_ext(auVar38,auVar38,4,1);
  fVar30 = ABS(0.0 - fVar64);
  fVar49 = ABS(0.0 - fVar60);
  fVar33 = ABS(fVar33 - fVar63);
  auVar50._0_4_ = auVar35._0_4_ * auVar48._0_4_ - auVar38._0_4_ * auVar46._0_4_;
  auVar50._4_4_ = auVar35._4_4_ * auVar48._4_4_ - auVar38._4_4_ * auVar46._4_4_;
  auVar50._8_4_ = auVar35._8_4_ * auVar38._0_4_ - auVar38._8_4_ * auVar35._0_4_;
  auVar50._12_4_ = auVar35._12_4_ * auVar38._4_4_ - auVar38._12_4_ * auVar35._4_4_;
  auVar18 = NEON_ext(auVar50,auVar50,4,1);
  auVar2._4_4_ = fVar71;
  auVar2._0_4_ = fVar70;
  auVar2._8_4_ = fVar72;
  auVar2._12_4_ = fVar73;
  auVar32._4_4_ = fVar71;
  auVar32._0_4_ = fVar70;
  auVar32._8_4_ = fVar72;
  auVar32._12_4_ = fVar73;
  auVar51 = NEON_ext(auVar2,auVar32,4,1);
  fVar58 = fVar70 * auVar18._0_4_;
  fVar63 = fVar71 * auVar18._4_4_;
  auVar39._0_4_ = auVar38._0_4_ * auVar51._0_4_ - fVar70 * auVar48._0_4_;
  auVar39._4_4_ = auVar38._4_4_ * auVar51._4_4_ - fVar71 * auVar48._4_4_;
  auVar39._8_4_ = auVar38._8_4_ * fVar70 - fVar72 * auVar38._0_4_;
  auVar39._12_4_ = auVar38._12_4_ * fVar71 - fVar73 * auVar38._4_4_;
  auVar36._0_4_ = fVar70 * auVar46._0_4_ - auVar35._0_4_ * auVar51._0_4_;
  auVar36._4_4_ = fVar71 * auVar46._4_4_ - auVar35._4_4_ * auVar51._4_4_;
  auVar36._8_4_ = fVar72 * auVar35._0_4_ - auVar35._8_4_ * fVar70;
  auVar36._12_4_ = fVar73 * auVar35._4_4_ - auVar35._12_4_ * fVar71;
  fVar60 = fVar58 + fVar63 + fVar72 * auVar50._0_4_;
  fVar58 = fVar58 + fVar63 + fVar72 * auVar50._0_4_;
  auVar48 = NEON_ext(auVar36,auVar36,4,1);
  auVar46 = NEON_ext(auVar39,auVar39,4,1);
  iVar21 = -(uint)((fVar20 + fVar56 + fVar34) * 1.1920929e-07 *
                   (fVar54 + fVar57 + fVar55) * (fVar30 + fVar49 + fVar33) < ABS(fVar60));
  iVar26 = -(uint)((fVar20 + fVar56 + fVar34) * 1.1920929e-07 *
                   (fVar54 + fVar57 + fVar55) * (fVar30 + fVar49 + fVar33) < ABS(fVar58));
  iVar16 = -(uint)(fVar60 == 0.0);
  uVar17 = CONCAT13(~(byte)((uint)iVar16 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar16 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar16 >> 8),~(byte)iVar16)));
  uVar4 = NEON_fmov(0x3f800000,4);
  fVar54 = (float)uVar4;
  fVar49 = (float)((ulong)uVar4 >> 0x20);
  uVar31 = (CONCAT44(fVar49 / fVar58,fVar54 / fVar60) ^ 0x5f7ffff05f7ffff0) &
           CONCAT44(uVar17,uVar17) ^ 0x5f7ffff05f7ffff0;
  fVar34 = (float)uVar31;
  fVar33 = auVar18._0_4_ * fVar34;
  fVar58 = (float)(uVar31 >> 0x20);
  fVar20 = auVar18._4_4_ * fVar58;
  fVar30 = auVar50._0_4_ * fVar34;
  fVar56 = fVar58 * 0.0;
  bVar19 = (byte)iVar21;
  bVar22 = (byte)((uint)iVar21 >> 8);
  bVar23 = (byte)((uint)iVar21 >> 0x10);
  bVar24 = (byte)((uint)iVar21 >> 0x18);
  fVar60 = (float)CONCAT13(bVar24 & (byte)((uint)fVar33 >> 0x18),
                           CONCAT12(bVar23 & (byte)((uint)fVar33 >> 0x10),
                                    CONCAT11(bVar22 & (byte)((uint)fVar33 >> 8),
                                             bVar19 & SUB41(fVar33,0))));
  bVar25 = (byte)iVar26;
  bVar27 = (byte)((uint)iVar26 >> 8);
  bVar28 = (byte)((uint)iVar26 >> 0x10);
  bVar29 = (byte)((uint)iVar26 >> 0x18);
  auVar37._0_8_ =
       CONCAT17(bVar29 & (byte)((uint)fVar20 >> 0x18),
                CONCAT16(bVar28 & (byte)((uint)fVar20 >> 0x10),
                         CONCAT15(bVar27 & (byte)((uint)fVar20 >> 8),
                                  CONCAT14(bVar25 & SUB41(fVar20,0),fVar60))));
  auVar37[8] = bVar19 & SUB41(fVar30,0);
  auVar37[9] = bVar22 & (byte)((uint)fVar30 >> 8);
  auVar37[10] = bVar23 & (byte)((uint)fVar30 >> 0x10);
  auVar37[0xb] = bVar24 & (byte)((uint)fVar30 >> 0x18);
  auVar40[0xc] = bVar25 & SUB41(fVar56,0);
  auVar40._0_12_ = auVar37;
  auVar40[0xd] = bVar27 & (byte)((uint)fVar56 >> 8);
  auVar40[0xe] = bVar28 & (byte)((uint)fVar56 >> 0x10);
  auVar40[0xf] = bVar29 & (byte)((uint)fVar56 >> 0x18);
  fVar33 = auVar46._0_4_ * fVar34;
  fVar20 = auVar46._4_4_ * fVar58;
  fVar30 = auVar39._0_4_ * fVar34;
  fVar56 = fVar58 * 0.0;
  fVar63 = (float)CONCAT13(bVar24 & (byte)((uint)fVar33 >> 0x18),
                           CONCAT12(bVar23 & (byte)((uint)fVar33 >> 0x10),
                                    CONCAT11(bVar22 & (byte)((uint)fVar33 >> 8),
                                             bVar19 & SUB41(fVar33,0))));
  auVar45._0_8_ =
       CONCAT17(bVar29 & (byte)((uint)fVar20 >> 0x18),
                CONCAT16(bVar28 & (byte)((uint)fVar20 >> 0x10),
                         CONCAT15(bVar27 & (byte)((uint)fVar20 >> 8),
                                  CONCAT14(bVar25 & SUB41(fVar20,0),fVar63))));
  auVar45[8] = bVar19 & SUB41(fVar30,0);
  auVar45[9] = bVar22 & (byte)((uint)fVar30 >> 8);
  auVar45[10] = bVar23 & (byte)((uint)fVar30 >> 0x10);
  auVar45[0xb] = bVar24 & (byte)((uint)fVar30 >> 0x18);
  auVar47[0xc] = bVar25 & SUB41(fVar56,0);
  auVar47._0_12_ = auVar45;
  auVar47[0xd] = bVar27 & (byte)((uint)fVar56 >> 8);
  auVar47[0xe] = bVar28 & (byte)((uint)fVar56 >> 0x10);
  auVar47[0xf] = bVar29 & (byte)((uint)fVar56 >> 0x18);
  fVar56 = auVar48._0_4_ * fVar34;
  fVar66 = auVar48._4_4_ * fVar58;
  fVar34 = auVar36._0_4_ * fVar34;
  fVar58 = fVar58 * 0.0;
  auVar46 = NEON_ext(auVar62,auVar62,8,1);
  fVar57 = auVar46._4_4_ * auVar46._4_4_;
  fVar64 = fVar57 + -0.5;
  fVar57 = fVar57 + -0.5;
  auVar2 = param_1[6];
  auVar18 = param_1[7];
  fVar33 = auVar18._0_4_;
  fVar20 = auVar18._4_4_;
  fVar30 = auVar18._8_4_;
  fVar68 = fVar12 * fVar33 + fVar13 * fVar20 + fVar14 * fVar30;
  fVar69 = fVar12 * fVar33 + fVar13 * fVar20 + fVar14 * fVar30;
  fVar56 = (float)CONCAT13(bVar24 & (byte)((uint)fVar56 >> 0x18),
                           CONCAT12(bVar23 & (byte)((uint)fVar56 >> 0x10),
                                    CONCAT11(bVar22 & (byte)((uint)fVar56 >> 8),
                                             bVar19 & SUB41(fVar56,0))));
  fVar34 = (float)CONCAT13(bVar24 & (byte)((uint)fVar34 >> 0x18),
                           CONCAT12(bVar23 & (byte)((uint)fVar34 >> 0x10),
                                    CONCAT11(bVar22 & (byte)((uint)fVar34 >> 8),
                                             bVar19 & SUB41(fVar34,0))));
  fVar55 = auVar18._12_4_;
  uVar59 = NEON_ext(auVar62._0_8_,auVar46._0_8_,4,1);
  auVar32 = NEON_ext(auVar18,auVar18,8,1);
  uVar4 = NEON_ext(auVar18._0_8_,auVar32._0_8_,4,1);
  fVar70 = (float)((ulong)uVar59 >> 0x20);
  auVar61._0_4_ = fVar12 * (float)uVar4 - (float)uVar59 * fVar33;
  auVar61._4_4_ = fVar13 * (float)((ulong)uVar4 >> 0x20) - fVar70 * fVar20;
  auVar61._8_4_ = fVar14 * fVar33 - fVar12 * fVar30;
  auVar61._12_4_ = fVar15 * fVar20 - fVar13 * fVar55;
  auVar46 = NEON_ext(auVar61,auVar61,4,1);
  auVar62._4_4_ = fVar9;
  auVar62._0_4_ = fVar8;
  auVar62._8_4_ = fVar10;
  auVar62._12_4_ = fVar11;
  auVar18._4_4_ = fVar9;
  auVar18._0_4_ = fVar8;
  auVar18._8_4_ = fVar10;
  auVar18._12_4_ = fVar11;
  auVar18 = NEON_ext(auVar62,auVar18,4,1);
  fVar65 = fVar64 * fVar33 + fVar12 * fVar68 + auVar46._0_4_ * fVar15;
  fVar67 = fVar57 * fVar20 + fVar13 * fVar69 + auVar46._4_4_ * fVar15;
  fVar68 = fVar64 * fVar30 + fVar14 * fVar68 + auVar61._0_4_ * fVar15;
  fVar69 = fVar57 * fVar55 + fVar15 * fVar69 + fVar15 * 0.0;
  auVar52._0_4_ = fVar65 + fVar65;
  auVar52._4_4_ = fVar67 + fVar67;
  auVar52._8_4_ = fVar68 + fVar68;
  auVar52._12_4_ = fVar69 + fVar69;
  auVar62 = NEON_ext(auVar52,auVar52,4,1);
  auVar53._0_4_ = auVar18._0_4_ * auVar52._0_4_ - fVar8 * auVar62._0_4_;
  auVar53._4_4_ = auVar18._4_4_ * auVar52._4_4_ - fVar9 * auVar62._4_4_;
  auVar53._8_4_ = fVar8 * auVar52._8_4_ - fVar10 * auVar52._0_4_;
  auVar53._12_4_ = fVar9 * auVar52._12_4_ - fVar11 * auVar52._4_4_;
  auVar62 = NEON_ext(auVar53,auVar53,4,1);
  fVar65 = auVar2._12_4_;
  fVar67 = *param_2 - (auVar2._0_4_ + auVar62._0_4_);
  fVar68 = param_2[1] - (auVar2._4_4_ + auVar62._4_4_);
  fVar69 = param_2[2] - (auVar2._8_4_ + auVar53._0_4_);
  auVar41._0_4_ = fVar56 * fVar69 + fVar60 * fVar67 + fVar63 * fVar68;
  auVar41._4_4_ =
       (float)(CONCAT17(bVar29 & (byte)((uint)fVar66 >> 0x18),
                        CONCAT16(bVar28 & (byte)((uint)fVar66 >> 0x10),
                                 CONCAT15(bVar27 & (byte)((uint)fVar66 >> 8),
                                          CONCAT14(bVar25 & SUB41(fVar66,0),fVar56)))) >> 0x20) *
       fVar69 + (float)((ulong)auVar37._0_8_ >> 0x20) * fVar67 +
                (float)((ulong)auVar45._0_8_ >> 0x20) * fVar68;
  auVar41._8_4_ = fVar34 * fVar69 + auVar37._8_4_ * fVar67 + auVar45._8_4_ * fVar68;
  auVar41._12_4_ =
       (float)(CONCAT17(bVar29 & (byte)((uint)fVar58 >> 0x18),
                        CONCAT16(bVar28 & (byte)((uint)fVar58 >> 0x10),
                                 CONCAT15(bVar27 & (byte)((uint)fVar58 >> 8),
                                          CONCAT14(bVar25 & SUB41(fVar58,0),fVar34)))) >> 0x20) *
       fVar69 + auVar40._12_4_ * fVar67 + auVar47._12_4_ * fVar68;
  auVar62 = NEON_ext(auVar41,auVar41,4,1);
  fVar58 = auVar2._0_4_ + auVar41._0_4_ * fVar7;
  fVar60 = auVar2._4_4_ + auVar41._4_4_ * fVar7;
  fVar63 = auVar2._8_4_ + auVar41._8_4_ * fVar7;
  fVar7 = fVar8 * auVar62._0_4_ - auVar18._0_4_ * auVar41._0_4_;
  fVar56 = fVar9 * auVar62._4_4_ - auVar18._4_4_ * auVar41._4_4_;
  fVar8 = fVar10 * auVar41._0_4_ - fVar8 * auVar41._8_4_;
  fVar9 = fVar11 * auVar41._4_4_ - fVar9 * auVar41._12_4_;
  auVar46._4_4_ = fVar56;
  auVar46._0_4_ = fVar7;
  auVar46._8_4_ = fVar8;
  auVar46._12_4_ = fVar9;
  auVar48._4_4_ = fVar56;
  auVar48._0_4_ = fVar7;
  auVar48._8_4_ = fVar8;
  auVar48._12_4_ = fVar9;
  auVar62 = NEON_ext(auVar46,auVar48,4,1);
  uVar4 = NEON_ext(auVar62._0_8_,CONCAT44(fVar56,fVar7),4,1);
  fVar10 = auVar62._0_4_;
  fVar56 = auVar62._4_4_;
  fVar66 = fVar12 * fVar10 + fVar13 * fVar56 + fVar14 * fVar7;
  fVar8 = (float)uVar59 * fVar10 - fVar12 * (float)uVar4;
  fVar9 = fVar70 * fVar56 - fVar13 * (float)((ulong)uVar4 >> 0x20);
  fVar11 = fVar12 * fVar7 - fVar14 * fVar10;
  fVar34 = fVar13 * 0.0 - fVar15 * fVar56;
  auVar51._4_4_ = fVar9;
  auVar51._0_4_ = fVar8;
  auVar51._8_4_ = fVar11;
  auVar51._12_4_ = fVar34;
  auVar1._4_4_ = fVar9;
  auVar1._0_4_ = fVar8;
  auVar1._8_4_ = fVar11;
  auVar1._12_4_ = fVar34;
  auVar62 = NEON_ext(auVar51,auVar1,4,1);
  fVar9 = fVar64 * fVar10 + fVar12 * fVar66 + auVar62._0_4_ * fVar15;
  fVar10 = fVar57 * fVar56 + fVar13 * (fVar12 * fVar10 + fVar13 * fVar56 + fVar14 * fVar7) +
           auVar62._4_4_ * fVar15;
  fVar11 = fVar64 * fVar7 + fVar14 * fVar66 + fVar8 * fVar15;
  fVar7 = fVar58 * fVar58 + fVar60 * fVar60 + fVar63 * fVar63;
  fVar8 = fVar58 * fVar58 + fVar60 * fVar60 + fVar63 * fVar63;
  auVar62 = NEON_ext(auVar2,auVar2,8,1);
  fVar33 = fVar33 + (fVar9 + fVar9) * fVar3;
  fVar20 = fVar20 + (fVar10 + fVar10) * fVar5;
  uVar4 = CONCAT44(fVar20,fVar33);
  fVar30 = fVar30 + (fVar11 + fVar11) * fVar6;
  fVar3 = auVar62._4_4_ * auVar62._4_4_;
  iVar16 = -(uint)(fVar7 <= fVar3);
  iVar21 = -(uint)(fVar8 <= fVar3);
  if (CONCAT13((byte)((uint)iVar21 >> 0x18) | (byte)((uint)iVar16 >> 0x18),
               CONCAT12((byte)((uint)iVar21 >> 0x10) | (byte)((uint)iVar16 >> 0x10),
                        CONCAT11((byte)((uint)iVar21 >> 8) | (byte)((uint)iVar16 >> 8),
                                 (byte)iVar21 | (byte)iVar16))) == 0) {
    if ((~(uint)fVar7 & 0x7fc00000) != 0) {
      if ((~(uint)(fVar54 / SQRT(fVar7)) & 0x7fc00000) != 0) {
        fVar3 = fVar65 * (fVar54 / SQRT(fVar7)) * 0.99999976;
        *(ulong *)(param_1[6] + 8) = CONCAT44(fVar65,fVar63 * fVar3);
        *(ulong *)param_1[6] =
             CONCAT44(fVar60 * fVar65 * (fVar49 / SQRT(fVar8)) * 0.99999976,fVar58 * fVar3);
      }
    }
  }
  else {
    *(ulong *)(param_1[6] + 8) = CONCAT44(fVar65,fVar63);
    *(ulong *)param_1[6] = CONCAT44(fVar60,fVar58);
  }
  fVar3 = fVar30 * fVar30 + fVar33 * fVar33 + fVar20 * fVar20;
  fVar5 = fVar30 * fVar30 + fVar33 * fVar33 + fVar20 * fVar20;
  fVar6 = auVar32._4_4_ * auVar32._4_4_;
  iVar16 = -(uint)(fVar3 <= fVar6);
  iVar21 = -(uint)(fVar5 <= fVar6);
  if (CONCAT13((byte)((uint)iVar21 >> 0x18) | (byte)((uint)iVar16 >> 0x18),
               CONCAT12((byte)((uint)iVar21 >> 0x10) | (byte)((uint)iVar16 >> 0x10),
                        CONCAT11((byte)((uint)iVar21 >> 8) | (byte)((uint)iVar16 >> 8),
                                 (byte)iVar21 | (byte)iVar16))) == 0) {
    if ((~(uint)fVar3 & 0x7fc00000) == 0) {
      return;
    }
    if ((~(uint)(fVar54 / SQRT(fVar3)) & 0x7fc00000) == 0) {
      return;
    }
    fVar3 = fVar55 * (fVar54 / SQRT(fVar3)) * 0.99999976;
    uVar4 = CONCAT44(fVar20 * fVar55 * (fVar49 / SQRT(fVar5)) * 0.99999976,fVar33 * fVar3);
    fVar30 = fVar30 * fVar3;
  }
  *(ulong *)(param_1[7] + 8) = CONCAT44(fVar55,fVar30);
  *(undefined8 *)param_1[7] = uVar4;
  return;
}


