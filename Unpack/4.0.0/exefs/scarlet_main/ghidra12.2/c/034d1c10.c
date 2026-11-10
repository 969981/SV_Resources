/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034d1c10; name: FUN_034d1c10
 */


void FUN_034d1c10(float param_1,undefined1 (*param_2) [16],int param_3,float *param_4,float *param_5
                 )

{
  uint uVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [12];
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  float fVar16;
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
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
  undefined1 auVar32 [16];
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  float fVar42;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar62;
  float fVar64;
  float fVar66;
  undefined1 auVar60 [16];
  float fVar63;
  float fVar65;
  float fVar67;
  undefined1 auVar61 [16];
  float fVar68;
  float fVar70;
  undefined1 auVar69 [16];
  float fVar71;
  float fVar72;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar73 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  
  fVar16 = param_4[6];
  fVar22 = param_4[7];
  fVar26 = param_4[8];
  fVar24 = fVar16 * fVar16 + fVar22 * fVar22 + fVar26 * fVar26;
  fVar23 = 0.0;
  if (0.0 < fVar24) {
    fVar25 = 1.0;
    fVar24 = 1.0 / SQRT(fVar24);
    fVar16 = fVar24 * fVar16;
    fVar26 = fVar24 * fVar26;
    fVar24 = fVar24 * -fVar22;
    fVar22 = fVar16 * fVar16 + fVar24 * fVar24;
    if (1.1920929e-07 < fVar22) {
      fVar22 = SQRT(fVar22);
      fVar28 = 1.0 - fVar26;
      fVar24 = (1.0 / fVar22) * fVar24;
      fVar16 = (1.0 / fVar22) * fVar16;
      fVar57 = fVar16 * fVar22;
      fVar54 = -(fVar16 * fVar22);
      fVar56 = fVar24 * fVar22;
      fVar22 = -(fVar24 * fVar22);
      fVar25 = fVar26 + fVar28 * fVar24 * fVar24;
      fVar23 = fVar24 * fVar28 * fVar16;
      fVar16 = fVar26 + fVar28 * fVar16 * fVar16;
      goto LAB_034d1cfc;
    }
    if (fVar26 < 0.0) {
      fVar16 = -1.0;
      fVar54 = 0.0;
      fVar56 = 0.0;
      fVar57 = 0.0;
      fVar22 = 0.0;
      fVar26 = -1.0;
      goto LAB_034d1cfc;
    }
  }
  fVar25 = 1.0;
  fVar54 = 0.0;
  fVar56 = 0.0;
  fVar57 = 0.0;
  fVar22 = 0.0;
  fVar16 = 1.0;
  fVar26 = 1.0;
LAB_034d1cfc:
  fVar24 = param_4[4];
  fVar28 = param_4[5];
  uVar48 = (undefined1)((uint)fVar25 >> 8);
  uVar49 = (undefined1)((uint)fVar25 >> 0x10);
  uVar50 = (undefined1)((uint)fVar25 >> 0x18);
  fVar29 = *param_4;
  fVar27 = param_4[1];
  fVar30 = param_4[2];
  fVar52 = param_4[3];
  fVar53 = fVar30 * fVar24 - fVar27 * fVar28;
  fVar55 = fVar29 * fVar28 - fVar52 * fVar30;
  fVar71 = fVar52 * fVar27 - fVar29 * fVar24;
  fVar31 = fVar24 * fVar23 + fVar54 * fVar28 + fVar25 * fVar52;
  fVar58 = fVar30 * fVar54 + fVar23 * fVar27 + fVar25 * fVar29;
  fVar68 = fVar24 * fVar16 + fVar56 * fVar28 + fVar23 * fVar52;
  fVar24 = fVar24 * fVar22 + fVar26 * fVar28 + fVar57 * fVar52;
  fVar52 = fVar30 * fVar56 + fVar16 * fVar27 + fVar23 * fVar29;
  fVar30 = fVar30 * fVar26 + fVar22 * fVar27 + fVar57 * fVar29;
  fVar28 = fVar53 * fVar25 + fVar23 * fVar55 + fVar54 * fVar71;
  fVar27 = fVar53 * fVar23 + fVar16 * fVar55 + fVar56 * fVar71;
  fVar29 = fVar53 * fVar57 + fVar22 * fVar55 + fVar26 * fVar71;
  uVar1 = param_3 << 2;
  puVar15 = *param_2;
  if (param_1 <= 0.5) {
    if (uVar1 != 0) {
      fVar53 = param_1 * -1.2732395 * ABS(param_1 * 3.1415927) + param_1 * 4.0;
      fVar53 = 1.0 / (fVar53 + 0.0001 + (ABS(fVar53) * fVar53 - fVar53) * 0.225);
      auVar32._8_4_ = 0xbf7fbe77;
      auVar32._0_8_ = 0xbf7fbe77bf7fbe77;
      auVar32._12_4_ = 0xbf7fbe77;
      do {
        fVar55 = *(float *)*param_2;
        fVar71 = *(float *)(*param_2 + 4);
        fVar70 = *(float *)(*param_2 + 8);
        fVar19 = *(float *)param_2[1];
        fVar63 = *(float *)(param_2[1] + 4);
        fVar59 = *(float *)(param_2[1] + 8);
        fVar20 = *(float *)param_2[2];
        fVar65 = *(float *)(param_2[2] + 4);
        fVar62 = *(float *)(param_2[2] + 8);
        fVar21 = *(float *)param_2[3];
        fVar67 = *(float *)(param_2[3] + 4);
        fVar64 = *(float *)(param_2[3] + 8);
        param_2 = param_2 + 4;
        auVar61._0_4_ = fVar55 * fVar29 + fVar24 * fVar71 + fVar30 * fVar70;
        auVar61._4_4_ = fVar19 * fVar29 + fVar24 * fVar63 + fVar30 * fVar59;
        auVar61._8_4_ = fVar20 * fVar29 + fVar24 * fVar65 + fVar30 * fVar62;
        auVar61._12_4_ = fVar21 * fVar29 + fVar24 * fVar67 + fVar30 * fVar64;
        auVar69 = NEON_fmax(auVar61,auVar32,4);
        fVar42 = fVar55 * fVar28 + fVar31 * fVar71 + fVar58 * fVar70;
        fVar45 = fVar19 * fVar28 + fVar31 * fVar63 + fVar58 * fVar59;
        fVar46 = fVar20 * fVar28 + fVar31 * fVar65 + fVar58 * fVar62;
        fVar47 = fVar21 * fVar28 + fVar31 * fVar67 + fVar58 * fVar64;
        fVar66 = fVar55 * fVar27 + fVar68 * fVar71 + fVar52 * fVar70;
        fVar72 = fVar19 * fVar27 + fVar68 * fVar63 + fVar52 * fVar59;
        fVar62 = fVar20 * fVar27 + fVar68 * fVar65 + fVar52 * fVar62;
        fVar21 = fVar21 * fVar27 + fVar68 * fVar67 + fVar52 * fVar64;
        fVar55 = auVar69._0_4_ + fVar53;
        fVar71 = auVar69._4_4_ + fVar53;
        fVar70 = auVar69._8_4_ + fVar53;
        fVar19 = auVar69._12_4_ + fVar53;
        auVar69._0_4_ = fVar55 * fVar55 + fVar42 * fVar42 + fVar66 * fVar66;
        auVar69._4_4_ = fVar71 * fVar71 + fVar45 * fVar45 + fVar72 * fVar72;
        auVar69._8_4_ = fVar70 * fVar70 + fVar46 * fVar46 + fVar62 * fVar62;
        auVar69._12_4_ = fVar19 * fVar19 + fVar47 * fVar47 + fVar21 * fVar21;
        auVar69 = NEON_frsqrte(auVar69,4);
        fVar63 = auVar69._0_4_;
        fVar42 = fVar42 * fVar63;
        fVar59 = auVar69._4_4_;
        fVar45 = fVar45 * fVar59;
        fVar20 = auVar69._8_4_;
        fVar46 = fVar46 * fVar20;
        fVar65 = auVar69._12_4_;
        fVar47 = fVar47 * fVar65;
        fVar66 = fVar66 * fVar63;
        fVar72 = fVar72 * fVar59;
        fVar62 = fVar62 * fVar20;
        fVar21 = fVar21 * fVar65;
        fVar55 = fVar55 * fVar63;
        fVar71 = fVar71 * fVar59;
        fVar70 = fVar70 * fVar20;
        fVar19 = fVar19 * fVar65;
        auVar18._0_4_ = fVar42 * fVar25 + fVar23 * fVar66 + fVar57 * fVar55;
        auVar18._4_4_ = fVar45 * fVar25 + fVar23 * fVar72 + fVar57 * fVar71;
        auVar18._8_4_ = fVar46 * fVar25 + fVar23 * fVar62 + fVar57 * fVar70;
        auVar18._12_4_ = fVar47 * fVar25 + fVar23 * fVar21 + fVar57 * fVar19;
        auVar77._0_4_ = fVar42 * fVar23 + fVar16 * fVar66 + fVar22 * fVar55;
        auVar77._4_4_ = fVar45 * fVar23 + fVar16 * fVar72 + fVar22 * fVar71;
        auVar77._8_4_ = fVar46 * fVar23 + fVar16 * fVar62 + fVar22 * fVar70;
        auVar77._12_4_ = fVar47 * fVar23 + fVar16 * fVar21 + fVar22 * fVar19;
        auVar44._0_4_ = fVar42 * fVar54 + fVar56 * fVar66 + fVar26 * fVar55;
        auVar44._4_4_ = fVar45 * fVar54 + fVar56 * fVar72 + fVar26 * fVar71;
        auVar44._8_4_ = fVar46 * fVar54 + fVar56 * fVar62 + fVar26 * fVar70;
        auVar44._12_4_ = fVar47 * fVar54 + fVar56 * fVar21 + fVar26 * fVar19;
        auVar69 = NEON_ext(auVar77,auVar18,8,1);
        auVar61 = NEON_ext(auVar44,auVar44,8,1);
        auVar69 = NEON_ext(auVar18,auVar69,8,1);
        auVar78 = NEON_ext(auVar61,auVar44,8,1);
        auVar44 = NEON_ext(auVar44,auVar61,8,1);
        param_5[10] = auVar44._0_4_;
        param_5[0xb] = auVar44._8_4_;
        param_5[8] = auVar69._0_4_;
        param_5[9] = auVar69._8_4_;
        param_5[0xe] = auVar44._4_4_;
        param_5[0xf] = auVar44._12_4_;
        param_5[0xc] = auVar69._4_4_;
        param_5[0xd] = auVar69._12_4_;
        param_5[2] = auVar78._0_4_;
        param_5[3] = auVar78._8_4_;
        *param_5 = auVar18._0_4_;
        param_5[1] = auVar77._0_4_;
        param_5[6] = auVar78._4_4_;
        param_5[7] = auVar78._12_4_;
        param_5[4] = auVar18._4_4_;
        param_5[5] = auVar77._4_4_;
        param_5 = param_5 + 0x10;
      } while (param_2 < (undefined1 (*) [16])(puVar15 + (ulong)uVar1 * 4));
    }
  }
  else if (uVar1 != 0) {
    fVar53 = 1.5707964 - param_1 * 1.5707964;
    auVar69 = NEON_fmov(0x3f800000,4);
    auVar32 = NEON_fmov(0xbf800000,4);
    do {
      auVar44 = *param_2;
      auVar18 = param_2[1];
      auVar77 = param_2[2];
      auVar61 = param_2[3];
      param_2 = param_2 + 4;
      auVar10[8] = auVar61[0];
      auVar10._0_8_ = auVar77._0_8_;
      auVar10[9] = auVar61[1];
      auVar10[10] = auVar61[2];
      auVar10[0xb] = auVar61[3];
      auVar2[8] = auVar18[0];
      auVar2._0_8_ = auVar44._0_8_;
      auVar2[9] = auVar18[1];
      auVar2[10] = auVar18[2];
      auVar2[0xb] = auVar18[3];
      fVar20 = auVar44._0_4_;
      fVar65 = auVar2._8_4_;
      fVar21 = auVar77._0_4_;
      fVar67 = auVar10._8_4_;
      fVar59 = auVar77._4_4_;
      fVar63 = auVar44._4_4_;
      fVar62 = auVar18._4_4_;
      fVar64 = auVar61._4_4_;
      fVar55 = auVar44._8_4_;
      fVar71 = auVar18._8_4_;
      fVar70 = auVar77._8_4_;
      fVar19 = auVar61._8_4_;
      fVar72 = fVar20 * fVar28 + fVar31 * fVar63 + fVar58 * fVar55;
      fVar74 = fVar65 * fVar28 + fVar31 * fVar62 + fVar58 * fVar71;
      fVar75 = fVar21 * fVar28 + fVar31 * fVar59 + fVar58 * fVar70;
      fVar76 = fVar67 * fVar28 + fVar31 * fVar64 + fVar58 * fVar19;
      fVar42 = fVar20 * fVar27 + fVar68 * fVar63 + fVar52 * fVar55;
      fVar45 = fVar65 * fVar27 + fVar68 * fVar62 + fVar52 * fVar71;
      fVar46 = fVar21 * fVar27 + fVar68 * fVar59 + fVar52 * fVar70;
      fVar47 = fVar67 * fVar27 + fVar68 * fVar64 + fVar52 * fVar19;
      auVar17._0_4_ = fVar20 * fVar29 + fVar24 * fVar63 + fVar30 * fVar55;
      auVar17._4_4_ = fVar65 * fVar29 + fVar24 * fVar62 + fVar30 * fVar71;
      auVar17._8_4_ = fVar21 * fVar29 + fVar24 * fVar59 + fVar30 * fVar70;
      auVar17._12_4_ = fVar67 * fVar29 + fVar24 * fVar64 + fVar30 * fVar19;
      fVar59 = fVar72 * fVar72 + fVar42 * fVar42;
      fVar62 = fVar74 * fVar74 + fVar45 * fVar45;
      fVar64 = fVar75 * fVar75 + fVar46 * fVar46;
      fVar66 = fVar76 * fVar76 + fVar47 * fVar47;
      auVar18 = NEON_fmax(auVar17,auVar32,4);
      iVar6 = -(uint)(auVar18._0_4_ < 0.0);
      iVar7 = -(uint)(auVar18._4_4_ < 0.0);
      iVar8 = -(uint)(auVar18._8_4_ < 0.0);
      iVar9 = -(uint)(auVar18._12_4_ < 0.0);
      iVar11 = -(uint)(0.0 <= auVar18._0_4_);
      iVar12 = -(uint)(0.0 <= auVar18._4_4_);
      iVar13 = -(uint)(0.0 <= auVar18._8_4_);
      iVar14 = -(uint)(0.0 <= auVar18._12_4_);
      auVar51._0_4_ = -(uint)(fVar59 + -0.0001 < 0.0);
      auVar51._4_4_ = -(uint)(fVar62 + -0.0001 < 0.0);
      auVar51._8_4_ = -(uint)(fVar64 + -0.0001 < 0.0);
      auVar51._12_4_ = -(uint)(fVar66 + -0.0001 < 0.0);
      auVar3[1] = (byte)((uint)iVar6 >> 8) & auVar32[1] | (byte)((uint)iVar11 >> 8) & auVar69[1];
      auVar3[0] = (byte)iVar6 & auVar32[0] | (byte)iVar11 & auVar69[0];
      auVar3[2] = (byte)((uint)iVar6 >> 0x10) & auVar32[2] |
                  (byte)((uint)iVar11 >> 0x10) & auVar69[2];
      auVar3[3] = (byte)((uint)iVar6 >> 0x18) & auVar32[3] |
                  (byte)((uint)iVar11 >> 0x18) & auVar69[3];
      auVar3[4] = (byte)iVar7 & auVar32[4] | (byte)iVar12 & auVar69[4];
      auVar3[5] = (byte)((uint)iVar7 >> 8) & auVar32[5] | (byte)((uint)iVar12 >> 8) & auVar69[5];
      auVar3[6] = (byte)((uint)iVar7 >> 0x10) & auVar32[6] |
                  (byte)((uint)iVar12 >> 0x10) & auVar69[6];
      auVar3[7] = (byte)((uint)iVar7 >> 0x18) & auVar32[7] |
                  (byte)((uint)iVar12 >> 0x18) & auVar69[7];
      auVar3[8] = (byte)iVar8 & auVar32[8] | (byte)iVar13 & auVar69[8];
      auVar3[9] = (byte)((uint)iVar8 >> 8) & auVar32[9] | (byte)((uint)iVar13 >> 8) & auVar69[9];
      auVar3[10] = (byte)((uint)iVar8 >> 0x10) & auVar32[10] |
                   (byte)((uint)iVar13 >> 0x10) & auVar69[10];
      auVar3[0xb] = (byte)((uint)iVar8 >> 0x18) & auVar32[0xb] |
                    (byte)((uint)iVar13 >> 0x18) & auVar69[0xb];
      auVar3[0xc] = (byte)iVar9 & auVar32[0xc] | (byte)iVar14 & auVar69[0xc];
      auVar3[0xd] = (byte)((uint)iVar9 >> 8) & auVar32[0xd] |
                    (byte)((uint)iVar14 >> 8) & auVar69[0xd];
      auVar3[0xe] = (byte)((uint)iVar9 >> 0x10) & auVar32[0xe] |
                    (byte)((uint)iVar14 >> 0x10) & auVar69[0xe];
      auVar3[0xf] = (byte)((uint)iVar9 >> 0x18) & auVar32[0xf] |
                    (byte)((uint)iVar14 >> 0x18) & auVar69[0xf];
      auVar18 = auVar18 ^ (auVar18 ^ auVar3) & auVar51;
      fVar55 = auVar18._0_4_;
      fVar71 = auVar18._4_4_;
      fVar70 = auVar18._8_4_;
      fVar63 = auVar18._12_4_;
      fVar55 = fVar53 + (fVar55 * fVar55 * (fVar55 * fVar55 * 0.719088 + -0.35786) + 1.085865) *
                        fVar55 * param_1;
      fVar19 = fVar53 + (fVar71 * fVar71 * (fVar71 * fVar71 * 0.719088 + -0.35786) + 1.085865) *
                        fVar71 * param_1;
      fVar20 = fVar53 + (fVar70 * fVar70 * (fVar70 * fVar70 * 0.719088 + -0.35786) + 1.085865) *
                        fVar70 * param_1;
      fVar21 = fVar53 + (fVar63 * fVar63 * (fVar63 * fVar63 * 0.719088 + -0.35786) + 1.085865) *
                        fVar63 * param_1;
      fVar55 = (auVar69._0_4_ + fVar55 * fVar55 * (fVar55 * fVar55 * 0.00833216 + -0.16666655)) *
               fVar55;
      fVar19 = (auVar69._4_4_ + fVar19 * fVar19 * (fVar19 * fVar19 * 0.00833216 + -0.16666655)) *
               fVar19;
      fVar20 = (auVar69._8_4_ + fVar20 * fVar20 * (fVar20 * fVar20 * 0.00833216 + -0.16666655)) *
               fVar20;
      fVar21 = (auVar69._12_4_ + fVar21 * fVar21 * (fVar21 * fVar21 * 0.00833216 + -0.16666655)) *
               fVar21;
      fVar71 = auVar69._0_4_ - fVar55 * fVar55;
      fVar63 = auVar69._4_4_ - fVar19 * fVar19;
      fVar65 = auVar69._8_4_ - fVar20 * fVar20;
      fVar67 = auVar69._12_4_ - fVar21 * fVar21;
      auVar60._0_4_ = fVar71 * fVar59;
      auVar60._4_4_ = fVar63 * fVar62;
      auVar60._8_4_ = fVar65 * fVar64;
      auVar60._12_4_ = fVar67 * fVar66;
      auVar78._8_4_ = 0x38d1b717;
      auVar78._0_8_ = 0x38d1b71738d1b717;
      auVar78._12_4_ = 0x38d1b717;
      auVar18 = NEON_fmax(auVar60,auVar78,4);
      auVar18 = NEON_frsqrte(auVar18,4);
      fVar71 = fVar71 * auVar18._0_4_;
      fVar63 = fVar63 * auVar18._4_4_;
      fVar65 = fVar65 * auVar18._8_4_;
      fVar67 = fVar67 * auVar18._12_4_;
      fVar72 = fVar71 * fVar72;
      fVar74 = fVar63 * fVar74;
      fVar75 = fVar65 * fVar75;
      fVar76 = fVar67 * fVar76;
      fVar71 = fVar71 * fVar42;
      fVar63 = fVar63 * fVar45;
      fVar65 = fVar65 * fVar46;
      fVar67 = fVar67 * fVar47;
      fVar70 = fVar72 * fVar25 + fVar23 * fVar71 + fVar57 * fVar55;
      fVar59 = fVar74 * (float)(CONCAT17(uVar50,CONCAT16(uVar49,CONCAT15(uVar48,CONCAT14(SUB41(
                                                  fVar25,0),fVar25)))) >> 0x20) + fVar23 * fVar63 +
               fVar57 * fVar19;
      uVar33 = (undefined1)((uint)fVar59 >> 8);
      uVar34 = (undefined1)((uint)fVar59 >> 0x10);
      uVar35 = (undefined1)((uint)fVar59 >> 0x18);
      fVar62 = fVar75 * fVar25 + fVar23 * fVar65 + fVar57 * fVar20;
      uVar36 = (undefined1)((uint)fVar62 >> 8);
      uVar37 = (undefined1)((uint)fVar62 >> 0x10);
      uVar38 = (undefined1)((uint)fVar62 >> 0x18);
      fVar64 = fVar76 * (float)(CONCAT17(uVar50,CONCAT16(uVar49,CONCAT15(uVar48,CONCAT14(SUB41(
                                                  fVar25,0),fVar25)))) >> 0x20) + fVar23 * fVar67 +
               fVar57 * fVar21;
      uVar39 = (undefined1)((uint)fVar64 >> 8);
      uVar40 = (undefined1)((uint)fVar64 >> 0x10);
      uVar41 = (undefined1)((uint)fVar64 >> 0x18);
      auVar43._0_4_ = fVar72 * fVar23 + fVar16 * fVar71 + fVar22 * fVar55;
      auVar43._4_4_ = fVar74 * fVar23 + fVar16 * fVar63 + fVar22 * fVar19;
      auVar43._8_4_ = fVar75 * fVar23 + fVar16 * fVar65 + fVar22 * fVar20;
      auVar43._12_4_ = fVar76 * fVar23 + fVar16 * fVar67 + fVar22 * fVar21;
      auVar73._0_4_ = fVar72 * fVar54 + fVar56 * fVar71 + fVar26 * fVar55;
      auVar73._4_4_ = fVar74 * fVar54 + fVar56 * fVar63 + fVar26 * fVar19;
      auVar73._8_4_ = fVar75 * fVar54 + fVar56 * fVar65 + fVar26 * fVar20;
      auVar73._12_4_ = fVar76 * fVar54 + fVar56 * fVar67 + fVar26 * fVar21;
      auVar4[4] = SUB41(fVar59,0);
      auVar4._0_4_ = fVar70;
      auVar4[5] = uVar33;
      auVar4[6] = uVar34;
      auVar4[7] = uVar35;
      auVar4[8] = SUB41(fVar62,0);
      auVar4[9] = uVar36;
      auVar4[10] = uVar37;
      auVar4[0xb] = uVar38;
      auVar4[0xc] = SUB41(fVar64,0);
      auVar4[0xd] = uVar39;
      auVar4[0xe] = uVar40;
      auVar4[0xf] = uVar41;
      auVar18 = NEON_ext(auVar43,auVar4,8,1);
      auVar61 = NEON_ext(auVar73,auVar73,8,1);
      auVar5[4] = SUB41(fVar59,0);
      auVar5._0_4_ = fVar70;
      auVar5[5] = uVar33;
      auVar5[6] = uVar34;
      auVar5[7] = uVar35;
      auVar5[8] = SUB41(fVar62,0);
      auVar5[9] = uVar36;
      auVar5[10] = uVar37;
      auVar5[0xb] = uVar38;
      auVar5[0xc] = SUB41(fVar64,0);
      auVar5[0xd] = uVar39;
      auVar5[0xe] = uVar40;
      auVar5[0xf] = uVar41;
      auVar18 = NEON_ext(auVar5,auVar18,8,1);
      uVar33 = (undefined1)((uint)auVar43._0_4_ >> 0x18);
      auVar44 = NEON_ext(auVar61,auVar73,8,1);
      auVar61 = NEON_ext(auVar73,auVar61,8,1);
      param_5[10] = auVar61._0_4_;
      param_5[0xb] = auVar61._8_4_;
      param_5[8] = auVar18._0_4_;
      param_5[9] = auVar18._8_4_;
      param_5[0xe] = auVar61._4_4_;
      param_5[0xf] = auVar61._12_4_;
      param_5[0xc] = auVar18._4_4_;
      param_5[0xd] = auVar18._12_4_;
      param_5[2] = auVar44._0_4_;
      param_5[3] = auVar44._8_4_;
      *param_5 = fVar70;
      param_5[1] = (float)(CONCAT14(uVar33,CONCAT13((char)((uint)auVar43._0_4_ >> 0x10),
                                                    CONCAT12((char)((uint)auVar43._0_4_ >> 8),
                                                             CONCAT11(SUB41(auVar43._0_4_,0),uVar35)
                                                            ))) >> 8);
      param_5[6] = auVar44._4_4_;
      param_5[7] = auVar44._12_4_;
      param_5[4] = fVar59;
      param_5[5] = (float)(CONCAT14((char)((uint)auVar43._4_4_ >> 0x18),
                                    CONCAT13((char)((uint)auVar43._4_4_ >> 0x10),
                                             CONCAT12((char)((uint)auVar43._4_4_ >> 8),
                                                      CONCAT11(SUB41(auVar43._4_4_,0),uVar33)))) >>
                          8);
      param_5 = param_5 + 0x10;
    } while (param_2 < (undefined1 (*) [16])(puVar15 + (ulong)uVar1 * 4));
  }
  return;
}


