/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026fe220; name: FUN_026fe220
 */


void FUN_026fe220(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],float *param_5)

{
  undefined2 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined7 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined2 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined3 uVar18;
  undefined6 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  unkuint9 Var28;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar40;
  float fVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  int iVar72;
  int iVar79;
  int iVar81;
  byte bVar83;
  byte bVar84;
  byte bVar88;
  byte bVar89;
  undefined1 auVar73 [16];
  byte bVar80;
  int iVar82;
  byte bVar85;
  int iVar86;
  int iVar87;
  byte bVar90;
  undefined1 auVar76 [16];
  undefined1 auVar75 [16];
  undefined1 auVar74 [16];
  undefined1 auVar78 [16];
  undefined1 auVar77 [16];
  int iVar91;
  int iVar94;
  int iVar97;
  undefined1 auVar92 [16];
  int iVar95;
  int iVar96;
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  undefined1 auVar93 [16];
  int iVar103;
  int iVar104;
  int iVar105;
  int iVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  
  fVar24 = param_2._12_4_;
  fVar23 = param_1._12_4_;
  fVar39 = (float)(CONCAT17(param_3[0xf],
                            CONCAT16(param_3[0xe],
                                     CONCAT15(param_3[0xd],CONCAT14(param_3[0xc],fVar23)))) >> 0x20)
  ;
  fVar41 = (float)(CONCAT17(param_4[0xf],
                            CONCAT16(param_4[0xe],
                                     CONCAT15(param_4[0xd],CONCAT14(param_4[0xc],fVar24)))) >> 0x20)
  ;
  fVar7 = fVar23 - param_1._0_4_;
  fVar8 = fVar24 - param_2._0_4_;
  fVar9 = fVar39 - param_3._0_4_;
  fVar10 = fVar41 - param_4._0_4_;
  fVar12 = param_1._0_4_ + fVar23;
  fVar13 = param_2._0_4_ + fVar24;
  fVar14 = param_3._0_4_ + fVar39;
  fVar15 = param_4._0_4_ + fVar41;
  fVar37 = param_1._4_4_;
  fVar36 = fVar37 + fVar23;
  fVar38 = param_2._4_4_;
  fVar20 = fVar38 + fVar24;
  fVar16 = param_3._4_4_;
  fVar21 = fVar16 + fVar39;
  fVar17 = param_4._4_4_;
  fVar22 = fVar17 + fVar41;
  fVar23 = fVar23 - fVar37;
  fVar24 = fVar24 - fVar38;
  fVar39 = fVar39 - fVar16;
  fVar41 = fVar41 - fVar17;
  fVar2 = param_1._8_4_;
  fVar3 = param_2._8_4_;
  fVar4 = param_3._8_4_;
  fVar5 = param_4._8_4_;
  fVar37 = fVar37 + fVar2;
  fVar38 = fVar38 + fVar3;
  fVar16 = fVar16 + fVar4;
  fVar17 = fVar17 + fVar5;
  auVar92._0_4_ = fVar2 * fVar2 + fVar3 * fVar3;
  auVar92._4_4_ = fVar4 * fVar4 + fVar5 * fVar5;
  auVar92._8_4_ = fVar2 * fVar2 + fVar3 * fVar3;
  auVar92._12_4_ = fVar4 * fVar4 + fVar5 * fVar5;
  auVar73 = NEON_ext(auVar92,auVar92,4,1);
  auVar107._0_4_ = fVar7 * fVar7 + fVar8 * fVar8;
  auVar107._4_4_ = fVar9 * fVar9 + fVar10 * fVar10;
  auVar107._8_4_ = fVar7 * fVar7 + fVar8 * fVar8;
  auVar107._12_4_ = fVar9 * fVar9 + fVar10 * fVar10;
  auVar92 = NEON_ext(auVar107,auVar107,4,1);
  auVar29._0_4_ = auVar73._0_4_ + auVar73._4_4_;
  auVar29._4_4_ = auVar73._8_4_ + auVar73._12_4_;
  auVar29._8_4_ = auVar73._0_4_ + auVar73._4_4_;
  auVar29._12_4_ = auVar73._8_4_ + auVar73._12_4_;
  auVar107 = NEON_frsqrte(auVar29,4);
  auVar30._0_4_ = auVar92._0_4_ + auVar92._4_4_;
  auVar30._4_4_ = auVar92._8_4_ + auVar92._12_4_;
  auVar30._8_4_ = auVar92._0_4_ + auVar92._4_4_;
  auVar30._12_4_ = auVar92._8_4_ + auVar92._12_4_;
  auVar109._0_4_ = fVar12 * fVar12 + fVar13 * fVar13;
  auVar109._4_4_ = fVar14 * fVar14 + fVar15 * fVar15;
  auVar109._8_4_ = fVar12 * fVar12 + fVar13 * fVar13;
  auVar109._12_4_ = fVar14 * fVar14 + fVar15 * fVar15;
  auVar73 = NEON_ext(auVar109,auVar109,4,1);
  auVar116._0_4_ = auVar29._0_4_ * auVar107._0_4_;
  auVar116._4_4_ = auVar29._4_4_ * auVar107._4_4_;
  auVar116._8_4_ = auVar29._8_4_ * auVar107._8_4_;
  auVar116._12_4_ = auVar29._12_4_ * auVar107._12_4_;
  auVar31._0_4_ = auVar73._0_4_ + auVar73._4_4_;
  auVar31._4_4_ = auVar73._8_4_ + auVar73._12_4_;
  auVar31._8_4_ = auVar73._0_4_ + auVar73._4_4_;
  auVar31._12_4_ = auVar73._8_4_ + auVar73._12_4_;
  auVar113._0_4_ = fVar36 * fVar36 + fVar20 * fVar20;
  auVar113._4_4_ = fVar21 * fVar21 + fVar22 * fVar22;
  auVar113._8_4_ = fVar36 * fVar36 + fVar20 * fVar20;
  auVar113._12_4_ = fVar21 * fVar21 + fVar22 * fVar22;
  auVar111 = NEON_frsqrte(auVar31,4);
  auVar73 = NEON_ext(auVar113,auVar113,4,1);
  auVar117 = NEON_frsqrts(auVar107,auVar116,4);
  auVar109 = NEON_frsqrte(auVar30,4);
  auVar32._0_4_ = auVar73._0_4_ + auVar73._4_4_;
  auVar32._4_4_ = auVar73._8_4_ + auVar73._12_4_;
  auVar32._8_4_ = auVar73._0_4_ + auVar73._4_4_;
  auVar32._12_4_ = auVar73._8_4_ + auVar73._12_4_;
  auVar33._0_4_ = fVar23 * fVar23 + fVar24 * fVar24;
  auVar33._4_4_ = fVar39 * fVar39 + fVar41 * fVar41;
  auVar33._8_4_ = fVar23 * fVar23 + fVar24 * fVar24;
  auVar33._12_4_ = fVar39 * fVar39 + fVar41 * fVar41;
  auVar113 = NEON_frsqrte(auVar32,4);
  auVar73 = NEON_ext(auVar33,auVar33,4,1);
  auVar34._0_4_ = fVar37 * fVar37 + fVar38 * fVar38;
  auVar34._4_4_ = fVar16 * fVar16 + fVar17 * fVar17;
  auVar34._8_4_ = fVar37 * fVar37 + fVar38 * fVar38;
  auVar34._12_4_ = fVar16 * fVar16 + fVar17 * fVar17;
  auVar92 = NEON_ext(auVar34,auVar34,4,1);
  auVar108._0_4_ = auVar107._0_4_ * auVar117._0_4_;
  auVar108._4_4_ = auVar107._4_4_ * auVar117._4_4_;
  auVar108._8_4_ = auVar107._8_4_ * auVar117._8_4_;
  auVar108._12_4_ = auVar107._12_4_ * auVar117._12_4_;
  auVar118._0_4_ = auVar30._0_4_ * auVar109._0_4_;
  auVar118._4_4_ = auVar30._4_4_ * auVar109._4_4_;
  auVar118._8_4_ = auVar30._8_4_ * auVar109._8_4_;
  auVar118._12_4_ = auVar30._12_4_ * auVar109._12_4_;
  auVar117._0_4_ = auVar73._0_4_ + auVar73._4_4_;
  auVar117._4_4_ = auVar73._8_4_ + auVar73._12_4_;
  auVar117._8_4_ = auVar73._0_4_ + auVar73._4_4_;
  auVar117._12_4_ = auVar73._8_4_ + auVar73._12_4_;
  auVar73 = NEON_frsqrte(auVar117,4);
  auVar35._0_4_ = auVar92._0_4_ + auVar92._4_4_;
  auVar35._4_4_ = auVar92._8_4_ + auVar92._12_4_;
  auVar35._8_4_ = auVar92._0_4_ + auVar92._4_4_;
  auVar35._12_4_ = auVar92._8_4_ + auVar92._12_4_;
  auVar107 = NEON_frsqrte(auVar35,4);
  auVar92 = NEON_frsqrts(auVar109,auVar118,4);
  auVar110._0_4_ = auVar109._0_4_ * auVar92._0_4_;
  auVar110._4_4_ = auVar109._4_4_ * auVar92._4_4_;
  auVar110._8_4_ = auVar109._8_4_ * auVar92._8_4_;
  auVar110._12_4_ = auVar109._12_4_ * auVar92._12_4_;
  auVar119._0_4_ = auVar31._0_4_ * auVar111._0_4_;
  auVar119._4_4_ = auVar31._4_4_ * auVar111._4_4_;
  auVar119._8_4_ = auVar31._8_4_ * auVar111._8_4_;
  auVar119._12_4_ = auVar31._12_4_ * auVar111._12_4_;
  auVar92 = NEON_frsqrts(auVar111,auVar119,4);
  auVar112._0_4_ = auVar111._0_4_ * auVar92._0_4_;
  auVar112._4_4_ = auVar111._4_4_ * auVar92._4_4_;
  auVar112._8_4_ = auVar111._8_4_ * auVar92._8_4_;
  auVar112._12_4_ = auVar111._12_4_ * auVar92._12_4_;
  auVar120._0_4_ = auVar32._0_4_ * auVar113._0_4_;
  auVar120._4_4_ = auVar32._4_4_ * auVar113._4_4_;
  auVar120._8_4_ = auVar32._8_4_ * auVar113._8_4_;
  auVar120._12_4_ = auVar32._12_4_ * auVar113._12_4_;
  auVar92 = NEON_frsqrts(auVar113,auVar120,4);
  auVar114._0_4_ = auVar113._0_4_ * auVar92._0_4_;
  auVar114._4_4_ = auVar113._4_4_ * auVar92._4_4_;
  auVar114._8_4_ = auVar113._8_4_ * auVar92._8_4_;
  auVar114._12_4_ = auVar113._12_4_ * auVar92._12_4_;
  auVar121._0_4_ = auVar117._0_4_ * auVar73._0_4_;
  auVar121._4_4_ = auVar117._4_4_ * auVar73._4_4_;
  auVar121._8_4_ = auVar117._8_4_ * auVar73._8_4_;
  auVar121._12_4_ = auVar117._12_4_ * auVar73._12_4_;
  auVar92 = NEON_frsqrts(auVar73,auVar121,4);
  auVar115._0_4_ = auVar73._0_4_ * auVar92._0_4_;
  auVar115._4_4_ = auVar73._4_4_ * auVar92._4_4_;
  auVar115._8_4_ = auVar73._8_4_ * auVar92._8_4_;
  auVar115._12_4_ = auVar73._12_4_ * auVar92._12_4_;
  auVar122._0_4_ = auVar35._0_4_ * auVar107._0_4_;
  auVar122._4_4_ = auVar35._4_4_ * auVar107._4_4_;
  auVar122._8_4_ = auVar35._8_4_ * auVar107._8_4_;
  auVar122._12_4_ = auVar35._12_4_ * auVar107._12_4_;
  auVar73 = NEON_frsqrts(auVar107,auVar122,4);
  auVar123._0_4_ = auVar107._0_4_ * auVar73._0_4_;
  auVar123._4_4_ = auVar107._4_4_ * auVar73._4_4_;
  auVar123._8_4_ = auVar107._8_4_ * auVar73._8_4_;
  auVar123._12_4_ = auVar107._12_4_ * auVar73._12_4_;
  auVar124._0_4_ = auVar29._0_4_ * auVar108._0_4_;
  auVar124._4_4_ = auVar29._4_4_ * auVar108._4_4_;
  auVar124._8_4_ = auVar29._8_4_ * auVar108._8_4_;
  auVar124._12_4_ = auVar29._12_4_ * auVar108._12_4_;
  iVar72 = -(uint)(auVar29._0_4_ == 0.0);
  iVar79 = -(uint)(auVar29._4_4_ == 0.0);
  iVar81 = -(uint)(auVar29._8_4_ == 0.0);
  iVar86 = -(uint)(auVar29._12_4_ == 0.0);
  auVar73 = NEON_frsqrts(auVar108,auVar124,4);
  auVar125._0_4_ = auVar30._0_4_ * auVar110._0_4_;
  auVar125._4_4_ = auVar30._4_4_ * auVar110._4_4_;
  auVar125._8_4_ = auVar30._8_4_ * auVar110._8_4_;
  auVar125._12_4_ = auVar30._12_4_ * auVar110._12_4_;
  iVar91 = -(uint)(auVar30._0_4_ == 0.0);
  iVar94 = -(uint)(auVar30._4_4_ == 0.0);
  iVar97 = -(uint)(auVar30._8_4_ == 0.0);
  iVar100 = -(uint)(auVar30._12_4_ == 0.0);
  auVar92 = NEON_frsqrts(auVar110,auVar125,4);
  fVar2 = fVar2 * auVar108._0_4_ * auVar73._0_4_;
  fVar3 = fVar3 * auVar108._4_4_ * auVar73._4_4_;
  fVar4 = fVar4 * auVar108._8_4_ * auVar73._8_4_;
  fVar5 = fVar5 * auVar108._12_4_ * auVar73._12_4_;
  bVar42 = SUB41(fVar3,0) & ~(byte)iVar79;
  bVar43 = (byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar79 >> 8);
  bVar44 = (byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar79 >> 0x10);
  bVar45 = (byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar79 >> 0x18);
  bVar46 = SUB41(fVar5,0) & ~(byte)iVar86;
  bVar47 = (byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar86 >> 8);
  bVar48 = (byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar86 >> 0x10);
  bVar49 = (byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar86 >> 0x18);
  auVar126._0_4_ = auVar31._0_4_ * auVar112._0_4_;
  auVar126._4_4_ = auVar31._4_4_ * auVar112._4_4_;
  auVar126._8_4_ = auVar31._8_4_ * auVar112._8_4_;
  auVar126._12_4_ = auVar31._12_4_ * auVar112._12_4_;
  iVar103 = -(uint)(auVar31._0_4_ == 0.0);
  iVar104 = -(uint)(auVar31._4_4_ == 0.0);
  iVar105 = -(uint)(auVar31._8_4_ == 0.0);
  iVar106 = -(uint)(auVar31._12_4_ == 0.0);
  fVar7 = fVar7 * auVar110._0_4_ * auVar92._0_4_;
  fVar8 = fVar8 * auVar110._4_4_ * auVar92._4_4_;
  fVar9 = fVar9 * auVar110._8_4_ * auVar92._8_4_;
  fVar10 = fVar10 * auVar110._12_4_ * auVar92._12_4_;
  bVar50 = (byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
  bVar51 = (byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar100 >> 0x10);
  bVar52 = (byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar100 >> 0x18);
  auVar92 = NEON_frsqrts(auVar112,auVar126,4);
  iVar79 = -(uint)(auVar35._0_4_ == 0.0);
  iVar86 = -(uint)(auVar35._4_4_ == 0.0);
  iVar82 = -(uint)(auVar35._8_4_ == 0.0);
  iVar87 = -(uint)(auVar35._12_4_ == 0.0);
  bVar80 = ~(byte)((uint)iVar86 >> 0x18);
  bVar83 = ~(byte)((uint)iVar82 >> 8);
  bVar84 = ~(byte)((uint)iVar82 >> 0x10);
  bVar85 = ~(byte)((uint)iVar82 >> 0x18);
  bVar88 = ~(byte)((uint)iVar87 >> 8);
  bVar89 = ~(byte)((uint)iVar87 >> 0x10);
  bVar90 = ~(byte)((uint)iVar87 >> 0x18);
  Var28 = CONCAT18(bVar90,CONCAT17(bVar89,CONCAT16(bVar88,CONCAT15(~(byte)iVar87,
                                                                   CONCAT14(bVar85,CONCAT13(bVar84,
                                                  CONCAT12(bVar83,CONCAT11(~(byte)iVar82,bVar80)))))
                                                  )));
  auVar73._9_7_ = 0;
  auVar73._0_9_ = Var28;
  auVar127._0_4_ = auVar32._0_4_ * auVar114._0_4_;
  auVar127._4_4_ = auVar32._4_4_ * auVar114._4_4_;
  auVar127._8_4_ = auVar32._8_4_ * auVar114._8_4_;
  auVar127._12_4_ = auVar32._12_4_ * auVar114._12_4_;
  auVar107 = NEON_frsqrts(auVar114,auVar127,4);
  fVar12 = fVar12 * auVar112._0_4_ * auVar92._0_4_;
  fVar13 = fVar13 * auVar112._4_4_ * auVar92._4_4_;
  fVar14 = fVar14 * auVar112._8_4_ * auVar92._8_4_;
  fVar15 = fVar15 * auVar112._12_4_ * auVar92._12_4_;
  bVar53 = SUB41(fVar13,0) & ~(byte)iVar104;
  bVar54 = (byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar104 >> 8);
  bVar55 = (byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar104 >> 0x10);
  bVar56 = (byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar104 >> 0x18);
  bVar57 = SUB41(fVar15,0) & ~(byte)iVar106;
  bVar58 = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar106 >> 8);
  bVar59 = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar106 >> 0x10);
  bVar60 = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar106 >> 0x18);
  auVar128._0_4_ = auVar117._0_4_ * auVar115._0_4_;
  auVar128._4_4_ = auVar117._4_4_ * auVar115._4_4_;
  auVar128._8_4_ = auVar117._8_4_ * auVar115._8_4_;
  auVar128._12_4_ = auVar117._12_4_ * auVar115._12_4_;
  iVar104 = -(uint)(auVar32._0_4_ == 0.0);
  iVar95 = -(uint)(auVar32._4_4_ == 0.0);
  iVar98 = -(uint)(auVar32._8_4_ == 0.0);
  iVar101 = -(uint)(auVar32._12_4_ == 0.0);
  auVar92 = NEON_frsqrts(auVar115,auVar128,4);
  fVar36 = fVar36 * auVar114._0_4_ * auVar107._0_4_;
  fVar20 = fVar20 * auVar114._4_4_ * auVar107._4_4_;
  fVar21 = fVar21 * auVar114._8_4_ * auVar107._8_4_;
  fVar22 = fVar22 * auVar114._12_4_ * auVar107._12_4_;
  bVar63 = (byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar95 >> 0x10);
  bVar64 = (byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18);
  bVar65 = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18);
  bVar66 = (byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar101 >> 0x10);
  bVar67 = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar101 >> 0x18);
  iVar106 = -(uint)(auVar117._0_4_ == 0.0);
  iVar96 = -(uint)(auVar117._4_4_ == 0.0);
  iVar99 = -(uint)(auVar117._8_4_ == 0.0);
  iVar102 = -(uint)(auVar117._12_4_ == 0.0);
  fVar23 = fVar23 * auVar115._0_4_ * auVar92._0_4_;
  fVar24 = fVar24 * auVar115._4_4_ * auVar92._4_4_;
  fVar39 = fVar39 * auVar115._8_4_ * auVar92._8_4_;
  fVar41 = fVar41 * auVar115._12_4_ * auVar92._12_4_;
  bVar68 = (byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10);
  bVar69 = (byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18);
  bVar70 = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar102 >> 0x10);
  bVar71 = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar102 >> 0x18);
  auVar93._0_4_ = auVar35._0_4_ * auVar123._0_4_;
  auVar93._4_4_ = auVar35._4_4_ * auVar123._4_4_;
  auVar93._8_4_ = auVar35._8_4_ * auVar123._8_4_;
  auVar93._12_4_ = auVar35._12_4_ * auVar123._12_4_;
  auVar92 = NEON_frsqrts(auVar123,auVar93,4);
  fVar37 = fVar37 * auVar123._0_4_ * auVar92._0_4_;
  fVar38 = fVar38 * auVar123._4_4_ * auVar92._4_4_;
  fVar16 = fVar16 * auVar123._8_4_ * auVar92._8_4_;
  fVar17 = fVar17 * auVar123._12_4_ * auVar92._12_4_;
  bVar61 = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar79 >> 0x18);
  bVar62 = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar86 >> 0x10);
  bVar80 = (byte)((uint)fVar38 >> 0x18) & bVar80;
  bVar85 = (byte)((uint)fVar16 >> 0x18) & bVar85;
  bVar89 = (byte)((uint)fVar17 >> 0x10) & bVar89;
  bVar90 = (byte)((uint)fVar17 >> 0x18) & bVar90;
  fVar15 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar104 >> 0x18),
                           CONCAT12((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar104 >> 0x10),
                                    CONCAT11((byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar104 >> 8)
                                             ,SUB41(fVar36,0) & ~(byte)iVar104)));
  uVar19 = CONCAT15((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar95 >> 8),
                    CONCAT14(SUB41(fVar20,0) & ~(byte)iVar95,fVar15));
  fVar3 = (float)CONCAT13((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18),
                          CONCAT12((byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar91 >> 0x10),
                                   CONCAT11((byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar91 >> 8),
                                            SUB41(fVar7,0) & ~(byte)iVar91)));
  uVar6 = CONCAT16((byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10),
                   CONCAT15((byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar94 >> 8),
                            CONCAT14(SUB41(fVar8,0) & ~(byte)iVar94,fVar3)));
  auVar111._4_12_ = SUB1612(auVar73 << 0x38,4);
  auVar111._0_4_ = fVar3;
  auVar75._12_4_ = (undefined4)(Var28 >> 0x28);
  auVar75._0_8_ = auVar111._0_8_;
  auVar75._8_4_ = (int)(CONCAT17(bVar50,uVar6) >> 0x20);
  auVar74._8_8_ = auVar75._8_8_;
  auVar74._4_4_ = fVar15;
  auVar74._0_4_ = fVar3;
  uVar40 = (undefined4)(CONCAT17(bVar64,CONCAT16(bVar63,uVar19)) >> 0x20);
  auVar76._0_12_ = auVar74._0_12_;
  auVar76._12_4_ = uVar40;
  fVar13 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar103 >> 0x18),
                           CONCAT12((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar103 >> 0x10),
                                    CONCAT11((byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar103 >> 8)
                                             ,SUB41(fVar12,0) & ~(byte)iVar103)));
  fVar8 = (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar105 >> 0x18),
                          CONCAT12((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar105 >> 0x10),
                                   (short)(CONCAT12((byte)((uint)fVar14 >> 8) &
                                                    ~(byte)((uint)iVar105 >> 8),
                                                    CONCAT11(SUB41(fVar14,0) & ~(byte)iVar105,bVar56
                                                            )) >> 8)));
  fVar5 = (float)CONCAT13((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar97 >> 0x18),
                          CONCAT12((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar97 >> 0x10),
                                   (short)(CONCAT12((byte)((uint)fVar9 >> 8) &
                                                    ~(byte)((uint)iVar97 >> 8),
                                                    CONCAT11(SUB41(fVar9,0) & ~(byte)iVar97,bVar50))
                                          >> 8)));
  auVar77._4_12_ = auVar76._4_12_;
  auVar77._0_4_ = fVar5;
  fVar36 = (float)(CONCAT17(bVar65,CONCAT16((byte)((uint)fVar21 >> 0x10) &
                                            ~(byte)((uint)iVar98 >> 0x10),
                                            CONCAT15((byte)((uint)fVar21 >> 8) &
                                                     ~(byte)((uint)iVar98 >> 8),
                                                     CONCAT14(SUB41(fVar21,0) & ~(byte)iVar98,fVar5)
                                                    ))) >> 0x20);
  auVar78._0_8_ = auVar77._0_8_;
  auVar78._8_4_ = fVar36;
  auVar78._12_4_ = uVar40;
  uVar25 = CONCAT11((byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar101 >> 8),
                    SUB41(fVar22,0) & ~(byte)iVar101);
  fVar7 = (float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18),
                          CONCAT12((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10),
                                   CONCAT11((byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar72 >> 8),
                                            SUB41(fVar2,0) & ~(byte)iVar72)));
  fVar9 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar106 >> 0x18),
                          CONCAT12((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar106 >> 0x10),
                                   CONCAT11((byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar106 >> 8),
                                            SUB41(fVar23,0) & ~(byte)iVar106)));
  fVar37 = (float)(CONCAT17(bVar61,CONCAT16((byte)((uint)fVar37 >> 0x10) &
                                            ~(byte)((uint)iVar79 >> 0x10),
                                            CONCAT15((byte)((uint)fVar37 >> 8) &
                                                     ~(byte)((uint)iVar79 >> 8),
                                                     CONCAT14(SUB41(fVar37,0) & ~(byte)iVar79,fVar9)
                                                    ))) >> 0x20);
  uVar26 = CONCAT11((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar86 >> 8),
                    SUB41(fVar38,0) & ~(byte)iVar86);
  param_5[2] = fVar15;
  param_5[3] = 0.0;
  *param_5 = fVar3;
  param_5[1] = fVar13;
  uVar11 = (undefined2)((uint6)uVar19 >> 0x20);
  *(ulong *)(param_5 + 6) = (ulong)CONCAT13(bVar64,CONCAT12(bVar63,uVar11));
  uVar18 = (undefined3)((uint7)uVar6 >> 0x20);
  *(ulong *)(param_5 + 4) =
       CONCAT17(bVar56,CONCAT16(bVar55,CONCAT15(bVar54,CONCAT14(bVar53,CONCAT13(bVar50,uVar18)))));
  fVar14 = ABS((float)CONCAT13(bVar56,CONCAT12(bVar55,CONCAT11(bVar54,bVar53))));
  fVar2 = (float)CONCAT13((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar81 >> 0x18),
                          CONCAT12((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar81 >> 0x10),
                                   (short)(CONCAT12((byte)((uint)fVar4 >> 8) &
                                                    ~(byte)((uint)iVar81 >> 8),
                                                    CONCAT11(SUB41(fVar4,0) & ~(byte)iVar81,bVar45))
                                          >> 8)));
  fVar12 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar99 >> 0x18),
                           CONCAT12((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar99 >> 0x10),
                                    (short)(CONCAT12((byte)((uint)fVar39 >> 8) &
                                                     ~(byte)((uint)iVar99 >> 8),
                                                     CONCAT11(SUB41(fVar39,0) & ~(byte)iVar99,bVar69
                                                             )) >> 8)));
  fVar38 = (float)(CONCAT17(bVar85,CONCAT16((byte)((uint)fVar16 >> 0x10) & bVar84,
                                            CONCAT15((byte)((uint)fVar16 >> 8) & bVar83,
                                                     CONCAT14(SUB41(fVar16,0) & ~(byte)iVar82,fVar12
                                                             )))) >> 0x20);
  uVar27 = CONCAT11((byte)((uint)fVar17 >> 8) & bVar88,SUB41(fVar17,0) & ~(byte)iVar87);
  fVar13 = ABS(fVar13);
  *(ulong *)(param_5 + 10) = auVar78._8_8_ & 0xffffffff;
  *(ulong *)(param_5 + 8) = CONCAT44(fVar8,fVar5);
  *(ulong *)(param_5 + 0xe) = (ulong)CONCAT13(bVar67,CONCAT12(bVar66,uVar25));
  uVar1 = (undefined2)
          (CONCAT12((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar100 >> 8),
                    CONCAT11(SUB41(fVar10,0) & ~(byte)iVar100,bVar65)) >> 8);
  *(ulong *)(param_5 + 0xc) =
       CONCAT17(bVar60,CONCAT16(bVar59,CONCAT15(bVar58,CONCAT14(bVar57,CONCAT13(bVar52,CONCAT12(
                                                  bVar51,uVar1))))));
  fVar4 = ABS((float)CONCAT13(bVar60,CONCAT12(bVar59,CONCAT11(bVar58,bVar57))));
  *(ulong *)(param_5 + 0x22) = (ulong)(uint)ABS(fVar15);
  *(ulong *)(param_5 + 0x20) =
       CONCAT17((char)((uint)fVar13 >> 0x18),
                CONCAT16((char)((uint)fVar13 >> 0x10),
                         CONCAT15((char)((uint)fVar13 >> 8),CONCAT14(SUB41(fVar13,0),ABS(fVar3)))));
  *(ulong *)(param_5 + 0x26) = (ulong)(uint)ABS((float)CONCAT13(bVar64,CONCAT12(bVar63,uVar11)));
  *(ulong *)(param_5 + 0x24) =
       CONCAT17((char)((uint)fVar14 >> 0x18),
                CONCAT16((char)((uint)fVar14 >> 0x10),
                         CONCAT15((char)((uint)fVar14 >> 8),
                                  CONCAT14(SUB41(fVar14,0),ABS((float)CONCAT13(bVar50,uVar18))))));
  fVar8 = ABS(fVar8);
  param_5[0x12] = fVar37;
  param_5[0x13] = 0.0;
  param_5[0x10] = fVar9;
  param_5[0x11] = fVar7;
  *(ulong *)(param_5 + 0x16) = (ulong)CONCAT13(bVar80,CONCAT12(bVar62,uVar26));
  uVar11 = (undefined2)
           (CONCAT12((byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar96 >> 8),
                     CONCAT11(SUB41(fVar24,0) & ~(byte)iVar96,bVar61)) >> 8);
  *(ulong *)(param_5 + 0x14) =
       CONCAT17(bVar45,CONCAT16(bVar44,CONCAT15(bVar43,CONCAT14(bVar42,CONCAT13(bVar69,CONCAT12(
                                                  bVar68,uVar11))))));
  fVar10 = ABS((float)CONCAT13(bVar45,CONCAT12(bVar44,CONCAT11(bVar43,bVar42))));
  *(ulong *)(param_5 + 0x2a) = (ulong)(uint)ABS(fVar36);
  *(ulong *)(param_5 + 0x28) =
       CONCAT17((char)((uint)fVar8 >> 0x18),
                CONCAT16((char)((uint)fVar8 >> 0x10),
                         CONCAT15((char)((uint)fVar8 >> 8),CONCAT14(SUB41(fVar8,0),ABS(fVar5)))));
  *(ulong *)(param_5 + 0x2e) = (ulong)(uint)ABS((float)CONCAT13(bVar67,CONCAT12(bVar66,uVar25)));
  *(ulong *)(param_5 + 0x2c) =
       CONCAT17((char)((uint)fVar4 >> 0x18),
                CONCAT16((char)((uint)fVar4 >> 0x10),
                         CONCAT15((char)((uint)fVar4 >> 8),
                                  CONCAT14(SUB41(fVar4,0),
                                           ABS((float)CONCAT13(bVar52,CONCAT12(bVar51,uVar1)))))));
  fVar7 = ABS(fVar7);
  *(ulong *)(param_5 + 0x1a) = (ulong)(uint)fVar38;
  *(ulong *)(param_5 + 0x18) = CONCAT44(fVar2,fVar12);
  *(ulong *)(param_5 + 0x1e) = (ulong)CONCAT13(bVar90,CONCAT12(bVar89,uVar27));
  uVar1 = (undefined2)
          (CONCAT12((byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar102 >> 8),
                    CONCAT11(SUB41(fVar41,0) & ~(byte)iVar102,bVar85)) >> 8);
  *(ulong *)(param_5 + 0x1c) =
       CONCAT17(bVar49,CONCAT16(bVar48,CONCAT15(bVar47,CONCAT14(bVar46,CONCAT13(bVar71,CONCAT12(
                                                  bVar70,uVar1))))));
  fVar3 = ABS((float)CONCAT13(bVar49,CONCAT12(bVar48,CONCAT11(bVar47,bVar46))));
  *(ulong *)(param_5 + 0x32) = (ulong)(uint)ABS(fVar37);
  *(ulong *)(param_5 + 0x30) =
       CONCAT17((char)((uint)fVar7 >> 0x18),
                CONCAT16((char)((uint)fVar7 >> 0x10),
                         CONCAT15((char)((uint)fVar7 >> 8),CONCAT14(SUB41(fVar7,0),ABS(fVar9)))));
  *(ulong *)(param_5 + 0x36) = (ulong)(uint)ABS((float)CONCAT13(bVar80,CONCAT12(bVar62,uVar26)));
  *(ulong *)(param_5 + 0x34) =
       CONCAT17((char)((uint)fVar10 >> 0x18),
                CONCAT16((char)((uint)fVar10 >> 0x10),
                         CONCAT15((char)((uint)fVar10 >> 8),
                                  CONCAT14(SUB41(fVar10,0),
                                           ABS((float)CONCAT13(bVar69,CONCAT12(bVar68,uVar11)))))));
  fVar2 = ABS(fVar2);
  *(ulong *)(param_5 + 0x3a) = (ulong)(uint)ABS(fVar38);
  *(ulong *)(param_5 + 0x38) =
       CONCAT17((char)((uint)fVar2 >> 0x18),
                CONCAT16((char)((uint)fVar2 >> 0x10),
                         CONCAT15((char)((uint)fVar2 >> 8),CONCAT14(SUB41(fVar2,0),ABS(fVar12)))));
  *(ulong *)(param_5 + 0x3e) = (ulong)(uint)ABS((float)CONCAT13(bVar90,CONCAT12(bVar89,uVar27)));
  *(ulong *)(param_5 + 0x3c) =
       CONCAT17((char)((uint)fVar3 >> 0x18),
                CONCAT16((char)((uint)fVar3 >> 0x10),
                         CONCAT15((char)((uint)fVar3 >> 8),
                                  CONCAT14(SUB41(fVar3,0),
                                           ABS((float)CONCAT13(bVar71,CONCAT12(bVar70,uVar1)))))));
  return;
}


