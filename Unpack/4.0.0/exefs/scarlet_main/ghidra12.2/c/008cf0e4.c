/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008cf0e4; name: FUN_008cf0e4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008cf0e4(undefined8 param_1,long param_2)

{
  int *piVar1;
  undefined1 (*pauVar2) [12];
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  char cVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  code *pcVar26;
  code *pcVar27;
  code *pcVar28;
  code *pcVar29;
  code *pcVar30;
  code *pcVar31;
  int iVar32;
  long lVar33;
  undefined4 uVar34;
  ulong uVar35;
  undefined8 *puVar36;
  char *pcVar37;
  long lVar38;
  float *pfVar39;
  long lVar40;
  float *pfVar41;
  long lVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  ulong uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar56 [12];
  float fVar59;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar60;
  float fVar62;
  uint uVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar63 [16];
  uint uVar61;
  uint uVar69;
  uint uVar70;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  undefined8 local_170;
  ulong uStack_168;
  undefined8 local_160;
  ulong uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  float local_98;
  float fStack_94;
  undefined4 local_90;
  float local_78;
  float local_74;
  
  lVar22 = *(long *)(param_2 + 0x3f0);
  if (lVar22 == 0) {
    pcVar27 = (code *)0x0;
    pcVar26 = (code *)0x0;
    lVar22 = *(long *)(param_2 + 0x3e0);
    if (lVar22 == 0) goto LAB_008cf14c;
LAB_008cf128:
    pcVar28 = *(code **)(lVar22 + 0x40);
    pcVar29 = *(code **)(lVar22 + 0x48);
    lVar22 = *(long *)(param_2 + 1000);
    if (lVar22 != 0) goto LAB_008cf134;
LAB_008cf15c:
    pcVar31 = (code *)0x0;
    pcVar30 = (code *)0x0;
  }
  else {
    pcVar26 = *(code **)(lVar22 + 0x40);
    pcVar27 = *(code **)(lVar22 + 0x48);
    lVar22 = *(long *)(param_2 + 0x3e0);
    if (lVar22 != 0) goto LAB_008cf128;
LAB_008cf14c:
    pcVar29 = (code *)0x0;
    pcVar28 = (code *)0x0;
    lVar22 = *(long *)(param_2 + 1000);
    if (lVar22 == 0) goto LAB_008cf15c;
LAB_008cf134:
    pcVar30 = *(code **)(lVar22 + 0x40);
    pcVar31 = *(code **)(lVar22 + 0x48);
  }
  if (0 < *(int *)(param_2 + 0x28)) {
    lVar22 = 0;
    uVar35 = 0;
    iVar32 = 0;
    fVar43 = *(float *)PTR_FloatPiDivided2_047d23f0;
    fVar44 = -fVar43;
    fVar53 = -*(float *)PTR_SinCoefficients_047d23d8;
    fVar60 = -*(float *)(PTR_SinCoefficients_047d23d8 + 8);
    fVar71 = -*(float *)(PTR_SinCoefficients_047d23d8 + 0x10);
    fVar48 = *(float *)PTR_FloatPi_047d23a0;
    fVar74 = -*(float *)PTR_CosCoefficients_047d23e0;
    fVar78 = -*(float *)(PTR_CosCoefficients_047d23e0 + 8);
    fVar54 = -*(float *)(PTR_CosCoefficients_047d23e0 + 0x10);
    fVar88 = fVar48 / *(float *)PTR_FloatDegree180_047d2390;
    fVar55 = -fVar48;
    fVar10 = *(float *)(PTR_SinCoefficients_047d23d8 + 4);
    fVar11 = *(float *)PTR_Float1Divided2Pi_047d23d0;
    fVar12 = *(float *)PTR_Float2Pi_047d23e8;
    fVar13 = *(float *)(PTR_SinCoefficients_047d23d8 + 0xc);
    fVar14 = *(float *)(PTR_CosCoefficients_047d23e0 + 4);
    fVar15 = *(float *)(PTR_CosCoefficients_047d23e0 + 0xc);
    do {
      piVar1 = (int *)(*(long *)(param_2 + 0xb0) + uVar35 * 0x20);
      if (*piVar1 != 0) {
        lVar23 = *(long *)(param_2 + 0xb8);
        pfVar39 = (float *)(piVar1 + 2);
        fVar87 = *(float *)(param_2 + 0x44) - *pfVar39;
        pfVar41 = (float *)(piVar1 + 3);
        fVar89 = *pfVar41;
        uVar34 = (undefined4)uVar35;
        if (fVar89 <= fVar87) {
          if ((pcVar26 != (code *)0x0 || pcVar28 != (code *)0x0) || pcVar30 != (code *)0x0) {
            local_b0 = *(undefined8 *)(piVar1 + 4);
            uStack_a8 = *(ulong *)(piVar1 + 6);
            local_a0 = param_2;
            local_98 = fVar87;
            fStack_94 = fVar89;
            local_90 = uVar34;
            if (pcVar26 != (code *)0x0) {
              (*pcVar26)(&local_b0);
            }
            if (pcVar28 != (code *)0x0) {
              (*pcVar28)(&local_b0);
            }
            if (pcVar30 != (code *)0x0) {
              (*pcVar30)(&local_b0);
            }
            *(undefined8 *)(*(long *)(param_2 + 0xb0) + uVar35 * 0x20 + 0x18) = 0;
            *(undefined8 *)(*(long *)(param_2 + 0xb0) + uVar35 * 0x20 + 0x10) = 0;
          }
          *piVar1 = 0;
          lVar38 = *(long *)(param_2 + 0x240);
        }
        else {
          lVar38 = uVar35 * 0x10;
          pauVar2 = (undefined1 (*) [12])(*(long *)(param_2 + 0x1d0) + lVar38);
          local_c0 = *(undefined8 *)*pauVar2;
          auVar56 = *pauVar2;
          local_78 = *pfVar41;
          uStack_b8 = (ulong)*(uint *)(*pauVar2 + 8);
          puVar36 = (undefined8 *)(*(long *)(param_2 + 0x1d8) + lVar38);
          local_d0 = *puVar36;
          uStack_c8 = (ulong)*(uint *)(puVar36 + 1);
          local_74 = *pfVar39;
          FUN_008d6074(fVar87,param_1,&local_c0,&local_d0,&local_74,&local_78,param_2,
                       uVar35 & 0xffffffff,&local_c0,&local_d0);
          puVar36 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar38);
          *puVar36 = local_c0;
          *(int *)(puVar36 + 1) = (int)uStack_b8;
          puVar36 = (undefined8 *)(*(long *)(param_2 + 0x1d8) + lVar38);
          *puVar36 = local_d0;
          *(int *)(puVar36 + 1) = (int)uStack_c8;
          *pfVar39 = local_74;
          *pfVar41 = local_78;
          fVar47 = local_78;
          if ((pcVar27 != (code *)0x0 || pcVar29 != (code *)0x0) || pcVar31 != (code *)0x0) {
            lVar25 = *(long *)(param_2 + 0xb0) + uVar35 * 0x20;
            local_b0 = *(undefined8 *)(lVar25 + 0x10);
            uStack_a8 = *(ulong *)(lVar25 + 0x18);
            local_a0 = param_2;
            local_98 = fVar87;
            fStack_94 = fVar89;
            local_90 = uVar34;
            if (pcVar27 != (code *)0x0) {
              (*pcVar27)(&local_b0);
            }
            if (pcVar29 != (code *)0x0) {
              (*pcVar29)(&local_b0);
            }
            if (pcVar31 != (code *)0x0) {
              (*pcVar31)(&local_b0);
            }
            *(undefined8 *)(*(long *)(param_2 + 0xb0) + uVar35 * 0x20 + 0x10) = local_b0;
            fVar47 = *pfVar41;
          }
          *(float *)(*(long *)(param_2 + 0x1d0) + lVar38 + 0xc) = fVar47;
          *(float *)(*(long *)(param_2 + 0x1d8) + lVar38 + 0xc) = *pfVar39;
          fVar87 = (float)local_c0 - auVar56._0_4_;
          fVar89 = (float)((ulong)local_c0 >> 0x20) - auVar56._4_4_;
          fVar47 = (float)uStack_b8 - auVar56._8_4_;
          fVar49 = ABS(fVar89);
          bVar16 = false;
          bVar18 = false;
          bVar20 = false;
          if (ABS(fVar87) <= 0.0001) {
            bVar16 = false;
            bVar18 = false;
            bVar20 = true;
            if (!NAN(fVar49)) {
              bVar16 = fVar49 < 0.0001;
              bVar18 = fVar49 == 0.0001;
              bVar20 = false;
            }
          }
          fVar49 = ABS(fVar47);
          bVar17 = false;
          bVar19 = false;
          bVar21 = false;
          if (bVar18 || bVar16 != bVar20) {
            bVar17 = false;
            bVar19 = false;
            bVar21 = true;
            if (!NAN(fVar49)) {
              bVar17 = fVar49 < 0.0001;
              bVar19 = fVar49 == 0.0001;
              bVar21 = false;
            }
          }
          if (!bVar19 && bVar17 == bVar21) {
            puVar36 = (undefined8 *)(*(long *)(param_2 + 0x1e0) + uVar35 * 0x10);
            *puVar36 = CONCAT44(fVar89,fVar87);
            *(float *)(puVar36 + 1) = fVar47;
          }
          if (0 < *(int *)(*(long *)(param_2 + 0x238) + 0x88)) {
            lVar40 = 0;
            lVar25 = lVar23 + 0x148;
            lVar33 = lVar23;
            lVar42 = lVar23;
            do {
              pcVar37 = *(char **)(lVar33 + lVar22);
              if (pcVar37 == (char *)0x0) break;
              if (((*(long *)(pcVar37 + 0x98) != 0) &&
                  (lVar24 = *(long *)(pcVar37 + 0xa0), *(char *)(lVar24 + 0x7e4) == '\0')) &&
                 (*piVar1 != 0)) {
                fVar87 = *(float *)(lVar23 + uVar35 * 0x158 + 0x80);
                if (*(float *)(pcVar37 + 0x44) == 0.0) {
                  if (*(char *)(*(long *)(pcVar37 + 0x238) + 2) == '\0') {
                    *(undefined8 *)(pcVar37 + 0x360) = *(undefined8 *)(pcVar37 + 0x2e0);
                    *(undefined8 *)(pcVar37 + 0x368) = *(undefined8 *)(pcVar37 + 0x2e8);
                    *(undefined8 *)(pcVar37 + 0x370) = *(undefined8 *)(pcVar37 + 0x2f0);
                    *(undefined8 *)(pcVar37 + 0x378) = *(undefined8 *)(pcVar37 + 0x2f8);
                    *(undefined8 *)(pcVar37 + 0x340) = *(undefined8 *)(pcVar37 + 0x2c0);
                    *(undefined8 *)(pcVar37 + 0x348) = *(undefined8 *)(pcVar37 + 0x2c8);
                    *(undefined8 *)(pcVar37 + 0x350) = *(undefined8 *)(pcVar37 + 0x2d0);
                    *(undefined8 *)(pcVar37 + 0x358) = *(undefined8 *)(pcVar37 + 0x2d8);
                    *(undefined8 *)(pcVar37 + 0x398) = *(undefined8 *)(pcVar37 + 0x318);
                    *(undefined8 *)(pcVar37 + 0x390) = *(undefined8 *)(pcVar37 + 0x310);
                    *(undefined8 *)(pcVar37 + 0x388) = *(undefined8 *)(pcVar37 + 0x308);
                    *(undefined8 *)(pcVar37 + 0x380) = *(undefined8 *)(pcVar37 + 0x300);
                    *(undefined8 *)(pcVar37 + 0x3b8) = *(undefined8 *)(pcVar37 + 0x338);
                    *(undefined8 *)(pcVar37 + 0x3b0) = *(undefined8 *)(pcVar37 + 0x330);
                    *(undefined8 *)(pcVar37 + 0x3a8) = *(undefined8 *)(pcVar37 + 0x328);
                    *(undefined8 *)(pcVar37 + 0x3a0) = *(undefined8 *)(pcVar37 + 800);
                  }
                  else {
                    fVar89 = *(float *)(pcVar37 + 0x608);
                    if (*(long *)(*(long *)(pcVar37 + 0x238) + 0x298) == 0) {
                      auVar56 = *(undefined1 (*) [12])(pcVar37 + 0x60c);
                    }
                    else {
                      auVar56._4_4_ = fVar88 * *(float *)(pcVar37 + 0x610);
                      auVar56._0_4_ = *(float *)(pcVar37 + 0x60c) * fVar88;
                      auVar56._8_4_ = fVar88 * *(float *)(pcVar37 + 0x614);
                    }
                    fVar47 = auVar56._0_4_ * fVar11;
                    fVar49 = auVar56._4_4_ * fVar11;
                    fVar68 = auVar56._8_4_ * fVar11;
                    auVar72._0_4_ =
                         (int)(fVar47 + (float)(-(uint)(0.0 <= fVar47) & 0x80000000 ^ 0xbf000000));
                    auVar72._4_4_ =
                         (int)(fVar49 + (float)(-(uint)(0.0 <= fVar49) & 0x80000000 ^ 0xbf000000));
                    auVar72._8_4_ =
                         (int)(fVar68 + (float)(-(uint)(0.0 <= fVar68) & 0x80000000 ^ 0xbf000000));
                    auVar72._12_4_ =
                         (int)(fVar11 * 0.0 +
                              (float)(-(uint)(0.0 <= fVar11 * 0.0) & 0x80000000 ^ 0xbf000000));
                    auVar63 = NEON_scvtf(auVar72,4);
                    fVar47 = auVar56._0_4_ - auVar63._0_4_ * fVar12;
                    fVar49 = auVar56._4_4_ - auVar63._4_4_ * fVar12;
                    fVar68 = auVar56._8_4_ - auVar63._8_4_ * fVar12;
                    fVar59 = 0.0 - auVar63._12_4_ * fVar12;
                    uVar61 = -(uint)(fVar43 < fVar47);
                    uVar66 = -(uint)(fVar43 < fVar49);
                    uVar69 = -(uint)(fVar43 < fVar68);
                    uVar70 = -(uint)(fVar43 < fVar59);
                    fVar47 = (float)((uint)fVar47 ^
                                    ((uint)fVar47 ^ (uint)(fVar48 - fVar47)) & uVar61);
                    fVar49 = (float)((uint)fVar49 ^
                                    ((uint)fVar49 ^ (uint)(fVar48 - fVar49)) & uVar66);
                    fVar68 = (float)((uint)fVar68 ^
                                    ((uint)fVar68 ^ (uint)(fVar48 - fVar68)) & uVar69);
                    fVar59 = (float)((uint)fVar59 ^
                                    ((uint)fVar59 ^ (uint)(fVar48 - fVar59)) & uVar70);
                    uVar90 = -(uint)(fVar47 < fVar44);
                    uVar91 = -(uint)(fVar49 < fVar44);
                    uVar92 = -(uint)(fVar68 < fVar44);
                    uVar93 = -(uint)(fVar59 < fVar44);
                    fVar47 = (float)((uint)fVar47 ^
                                    ((uint)fVar47 ^ (uint)(fVar55 - fVar47)) & uVar90);
                    fVar49 = (float)((uint)fVar49 ^
                                    ((uint)fVar49 ^ (uint)(fVar55 - fVar49)) & uVar91);
                    fVar68 = (float)((uint)fVar68 ^
                                    ((uint)fVar68 ^ (uint)(fVar55 - fVar68)) & uVar92);
                    fVar59 = (float)((uint)fVar59 ^
                                    ((uint)fVar59 ^ (uint)(fVar55 - fVar59)) & uVar93);
                    fVar94 = fVar47 * fVar47;
                    fVar95 = fVar49 * fVar49;
                    fVar96 = fVar68 * fVar68;
                    fVar97 = fVar59 * fVar59;
                    auVar64[0] = ~(byte)uVar90 & ~(byte)uVar61;
                    auVar64[1] = ~(byte)(uVar90 >> 8) & ~(byte)(uVar61 >> 8);
                    auVar64[2] = ~(byte)(uVar90 >> 0x10) & ~(byte)(uVar61 >> 0x10);
                    auVar64[3] = ~(byte)(uVar90 >> 0x18) & ~(byte)(uVar61 >> 0x18);
                    auVar64[4] = ~(byte)uVar91 & ~(byte)uVar66;
                    auVar64[5] = ~(byte)(uVar91 >> 8) & ~(byte)(uVar66 >> 8);
                    auVar64[6] = ~(byte)(uVar91 >> 0x10) & ~(byte)(uVar66 >> 0x10);
                    auVar64[7] = ~(byte)(uVar91 >> 0x18) & ~(byte)(uVar66 >> 0x18);
                    auVar64[8] = ~(byte)uVar92 & ~(byte)uVar69;
                    auVar64[9] = ~(byte)(uVar92 >> 8) & ~(byte)(uVar69 >> 8);
                    auVar64[10] = ~(byte)(uVar92 >> 0x10) & ~(byte)(uVar69 >> 0x10);
                    auVar64[0xb] = ~(byte)(uVar92 >> 0x18) & ~(byte)(uVar69 >> 0x18);
                    auVar64[0xc] = ~(byte)uVar93 & ~(byte)uVar70;
                    auVar64[0xd] = ~(byte)(uVar93 >> 8) & ~(byte)(uVar70 >> 8);
                    auVar64[0xe] = ~(byte)(uVar93 >> 0x10) & ~(byte)(uVar70 >> 0x10);
                    auVar64[0xf] = ~(byte)(uVar93 >> 0x18) & ~(byte)(uVar70 >> 0x18);
                    auVar72 = NEON_fmov(0x3f800000,4);
                    auVar73._0_4_ =
                         auVar72._0_4_ +
                         fVar94 * (fVar54 + fVar94 * (fVar15 + fVar94 * (fVar78 + fVar94 * (fVar14 +
                                                                                           fVar94 * 
                                                  fVar74))));
                    auVar73._4_4_ =
                         auVar72._4_4_ +
                         fVar95 * (fVar54 + fVar95 * (fVar15 + fVar95 * (fVar78 + fVar95 * (fVar14 +
                                                                                           fVar95 * 
                                                  fVar74))));
                    auVar73._8_4_ =
                         auVar72._8_4_ +
                         fVar96 * (fVar54 + fVar96 * (fVar15 + fVar96 * (fVar78 + fVar96 * (fVar14 +
                                                                                           fVar96 * 
                                                  fVar74))));
                    auVar73._12_4_ =
                         auVar72._12_4_ +
                         fVar97 * (fVar54 + fVar97 * (fVar15 + fVar97 * (fVar78 + fVar97 * (fVar14 +
                                                                                           fVar97 * 
                                                  fVar74))));
                    auVar63._4_4_ = -auVar73._4_4_;
                    auVar63._0_4_ = -auVar73._0_4_;
                    auVar63._8_4_ = -auVar73._8_4_;
                    auVar63._12_4_ = -auVar73._12_4_;
                    auVar65._4_4_ = -auVar73._4_4_;
                    auVar65._0_4_ = -auVar73._0_4_;
                    auVar65._8_4_ = -auVar73._8_4_;
                    auVar65._12_4_ = -auVar73._12_4_;
                    auVar65 = auVar65 ^ (auVar63 ^ auVar73) & auVar64;
                    auVar57._0_4_ =
                         fVar47 * (auVar72._0_4_ +
                                  fVar94 * (fVar71 + fVar94 * (fVar13 + fVar94 * (fVar60 + fVar94 * 
                                                  (fVar10 + fVar94 * fVar53)))));
                    auVar57._4_4_ =
                         fVar49 * (auVar72._4_4_ +
                                  fVar95 * (fVar71 + fVar95 * (fVar13 + fVar95 * (fVar60 + fVar95 * 
                                                  (fVar10 + fVar95 * fVar53)))));
                    auVar57._8_4_ =
                         fVar68 * (auVar72._8_4_ +
                                  fVar96 * (fVar71 + fVar96 * (fVar13 + fVar96 * (fVar60 + fVar96 * 
                                                  (fVar10 + fVar96 * fVar53)))));
                    auVar57._12_4_ =
                         fVar59 * (auVar72._12_4_ +
                                  fVar97 * (fVar71 + fVar97 * (fVar13 + fVar97 * (fVar60 + fVar97 * 
                                                  (fVar10 + fVar97 * fVar53)))));
                    fVar52 = auVar65._4_4_;
                    auVar72 = NEON_ext(auVar65,auVar65,8,1);
                    auVar63 = NEON_ext(auVar57,auVar57,8,1);
                    fVar79 = fVar52 * (float)DAT_03cb5410;
                    fVar80 = (float)((ulong)DAT_03cb5410 >> 0x20) * 0.0;
                    fVar47 = auVar72._0_4_;
                    fVar49 = auVar63._0_4_;
                    fVar81 = auVar57._4_4_ * (float)DAT_03cb56b0;
                    fVar83 = (float)((ulong)DAT_03cb56b0 >> 0x20) * 0.0;
                    fVar59 = auVar65._0_4_;
                    fVar68 = (float)*(undefined8 *)(pcVar37 + 0x600);
                    fVar94 = fVar49 * fVar59 * (float)_DAT_03caac70 +
                             fVar47 * auVar57._4_4_ * auVar57._0_4_;
                    fVar95 = fVar47 * fVar59 * (float)((ulong)_DAT_03caac70 >> 0x20) +
                             fVar49 * auVar57._4_4_ * auVar57._0_4_;
                    fVar96 = fVar59 * 0.0 * (float)_UNK_03caac78 + fVar79 * auVar57._0_4_;
                    fVar97 = fVar59 * 0.0 * (float)((ulong)_UNK_03caac78 >> 0x20) +
                             fVar80 * auVar57._0_4_;
                    fVar62 = fVar49 * auVar57._0_4_ * (float)_DAT_03cab9d0 +
                             fVar47 * auVar57._4_4_ * fVar59;
                    fVar67 = fVar47 * auVar57._0_4_ * (float)((ulong)_DAT_03cab9d0 >> 0x20) +
                             fVar49 * auVar57._4_4_ * fVar59;
                    fVar79 = auVar57._0_4_ * 0.0 * (float)_UNK_03cab9d8 + fVar79 * fVar59;
                    fVar80 = auVar57._0_4_ * 0.0 * (float)((ulong)_UNK_03cab9d8 >> 0x20) +
                             fVar80 * fVar59;
                    fVar59 = (float)((ulong)*(undefined8 *)(pcVar37 + 0x600) >> 0x20);
                    *(ulong *)(pcVar37 + 0x388) = CONCAT44(fVar83,fVar81);
                    *(ulong *)(pcVar37 + 0x380) = CONCAT44(fVar49 * fVar52,fVar47 * fVar52);
                    *(float *)(pcVar37 + 0x398) = fVar96;
                    *(float *)(pcVar37 + 0x39c) = fVar97;
                    *(float *)(pcVar37 + 0x390) = fVar94;
                    *(float *)(pcVar37 + 0x394) = fVar95;
                    *(ulong *)(pcVar37 + 0x348) = CONCAT44(fVar83 * fVar68,fVar81 * fVar68);
                    *(ulong *)(pcVar37 + 0x340) =
                         CONCAT44(fVar49 * fVar52 * fVar68,fVar47 * fVar52 * fVar68);
                    *(ulong *)(pcVar37 + 0x358) = CONCAT44(fVar97 * fVar59,fVar96 * fVar59);
                    *(ulong *)(pcVar37 + 0x350) = CONCAT44(fVar95 * fVar59,fVar94 * fVar59);
                    *(float *)(pcVar37 + 0x3a8) = fVar79;
                    *(float *)(pcVar37 + 0x3ac) = fVar80;
                    *(float *)(pcVar37 + 0x3a0) = fVar62;
                    *(float *)(pcVar37 + 0x3a4) = fVar67;
                    *(ulong *)(pcVar37 + 0x3b8) = (ulong)*(uint *)(pcVar37 + 0x620);
                    *(undefined8 *)(pcVar37 + 0x3b0) = *(undefined8 *)(pcVar37 + 0x618);
                    *(ulong *)(pcVar37 + 0x368) = CONCAT44(fVar80 * fVar89,fVar79 * fVar89);
                    *(ulong *)(pcVar37 + 0x360) = CONCAT44(fVar67 * fVar89,fVar62 * fVar89);
                    *(ulong *)(pcVar37 + 0x378) = (ulong)*(uint *)(pcVar37 + 0x620);
                    *(undefined8 *)(pcVar37 + 0x370) = *(undefined8 *)(pcVar37 + 0x618);
                  }
                }
                fVar89 = (float)NEON_ucvtf(*(undefined4 *)(lVar24 + 0x7f8));
                fVar89 = *pfVar41 * (fVar89 / 100.0);
                if (fVar89 <= fVar87) {
                  if (*(char *)(lVar24 + 0x7f0) == '\0') {
                    if ((*pfVar41 <= fVar87) && (*pcVar37 != '\0')) goto LAB_008cf888;
                  }
                  else {
                    fVar47 = (float)NEON_ucvtf(*(undefined4 *)(lVar24 + 0x7fc));
                    if (fVar89 + fVar47 <= fVar87) {
LAB_008cf888:
                      if (*(char *)(lVar25 + lVar22) != '\0') goto LAB_008cf580;
                    }
                  }
                  puVar36 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar38);
                  local_b0 = *puVar36;
                  fVar89 = *(float *)(puVar36 + 1);
                  uStack_a8 = (ulong)(uint)fVar89;
                  puVar36 = (undefined8 *)(*(long *)(param_2 + 0x1d8) + lVar38);
                  local_e0 = *puVar36;
                  fVar47 = *(float *)(puVar36 + 1);
                  fVar49 = (float)local_e0;
                  fVar68 = (float)((ulong)local_e0 >> 0x20);
                  uStack_d8 = (ulong)(uint)fVar47;
                  if (*(char *)(*(long *)(param_2 + 0xa0) + 0x753) == '\x01') {
                    pfVar3 = (float *)(*(long *)(param_2 + 0x210) + lVar38);
                    pfVar4 = (float *)(*(long *)(param_2 + 0x218) + lVar38);
                    pfVar5 = (float *)(*(long *)(param_2 + 0x220) + lVar38);
                    fVar59 = (float)local_b0;
                    fVar94 = (float)((ulong)local_b0 >> 0x20);
                    uStack_a8 = CONCAT44(fVar59 * 0.0 + fVar94 * 0.0 + fVar89 * 0.0 + 0.0,
                                         *pfVar5 * fVar59 + pfVar5[1] * fVar94 + pfVar5[2] * fVar89
                                         + pfVar5[3]);
                    local_b0 = CONCAT44(*pfVar4 * fVar59 + pfVar4[1] * fVar94 + pfVar4[2] * fVar89 +
                                        pfVar4[3],
                                        *pfVar3 * fVar59 + pfVar3[1] * fVar94 + pfVar3[2] * fVar89 +
                                        pfVar3[3]);
                    local_e0 = CONCAT44(*pfVar4 * fVar49 + pfVar4[1] * fVar68 + pfVar4[2] * fVar47 +
                                        0.0,*pfVar3 * fVar49 + pfVar3[1] * fVar68 +
                                            pfVar3[2] * fVar47 + 0.0);
                    uStack_d8 = CONCAT44(fVar49 * 0.0 + fVar68 * 0.0 + fVar47 * 0.0 + 0.0,
                                         *pfVar5 * fVar49 + pfVar5[1] * fVar68 + pfVar5[2] * fVar47
                                         + 0.0);
                  }
                  *(undefined8 **)(pcVar37 + 0x5e8) = &local_b0;
                  *(undefined8 **)(pcVar37 + 0x5f0) = &local_e0;
                  *(undefined4 *)(pcVar37 + 0x5f8) = uVar34;
                  if ((fVar87 != 0.0) && (*(char *)(lVar24 + 0x7f2) != '\0')) {
                    puVar36 = (undefined8 *)(*(long *)(param_2 + 0x1e0) + uVar35 * 0x10);
                    uVar46 = *puVar36;
                    *(ulong *)(pcVar37 + 0x3d8) = (ulong)*(uint *)(puVar36 + 1);
                    *(undefined8 *)(pcVar37 + 0x3d0) = uVar46;
                  }
                  lVar24 = lVar42 + lVar22;
                  uVar45 = *(undefined4 *)(param_2 + 0x4c);
                  if ((*(char *)(*(long *)(pcVar37 + 0xa0) + 0x753) == '\x01') &&
                     (*(char *)(*(long *)(param_2 + 0xa0) + 0x753) != '\x01')) {
                    *(undefined8 *)(pcVar37 + 0x360) = *(undefined8 *)(pcVar37 + 0x2e0);
                    *(undefined8 *)(pcVar37 + 0x368) = *(undefined8 *)(pcVar37 + 0x2e8);
                    *(undefined8 *)(pcVar37 + 0x370) = *(undefined8 *)(pcVar37 + 0x2f0);
                    *(undefined8 *)(pcVar37 + 0x378) = *(undefined8 *)(pcVar37 + 0x2f8);
                    *(undefined8 *)(pcVar37 + 0x340) = *(undefined8 *)(pcVar37 + 0x2c0);
                    *(undefined8 *)(pcVar37 + 0x348) = *(undefined8 *)(pcVar37 + 0x2c8);
                    *(undefined8 *)(pcVar37 + 0x350) = *(undefined8 *)(pcVar37 + 0x2d0);
                    *(undefined8 *)(pcVar37 + 0x358) = *(undefined8 *)(pcVar37 + 0x2d8);
                    *(undefined8 *)(pcVar37 + 0x398) = *(undefined8 *)(pcVar37 + 0x318);
                    *(undefined8 *)(pcVar37 + 0x388) = *(undefined8 *)(pcVar37 + 0x308);
                    *(undefined8 *)(pcVar37 + 0x390) = *(undefined8 *)(pcVar37 + 0x310);
                    *(undefined8 *)(pcVar37 + 0x380) = *(undefined8 *)(pcVar37 + 0x300);
                    *(undefined8 *)(pcVar37 + 0x3b8) = *(undefined8 *)(pcVar37 + 0x338);
                    *(undefined8 *)(pcVar37 + 0x3b0) = *(undefined8 *)(pcVar37 + 0x330);
                    *(undefined8 *)(pcVar37 + 0x3a8) = *(undefined8 *)(pcVar37 + 0x328);
                    *(undefined8 *)(pcVar37 + 0x3a0) = *(undefined8 *)(pcVar37 + 800);
                    fVar87 = *(float *)(pcVar37 + 0x350);
                    fVar89 = *(float *)(pcVar37 + 0x354);
                    fVar47 = *(float *)(pcVar37 + 0x358);
                    fVar80 = (float)*(undefined8 *)(param_2 + 0x348);
                    fVar81 = (float)((ulong)*(undefined8 *)(param_2 + 0x348) >> 0x20);
                    fVar67 = (float)*(undefined8 *)(param_2 + 0x340);
                    fVar79 = (float)((ulong)*(undefined8 *)(param_2 + 0x340) >> 0x20);
                    fVar76 = (float)*(undefined8 *)(param_2 + 0x358);
                    fVar77 = (float)((ulong)*(undefined8 *)(param_2 + 0x358) >> 0x20);
                    fVar83 = (float)*(undefined8 *)(param_2 + 0x350);
                    fVar75 = (float)((ulong)*(undefined8 *)(param_2 + 0x350) >> 0x20);
                    fVar97 = (float)*(undefined8 *)(pcVar37 + 0x340);
                    fVar62 = (float)((ulong)*(undefined8 *)(pcVar37 + 0x340) >> 0x20);
                    fVar85 = (float)*(undefined8 *)(param_2 + 0x368);
                    fVar86 = (float)((ulong)*(undefined8 *)(param_2 + 0x368) >> 0x20);
                    fVar82 = (float)*(undefined8 *)(param_2 + 0x360);
                    fVar84 = (float)((ulong)*(undefined8 *)(param_2 + 0x360) >> 0x20);
                    uVar50 = *(undefined8 *)(param_2 + 0x378);
                    uVar46 = *(undefined8 *)(param_2 + 0x370);
                    fVar52 = (float)*(undefined8 *)(pcVar37 + 0x348);
                    fVar49 = *(float *)(pcVar37 + 0x360);
                    fVar68 = *(float *)(pcVar37 + 0x364);
                    fVar59 = *(float *)(pcVar37 + 0x368);
                    fVar94 = *(float *)(pcVar37 + 0x370);
                    fVar95 = *(float *)(pcVar37 + 0x374);
                    fVar96 = *(float *)(pcVar37 + 0x378);
                    *(float *)(pcVar37 + 0x348) =
                         fVar80 * fVar97 + fVar76 * fVar62 + fVar85 * fVar52;
                    *(float *)(pcVar37 + 0x34c) =
                         fVar81 * fVar97 + fVar77 * fVar62 + fVar86 * fVar52;
                    *(float *)(pcVar37 + 0x340) =
                         fVar67 * fVar97 + fVar83 * fVar62 + fVar82 * fVar52;
                    *(float *)(pcVar37 + 0x344) =
                         fVar79 * fVar97 + fVar75 * fVar62 + fVar84 * fVar52;
                    *(ulong *)(pcVar37 + 0x358) =
                         CONCAT44(fVar81 * fVar87 + fVar77 * fVar89 + fVar86 * fVar47,
                                  fVar80 * fVar87 + fVar76 * fVar89 + fVar85 * fVar47);
                    *(ulong *)(pcVar37 + 0x350) =
                         CONCAT44(fVar79 * fVar87 + fVar75 * fVar89 + fVar84 * fVar47,
                                  fVar67 * fVar87 + fVar83 * fVar89 + fVar82 * fVar47);
                    *(ulong *)(pcVar37 + 0x368) =
                         CONCAT44(fVar81 * fVar49 + fVar77 * fVar68 + fVar86 * fVar59,
                                  fVar80 * fVar49 + fVar76 * fVar68 + fVar85 * fVar59);
                    *(ulong *)(pcVar37 + 0x360) =
                         CONCAT44(fVar79 * fVar49 + fVar75 * fVar68 + fVar84 * fVar59,
                                  fVar67 * fVar49 + fVar83 * fVar68 + fVar82 * fVar59);
                    *(float *)(pcVar37 + 0x378) =
                         (float)uVar50 + fVar80 * fVar94 + fVar76 * fVar95 + fVar85 * fVar96;
                    *(float *)(pcVar37 + 0x37c) =
                         (float)((ulong)uVar50 >> 0x20) +
                         fVar81 * fVar94 + fVar77 * fVar95 + fVar86 * fVar96;
                    *(float *)(pcVar37 + 0x370) =
                         (float)uVar46 + fVar67 * fVar94 + fVar83 * fVar95 + fVar82 * fVar96;
                    *(float *)(pcVar37 + 0x374) =
                         (float)((ulong)uVar46 >> 0x20) +
                         fVar79 * fVar94 + fVar75 * fVar95 + fVar84 * fVar96;
                    fVar87 = *(float *)(pcVar37 + 0x390);
                    fVar89 = *(float *)(pcVar37 + 0x394);
                    fVar47 = *(float *)(pcVar37 + 0x398);
                    auVar63 = *(undefined1 (*) [16])(param_2 + 0x380);
                    fVar76 = (float)*(undefined8 *)(param_2 + 0x398);
                    fVar77 = (float)((ulong)*(undefined8 *)(param_2 + 0x398) >> 0x20);
                    fVar83 = (float)*(undefined8 *)(param_2 + 0x390);
                    fVar75 = (float)((ulong)*(undefined8 *)(param_2 + 0x390) >> 0x20);
                    fVar97 = (float)*(undefined8 *)(pcVar37 + 0x380);
                    fVar67 = auVar63._0_4_;
                    fVar79 = auVar63._4_4_;
                    fVar80 = auVar63._8_4_;
                    fVar81 = auVar63._12_4_;
                    fVar62 = (float)((ulong)*(undefined8 *)(pcVar37 + 0x380) >> 0x20);
                    fVar85 = (float)*(undefined8 *)(param_2 + 0x3a8);
                    fVar86 = (float)((ulong)*(undefined8 *)(param_2 + 0x3a8) >> 0x20);
                    fVar82 = (float)*(undefined8 *)(param_2 + 0x3a0);
                    fVar84 = (float)((ulong)*(undefined8 *)(param_2 + 0x3a0) >> 0x20);
                    uVar50 = *(undefined8 *)(param_2 + 0x3b8);
                    uVar46 = *(undefined8 *)(param_2 + 0x3b0);
                    fVar52 = (float)*(undefined8 *)(pcVar37 + 0x388);
                    fVar49 = *(float *)(pcVar37 + 0x3a0);
                    fVar68 = *(float *)(pcVar37 + 0x3a4);
                    fVar59 = *(float *)(pcVar37 + 0x3a8);
                    fVar94 = *(float *)(pcVar37 + 0x3b0);
                    fVar95 = *(float *)(pcVar37 + 0x3b4);
                    fVar96 = *(float *)(pcVar37 + 0x3b8);
                    auVar58._0_8_ =
                         CONCAT44(fVar79 * fVar49 + fVar75 * fVar68 + fVar84 * fVar59,
                                  fVar67 * fVar49 + fVar83 * fVar68 + fVar82 * fVar59);
                    auVar58._8_4_ = fVar80 * fVar49 + fVar76 * fVar68 + fVar85 * fVar59;
                    auVar58._12_4_ = fVar81 * fVar49 + fVar77 * fVar68 + fVar86 * fVar59;
                    *(ulong *)(pcVar37 + 0x388) =
                         CONCAT44(fVar81 * fVar97 + fVar77 * fVar62 + fVar86 * fVar52,
                                  fVar80 * fVar97 + fVar76 * fVar62 + fVar85 * fVar52);
                    *(ulong *)(pcVar37 + 0x380) =
                         CONCAT44(fVar79 * fVar97 + fVar75 * fVar62 + fVar84 * fVar52,
                                  fVar67 * fVar97 + fVar83 * fVar62 + fVar82 * fVar52);
                    *(ulong *)(pcVar37 + 0x398) =
                         CONCAT44(fVar81 * fVar87 + fVar77 * fVar89 + fVar86 * fVar47,
                                  fVar80 * fVar87 + fVar76 * fVar89 + fVar85 * fVar47);
                    *(ulong *)(pcVar37 + 0x390) =
                         CONCAT44(fVar79 * fVar87 + fVar75 * fVar89 + fVar84 * fVar47,
                                  fVar67 * fVar87 + fVar83 * fVar89 + fVar82 * fVar47);
                    *(long *)(pcVar37 + 0x3a8) = auVar58._8_8_;
                    *(undefined8 *)(pcVar37 + 0x3a0) = auVar58._0_8_;
                    *(ulong *)(pcVar37 + 0x3b8) =
                         CONCAT44((float)((ulong)uVar50 >> 0x20) +
                                  fVar81 * fVar94 + fVar77 * fVar95 + fVar86 * fVar96,
                                  (float)uVar50 +
                                  fVar80 * fVar94 + fVar76 * fVar95 + fVar85 * fVar96);
                    *(ulong *)(pcVar37 + 0x3b0) =
                         CONCAT44((float)((ulong)uVar46 >> 0x20) +
                                  fVar79 * fVar94 + fVar75 * fVar95 + fVar84 * fVar96,
                                  (float)uVar46 +
                                  fVar67 * fVar94 + fVar83 * fVar95 + fVar82 * fVar96);
                  }
                  FUN_008cd890(uVar45,*(undefined8 *)(pcVar37 + 0x98),lVar24 + 0x88,lVar24 + 200,
                               lVar24 + 0x108,(char *)(lVar25 + lVar22),pcVar37,0);
                  pcVar37[0x5f8] = -1;
                  pcVar37[0x5f9] = -1;
                  pcVar37[0x5fa] = -1;
                  pcVar37[0x5fb] = -1;
                  pcVar37[0x5e8] = '\0';
                  pcVar37[0x5e9] = '\0';
                  pcVar37[0x5ea] = '\0';
                  pcVar37[0x5eb] = '\0';
                  pcVar37[0x5ec] = '\0';
                  pcVar37[0x5ed] = '\0';
                  pcVar37[0x5ee] = '\0';
                  pcVar37[0x5ef] = '\0';
                  pcVar37[0x5f0] = '\0';
                  pcVar37[0x5f1] = '\0';
                  pcVar37[0x5f2] = '\0';
                  pcVar37[0x5f3] = '\0';
                  pcVar37[0x5f4] = '\0';
                  pcVar37[0x5f5] = '\0';
                  pcVar37[0x5f6] = '\0';
                  pcVar37[0x5f7] = '\0';
                }
              }
LAB_008cf580:
              lVar40 = lVar40 + 1;
              lVar33 = lVar33 + 8;
              lVar25 = lVar25 + 1;
              lVar42 = lVar42 + 4;
            } while (lVar40 < *(int *)(*(long *)(param_2 + 0x238) + 0x88));
          }
          iVar32 = iVar32 + 1;
          lVar38 = *(long *)(param_2 + 0x240);
        }
        if (((lVar38 != 0) && (*piVar1 != 0)) &&
           (lVar38 = *(long *)(param_2 + 0x238), 0 < *(int *)(lVar38 + 0x88))) {
          lVar25 = 0;
          do {
            lVar40 = *(long *)(lVar23 + uVar35 * 0x158 + lVar25 * 8);
            if (((lVar40 != 0) &&
                (*(char *)(*(long *)(*(long *)(param_2 + 0x240 + lVar25 * 8) + 0x10) + 0x7e4) !=
                 '\0')) &&
               ((*(long *)(lVar40 + 0x98) != 0 &&
                (*(int *)(lVar40 + 0x550) == *(int *)(param_2 + 0x14))))) {
              *(float *)(lVar40 + 0x564) = *(float *)(param_2 + 0x44) - *pfVar39;
              *(float *)(lVar40 + 0x55c) = *pfVar41;
              cVar9 = *(char *)(*(long *)(param_2 + 0xa0) + 0x753);
              if (cVar9 == '\0') {
                puVar36 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + uVar35 * 0x10);
                uVar46 = *puVar36;
                fVar87 = *(float *)(puVar36 + 1);
LAB_008cfd28:
                uVar51 = (ulong)(uint)fVar87;
              }
              else {
                if ((*(long *)(param_2 + 0x210) != 0) &&
                   ((long)uVar35 <= (long)*(int *)(param_2 + 0x28))) {
                  lVar38 = uVar35 * 0x10;
                  puVar6 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar38);
                  puVar7 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar38);
                  puVar8 = (uint *)(*(long *)(param_2 + 0x220) + lVar38);
                  uStack_140 = CONCAT44(*puVar7,*puVar6);
                  local_150 = CONCAT44(puVar7[1],puVar6[1]);
                  uStack_148 = (ulong)puVar8[1];
                  uStack_138 = (ulong)*puVar8;
                  local_160 = CONCAT44(puVar7[2],puVar6[2]);
                  uStack_158 = (ulong)puVar8[2];
                  uStack_168 = (ulong)puVar8[3];
                  local_170 = CONCAT44(puVar7[3],puVar6[3]);
                }
                puVar36 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + uVar35 * 0x10);
                uVar46 = *puVar36;
                fVar87 = *(float *)(puVar36 + 1);
                if (cVar9 != '\x01') goto LAB_008cfd28;
                fVar89 = (float)uVar46;
                fVar47 = (float)((ulong)uVar46 >> 0x20);
                uVar46 = CONCAT44((float)((ulong)local_170 >> 0x20) +
                                  uStack_140._4_4_ * fVar89 + local_150._4_4_ * fVar47 +
                                  (float)((ulong)local_160 >> 0x20) * fVar87,
                                  (float)local_170 +
                                  (float)uStack_140 * fVar89 + (float)local_150 * fVar47 +
                                  (float)local_160 * fVar87);
                uVar51 = CONCAT44((float)(uStack_168 >> 0x20) +
                                  uStack_138._4_4_ * fVar89 + uStack_148._4_4_ * fVar47 +
                                  (float)(uStack_158 >> 0x20) * fVar87,
                                  (float)uStack_168 +
                                  (float)uStack_138 * fVar89 + (float)uStack_148 * fVar47 +
                                  (float)uStack_158 * fVar87);
              }
              *(ulong *)(lVar40 + 0x5c8) = uVar51;
              *(undefined8 *)(lVar40 + 0x5c0) = uVar46;
              puVar36 = (undefined8 *)(*(long *)(param_2 + 0x1d8) + uVar35 * 0x10);
              uVar46 = *puVar36;
              uVar50 = *(undefined8 *)(param_2 + 0x380);
              auVar63 = *(undefined1 (*) [16])(param_2 + 0x390);
              fVar89 = (float)uVar46;
              fVar87 = *(float *)(puVar36 + 1);
              auVar65 = *(undefined1 (*) [16])(param_2 + 0x3a0);
              fVar47 = (float)((ulong)uVar46 >> 0x20);
              *(ulong *)(lVar40 + 0x5d8) =
                   CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x388) >> 0x20) * fVar89 +
                            auVar63._12_4_ * fVar47 + auVar65._12_4_ * fVar87,
                            (float)*(undefined8 *)(param_2 + 0x388) * fVar89 +
                            auVar63._8_4_ * fVar47 + auVar65._8_4_ * fVar87);
              *(ulong *)(lVar40 + 0x5d0) =
                   CONCAT44((float)((ulong)uVar50 >> 0x20) * fVar89 + auVar63._4_4_ * fVar47 +
                            auVar65._4_4_ * fVar87,
                            (float)uVar50 * fVar89 + auVar63._0_4_ * fVar47 + auVar65._0_4_ * fVar87
                           );
              lVar38 = *(long *)(param_2 + 0x238);
            }
            lVar25 = lVar25 + 1;
          } while (lVar25 < *(int *)(lVar38 + 0x88));
        }
      }
      uVar51 = (ulong)*(int *)(param_2 + 0x28);
      uVar35 = uVar35 + 1;
      lVar22 = lVar22 + 0x158;
    } while ((long)uVar35 < (long)uVar51);
    if (iVar32 != 0) {
      *(int *)(param_2 + 0x2c) = iVar32;
      cVar9 = *(char *)(*(long *)(param_2 + 0xa0) + 0x752);
      goto joined_r0x008cfd60;
    }
  }
  uVar51 = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x234) = 0;
  cVar9 = *(char *)(*(long *)(param_2 + 0xa0) + 0x752);
