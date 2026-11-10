/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df83a0; name: FUN_01df83a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df83a0(undefined4 param_1,float param_2,float param_3,long *param_4)

{
  undefined1 auVar1 [12];
  float *pfVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar80;
  undefined1 auVar13 [12];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar22;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  int iVar36;
  int iVar42;
  int iVar43;
  undefined1 auVar37 [16];
  int iVar44;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar45;
  int iVar52;
  undefined1 auVar46 [12];
  int iVar51;
  undefined1 auVar47 [16];
  int iVar53;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar63;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  undefined1 auVar68 [12];
  float fVar73;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar74;
  float fVar76;
  float fVar77;
  undefined1 auVar75 [16];
  float fVar78;
  undefined1 auVar79 [16];
  
  if ((long *)*param_4 != (long *)0x0) {
    pfVar2 = (float *)(**(code **)(*(long *)*param_4 + 0x68))();
    fVar11 = *pfVar2;
    fVar17 = pfVar2[1];
    fVar19 = pfVar2[2];
    fVar21 = pfVar2[3];
    fVar22 = pfVar2[4];
    fVar33 = pfVar2[5];
    fVar34 = pfVar2[6];
    fVar35 = pfVar2[7];
    auVar79._0_4_ = fVar11 * fVar11 + fVar17 * fVar17;
    auVar79._4_4_ = fVar19 * fVar19 + fVar21 * fVar21;
    auVar79._8_4_ = fVar11 * fVar11 + fVar17 * fVar17;
    auVar79._12_4_ = fVar19 * fVar19 + fVar21 * fVar21;
    auVar37 = NEON_ext(auVar79,auVar79,4,1);
    auVar4._0_4_ = auVar37._0_4_ + auVar37._4_4_;
    auVar4._4_4_ = auVar37._8_4_ + auVar37._12_4_;
    auVar4._8_4_ = auVar37._0_4_ + auVar37._4_4_;
    auVar4._12_4_ = auVar37._8_4_ + auVar37._12_4_;
    auVar37 = NEON_frsqrte(auVar4,4);
    auVar54._0_4_ = auVar4._0_4_ * auVar37._0_4_;
    auVar54._4_4_ = auVar4._4_4_ * auVar37._4_4_;
    auVar54._8_4_ = auVar4._8_4_ * auVar37._8_4_;
    auVar54._12_4_ = auVar4._12_4_ * auVar37._12_4_;
    auVar55 = NEON_frsqrts(auVar37,auVar54,4);
    auVar47._0_4_ = auVar37._0_4_ * auVar55._0_4_;
    auVar47._4_4_ = auVar37._4_4_ * auVar55._4_4_;
    auVar47._8_4_ = auVar37._8_4_ * auVar55._8_4_;
    auVar47._12_4_ = auVar37._12_4_ * auVar55._12_4_;
    auVar56._0_4_ = auVar4._0_4_ * auVar47._0_4_;
    auVar56._4_4_ = auVar4._4_4_ * auVar47._4_4_;
    auVar56._8_4_ = auVar4._8_4_ * auVar47._8_4_;
    auVar56._12_4_ = auVar4._12_4_ * auVar47._12_4_;
    iVar36 = -(uint)(auVar4._0_4_ == 0.0);
    iVar42 = -(uint)(auVar4._4_4_ == 0.0);
    iVar43 = -(uint)(auVar4._8_4_ == 0.0);
    iVar44 = -(uint)(auVar4._12_4_ == 0.0);
    auVar37 = NEON_frsqrts(auVar47,auVar56,4);
    fVar11 = fVar11 * auVar47._0_4_ * auVar37._0_4_;
    fVar17 = fVar17 * auVar47._4_4_ * auVar37._4_4_;
    fVar19 = fVar19 * auVar47._8_4_ * auVar37._8_4_;
    fVar21 = fVar21 * auVar47._12_4_ * auVar37._12_4_;
    auVar5._0_4_ = fVar22 * fVar22 + fVar33 * fVar33;
    auVar5._4_4_ = fVar34 * fVar34 + fVar35 * fVar35;
    auVar5._8_4_ = fVar22 * fVar22 + fVar33 * fVar33;
    auVar5._12_4_ = fVar34 * fVar34 + fVar35 * fVar35;
    auVar37 = NEON_ext(auVar5,auVar5,4,1);
    auVar6._0_4_ = auVar37._0_4_ + auVar37._4_4_;
    auVar6._4_4_ = auVar37._8_4_ + auVar37._12_4_;
    auVar6._8_4_ = auVar37._0_4_ + auVar37._4_4_;
    auVar6._12_4_ = auVar37._8_4_ + auVar37._12_4_;
    auVar37 = NEON_frsqrte(auVar6,4);
    auVar59._0_4_ = auVar6._0_4_ * auVar37._0_4_;
    auVar59._4_4_ = auVar6._4_4_ * auVar37._4_4_;
    auVar59._8_4_ = auVar6._8_4_ * auVar37._8_4_;
    auVar59._12_4_ = auVar6._12_4_ * auVar37._12_4_;
    auVar55 = NEON_frsqrts(auVar37,auVar59,4);
    auVar57._0_4_ = auVar37._0_4_ * auVar55._0_4_;
    auVar57._4_4_ = auVar37._4_4_ * auVar55._4_4_;
    auVar57._8_4_ = auVar37._8_4_ * auVar55._8_4_;
    auVar57._12_4_ = auVar37._12_4_ * auVar55._12_4_;
    auVar60._0_4_ = auVar6._0_4_ * auVar57._0_4_;
    auVar60._4_4_ = auVar6._4_4_ * auVar57._4_4_;
    auVar60._8_4_ = auVar6._8_4_ * auVar57._8_4_;
    auVar60._12_4_ = auVar6._12_4_ * auVar57._12_4_;
    iVar45 = -(uint)(auVar6._0_4_ == 0.0);
    iVar51 = -(uint)(auVar6._4_4_ == 0.0);
    iVar52 = -(uint)(auVar6._8_4_ == 0.0);
    iVar53 = -(uint)(auVar6._12_4_ == 0.0);
    auVar37 = NEON_frsqrts(auVar57,auVar60,4);
    fVar22 = fVar22 * auVar57._0_4_ * auVar37._0_4_;
    fVar33 = fVar33 * auVar57._4_4_ * auVar37._4_4_;
    fVar34 = fVar34 * auVar57._8_4_ * auVar37._8_4_;
    fVar35 = fVar35 * auVar57._12_4_ * auVar37._12_4_;
    fVar12 = pfVar2[8];
    fVar18 = pfVar2[9];
    fVar20 = pfVar2[10];
    fVar63 = pfVar2[0xb] * pfVar2[0xb];
    auVar7._0_4_ = fVar12 * fVar12 + fVar18 * fVar18;
    auVar7._4_4_ = fVar20 * fVar20 + fVar63;
    auVar7._8_4_ = fVar12 * fVar12 + fVar18 * fVar18;
    auVar7._12_4_ = fVar20 * fVar20 + fVar63;
    auVar37 = NEON_ext(auVar7,auVar7,4,1);
    auVar8._0_4_ = auVar37._0_4_ + auVar37._4_4_;
    auVar8._4_4_ = auVar37._8_4_ + auVar37._12_4_;
    auVar8._8_4_ = auVar37._0_4_ + auVar37._4_4_;
    auVar8._12_4_ = auVar37._8_4_ + auVar37._12_4_;
    auVar37 = NEON_frsqrte(auVar8,4);
    auVar69._0_4_ = auVar8._0_4_ * auVar37._0_4_;
    auVar69._4_4_ = auVar8._4_4_ * auVar37._4_4_;
    auVar69._8_4_ = auVar8._8_4_ * auVar37._8_4_;
    auVar69._12_4_ = auVar8._12_4_ * auVar37._12_4_;
    auVar55 = NEON_frsqrts(auVar37,auVar69,4);
    auVar64._0_4_ = auVar37._0_4_ * auVar55._0_4_;
    auVar64._4_4_ = auVar37._4_4_ * auVar55._4_4_;
    auVar64._8_4_ = auVar37._8_4_ * auVar55._8_4_;
    auVar64._12_4_ = auVar37._12_4_ * auVar55._12_4_;
    auVar70._0_4_ = auVar8._0_4_ * auVar64._0_4_;
    auVar70._4_4_ = auVar8._4_4_ * auVar64._4_4_;
    auVar70._8_4_ = auVar8._8_4_ * auVar64._8_4_;
    auVar70._12_4_ = auVar8._12_4_ * auVar64._12_4_;
    auVar37 = NEON_frsqrts(auVar64,auVar70,4);
    fVar67 = (float)CONCAT13((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                             CONCAT12((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                      CONCAT11((byte)((uint)fVar11 >> 8) &
                                               ~(byte)((uint)iVar36 >> 8),
                                               SUB41(fVar11,0) & ~(byte)iVar36)));
    auVar68._0_8_ =
         CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                  CONCAT16((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10),
                           CONCAT15((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar42 >> 8),
                                    CONCAT14(SUB41(fVar17,0) & ~(byte)iVar42,fVar67))));
    auVar68[8] = SUB41(fVar19,0) & ~(byte)iVar43;
    auVar68[9] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar43 >> 8);
    auVar68[10] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10);
    auVar68[0xb] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18);
    auVar71[0xc] = SUB41(fVar21,0) & ~(byte)iVar44;
    auVar71._0_12_ = auVar68;
    auVar71[0xd] = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar44 >> 8);
    auVar71[0xe] = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10);
    auVar71[0xf] = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18);
    iVar36 = -(uint)(auVar8._0_4_ == 0.0);
    iVar42 = -(uint)(auVar8._4_4_ == 0.0);
    iVar43 = -(uint)(auVar8._8_4_ == 0.0);
    fVar63 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18),
                             CONCAT12((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10),
                                      CONCAT11((byte)((uint)fVar22 >> 8) &
                                               ~(byte)((uint)iVar45 >> 8),
                                               SUB41(fVar22,0) & ~(byte)iVar45)));
    auVar38._0_8_ =
         CONCAT17((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                  CONCAT16((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10),
                           CONCAT15((byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar51 >> 8),
                                    CONCAT14(SUB41(fVar33,0) & ~(byte)iVar51,fVar63))));
    auVar38[8] = SUB41(fVar34,0) & ~(byte)iVar52;
    auVar38[9] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar52 >> 8);
    auVar38[10] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
    auVar38[0xb] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
    auVar38[0xc] = SUB41(fVar35,0) & ~(byte)iVar53;
    auVar38[0xd] = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar53 >> 8);
    auVar38[0xe] = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10);
    auVar38[0xf] = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18);
    fVar12 = fVar12 * auVar64._0_4_ * auVar37._0_4_;
    fVar18 = fVar18 * auVar64._4_4_ * auVar37._4_4_;
    fVar20 = fVar20 * auVar64._8_4_ * auVar37._8_4_;
    fVar33 = (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                             CONCAT12((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                      CONCAT11((byte)((uint)fVar12 >> 8) &
                                               ~(byte)((uint)iVar36 >> 8),
                                               SUB41(fVar12,0) & ~(byte)iVar36)));
    auVar46._0_8_ =
         CONCAT17((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                  CONCAT16((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10),
                           CONCAT15((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar42 >> 8),
                                    CONCAT14(SUB41(fVar18,0) & ~(byte)iVar42,fVar33))));
    auVar46[8] = SUB41(fVar20,0) & ~(byte)iVar43;
    auVar46[9] = (byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar43 >> 8);
    auVar46[10] = (byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10);
    auVar46[0xb] = (byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18);
    auVar37 = NEON_fmov(0x3f800000,4);
    fVar11 = (float)((ulong)auVar38._0_8_ >> 0x20);
    fVar22 = auVar46._8_4_;
    fVar17 = auVar37._0_4_ + (float)_DAT_03cab3a0 * fVar67 + (float)_DAT_03cac210 * fVar11 +
             (float)_DAT_03cabb00 * fVar22;
    fVar19 = auVar37._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar67 +
             (float)((ulong)_DAT_03cac210 >> 0x20) * fVar11 +
             (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar22;
    fVar21 = auVar37._8_4_ + (float)_UNK_03cab3a8 * fVar67 + (float)_UNK_03cac218 * fVar11 +
             (float)_UNK_03cabb08 * fVar22;
    fVar22 = auVar37._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar67 +
             (float)((ulong)_UNK_03cac218 >> 0x20) * fVar11 +
             (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar22;
    fVar34 = (float)((ulong)auVar46._0_8_ >> 0x20);
    auVar37 = NEON_fmov(0x40800000,4);
    auVar58._0_4_ = SQRT(fVar17) * 0.5 * auVar37._0_4_;
    auVar58._4_4_ = SQRT(fVar19) * 0.5 * auVar37._4_4_;
    auVar58._8_4_ = SQRT(fVar21) * 0.5 * auVar37._8_4_;
    auVar58._12_4_ = SQRT(fVar22) * 0.5 * auVar37._12_4_;
    auVar37 = NEON_frecpe(auVar58,4);
    auVar75 = NEON_ext(auVar38,auVar38,8,1);
    auVar79 = NEON_ext(auVar71,auVar71,8,1);
    auVar55 = NEON_frecps(auVar37,auVar58,4);
    auVar61._0_4_ = auVar37._0_4_ * auVar55._0_4_;
    auVar61._4_4_ = auVar37._4_4_ * auVar55._4_4_;
    auVar61._8_4_ = auVar37._8_4_ * auVar55._8_4_;
    auVar61._12_4_ = auVar37._12_4_ * auVar55._12_4_;
    fVar11 = auVar75._0_4_;
    auVar37 = NEON_frecps(auVar61,auVar58,4);
    fVar35 = auVar61._0_4_ * auVar37._0_4_;
    fVar12 = auVar61._4_4_ * auVar37._4_4_;
    fVar18 = auVar61._8_4_ * auVar37._8_4_;
    fVar20 = auVar61._12_4_ * auVar37._12_4_;
    fVar73 = (float)((ulong)auVar68._0_8_ >> 0x20);
    fVar67 = auVar79._0_4_ + fVar33;
    auVar1._8_4_ = fVar11 + -fVar34;
    auVar1._4_4_ = fVar67;
    fVar74 = (float)((uint)fVar17 ^ ((uint)fVar17 ^ (uint)fVar19) & -(uint)(fVar17 <= fVar19));
    fVar76 = (float)((uint)fVar17 ^ ((uint)fVar17 ^ (uint)fVar19) & -(uint)(fVar17 <= fVar19));
    fVar77 = (float)((uint)fVar17 ^ ((uint)fVar17 ^ (uint)fVar19) & -(uint)(fVar17 <= fVar19));
    fVar78 = (float)((uint)fVar17 ^ ((uint)fVar17 ^ (uint)fVar19) & -(uint)(fVar17 <= fVar19));
    auVar1._0_4_ = (fVar73 + fVar63) * fVar35;
    auVar65._0_8_ = auVar1._0_8_ << 0x20;
    auVar65._8_4_ = fVar67 * fVar35;
    auVar65._12_4_ = (fVar11 + -fVar34) * fVar35;
    auVar66._4_12_ = auVar65._4_12_;
    auVar66._0_4_ = SQRT(fVar17) * 0.5;
    auVar48._0_4_ = (auVar79._0_4_ + fVar33) * fVar18;
    auVar48._4_4_ = (fVar11 + fVar34) * fVar18;
    auVar48._12_4_ = (fVar73 - fVar63) * fVar18;
    auVar39._0_4_ = (fVar11 - fVar34) * fVar20;
    auVar39._4_4_ = (fVar33 - auVar68._8_4_) * fVar20;
    auVar39._8_4_ = (fVar73 - fVar63) * fVar20;
    auVar37._4_4_ = SQRT(fVar19) * 0.5;
    auVar37._0_4_ = (fVar73 + fVar63) * fVar12;
    auVar37._8_4_ = (fVar11 + fVar34) * fVar12;
    auVar37._12_4_ = (fVar33 + -auVar68._8_4_) * fVar12;
    auVar75._4_4_ = -(uint)(fVar17 <= fVar19);
    auVar75._0_4_ = -(uint)(fVar17 <= fVar19);
    auVar75._8_4_ = -(uint)(fVar17 <= fVar19);
    auVar75._12_4_ = -(uint)(fVar17 <= fVar19);
    auVar48._8_4_ = SQRT(fVar21) * 0.5;
    auVar39._12_4_ = SQRT(fVar22) * 0.5;
    auVar55._4_4_ = -(uint)(fVar76 <= fVar21);
    auVar55._0_4_ = -(uint)(fVar74 <= fVar21);
    auVar55._8_4_ = -(uint)(fVar77 <= fVar21);
    auVar55._12_4_ = -(uint)(fVar78 <= fVar21);
    auVar48 = auVar48 ^ (auVar48 ^ auVar66 ^ (auVar66 ^ auVar37) & auVar75) & ~auVar55;
    auVar14._0_4_ =
         -(uint)((float)((uint)fVar74 ^ ((uint)fVar74 ^ (uint)fVar21) & -(uint)(fVar74 <= fVar21))
                <= fVar22);
    auVar14._4_4_ =
         -(uint)((float)((uint)fVar76 ^ ((uint)fVar76 ^ (uint)fVar21) & -(uint)(fVar76 <= fVar21))
                <= fVar22);
    auVar14._8_4_ =
         -(uint)((float)((uint)fVar77 ^ ((uint)fVar77 ^ (uint)fVar21) & -(uint)(fVar77 <= fVar21))
                <= fVar22);
    auVar14._12_4_ =
         -(uint)((float)((uint)fVar78 ^ ((uint)fVar78 ^ (uint)fVar21) & -(uint)(fVar78 <= fVar21))
                <= fVar22);
    auVar48 = auVar48 ^ (auVar48 ^ auVar39) & auVar14;
    fVar11 = auVar48._0_4_;
    auVar24._0_4_ = -fVar11;
    fVar17 = auVar48._4_4_;
    fVar22 = -fVar17;
    fVar19 = auVar48._8_4_;
    auVar23._8_4_ = -fVar19;
    fVar21 = auVar48._12_4_;
    auVar49._4_4_ = fVar19;
    auVar49._0_4_ = fVar19;
    auVar49._8_4_ = fVar19;
    auVar49._12_4_ = fVar19;
    auVar37 = NEON_ext(auVar49,auVar48,0xc,1);
    auVar62._4_4_ = fVar17;
    auVar62._0_4_ = fVar17;
    auVar62._8_4_ = fVar17;
    auVar62._12_4_ = fVar17;
    auVar55 = NEON_ext(auVar62,auVar37,0xc,1);
    fVar33 = (float)_DAT_03cab640;
    fVar34 = (float)((ulong)_DAT_03cab640 >> 0x20);
    fVar35 = (float)_UNK_03cab648;
    fVar12 = (float)((ulong)_UNK_03cab648 >> 0x20);
    auVar23._4_4_ = auVar23._8_4_;
    auVar23._0_4_ = auVar23._8_4_;
    auVar23._12_4_ = auVar23._8_4_;
    auVar24._4_12_ = auVar23._4_12_;
    auVar26._0_8_ = auVar24._0_8_;
    auVar26._8_4_ = fVar22;
    auVar26._12_4_ = auVar23._8_4_;
    auVar25._8_8_ = auVar26._8_8_;
    auVar25._4_4_ = auVar23._8_4_;
    auVar25._0_4_ = auVar24._0_4_;
    auVar27._0_12_ = auVar25._0_12_;
    auVar27._12_4_ = auVar23._8_4_;
    auVar72._0_4_ =
         (float)_DAT_03caa5b0 * fVar21 + fVar11 * fVar33 * 0.0 +
         (float)DAT_03cab620 * auVar55._0_4_ * fVar33 + (float)_DAT_03caad80 * auVar37._0_4_;
    auVar72._4_4_ =
         (float)((ulong)_DAT_03caa5b0 >> 0x20) * fVar21 + fVar17 * fVar34 * 0.0 +
         (float)((ulong)DAT_03cab620 >> 0x20) * auVar55._4_4_ * fVar34 +
         (float)((ulong)_DAT_03caad80 >> 0x20) * auVar37._4_4_;
    auVar72._8_4_ =
         (float)_UNK_03caa5b8 * fVar21 + fVar19 * fVar35 * 0.0 +
         (float)DAT_03cab628 * auVar55._8_4_ * fVar35 + (float)_UNK_03caad88 * auVar37._8_4_;
    auVar72._12_4_ =
         (float)((ulong)_UNK_03caa5b8 >> 0x20) * fVar21 + fVar11 * fVar12 * 0.0 +
         (float)((ulong)DAT_03cab628 >> 0x20) * auVar55._12_4_ * fVar12 +
         (float)((ulong)_UNK_03caad88 >> 0x20) * auVar37._12_4_;
    auVar15._4_4_ = auVar72._8_4_;
    auVar15._0_4_ = auVar72._8_4_;
    auVar15._8_4_ = auVar72._8_4_;
    auVar15._12_4_ = auVar72._8_4_;
    auVar50._4_4_ = auVar72._4_4_;
    auVar50._0_4_ = auVar72._4_4_;
    auVar50._8_4_ = auVar72._4_4_;
    auVar50._12_4_ = auVar72._4_4_;
    auVar37 = NEON_ext(auVar15,auVar72,0xc,1);
    auVar75 = NEON_ext(auVar50,auVar37,0xc,1);
    auVar79 = NEON_ext(auVar27,auVar27,8,1);
    fVar11 = auVar79._0_4_;
    auVar28._4_12_ = auVar27._4_12_;
    auVar28._0_4_ = fVar11;
    auVar30._0_8_ = auVar28._0_8_;
    auVar30._8_4_ = auVar79._8_4_;
    auVar30._12_4_ = auVar23._8_4_;
    auVar29._8_8_ = auVar30._8_8_;
    auVar29._4_4_ = auVar24._0_4_;
    auVar29._0_4_ = fVar11;
    auVar31._0_12_ = auVar29._0_12_;
    auVar31._12_4_ = fVar22;
    auVar55 = NEON_ext(auVar31,auVar79,8,1);
    auVar55 = NEON_ext(auVar55,auVar55,0xc,1);
    fVar11 = (auVar24._0_4_ * auVar72._12_4_ + fVar21 * auVar72._0_4_ * fVar33 +
             auVar55._0_4_ * auVar75._0_4_ * fVar33) - auVar37._0_4_ * fVar11;
    fVar17 = (fVar22 * auVar72._12_4_ + fVar21 * auVar72._4_4_ * fVar34 +
             auVar55._4_4_ * auVar75._4_4_ * fVar34) - auVar37._4_4_ * auVar79._4_4_;
    fVar19 = (auVar23._8_4_ * auVar72._12_4_ + fVar21 * auVar72._8_4_ * fVar35 +
             auVar55._8_4_ * auVar75._8_4_ * fVar35) - auVar37._8_4_ * auVar79._8_4_;
    auVar9._0_4_ = fVar11 * fVar11 + fVar17 * fVar17;
    auVar9._4_4_ = fVar19 * fVar19 + 0.0;
    auVar9._8_4_ = fVar11 * fVar11 + fVar17 * fVar17;
    auVar9._12_4_ = fVar19 * fVar19 + 0.0;
    auVar37 = NEON_ext(auVar9,auVar9,4,1);
    auVar10._0_4_ = auVar37._0_4_ + auVar37._4_4_;
    auVar10._4_4_ = auVar37._8_4_ + auVar37._12_4_;
    auVar10._8_4_ = auVar37._0_4_ + auVar37._4_4_;
    auVar10._12_4_ = auVar37._8_4_ + auVar37._12_4_;
    auVar37 = NEON_frsqrte(auVar10,4);
    auVar40._0_4_ = auVar10._0_4_ * auVar37._0_4_;
    auVar40._4_4_ = auVar10._4_4_ * auVar37._4_4_;
    auVar40._8_4_ = auVar10._8_4_ * auVar37._8_4_;
    auVar40._12_4_ = auVar10._12_4_ * auVar37._12_4_;
    auVar55 = NEON_frsqrts(auVar37,auVar40,4);
    auVar32._0_4_ = auVar37._0_4_ * auVar55._0_4_;
    auVar32._4_4_ = auVar37._4_4_ * auVar55._4_4_;
    auVar32._8_4_ = auVar37._8_4_ * auVar55._8_4_;
    auVar32._12_4_ = auVar37._12_4_ * auVar55._12_4_;
    auVar41._0_4_ = auVar10._0_4_ * auVar32._0_4_;
    auVar41._4_4_ = auVar10._4_4_ * auVar32._4_4_;
    auVar41._8_4_ = auVar10._8_4_ * auVar32._8_4_;
    auVar41._12_4_ = auVar10._12_4_ * auVar32._12_4_;
    iVar36 = -(uint)(auVar10._0_4_ == 0.0);
    iVar42 = -(uint)(auVar10._4_4_ == 0.0);
    iVar43 = -(uint)(auVar10._8_4_ == 0.0);
    iVar44 = -(uint)(auVar10._12_4_ == 0.0);
    auVar37 = NEON_frsqrts(auVar32,auVar41,4);
    fVar11 = auVar32._0_4_ * auVar37._0_4_ * fVar11;
    fVar17 = auVar32._4_4_ * auVar37._4_4_ * fVar17;
    fVar19 = auVar32._8_4_ * auVar37._8_4_ * fVar19;
    fVar21 = auVar32._12_4_ * auVar37._12_4_ * 0.0;
    fVar11 = (float)CONCAT13((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                             CONCAT12((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                      CONCAT11((byte)((uint)fVar11 >> 8) &
                                               ~(byte)((uint)iVar36 >> 8),
                                               SUB41(fVar11,0) & ~(byte)iVar36)));
    auVar13._0_8_ =
         CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                  CONCAT16((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10),
                           CONCAT15((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar42 >> 8),
                                    CONCAT14(SUB41(fVar17,0) & ~(byte)iVar42,fVar11))));
    auVar13[8] = SUB41(fVar19,0) & ~(byte)iVar43;
    auVar13[9] = (byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar43 >> 8);
    auVar13[10] = (byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10);
    auVar13[0xb] = (byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18);
    auVar16[0xc] = SUB41(fVar21,0) & ~(byte)iVar44;
    auVar16._0_12_ = auVar13;
    auVar16[0xd] = (byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar44 >> 8);
    auVar16[0xe] = (byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10);
    auVar16[0xf] = (byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18);
    lVar3 = (**(code **)(*(long *)*param_4 + 0x68))();
    param_2 = param_2 * param_3;
    param_4 = (long *)*param_4;
    fVar80 = *(float *)(lVar3 + 0x30) + fVar11 * param_2;
    register0x00005004 = *(float *)(lVar3 + 0x34) + (float)((ulong)auVar13._0_8_ >> 0x20) * param_2;
    register0x00005008 = *(float *)(lVar3 + 0x38) + auVar13._8_4_ * param_2;
    register0x0000500c = auVar16._12_4_ * param_2 + 0.0;
    param_4[0x1d] = fVar80._8_8_;
    param_4[0x1c] = CONCAT44(param_1,fVar80);
    if (*(char *)((long)param_4 + 0xf4) == '\0') {
      *(undefined1 *)((long)param_4 + 0xf4) = 1;
                    /* WARNING: Could not recover jumptable at 0x01df86f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_4 + 0x78))();
      return;
    }
  }
  return;
}


