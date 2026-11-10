/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014775bc; name: FUN_014775bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014775bc(long param_1)

{
  undefined1 auVar1 [12];
  float *pfVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  int iVar23;
  int iVar28;
  int iVar29;
  undefined1 auVar24 [16];
  int iVar30;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iVar31;
  int iVar45;
  undefined1 auVar32 [12];
  int iVar44;
  undefined1 auVar33 [16];
  int iVar46;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar64;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  undefined1 auVar56 [16];
  undefined1 auVar63 [16];
  undefined1 auVar62 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  undefined1 auVar70 [12];
  float fVar75;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar76;
  float fVar78;
  float fVar79;
  undefined1 auVar77 [16];
  float fVar80;
  undefined1 auVar81 [16];
  
  if ((*(long *)(param_1 + 0xe8) != 0) &&
     (plVar3 = *(long **)(*(long *)(param_1 + 0xe8) + 0x48), plVar3 != (long *)0x0)) {
    pfVar2 = (float *)(**(code **)(*plVar3 + 0x68))(ZEXT816(0),plVar3);
    fVar9 = *pfVar2;
    fVar13 = pfVar2[1];
    fVar15 = pfVar2[2];
    fVar17 = pfVar2[3];
    fVar18 = pfVar2[4];
    fVar20 = pfVar2[5];
    fVar21 = pfVar2[6];
    fVar22 = pfVar2[7];
    auVar81._0_4_ = fVar9 * fVar9 + fVar13 * fVar13;
    auVar81._4_4_ = fVar15 * fVar15 + fVar17 * fVar17;
    auVar81._8_4_ = fVar9 * fVar9 + fVar13 * fVar13;
    auVar81._12_4_ = fVar15 * fVar15 + fVar17 * fVar17;
    auVar24 = NEON_ext(auVar81,auVar81,4,1);
    auVar4._0_4_ = auVar24._0_4_ + auVar24._4_4_;
    auVar4._4_4_ = auVar24._8_4_ + auVar24._12_4_;
    auVar4._8_4_ = auVar24._0_4_ + auVar24._4_4_;
    auVar4._12_4_ = auVar24._8_4_ + auVar24._12_4_;
    auVar24 = NEON_frsqrte(auVar4,4);
    auVar47._0_4_ = auVar4._0_4_ * auVar24._0_4_;
    auVar47._4_4_ = auVar4._4_4_ * auVar24._4_4_;
    auVar47._8_4_ = auVar4._8_4_ * auVar24._8_4_;
    auVar47._12_4_ = auVar4._12_4_ * auVar24._12_4_;
    auVar48 = NEON_frsqrts(auVar24,auVar47,4);
    auVar33._0_4_ = auVar24._0_4_ * auVar48._0_4_;
    auVar33._4_4_ = auVar24._4_4_ * auVar48._4_4_;
    auVar33._8_4_ = auVar24._8_4_ * auVar48._8_4_;
    auVar33._12_4_ = auVar24._12_4_ * auVar48._12_4_;
    auVar49._0_4_ = auVar4._0_4_ * auVar33._0_4_;
    auVar49._4_4_ = auVar4._4_4_ * auVar33._4_4_;
    auVar49._8_4_ = auVar4._8_4_ * auVar33._8_4_;
    auVar49._12_4_ = auVar4._12_4_ * auVar33._12_4_;
    iVar23 = -(uint)(auVar4._0_4_ == 0.0);
    iVar28 = -(uint)(auVar4._4_4_ == 0.0);
    iVar29 = -(uint)(auVar4._8_4_ == 0.0);
    iVar30 = -(uint)(auVar4._12_4_ == 0.0);
    auVar24 = NEON_frsqrts(auVar33,auVar49,4);
    fVar9 = fVar9 * auVar33._0_4_ * auVar24._0_4_;
    fVar13 = fVar13 * auVar33._4_4_ * auVar24._4_4_;
    fVar15 = fVar15 * auVar33._8_4_ * auVar24._8_4_;
    fVar17 = fVar17 * auVar33._12_4_ * auVar24._12_4_;
    auVar5._0_4_ = fVar18 * fVar18 + fVar20 * fVar20;
    auVar5._4_4_ = fVar21 * fVar21 + fVar22 * fVar22;
    auVar5._8_4_ = fVar18 * fVar18 + fVar20 * fVar20;
    auVar5._12_4_ = fVar21 * fVar21 + fVar22 * fVar22;
    auVar24 = NEON_ext(auVar5,auVar5,4,1);
    auVar6._0_4_ = auVar24._0_4_ + auVar24._4_4_;
    auVar6._4_4_ = auVar24._8_4_ + auVar24._12_4_;
    auVar6._8_4_ = auVar24._0_4_ + auVar24._4_4_;
    auVar6._12_4_ = auVar24._8_4_ + auVar24._12_4_;
    auVar24 = NEON_frsqrte(auVar6,4);
    auVar52._0_4_ = auVar6._0_4_ * auVar24._0_4_;
    auVar52._4_4_ = auVar6._4_4_ * auVar24._4_4_;
    auVar52._8_4_ = auVar6._8_4_ * auVar24._8_4_;
    auVar52._12_4_ = auVar6._12_4_ * auVar24._12_4_;
    auVar48 = NEON_frsqrts(auVar24,auVar52,4);
    auVar50._0_4_ = auVar24._0_4_ * auVar48._0_4_;
    auVar50._4_4_ = auVar24._4_4_ * auVar48._4_4_;
    auVar50._8_4_ = auVar24._8_4_ * auVar48._8_4_;
    auVar50._12_4_ = auVar24._12_4_ * auVar48._12_4_;
    auVar53._0_4_ = auVar6._0_4_ * auVar50._0_4_;
    auVar53._4_4_ = auVar6._4_4_ * auVar50._4_4_;
    auVar53._8_4_ = auVar6._8_4_ * auVar50._8_4_;
    auVar53._12_4_ = auVar6._12_4_ * auVar50._12_4_;
    iVar31 = -(uint)(auVar6._0_4_ == 0.0);
    iVar44 = -(uint)(auVar6._4_4_ == 0.0);
    iVar45 = -(uint)(auVar6._8_4_ == 0.0);
    iVar46 = -(uint)(auVar6._12_4_ == 0.0);
    auVar24 = NEON_frsqrts(auVar50,auVar53,4);
    fVar18 = fVar18 * auVar50._0_4_ * auVar24._0_4_;
    fVar20 = fVar20 * auVar50._4_4_ * auVar24._4_4_;
    fVar21 = fVar21 * auVar50._8_4_ * auVar24._8_4_;
    fVar22 = fVar22 * auVar50._12_4_ * auVar24._12_4_;
    fVar10 = pfVar2[8];
    fVar14 = pfVar2[9];
    fVar16 = pfVar2[10];
    fVar64 = pfVar2[0xb] * pfVar2[0xb];
    auVar7._0_4_ = fVar10 * fVar10 + fVar14 * fVar14;
    auVar7._4_4_ = fVar16 * fVar16 + fVar64;
    auVar7._8_4_ = fVar10 * fVar10 + fVar14 * fVar14;
    auVar7._12_4_ = fVar16 * fVar16 + fVar64;
    auVar24 = NEON_ext(auVar7,auVar7,4,1);
    auVar8._0_4_ = auVar24._0_4_ + auVar24._4_4_;
    auVar8._4_4_ = auVar24._8_4_ + auVar24._12_4_;
    auVar8._8_4_ = auVar24._0_4_ + auVar24._4_4_;
    auVar8._12_4_ = auVar24._8_4_ + auVar24._12_4_;
    auVar24 = NEON_frsqrte(auVar8,4);
    auVar71._0_4_ = auVar8._0_4_ * auVar24._0_4_;
    auVar71._4_4_ = auVar8._4_4_ * auVar24._4_4_;
    auVar71._8_4_ = auVar8._8_4_ * auVar24._8_4_;
    auVar71._12_4_ = auVar8._12_4_ * auVar24._12_4_;
    auVar48 = NEON_frsqrts(auVar24,auVar71,4);
    auVar65._0_4_ = auVar24._0_4_ * auVar48._0_4_;
    auVar65._4_4_ = auVar24._4_4_ * auVar48._4_4_;
    auVar65._8_4_ = auVar24._8_4_ * auVar48._8_4_;
    auVar65._12_4_ = auVar24._12_4_ * auVar48._12_4_;
    auVar72._0_4_ = auVar8._0_4_ * auVar65._0_4_;
    auVar72._4_4_ = auVar8._4_4_ * auVar65._4_4_;
    auVar72._8_4_ = auVar8._8_4_ * auVar65._8_4_;
    auVar72._12_4_ = auVar8._12_4_ * auVar65._12_4_;
    auVar24 = NEON_frsqrts(auVar65,auVar72,4);
    fVar69 = (float)CONCAT13((byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                             CONCAT12((byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                                      CONCAT11((byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar23 >> 8)
                                               ,SUB41(fVar9,0) & ~(byte)iVar23)));
    auVar70._0_8_ =
         CONCAT17((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                  CONCAT16((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                           CONCAT15((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar28 >> 8),
                                    CONCAT14(SUB41(fVar13,0) & ~(byte)iVar28,fVar69))));
    auVar70[8] = SUB41(fVar15,0) & ~(byte)iVar29;
    auVar70[9] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar29 >> 8);
    auVar70[10] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
    auVar70[0xb] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
    auVar73[0xc] = SUB41(fVar17,0) & ~(byte)iVar30;
    auVar73._0_12_ = auVar70;
    auVar73[0xd] = (byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar30 >> 8);
    auVar73[0xe] = (byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
    auVar73[0xf] = (byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
    iVar23 = -(uint)(auVar8._0_4_ == 0.0);
    iVar28 = -(uint)(auVar8._4_4_ == 0.0);
    iVar29 = -(uint)(auVar8._8_4_ == 0.0);
    fVar64 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                             CONCAT12((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10),
                                      CONCAT11((byte)((uint)fVar18 >> 8) &
                                               ~(byte)((uint)iVar31 >> 8),
                                               SUB41(fVar18,0) & ~(byte)iVar31)));
    auVar25._0_8_ =
         CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18),
                  CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10),
                           CONCAT15((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar44 >> 8),
                                    CONCAT14(SUB41(fVar20,0) & ~(byte)iVar44,fVar64))));
    auVar25[8] = SUB41(fVar21,0) & ~(byte)iVar45;
    auVar25[9] = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar45 >> 8);
    auVar25[10] = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10);
    auVar25[0xb] = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18);
    auVar25[0xc] = SUB41(fVar22,0) & ~(byte)iVar46;
    auVar25[0xd] = (byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar46 >> 8);
    auVar25[0xe] = (byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
    auVar25[0xf] = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
    fVar10 = fVar10 * auVar65._0_4_ * auVar24._0_4_;
    fVar14 = fVar14 * auVar65._4_4_ * auVar24._4_4_;
    fVar16 = fVar16 * auVar65._8_4_ * auVar24._8_4_;
    fVar20 = (float)CONCAT13((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                             CONCAT12((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                                      CONCAT11((byte)((uint)fVar10 >> 8) &
                                               ~(byte)((uint)iVar23 >> 8),
                                               SUB41(fVar10,0) & ~(byte)iVar23)));
    auVar32._0_8_ =
         CONCAT17((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                  CONCAT16((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                           CONCAT15((byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar28 >> 8),
                                    CONCAT14(SUB41(fVar14,0) & ~(byte)iVar28,fVar20))));
    auVar32[8] = SUB41(fVar16,0) & ~(byte)iVar29;
    auVar32[9] = (byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar29 >> 8);
    auVar32[10] = (byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
    auVar32[0xb] = (byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
    auVar24 = NEON_fmov(0x3f800000,4);
    fVar9 = (float)((ulong)auVar25._0_8_ >> 0x20);
    fVar18 = auVar32._8_4_;
    fVar13 = auVar24._0_4_ + (float)_DAT_03cab3a0 * fVar69 + (float)_DAT_03cac210 * fVar9 +
             (float)_DAT_03cabb00 * fVar18;
    fVar15 = auVar24._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar69 +
             (float)((ulong)_DAT_03cac210 >> 0x20) * fVar9 +
             (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar18;
    fVar17 = auVar24._8_4_ + (float)_UNK_03cab3a8 * fVar69 + (float)_UNK_03cac218 * fVar9 +
             (float)_UNK_03cabb08 * fVar18;
    fVar18 = auVar24._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar69 +
             (float)((ulong)_UNK_03cac218 >> 0x20) * fVar9 +
             (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar18;
    fVar21 = (float)((ulong)auVar32._0_8_ >> 0x20);
    auVar24 = NEON_fmov(0x40800000,4);
    auVar51._0_4_ = SQRT(fVar13) * 0.5 * auVar24._0_4_;
    auVar51._4_4_ = SQRT(fVar15) * 0.5 * auVar24._4_4_;
    auVar51._8_4_ = SQRT(fVar17) * 0.5 * auVar24._8_4_;
    auVar51._12_4_ = SQRT(fVar18) * 0.5 * auVar24._12_4_;
    auVar24 = NEON_frecpe(auVar51,4);
    auVar77 = NEON_ext(auVar25,auVar25,8,1);
    auVar81 = NEON_ext(auVar73,auVar73,8,1);
    auVar48 = NEON_frecps(auVar24,auVar51,4);
    auVar54._0_4_ = auVar24._0_4_ * auVar48._0_4_;
    auVar54._4_4_ = auVar24._4_4_ * auVar48._4_4_;
    auVar54._8_4_ = auVar24._8_4_ * auVar48._8_4_;
    auVar54._12_4_ = auVar24._12_4_ * auVar48._12_4_;
    fVar9 = auVar77._0_4_;
    auVar24 = NEON_frecps(auVar54,auVar51,4);
    fVar22 = auVar54._0_4_ * auVar24._0_4_;
    fVar10 = auVar54._4_4_ * auVar24._4_4_;
    fVar14 = auVar54._8_4_ * auVar24._8_4_;
    fVar16 = auVar54._12_4_ * auVar24._12_4_;
    fVar75 = (float)((ulong)auVar70._0_8_ >> 0x20);
    fVar69 = auVar81._0_4_ + fVar20;
    auVar1._8_4_ = fVar9 + -fVar21;
    auVar1._4_4_ = fVar69;
    fVar76 = (float)((uint)fVar13 ^ ((uint)fVar13 ^ (uint)fVar15) & -(uint)(fVar13 <= fVar15));
    fVar78 = (float)((uint)fVar13 ^ ((uint)fVar13 ^ (uint)fVar15) & -(uint)(fVar13 <= fVar15));
    fVar79 = (float)((uint)fVar13 ^ ((uint)fVar13 ^ (uint)fVar15) & -(uint)(fVar13 <= fVar15));
    fVar80 = (float)((uint)fVar13 ^ ((uint)fVar13 ^ (uint)fVar15) & -(uint)(fVar13 <= fVar15));
    auVar1._0_4_ = (fVar75 + fVar64) * fVar22;
    auVar66._0_8_ = auVar1._0_8_ << 0x20;
    auVar66._8_4_ = fVar69 * fVar22;
    auVar66._12_4_ = (fVar9 + -fVar21) * fVar22;
    auVar67._4_12_ = auVar66._4_12_;
    auVar67._0_4_ = SQRT(fVar13) * 0.5;
    auVar34._0_4_ = (auVar81._0_4_ + fVar20) * fVar14;
    auVar34._4_4_ = (fVar9 + fVar21) * fVar14;
    auVar34._12_4_ = (fVar75 - fVar64) * fVar14;
    auVar26._0_4_ = (fVar9 - fVar21) * fVar16;
    auVar26._4_4_ = (fVar20 - auVar70._8_4_) * fVar16;
    auVar26._8_4_ = (fVar75 - fVar64) * fVar16;
    auVar24._4_4_ = SQRT(fVar15) * 0.5;
    auVar24._0_4_ = (fVar75 + fVar64) * fVar10;
    auVar24._8_4_ = (fVar9 + fVar21) * fVar10;
    auVar24._12_4_ = (fVar20 + -auVar70._8_4_) * fVar10;
    auVar77._4_4_ = -(uint)(fVar13 <= fVar15);
    auVar77._0_4_ = -(uint)(fVar13 <= fVar15);
    auVar77._8_4_ = -(uint)(fVar13 <= fVar15);
    auVar77._12_4_ = -(uint)(fVar13 <= fVar15);
    auVar34._8_4_ = SQRT(fVar17) * 0.5;
    auVar26._12_4_ = SQRT(fVar18) * 0.5;
    auVar48._4_4_ = -(uint)(fVar78 <= fVar17);
    auVar48._0_4_ = -(uint)(fVar76 <= fVar17);
    auVar48._8_4_ = -(uint)(fVar79 <= fVar17);
    auVar48._12_4_ = -(uint)(fVar80 <= fVar17);
    auVar34 = auVar34 ^ (auVar34 ^ auVar67 ^ (auVar67 ^ auVar24) & auVar77) & ~auVar48;
    auVar11._0_4_ =
         -(uint)((float)((uint)fVar76 ^ ((uint)fVar76 ^ (uint)fVar17) & -(uint)(fVar76 <= fVar17))
                <= fVar18);
    auVar11._4_4_ =
         -(uint)((float)((uint)fVar78 ^ ((uint)fVar78 ^ (uint)fVar17) & -(uint)(fVar78 <= fVar17))
                <= fVar18);
    auVar11._8_4_ =
         -(uint)((float)((uint)fVar79 ^ ((uint)fVar79 ^ (uint)fVar17) & -(uint)(fVar79 <= fVar17))
                <= fVar18);
    auVar11._12_4_ =
         -(uint)((float)((uint)fVar80 ^ ((uint)fVar80 ^ (uint)fVar17) & -(uint)(fVar80 <= fVar17))
                <= fVar18);
    auVar34 = auVar34 ^ (auVar34 ^ auVar26) & auVar11;
    fVar9 = *(float *)(param_1 + 0x1f0);
    fVar13 = *(float *)(param_1 + 500);
    fVar15 = *(float *)(param_1 + 0x1f8);
    fVar18 = auVar34._0_4_;
    auVar36._0_4_ = -fVar18;
    fVar20 = auVar34._4_4_;
    fVar21 = auVar34._8_4_;
    auVar35._8_4_ = -fVar21;
    fVar22 = auVar34._12_4_;
    auVar55._4_4_ = fVar15;
    auVar55._0_4_ = fVar15;
    auVar55._8_4_ = fVar15;
    auVar55._12_4_ = fVar15;
    auVar74._4_4_ = fVar20;
    auVar74._0_4_ = fVar20;
    auVar74._8_4_ = fVar20;
    auVar74._12_4_ = fVar20;
    auVar56._4_12_ = auVar55._4_12_;
    auVar56._0_4_ = fVar9;
    auVar58._0_8_ = auVar56._0_8_;
    auVar58._8_4_ = fVar13;
    auVar58._12_4_ = fVar15;
    auVar57._8_8_ = auVar58._8_8_;
    auVar57._4_4_ = fVar15;
    auVar57._0_4_ = fVar9;
    auVar59._0_12_ = auVar57._0_12_;
    auVar59._12_4_ = fVar15;
    auVar68._4_4_ = fVar21;
    auVar68._0_4_ = fVar21;
    auVar68._8_4_ = fVar21;
    auVar68._12_4_ = fVar21;
    auVar48 = NEON_ext(auVar68,auVar34,0xc,1);
    auVar81 = NEON_ext(auVar59,auVar59,8,1);
    fVar14 = (float)((ulong)_UNK_03cab648 >> 0x20);
    fVar10 = (float)((ulong)_DAT_03cab640 >> 0x20);
    auVar35._4_4_ = auVar35._8_4_;
    auVar35._0_4_ = auVar35._8_4_;
    auVar35._12_4_ = auVar35._8_4_;
    auVar36._4_12_ = auVar35._4_12_;
    auVar38._0_8_ = auVar36._0_8_;
    auVar38._8_4_ = -fVar20;
    auVar38._12_4_ = auVar35._8_4_;
    auVar37._8_8_ = auVar38._8_8_;
    auVar37._4_4_ = auVar35._8_4_;
    auVar37._0_4_ = auVar36._0_4_;
    auVar39._0_12_ = auVar37._0_12_;
    auVar39._12_4_ = auVar35._8_4_;
    fVar17 = auVar81._0_4_;
    auVar60._4_12_ = auVar59._4_12_;
    auVar60._0_4_ = fVar17;
    auVar62._0_8_ = auVar60._0_8_;
    auVar62._8_4_ = auVar81._8_4_;
    auVar62._12_4_ = fVar15;
    auVar61._8_8_ = auVar62._8_8_;
    auVar61._4_4_ = fVar9;
    auVar61._0_4_ = fVar17;
    auVar63._0_12_ = auVar61._0_12_;
    auVar63._12_4_ = fVar13;
    auVar77 = NEON_ext(auVar74,auVar48,0xc,1);
    auVar24 = NEON_ext(auVar63,auVar81,8,1);
    auVar24 = NEON_ext(auVar24,auVar24,0xc,1);
    auVar27._0_4_ =
         (fVar9 * fVar22 + fVar18 * (float)_DAT_03cab640 * 0.0 +
         auVar24._0_4_ * auVar77._0_4_ * (float)_DAT_03cab640) - auVar48._0_4_ * fVar17;
    auVar27._4_4_ =
         (fVar13 * fVar22 + fVar20 * fVar10 * 0.0 + auVar24._4_4_ * auVar77._4_4_ * fVar10) -
         auVar48._4_4_ * auVar81._4_4_;
    auVar27._8_4_ =
         (fVar15 * fVar22 + fVar21 * (float)_UNK_03cab648 * 0.0 +
         auVar24._8_4_ * auVar77._8_4_ * (float)_UNK_03cab648) - auVar48._8_4_ * auVar81._8_4_;
    auVar27._12_4_ =
         (fVar22 * 0.0 + fVar9 * fVar18 * fVar14 + auVar24._12_4_ * auVar77._12_4_ * fVar14) -
         auVar48._12_4_ * auVar81._12_4_;
    auVar12._4_4_ = auVar27._8_4_;
    auVar12._0_4_ = auVar27._8_4_;
    auVar12._8_4_ = auVar27._8_4_;
    auVar12._12_4_ = auVar27._8_4_;
    auVar48 = NEON_ext(auVar39,auVar39,8,1);
    auVar24 = NEON_ext(auVar12,auVar27,0xc,1);
    auVar19._4_4_ = auVar27._4_4_;
    auVar19._0_4_ = auVar27._4_4_;
    auVar19._8_4_ = auVar27._4_4_;
    auVar19._12_4_ = auVar27._4_4_;
    auVar40._4_12_ = auVar39._4_12_;
    auVar40._0_4_ = auVar48._0_4_;
    auVar42._0_8_ = auVar40._0_8_;
    auVar42._8_4_ = auVar48._8_4_;
    auVar42._12_4_ = auVar35._8_4_;
    auVar41._8_8_ = auVar42._8_8_;
    auVar41._4_4_ = auVar36._0_4_;
    auVar41._0_4_ = auVar48._0_4_;
    auVar43._0_12_ = auVar41._0_12_;
    auVar43._12_4_ = -fVar20;
    NEON_ext(auVar19,auVar24,0xc,1);
    auVar24 = NEON_ext(auVar43,auVar48,8,1);
    NEON_ext(auVar24,auVar24,0xc,1);
    (**(code **)(*plVar3 + 0x68))(plVar3);
  }
  return;
}