joined_r0x008cfd60:
  if (cVar9 == '\0') {
    puVar36 = *(undefined8 **)(param_2 + 0xc0);
    uVar35 = -(uVar51 >> 0x1f & 1) & 0xfffffff000000000 | (uVar51 & 0xffffffff) << 4;
    memcpy((void *)*puVar36,*(void **)(param_2 + 0x1d0),uVar35);
    memcpy((void *)puVar36[1],*(void **)(param_2 + 0x1d8),uVar35);
    memcpy((void *)puVar36[2],*(void **)(param_2 + 0x1e0),uVar35);
    memcpy((void *)puVar36[4],*(void **)(param_2 + 0x1f0),uVar35);
    memcpy((void *)puVar36[3],*(void **)(param_2 + 0x1e8),uVar35);
    memcpy((void *)puVar36[5],*(void **)(param_2 + 0x1f8),uVar35);
    if ((void *)puVar36[6] != (void *)0x0) {
      memcpy((void *)puVar36[6],*(void **)(param_2 + 0x200),uVar35);
      memcpy((void *)puVar36[7],*(void **)(param_2 + 0x208),uVar35);
    }
    if ((void *)puVar36[8] != (void *)0x0) {
      memcpy((void *)puVar36[8],*(void **)(param_2 + 0x210),uVar35);
      memcpy((void *)puVar36[9],*(void **)(param_2 + 0x218),uVar35);
      memcpy((void *)puVar36[10],*(void **)(param_2 + 0x220),uVar35);
    }
  }
  return;
}


