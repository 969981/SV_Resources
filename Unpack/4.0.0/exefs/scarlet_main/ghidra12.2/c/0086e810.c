/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0086e810; name: FUN_0086e810
 */


bool FUN_0086e810(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,float *param_7)

{
  bool bVar1;
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
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
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar40 [12];
  undefined1 auVar41 [12];
  undefined8 uVar39;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar67 [16];
  undefined8 uVar68;
  undefined8 uVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 auVar75 [16];
  float fVar76;
  float fVar78;
  undefined1 auVar77 [16];
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined1 in_q26 [16];
  undefined1 auVar86 [16];
  undefined1 auVar85 [16];
  undefined1 auVar84 [16];
  undefined1 auVar83 [16];
  undefined1 auVar87 [16];
  float fVar88;
  float fVar89;
  float fVar90;
  undefined8 uVar91;
  float fVar92;
  
  fVar13 = (float)*param_4;
  fVar17 = (float)*param_3;
  fVar21 = fVar13 - fVar17;
  fVar14 = (float)((ulong)*param_4 >> 0x20);
  fVar18 = (float)((ulong)*param_3 >> 0x20);
  fVar22 = fVar14 - fVar18;
  fVar15 = (float)param_4[1];
  fVar19 = (float)param_3[1];
  fVar23 = fVar15 - fVar19;
  fVar16 = (float)((ulong)param_4[1] >> 0x20);
  fVar20 = (float)((ulong)param_3[1] >> 0x20);
  fVar24 = fVar16 - fVar20;
  fVar25 = (float)*param_5;
  fVar29 = fVar25 - fVar13;
  fVar26 = (float)((ulong)*param_5 >> 0x20);
  fVar30 = fVar26 - fVar14;
  fVar27 = (float)param_5[1];
  fVar31 = fVar27 - fVar15;
  fVar28 = (float)((ulong)param_5[1] >> 0x20);
  fVar32 = fVar28 - fVar16;
  auVar34._4_4_ = fVar30;
  auVar34._0_4_ = fVar29;
  auVar34._8_4_ = fVar31;
  auVar34._12_4_ = fVar32;
  auVar77._4_4_ = fVar30;
  auVar77._0_4_ = fVar29;
  auVar77._8_4_ = fVar31;
  auVar77._12_4_ = fVar32;
  auVar34 = NEON_ext(auVar34,auVar77,4,1);
  auVar33._4_4_ = fVar22;
  auVar33._0_4_ = fVar21;
  auVar33._8_4_ = fVar23;
  auVar33._12_4_ = fVar24;
  auVar75._4_4_ = fVar22;
  auVar75._0_4_ = fVar21;
  auVar75._8_4_ = fVar23;
  auVar75._12_4_ = fVar24;
  auVar33 = NEON_ext(auVar33,auVar75,4,1);
  uVar68 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x240);
  fVar70 = fVar21 * fVar21;
  auVar83._4_12_ = in_q26._4_12_;
  auVar83._0_4_ = fVar70;
  auVar85._12_4_ = in_q26._12_4_;
  auVar85._0_8_ = auVar83._0_8_;
  auVar85._8_4_ = fVar23 * fVar23;
  auVar84._8_8_ = auVar85._8_8_;
  auVar84._4_4_ = fVar29 * fVar29;
  auVar84._0_4_ = fVar70;
  auVar86._0_12_ = auVar84._0_12_;
  auVar86._12_4_ = fVar31 * fVar31;
  fVar35 = fVar17 - fVar25;
  fVar36 = fVar18 - fVar26;
  fVar37 = fVar19 - fVar27;
  fVar38 = fVar20 - fVar28;
  fVar79 = fVar21 * auVar34._0_4_ - fVar29 * auVar33._0_4_;
  fVar80 = fVar22 * auVar34._4_4_ - fVar30 * auVar33._4_4_;
  fVar81 = fVar23 * fVar29 - fVar31 * fVar21;
  fVar82 = fVar24 * fVar30 - fVar32 * fVar22;
  auVar60._4_4_ = fVar80;
  auVar60._0_4_ = fVar79;
  auVar60._8_4_ = fVar81;
  auVar60._12_4_ = fVar82;
  auVar61._4_4_ = fVar80;
  auVar61._0_4_ = fVar79;
  auVar61._8_4_ = fVar81;
  auVar61._12_4_ = fVar82;
  auVar77 = NEON_ext(auVar60,auVar61,4,1);
  auVar87._4_4_ = fVar36;
  auVar87._0_4_ = fVar35;
  auVar87._8_4_ = fVar37;
  auVar87._12_4_ = fVar38;
  auVar58._4_4_ = fVar36;
  auVar58._0_4_ = fVar35;
  auVar58._8_4_ = fVar37;
  auVar58._12_4_ = fVar38;
  auVar75 = NEON_ext(auVar87,auVar58,4,1);
  uVar69 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
  pauVar2 = (undefined1 (*) [12])(PTR_DAT_047d19b0 + 0x60);
  fVar82 = (float)((ulong)*(undefined8 *)(PTR_DAT_047d19b0 + 0x68) >> 0x20);
  fVar80 = (float)*(undefined8 *)*pauVar2;
  fVar81 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  auVar87 = NEON_ext(auVar86,auVar86,8,1);
  uVar91 = param_1[1];
  uVar39 = *param_1;
  fVar73 = (float)param_1[3];
  fVar74 = (float)((ulong)param_1[3] >> 0x20);
  fVar71 = (float)param_1[2];
  fVar72 = (float)((ulong)param_1[2] >> 0x20);
  fVar76 = auVar77._0_4_;
  fVar78 = auVar77._4_4_;
  auVar12._8_4_ = fVar79;
  auVar12._0_8_ = auVar77._0_8_;
  do {
    fVar88 = (float)uVar39;
    auVar42._0_4_ = fVar88 - fVar17;
    fVar89 = (float)((ulong)uVar39 >> 0x20);
    auVar42._4_4_ = fVar89 - fVar18;
    fVar90 = (float)uVar91;
    auVar42._8_4_ = fVar90 - fVar19;
    fVar92 = (float)((ulong)uVar91 >> 0x20);
    auVar42._12_4_ = fVar92 - fVar20;
    auVar77 = NEON_ext(auVar42,auVar42,4,1);
    fVar48 = fVar88 - fVar13;
    fVar49 = fVar89 - fVar14;
    fVar50 = fVar90 - fVar15;
    fVar52 = fVar92 - fVar16;
    fVar44 = fVar88 - fVar25;
    fVar45 = fVar89 - fVar26;
    fVar46 = fVar90 - fVar27;
    fVar47 = fVar92 - fVar28;
    auVar53._0_4_ = fVar21 * auVar77._0_4_ - auVar42._0_4_ * auVar33._0_4_;
    auVar53._4_4_ = fVar22 * auVar77._4_4_ - auVar42._4_4_ * auVar33._4_4_;
    auVar53._8_4_ = fVar23 * auVar42._0_4_ - auVar42._8_4_ * fVar21;
    auVar53._12_4_ = fVar24 * auVar42._4_4_ - auVar42._12_4_ * fVar22;
    auVar58 = NEON_ext(auVar53,auVar53,4,1);
    auVar6._4_4_ = fVar49;
    auVar6._0_4_ = fVar48;
    auVar6._8_4_ = fVar50;
    auVar6._12_4_ = fVar52;
    auVar7._4_4_ = fVar49;
    auVar7._0_4_ = fVar48;
    auVar7._8_4_ = fVar50;
    auVar7._12_4_ = fVar52;
    auVar77 = NEON_ext(auVar6,auVar7,4,1);
    auVar54._0_4_ = fVar29 * auVar77._0_4_ - fVar48 * auVar34._0_4_;
    auVar54._4_4_ = fVar30 * auVar77._4_4_ - fVar49 * auVar34._4_4_;
    auVar54._8_4_ = fVar31 * fVar48 - fVar50 * fVar29;
    auVar54._12_4_ = fVar32 * fVar49 - fVar52 * fVar30;
    auVar60 = NEON_ext(auVar54,auVar54,4,1);
    auVar3._4_4_ = fVar45;
    auVar3._0_4_ = fVar44;
    auVar3._8_4_ = fVar46;
    auVar3._12_4_ = fVar47;
    auVar4._4_4_ = fVar45;
    auVar4._0_4_ = fVar44;
    auVar4._8_4_ = fVar46;
    auVar4._12_4_ = fVar47;
    auVar77 = NEON_ext(auVar3,auVar4,4,1);
    auVar55._0_4_ = fVar35 * auVar77._0_4_ - fVar44 * auVar75._0_4_;
    auVar55._4_4_ = fVar36 * auVar77._4_4_ - fVar45 * auVar75._4_4_;
    auVar55._8_4_ = fVar37 * fVar44 - fVar46 * fVar35;
    auVar55._12_4_ = fVar38 * fVar45 - fVar47 * fVar36;
    auVar61 = NEON_ext(auVar55,auVar55,4,1);
    fVar47 = auVar58._0_4_ * fVar76;
    fVar52 = fVar76 * auVar60._0_4_;
    auVar62._4_4_ = fVar52;
    auVar62._0_4_ = fVar47;
    auVar62._8_4_ = auVar53._0_4_ * fVar79;
    auVar62._12_4_ = fVar79 * auVar54._0_4_;
    auVar77 = NEON_ext(auVar62,auVar62,8,1);
    if (fVar76 * auVar61._0_4_ + fVar78 * auVar61._4_4_ + fVar79 * auVar55._0_4_ <= 0.0 ||
        (auVar77._0_4_ + auVar58._4_4_ * fVar78 + fVar47 <= 0.0 ||
        auVar77._4_4_ + fVar78 * auVar60._4_4_ + fVar52 <= 0.0)) {
      fVar47 = fVar21 * auVar42._0_4_;
      auVar63._4_12_ = auVar62._4_12_;
      auVar63._0_4_ = fVar47;
      auVar65._0_8_ = auVar63._0_8_;
      auVar65._8_4_ = fVar23 * auVar42._8_4_;
      auVar65._12_4_ = fVar79 * auVar54._0_4_;
      auVar64._8_8_ = auVar65._8_8_;
      auVar64._4_4_ = fVar48 * fVar29;
      auVar64._0_4_ = fVar47;
      auVar66._0_12_ = auVar64._0_12_;
      auVar66._12_4_ = fVar50 * fVar31;
      auVar77 = NEON_ext(auVar66,auVar66,8,1);
      auVar56._0_4_ =
           (auVar77._0_4_ + fVar22 * auVar42._4_4_ + fVar47) /
           (auVar87._0_4_ + fVar22 * fVar22 + fVar70);
      auVar56._4_4_ =
           (auVar77._4_4_ + fVar49 * fVar30 + fVar48 * fVar29) /
           (auVar87._4_4_ + fVar30 * fVar30 + fVar29 * fVar29);
      fVar47 = (fVar37 * fVar46 + fVar35 * fVar44 + fVar36 * fVar45) /
               (fVar37 * fVar37 + fVar35 * fVar35 + fVar36 * fVar36);
      fVar52 = (fVar37 * fVar46 + fVar35 * fVar44 + fVar36 * fVar45) /
               (fVar37 * fVar37 + fVar35 * fVar35 + fVar36 * fVar36);
      auVar56._12_4_ = fVar52;
      auVar56._8_4_ = fVar47;
      auVar59._0_4_ = -(uint)(auVar56._0_4_ < fVar80);
      auVar59._4_4_ = -(uint)(auVar56._4_4_ < fVar81);
      auVar59._8_4_ = -(uint)(fVar47 < (float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x68));
      auVar59._12_4_ = -(uint)(fVar52 < fVar82);
      auVar10._12_4_ = fVar82;
      auVar10._0_12_ = *pauVar2;
      auVar11._12_4_ = fVar82;
      auVar11._0_12_ = *pauVar2;
      auVar77 = NEON_fmax(auVar11 ^ (auVar10 ^ auVar56) & auVar59,ZEXT816(0),4);
      fVar47 = auVar77._0_4_;
      auVar40._0_4_ = auVar42._0_4_ - fVar21 * fVar47;
      auVar40._4_4_ = auVar42._4_4_ - fVar22 * fVar47;
      auVar40._8_4_ = auVar42._8_4_ - fVar23 * fVar47;
      fVar47 = auVar77._4_4_;
      fVar52 = auVar77._8_4_;
      fVar48 = fVar48 - fVar29 * fVar47;
      fVar49 = fVar49 - fVar30 * fVar47;
      fVar50 = fVar50 - fVar31 * fVar47;
      fVar44 = fVar44 - fVar35 * fVar52;
      fVar45 = fVar45 - fVar36 * fVar52;
      fVar46 = fVar46 - fVar37 * fVar52;
      fVar47 = auVar40._0_4_ * auVar40._0_4_ + auVar40._4_4_ * auVar40._4_4_ +
               auVar40._8_4_ * auVar40._8_4_;
      fVar52 = auVar40._0_4_ * auVar40._0_4_ + auVar40._4_4_ * auVar40._4_4_ +
               auVar40._8_4_ * auVar40._8_4_;
      fVar51 = fVar48 * fVar48 + fVar49 * fVar49 + fVar50 * fVar50;
      fVar57 = fVar48 * fVar48 + fVar49 * fVar49 + fVar50 * fVar50;
      auVar67._0_8_ = CONCAT44(-(uint)(fVar52 < fVar57),-(uint)(fVar47 < fVar51));
      auVar67._8_8_ = auVar67._0_8_;
      auVar8._4_4_ = fVar49;
      auVar8._0_4_ = fVar48;
      auVar8._8_4_ = fVar50;
      auVar9._4_4_ = fVar49;
      auVar9._0_4_ = fVar48;
      auVar9._8_4_ = fVar50;
      uVar39 = NEON_fmin(CONCAT44(fVar52,fVar47),CONCAT44(fVar57,fVar51),4);
      auVar43._0_8_ =
           CONCAT44(-(uint)((float)((ulong)uVar39 >> 0x20) <
                           fVar44 * fVar44 + fVar45 * fVar45 + fVar46 * fVar46),
                    -(uint)((float)uVar39 < fVar44 * fVar44 + fVar45 * fVar45 + fVar46 * fVar46));
      auVar43._8_8_ = auVar43._0_8_;
      auVar5._4_4_ = fVar45;
      auVar5._0_4_ = fVar44;
      auVar5._8_4_ = fVar46;
      auVar41._4_4_ = fVar45;
      auVar41._0_4_ = fVar44;
      auVar41._8_4_ = fVar46;
      auVar41 = auVar41 ^ (auVar5 ^ auVar9 ^ (auVar8 ^ auVar40) & auVar67._0_12_) & auVar43._0_12_;
      fVar44 = fVar80;
      fVar45 = fVar81;
    }
    else {
      fVar46 = fVar79 * fVar79 + fVar76 * fVar76 + fVar78 * fVar78;
      fVar44 = 0.0;
      fVar45 = 0.0;
      if (fVar46 != 0.0) {
        fVar44 = (auVar42._8_4_ * fVar79 + auVar42._0_4_ * fVar76 + auVar42._4_4_ * fVar78) / fVar46
        ;
        fVar45 = (auVar42._8_4_ * fVar79 + auVar42._0_4_ * fVar76 + auVar42._4_4_ * fVar78) /
                 (fVar79 * fVar79 + fVar76 * fVar76 + fVar78 * fVar78);
      }
      auVar41 = auVar12;
    }
    fVar50 = fVar88 - fVar44 * auVar41._0_4_;
    fVar52 = fVar89 - fVar45 * auVar41._4_4_;
    fVar51 = fVar90 - fVar44 * auVar41._8_4_;
    fVar47 = fVar88 - fVar50;
    fVar48 = fVar89 - fVar52;
    fVar49 = fVar90 - fVar51;
    fVar57 = fVar47 * fVar47 + fVar48 * fVar48 + fVar49 * fVar49;
    fVar44 = 0.0;
    fVar45 = 0.0;
    fVar46 = 0.0;
    uVar39 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x50);
    if (fVar57 != 0.0) {
      fVar57 = SQRT(fVar57);
      fVar45 = SQRT(fVar47 * fVar47 + fVar48 * fVar48 + fVar49 * fVar49);
      uVar39 = CONCAT44(fVar45,fVar57);
      fVar44 = fVar47 / fVar57;
      fVar45 = fVar48 / fVar45;
      fVar46 = fVar49 / fVar57;
    }
    fVar47 = (float)uVar39 - (float)*param_2;
    fVar48 = (float)((ulong)uVar39 >> 0x20) - (float)((ulong)*param_2 >> 0x20);
    fVar49 = -(fVar51 * fVar46 + fVar50 * fVar44 + fVar52 * fVar45);
    if (fVar47 <= 0.0) break;
    fVar50 = fVar44 * fVar71;
    fVar51 = fVar45 * fVar72;
    fVar57 = fVar46 * fVar73;
    fVar52 = fVar50 + fVar51 + fVar57;
    if (0.0 <= fVar52) {
      param_7[2] = fVar46;
      param_7[3] = fVar49;
      *param_7 = fVar44;
      param_7[1] = fVar45;
      return false;
    }
    fVar52 = -fVar47 / fVar52;
    fVar50 = -fVar48 / (fVar50 + fVar51 + fVar57);
    uVar69 = CONCAT44(fVar50 + (float)((ulong)uVar69 >> 0x20),fVar52 + (float)uVar69);
    uVar39 = CONCAT44(fVar89 + fVar72 * fVar50,fVar88 + fVar71 * fVar52);
    uVar91 = CONCAT44(fVar92 + fVar74 * fVar50,fVar90 + fVar73 * fVar52);
    fVar50 = (float)uVar68;
    uVar68 = NEON_fmin(uVar68,CONCAT44(fVar48,fVar47),4);
  } while (*(float *)(PTR_DAT_047d19b0 + 0x260) <= fVar50 - fVar47);
  param_7[2] = fVar46;
  param_7[3] = fVar49;
  *param_7 = fVar44;
  param_7[1] = fVar45;
  bVar1 = (float)uVar69 <= fVar74;
  if (bVar1) {
    *param_6 = uVar69;
  }
  return bVar1;
}


