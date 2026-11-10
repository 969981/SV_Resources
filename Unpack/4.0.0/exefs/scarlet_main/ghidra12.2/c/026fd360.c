/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026fd360; name: FUN_026fd360
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_026fd360(undefined1 (*param_1) [16],undefined1 (*param_2) [16],float *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar15;
  float fVar16;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar17;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar33;
  float fVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar39;
  undefined1 auVar38 [16];
  float fVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  
  auVar26 = *param_1;
  uVar41 = a64_TBL(ZEXT816(0),auVar26,DAT_03cb56c8);
  auVar30 = *param_2;
  uVar23 = a64_TBL(ZEXT816(0),auVar30,DAT_03cb5488);
  uVar42 = a64_TBL(ZEXT816(0),auVar26,DAT_03cb5488);
  uVar46 = a64_TBL(ZEXT816(0),auVar30,DAT_03cb56c8);
  uVar44 = a64_TBL(ZEXT816(0),auVar30,DAT_03cb54c0);
  fVar6 = (float)((ulong)uVar41 >> 0x20);
  fVar15 = (float)((ulong)uVar42 >> 0x20);
  fVar22 = (float)uVar41 * (float)uVar23 - (float)uVar42 * (float)uVar46;
  fVar24 = fVar6 * (float)((ulong)uVar23 >> 0x20) - fVar15 * (float)((ulong)uVar46 >> 0x20);
  uVar23 = CONCAT44(fVar24,fVar22);
  uVar46 = a64_TBL(ZEXT816(0),auVar26,DAT_03cb54d8);
  uVar35 = a64_TBL(ZEXT816(0),auVar26,DAT_03cb54c0);
  uVar47 = a64_TBL(ZEXT816(0),auVar30,DAT_03cb54d8);
  fVar43 = (float)uVar46 * (float)uVar44 - (float)uVar35 * (float)uVar47;
  fVar45 = (float)((ulong)uVar46 >> 0x20) * (float)((ulong)uVar44 >> 0x20) -
           (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar47 >> 0x20);
  uVar44 = CONCAT44(fVar45,fVar43);
  bVar2 = false;
  bVar4 = true;
  bVar5 = false;
  if (fVar22 < 1.1920929e-07) {
    bVar2 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar22)) {
      bVar2 = fVar22 < -1.1920929e-07;
      bVar4 = fVar22 == -1.1920929e-07;
      bVar5 = false;
    }
  }
  bVar3 = false;
  if ((!bVar4 && bVar2 == bVar5) && (bVar3 = false, !NAN(fVar24))) {
    bVar3 = fVar24 < 1.1920929e-07;
  }
  bVar2 = false;
  bVar4 = true;
  bVar5 = false;
  if (bVar3) {
    bVar2 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar24)) {
      bVar2 = fVar24 < -1.1920929e-07;
      bVar4 = fVar24 == -1.1920929e-07;
      bVar5 = false;
    }
  }
  bVar3 = false;
  if ((!bVar4 && bVar2 == bVar5) && (bVar3 = false, !NAN(fVar43))) {
    bVar3 = fVar43 < 1.1920929e-07;
  }
  bVar2 = false;
  bVar4 = true;
  bVar5 = false;
  if (bVar3) {
    bVar2 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar43)) {
      bVar2 = fVar43 < -1.1920929e-07;
      bVar4 = fVar43 == -1.1920929e-07;
      bVar5 = false;
    }
  }
  fVar18 = auVar26._0_4_;
  fVar19 = auVar26._4_4_;
  fVar20 = auVar26._8_4_;
  fVar21 = auVar26._12_4_;
  if (bVar4 || bVar2 != bVar5) {
    if (param_3 != (float *)0x0) {
      fVar29 = auVar30._0_4_;
      fVar33 = auVar30._4_4_;
      fVar34 = auVar30._8_4_;
      fVar39 = auVar30._12_4_;
      fVar27 = *(float *)param_2[1];
      fVar40 = *(float *)param_1[1];
      auVar7._0_4_ = fVar18 * fVar29 + fVar19 * fVar33;
      auVar7._4_4_ = fVar20 * fVar34 + fVar21 * fVar39;
      auVar7._8_4_ = fVar18 * fVar29 + fVar19 * fVar33;
      auVar7._12_4_ = fVar20 * fVar34 + fVar21 * fVar39;
      auVar8._0_4_ = fVar29 * fVar29 + fVar33 * fVar33;
      auVar8._4_4_ = fVar34 * fVar34 + fVar39 * fVar39;
      auVar8._8_4_ = fVar29 * fVar29 + fVar33 * fVar33;
      auVar8._12_4_ = fVar34 * fVar34 + fVar39 * fVar39;
      auVar30 = NEON_ext(auVar8,auVar8,4,1);
      auVar26 = NEON_ext(auVar7,auVar7,4,1);
      fVar6 = auVar26._0_4_ + auVar26._4_4_;
      fVar15 = auVar26._8_4_ + auVar26._12_4_;
      fVar16 = auVar26._0_4_ + auVar26._4_4_;
      fVar17 = auVar26._8_4_ + auVar26._12_4_;
      auVar9._0_4_ = fVar18 * fVar18 + fVar19 * fVar19;
      auVar9._4_4_ = fVar20 * fVar20 + fVar21 * fVar21;
      auVar9._8_4_ = fVar18 * fVar18 + fVar19 * fVar19;
      auVar9._12_4_ = fVar20 * fVar20 + fVar21 * fVar21;
      auVar36 = NEON_ext(auVar9,auVar9,4,1);
      auVar10._0_4_ = fVar22 * fVar22 + fVar24 * fVar24;
      auVar10._4_4_ = fVar43 * fVar43 + fVar45 * fVar45;
      auVar10._8_4_ = fVar22 * fVar22 + fVar24 * fVar24;
      auVar10._12_4_ = fVar43 * fVar43 + fVar45 * fVar45;
      auVar26 = NEON_ext(auVar10,auVar10,4,1);
      fVar25 = SQRT(auVar26._0_4_ + auVar26._4_4_);
      bVar2 = false;
      bVar4 = true;
      bVar5 = false;
      if (fVar25 < 1.1920929e-07) {
        bVar2 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar25)) {
          bVar2 = fVar25 < -1.1920929e-07;
          bVar4 = fVar25 == -1.1920929e-07;
          bVar5 = false;
        }
      }
      if (bVar4 || bVar2 != bVar5) {
        uVar23 = CONCAT44(fVar24 / fVar25,fVar22 / fVar25);
        uVar44 = CONCAT44(fVar45 / fVar25,fVar43 / fVar25);
      }
      param_3[8] = fVar25;
      param_3[2] = fVar20 * (fVar16 * fVar27 - (auVar30._0_4_ + auVar30._4_4_) * fVar40) +
                   fVar34 * (fVar16 * fVar40 - (auVar36._0_4_ + auVar36._4_4_) * fVar27);
      param_3[3] = fVar21 * (fVar17 * fVar27 - (auVar30._8_4_ + auVar30._12_4_) * fVar40) +
                   fVar39 * (fVar17 * fVar40 - (auVar36._8_4_ + auVar36._12_4_) * fVar27);
      *param_3 = fVar18 * (fVar6 * fVar27 - (auVar30._0_4_ + auVar30._4_4_) * fVar40) +
                 fVar29 * (fVar6 * fVar40 - (auVar36._0_4_ + auVar36._4_4_) * fVar27);
      param_3[1] = fVar19 * (fVar15 * fVar27 - (auVar30._8_4_ + auVar30._12_4_) * fVar40) +
                   fVar33 * (fVar15 * fVar40 - (auVar36._8_4_ + auVar36._12_4_) * fVar27);
      *(undefined8 *)(param_3 + 6) = uVar44;
      *(undefined8 *)(param_3 + 4) = uVar23;
      return 1;
    }
  }
  else {
    fVar22 = *(float *)param_1[1] - *(float *)param_2[1];
    if (1.1920929e-07 <= fVar22) {
      return 0;
    }
    if (fVar22 <= -1.1920929e-07) {
      return 0;
    }
    if (param_3 != (float *)0x0) {
      auVar30._8_8_ = DAT_03cab628;
      auVar30._0_8_ = DAT_03cab620;
      uVar23 = a64_TBL(ZEXT816(0),auVar30,DAT_03cb56c8);
      uVar44 = a64_TBL(ZEXT816(0),auVar30,DAT_03cb5488);
      fVar22 = (float)uVar42 * (float)uVar23 - (float)uVar41 * (float)uVar44;
      fVar24 = fVar15 * (float)((ulong)uVar23 >> 0x20) - fVar6 * (float)((ulong)uVar44 >> 0x20);
      if ((((fVar22 < 1.1920929e-07) && (-1.1920929e-07 < fVar22)) && (fVar24 < 1.1920929e-07)) &&
         (-1.1920929e-07 < fVar24)) {
        uVar23 = a64_TBL(ZEXT816(0),auVar30,DAT_03cb54d8);
        uVar44 = a64_TBL(ZEXT816(0),auVar30,DAT_03cb54c0);
        fVar22 = (float)uVar35 * (float)uVar23 - (float)uVar46 * (float)uVar44;
        bVar2 = false;
        if ((-1.1920929e-07 < fVar22) && (bVar2 = false, !NAN(fVar22))) {
          bVar2 = fVar22 < 1.1920929e-07;
        }
        auVar28._8_8_ = DAT_03cab628;
        auVar28._0_8_ = DAT_03cab620;
        auVar32._8_8_ = _UNK_03cabe68;
        auVar32._0_8_ = _DAT_03cabe60;
        iVar1 = -(uint)bVar2;
        auVar36._0_8_ = CONCAT44(iVar1,iVar1);
        auVar36._8_4_ = iVar1;
        auVar36._12_4_ = iVar1;
        auVar38._8_8_ = auVar36._8_8_;
        auVar38._0_8_ = auVar36._0_8_;
        auVar30 = auVar28 ^ (auVar28 ^ auVar32) & auVar38;
      }
      fVar22 = fVar18 * auVar30._0_4_;
      fVar24 = fVar19 * auVar30._4_4_;
      fVar6 = fVar20 * auVar30._8_4_;
      fVar15 = fVar21 * auVar30._12_4_;
      auVar11._0_4_ = fVar18 * fVar18 + fVar19 * fVar19;
      auVar11._4_4_ = fVar20 * fVar20 + fVar21 * fVar21;
      auVar11._8_4_ = fVar18 * fVar18 + fVar19 * fVar19;
      auVar11._12_4_ = fVar20 * fVar20 + fVar21 * fVar21;
      auVar28 = NEON_ext(auVar11,auVar11,4,1);
      auVar12._0_4_ = fVar22 + fVar24;
      auVar12._4_4_ = fVar6 + fVar15;
      auVar12._8_4_ = fVar22 + fVar24;
      auVar12._12_4_ = fVar6 + fVar15;
      auVar36 = NEON_ext(auVar12,auVar12,4,1);
      fVar22 = SQRT(auVar28._0_4_ + auVar28._4_4_);
      bVar2 = false;
      if ((-1.1920929e-07 < fVar22) && (bVar2 = false, !NAN(fVar22))) {
        bVar2 = fVar22 < 1.1920929e-07;
      }
      iVar1 = -(uint)bVar2;
      auVar31._0_4_ = fVar18 / fVar22;
      auVar31._4_4_ = fVar19 / fVar22;
      auVar31._8_4_ = fVar20 / fVar22;
      auVar31._12_4_ = fVar21 / fVar22;
      fVar6 = auVar30._0_4_ - fVar18 * (auVar36._0_4_ + auVar36._4_4_);
      fVar15 = auVar30._4_4_ - fVar19 * (auVar36._8_4_ + auVar36._12_4_);
      fVar43 = auVar30._8_4_ - fVar20 * (auVar36._0_4_ + auVar36._4_4_);
      fVar45 = auVar30._12_4_ - fVar21 * (auVar36._8_4_ + auVar36._12_4_);
      auVar37._4_4_ = iVar1;
      auVar37._0_4_ = iVar1;
      auVar37._8_4_ = iVar1;
      auVar37._12_4_ = iVar1;
      auVar31 = auVar31 ^ (auVar31 ^ auVar26) & auVar37;
      fVar29 = auVar31._0_4_ * fVar22;
      fVar33 = auVar31._4_4_ * fVar22;
      fVar34 = auVar31._8_4_ * fVar22;
      fVar22 = auVar31._12_4_ * fVar22;
      fVar24 = fVar18 * fVar29;
      fVar16 = fVar19 * fVar33;
      fVar17 = fVar20 * fVar34;
      fVar25 = fVar21 * fVar22;
      auVar26._0_4_ = fVar24 + fVar16;
      auVar26._4_4_ = fVar17 + fVar25;
      auVar26._8_4_ = fVar24 + fVar16;
      auVar26._12_4_ = fVar17 + fVar25;
      auVar26 = NEON_ext(auVar26,auVar26,4,1);
      fVar24 = auVar26._0_4_ + auVar26._4_4_;
      fVar16 = 0.0;
      fVar17 = 0.0;
      fVar25 = 0.0;
      fVar27 = 0.0;
      bVar2 = false;
      if ((fVar24 < *(float *)PTR_DAT_047d41b0) &&
         (bVar2 = false, !NAN(*(float *)PTR_DAT_047d41c0) && !NAN(fVar24))) {
        bVar2 = *(float *)PTR_DAT_047d41c0 < fVar24;
      }
      if (!bVar2) {
        auVar13._0_4_ = fVar18 * 0.0 + fVar19 * 0.0;
        auVar13._4_4_ = fVar20 * 0.0 + fVar21 * 0.0;
        auVar13._8_4_ = fVar18 * 0.0 + fVar19 * 0.0;
        auVar13._12_4_ = fVar20 * 0.0 + fVar21 * 0.0;
        auVar26 = NEON_ext(auVar13,auVar13,4,1);
        fVar24 = -(*(float *)param_1[1] + auVar26._0_4_ + auVar26._4_4_) / fVar24;
        fVar16 = fVar29 * fVar24 + 0.0;
        fVar17 = fVar33 * fVar24 + 0.0;
        fVar25 = fVar34 * fVar24 + 0.0;
        fVar27 = fVar22 * fVar24 + 0.0;
      }
      auVar14._0_4_ = fVar6 * fVar6 + fVar15 * fVar15;
      auVar14._4_4_ = fVar43 * fVar43 + fVar45 * fVar45;
      auVar14._8_4_ = fVar6 * fVar6 + fVar15 * fVar15;
      auVar14._12_4_ = fVar43 * fVar43 + fVar45 * fVar45;
      auVar26 = NEON_ext(auVar14,auVar14,4,1);
      fVar22 = SQRT(auVar26._0_4_ + auVar26._4_4_);
      bVar2 = false;
      bVar4 = true;
      bVar5 = false;
      if (fVar22 < 1.1920929e-07) {
        bVar2 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar22)) {
          bVar2 = fVar22 < -1.1920929e-07;
          bVar4 = fVar22 == -1.1920929e-07;
          bVar5 = false;
        }
      }
      if (bVar4 || bVar2 != bVar5) {
        fVar6 = fVar6 / fVar22;
        fVar15 = fVar15 / fVar22;
        fVar43 = fVar43 / fVar22;
        fVar45 = fVar45 / fVar22;
      }
      param_3[8] = fVar22;
      param_3[2] = fVar25;
      param_3[3] = fVar27;
      *param_3 = fVar16;
      param_3[1] = fVar17;
      param_3[6] = fVar43;
      param_3[7] = fVar45;
      param_3[4] = fVar6;
      param_3[5] = fVar15;
      return 1;
    }
  }
  return 1;
}


