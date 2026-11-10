/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f954cc; name: FUN_01f954cc
 */


void FUN_01f954cc(undefined8 *param_1,float param_2,undefined8 *param_3)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
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
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar42;
  int iVar44;
  float fVar45;
  int iVar46;
  undefined1 auVar43 [16];
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  byte bVar53;
  byte bVar54;
  char cVar55;
  byte bVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  char cVar59;
  byte bVar60;
  undefined1 uVar61;
  byte bVar62;
  undefined1 uVar63;
  byte bVar64;
  undefined1 uVar65;
  char cVar66;
  byte bVar67;
  undefined1 uVar68;
  byte bVar69;
  undefined1 uVar70;
  byte bVar71;
  undefined1 uVar72;
  char cVar73;
  byte bVar74;
  undefined1 uVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar79;
  float fVar80;
  byte bVar81;
  float fVar82;
  byte bVar85;
  float fVar86;
  byte bVar87;
  float fVar88;
  byte bVar89;
  float fVar90;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar91;
  undefined1 auVar92 [12];
  byte bVar98;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  byte bVar97;
  undefined1 auVar96 [16];
  float fVar99;
  float fVar103;
  float fVar104;
  undefined1 auVar100 [16];
  float fVar105;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  ulong uVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  int iVar114;
  int iVar116;
  int iVar117;
  undefined1 auVar115 [16];
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  int iVar126;
  undefined1 auVar127 [12];
  byte bVar130;
  byte bVar132;
  byte bVar133;
  int iVar131;
  byte bVar134;
  byte bVar136;
  byte bVar137;
  int iVar135;
  byte bVar138;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  uint5 uVar139;
  uint6 uVar140;
  undefined1 auVar141 [16];
  float local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  
  fVar18 = *(float *)((long)param_3 + 100);
  if ((1.1920929e-07 < fVar18) && (1.1920929e-07 < fVar18 - *(float *)(param_3 + 0xc))) {
    local_4c = *(float *)(param_3 + 0xc) + param_2;
    pfVar1 = (float *)((long)param_3 + 100);
    if (local_4c <= fVar18) {
      pfVar1 = &local_4c;
    }
    auVar31 = ZEXT416((uint)(*pfVar1 / fVar18));
    *(float *)(param_3 + 0xc) = *pfVar1;
    puVar12 = PTR_PTR_047d9248;
    fVar15 = (float)(**(code **)(PTR_PTR_047d9248 + (ulong)*(uint *)(param_3 + 0xd) * 8))(auVar31);
    fVar15 = fVar15 + 0.0;
    fVar23 = (float)param_3[1];
    fVar25 = (float)((ulong)param_3[1] >> 0x20);
    fVar19 = (float)*param_3;
    fVar21 = (float)((ulong)*param_3 >> 0x20);
    fVar8 = *(float *)(param_3 + 6);
    fVar9 = *(float *)((long)param_3 + 0x34);
    fVar10 = *(float *)(param_3 + 7);
    fVar11 = *(float *)((long)param_3 + 0x3c);
    fVar79 = *(float *)(param_3 + 4);
    fVar80 = *(float *)(param_3 + 10);
    fVar16 = (float)(**(code **)(puVar12 + (ulong)*(uint *)(param_3 + 0xd) * 8))(auVar31);
    fVar24 = (float)param_3[3];
    fVar26 = (float)((ulong)param_3[3] >> 0x20);
    fVar20 = (float)param_3[2];
    fVar22 = (float)((ulong)param_3[2] >> 0x20);
    auVar48 = NEON_fmov(0xbf800000,4);
    fVar27 = (float)param_3[8];
    fVar18 = fVar20 * fVar27;
    fVar28 = (float)((ulong)param_3[8] >> 0x20);
    fVar33 = fVar22 * fVar28;
    fVar29 = (float)param_3[9];
    fVar35 = fVar24 * fVar29;
    fVar30 = (float)((ulong)param_3[9] >> 0x20);
    fVar37 = fVar26 * fVar30;
    auVar13._0_4_ = fVar18 + fVar33;
    auVar13._4_4_ = fVar35 + fVar37;
    auVar13._8_4_ = fVar18 + fVar33;
    auVar13._12_4_ = fVar35 + fVar37;
    auVar31 = NEON_ext(auVar13,auVar13,4,1);
    auVar14._0_4_ = auVar31._0_4_ + auVar31._4_4_;
    auVar14._4_4_ = auVar31._8_4_ + auVar31._12_4_;
    auVar14._8_4_ = auVar31._0_4_ + auVar31._4_4_;
    auVar14._12_4_ = auVar31._8_4_ + auVar31._12_4_;
    auVar38 = NEON_fmax(auVar14,auVar48,4);
    auVar31 = NEON_fmov(0x3f800000,4);
    auVar43 = NEON_fmin(auVar38,auVar31,4);
    auVar39._0_4_ = -(uint)(auVar43._0_4_ < 0.0);
    auVar39._4_4_ = -(uint)(auVar43._4_4_ < 0.0);
    auVar39._8_4_ = -(uint)(auVar43._8_4_ < 0.0);
    auVar39._12_4_ = -(uint)(auVar43._12_4_ < 0.0);
    auVar38 = auVar31 ^ (auVar31 ^ auVar48) & auVar39;
    fVar82 = auVar43._0_4_ * auVar38._0_4_;
    fVar86 = auVar43._4_4_ * auVar38._4_4_;
    fVar88 = auVar43._8_4_ * auVar38._8_4_;
    fVar90 = auVar43._12_4_ * auVar38._12_4_;
    fVar27 = fVar27 * auVar38._0_4_;
    fVar28 = fVar28 * auVar38._4_4_;
    fVar29 = fVar29 * auVar38._8_4_;
    fVar30 = fVar30 * auVar38._12_4_;
    fVar34 = auVar31._0_4_;
    fVar36 = auVar31._4_4_;
    fVar45 = auVar31._8_4_;
    fVar47 = auVar31._12_4_;
    fVar18 = SQRT(fVar34 - fVar82 * fVar82);
    cVar55 = (char)((uint)fVar18 >> 0x18);
    fVar33 = SQRT(fVar36 - fVar86 * fVar86);
    cVar59 = (char)((uint)fVar33 >> 0x18);
    fVar35 = SQRT(fVar45 - fVar88 * fVar88);
    cVar66 = (char)((uint)fVar35 >> 0x18);
    fVar37 = SQRT(fVar47 - fVar90 * fVar90);
    cVar73 = (char)((uint)fVar37 >> 0x18);
    auVar100._0_4_ = ABS(fVar18 / fVar82);
    auVar100._4_4_ = ABS(fVar33 / fVar86);
    auVar100._8_4_ = ABS(fVar35 / fVar88);
    auVar100._12_4_ = ABS(fVar37 / fVar90);
    auVar93._0_4_ = -(uint)(0.0 <= fVar18 / fVar82);
    auVar93._4_4_ = -(uint)(0.0 <= fVar33 / fVar86);
    auVar93._8_4_ = -(uint)(0.0 <= fVar35 / fVar88);
    auVar93._12_4_ = -(uint)(0.0 <= fVar37 / fVar90);
    auVar38 = NEON_frecpe(auVar100,4);
    auVar31 = auVar48 ^ (auVar48 ^ auVar31) & auVar93;
    auVar76._0_4_ = -auVar31._0_4_;
    auVar76._4_4_ = -auVar31._4_4_;
    auVar76._8_4_ = -auVar31._8_4_;
    auVar76._12_4_ = -auVar31._12_4_;
    auVar106._0_4_ = (auVar100._0_4_ + auVar48._0_4_) / (auVar100._0_4_ + fVar34);
    auVar106._4_4_ = (auVar100._4_4_ + auVar48._4_4_) / (auVar100._4_4_ + fVar36);
    auVar106._8_4_ = (auVar100._8_4_ + auVar48._8_4_) / (auVar100._8_4_ + fVar45);
    auVar106._12_4_ = (auVar100._12_4_ + auVar48._12_4_) / (auVar100._12_4_ + fVar47);
    auVar43 = NEON_frecps(auVar38,auVar100,4);
    iVar42 = -(uint)(fVar82 == -INFINITY);
    iVar44 = -(uint)(fVar88 == -INFINITY);
    iVar46 = -(uint)(fVar90 == -INFINITY);
    auVar111._0_4_ = auVar38._0_4_ * auVar43._0_4_;
    auVar111._4_4_ = auVar38._4_4_ * auVar43._4_4_;
    auVar111._8_4_ = auVar38._8_4_ * auVar43._8_4_;
    auVar111._12_4_ = auVar38._12_4_ * auVar43._12_4_;
    iVar114 = -(uint)(fVar82 == INFINITY);
    iVar116 = -(uint)(fVar88 == INFINITY);
    iVar117 = -(uint)(fVar90 == INFINITY);
    auVar38 = NEON_frecps(auVar111,auVar100,4);
    auVar115[0] = ~(byte)iVar114;
    auVar115[1] = ~(byte)((uint)iVar114 >> 8);
    auVar115[2] = ~(byte)((uint)iVar114 >> 0x10);
    auVar115[3] = ~(byte)((uint)iVar114 >> 0x18);
    auVar115._4_3_ = 0;
    auVar115[7] = ~(byte)(-(uint)(fVar86 == INFINITY) >> 0x18);
    auVar115[8] = ~(byte)iVar116;
    auVar115[9] = ~(byte)((uint)iVar116 >> 8);
    auVar115[10] = ~(byte)((uint)iVar116 >> 0x10);
    auVar115[0xb] = ~(byte)((uint)iVar116 >> 0x18);
    auVar115[0xc] = ~(byte)iVar117;
    auVar115[0xd] = ~(byte)((uint)iVar117 >> 8);
    auVar115[0xe] = ~(byte)((uint)iVar117 >> 0x10);
    auVar115[0xf] = ~(byte)((uint)iVar117 >> 0x18);
    auVar112._0_4_ = auVar111._0_4_ * auVar38._0_4_;
    auVar112._4_4_ = auVar111._4_4_ * auVar38._4_4_;
    auVar112._8_4_ = auVar111._8_4_ * auVar38._8_4_;
    auVar112._12_4_ = auVar111._12_4_ * auVar38._12_4_;
    auVar141._0_4_ = -(uint)(auVar100._0_4_ <= 2.4142137);
    auVar141._4_4_ = -(uint)(auVar100._4_4_ <= 2.4142137);
    auVar141._8_4_ = -(uint)(auVar100._8_4_ <= 2.4142137);
    auVar141._12_4_ = -(uint)(auVar100._12_4_ <= 2.4142137);
    auVar113._0_4_ = -(uint)(auVar100._0_4_ <= 0.41421354);
    auVar113._4_4_ = -(uint)(auVar100._4_4_ <= 0.41421354);
    auVar113._8_4_ = -(uint)(auVar100._8_4_ <= 0.41421354);
    auVar113._12_4_ = -(uint)(auVar100._12_4_ <= 0.41421354);
    auVar100 = auVar100 ^ (auVar100 ^ auVar106 ^ (auVar106 ^ auVar112) & ~auVar141) & ~auVar113;
    auVar107[0] = ~(byte)iVar42;
    auVar107[1] = ~(byte)((uint)iVar42 >> 8);
    auVar107[2] = ~(byte)((uint)iVar42 >> 0x10);
    auVar107[3] = ~(byte)((uint)iVar42 >> 0x18);
    auVar107._4_3_ = 0;
    auVar107[7] = ~(byte)(-(uint)(fVar86 == -INFINITY) >> 0x18);
    auVar107[8] = ~(byte)iVar44;
    auVar107[9] = ~(byte)((uint)iVar44 >> 8);
    auVar107[10] = ~(byte)((uint)iVar44 >> 0x10);
    auVar107[0xb] = ~(byte)((uint)iVar44 >> 0x18);
    auVar107[0xc] = ~(byte)iVar46;
    auVar107[0xd] = ~(byte)((uint)iVar46 >> 8);
    auVar107[0xe] = ~(byte)((uint)iVar46 >> 0x10);
    auVar107[0xf] = ~(byte)((uint)iVar46 >> 0x18);
    bVar122 = cVar55 >> 7;
    iVar42 = (int)cVar59 >> 7;
    bVar123 = cVar59 >> 7;
    bVar124 = cVar66 >> 7;
    iVar44 = (int)cVar73 >> 7;
    bVar125 = cVar73 >> 7;
    fVar99 = auVar100._0_4_;
    fVar118 = fVar99 * fVar99;
    fVar103 = auVar100._4_4_;
    fVar119 = fVar103 * fVar103;
    fVar104 = auVar100._8_4_;
    fVar120 = fVar104 * fVar104;
    fVar105 = auVar100._12_4_;
    fVar121 = fVar105 * fVar105;
    auVar31 = auVar31 ^ (auVar31 ^ auVar76) & ~auVar141;
    auVar77[0xb] = bVar124;
    auVar77._8_3_ = (int3)((int)cVar66 >> 7);
    auVar77[0xc] = (char)iVar44;
    auVar77[0xd] = (char)((uint)iVar44 >> 8);
    auVar77[0xe] = (char)((uint)iVar44 >> 0x10);
    auVar77[0xf] = bVar125;
    auVar77[3] = bVar122;
    auVar77._0_3_ = (int3)((int)cVar55 >> 7);
    auVar77[4] = (char)iVar42;
    auVar77[5] = (char)((uint)iVar42 >> 8);
    auVar77[6] = (char)((uint)iVar42 >> 0x10);
    auVar77[7] = bVar123;
    auVar3._8_4_ = 0xbfc90fdb;
    auVar3._0_8_ = 0xbfc90fdbbfc90fdb;
    auVar3._12_4_ = 0xbfc90fdb;
    auVar4[8] = 0xdb;
    auVar4._0_8_ = 0x3f490fdb3f490fdb;
    auVar4[9] = 0xf;
    auVar4[10] = 0x49;
    auVar4[0xb] = 0x3f;
    auVar4[0xc] = 0xdb;
    auVar4[0xd] = 0xf;
    auVar4[0xe] = 0x49;
    auVar4[0xf] = 0x3f;
    auVar94._8_4_ = 0xbfc90fdb;
    auVar94._0_8_ = 0xbfc90fdbbfc90fdb;
    auVar94._12_4_ = 0xbfc90fdb;
    auVar94 = auVar94 ^ (auVar3 ^ auVar4) & auVar141;
    fVar91 = (float)CONCAT13(auVar94[3] & ~(byte)((uint)auVar113._0_4_ >> 0x18),
                             CONCAT12(auVar94[2] & ~(byte)((uint)auVar113._0_4_ >> 0x10),
                                      CONCAT11(auVar94[1] & ~(byte)((uint)auVar113._0_4_ >> 8),
                                               auVar94[0] & ~(byte)auVar113._0_4_)));
    auVar92._0_8_ =
         CONCAT17(auVar94[7] & ~(byte)((uint)auVar113._4_4_ >> 0x18),
                  CONCAT16(auVar94[6] & ~(byte)((uint)auVar113._4_4_ >> 0x10),
                           CONCAT15(auVar94[5] & ~(byte)((uint)auVar113._4_4_ >> 8),
                                    CONCAT14(auVar94[4] & ~(byte)auVar113._4_4_,fVar91))));
    auVar92[8] = auVar94[8] & ~(byte)auVar113._8_4_;
    auVar92[9] = auVar94[9] & ~(byte)((uint)auVar113._8_4_ >> 8);
    auVar92[10] = auVar94[10] & ~(byte)((uint)auVar113._8_4_ >> 0x10);
    auVar92[0xb] = auVar94[0xb] & ~(byte)((uint)auVar113._8_4_ >> 0x18);
    auVar95[0xc] = auVar94[0xc] & ~(byte)auVar113._12_4_;
    auVar95._0_12_ = auVar92;
    auVar95[0xd] = auVar94[0xd] & ~(byte)((uint)auVar113._12_4_ >> 8);
    auVar95[0xe] = auVar94[0xe] & ~(byte)((uint)auVar113._12_4_ >> 0x10);
    auVar95[0xf] = auVar94[0xf] & ~(byte)((uint)auVar113._12_4_ >> 0x18);
    auVar78._8_4_ = 0x40490fdb;
    auVar78._0_8_ = 0x40490fdb40490fdb;
    auVar78._12_4_ = 0x40490fdb;
    iVar126 = -(uint)(fVar18 == INFINITY);
    iVar131 = -(uint)(fVar35 == INFINITY);
    iVar135 = -(uint)(fVar37 == INFINITY);
    auVar2[8] = 0xdb;
    auVar2._0_8_ = 0xc0490fdbc0490fdb;
    auVar2[9] = 0xf;
    auVar2[10] = 0x49;
    auVar2[0xb] = 0xc0;
    auVar2[0xc] = 0xdb;
    auVar2[0xd] = 0xf;
    auVar2[0xe] = 0x49;
    auVar2[0xf] = 0xc0;
    auVar78 = auVar78 ^ (auVar78 ^ auVar2) & auVar77;
    iVar114 = -(uint)(fVar18 == 0.0);
    iVar116 = -(uint)(fVar35 == 0.0);
    iVar117 = -(uint)(fVar37 == 0.0);
    iVar42 = -(uint)(fVar18 == -0.0);
    bVar53 = (byte)((uint)iVar42 >> 8);
    bVar54 = (byte)((uint)iVar42 >> 0x10);
    bVar56 = (byte)((uint)iVar42 >> 0x18);
    bVar60 = (byte)(-(uint)(fVar33 == -0.0) >> 0x18);
    iVar44 = -(uint)(fVar35 == -0.0);
    bVar62 = (byte)((uint)iVar44 >> 8);
    bVar64 = (byte)((uint)iVar44 >> 0x10);
    bVar67 = (byte)((uint)iVar44 >> 0x18);
    iVar46 = -(uint)(fVar37 == -0.0);
    bVar69 = (byte)((uint)iVar46 >> 8);
    bVar71 = (byte)((uint)iVar46 >> 0x10);
    bVar74 = (byte)((uint)iVar46 >> 0x18);
    bVar130 = (byte)((uint)iVar126 >> 0x18);
    bVar97 = ~bVar130;
    bVar98 = ~(byte)(-(uint)(fVar33 == INFINITY) >> 0x18);
    auVar96._0_8_ =
         CONCAT17(bVar98,(uint7)CONCAT13(bVar97,CONCAT12(~(byte)((uint)iVar126 >> 0x10),
                                                         CONCAT11(~(byte)((uint)iVar126 >> 8),
                                                                  ~(byte)iVar126))));
    auVar96[8] = ~(byte)iVar131;
    bVar132 = (byte)((uint)iVar131 >> 8);
    auVar96[9] = ~bVar132;
    bVar133 = (byte)((uint)iVar131 >> 0x10);
    auVar96[10] = ~bVar133;
    bVar134 = (byte)((uint)iVar131 >> 0x18);
    auVar96[0xb] = ~bVar134;
    auVar96[0xc] = ~(byte)iVar135;
    bVar136 = (byte)((uint)iVar135 >> 8);
    auVar96[0xd] = ~bVar136;
    bVar137 = (byte)((uint)iVar135 >> 0x10);
    auVar96[0xe] = ~bVar137;
    bVar138 = (byte)((uint)iVar135 >> 0x18);
    auVar96[0xf] = ~bVar138;
    auVar101._8_4_ = 0x3fc90fdb;
    auVar101._0_8_ = 0x3fc90fdb3fc90fdb;
    auVar101._12_4_ = 0x3fc90fdb;
    bVar81 = (byte)((int)fVar82 >> 0x1f);
    fVar18 = (float)CONCAT13(auVar78[3] & bVar81,
                             CONCAT12(auVar78[2] & bVar81,
                                      CONCAT11(auVar78[1] & bVar81,auVar78[0] & bVar81)));
    bVar85 = (byte)((int)fVar86 >> 0x1f);
    auVar127._0_8_ =
         CONCAT17(auVar78[7] & bVar85,
                  CONCAT16(auVar78[6] & bVar85,
                           CONCAT15(auVar78[5] & bVar85,CONCAT14(auVar78[4] & bVar85,fVar18))));
    bVar87 = (byte)((int)fVar88 >> 0x1f);
    auVar127[8] = auVar78[8] & bVar87;
    auVar127[9] = auVar78[9] & bVar87;
    auVar127[10] = auVar78[10] & bVar87;
    auVar127[0xb] = auVar78[0xb] & bVar87;
    bVar89 = (byte)((int)fVar90 >> 0x1f);
    auVar128[0xc] = auVar78[0xc] & bVar89;
    auVar128._0_12_ = auVar127;
    auVar128[0xd] = auVar78[0xd] & bVar89;
    auVar128[0xe] = auVar78[0xe] & bVar89;
    auVar128[0xf] = auVar78[0xf] & bVar89;
    auVar49._0_4_ =
         auVar31._0_4_ *
         (fVar91 + (fVar34 + fVar118 * (fVar118 * (fVar118 * (fVar118 * (fVar118 * (fVar118 * 
                                                  0.07692308 + -0.09090909) + 0.11111111) +
                                                  -0.14285715) + 0.2) + -0.33333334)) * fVar99) +
         fVar18;
    auVar49._4_4_ =
         auVar31._4_4_ *
         ((float)((ulong)auVar92._0_8_ >> 0x20) +
         (fVar36 + fVar119 * (fVar119 * (fVar119 * (fVar119 * (fVar119 * (fVar119 * 0.07692308 +
                                                                         -0.09090909) + 0.11111111)
                                                   + -0.14285715) + 0.2) + -0.33333334)) * fVar103)
         + (float)((ulong)auVar127._0_8_ >> 0x20);
    auVar49._8_4_ =
         auVar31._8_4_ *
         (auVar92._8_4_ +
         (fVar45 + fVar120 * (fVar120 * (fVar120 * (fVar120 * (fVar120 * (fVar120 * 0.07692308 +
                                                                         -0.09090909) + 0.11111111)
                                                   + -0.14285715) + 0.2) + -0.33333334)) * fVar104)
         + auVar127._8_4_;
    auVar49._12_4_ =
         auVar31._12_4_ *
         (auVar95._12_4_ +
         (fVar47 + fVar121 * (fVar121 * (fVar121 * (fVar121 * (fVar121 * (fVar121 * 0.07692308 +
                                                                         -0.09090909) + 0.11111111)
                                                   + -0.14285715) + 0.2) + -0.33333334)) * fVar105)
         + auVar128._12_4_;
    uVar139 = (uint5)CONCAT13(~bVar56,CONCAT12(~bVar54,CONCAT11(~bVar53,~(byte)iVar42))) &
              0xdb40490fdb;
    uVar140 = CONCAT15(~bVar69,CONCAT14(~(byte)iVar46,
                                        CONCAT13(~bVar67,CONCAT12(~bVar64,CONCAT11(~bVar62,~(byte)
                                                  iVar44))))) & 0xfdb40490fdb;
    auVar129._8_8_ = auVar96._8_8_;
    auVar129._0_8_ = auVar96._0_8_;
    uVar110 = CONCAT17(bVar60 & ~bVar85,(uint7)(bVar56 & ~bVar81 & 0x80) << 0x18) &
              0x80ffffffffffffff;
    auVar6._8_4_ = 0x4016cbe4;
    auVar6._0_8_ = 0x4016cbe44016cbe4;
    auVar6._12_4_ = 0x4016cbe4;
    auVar7._8_4_ = 0x4016cbe4;
    auVar7._0_8_ = 0x4016cbe44016cbe4;
    auVar7._12_4_ = 0x4016cbe4;
    auVar83._0_8_ =
         CONCAT17(bVar123 & bVar98,
                  (uint7)CONCAT13(bVar122 & bVar97 & 0x80 | bVar130 & 0x3f,(int3)iVar126)) &
         0x80490fdbff490fdb;
    auVar83[8] = (byte)iVar131 & 0xdb;
    auVar83[9] = bVar132 & 0xf;
    auVar83[10] = bVar133 & 0x49;
    auVar83[0xb] = bVar124 & auVar96[0xb] & 0x80 | bVar134 & 0x3f;
    auVar83[0xc] = (byte)iVar135 & 0xdb;
    auVar83[0xd] = bVar136 & 0xf;
    auVar83[0xe] = bVar137 & 0x49;
    auVar83[0xf] = bVar125 & auVar96[0xf] & 0x80 | bVar138 & 0x3f;
    auVar49 = auVar49 ^ (auVar49 ^ auVar101) & ~auVar96;
    auVar49 = auVar49 ^ (auVar49 ^ auVar7 ^ (auVar6 ^ auVar78) & auVar129) & ~auVar107;
    auVar49 = auVar49 ^ (auVar49 ^ auVar83) & ~auVar115;
    auVar43[1] = ((byte)(uVar139 >> 8) | bVar53 & 0xf) & bVar81;
    auVar43[0] = ((byte)uVar139 | (byte)iVar42 & 0xdb) & bVar81;
    auVar43[2] = ((byte)(uVar139 >> 0x10) | bVar54 & 0x49) & bVar81;
    auVar43[3] = ((byte)(uVar139 >> 0x18) | bVar56 & 0xc0) & bVar81 | (byte)(uVar110 >> 0x18);
    auVar43._4_3_ = 0;
    auVar43[7] = bVar60 & 0xc0 & bVar85 | (byte)(uVar110 >> 0x38);
    auVar43[8] = ((byte)uVar140 | (byte)iVar44 & 0xdb) & bVar87;
    auVar43[9] = ((byte)(uVar140 >> 8) | bVar62 & 0xf) & bVar87;
    auVar43[10] = ((byte)(uVar140 >> 0x10) | bVar64 & 0x49) & bVar87;
    auVar43[0xb] = ((byte)(uVar140 >> 0x18) | bVar67 & 0xc0) & bVar87 | bVar67 & ~bVar87 & 0x80;
    auVar43[0xc] = ((byte)(uVar140 >> 0x20) | (byte)iVar46 & 0xdb) & bVar89;
    auVar43[0xd] = ((byte)(uVar140 >> 0x28) | bVar69 & 0xf) & bVar89;
    auVar43[0xe] = (~bVar71 & 0x49 | bVar71 & 0x49) & bVar89;
    auVar43[0xf] = (~bVar74 & 0x40 | bVar74 & 0xc0) & bVar89 | bVar74 & ~bVar89 & 0x80;
    auVar5[1] = ~(byte)((uint)iVar114 >> 8);
    auVar5[0] = ~(byte)iVar114;
    auVar5[2] = ~(byte)((uint)iVar114 >> 0x10);
    auVar5[3] = ~(byte)((uint)iVar114 >> 0x18);
    auVar5._4_3_ = 0;
    auVar5[7] = ~(byte)(-(uint)(fVar33 == 0.0) >> 0x18);
    auVar5[8] = ~(byte)iVar116;
    auVar5[9] = ~(byte)((uint)iVar116 >> 8);
    auVar5[10] = ~(byte)((uint)iVar116 >> 0x10);
    auVar5[0xb] = ~(byte)((uint)iVar116 >> 0x18);
    auVar5[0xc] = ~(byte)iVar117;
    auVar5[0xd] = ~(byte)((uint)iVar117 >> 8);
    auVar5[0xe] = ~(byte)((uint)iVar117 >> 0x10);
    auVar5[0xf] = ~(byte)((uint)iVar117 >> 0x18);
    auVar49 = auVar49 ^ (auVar49 ^ auVar43) & ~auVar5;
    fVar35 = auVar49._0_4_;
    fVar33 = fVar15 * fVar35;
    fVar37 = auVar49._12_4_;
    fVar18 = fVar35 - fVar35 * fVar15;
    fVar37 = fVar37 - fVar37 * fVar15;
    auVar50._0_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar18) & 0x80000000 ^ 0x3f000000) + fVar18 * 0.15915494);
    auVar50._4_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar33) & 0x80000000 ^ 0x3f000000) + fVar33 * 0.15915494);
    auVar50._8_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar35) & 0x80000000 ^ 0x3f000000) + fVar35 * 0.15915494);
    auVar50._12_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar37) & 0x80000000 ^ 0x3f000000) + fVar37 * 0.15915494);
    iVar42 = -(uint)(ABS(fVar18) == INFINITY);
    iVar44 = -(uint)(ABS(fVar33) == INFINITY);
    iVar46 = -(uint)(ABS(fVar35) == INFINITY);
    iVar114 = -(uint)(ABS(fVar37) == INFINITY);
    auVar40[0] = ~(byte)iVar42;
    auVar40[1] = ~(byte)((uint)iVar42 >> 8);
    auVar40[2] = ~(byte)((uint)iVar42 >> 0x10);
    auVar40[3] = ~(byte)((uint)iVar42 >> 0x18);
    auVar40[4] = ~(byte)iVar44;
    auVar40[5] = ~(byte)((uint)iVar44 >> 8);
    auVar40[6] = ~(byte)((uint)iVar44 >> 0x10);
    auVar40[7] = ~(byte)((uint)iVar44 >> 0x18);
    auVar40[8] = ~(byte)iVar46;
    auVar40[9] = ~(byte)((uint)iVar46 >> 8);
    auVar40[10] = ~(byte)((uint)iVar46 >> 0x10);
    auVar40[0xb] = ~(byte)((uint)iVar46 >> 0x18);
    auVar40[0xc] = ~(byte)iVar114;
    auVar40[0xd] = ~(byte)((uint)iVar114 >> 8);
    auVar40[0xe] = ~(byte)((uint)iVar114 >> 0x10);
    auVar40[0xf] = ~(byte)((uint)iVar114 >> 0x18);
    auVar31 = NEON_scvtf(auVar50,4);
    fVar18 = fVar18 + auVar31._0_4_ * -6.2831855;
    fVar33 = fVar33 + auVar31._4_4_ * -6.2831855;
    uVar57 = (undefined1)((uint)fVar33 >> 8);
    uVar58 = (undefined1)((uint)fVar33 >> 0x10);
    uVar61 = (undefined1)((uint)fVar33 >> 0x18);
    fVar35 = fVar35 + auVar31._8_4_ * -6.2831855;
    uVar63 = (undefined1)((uint)fVar35 >> 8);
    uVar65 = (undefined1)((uint)fVar35 >> 0x10);
    uVar68 = (undefined1)((uint)fVar35 >> 0x18);
    fVar37 = fVar37 + auVar31._12_4_ * -6.2831855;
    uVar70 = (undefined1)((uint)fVar37 >> 8);
    uVar72 = (undefined1)((uint)fVar37 >> 0x10);
    uVar75 = (undefined1)((uint)fVar37 >> 0x18);
    auVar51._0_4_ = -(uint)(fVar18 < -1.5707964);
    auVar51._4_4_ = -(uint)(fVar33 < -1.5707964);
    auVar51._8_4_ = -(uint)(fVar35 < -1.5707964);
    auVar51._12_4_ = -(uint)(fVar37 < -1.5707964);
    auVar84._0_4_ = -3.1415927 - fVar18;
    auVar84._4_4_ = -3.1415927 - fVar33;
    auVar84._8_4_ = -3.1415927 - fVar35;
    auVar84._12_4_ = -3.1415927 - fVar37;
    auVar48[4] = SUB41(fVar33,0);
    auVar48._0_4_ = fVar18;
    auVar48[5] = uVar57;
    auVar48[6] = uVar58;
    auVar48[7] = uVar61;
    auVar48[8] = SUB41(fVar35,0);
    auVar48[9] = uVar63;
    auVar48[10] = uVar65;
    auVar48[0xb] = uVar68;
    auVar48[0xc] = SUB41(fVar37,0);
    auVar48[0xd] = uVar70;
    auVar48[0xe] = uVar72;
    auVar48[0xf] = uVar75;
    auVar52[4] = SUB41(fVar33,0);
    auVar52._0_4_ = fVar18;
    auVar52[5] = uVar57;
    auVar52[6] = uVar58;
    auVar52[7] = uVar61;
    auVar52[8] = SUB41(fVar35,0);
    auVar52[9] = uVar63;
    auVar52[10] = uVar65;
    auVar52[0xb] = uVar68;
    auVar52[0xc] = SUB41(fVar37,0);
    auVar52[0xd] = uVar70;
    auVar52[0xe] = uVar72;
    auVar52[0xf] = uVar75;
    auVar52 = auVar52 ^ (auVar48 ^ auVar84) & auVar51;
    auVar108._0_4_ = 3.1415927 - auVar52._0_4_;
    auVar108._4_4_ = 3.1415927 - auVar52._4_4_;
    auVar108._8_4_ = 3.1415927 - auVar52._8_4_;
    auVar108._12_4_ = 3.1415927 - auVar52._12_4_;
    *(float *)(param_1 + 4) = fVar79 + (fVar80 - fVar79) * fVar16;
    auVar102._0_4_ = -(uint)(1.5707964 < auVar52._0_4_);
    auVar102._4_4_ = -(uint)(1.5707964 < auVar52._4_4_);
    auVar102._8_4_ = -(uint)(1.5707964 < auVar52._8_4_);
    auVar102._12_4_ = -(uint)(1.5707964 < auVar52._12_4_);
    *(undefined4 *)((long)param_1 + 0x2c) = local_44;
    auVar52 = auVar52 ^ (auVar52 ^ auVar108) & auVar102;
    fVar18 = auVar52._0_4_;
    fVar16 = fVar18 * fVar18;
    fVar33 = auVar52._4_4_;
    fVar79 = fVar33 * fVar33;
    fVar35 = auVar52._8_4_;
    fVar80 = fVar35 * fVar35;
    fVar37 = auVar52._12_4_;
    fVar82 = fVar37 * fVar37;
    auVar109._8_4_ = 0x7fc00000;
    auVar109._0_8_ = 0x7fc000007fc00000;
    auVar109._12_4_ = 0x7fc00000;
    *(ulong *)((long)param_1 + 0x24) = CONCAT44(uStack_48,local_4c);
    auVar32._0_4_ =
         fVar18 * (fVar34 + fVar16 * (fVar16 * (fVar16 * (fVar16 * (fVar16 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
    auVar32._4_4_ =
         fVar33 * (fVar36 + fVar79 * (fVar79 * (fVar79 * (fVar79 * (fVar79 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
    auVar32._8_4_ =
         fVar35 * (fVar45 + fVar80 * (fVar80 * (fVar80 * (fVar80 * (fVar80 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
    auVar32._12_4_ =
         fVar37 * (fVar47 + fVar82 * (fVar82 * (fVar82 * (fVar82 * (fVar82 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
    auVar32 = auVar32 ^ (auVar32 ^ auVar109) & ~auVar40;
    fVar16 = auVar32._0_4_;
    fVar18 = fVar20 + (fVar27 - fVar20) * fVar15;
    fVar33 = fVar22 + (fVar28 - fVar22) * fVar15;
    fVar35 = fVar24 + (fVar29 - fVar24) * fVar15;
    fVar37 = fVar26 + (fVar30 - fVar26) * fVar15;
    fVar34 = auVar32._4_4_;
    fVar36 = auVar32._8_4_;
    iVar42 = -(uint)(fVar36 == 0.0);
    iVar44 = -(uint)(fVar36 == 0.0);
    iVar46 = -(uint)(fVar36 == 0.0);
    iVar114 = -(uint)(fVar36 == 0.0);
    auVar17[0] = ~(byte)iVar42;
    auVar17[1] = ~(byte)((uint)iVar42 >> 8);
    auVar17[2] = ~(byte)((uint)iVar42 >> 0x10);
    auVar17[3] = ~(byte)((uint)iVar42 >> 0x18);
    auVar17[4] = ~(byte)iVar44;
    auVar17[5] = ~(byte)((uint)iVar44 >> 8);
    auVar17[6] = ~(byte)((uint)iVar44 >> 0x10);
    auVar17[7] = ~(byte)((uint)iVar44 >> 0x18);
    auVar17[8] = ~(byte)iVar46;
    auVar17[9] = ~(byte)((uint)iVar46 >> 8);
    auVar17[10] = ~(byte)((uint)iVar46 >> 0x10);
    auVar17[0xb] = ~(byte)((uint)iVar46 >> 0x18);
    auVar17[0xc] = ~(byte)iVar114;
    auVar17[0xd] = ~(byte)((uint)iVar114 >> 8);
    auVar17[0xe] = ~(byte)((uint)iVar114 >> 0x10);
    auVar17[0xf] = ~(byte)((uint)iVar114 >> 0x18);
    auVar41._0_4_ = (fVar20 * fVar16 + fVar27 * fVar34) / fVar36;
    auVar41._4_4_ = (fVar22 * fVar16 + fVar28 * fVar34) / fVar36;
    auVar41._8_4_ = (fVar24 * fVar16 + fVar29 * fVar34) / fVar36;
    auVar41._12_4_ = (fVar26 * fVar16 + fVar30 * fVar34) / fVar36;
    auVar31._4_4_ = fVar33;
    auVar31._0_4_ = fVar18;
    auVar31._8_4_ = fVar35;
    auVar31._12_4_ = fVar37;
    auVar38._4_4_ = fVar33;
    auVar38._0_4_ = fVar18;
    auVar38._8_4_ = fVar35;
    auVar38._12_4_ = fVar37;
    auVar38 = auVar38 ^ (auVar31 ^ auVar41) & auVar17;
    param_1[1] = CONCAT44(fVar25 + (fVar11 - fVar25) * fVar15,fVar23 + (fVar10 - fVar23) * fVar15);
    *param_1 = CONCAT44(fVar21 + (fVar9 - fVar21) * fVar15,fVar19 + (fVar8 - fVar19) * fVar15);
    param_1[3] = auVar38._8_8_;
    param_1[2] = auVar38._0_8_;
    return;
  }
  memcpy(param_1,param_3 + 6,0x30);
  return;
}


