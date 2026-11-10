/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324f2e0; name: FUN_0324f2e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0324f2e0(float *param_1,undefined1 (*param_2) [12],undefined1 (*param_3) [12],
                 undefined1 (*param_4) [12])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  float fVar4;
  float fVar7;
  float fVar8;
  undefined1 auVar5 [16];
  float fVar9;
  undefined1 auVar6 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  float fVar20;
  undefined1 auVar16 [12];
  int iVar19;
  undefined1 auVar17 [16];
  int iVar21;
  undefined1 auVar18 [16];
  int iVar22;
  int iVar26;
  int iVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  uint uVar41;
  undefined1 auVar42 [12];
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  float fVar72;
  
  fVar12 = (float)*(undefined8 *)(*param_2 + 8);
  fVar13 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  fVar10 = (float)*(undefined8 *)*param_2;
  fVar11 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
  fVar34 = (float)*(undefined8 *)(*param_3 + 8);
  fVar35 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  fVar32 = (float)*(undefined8 *)*param_3;
  fVar33 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
  fVar38 = (float)*(undefined8 *)(*param_4 + 8);
  fVar39 = (float)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20);
  fVar36 = (float)*(undefined8 *)*param_4;
  fVar37 = (float)((ulong)*(undefined8 *)*param_4 >> 0x20);
  auVar5._12_4_ = fVar13;
  auVar5._0_12_ = *param_2;
  auVar23._12_4_ = fVar35;
  auVar23._0_12_ = *param_3;
  auVar5 = NEON_fmin(auVar5,auVar23,4);
  auVar17._12_4_ = fVar13;
  auVar17._0_12_ = *param_2;
  auVar44._12_4_ = fVar35;
  auVar44._0_12_ = *param_3;
  auVar17 = NEON_fmax(auVar17,auVar44,4);
  auVar43._12_4_ = fVar39;
  auVar43._0_12_ = *param_4;
  auVar23 = NEON_fmin(auVar5,auVar43,4);
  fVar4 = *param_1;
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[4];
  fVar14 = param_1[5];
  fVar20 = param_1[6];
  auVar53._12_4_ = fVar39;
  auVar53._0_12_ = *param_4;
  auVar5 = NEON_fmax(auVar17,auVar53,4);
  iVar22 = -(uint)(auVar23._0_4_ <= fVar9);
  iVar26 = -(uint)(auVar23._4_4_ <= fVar14);
  iVar27 = -(uint)(auVar23._8_4_ <= fVar20);
  iVar15 = -(uint)(fVar4 <= auVar5._0_4_);
  iVar19 = -(uint)(fVar7 <= auVar5._4_4_);
  iVar21 = -(uint)(fVar8 <= auVar5._8_4_);
  if (CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar19 >> 0x18) &
               (byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar15 >> 0x18) &
               (byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar21 >> 0x18),
               CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar19 >> 0x10) &
                        (byte)((uint)iVar22 >> 0x10) & (byte)((uint)iVar15 >> 0x10) &
                        (byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar21 >> 0x10),
                        CONCAT11((byte)((uint)iVar26 >> 8) & (byte)((uint)iVar19 >> 8) &
                                 (byte)((uint)iVar22 >> 8) & (byte)((uint)iVar15 >> 8) &
                                 (byte)((uint)iVar27 >> 8) & (byte)((uint)iVar21 >> 8),
                                 (byte)iVar26 & (byte)iVar19 & (byte)iVar22 & (byte)iVar15 &
                                 (byte)iVar27 & (byte)iVar21))) != 0) {
    auVar18._0_4_ = fVar32 - fVar10;
    auVar18._4_4_ = fVar33 - fVar11;
    auVar18._8_4_ = fVar34 - fVar12;
    auVar18._12_4_ = fVar35 - fVar13;
    auVar24._0_4_ = fVar36 - fVar32;
    auVar24._4_4_ = fVar37 - fVar33;
    auVar24._8_4_ = fVar38 - fVar34;
    auVar24._12_4_ = fVar39 - fVar35;
    fVar28 = fVar10 - fVar36;
    fVar29 = fVar11 - fVar37;
    fVar30 = fVar12 - fVar38;
    fVar31 = fVar13 - fVar39;
    lVar3 = 0;
    fVar40 = (fVar4 + fVar9) * 0.5;
    fVar47 = (fVar7 + fVar14) * 0.5;
    fVar48 = (fVar8 + fVar20) * 0.5;
    fVar49 = (param_1[3] + param_1[7]) * 0.5;
    fVar4 = (fVar9 - fVar4) * 0.5;
    fVar7 = (fVar14 - fVar7) * 0.5;
    fVar8 = (fVar20 - fVar8) * 0.5;
    fVar9 = (param_1[7] - param_1[3]) * 0.5;
    auVar5 = NEON_ext(auVar18,auVar18,4,1);
    auVar17 = NEON_ext(auVar24,auVar24,4,1);
    auVar59._4_4_ = fVar29;
    auVar59._0_4_ = fVar28;
    auVar59._8_4_ = fVar30;
    auVar59._12_4_ = fVar31;
    auVar70._4_4_ = fVar29;
    auVar70._0_4_ = fVar28;
    auVar70._8_4_ = fVar30;
    auVar70._12_4_ = fVar31;
    auVar23 = NEON_ext(auVar59,auVar70,4,1);
    fVar10 = fVar10 - fVar40;
    fVar11 = fVar11 - fVar47;
    fVar12 = fVar12 - fVar48;
    fVar13 = fVar13 - fVar49;
    fVar32 = fVar32 - fVar40;
    fVar33 = fVar33 - fVar47;
    fVar34 = fVar34 - fVar48;
    fVar35 = fVar35 - fVar49;
    fVar36 = fVar36 - fVar40;
    fVar37 = fVar37 - fVar47;
    fVar38 = fVar38 - fVar48;
    fVar39 = fVar39 - fVar49;
    while( true ) {
      auVar44 = *(undefined1 (*) [16])(PTR_DAT_047d19b0 + lVar3 + 0x200);
      auVar43 = NEON_ext(auVar44,auVar44,8,1);
      uVar55 = NEON_ext(auVar44._0_8_,auVar43._0_8_,4,1);
      fVar14 = auVar44._0_4_;
      fVar20 = auVar44._4_4_;
      fVar40 = auVar44._8_4_;
      fVar47 = auVar44._12_4_;
      fVar48 = (float)uVar55;
      fVar49 = (float)((ulong)uVar55 >> 0x20);
      auVar50._0_4_ = auVar5._0_4_ * fVar14 - auVar18._0_4_ * fVar48;
      auVar50._4_4_ = auVar5._4_4_ * fVar20 - auVar18._4_4_ * fVar49;
      auVar50._8_4_ = auVar18._0_4_ * fVar40 - auVar18._8_4_ * fVar14;
      auVar50._12_4_ = auVar18._4_4_ * fVar47 - auVar18._12_4_ * fVar20;
      auVar44 = NEON_ext(auVar50,auVar50,4,1);
      auVar60._0_4_ = auVar17._0_4_ * fVar14 - auVar24._0_4_ * fVar48;
      auVar60._4_4_ = auVar17._4_4_ * fVar20 - auVar24._4_4_ * fVar49;
      auVar60._8_4_ = auVar24._0_4_ * fVar40 - auVar24._8_4_ * fVar14;
      auVar60._12_4_ = auVar24._4_4_ * fVar47 - auVar24._12_4_ * fVar20;
      auVar43 = NEON_ext(auVar60,auVar60,4,1);
      auVar56._0_4_ = auVar23._0_4_ * fVar14 - fVar28 * fVar48;
      auVar56._4_4_ = auVar23._4_4_ * fVar20 - fVar29 * fVar49;
      auVar56._8_4_ = fVar28 * fVar40 - fVar30 * fVar14;
      auVar56._12_4_ = fVar29 * fVar47 - fVar31 * fVar20;
      auVar53 = NEON_ext(auVar56,auVar56,4,1);
      fVar14 = auVar44._0_4_;
      auVar57._0_4_ = fVar10 * fVar14;
      fVar20 = auVar44._4_4_;
      auVar57._4_4_ = fVar11 * fVar20;
      auVar57._8_4_ = fVar12 * auVar50._0_4_;
      auVar57._12_4_ = fVar13 * 0.0;
      fVar40 = auVar43._0_4_;
      auVar61._0_4_ = fVar10 * fVar40;
      fVar47 = auVar43._4_4_;
      auVar61._4_4_ = fVar11 * fVar47;
      auVar61._8_4_ = fVar12 * auVar60._0_4_;
      auVar61._12_4_ = fVar13 * 0.0;
      fVar48 = auVar53._0_4_;
      auVar64._0_4_ = fVar10 * fVar48;
      fVar49 = auVar53._4_4_;
      auVar64._4_4_ = fVar11 * fVar49;
      auVar64._8_4_ = fVar12 * auVar56._0_4_;
      auVar64._12_4_ = fVar13 * 0.0;
      auVar44 = NEON_ext(auVar57,auVar57,8,1);
      auVar43 = NEON_ext(auVar61,auVar61,8,1);
      auVar53 = NEON_ext(auVar64,auVar64,8,1);
      auVar58._0_4_ = auVar44._0_4_ + auVar57._0_4_ + auVar57._4_4_;
      auVar58._4_4_ = auVar43._0_4_ + auVar61._0_4_ + auVar61._4_4_;
      auVar68._0_4_ = fVar32 * fVar48;
      auVar68._4_4_ = fVar33 * fVar49;
      auVar68._8_4_ = fVar34 * auVar56._0_4_;
      auVar68._12_4_ = fVar35 * 0.0;
      auVar58._12_4_ = auVar53._4_4_ + auVar64._4_4_ + auVar53._4_4_;
      auVar58._8_4_ = auVar53._0_4_ + auVar64._0_4_ + auVar64._4_4_;
      auVar65._0_4_ = fVar32 * fVar40;
      auVar65._4_4_ = fVar33 * fVar47;
      auVar65._8_4_ = fVar34 * auVar60._0_4_;
      auVar65._12_4_ = fVar35 * 0.0;
      auVar62._0_4_ = fVar32 * fVar14;
      auVar62._4_4_ = fVar33 * fVar20;
      auVar62._8_4_ = fVar34 * auVar50._0_4_;
      auVar62._12_4_ = fVar35 * 0.0;
      auVar44 = NEON_ext(auVar62,auVar62,8,1);
      auVar43 = NEON_ext(auVar65,auVar65,8,1);
      auVar53 = NEON_ext(auVar68,auVar68,8,1);
      auVar63._0_4_ = auVar44._0_4_ + auVar62._0_4_ + auVar62._4_4_;
      auVar63._4_4_ = auVar43._0_4_ + auVar65._0_4_ + auVar65._4_4_;
      fVar71 = fVar36 * fVar48;
      fVar72 = fVar37 * fVar49;
      auVar54._0_4_ = fVar4 * ABS(fVar48);
      auVar54._4_4_ = fVar7 * ABS(fVar49);
      auVar54._8_4_ = fVar8 * ABS(auVar56._0_4_);
      auVar54._12_4_ = fVar9 * 0.0;
      auVar63._12_4_ = auVar53._4_4_ + auVar68._4_4_ + auVar53._4_4_;
      auVar63._8_4_ = auVar53._0_4_ + auVar68._0_4_ + auVar68._4_4_;
      auVar69._0_4_ = fVar36 * fVar40;
      auVar69._4_4_ = fVar37 * fVar47;
      auVar69._8_4_ = fVar38 * auVar60._0_4_;
      auVar69._12_4_ = fVar39 * 0.0;
      auVar51._0_4_ = fVar4 * ABS(fVar40);
      auVar51._4_4_ = fVar7 * ABS(fVar47);
      auVar51._8_4_ = fVar8 * ABS(auVar60._0_4_);
      auVar51._12_4_ = fVar9 * 0.0;
      auVar66._0_4_ = fVar36 * fVar14;
      auVar66._4_4_ = fVar37 * fVar20;
      auVar66._8_4_ = fVar38 * auVar50._0_4_;
      auVar66._12_4_ = fVar39 * 0.0;
      auVar45._0_4_ = fVar4 * ABS(fVar14);
      auVar45._4_4_ = fVar7 * ABS(fVar20);
      auVar45._8_4_ = fVar8 * ABS(auVar50._0_4_);
      auVar45._12_4_ = fVar9 * 0.0;
      auVar44 = NEON_ext(auVar66,auVar66,8,1);
      auVar43 = NEON_ext(auVar69,auVar69,8,1);
      auVar1._4_4_ = fVar72;
      auVar1._0_4_ = fVar71;
      auVar1._8_4_ = fVar38 * auVar56._0_4_;
      auVar1._12_4_ = fVar39 * 0.0;
      auVar2._4_4_ = fVar72;
      auVar2._0_4_ = fVar71;
      auVar2._8_4_ = fVar38 * auVar56._0_4_;
      auVar2._12_4_ = fVar39 * 0.0;
      auVar53 = NEON_ext(auVar1,auVar2,8,1);
      auVar67._0_4_ = auVar44._0_4_ + auVar66._0_4_ + auVar66._4_4_;
      auVar67._4_4_ = auVar43._0_4_ + auVar69._0_4_ + auVar69._4_4_;
      auVar67._12_4_ = auVar53._4_4_ + fVar72 + auVar53._4_4_;
      auVar67._8_4_ = auVar53._0_4_ + fVar71 + fVar72;
      auVar43 = NEON_fmin(auVar58,auVar63,4);
      auVar44 = NEON_fmax(auVar58,auVar63,4);
      auVar70 = NEON_fmin(auVar43,auVar67,4);
      auVar59 = NEON_fmax(auVar44,auVar67,4);
      auVar44 = NEON_ext(auVar45,auVar45,8,1);
      auVar43 = NEON_ext(auVar51,auVar51,8,1);
      auVar53 = NEON_ext(auVar54,auVar54,8,1);
      auVar52._0_4_ = -auVar59._0_4_;
      auVar52._4_4_ = -auVar59._4_4_;
      auVar52._8_4_ = -auVar59._8_4_;
      auVar52._12_4_ = -auVar59._12_4_;
      auVar59 = NEON_fmax(auVar52,auVar70,4);
      iVar15 = -(uint)(auVar43._0_4_ + auVar51._0_4_ + auVar51._4_4_ < auVar59._4_4_);
      iVar19 = -(uint)(auVar53._0_4_ + auVar54._0_4_ + auVar54._4_4_ < auVar59._8_4_);
      iVar21 = -(uint)(auVar53._4_4_ + auVar54._4_4_ + auVar53._4_4_ < auVar59._12_4_);
      uVar41 = (uint)(byte)(-(auVar44._0_4_ + auVar45._0_4_ + auVar45._4_4_ < auVar59._0_4_) &
                           (byte)_DAT_03cab270);
      auVar42._0_8_ =
           CONCAT17((byte)((uint)iVar15 >> 0x18) & (byte)((ulong)_DAT_03cab270 >> 0x38),
                    (uint7)CONCAT14((byte)iVar15 & (byte)((ulong)_DAT_03cab270 >> 0x20),uVar41));
      auVar42[8] = (byte)iVar19 & (byte)_UNK_03cab278;
      auVar42[9] = (byte)((uint)iVar19 >> 8) & (byte)((ulong)_UNK_03cab278 >> 8);
      auVar42[10] = (byte)((uint)iVar19 >> 0x10) & (byte)((ulong)_UNK_03cab278 >> 0x10);
      auVar42[0xb] = (byte)((uint)iVar19 >> 0x18) & (byte)((ulong)_UNK_03cab278 >> 0x18);
      auVar46[0xc] = (byte)iVar21 & (byte)((ulong)_UNK_03cab278 >> 0x20);
      auVar46._0_12_ = auVar42;
      auVar46[0xd] = (byte)((uint)iVar21 >> 8) & (byte)((ulong)_UNK_03cab278 >> 0x28);
      auVar46[0xe] = (byte)((uint)iVar21 >> 0x10) & (byte)((ulong)_UNK_03cab278 >> 0x30);
      auVar46[0xf] = (byte)((uint)iVar21 >> 0x18) & (byte)((ulong)_UNK_03cab278 >> 0x38);
      if ((uVar41 + (int)((ulong)auVar42._0_8_ >> 0x20) + auVar42._8_4_ + auVar46._12_4_ & 7) != 0)
      break;
      lVar3 = lVar3 + 0x10;
      if (lVar3 == 0x30) {
        auVar25._0_4_ = auVar18._0_4_ * auVar17._0_4_ - auVar5._0_4_ * auVar24._0_4_;
        auVar25._4_4_ = auVar18._4_4_ * auVar17._4_4_ - auVar5._4_4_ * auVar24._4_4_;
        auVar25._8_4_ = auVar18._8_4_ * auVar24._0_4_ - auVar18._0_4_ * auVar24._8_4_;
        auVar25._12_4_ = auVar18._12_4_ * auVar24._4_4_ - auVar18._4_4_ * auVar24._12_4_;
        auVar5 = NEON_ext(auVar25,auVar25,4,1);
        fVar14 = auVar5._0_4_;
        fVar20 = auVar5._4_4_;
        fVar13 = auVar25._0_4_ * auVar25._0_4_ + fVar14 * fVar14 + fVar20 * fVar20;
        if (fVar13 == 0.0) {
          auVar16 = ZEXT812(0);
        }
        else {
          fVar13 = SQRT(fVar13);
          auVar16._0_4_ = fVar14 / fVar13;
          auVar16._4_4_ =
               fVar20 / SQRT(auVar25._0_4_ * auVar25._0_4_ + fVar14 * fVar14 + fVar20 * fVar20);
          auVar16._8_4_ = auVar25._0_4_ / fVar13;
        }
        fVar14 = ABS(-(fVar10 * auVar16._0_4_ + fVar11 * auVar16._4_4_ + fVar12 * auVar16._8_4_));
        auVar6._0_4_ = fVar4 * ABS(auVar16._0_4_);
        auVar6._4_4_ = fVar7 * ABS(auVar16._4_4_);
        auVar6._8_4_ = fVar8 * ABS(auVar16._8_4_);
        auVar6._12_4_ = fVar9 * fVar14;
        auVar5 = NEON_ext(auVar6,auVar6,8,1);
        return fVar14 <= auVar6._0_4_ + auVar6._4_4_ + auVar5._0_4_;
      }
    }
  }
  return false;
}


