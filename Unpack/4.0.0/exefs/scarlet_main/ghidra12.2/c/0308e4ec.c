/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0308e4ec; name: FUN_0308e4ec
 */


undefined8
FUN_0308e4ec(long *param_1,undefined8 param_2,undefined1 (*param_3) [16],float *param_4,
            undefined1 (*param_5) [12],float *param_6,float *param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
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
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  float *pfVar26;
  bool bVar27;
  long *plVar28;
  int iVar29;
  long lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar30 = tpidr_el0;
  lVar23 = *(long *)(lVar30 + 0x1000b8);
  if (lVar23 == 0) {
    lVar23 = FUN_00e5d3b4();
    *(long *)(lVar30 + 0x1000b8) = lVar23;
  }
  plVar28 = *(long **)(lVar23 + 0x3e0);
  if (plVar28 != (long *)0x0) {
    lVar30 = *plVar28;
    if (*(code **)(lVar30 + 0x18) != (code *)0x0) {
      (**(code **)(lVar30 + 0x18))("projectSegmentOntoFace",0x16,*(undefined8 *)(lVar30 + 0x28));
    }
    puVar1 = (undefined8 *)plVar28[2];
    uVar24 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar24 <= (ulong)plVar28[3]) && (plVar28[2] = uVar24, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtprojectSegmentOntoFace";
      uVar20 = nn::os::GetSystemTick();
      puVar1[1] = uVar20;
    }
    if (((*(byte *)(lVar30 + 0x38) & 1) != 0) && (plVar28[6] != 0)) {
      puVar1 = (undefined8 *)plVar28[2];
      uVar24 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar24 <= (ulong)plVar28[3]) && (plVar28[2] = uVar24, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar28[6] + 8);
      }
    }
  }
  uVar2 = (int)param_1[1] - 1;
  if (uVar2 == 0 || (int)param_1[1] < 1) {
    fVar36 = *param_4;
    fVar41 = param_4[1];
    fVar38 = param_4[2];
    fVar43 = param_4[3];
    iVar29 = -1;
    uVar20 = NEON_fmov(0x3f800000,4);
    fVar35 = (float)uVar20;
    fVar37 = (float)((ulong)uVar20 >> 0x20);
    auVar31 = *param_3;
    uVar20 = 0;
    iVar22 = -1;
  }
  else {
    fVar40 = (float)((ulong)*(undefined8 *)(*param_5 + 8) >> 0x20);
    uVar21 = *(undefined8 *)*param_5;
    fVar39 = (float)((ulong)uVar21 >> 0x20);
    auVar31._12_4_ = fVar40;
    auVar31._0_12_ = *param_5;
    auVar62._12_4_ = fVar40;
    auVar62._0_12_ = *param_5;
    auVar31 = NEON_ext(auVar31,auVar62,8,1);
    uVar50 = NEON_ext(uVar21,auVar31._0_8_,4,1);
    pfVar26 = (float *)*param_1;
    auVar31 = *param_3;
    fVar36 = *param_4;
    fVar41 = param_4[1];
    fVar38 = param_4[2];
    fVar43 = param_4[3];
    uVar20 = NEON_fmov(0x3f800000,4);
    fVar35 = (float)uVar20;
    fVar37 = (float)((ulong)uVar20 >> 0x20);
    uVar20 = 0;
    uVar25 = 0xffffffff;
    uVar24 = 0;
    iVar29 = -1;
    fVar59 = *pfVar26;
    fVar61 = pfVar26[1];
    fVar53 = pfVar26[2];
    fVar60 = pfVar26[3];
    do {
      pfVar3 = pfVar26 + uVar24 * 4 + 4;
      fVar54 = *pfVar3 - fVar59;
      fVar56 = pfVar3[1] - fVar61;
      fVar58 = pfVar3[2] - fVar53;
      fVar60 = pfVar3[3] - fVar60;
      auVar14._4_4_ = fVar56;
      auVar14._0_4_ = fVar54;
      auVar14._8_4_ = fVar58;
      auVar14._12_4_ = fVar60;
      auVar15._4_4_ = fVar56;
      auVar15._0_4_ = fVar54;
      auVar15._8_4_ = fVar58;
      auVar15._12_4_ = fVar60;
      auVar62 = NEON_ext(auVar14,auVar15,4,1);
      fVar55 = fVar54 * (float)uVar50 - (float)uVar21 * auVar62._0_4_;
      fVar57 = fVar56 * (float)((ulong)uVar50 >> 0x20) - fVar39 * auVar62._4_4_;
      fVar54 = fVar58 * (float)uVar21 - (float)*(undefined8 *)(*param_5 + 8) * fVar54;
      fVar60 = fVar60 * fVar39 - fVar40 * fVar56;
      auVar16._4_4_ = fVar57;
      auVar16._0_4_ = fVar55;
      auVar16._8_4_ = fVar54;
      auVar16._12_4_ = fVar60;
      auVar17._4_4_ = fVar57;
      auVar17._0_4_ = fVar55;
      auVar17._8_4_ = fVar54;
      auVar17._12_4_ = fVar60;
      auVar62 = NEON_ext(auVar16,auVar17,4,1);
      fVar56 = auVar62._0_4_;
      fVar57 = auVar62._4_4_;
      fVar53 = -(fVar59 * fVar56 + fVar61 * fVar57 + fVar53 * fVar55);
      fVar60 = auVar31._0_4_ * fVar56;
      fVar54 = auVar31._4_4_ * fVar57;
      fVar59 = auVar31._8_4_ * fVar55;
      fVar61 = auVar31._12_4_ * fVar53;
      auVar18._4_4_ = fVar54;
      auVar18._0_4_ = fVar60;
      auVar18._8_4_ = fVar59;
      auVar18._12_4_ = fVar61;
      auVar19._4_4_ = fVar54;
      auVar19._0_4_ = fVar60;
      auVar19._8_4_ = fVar59;
      auVar19._12_4_ = fVar61;
      auVar62 = NEON_ext(auVar18,auVar19,8,1);
      auVar63._0_4_ = fVar36 * fVar56;
      auVar63._4_4_ = fVar41 * fVar57;
      auVar63._8_4_ = fVar38 * fVar55;
      auVar63._12_4_ = fVar43 * fVar53;
      fVar61 = auVar62._0_4_ + fVar53;
      auVar62 = NEON_ext(auVar63,auVar63,8,1);
      fVar59 = fVar60 + fVar54 + fVar61;
      fVar61 = fVar60 + fVar54 + fVar61;
      fVar53 = auVar62._0_4_ + fVar53;
      fVar60 = (auVar63._0_4_ + auVar63._4_4_ + fVar53) - fVar59;
      fVar53 = (auVar63._0_4_ + auVar63._4_4_ + fVar53) - fVar61;
      fVar54 = fVar59 + fVar35 * fVar60;
      if (0.0 <= fVar59 + (float)uVar20 * fVar60) {
        if (0.0 <= fVar54) {
          uVar20 = 0;
          goto LAB_0308ea90;
        }
        uVar25 = uVar24 & 0xffffffff;
        uVar20 = CONCAT44(-fVar61 / fVar53,-fVar59 / fVar60);
      }
      else if (0.0 <= fVar54) {
        fVar35 = -fVar59 / fVar60;
        fVar37 = -fVar61 / fVar53;
        iVar29 = (int)uVar24;
      }
      iVar22 = (int)uVar25;
      uVar24 = uVar24 + 1;
      fVar59 = *pfVar3;
      fVar61 = pfVar3[1];
      fVar53 = pfVar3[2];
      fVar60 = pfVar3[3];
    } while (uVar2 != uVar24);
  }
  fVar59 = (float)((ulong)uVar20 >> 0x20);
  param_6[2] = auVar31._8_4_ + (fVar38 - auVar31._8_4_) * (float)uVar20;
  param_6[3] = auVar31._12_4_ + (fVar43 - auVar31._12_4_) * fVar59;
  *param_6 = auVar31._0_4_ + (fVar36 - auVar31._0_4_) * (float)uVar20;
  param_6[1] = auVar31._4_4_ + (fVar41 - auVar31._4_4_) * fVar59;
  auVar31 = *param_3;
  auVar32._0_8_ =
       CONCAT44(auVar31._4_4_ + fVar37 * (param_4[1] - auVar31._4_4_),
                auVar31._0_4_ + fVar35 * (*param_4 - auVar31._0_4_));
  auVar32._8_4_ = auVar31._8_4_ + fVar35 * (param_4[2] - auVar31._8_4_);
  auVar32._12_4_ = auVar31._12_4_ + fVar37 * (param_4[3] - auVar31._12_4_);
  *(long *)(param_7 + 2) = auVar32._8_8_;
  *(undefined8 *)param_7 = auVar32._0_8_;
  lVar30 = *param_1;
  if (iVar22 == -1) {
    uVar24 = FUN_0308dd24(lVar30,lVar30 + (long)(int)param_1[1] * 0x10,param_5,param_6);
    if ((uVar24 & 1) == 0) {
      fVar38 = 0.0;
      fVar43 = 0.0;
      fVar35 = 0.0;
      fVar61 = 0.0;
      fVar37 = 0.0;
      fVar59 = 0.0;
      fVar53 = 0.0;
      uVar2 = (int)param_1[1] - 1;
      fVar36 = fVar37;
      fVar41 = fVar59;
      if (1 < (int)param_1[1]) {
        pfVar26 = (float *)*param_1;
        fVar38 = 0.0;
        fVar43 = 0.0;
        fVar35 = 0.0;
        fVar60 = *pfVar26;
        fVar39 = pfVar26[1];
        fVar40 = pfVar26[2];
        fVar54 = pfVar26[3];
        fVar61 = 0.0;
        fVar36 = 0.0;
        fVar41 = 0.0;
        uVar24 = (ulong)uVar2;
        fVar55 = fVar60;
        fVar56 = fVar39;
        fVar57 = fVar40;
        fVar58 = fVar54;
        do {
          uVar20 = *(undefined8 *)(pfVar26 + 4);
          uVar24 = uVar24 - 1;
          fVar38 = fVar55 + fVar38;
          fVar43 = fVar56 + fVar43;
          fVar35 = fVar57 + fVar35;
          fVar44 = fVar55 - fVar60;
          fVar46 = fVar56 - fVar39;
          fVar48 = fVar57 - fVar40;
          fVar49 = fVar58 - fVar54;
          auVar10._4_4_ = fVar46;
          auVar10._0_4_ = fVar44;
          auVar10._8_4_ = fVar48;
          auVar10._12_4_ = fVar49;
          auVar11._4_4_ = fVar46;
          auVar11._0_4_ = fVar44;
          auVar11._8_4_ = fVar48;
          auVar11._12_4_ = fVar49;
          auVar31 = NEON_ext(auVar10,auVar11,4,1);
          fVar55 = (float)uVar20;
          auVar51._0_4_ = fVar55 - fVar60;
          fVar56 = (float)((ulong)uVar20 >> 0x20);
          auVar51._4_4_ = fVar56 - fVar39;
          fVar57 = (float)*(undefined8 *)(pfVar26 + 6);
          auVar51._8_4_ = fVar57 - fVar40;
          fVar58 = (float)((ulong)*(undefined8 *)(pfVar26 + 6) >> 0x20);
          auVar51._12_4_ = fVar58 - fVar54;
          auVar62 = NEON_ext(auVar51,auVar51,4,1);
          fVar45 = fVar44 * auVar62._0_4_ - auVar31._0_4_ * auVar51._0_4_;
          fVar47 = fVar46 * auVar62._4_4_ - auVar31._4_4_ * auVar51._4_4_;
          fVar44 = fVar48 * auVar51._0_4_ - fVar44 * auVar51._8_4_;
          fVar46 = fVar49 * auVar51._4_4_ - fVar46 * auVar51._12_4_;
          auVar12._4_4_ = fVar47;
          auVar12._0_4_ = fVar45;
          auVar12._8_4_ = fVar44;
          auVar12._12_4_ = fVar46;
          auVar13._4_4_ = fVar47;
          auVar13._0_4_ = fVar45;
          auVar13._8_4_ = fVar44;
          auVar13._12_4_ = fVar46;
          auVar31 = NEON_ext(auVar12,auVar13,4,1);
          fVar36 = fVar36 + auVar31._0_4_;
          fVar41 = fVar41 + auVar31._4_4_;
          fVar61 = fVar61 + fVar45;
          pfVar26 = pfVar26 + 4;
        } while (uVar24 != 0);
      }
      fVar60 = fVar61 * fVar61 + fVar36 * fVar36 + fVar41 * fVar41;
      if (fVar60 != 0.0) {
        fVar60 = SQRT(fVar60);
        fVar37 = fVar36 / fVar60;
        fVar59 = fVar41 / SQRT(fVar61 * fVar61 + fVar36 * fVar36 + fVar41 * fVar41);
        fVar53 = fVar61 / fVar60;
      }
      uVar21 = NEON_fmov(0x3f800000,4);
      uVar20 = NEON_scvtf(CONCAT44(uVar2,uVar2),4);
      fVar36 = (float)uVar21 / (float)uVar20;
      fVar35 = -(fVar36 * fVar38 * fVar37 +
                 ((float)((ulong)uVar21 >> 0x20) / (float)((ulong)uVar20 >> 0x20)) * fVar43 * fVar59
                + fVar36 * fVar35 * fVar53);
      fVar36 = *(float *)*param_3;
      fVar41 = *(float *)(*param_3 + 4);
      fVar38 = *(float *)(*param_3 + 8);
      fVar43 = *(float *)(*param_3 + 0xc);
      bVar27 = true;
      auVar42._0_4_ = fVar36 * fVar37;
      auVar42._4_4_ = fVar41 * fVar59;
      auVar42._8_4_ = fVar38 * fVar53;
      auVar42._12_4_ = fVar43 * fVar35;
      auVar31 = NEON_ext(auVar42,auVar42,8,1);
      uStack_68 = CONCAT44(fVar35,fVar53);
      local_70 = CONCAT44(fVar59,fVar37);
      fVar35 = auVar31._0_4_ + fVar35;
      fVar39 = (float)*(undefined8 *)(*param_5 + 8);
      fVar40 = (float)((ulong)*(undefined8 *)(*param_5 + 8) >> 0x20);
      fVar61 = (float)*(undefined8 *)*param_5;
      fVar60 = (float)((ulong)*(undefined8 *)*param_5 >> 0x20);
      fVar54 = -(auVar42._0_4_ + auVar42._4_4_ + fVar35) /
               (fVar37 * fVar61 + fVar59 * fVar60 + fVar53 * fVar39);
      fVar35 = -(auVar42._0_4_ + auVar42._4_4_ + fVar35) /
               (fVar37 * fVar61 + fVar59 * fVar60 + fVar53 * fVar39);
      goto LAB_0308e8d4;
    }
    bVar27 = false;
  }
  else {
    pfVar26 = (float *)(lVar30 + (long)iVar22 * 0x10);
    bVar27 = false;
    fVar36 = *pfVar26;
    fVar41 = pfVar26[1];
    fVar38 = pfVar26[2];
    fVar43 = pfVar26[3];
    fVar61 = (float)*(undefined8 *)(pfVar26 + 4) - fVar36;
    fVar60 = (float)((ulong)*(undefined8 *)(pfVar26 + 4) >> 0x20) - fVar41;
    fVar39 = (float)*(undefined8 *)(pfVar26 + 6) - fVar38;
    fVar40 = (float)((ulong)*(undefined8 *)(pfVar26 + 6) >> 0x20) - fVar43;
    fVar37 = fVar61 * *(float *)*param_5;
    fVar53 = fVar60 * *(float *)(*param_5 + 4);
    fVar54 = fVar39 * *(float *)(*param_5 + 8);
    fVar59 = fVar37 + fVar53 + fVar54;
    fVar35 = fVar61 - *(float *)*param_5 * fVar59;
    fVar37 = fVar60 - *(float *)(*param_5 + 4) * (fVar37 + fVar53 + fVar54);
    fVar59 = fVar39 - *(float *)(*param_5 + 8) * fVar59;
    fVar53 = (*param_6 - fVar36) * fVar35;
    fVar55 = (param_6[1] - fVar41) * fVar37;
    fVar56 = (param_6[2] - fVar38) * fVar59;
    fVar54 = (fVar53 + fVar55 + fVar56) / (fVar35 * fVar35 + fVar37 * fVar37 + fVar59 * fVar59);
    fVar35 = (fVar53 + fVar55 + fVar56) / (fVar35 * fVar35 + fVar37 * fVar37 + fVar59 * fVar59);
LAB_0308e8d4:
    auVar33._0_8_ = CONCAT44(fVar41 + fVar60 * fVar35,fVar36 + fVar61 * fVar54);
    auVar33._8_4_ = fVar38 + fVar39 * fVar54;
    auVar33._12_4_ = fVar43 + fVar40 * fVar35;
    *(long *)(param_6 + 2) = auVar33._8_8_;
    *(undefined8 *)param_6 = auVar33._0_8_;
  }
  lVar30 = *param_1;
  if (iVar29 == -1) {
    uVar24 = FUN_0308dd24(lVar30,lVar30 + (long)(int)param_1[1] * 0x10,param_5,param_7);
    if ((uVar24 & 1) != 0) goto LAB_0308ea8c;
    fVar43 = (float)uStack_68;
    fVar36 = (float)((ulong)uStack_68 >> 0x20);
    fVar41 = (float)local_70;
    fVar38 = (float)((ulong)local_70 >> 0x20);
    if (!bVar27) {
      fVar37 = 0.0;
      fVar59 = 0.0;
      fVar61 = 0.0;
      fVar53 = 0.0;
      fVar41 = 0.0;
      fVar38 = 0.0;
      fVar43 = 0.0;
      uVar2 = (int)param_1[1] - 1;
      fVar36 = fVar41;
      fVar35 = fVar38;
      if (1 < (int)param_1[1]) {
        pfVar26 = (float *)*param_1;
        fVar37 = 0.0;
        fVar59 = 0.0;
        fVar61 = 0.0;
        fVar60 = *pfVar26;
        fVar39 = pfVar26[1];
        fVar40 = pfVar26[2];
        fVar54 = pfVar26[3];
        fVar53 = 0.0;
        fVar36 = 0.0;
        fVar35 = 0.0;
        uVar24 = (ulong)uVar2;
        fVar55 = fVar60;
        fVar56 = fVar39;
        fVar57 = fVar40;
        fVar58 = fVar54;
        do {
          uVar20 = *(undefined8 *)(pfVar26 + 4);
          uVar24 = uVar24 - 1;
          fVar37 = fVar55 + fVar37;
          fVar59 = fVar56 + fVar59;
          fVar61 = fVar57 + fVar61;
          fVar44 = fVar55 - fVar60;
          fVar46 = fVar56 - fVar39;
          fVar48 = fVar57 - fVar40;
          fVar49 = fVar58 - fVar54;
          auVar6._4_4_ = fVar46;
          auVar6._0_4_ = fVar44;
          auVar6._8_4_ = fVar48;
          auVar6._12_4_ = fVar49;
          auVar7._4_4_ = fVar46;
          auVar7._0_4_ = fVar44;
          auVar7._8_4_ = fVar48;
          auVar7._12_4_ = fVar49;
          auVar31 = NEON_ext(auVar6,auVar7,4,1);
          fVar55 = (float)uVar20;
          auVar52._0_4_ = fVar55 - fVar60;
          fVar56 = (float)((ulong)uVar20 >> 0x20);
          auVar52._4_4_ = fVar56 - fVar39;
          fVar57 = (float)*(undefined8 *)(pfVar26 + 6);
          auVar52._8_4_ = fVar57 - fVar40;
          fVar58 = (float)((ulong)*(undefined8 *)(pfVar26 + 6) >> 0x20);
          auVar52._12_4_ = fVar58 - fVar54;
          auVar62 = NEON_ext(auVar52,auVar52,4,1);
          fVar45 = fVar44 * auVar62._0_4_ - auVar31._0_4_ * auVar52._0_4_;
          fVar47 = fVar46 * auVar62._4_4_ - auVar31._4_4_ * auVar52._4_4_;
          fVar44 = fVar48 * auVar52._0_4_ - fVar44 * auVar52._8_4_;
          fVar46 = fVar49 * auVar52._4_4_ - fVar46 * auVar52._12_4_;
          auVar8._4_4_ = fVar47;
          auVar8._0_4_ = fVar45;
          auVar8._8_4_ = fVar44;
          auVar8._12_4_ = fVar46;
          auVar9._4_4_ = fVar47;
          auVar9._0_4_ = fVar45;
          auVar9._8_4_ = fVar44;
          auVar9._12_4_ = fVar46;
          auVar31 = NEON_ext(auVar8,auVar9,4,1);
          fVar36 = fVar36 + auVar31._0_4_;
          fVar35 = fVar35 + auVar31._4_4_;
          fVar53 = fVar53 + fVar45;
          pfVar26 = pfVar26 + 4;
        } while (uVar24 != 0);
      }
      fVar60 = fVar53 * fVar53 + fVar36 * fVar36 + fVar35 * fVar35;
      if (fVar60 != 0.0) {
        fVar60 = SQRT(fVar60);
        fVar41 = fVar36 / fVar60;
        fVar38 = fVar35 / SQRT(fVar53 * fVar53 + fVar36 * fVar36 + fVar35 * fVar35);
        fVar43 = fVar53 / fVar60;
      }
      uVar21 = NEON_fmov(0x3f800000,4);
      uVar20 = NEON_scvtf(CONCAT44(uVar2,uVar2),4);
      fVar36 = (float)uVar21 / (float)uVar20;
      fVar36 = -(fVar36 * fVar37 * fVar41 +
                 ((float)((ulong)uVar21 >> 0x20) / (float)((ulong)uVar20 >> 0x20)) * fVar59 * fVar38
                + fVar36 * fVar61 * fVar43);
    }
    fVar35 = *param_4;
    fVar37 = param_4[1];
    fVar59 = param_4[2];
    fVar61 = param_4[3];
    fVar53 = fVar41 * fVar35;
    fVar39 = fVar38 * fVar37;
    auVar4._4_4_ = fVar39;
    auVar4._0_4_ = fVar53;
    auVar4._8_4_ = fVar43 * fVar59;
    auVar4._12_4_ = fVar36 * fVar61;
    auVar5._4_4_ = fVar39;
    auVar5._0_4_ = fVar53;
    auVar5._8_4_ = fVar43 * fVar59;
    auVar5._12_4_ = fVar36 * fVar61;
    auVar31 = NEON_ext(auVar4,auVar5,8,1);
    fVar41 = fVar41 * *(float *)*param_5;
    fVar38 = fVar38 * *(float *)(*param_5 + 4);
    fVar43 = fVar43 * *(float *)(*param_5 + 8);
    fVar36 = auVar31._0_4_ + fVar36;
    fVar60 = -(fVar53 + fVar39 + fVar36) / (fVar41 + fVar38 + fVar43);
    fVar41 = -(fVar53 + fVar39 + fVar36) / (fVar41 + fVar38 + fVar43);
    fVar36 = *(float *)*param_5 * fVar60;
    fVar38 = *(float *)(*param_5 + 4) * fVar41;
    fVar60 = *(float *)(*param_5 + 8) * fVar60;
    fVar41 = *(float *)param_5[1] * fVar41;
  }
  else {
    pfVar26 = (float *)(lVar30 + (long)iVar29 * 0x10);
    fVar35 = *pfVar26;
    fVar37 = pfVar26[1];
    fVar59 = pfVar26[2];
    fVar61 = pfVar26[3];
    fVar36 = (float)*(undefined8 *)(pfVar26 + 4) - fVar35;
    fVar38 = (float)((ulong)*(undefined8 *)(pfVar26 + 4) >> 0x20) - fVar37;
    fVar60 = (float)*(undefined8 *)(pfVar26 + 6) - fVar59;
    fVar43 = fVar36 * *(float *)*param_5;
    fVar53 = fVar38 * *(float *)(*param_5 + 4);
    fVar40 = fVar60 * *(float *)(*param_5 + 8);
    fVar39 = fVar43 + fVar53 + fVar40;
    fVar41 = fVar36 - *(float *)*param_5 * fVar39;
    fVar53 = fVar38 - *(float *)(*param_5 + 4) * (fVar43 + fVar53 + fVar40);
    fVar39 = fVar60 - *(float *)(*param_5 + 8) * fVar39;
    fVar40 = (*param_7 - fVar35) * fVar41;
    fVar54 = (param_7[1] - fVar37) * fVar53;
    fVar55 = (param_7[2] - fVar59) * fVar39;
    fVar43 = (fVar40 + fVar54 + fVar55) / (fVar41 * fVar41 + fVar53 * fVar53 + fVar39 * fVar39);
    fVar41 = (fVar40 + fVar54 + fVar55) / (fVar41 * fVar41 + fVar53 * fVar53 + fVar39 * fVar39);
    fVar36 = fVar36 * fVar43;
    fVar38 = fVar38 * fVar41;
    fVar60 = fVar60 * fVar43;
    fVar41 = ((float)((ulong)*(undefined8 *)(pfVar26 + 6) >> 0x20) - fVar61) * fVar41;
  }
  auVar34._0_8_ = CONCAT44(fVar37 + fVar38,fVar35 + fVar36);
  auVar34._8_4_ = fVar59 + fVar60;
  auVar34._12_4_ = fVar61 + fVar41;
  *(long *)(param_7 + 2) = auVar34._8_8_;
  *(undefined8 *)param_7 = auVar34._0_8_;
LAB_0308ea8c:
  uVar20 = 1;
LAB_0308ea90:
  if (plVar28 != (long *)0x0) {
    lVar30 = *plVar28;
    if (((*(byte *)(lVar30 + 0x38) & 1) != 0) && (plVar28[6] != 0)) {
      puVar1 = (undefined8 *)plVar28[2];
      uVar24 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar24 <= (ulong)plVar28[3]) && (plVar28[2] = uVar24, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar28[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar28[2];
    uVar24 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar24 <= (ulong)plVar28[3]) && (plVar28[2] = uVar24, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c2d363;
      uVar21 = nn::os::GetSystemTick();
      puVar1[1] = uVar21;
    }
    if (*(code **)(lVar30 + 0x20) != (code *)0x0) {
      (**(code **)(lVar30 + 0x20))(*(undefined8 *)(lVar30 + 0x28));
    }
  }
  return uVar20;
}


