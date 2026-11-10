/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0156da00; name: FUN_0156da00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0156da00(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar24;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int iVar33;
  int iVar38;
  int iVar39;
  undefined1 auVar34 [16];
  int iVar40;
  undefined1 auVar35 [16];
  byte bVar37;
  undefined1 auVar36 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined2 uVar46;
  uint uVar47;
  byte bVar68;
  undefined1 auVar48 [12];
  byte bVar67;
  float fVar69;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar62 [16];
  undefined1 auVar66 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar76;
  float fVar77;
  float fVar80;
  float fVar81;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar87;
  float fVar89;
  undefined1 auVar88 [16];
  float fVar90;
  float fVar91;
  uint uVar92;
  byte bVar96;
  uint uVar93;
  uint uVar94;
  undefined1 auVar95 [16];
  char cVar97;
  undefined1 auVar98 [12];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar111;
  undefined1 uVar112;
  undefined1 uVar113;
  undefined1 uVar114;
  undefined1 uVar115;
  undefined1 uVar116;
  undefined1 uVar117;
  undefined1 uVar118;
  undefined1 uVar119;
  undefined1 uVar120;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  float fVar123;
  float fVar124;
  float fVar125;
  
  if ((long *)*param_1 != (long *)0x0) {
    pfVar6 = (float *)(**(code **)(*(long *)*param_1 + 0x68))();
    fVar14 = *pfVar6;
    fVar21 = pfVar6[1];
    fVar22 = pfVar6[2];
    fVar23 = pfVar6[3];
    fVar24 = pfVar6[4];
    fVar30 = pfVar6[5];
    fVar31 = pfVar6[6];
    fVar32 = pfVar6[7];
    auVar121._0_4_ = fVar14 * fVar14 + fVar21 * fVar21;
    auVar121._4_4_ = fVar22 * fVar22 + fVar23 * fVar23;
    auVar121._8_4_ = fVar14 * fVar14 + fVar21 * fVar21;
    auVar121._12_4_ = fVar22 * fVar22 + fVar23 * fVar23;
    auVar34 = NEON_ext(auVar121,auVar121,4,1);
    auVar121 = NEON_fmov(0x3f800000,4);
    auVar7._0_4_ = auVar34._0_4_ + auVar34._4_4_;
    auVar7._4_4_ = auVar34._8_4_ + auVar34._12_4_;
    auVar7._8_4_ = auVar34._0_4_ + auVar34._4_4_;
    auVar7._12_4_ = auVar34._8_4_ + auVar34._12_4_;
    auVar34 = NEON_frsqrte(auVar7,4);
    auVar49._0_4_ = auVar7._0_4_ * auVar34._0_4_;
    auVar49._4_4_ = auVar7._4_4_ * auVar34._4_4_;
    auVar49._8_4_ = auVar7._8_4_ * auVar34._8_4_;
    auVar49._12_4_ = auVar7._12_4_ * auVar34._12_4_;
    auVar50 = NEON_frsqrts(auVar34,auVar49,4);
    fVar124 = auVar121._8_4_;
    fVar125 = auVar121._12_4_;
    fVar123 = auVar121._4_4_;
    auVar41._0_4_ = auVar34._0_4_ * auVar50._0_4_;
    auVar41._4_4_ = auVar34._4_4_ * auVar50._4_4_;
    auVar41._8_4_ = auVar34._8_4_ * auVar50._8_4_;
    auVar41._12_4_ = auVar34._12_4_ * auVar50._12_4_;
    auVar51._0_4_ = auVar7._0_4_ * auVar41._0_4_;
    auVar51._4_4_ = auVar7._4_4_ * auVar41._4_4_;
    auVar51._8_4_ = auVar7._8_4_ * auVar41._8_4_;
    auVar51._12_4_ = auVar7._12_4_ * auVar41._12_4_;
    auVar34 = NEON_frsqrts(auVar41,auVar51,4);
    fVar14 = fVar14 * auVar41._0_4_ * auVar34._0_4_;
    fVar21 = fVar21 * auVar41._4_4_ * auVar34._4_4_;
    fVar22 = fVar22 * auVar41._8_4_ * auVar34._8_4_;
    fVar23 = fVar23 * auVar41._12_4_ * auVar34._12_4_;
    iVar33 = -(uint)(auVar7._0_4_ == 0.0);
    iVar38 = -(uint)(auVar7._4_4_ == 0.0);
    iVar39 = -(uint)(auVar7._8_4_ == 0.0);
    iVar40 = -(uint)(auVar7._12_4_ == 0.0);
    auVar8._0_4_ = fVar24 * fVar24 + fVar30 * fVar30;
    auVar8._4_4_ = fVar31 * fVar31 + fVar32 * fVar32;
    auVar8._8_4_ = fVar24 * fVar24 + fVar30 * fVar30;
    auVar8._12_4_ = fVar31 * fVar31 + fVar32 * fVar32;
    auVar34 = NEON_ext(auVar8,auVar8,4,1);
    fVar80 = (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                             CONCAT12((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                                      CONCAT11((byte)((uint)fVar14 >> 8) &
                                               ~(byte)((uint)iVar33 >> 8),
                                               SUB41(fVar14,0) & ~(byte)iVar33)));
    auVar98._0_8_ =
         CONCAT17((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                  CONCAT16((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                           CONCAT15((byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar38 >> 8),
                                    CONCAT14(SUB41(fVar21,0) & ~(byte)iVar38,fVar80))));
    auVar98[8] = SUB41(fVar22,0) & ~(byte)iVar39;
    auVar98[9] = (byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar39 >> 8);
    auVar98[10] = (byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10);
    auVar98[0xb] = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18);
    auVar99[0xc] = SUB41(fVar23,0) & ~(byte)iVar40;
    auVar99._0_12_ = auVar98;
    auVar99[0xd] = (byte)((uint)fVar23 >> 8) & ~(byte)((uint)iVar40 >> 8);
    auVar99[0xe] = (byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10);
    auVar99[0xf] = (byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18);
    auVar9._0_4_ = auVar34._0_4_ + auVar34._4_4_;
    auVar9._4_4_ = auVar34._8_4_ + auVar34._12_4_;
    auVar9._8_4_ = auVar34._0_4_ + auVar34._4_4_;
    auVar9._12_4_ = auVar34._8_4_ + auVar34._12_4_;
    auVar34 = NEON_frsqrte(auVar9,4);
    auVar104 = NEON_ext(auVar99,auVar99,8,1);
    auVar74._0_4_ = auVar9._0_4_ * auVar34._0_4_;
    auVar74._4_4_ = auVar9._4_4_ * auVar34._4_4_;
    auVar74._8_4_ = auVar9._8_4_ * auVar34._8_4_;
    auVar74._12_4_ = auVar9._12_4_ * auVar34._12_4_;
    auVar50 = NEON_frsqrts(auVar34,auVar74,4);
    auVar52._0_4_ = auVar34._0_4_ * auVar50._0_4_;
    auVar52._4_4_ = auVar34._4_4_ * auVar50._4_4_;
    auVar52._8_4_ = auVar34._8_4_ * auVar50._8_4_;
    auVar52._12_4_ = auVar34._12_4_ * auVar50._12_4_;
    auVar75._0_4_ = auVar9._0_4_ * auVar52._0_4_;
    auVar75._4_4_ = auVar9._4_4_ * auVar52._4_4_;
    auVar75._8_4_ = auVar9._8_4_ * auVar52._8_4_;
    auVar75._12_4_ = auVar9._12_4_ * auVar52._12_4_;
    iVar33 = -(uint)(auVar9._0_4_ == 0.0);
    iVar38 = -(uint)(auVar9._4_4_ == 0.0);
    iVar39 = -(uint)(auVar9._8_4_ == 0.0);
    iVar40 = -(uint)(auVar9._12_4_ == 0.0);
    auVar34 = NEON_frsqrts(auVar52,auVar75,4);
    fVar24 = fVar24 * auVar52._0_4_ * auVar34._0_4_;
    fVar30 = fVar30 * auVar52._4_4_ * auVar34._4_4_;
    fVar31 = fVar31 * auVar52._8_4_ * auVar34._8_4_;
    fVar32 = fVar32 * auVar52._12_4_ * auVar34._12_4_;
    fVar14 = pfVar6[8];
    fVar21 = pfVar6[9];
    fVar22 = pfVar6[10];
    fVar76 = pfVar6[0xb] * pfVar6[0xb];
    fVar91 = (float)CONCAT13((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                             CONCAT12((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                                      CONCAT11((byte)((uint)fVar24 >> 8) &
                                               ~(byte)((uint)iVar33 >> 8),
                                               SUB41(fVar24,0) & ~(byte)iVar33)));
    auVar42._0_8_ =
         CONCAT17((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                  CONCAT16((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                           CONCAT15((byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar38 >> 8),
                                    CONCAT14(SUB41(fVar30,0) & ~(byte)iVar38,fVar91))));
    auVar42[8] = SUB41(fVar31,0) & ~(byte)iVar39;
    auVar42[9] = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar39 >> 8);
    auVar42[10] = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10);
    auVar42[0xb] = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18);
    auVar42[0xc] = SUB41(fVar32,0) & ~(byte)iVar40;
    auVar42[0xd] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar40 >> 8);
    auVar42[0xe] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10);
    auVar42[0xf] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18);
    auVar34 = NEON_ext(auVar42,auVar42,8,1);
    fVar23 = auVar34._0_4_;
    auVar10._0_4_ = fVar14 * fVar14 + fVar21 * fVar21;
    auVar10._4_4_ = fVar22 * fVar22 + fVar76;
    auVar10._8_4_ = fVar14 * fVar14 + fVar21 * fVar21;
    auVar10._12_4_ = fVar22 * fVar22 + fVar76;
    auVar34 = NEON_ext(auVar10,auVar10,4,1);
    auVar11._0_4_ = auVar34._0_4_ + auVar34._4_4_;
    auVar11._4_4_ = auVar34._8_4_ + auVar34._12_4_;
    auVar11._8_4_ = auVar34._0_4_ + auVar34._4_4_;
    auVar11._12_4_ = auVar34._8_4_ + auVar34._12_4_;
    auVar34 = NEON_frsqrte(auVar11,4);
    iVar33 = -(uint)(auVar11._0_4_ == 0.0);
    iVar38 = -(uint)(auVar11._4_4_ == 0.0);
    iVar39 = -(uint)(auVar11._8_4_ == 0.0);
    auVar83._0_4_ = auVar11._0_4_ * auVar34._0_4_;
    auVar83._4_4_ = auVar11._4_4_ * auVar34._4_4_;
    auVar83._8_4_ = auVar11._8_4_ * auVar34._8_4_;
    auVar83._12_4_ = auVar11._12_4_ * auVar34._12_4_;
    auVar50 = NEON_frsqrts(auVar34,auVar83,4);
    auVar78._0_4_ = auVar34._0_4_ * auVar50._0_4_;
    auVar78._4_4_ = auVar34._4_4_ * auVar50._4_4_;
    auVar78._8_4_ = auVar34._8_4_ * auVar50._8_4_;
    auVar78._12_4_ = auVar34._12_4_ * auVar50._12_4_;
    auVar84._0_4_ = auVar11._0_4_ * auVar78._0_4_;
    auVar84._4_4_ = auVar11._4_4_ * auVar78._4_4_;
    auVar84._8_4_ = auVar11._8_4_ * auVar78._8_4_;
    auVar84._12_4_ = auVar11._12_4_ * auVar78._12_4_;
    auVar50 = NEON_frsqrts(auVar78,auVar84,4);
    auVar34 = NEON_fmov(0x40800000,4);
    fVar14 = fVar14 * auVar78._0_4_ * auVar50._0_4_;
    fVar21 = fVar21 * auVar78._4_4_ * auVar50._4_4_;
    fVar22 = fVar22 * auVar78._8_4_ * auVar50._8_4_;
    uVar46 = CONCAT11((byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar33 >> 8),
                      SUB41(fVar14,0) & ~(byte)iVar33);
    bVar67 = (byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10);
    bVar68 = (byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18);
    fVar76 = (float)CONCAT13(bVar68,CONCAT12(bVar67,uVar46));
    auVar48._0_8_ =
         CONCAT17((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                  CONCAT16((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                           CONCAT15((byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar38 >> 8),
                                    CONCAT14(SUB41(fVar21,0) & ~(byte)iVar38,fVar76))));
    auVar48[8] = SUB41(fVar22,0) & ~(byte)iVar39;
    auVar48[9] = (byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar39 >> 8);
    auVar48[10] = (byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10);
    auVar48[0xb] = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18);
    fVar111 = (float)((ulong)auVar48._0_8_ >> 0x20);
    fVar24 = (float)((ulong)_DAT_03cab3a0 >> 0x20);
    fVar31 = (float)((ulong)_UNK_03cab3a8 >> 0x20);
    fVar32 = auVar121._0_4_;
    fVar30 = (float)((ulong)auVar42._0_8_ >> 0x20);
    fVar77 = auVar48._8_4_;
    fVar14 = fVar32 + (float)_DAT_03cab3a0 * fVar80 + (float)_DAT_03cac210 * fVar30 +
             (float)_DAT_03cabb00 * fVar77;
    fVar21 = fVar123 + fVar24 * fVar80 + (float)((ulong)_DAT_03cac210 >> 0x20) * fVar30 +
             (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar77;
    fVar22 = fVar124 + (float)_UNK_03cab3a8 * fVar80 + (float)_UNK_03cac218 * fVar30 +
             (float)_UNK_03cabb08 * fVar77;
    fVar30 = fVar125 + fVar31 * fVar80 + (float)((ulong)_UNK_03cac218 >> 0x20) * fVar30 +
             (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar77;
    auVar79._0_4_ = SQRT(fVar14) * 0.5 * auVar34._0_4_;
    auVar79._4_4_ = SQRT(fVar21) * 0.5 * auVar34._4_4_;
    auVar79._8_4_ = SQRT(fVar22) * 0.5 * auVar34._8_4_;
    auVar79._12_4_ = SQRT(fVar30) * 0.5 * auVar34._12_4_;
    auVar34 = NEON_frecpe(auVar79,4);
    auVar50 = NEON_frecps(auVar34,auVar79,4);
    auVar85._0_4_ = auVar34._0_4_ * auVar50._0_4_;
    auVar85._4_4_ = auVar34._4_4_ * auVar50._4_4_;
    auVar85._8_4_ = auVar34._8_4_ * auVar50._8_4_;
    auVar85._12_4_ = auVar34._12_4_ * auVar50._12_4_;
    auVar34 = NEON_frecps(auVar85,auVar79,4);
    fVar102 = auVar104._0_4_ + (float)CONCAT13(bVar68,CONCAT12(bVar67,uVar46));
    auVar4._8_4_ = fVar23 + -fVar111;
    auVar4._4_4_ = fVar102;
    fVar77 = auVar85._0_4_ * auVar34._0_4_;
    fVar80 = auVar85._4_4_ * auVar34._4_4_;
    fVar81 = auVar85._8_4_ * auVar34._8_4_;
    fVar82 = auVar85._12_4_ * auVar34._12_4_;
    fVar69 = (float)((ulong)auVar98._0_8_ >> 0x20);
    auVar106._4_4_ = fVar21;
    auVar106._0_4_ = fVar21;
    auVar106._8_4_ = fVar21;
    auVar106._12_4_ = fVar21;
    auVar103._4_4_ = fVar14;
    auVar103._0_4_ = fVar14;
    auVar103._8_4_ = fVar14;
    auVar103._12_4_ = fVar14;
    iVar33 = -(uint)(fVar14 <= fVar21);
    uVar112 = (undefined1)((uint)iVar33 >> 8);
    uVar113 = (undefined1)((uint)iVar33 >> 0x10);
    uVar114 = (undefined1)((uint)iVar33 >> 0x18);
    iVar38 = -(uint)(fVar14 <= fVar21);
    uVar115 = (undefined1)((uint)iVar38 >> 8);
    uVar116 = (undefined1)((uint)iVar38 >> 0x10);
    uVar117 = (undefined1)((uint)iVar38 >> 0x18);
    iVar39 = -(uint)(fVar14 <= fVar21);
    uVar118 = (undefined1)((uint)iVar39 >> 8);
    uVar119 = (undefined1)((uint)iVar39 >> 0x10);
    uVar120 = (undefined1)((uint)iVar39 >> 0x18);
    auVar66[4] = (char)iVar33;
    auVar66._0_4_ = -(uint)(fVar14 <= fVar21);
    auVar66[5] = uVar112;
    auVar66[6] = uVar113;
    auVar66[7] = uVar114;
    auVar66[8] = (char)iVar38;
    auVar66[9] = uVar115;
    auVar66[10] = uVar116;
    auVar66[0xb] = uVar117;
    auVar66[0xc] = (char)iVar39;
    auVar66[0xd] = uVar118;
    auVar66[0xe] = uVar119;
    auVar66[0xf] = uVar120;
    auVar103 = auVar103 ^ (auVar103 ^ auVar106) & auVar66;
    auVar4._0_4_ = (fVar69 + fVar91) * fVar77;
    auVar100._0_8_ = auVar4._0_8_ << 0x20;
    auVar100._8_4_ = fVar102 * fVar77;
    auVar100._12_4_ = (fVar23 + -fVar111) * fVar77;
    auVar101._4_12_ = auVar100._4_12_;
    auVar101._0_4_ = SQRT(fVar14) * 0.5;
    auVar105._4_4_ = fVar22;
    auVar105._0_4_ = fVar22;
    auVar105._8_4_ = fVar22;
    auVar105._12_4_ = fVar22;
    auVar53._0_4_ = (auVar104._0_4_ + fVar76) * fVar81;
    auVar53._4_4_ = (fVar23 + fVar111) * fVar81;
    auVar53._12_4_ = (fVar69 - fVar91) * fVar81;
    auVar43._0_4_ = (fVar23 - fVar111) * fVar82;
    auVar43._4_4_ = (fVar76 - auVar98._8_4_) * fVar82;
    auVar43._8_4_ = (fVar69 - fVar91) * fVar82;
    auVar34._4_4_ = SQRT(fVar21) * 0.5;
    auVar34._0_4_ = (fVar69 + fVar91) * fVar80;
    auVar34._8_4_ = (fVar23 + fVar111) * fVar80;
    auVar34._12_4_ = (fVar76 + -auVar98._8_4_) * fVar80;
    auVar1[4] = (char)iVar33;
    auVar1._0_4_ = -(uint)(fVar14 <= fVar21);
    auVar1[5] = uVar112;
    auVar1[6] = uVar113;
    auVar1[7] = uVar114;
    auVar1[8] = (char)iVar38;
    auVar1[9] = uVar115;
    auVar1[10] = uVar116;
    auVar1[0xb] = uVar117;
    auVar1[0xc] = (char)iVar39;
    auVar1[0xd] = uVar118;
    auVar1[0xe] = uVar119;
    auVar1[0xf] = uVar120;
    iVar33 = -(uint)(auVar103._0_4_ <= fVar22);
    iVar38 = -(uint)(auVar103._4_4_ <= fVar22);
    iVar39 = -(uint)(auVar103._8_4_ <= fVar22);
    iVar40 = -(uint)(auVar103._12_4_ <= fVar22);
    auVar53._8_4_ = SQRT(fVar22) * 0.5;
    auVar50._4_4_ = iVar38;
    auVar50._0_4_ = iVar33;
    auVar50._8_4_ = iVar39;
    auVar50._12_4_ = iVar40;
    auVar103 = auVar103 ^ (auVar103 ^ auVar105) & auVar50;
    auVar43._12_4_ = SQRT(fVar30) * 0.5;
    auVar104._4_4_ = iVar38;
    auVar104._0_4_ = iVar33;
    auVar104._8_4_ = iVar39;
    auVar104._12_4_ = iVar40;
    auVar53 = auVar53 ^ (auVar53 ^ auVar101 ^ (auVar101 ^ auVar34) & auVar1) & ~auVar104;
    auVar50 = NEON_fmov(0xbf800000,4);
    auVar25._0_8_ = CONCAT44(-(uint)(auVar103._4_4_ <= fVar30),-(uint)(auVar103._0_4_ <= fVar30));
    auVar25._8_4_ = -(uint)(auVar103._8_4_ <= fVar30);
    auVar25._12_4_ = -(uint)(auVar103._12_4_ <= fVar30);
    auVar88._8_8_ = auVar25._8_8_;
    auVar88._0_8_ = auVar25._0_8_;
    auVar53 = auVar53 ^ (auVar53 ^ auVar43) & auVar88;
    fVar87 = auVar53._0_4_;
    fVar89 = auVar53._4_4_;
    fVar111 = auVar53._8_4_;
    fVar90 = auVar53._12_4_;
    fVar30 = fVar89 * fVar90 + fVar89 * fVar90;
    fVar91 = fVar111 * fVar90 + fVar111 * fVar90;
    fVar76 = fVar90 * 0.0 + fVar90 * 0.0;
    fVar23 = fVar111 * fVar111 + fVar111 * fVar111;
    auVar35._8_4_ = 0xc0490fdb;
    auVar35._0_8_ = 0xc0490fdbc0490fdb;
    auVar35._12_4_ = 0xc0490fdb;
    fVar14 = fVar87 * fVar111 + fVar87 * fVar111;
    fVar21 = fVar87 * fVar89 + fVar87 * fVar89;
    fVar22 = (fVar32 - (fVar89 * fVar89 + fVar89 * fVar89)) - fVar23;
    fVar77 = (fVar87 * fVar90 + fVar87 * fVar90) - (fVar89 * fVar111 + fVar89 * fVar111);
    fVar80 = fVar30 - fVar14;
    fVar81 = fVar91 - fVar21;
    fVar82 = fVar76 - 0.0;
    auVar44._0_4_ = ABS(fVar81 / fVar22);
    auVar44._4_4_ = ABS(fVar81 / fVar22);
    auVar44._8_4_ = ABS(fVar81 / fVar22);
    auVar44._12_4_ = ABS(fVar81 / fVar22);
    auVar34 = NEON_frecpe(auVar44,4);
    auVar104 = NEON_frecps(auVar34,auVar44,4);
    fVar30 = fVar30 + fVar14;
    fVar91 = fVar91 + fVar21;
    fVar76 = fVar76 + 0.0;
    auVar86._0_4_ = auVar34._0_4_ * auVar104._0_4_;
    auVar86._4_4_ = auVar34._4_4_ * auVar104._4_4_;
    auVar86._8_4_ = auVar34._8_4_ * auVar104._8_4_;
    auVar86._12_4_ = auVar34._12_4_ * auVar104._12_4_;
    NEON_frecps(auVar86,auVar44,4);
    auVar15._8_4_ = 0x40490fdb;
    auVar15._0_8_ = 0x40490fdb40490fdb;
    auVar15._12_4_ = 0x40490fdb;
    auVar108._8_8_ = auVar15._8_8_;
    auVar108._0_8_ = 0x40490fdb40490fdb;
    auVar122._8_8_ = auVar35._8_8_;
    auVar122._0_8_ = 0xc0490fdbc0490fdb;
    auVar16._0_4_ = fVar32 - fVar77 * fVar77;
    auVar16._4_4_ = fVar123 - fVar80 * fVar80;
    auVar16._8_4_ = fVar124 - fVar81 * fVar81;
    auVar16._12_4_ = fVar125 - fVar82 * fVar82;
    auVar34 = NEON_fmax(auVar16,ZEXT816(0),4);
    auVar34 = NEON_fmin(auVar34,auVar121,4);
    fVar21 = SQRT(auVar34._0_4_);
    cVar97 = (char)((uint)fVar21 >> 0x18);
    auVar17._0_4_ = ABS(fVar77 / fVar21);
    auVar17._4_4_ =
         ABS(fVar30 / ((fVar123 - (fVar87 * fVar87 + fVar87 * fVar87)) -
                      (fVar89 * fVar89 + fVar89 * fVar89)));
    auVar17._8_4_ = ABS(fVar91 / ((fVar124 - (fVar87 * fVar87 + fVar87 * fVar87)) - fVar23));
    auVar17._12_4_ = ABS(fVar76 / 0.0);
    auVar54._0_4_ = -(uint)(auVar17._0_4_ <= 2.4142137);
    auVar54._4_4_ = 0;
    auVar54._8_4_ = -(uint)(auVar17._8_4_ <= 2.4142137);
    auVar54._12_4_ = -(uint)(auVar17._12_4_ <= 2.4142137);
    fVar14 = auVar50._0_4_;
    fVar22 = (float)((uint)fVar14 ^ ((uint)fVar14 ^ (uint)fVar32) & -(uint)(0.0 <= fVar77 / fVar21))
    ;
    auVar50 = NEON_frecpe(auVar17,4);
    auVar34 = NEON_frecps(auVar50,auVar17,4);
    auVar95._0_4_ = auVar50._0_4_ * auVar34._0_4_;
    auVar95._4_4_ = auVar50._4_4_ * auVar34._4_4_;
    auVar95._8_4_ = auVar50._8_4_ * auVar34._8_4_;
    auVar95._12_4_ = auVar50._12_4_ * auVar34._12_4_;
    auVar34 = NEON_frecps(auVar95,auVar17,4);
    fVar23 = auVar95._0_4_ * auVar34._0_4_;
    uVar93 = -(uint)(auVar17._0_4_ <= 0.41421354);
    auVar2[8] = 0xdb;
    auVar2._0_8_ = 0xbfc90fdbbfc90fdb;
    auVar2[9] = 0xf;
    auVar2[10] = 0xc9;
    auVar2[0xb] = 0xbf;
    auVar2[0xc] = 0xdb;
    auVar2[0xd] = 0xf;
    auVar2[0xe] = 0xc9;
    auVar2[0xf] = 0xbf;
    auVar3[8] = 0xdb;
    auVar3._0_8_ = 0x3f490fdb3f490fdb;
    auVar3[9] = 0xf;
    auVar3[10] = 0x49;
    auVar3[0xb] = 0x3f;
    auVar3[0xc] = 0xdb;
    auVar3[0xd] = 0xf;
    auVar3[0xe] = 0x49;
    auVar3[0xf] = 0x3f;
    auVar55[8] = 0xdb;
    auVar55._0_8_ = 0xbfc90fdbbfc90fdb;
    auVar55[9] = 0xf;
    auVar55[10] = 0xc9;
    auVar55[0xb] = 0xbf;
    auVar55[0xc] = 0xdb;
    auVar55[0xd] = 0xf;
    auVar55[0xe] = 0xc9;
    auVar55[0xf] = 0xbf;
    auVar55 = auVar55 ^ (auVar2 ^ auVar3) & auVar54;
    fVar14 = (float)((uint)auVar17._0_4_ ^
                    ((uint)auVar17._0_4_ ^
                    (uint)fVar23 ^
                    ((uint)fVar23 ^ (uint)((auVar17._0_4_ + fVar14) / (auVar17._0_4_ + fVar32))) &
                    auVar54._0_4_) & ~uVar93);
    fVar23 = fVar14 * fVar14;
    auVar56._0_8_ = CONCAT44((int)fVar30 >> 0x1f,(int)fVar77 >> 0x1f);
    auVar56._8_4_ = (int)fVar91 >> 0x1f;
    auVar56._12_4_ = (int)fVar76 >> 0x1f;
    auVar107._8_8_ = auVar56._8_8_;
    auVar107._0_8_ = auVar56._0_8_;
    iVar33 = (int)cVar97 >> 7;
    auVar108 = auVar108 ^ (auVar108 ^ auVar122) & auVar107;
    bVar67 = (byte)((uint)iVar33 >> 8);
    bVar68 = (byte)((uint)iVar33 >> 0x10);
    bVar37 = cVar97 >> 7;
    fVar14 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)-fVar22) & ~auVar54._0_4_) *
             ((float)CONCAT13(auVar55[3] & ~(byte)(uVar93 >> 0x18),
                              CONCAT12(auVar55[2] & ~(byte)(uVar93 >> 0x10),
                                       CONCAT11(auVar55[1] & ~(byte)(uVar93 >> 8),
                                                auVar55[0] & ~(byte)uVar93))) +
             (fVar32 + fVar23 * (fVar23 * (fVar23 * (fVar23 * (fVar23 * (fVar23 * 0.07692308 +
                                                                        -0.09090909) + 0.11111111) +
                                                    -0.14285715) + 0.2) + -0.33333334)) * fVar14) +
             (float)CONCAT13(auVar108[3] & bVar37,
                             CONCAT12(auVar108[2] & bVar68,
                                      CONCAT11(auVar108[1] & bVar67,auVar108[0] & (byte)iVar33)));
    uVar92 = -(uint)(fVar77 == -INFINITY);
    bVar96 = ~(byte)(uVar92 >> 0x18);
    uVar93 = CONCAT13(bVar96,CONCAT12(~(byte)(uVar92 >> 0x10),
                                      CONCAT11(~(byte)(uVar92 >> 8),~(byte)uVar92)));
    uVar47 = auVar108._0_4_ ^ (auVar108._0_4_ ^ 0xc016cbe4) & ~uVar93;
    uVar93 = (uint)fVar14 ^ ((uint)fVar14 ^ 0xbfc90fdb) & ~uVar93;
    uVar92 = CONCAT13((byte)((int)fVar77 >> 0x1f) & bVar96 & 0x80 |
                      (byte)((uVar92 & 0xbf490fdb) >> 0x18),(int3)(uVar92 & 0xbf490fdb));
    iVar38 = -(uint)(fVar77 == INFINITY);
    uVar94 = CONCAT13(~(byte)((uint)iVar38 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar38 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar38 >> 8),~(byte)iVar38)));
    uVar93 = uVar93 ^ (uVar93 ^ 0x3fc90fdb) & ~uVar94;
    iVar38 = -(uint)(fVar21 == -INFINITY);
    uVar93 = uVar93 ^ (uVar93 ^ uVar47 ^ (uVar47 ^ 0x4016cbe4) & ~uVar94) &
                      ~CONCAT13(~(byte)((uint)iVar38 >> 0x18),
                                CONCAT12(~(byte)((uint)iVar38 >> 0x10),
                                         CONCAT11(~(byte)((uint)iVar38 >> 8),~(byte)iVar38)));
    iVar38 = -(uint)(fVar21 == INFINITY);
    uVar93 = uVar93 ^ (uVar93 ^ uVar92 ^ (uVar92 ^ 0x3f490fdb) & ~uVar94) &
                      ~CONCAT13(~(byte)((uint)iVar38 >> 0x18),
                                CONCAT12(~(byte)((uint)iVar38 >> 0x10),
                                         CONCAT11(~(byte)((uint)iVar38 >> 8),~(byte)iVar38)));
    uVar47 = -(uint)(fVar77 == -0.0);
    bVar96 = (byte)(uVar47 >> 0x18);
    uVar92 = CONCAT13(~bVar96,CONCAT12(~(byte)(uVar47 >> 0x10),
                                       CONCAT11(~(byte)(uVar47 >> 8),~(byte)uVar47))) & 0x40490fdb;
    uVar47 = uVar47 & 0xc0490fdb;
    iVar38 = -(uint)(fVar77 == 0.0);
    auVar12._0_4_ = fVar87 * fVar87 + fVar89 * fVar89;
    auVar12._4_4_ = fVar111 * fVar111 + fVar90 * fVar90;
    auVar12._8_4_ = fVar87 * fVar87 + fVar89 * fVar89;
    auVar12._12_4_ = fVar111 * fVar111 + fVar90 * fVar90;
    uVar93 = uVar93 ^ (uVar93 ^ CONCAT13(((byte)(uVar92 >> 0x18) | (byte)(uVar47 >> 0x18)) & bVar37
                                         | bVar96 & ~bVar37 & 0x80,
                                         CONCAT12(((byte)(uVar92 >> 0x10) | (byte)(uVar47 >> 0x10))
                                                  & bVar68,CONCAT11(((byte)(uVar92 >> 8) |
                                                                    (byte)(uVar47 >> 8)) & bVar67,
                                                                    ((byte)uVar92 | (byte)uVar47) &
                                                                    (byte)iVar33)))) &
                      ~CONCAT13(~(byte)((uint)iVar38 >> 0x18),
                                CONCAT12(~(byte)((uint)iVar38 >> 0x10),
                                         CONCAT11(~(byte)((uint)iVar38 >> 8),~(byte)iVar38)));
    auVar34 = NEON_ext(auVar12,auVar12,4,1);
    fVar30 = -(float)(uVar93 ^ (uVar93 ^ -(uint)(fVar77 < 0.0) & 0x80000000 ^ 0x3fc90fdb) &
                               -(uint)(ABS(ABS(fVar77) - (auVar34._0_4_ + auVar34._4_4_)) <=
                                      1.1920929e-07)) * 0.5;
    auVar34 = NEON_scvtf(ZEXT416((uint)(int)((float)(-(uint)(0.0 <= fVar30) & 0x80000000 ^
                                                    0xbf000000) + fVar30 * 0.15915494)) << 0x20,4);
    fVar14 = 0.0 - auVar34._0_4_ * 6.2831855;
    fVar21 = fVar30 - auVar34._4_4_ * 6.2831855;
    fVar22 = 0.0 - auVar34._8_4_ * 6.2831855;
    fVar23 = 0.0 - auVar34._12_4_ * 6.2831855;
    fVar14 = (float)((uint)fVar14 ^
                    ((uint)fVar14 ^ (uint)(-3.1415927 - fVar14)) & -(uint)(fVar14 < -1.5707964));
    fVar21 = (float)((uint)fVar21 ^
                    ((uint)fVar21 ^ (uint)(-3.1415927 - fVar21)) & -(uint)(fVar21 < -1.5707964));
    fVar22 = (float)((uint)fVar22 ^
                    ((uint)fVar22 ^ (uint)(-3.1415927 - fVar22)) & -(uint)(fVar22 < -1.5707964));
    fVar23 = (float)((uint)fVar23 ^
                    ((uint)fVar23 ^ (uint)(-3.1415927 - fVar23)) & -(uint)(fVar23 < -1.5707964));
    fVar76 = fVar30 + 1.5707964;
    fVar14 = (float)((uint)fVar14 ^
                    ((uint)fVar14 ^ (uint)(3.1415927 - fVar14)) & -(uint)(1.5707964 < fVar14));
    fVar21 = (float)((uint)fVar21 ^
                    ((uint)fVar21 ^ (uint)(3.1415927 - fVar21)) & -(uint)(1.5707964 < fVar21));
    fVar22 = (float)((uint)fVar22 ^
                    ((uint)fVar22 ^ (uint)(3.1415927 - fVar22)) & -(uint)(1.5707964 < fVar22));
    fVar23 = (float)((uint)fVar23 ^
                    ((uint)fVar23 ^ (uint)(3.1415927 - fVar23)) & -(uint)(1.5707964 < fVar23));
    iVar33 = -(uint)(ABS(fVar76) == INFINITY);
    auVar45[4] = ~(byte)iVar33;
    auVar45._0_4_ = 0xffffffff;
    auVar45[5] = ~(byte)((uint)iVar33 >> 8);
    auVar45[6] = ~(byte)((uint)iVar33 >> 0x10);
    auVar45[7] = ~(byte)((uint)iVar33 >> 0x18);
    auVar45[8] = 0xff;
    auVar45[9] = 0xff;
    auVar45[10] = 0xff;
    auVar45[0xb] = 0xff;
    auVar45[0xc] = 0xff;
    auVar45[0xd] = 0xff;
    auVar45[0xe] = 0xff;
    auVar45[0xf] = 0xff;
    auVar34 = NEON_scvtf(ZEXT416((uint)(int)((float)(-(uint)(0.0 <= fVar76) & 0x80000000 ^
                                                    0xbf000000) + fVar76 * 0.15915494)) << 0x20,4);
    fVar91 = 1.5707964 - auVar34._0_4_ * 6.2831855;
    fVar76 = fVar76 - auVar34._4_4_ * 6.2831855;
    fVar77 = 1.5707964 - auVar34._8_4_ * 6.2831855;
    fVar80 = 1.5707964 - auVar34._12_4_ * 6.2831855;
    fVar91 = (float)((uint)fVar91 ^
                    ((uint)fVar91 ^ (uint)(-3.1415927 - fVar91)) & -(uint)(fVar91 < -1.5707964));
    fVar76 = (float)((uint)fVar76 ^
                    ((uint)fVar76 ^ (uint)(-3.1415927 - fVar76)) & -(uint)(fVar76 < -1.5707964));
    fVar77 = (float)((uint)fVar77 ^
                    ((uint)fVar77 ^ (uint)(-3.1415927 - fVar77)) & -(uint)(fVar77 < -1.5707964));
    fVar80 = (float)((uint)fVar80 ^
                    ((uint)fVar80 ^ (uint)(-3.1415927 - fVar80)) & -(uint)(fVar80 < -1.5707964));
    fVar91 = (float)((uint)fVar91 ^
                    ((uint)fVar91 ^ (uint)(3.1415927 - fVar91)) & -(uint)(1.5707964 < fVar91));
    fVar76 = (float)((uint)fVar76 ^
                    ((uint)fVar76 ^ (uint)(3.1415927 - fVar76)) & -(uint)(1.5707964 < fVar76));
    fVar77 = (float)((uint)fVar77 ^
                    ((uint)fVar77 ^ (uint)(3.1415927 - fVar77)) & -(uint)(1.5707964 < fVar77));
    fVar80 = (float)((uint)fVar80 ^
                    ((uint)fVar80 ^ (uint)(3.1415927 - fVar80)) & -(uint)(1.5707964 < fVar80));
    fVar81 = fVar14 * fVar14;
    fVar69 = fVar21 * fVar21;
    fVar70 = fVar22 * fVar22;
    fVar72 = fVar23 * fVar23;
    fVar82 = fVar91 * fVar91;
    fVar102 = fVar76 * fVar76;
    fVar71 = fVar77 * fVar77;
    fVar73 = fVar80 * fVar80;
    auVar18._0_4_ =
         fVar14 * (fVar32 + fVar81 * (fVar81 * (fVar81 * (fVar81 * (fVar81 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
    auVar18._4_4_ =
         fVar21 * (fVar123 +
                  fVar69 * (fVar69 * (fVar69 * (fVar69 * (fVar69 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar18._8_4_ =
         fVar22 * (fVar124 +
                  fVar70 * (fVar70 * (fVar70 * (fVar70 * (fVar70 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar18._12_4_ =
         fVar23 * (fVar125 +
                  fVar72 * (fVar72 * (fVar72 * (fVar72 * (fVar72 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar27._8_4_ = 0x7fc00000;
    auVar27._0_8_ = 0x7fc000007fc00000;
    auVar27._12_4_ = 0x7fc00000;
    auVar36._0_4_ =
         fVar91 * (fVar32 + fVar82 * (fVar82 * (fVar82 * (fVar82 * (fVar82 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
    auVar36._4_4_ =
         fVar76 * (fVar123 +
                  fVar102 * (fVar102 * (fVar102 * (fVar102 * (fVar102 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                       0.008333334) + -0.16666667));
    auVar36._8_4_ =
         fVar77 * (fVar124 +
                  fVar71 * (fVar71 * (fVar71 * (fVar71 * (fVar71 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar36._12_4_ =
         fVar80 * (fVar125 +
                  fVar73 * (fVar73 * (fVar73 * (fVar73 * (fVar73 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar36 = auVar36 ^ (auVar36 ^ auVar27) & ~auVar45;
    iVar38 = -(uint)(fVar30 == 0.0);
    iVar33 = -(uint)(ABS(fVar30) == INFINITY);
    auVar26[4] = ~(byte)iVar33;
    auVar26._0_4_ = 0xffffffff;
    auVar26[5] = ~(byte)((uint)iVar33 >> 8);
    auVar26[6] = ~(byte)((uint)iVar33 >> 0x10);
    auVar26[7] = ~(byte)((uint)iVar33 >> 0x18);
    auVar26[8] = 0xff;
    auVar26[9] = 0xff;
    auVar26[10] = 0xff;
    auVar26[0xb] = 0xff;
    auVar26[0xc] = 0xff;
    auVar26[0xd] = 0xff;
    auVar26[0xe] = 0xff;
    auVar26[0xf] = 0xff;
    auVar18 = auVar18 ^ (auVar18 ^ auVar27) & ~auVar26;
    auVar27 = auVar27 ^ (auVar27 ^
                        auVar36 ^ (auVar36 ^ auVar121) &
                                  ~(ZEXT416(CONCAT13(~(byte)((uint)iVar38 >> 0x18),
                                                     CONCAT12(~(byte)((uint)iVar38 >> 0x10),
                                                              CONCAT11(~(byte)((uint)iVar38 >> 8),
                                                                       ~(byte)iVar38)))) << 0x20)) &
                        auVar26;
    fVar91 = auVar27._0_4_;
    fVar76 = auVar27._4_4_;
    fVar22 = auVar18._4_4_;
    fVar14 = auVar18._0_4_;
    fVar77 = auVar27._8_4_;
    fVar30 = auVar18._8_4_;
    auVar5._4_4_ = fVar111;
    auVar5._0_4_ = fVar111;
    auVar5._8_4_ = fVar111;
    auVar5._12_4_ = fVar111;
    fVar21 = fVar77 * fVar91 * fVar22 + fVar30 * fVar76 * fVar14 * (float)_DAT_03cab3a0;
    fVar23 = fVar30 * fVar91 * fVar76 + fVar77 * fVar22 * fVar14 * fVar24;
    fVar24 = fVar77 * fVar14 * fVar76 + fVar30 * fVar22 * fVar91 * (float)_UNK_03cab3a8;
    fVar30 = fVar77 * fVar91 * fVar76 + fVar30 * fVar22 * fVar14 * fVar31;
    auVar28._4_4_ = fVar89;
    auVar28._0_4_ = fVar89;
    auVar28._8_4_ = fVar89;
    auVar28._12_4_ = fVar89;
    auVar57._4_4_ = fVar24;
    auVar57._0_4_ = fVar24;
    auVar57._8_4_ = fVar24;
    auVar57._12_4_ = fVar24;
    auVar104 = NEON_ext(auVar5,auVar53,0xc,1);
    auVar34 = NEON_ext(auVar28,auVar104,0xc,1);
    auVar58._4_12_ = auVar57._4_12_;
    auVar58._0_4_ = fVar21;
    auVar60._0_8_ = auVar58._0_8_;
    auVar60._8_4_ = fVar23;
    auVar60._12_4_ = fVar24;
    auVar59._8_8_ = auVar60._8_8_;
    auVar59._4_4_ = fVar24;
    auVar59._0_4_ = fVar21;
    auVar61._0_12_ = auVar59._0_12_;
    auVar61._12_4_ = fVar24;
    fVar22 = (float)((ulong)_DAT_03cab640 >> 0x20);
    fVar31 = (float)((ulong)_UNK_03cab648 >> 0x20);
    auVar50 = NEON_ext(auVar61,auVar61,8,1);
    fVar14 = auVar50._0_4_;
    auVar62._4_12_ = auVar61._4_12_;
    auVar62._0_4_ = fVar14;
    auVar64._0_8_ = auVar62._0_8_;
    auVar64._8_4_ = auVar50._8_4_;
    auVar64._12_4_ = fVar24;
    auVar63._8_8_ = auVar64._8_8_;
    auVar63._4_4_ = fVar21;
    auVar63._0_4_ = fVar14;
    auVar65._0_12_ = auVar63._0_12_;
    auVar65._12_4_ = fVar23;
    auVar66 = NEON_ext(auVar65,auVar50,8,1);
    auVar66 = NEON_ext(auVar66,auVar66,0xc,1);
    fVar91 = (fVar21 * fVar90 + fVar30 * fVar87 * (float)_DAT_03cab640 +
             auVar66._0_4_ * auVar34._0_4_ * (float)_DAT_03cab640) - auVar104._0_4_ * fVar14;
    fVar76 = (fVar23 * fVar90 + fVar30 * fVar89 * fVar22 + auVar66._4_4_ * auVar34._4_4_ * fVar22) -
             auVar104._4_4_ * auVar50._4_4_;
    fVar111 = (fVar24 * fVar90 + fVar30 * fVar111 * (float)_UNK_03cab648 +
              auVar66._8_4_ * auVar34._8_4_ * (float)_UNK_03cab648) - auVar104._8_4_ * auVar50._8_4_
    ;
    fVar77 = (fVar30 * fVar90 + fVar21 * fVar87 * fVar31 + auVar66._12_4_ * auVar34._12_4_ * fVar31)
             - auVar104._12_4_ * auVar50._12_4_;
    fVar22 = fVar76 * fVar77 + fVar76 * fVar77;
    fVar23 = fVar111 * fVar77 + fVar111 * fVar77;
    fVar24 = fVar77 * 0.0 + fVar77 * 0.0;
    fVar21 = fVar111 * fVar111 + fVar111 * fVar111;
    fVar30 = fVar91 * fVar111 + fVar91 * fVar111;
    fVar31 = fVar91 * fVar76 + fVar91 * fVar76;
    fVar14 = (fVar32 - (fVar76 * fVar76 + fVar76 * fVar76)) - fVar21;
    fVar80 = (fVar91 * fVar77 + fVar91 * fVar77) - (fVar76 * fVar111 + fVar76 * fVar111);
    fVar81 = fVar22 - fVar30;
    fVar82 = fVar23 - fVar31;
    fVar69 = fVar24 - 0.0;
    auVar19._0_4_ = ABS(fVar82 / fVar14);
    auVar19._4_4_ = ABS(fVar82 / fVar14);
    auVar19._8_4_ = ABS(fVar82 / fVar14);
    auVar19._12_4_ = ABS(fVar82 / fVar14);
    auVar50 = NEON_frecpe(auVar19,4);
    auVar34 = NEON_frecps(auVar50,auVar19,4);
    auVar109._0_4_ = auVar50._0_4_ * auVar34._0_4_;
    auVar109._4_4_ = auVar50._4_4_ * auVar34._4_4_;
    auVar109._8_4_ = auVar50._8_4_ * auVar34._8_4_;
    auVar109._12_4_ = auVar50._12_4_ * auVar34._12_4_;
    NEON_frecps(auVar109,auVar19,4);
    auVar29._0_4_ = fVar32 - fVar80 * fVar80;
    auVar29._4_4_ = fVar123 - fVar81 * fVar81;
    auVar29._8_4_ = fVar124 - fVar82 * fVar82;
    auVar29._12_4_ = fVar125 - fVar69 * fVar69;
    auVar34 = NEON_fmax(auVar29,ZEXT816(0),4);
    auVar34 = NEON_fmin(auVar34,auVar121,4);
    auVar20._0_4_ = ABS(fVar80 / SQRT(auVar34._0_4_));
    auVar20._4_4_ =
         ABS((fVar22 + fVar30) /
             ((fVar123 - (fVar91 * fVar91 + fVar91 * fVar91)) - (fVar76 * fVar76 + fVar76 * fVar76))
            );
    auVar20._8_4_ =
         ABS((fVar23 + fVar31) / ((fVar124 - (fVar91 * fVar91 + fVar91 * fVar91)) - fVar21));
    auVar20._12_4_ = ABS((fVar24 + 0.0) / 0.0);
    auVar50 = NEON_frecpe(auVar20,4);
    auVar34 = NEON_frecps(auVar50,auVar20,4);
    auVar110._0_4_ = auVar50._0_4_ * auVar34._0_4_;
    auVar110._4_4_ = auVar50._4_4_ * auVar34._4_4_;
    auVar110._8_4_ = auVar50._8_4_ * auVar34._8_4_;
    auVar110._12_4_ = auVar50._12_4_ * auVar34._12_4_;
    NEON_frecps(auVar110,auVar20,4);
    auVar13._0_4_ = fVar91 * fVar91 + fVar76 * fVar76;
    auVar13._4_4_ = fVar111 * fVar111 + fVar77 * fVar77;
    auVar13._8_4_ = fVar91 * fVar91 + fVar76 * fVar76;
    auVar13._12_4_ = fVar111 * fVar111 + fVar77 * fVar77;
    NEON_ext(auVar13,auVar13,4,1);
  }
  return;
}


