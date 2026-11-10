/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03058024; name: FUN_03058024
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03058024(undefined8 *param_1,undefined8 *param_2,undefined1 (*param_3) [16],float *param_4,
                 float *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined3 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  ulong uVar19;
  undefined1 auVar20 [12];
  undefined1 auVar22 [12];
  float fVar30;
  float fVar31;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar21 [12];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  byte bVar29;
  undefined1 auVar28 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar42;
  float fVar43;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar51;
  byte bVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  float fVar63;
  int iVar64;
  float fVar66;
  int iVar67;
  undefined1 auVar65 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined8 uVar73;
  undefined1 auVar74 [12];
  float fVar80;
  float fVar83;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar81;
  float fVar82;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar84;
  float fVar87;
  float fVar88;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  
  fVar50 = (float)param_1[1];
  fVar51 = (float)((ulong)param_1[1] >> 0x20);
  fVar43 = (float)*param_1;
  fVar48 = (float)((ulong)*param_1 >> 0x20);
  auVar86 = *param_3;
  fVar66 = auVar86._0_4_;
  fVar32 = fVar43 * fVar66;
  fVar68 = auVar86._4_4_;
  fVar38 = fVar48 * fVar68;
  fVar30 = auVar86._8_4_;
  fVar40 = fVar50 * fVar30;
  fVar31 = auVar86._12_4_;
  fVar34 = (float)*param_2;
  fVar42 = fVar66 * fVar34;
  fVar39 = (float)((ulong)*param_2 >> 0x20);
  fVar47 = fVar68 * fVar39;
  fVar41 = (float)param_2[1];
  fVar49 = fVar30 * fVar41;
  fVar33 = fVar32 + fVar38 + fVar40;
  fVar40 = fVar32 + fVar38 + fVar40;
  fVar63 = fVar42 + fVar47 + fVar49;
  fVar49 = fVar42 + fVar47 + fVar49;
  fVar43 = fVar43 - fVar66 * fVar33;
  fVar48 = fVar48 - fVar68 * fVar40;
  fVar50 = fVar50 - fVar30 * fVar33;
  fVar38 = fVar51 - fVar31 * fVar40;
  fVar32 = (float)((ulong)param_2[1] >> 0x20);
  fVar34 = fVar34 - fVar66 * fVar63;
  fVar39 = fVar39 - fVar68 * fVar49;
  fVar41 = fVar41 - fVar30 * fVar63;
  fVar33 = fVar32 - fVar31 * fVar49;
  if (fVar51 == -fVar32) {
    fVar32 = fVar34 - fVar43;
    fVar42 = fVar39 - fVar48;
    uVar53 = SUB41(fVar42,0);
    uVar54 = (undefined1)((uint)fVar42 >> 8);
    uVar56 = (undefined1)((uint)fVar42 >> 0x10);
    uVar58 = (undefined1)((uint)fVar42 >> 0x18);
    fVar47 = fVar41 - fVar50;
    uVar55 = (undefined1)((uint)fVar47 >> 8);
    uVar57 = (undefined1)((uint)fVar47 >> 0x10);
    uVar59 = (undefined1)((uint)fVar47 >> 0x18);
    fVar49 = fVar33 - fVar38;
    uVar60 = (undefined1)((uint)fVar49 >> 8);
    uVar61 = (undefined1)((uint)fVar49 >> 0x10);
    uVar62 = (undefined1)((uint)fVar49 >> 0x18);
    auVar76[4] = uVar53;
    auVar76._0_4_ = fVar32;
    auVar76[5] = uVar54;
    auVar76[6] = uVar56;
    auVar76[7] = uVar58;
    auVar76[8] = SUB41(fVar47,0);
    auVar76[9] = uVar55;
    auVar76[10] = uVar57;
    auVar76[0xb] = uVar59;
    auVar76[0xc] = SUB41(fVar49,0);
    auVar76[0xd] = uVar60;
    auVar76[0xe] = uVar61;
    auVar76[0xf] = uVar62;
    auVar85[4] = uVar53;
    auVar85._0_4_ = fVar32;
    auVar85[5] = uVar54;
    auVar85[6] = uVar56;
    auVar85[7] = uVar58;
    auVar85[8] = SUB41(fVar47,0);
    auVar85[9] = uVar55;
    auVar85[10] = uVar57;
    auVar85[0xb] = uVar59;
    auVar85[0xc] = SUB41(fVar49,0);
    auVar85[0xd] = uVar60;
    auVar85[0xe] = uVar61;
    auVar85[0xf] = uVar62;
    auVar76 = NEON_ext(auVar76,auVar85,4,1);
    auVar86 = NEON_ext(auVar86,auVar86,4,1);
    fVar40 = auVar86._0_4_ * fVar32 - fVar66 * auVar76._0_4_;
    fVar42 = auVar86._4_4_ * fVar42 - fVar68 * auVar76._4_4_;
    uVar55 = (undefined1)((uint)fVar42 >> 8);
    uVar57 = (undefined1)((uint)fVar42 >> 0x10);
    uVar59 = (undefined1)((uint)fVar42 >> 0x18);
    fVar66 = fVar66 * fVar47 - fVar30 * fVar32;
    uVar60 = (undefined1)((uint)fVar66 >> 8);
    uVar61 = (undefined1)((uint)fVar66 >> 0x10);
    uVar62 = (undefined1)((uint)fVar66 >> 0x18);
    fVar32 = fVar68 * fVar49 -
             fVar31 * (float)(CONCAT17(uVar58,CONCAT16(uVar56,CONCAT15(uVar54,CONCAT14(uVar53,fVar32
                                                                                      )))) >> 0x20);
    uVar53 = (undefined1)((uint)fVar32 >> 8);
    uVar54 = (undefined1)((uint)fVar32 >> 0x10);
    uVar56 = (undefined1)((uint)fVar32 >> 0x18);
    auVar86[4] = SUB41(fVar42,0);
    auVar86._0_4_ = fVar40;
    auVar86[5] = uVar55;
    auVar86[6] = uVar57;
    auVar86[7] = uVar59;
    auVar86[8] = SUB41(fVar66,0);
    auVar86[9] = uVar60;
    auVar86[10] = uVar61;
    auVar86[0xb] = uVar62;
    auVar86[0xc] = SUB41(fVar32,0);
    auVar86[0xd] = uVar53;
    auVar86[0xe] = uVar54;
    auVar86[0xf] = uVar56;
    auVar14[4] = SUB41(fVar42,0);
    auVar14._0_4_ = fVar40;
    auVar14[5] = uVar55;
    auVar14[6] = uVar57;
    auVar14[7] = uVar59;
    auVar14[8] = SUB41(fVar66,0);
    auVar14[9] = uVar60;
    auVar14[10] = uVar61;
    auVar14[0xb] = uVar62;
    auVar14[0xc] = SUB41(fVar32,0);
    auVar14[0xd] = uVar53;
    auVar14[0xe] = uVar54;
    auVar14[0xf] = uVar56;
    auVar86 = NEON_ext(auVar86,auVar14,4,1);
    fVar66 = auVar86._0_4_;
    fVar68 = auVar86._4_4_;
    fVar32 = fVar40 * fVar40 + fVar66 * fVar66 + fVar68 * fVar68;
    if (fVar32 == 0.0) {
      fVar66 = 0.0;
      fVar68 = 0.0;
      fVar40 = 0.0;
      fVar32 = 0.0;
    }
    else {
      fVar32 = SQRT(fVar32);
      fVar30 = SQRT(fVar40 * fVar40 + fVar66 * fVar66 + fVar68 * fVar68);
      fVar66 = fVar66 / fVar32;
      fVar68 = fVar68 / fVar30;
      fVar40 = fVar40 / fVar32;
      fVar32 = 0.0 / (float)CONCAT13((char)((uint)fVar30 >> 0x18),
                                     CONCAT12((char)((uint)fVar30 >> 0x10),
                                              (short)(CONCAT15((char)((uint)fVar30 >> 8),
                                                               CONCAT14(SUB41(fVar30,0),fVar32)) >>
                                                     0x20)));
    }
    fVar42 = fVar34 + fVar66 * fVar51;
    fVar47 = fVar39 + fVar68 * fVar51;
    fVar49 = fVar41 + fVar40 * fVar51;
    fVar33 = fVar33 + fVar32 * fVar51;
    param_4[2] = fVar50 + fVar40 * fVar51;
    param_4[3] = fVar38 + fVar32 * fVar51;
    *param_4 = fVar43 + fVar66 * fVar51;
    param_4[1] = fVar48 + fVar68 * fVar51;
  }
  else if (fVar51 == 0.0) {
    auVar85 = NEON_fmov(0x3f800000,4);
    fVar32 = fVar66 * (fVar34 - fVar43);
    fVar42 = fVar68 * (fVar39 - fVar48);
    fVar47 = fVar30 * (fVar41 - fVar50);
    fVar40 = fVar47 + fVar32 + fVar42;
    fVar47 = fVar47 + fVar32 + fVar42;
    fVar42 = (fVar34 - fVar43) - fVar66 * fVar40;
    fVar49 = (fVar39 - fVar48) - fVar68 * fVar47;
    fVar51 = (fVar41 - fVar50) - fVar30 * fVar40;
    fVar63 = (fVar33 - fVar38) -
             fVar31 * (float)CONCAT13((char)((uint)fVar47 >> 0x18),
                                      CONCAT12((char)((uint)fVar47 >> 0x10),
                                               (short)(CONCAT15((char)((uint)fVar47 >> 8),
                                                                CONCAT14(SUB41(fVar47,0),fVar40)) >>
                                                      0x20)));
    fVar34 = fVar42 * fVar42;
    fVar39 = fVar49 * fVar49;
    uVar53 = (undefined1)((uint)fVar39 >> 8);
    uVar54 = (undefined1)((uint)fVar39 >> 0x10);
    uVar55 = (undefined1)((uint)fVar39 >> 0x18);
    fVar41 = fVar51 * fVar51;
    uVar56 = (undefined1)((uint)fVar41 >> 8);
    uVar57 = (undefined1)((uint)fVar41 >> 0x10);
    uVar58 = (undefined1)((uint)fVar41 >> 0x18);
    fVar32 = fVar63 * fVar63;
    uVar59 = (undefined1)((uint)fVar32 >> 8);
    uVar60 = (undefined1)((uint)fVar32 >> 0x10);
    uVar61 = (undefined1)((uint)fVar32 >> 0x18);
    auVar10[4] = SUB41(fVar39,0);
    auVar10._0_4_ = fVar34;
    auVar10[5] = uVar53;
    auVar10[6] = uVar54;
    auVar10[7] = uVar55;
    auVar10[8] = SUB41(fVar41,0);
    auVar10[9] = uVar56;
    auVar10[10] = uVar57;
    auVar10[0xb] = uVar58;
    auVar10[0xc] = SUB41(fVar32,0);
    auVar10[0xd] = uVar59;
    auVar10[0xe] = uVar60;
    auVar10[0xf] = uVar61;
    auVar11[4] = SUB41(fVar39,0);
    auVar11._0_4_ = fVar34;
    auVar11[5] = uVar53;
    auVar11[6] = uVar54;
    auVar11[7] = uVar55;
    auVar11[8] = SUB41(fVar41,0);
    auVar11[9] = uVar56;
    auVar11[10] = uVar57;
    auVar11[0xb] = uVar58;
    auVar11[0xc] = SUB41(fVar32,0);
    auVar11[0xd] = uVar59;
    auVar11[0xe] = uVar60;
    auVar11[0xf] = uVar61;
    auVar76 = NEON_ext(auVar10,auVar11,8,1);
    fVar34 = fVar34 + fVar39 + auVar76._0_4_;
    fVar39 = auVar85._0_4_ / SQRT(fVar34);
    fVar47 = auVar85._8_4_ / SQRT(fVar34);
    iVar64 = -(uint)(fVar34 <= 0.0);
    iVar67 = -(uint)(fVar34 <= 0.0);
    fVar40 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                             CONCAT12((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                                      CONCAT11((byte)((uint)fVar39 >> 8) &
                                               ~(byte)((uint)iVar64 >> 8),
                                               SUB41(fVar39,0) & ~(byte)iVar64)));
    auVar86 = NEON_ext(auVar86,auVar86,4,1);
    fVar42 = fVar42 * fVar40;
    fVar49 = fVar49 * fVar40;
    fVar51 = fVar51 * fVar40;
    fVar63 = fVar63 * fVar40;
    auVar3._4_4_ = fVar49;
    auVar3._0_4_ = fVar42;
    auVar3._8_4_ = fVar51;
    auVar3._12_4_ = fVar63;
    auVar4._4_4_ = fVar49;
    auVar4._0_4_ = fVar42;
    auVar4._8_4_ = fVar51;
    auVar4._12_4_ = fVar63;
    auVar76 = NEON_ext(auVar3,auVar4,4,1);
    auVar25._0_4_ = fVar66 * auVar76._0_4_ - auVar86._0_4_ * fVar42;
    auVar25._4_4_ = fVar68 * auVar76._4_4_ - auVar86._4_4_ * fVar49;
    auVar25._8_4_ = fVar30 * fVar42 - fVar66 * fVar51;
    auVar25._12_4_ = fVar31 * fVar49 - fVar68 * fVar63;
    auVar76 = NEON_ext(auVar25,auVar25,4,1);
    auVar36._12_4_ = fVar33 * fVar33;
    auVar36._4_4_ = auVar36._12_4_;
    auVar36._0_4_ = auVar36._12_4_;
    auVar36._8_4_ = auVar36._12_4_;
    fVar39 = fVar34 - auVar36._12_4_;
    fVar41 = fVar34 - auVar36._12_4_;
    fVar32 = fVar34 - auVar36._12_4_;
    fVar34 = fVar34 - auVar36._12_4_;
    auVar86 = *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0x30);
    param_4[2] = fVar50;
    param_4[3] = fVar38;
    *param_4 = fVar43;
    param_4[1] = fVar48;
    auVar12[4] = SUB41(fVar41,0);
    auVar12._0_4_ = fVar39;
    auVar12[5] = (char)((uint)fVar41 >> 8);
    auVar12[6] = (char)((uint)fVar41 >> 0x10);
    auVar12[7] = (char)((uint)fVar41 >> 0x18);
    auVar12[8] = SUB41(fVar32,0);
    auVar12[9] = (char)((uint)fVar32 >> 8);
    auVar12[10] = (char)((uint)fVar32 >> 0x10);
    auVar12[0xb] = (char)((uint)fVar32 >> 0x18);
    auVar12[0xc] = SUB41(fVar34,0);
    auVar12[0xd] = (char)((uint)fVar34 >> 8);
    auVar12[0xe] = (char)((uint)fVar34 >> 0x10);
    auVar12[0xf] = (char)((uint)fVar34 >> 0x18);
    auVar36 = auVar36 ^ (auVar36 ^ auVar12) & ~auVar86;
    auVar78._12_4_ = _UNK_03caa78c;
    auVar78._8_4_ = _UNK_03caa788;
    auVar78._4_4_ = _UNK_03caa784;
    auVar78._0_4_ = _DAT_03caa780;
    auVar37._0_4_ = fVar39 * auVar36._0_4_;
    auVar37._4_4_ = fVar41 * auVar36._4_4_;
    auVar37._8_4_ = fVar32 * auVar36._8_4_;
    auVar37._12_4_ = fVar34 * auVar36._12_4_;
    iVar64 = -(uint)(fVar32 <= 0.0);
    iVar17 = -(uint)(fVar34 <= 0.0);
    auVar13._4_3_ = 0;
    auVar13._0_4_ = -(uint)(fVar39 <= 0.0);
    auVar13[7] = (char)(-(uint)(fVar41 <= 0.0) >> 0x18);
    auVar13[8] = (char)iVar64;
    auVar13[9] = (char)((uint)iVar64 >> 8);
    auVar13[10] = (char)((uint)iVar64 >> 0x10);
    auVar13[0xb] = (char)((uint)iVar64 >> 0x18);
    auVar13[0xc] = (char)iVar17;
    auVar13[0xd] = (char)((uint)iVar17 >> 8);
    auVar13[0xe] = (char)((uint)iVar17 >> 0x10);
    auVar13[0xf] = (char)((uint)iVar17 >> 0x18);
    auVar37 = auVar37 ^ (auVar37 ^ auVar78) & auVar13;
    bVar52 = (char)((fVar33 < 0.0) * -0x80) >> 7;
    bVar29 = (char)((fVar33 < 0.0) * -0x80) >> 7;
    uVar19 = CONCAT17(bVar29,(uint7)((bVar52 & 0x80) << 0x18)) & 0x80ffffffffffffff;
    auVar26[0xf] = bVar29 & 0x80;
    fVar34 = (float)CONCAT13((byte)(uVar19 >> 0x18) ^ auVar76[3],auVar76._0_3_);
    auVar21._0_8_ =
         CONCAT17((byte)(uVar19 >> 0x38) ^ auVar76[7],
                  CONCAT16(auVar76[6],CONCAT15(auVar76[5],CONCAT14(auVar76[4],fVar34))));
    auVar21[8] = SUB41(auVar25._0_4_,0);
    auVar21[9] = (char)((uint)auVar25._0_4_ >> 8);
    auVar21[10] = (char)((uint)auVar25._0_4_ >> 0x10);
    auVar21[0xb] = bVar52 & 0x80 ^ (byte)((uint)auVar25._0_4_ >> 0x18);
    auVar26._12_3_ = 0;
    auVar26._0_12_ = auVar21;
    fVar40 = fVar40 * SQRT(auVar37._0_4_);
    fVar39 = (float)CONCAT13((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18),
                             CONCAT12((byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10),
                                      CONCAT11((byte)((uint)fVar47 >> 8) &
                                               ~(byte)((uint)iVar67 >> 8),
                                               SUB41(fVar47,0) & ~(byte)iVar67))) *
             SQRT(auVar37._8_4_);
    fVar42 = fVar43 + fVar42 * fVar39 + fVar34 * fVar40;
    fVar47 = fVar48 + fVar49 * fVar39 + (float)((ulong)auVar21._0_8_ >> 0x20) * fVar40;
    fVar49 = fVar50 + fVar51 * fVar39 + auVar21._8_4_ * fVar40;
    fVar33 = fVar38 + fVar63 * fVar39 + auVar26._12_4_ * fVar40;
  }
  else if (fVar32 == 0.0) {
    auVar85 = NEON_fmov(0x3f800000,4);
    fVar32 = fVar66 * (fVar43 - fVar34);
    fVar42 = fVar68 * (fVar48 - fVar39);
    fVar47 = fVar30 * (fVar50 - fVar41);
    fVar40 = fVar47 + fVar32 + fVar42;
    fVar47 = fVar47 + fVar32 + fVar42;
    fVar49 = (fVar43 - fVar34) - fVar66 * fVar40;
    fVar48 = (fVar48 - fVar39) - fVar68 * fVar47;
    fVar50 = (fVar50 - fVar41) - fVar30 * fVar40;
    fVar51 = (fVar38 - fVar33) -
             fVar31 * (float)CONCAT13((char)((uint)fVar47 >> 0x18),
                                      CONCAT12((char)((uint)fVar47 >> 0x10),
                                               (short)(CONCAT15((char)((uint)fVar47 >> 8),
                                                                CONCAT14(SUB41(fVar47,0),fVar40)) >>
                                                      0x20)));
    fVar32 = fVar49 * fVar49;
    fVar40 = fVar48 * fVar48;
    uVar53 = (undefined1)((uint)fVar40 >> 8);
    uVar54 = (undefined1)((uint)fVar40 >> 0x10);
    uVar55 = (undefined1)((uint)fVar40 >> 0x18);
    fVar42 = fVar50 * fVar50;
    uVar56 = (undefined1)((uint)fVar42 >> 8);
    uVar57 = (undefined1)((uint)fVar42 >> 0x10);
    uVar58 = (undefined1)((uint)fVar42 >> 0x18);
    fVar43 = fVar51 * fVar51;
    uVar59 = (undefined1)((uint)fVar43 >> 8);
    uVar60 = (undefined1)((uint)fVar43 >> 0x10);
    uVar61 = (undefined1)((uint)fVar43 >> 0x18);
    auVar6[4] = SUB41(fVar40,0);
    auVar6._0_4_ = fVar32;
    auVar6[5] = uVar53;
    auVar6[6] = uVar54;
    auVar6[7] = uVar55;
    auVar6[8] = SUB41(fVar42,0);
    auVar6[9] = uVar56;
    auVar6[10] = uVar57;
    auVar6[0xb] = uVar58;
    auVar6[0xc] = SUB41(fVar43,0);
    auVar6[0xd] = uVar59;
    auVar6[0xe] = uVar60;
    auVar6[0xf] = uVar61;
    auVar7[4] = SUB41(fVar40,0);
    auVar7._0_4_ = fVar32;
    auVar7[5] = uVar53;
    auVar7[6] = uVar54;
    auVar7[7] = uVar55;
    auVar7[8] = SUB41(fVar42,0);
    auVar7[9] = uVar56;
    auVar7[10] = uVar57;
    auVar7[0xb] = uVar58;
    auVar7[0xc] = SUB41(fVar43,0);
    auVar7[0xd] = uVar59;
    auVar7[0xe] = uVar60;
    auVar7[0xf] = uVar61;
    auVar76 = NEON_ext(auVar6,auVar7,8,1);
    fVar32 = fVar32 + fVar40 + auVar76._0_4_;
    fVar40 = auVar85._0_4_ / SQRT(fVar32);
    fVar42 = auVar85._8_4_ / SQRT(fVar32);
    iVar64 = -(uint)(fVar32 <= 0.0);
    iVar67 = -(uint)(fVar32 <= 0.0);
    fVar40 = (float)CONCAT13((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                             CONCAT12((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                                      CONCAT11((byte)((uint)fVar40 >> 8) &
                                               ~(byte)((uint)iVar64 >> 8),
                                               SUB41(fVar40,0) & ~(byte)iVar64)));
    auVar86 = NEON_ext(auVar86,auVar86,4,1);
    fVar49 = fVar49 * fVar40;
    fVar48 = fVar48 * fVar40;
    fVar50 = fVar50 * fVar40;
    fVar51 = fVar51 * fVar40;
    auVar1._4_4_ = fVar48;
    auVar1._0_4_ = fVar49;
    auVar1._8_4_ = fVar50;
    auVar1._12_4_ = fVar51;
    auVar2._4_4_ = fVar48;
    auVar2._0_4_ = fVar49;
    auVar2._8_4_ = fVar50;
    auVar2._12_4_ = fVar51;
    auVar76 = NEON_ext(auVar1,auVar2,4,1);
    auVar27._0_4_ = fVar66 * auVar76._0_4_ - auVar86._0_4_ * fVar49;
    auVar27._4_4_ = fVar68 * auVar76._4_4_ - auVar86._4_4_ * fVar48;
    auVar27._8_4_ = fVar30 * fVar49 - fVar66 * fVar50;
    auVar27._12_4_ = fVar31 * fVar48 - fVar68 * fVar51;
    auVar76 = NEON_ext(auVar27,auVar27,4,1);
    auVar45._12_4_ = fVar38 * fVar38;
    auVar45._4_4_ = auVar45._12_4_;
    auVar45._0_4_ = auVar45._12_4_;
    auVar45._8_4_ = auVar45._12_4_;
    fVar66 = fVar32 - auVar45._12_4_;
    fVar68 = fVar32 - auVar45._12_4_;
    fVar30 = fVar32 - auVar45._12_4_;
    fVar32 = fVar32 - auVar45._12_4_;
    auVar86 = *(undefined1 (*) [16])(PTR_DAT_047d19e0 + 0x30);
    param_5[2] = fVar41;
    param_5[3] = fVar33;
    *param_5 = fVar34;
    param_5[1] = fVar39;
    auVar8[4] = SUB41(fVar68,0);
    auVar8._0_4_ = fVar66;
    auVar8[5] = (char)((uint)fVar68 >> 8);
    auVar8[6] = (char)((uint)fVar68 >> 0x10);
    auVar8[7] = (char)((uint)fVar68 >> 0x18);
    auVar8[8] = SUB41(fVar30,0);
    auVar8[9] = (char)((uint)fVar30 >> 8);
    auVar8[10] = (char)((uint)fVar30 >> 0x10);
    auVar8[0xb] = (char)((uint)fVar30 >> 0x18);
    auVar8[0xc] = SUB41(fVar32,0);
    auVar8[0xd] = (char)((uint)fVar32 >> 8);
    auVar8[0xe] = (char)((uint)fVar32 >> 0x10);
    auVar8[0xf] = (char)((uint)fVar32 >> 0x18);
    auVar45 = auVar45 ^ (auVar45 ^ auVar8) & ~auVar86;
    auVar79._12_4_ = _UNK_03caa78c;
    auVar79._8_4_ = _UNK_03caa788;
    auVar79._4_4_ = _UNK_03caa784;
    auVar79._0_4_ = _DAT_03caa780;
    auVar46._0_4_ = fVar66 * auVar45._0_4_;
    auVar46._4_4_ = fVar68 * auVar45._4_4_;
    auVar46._8_4_ = fVar30 * auVar45._8_4_;
    auVar46._12_4_ = fVar32 * auVar45._12_4_;
    iVar64 = -(uint)(fVar30 <= 0.0);
    iVar17 = -(uint)(fVar32 <= 0.0);
    auVar9._4_3_ = 0;
    auVar9._0_4_ = -(uint)(fVar66 <= 0.0);
    auVar9[7] = (char)(-(uint)(fVar68 <= 0.0) >> 0x18);
    auVar9[8] = (char)iVar64;
    auVar9[9] = (char)((uint)iVar64 >> 8);
    auVar9[10] = (char)((uint)iVar64 >> 0x10);
    auVar9[0xb] = (char)((uint)iVar64 >> 0x18);
    auVar9[0xc] = (char)iVar17;
    auVar9[0xd] = (char)((uint)iVar17 >> 8);
    auVar9[0xe] = (char)((uint)iVar17 >> 0x10);
    auVar9[0xf] = (char)((uint)iVar17 >> 0x18);
    auVar46 = auVar46 ^ (auVar46 ^ auVar79) & auVar9;
    bVar52 = (char)((fVar38 < 0.0) * -0x80) >> 7;
    bVar29 = (char)((fVar38 < 0.0) * -0x80) >> 7;
    uVar19 = CONCAT17(bVar29,(uint7)((bVar52 & 0x80) << 0x18)) & 0x80ffffffffffffff;
    auVar28[0xf] = bVar29 & 0x80;
    fVar32 = (float)CONCAT13((byte)(uVar19 >> 0x18) ^ auVar76[3],auVar76._0_3_);
    auVar22._0_8_ =
         CONCAT17((byte)(uVar19 >> 0x38) ^ auVar76[7],
                  CONCAT16(auVar76[6],CONCAT15(auVar76[5],CONCAT14(auVar76[4],fVar32))));
    auVar22[8] = SUB41(auVar27._0_4_,0);
    auVar22[9] = (char)((uint)auVar27._0_4_ >> 8);
    auVar22[10] = (char)((uint)auVar27._0_4_ >> 0x10);
    auVar22[0xb] = bVar52 & 0x80 ^ (byte)((uint)auVar27._0_4_ >> 0x18);
    auVar28._12_3_ = 0;
    auVar28._0_12_ = auVar22;
    fVar40 = fVar40 * SQRT(auVar46._0_4_);
    fVar66 = (float)CONCAT13((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18),
                             CONCAT12((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10),
                                      CONCAT11((byte)((uint)fVar42 >> 8) &
                                               ~(byte)((uint)iVar67 >> 8),
                                               SUB41(fVar42,0) & ~(byte)iVar67))) *
             SQRT(auVar46._8_4_);
    fVar42 = fVar34 + fVar49 * fVar66 + fVar32 * fVar40;
    fVar47 = fVar39 + fVar48 * fVar66 + (float)((ulong)auVar22._0_8_ >> 0x20) * fVar40;
    fVar49 = fVar41 + fVar50 * fVar66 + auVar22._8_4_ * fVar40;
    fVar33 = fVar33 + fVar51 * fVar66 + auVar28._12_4_ * fVar40;
    param_5 = param_4;
  }
  else {
    fVar51 = fVar51 / (fVar51 + fVar32);
    uVar73 = NEON_fmov(0x3f800000,4);
    fVar63 = (float)CONCAT13((byte)(-(uint)(fVar51 < 0.0) >> 0x18) & 0x80 ^
                             (byte)((uint)fVar38 >> 0x18),SUB43(fVar38,0));
    bVar52 = (byte)(-(uint)((float)uVar73 < fVar51) >> 0x18) & 0x80 ^ (byte)((uint)fVar33 >> 0x18);
    fVar42 = fVar43 + (fVar34 - fVar43) * fVar51;
    fVar47 = fVar48 + (fVar39 - fVar48) * fVar51;
    fVar49 = fVar50 + (fVar41 - fVar50) * fVar51;
    fVar38 = fVar38 + (fVar33 - fVar38) * fVar51;
    uVar5 = SUB43(fVar33,0);
    fVar32 = fVar66 * (fVar43 - fVar42);
    fVar40 = fVar68 * (fVar48 - fVar47);
    fVar51 = fVar30 * (fVar50 - fVar49);
    fVar69 = fVar66 * (fVar34 - fVar42);
    fVar80 = fVar68 * (fVar39 - fVar47);
    fVar83 = fVar30 * (fVar41 - fVar49);
    fVar33 = fVar51 + fVar32 + fVar40;
    fVar51 = fVar51 + fVar32 + fVar40;
    fVar70 = fVar83 + fVar69 + fVar80;
    fVar83 = fVar83 + fVar69 + fVar80;
    fVar32 = (fVar43 - fVar42) - fVar66 * fVar33;
    fVar40 = (fVar48 - fVar47) - fVar68 * fVar51;
    fVar33 = (fVar50 - fVar49) - fVar30 * fVar33;
    fVar43 = (fVar63 - fVar38) - fVar31 * fVar51;
    fVar34 = (fVar34 - fVar42) - fVar66 * fVar70;
    fVar39 = (fVar39 - fVar47) - fVar68 * fVar83;
    fVar41 = (fVar41 - fVar49) - fVar30 * fVar70;
    fVar48 = ((float)CONCAT13(bVar52,uVar5) - fVar38) - fVar31 * fVar83;
    auVar65._0_4_ = fVar32 * fVar32;
    auVar65._4_4_ = fVar40 * fVar40;
    auVar65._8_4_ = fVar33 * fVar33;
    auVar65._12_4_ = fVar43 * fVar43;
    auVar85 = NEON_ext(auVar65,auVar65,8,1);
    auVar75._0_4_ = fVar34 * fVar34;
    auVar75._4_4_ = fVar39 * fVar39;
    auVar75._8_4_ = fVar41 * fVar41;
    auVar75._12_4_ = fVar48 * fVar48;
    auVar76 = NEON_ext(auVar75,auVar75,8,1);
    fVar50 = auVar65._0_4_ + auVar65._4_4_ + auVar85._0_4_;
    fVar83 = auVar75._0_4_ + auVar75._4_4_ + auVar76._0_4_;
    fVar71 = fVar63 * fVar63;
    fVar81 = (float)CONCAT13(bVar52,uVar5) * (float)CONCAT13(bVar52,uVar5);
    iVar64 = -(uint)(fVar50 <= 0.0);
    iVar17 = -(uint)(fVar83 <= 0.0);
    iVar67 = -(uint)(fVar50 <= 0.0);
    iVar18 = -(uint)(fVar83 <= 0.0);
    bVar52 = (byte)(-(uint)((float)CONCAT13(bVar52,uVar5) < 0.0) >> 0x18);
    fVar51 = fVar50 - fVar71;
    fVar69 = fVar83 - fVar81;
    fVar70 = fVar50 - fVar71;
    fVar80 = fVar83 - fVar81;
    auVar76 = NEON_fmov(0x3f800000,4);
    fVar72 = fVar51 * (float)((uint)fVar71 ^
                             ((uint)fVar71 ^ (uint)fVar51) & ~*(uint *)(PTR_DAT_047d19e0 + 0x30));
    fVar82 = fVar69 * (float)((uint)fVar81 ^
                             ((uint)fVar81 ^ (uint)fVar69) & ~*(uint *)(PTR_DAT_047d19e0 + 0x34));
    fVar71 = fVar70 * (float)((uint)fVar71 ^
                             ((uint)fVar71 ^ (uint)fVar70) & ~*(uint *)(PTR_DAT_047d19e0 + 0x38));
    fVar81 = fVar80 * (float)((uint)fVar81 ^
                             ((uint)fVar81 ^ (uint)fVar80) & ~*(uint *)(PTR_DAT_047d19e0 + 0x3c));
    fVar84 = auVar76._0_4_ / SQRT(fVar50);
    fVar87 = auVar76._4_4_ / SQRT(fVar83);
    fVar88 = auVar76._8_4_ / SQRT(fVar50);
    fVar83 = auVar76._12_4_ / SQRT(fVar83);
    fVar50 = (float)CONCAT13((byte)((uint)fVar84 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                             CONCAT12((byte)((uint)fVar84 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                                      CONCAT11((byte)((uint)fVar84 >> 8) &
                                               ~(byte)((uint)iVar64 >> 8),
                                               SUB41(fVar84,0) & ~(byte)iVar64)));
    auVar74._0_8_ =
         CONCAT17((byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                  CONCAT16((byte)((uint)fVar87 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                           CONCAT15((byte)((uint)fVar87 >> 8) & ~(byte)((uint)iVar17 >> 8),
                                    CONCAT14(SUB41(fVar87,0) & ~(byte)iVar17,fVar50))));
    auVar74[8] = SUB41(fVar88,0) & ~(byte)iVar67;
    auVar74[9] = (byte)((uint)fVar88 >> 8) & ~(byte)((uint)iVar67 >> 8);
    auVar74[10] = (byte)((uint)fVar88 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10);
    auVar74[0xb] = (byte)((uint)fVar88 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18);
    auVar77[0xc] = SUB41(fVar83,0) & ~(byte)iVar18;
    auVar77._0_12_ = auVar74;
    auVar77[0xd] = (byte)((uint)fVar83 >> 8) & ~(byte)((uint)iVar18 >> 8);
    auVar77[0xe] = (byte)((uint)fVar83 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10);
    auVar77[0xf] = (byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18);
    auVar86 = NEON_ext(auVar86,auVar86,4,1);
    auVar35._0_4_ = fVar32 * fVar50;
    auVar35._4_4_ = fVar40 * fVar50;
    auVar35._8_4_ = fVar33 * fVar50;
    auVar35._12_4_ = fVar43 * fVar50;
    auVar76 = NEON_ext(auVar35,auVar35,4,1);
    fVar33 = (float)((ulong)auVar74._0_8_ >> 0x20);
    auVar44._0_4_ = fVar34 * fVar33;
    auVar44._4_4_ = fVar39 * fVar33;
    auVar44._8_4_ = fVar41 * fVar33;
    auVar44._12_4_ = fVar48 * fVar33;
    auVar85 = NEON_ext(auVar44,auVar44,4,1);
    fVar34 = fVar66 * auVar76._0_4_ - auVar86._0_4_ * auVar35._0_4_;
    fVar39 = fVar68 * auVar76._4_4_ - auVar86._4_4_ * auVar35._4_4_;
    uVar53 = (undefined1)((uint)fVar39 >> 8);
    uVar54 = (undefined1)((uint)fVar39 >> 0x10);
    uVar55 = (undefined1)((uint)fVar39 >> 0x18);
    fVar41 = fVar30 * auVar35._0_4_ - fVar66 * auVar35._8_4_;
    uVar56 = (undefined1)((uint)fVar41 >> 8);
    uVar57 = (undefined1)((uint)fVar41 >> 0x10);
    uVar58 = (undefined1)((uint)fVar41 >> 0x18);
    fVar32 = fVar31 * auVar35._4_4_ - fVar68 * auVar35._12_4_;
    uVar59 = (undefined1)((uint)fVar32 >> 8);
    uVar60 = (undefined1)((uint)fVar32 >> 0x10);
    uVar61 = (undefined1)((uint)fVar32 >> 0x18);
    auVar23._0_4_ = fVar66 * auVar85._0_4_ - auVar86._0_4_ * auVar44._0_4_;
    auVar23._4_4_ = fVar68 * auVar85._4_4_ - auVar86._4_4_ * auVar44._4_4_;
    auVar23._8_4_ = fVar30 * auVar44._0_4_ - fVar66 * auVar44._8_4_;
    auVar23._12_4_ = fVar31 * auVar44._4_4_ - fVar68 * auVar44._12_4_;
    fVar50 = fVar50 * SQRT((float)((uint)fVar72 ^
                                  ((uint)fVar72 ^ _DAT_03caa780) & -(uint)(fVar51 <= 0.0)));
    fVar33 = fVar33 * SQRT((float)((uint)fVar82 ^
                                  ((uint)fVar82 ^ _UNK_03caa784) & -(uint)(fVar69 <= 0.0)));
    fVar66 = auVar74._8_4_ *
             SQRT((float)((uint)fVar71 ^ ((uint)fVar71 ^ _UNK_03caa788) & -(uint)(fVar70 <= 0.0)));
    fVar68 = auVar77._12_4_ *
             SQRT((float)((uint)fVar81 ^ ((uint)fVar81 ^ _UNK_03caa78c) & -(uint)(fVar80 <= 0.0)));
    auVar15[4] = SUB41(fVar39,0);
    auVar15._0_4_ = fVar34;
    auVar15[5] = uVar53;
    auVar15[6] = uVar54;
    auVar15[7] = uVar55;
    auVar15[8] = SUB41(fVar41,0);
    auVar15[9] = uVar56;
    auVar15[10] = uVar57;
    auVar15[0xb] = uVar58;
    auVar15[0xc] = SUB41(fVar32,0);
    auVar15[0xd] = uVar59;
    auVar15[0xe] = uVar60;
    auVar15[0xf] = uVar61;
    auVar16[4] = SUB41(fVar39,0);
    auVar16._0_4_ = fVar34;
    auVar16[5] = uVar53;
    auVar16[6] = uVar54;
    auVar16[7] = uVar55;
    auVar16[8] = SUB41(fVar41,0);
    auVar16[9] = uVar56;
    auVar16[10] = uVar57;
    auVar16[0xb] = uVar58;
    auVar16[0xc] = SUB41(fVar32,0);
    auVar16[0xd] = uVar59;
    auVar16[0xe] = uVar60;
    auVar16[0xf] = uVar61;
    auVar76 = NEON_ext(auVar15,auVar16,4,1);
    auVar86 = NEON_ext(auVar23,auVar23,4,1);
    bVar29 = (byte)(-(uint)(fVar63 < 0.0) >> 0x18);
    uVar19 = CONCAT17(bVar29,(uint7)(bVar29 & 0x80) << 0x18) & 0x80ffffffffffffff;
    auVar24[0xf] = bVar29 & 0x80;
    fVar39 = (float)CONCAT13((byte)(uVar19 >> 0x18) ^ auVar76[3],auVar76._0_3_);
    auVar20._0_8_ =
         CONCAT17((byte)(uVar19 >> 0x38) ^ auVar76[7],
                  CONCAT16(auVar76[6],CONCAT15(auVar76[5],CONCAT14(auVar76[4],fVar39))));
    auVar20[8] = SUB41(fVar34,0);
    auVar20[9] = (char)((uint)fVar34 >> 8);
    auVar20[10] = (char)((uint)fVar34 >> 0x10);
    auVar20[0xb] = bVar29 & 0x80 ^ (byte)((uint)fVar34 >> 0x18);
    auVar24._12_3_ = 0;
    auVar24._0_12_ = auVar20;
    param_4[2] = fVar49 + auVar35._8_4_ * fVar66 + auVar20._8_4_ * fVar50;
    param_4[3] = fVar38 + auVar35._12_4_ * fVar66 + auVar24._12_4_ * fVar50;
    *param_4 = fVar42 + auVar35._0_4_ * fVar66 + fVar39 * fVar50;
    param_4[1] = fVar47 + auVar35._4_4_ * fVar66 + (float)((ulong)auVar20._0_8_ >> 0x20) * fVar50;
    fVar42 = fVar42 + auVar44._0_4_ * fVar68 +
                      (float)CONCAT13(bVar52 & 0x80 ^ auVar86[3],auVar86._0_3_) * fVar33;
    fVar47 = fVar47 + auVar44._4_4_ * fVar68 +
                      (float)CONCAT13(bVar52 & 0x80 ^ auVar86[7],auVar86._4_3_) * fVar33;
    fVar49 = fVar49 + auVar44._8_4_ * fVar68 +
                      (float)CONCAT13(bVar52 & 0x80 ^ (byte)((uint)auVar23._0_4_ >> 0x18),
                                      SUB43(auVar23._0_4_,0)) * fVar33;
    fVar33 = fVar38 + auVar44._12_4_ * fVar68 + (float)((bVar52 & 0x80) << 0x18) * fVar33;
  }
  param_5[2] = fVar49;
  param_5[3] = fVar33;
  *param_5 = fVar42;
  param_5[1] = fVar47;
  return;
}


