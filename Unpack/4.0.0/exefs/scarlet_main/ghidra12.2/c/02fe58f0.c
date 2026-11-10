/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fe58f0; name: FUN_02fe58f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fe58f0(undefined1 (*param_1) [16],float *param_2,float *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  ulong uVar6;
  float fVar13;
  undefined1 auVar7 [16];
  undefined1 auVar11 [16];
  undefined1 auVar10 [16];
  undefined1 auVar9 [16];
  undefined1 auVar8 [16];
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [12];
  float fVar26;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar27;
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar28 [12];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [12];
  float fVar43;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar42 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar62 [16];
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar69 [16];
  float fVar70;
  float fVar71;
  
  auVar36 = *param_1;
  auVar29 = NEON_ext(auVar36,auVar36,8,1);
  auVar14._8_8_ = _UNK_03cab148;
  auVar14._0_8_ = _DAT_03cab140;
  auVar18 = a64_TBL(ZEXT816(0),auVar36,auVar14);
  auVar14 = NEON_rev64(auVar36,4);
  uVar6 = CONCAT17(PTR_DAT_047e4998[0xa7],(uint7)(((byte)PTR_DAT_047e4998[0xa3] & 0x80) << 0x18)) &
          0x80ffffffffffffff;
  fVar32 = (float)CONCAT13((byte)(uVar6 >> 0x18) ^ auVar18[3],auVar18._0_3_);
  auVar35._0_8_ =
       CONCAT17((byte)(uVar6 >> 0x38) ^ auVar18[7],
                CONCAT16(auVar18[6],CONCAT15(auVar18[5],CONCAT14(auVar18[4],fVar32))));
  auVar35[8] = auVar18[8];
  auVar35[9] = auVar18[9];
  auVar35[10] = auVar18[10];
  auVar35[0xb] = PTR_DAT_047e4998[0xab] & 0x80 ^ auVar18[0xb];
  auVar69[0xc] = auVar18[0xc];
  auVar69._0_12_ = auVar35;
  auVar69[0xd] = auVar18[0xd];
  auVar69[0xe] = auVar18[0xe];
  auVar69[0xf] = PTR_DAT_047e4998[0xaf] & 0x80 ^ auVar18[0xf];
  uVar6 = CONCAT17(PTR_DAT_047e49a0[199],(uint7)(((byte)PTR_DAT_047e49a0[0xc3] & 0x80) << 0x18)) &
          0x80ffffffffffffff;
  fVar60 = (float)CONCAT13((byte)(uVar6 >> 0x18) ^ auVar29[3],auVar29._0_3_);
  auVar17._0_8_ =
       CONCAT17((byte)(uVar6 >> 0x38) ^ auVar29[7],
                CONCAT16(auVar29[6],CONCAT15(auVar29[5],CONCAT14(auVar29[4],fVar60))));
  auVar17[8] = auVar29[8];
  auVar17[9] = auVar29[9];
  auVar17[10] = auVar29[10];
  auVar17[0xb] = PTR_DAT_047e49a0[0xcb] & 0x80 ^ auVar29[0xb];
  auVar18[0xc] = auVar29[0xc];
  auVar18._0_12_ = auVar17;
  auVar18[0xd] = auVar29[0xd];
  auVar18[0xe] = auVar29[0xe];
  auVar18[0xf] = PTR_DAT_047e49a0[0xcf] & 0x80 ^ auVar29[0xf];
  fVar26 = (float)((ulong)auVar35._0_8_ >> 0x20);
  fVar43 = auVar35._8_4_;
  uVar6 = CONCAT17(PTR_DAT_047e49a8[0x97],(uint7)(((byte)PTR_DAT_047e49a8[0x93] & 0x80) << 0x18)) &
          0x80ffffffffffffff;
  fVar44 = fVar32 * fVar32 + fVar26 * fVar26 + fVar43 * fVar43;
  auVar36 = ZEXT816(0);
  if (fVar44 != 0.0) {
    fVar44 = SQRT(fVar44);
    fVar13 = SQRT(fVar32 * fVar32 + fVar26 * fVar26 + fVar43 * fVar43);
    auVar36._0_4_ = fVar32 / fVar44;
    auVar36._4_4_ = fVar26 / fVar13;
    auVar36._8_4_ = fVar43 / fVar44;
    auVar36._12_4_ = auVar69._12_4_ / fVar13;
  }
  fVar32 = (float)((ulong)auVar17._0_8_ >> 0x20);
  fVar26 = auVar17._8_4_;
  fVar43 = (float)CONCAT13((byte)(uVar6 >> 0x18) ^ auVar14[3],auVar14._0_3_);
  auVar28._0_8_ =
       CONCAT17((byte)(uVar6 >> 0x38) ^ auVar14[7],
                CONCAT16(auVar14[6],CONCAT15(auVar14[5],CONCAT14(auVar14[4],fVar43))));
  auVar28[8] = auVar14[8];
  auVar28[9] = auVar14[9];
  auVar28[10] = auVar14[10];
  auVar28[0xb] = PTR_DAT_047e49a8[0x9b] & 0x80 ^ auVar14[0xb];
  auVar30[0xc] = auVar14[0xc];
  auVar30._0_12_ = auVar28;
  auVar30[0xd] = auVar14[0xd];
  auVar30[0xe] = auVar14[0xe];
  auVar30[0xf] = PTR_DAT_047e49a8[0x9f] & 0x80 ^ auVar14[0xf];
  fVar44 = fVar26 * fVar26 + fVar60 * fVar60 + fVar32 * fVar32;
  auVar29 = ZEXT816(0);
  if (fVar44 != 0.0) {
    fVar44 = SQRT(fVar44);
    fVar13 = SQRT(fVar26 * fVar26 + fVar60 * fVar60 + fVar32 * fVar32);
    auVar29._0_4_ = fVar60 / fVar44;
    auVar29._4_4_ = fVar32 / fVar13;
    auVar29._8_4_ = fVar26 / fVar44;
    auVar29._12_4_ = auVar18._12_4_ / fVar13;
  }
  fVar60 = (float)((ulong)auVar28._0_8_ >> 0x20);
  fVar32 = auVar28._8_4_;
  fVar44 = fVar32 * fVar32 + fVar43 * fVar43 + fVar60 * fVar60;
  auVar19 = ZEXT816(0);
  if (fVar44 != 0.0) {
    fVar44 = SQRT(fVar44);
    fVar26 = SQRT(fVar32 * fVar32 + fVar43 * fVar43 + fVar60 * fVar60);
    auVar19._0_4_ = fVar43 / fVar44;
    auVar19._4_4_ = fVar60 / fVar26;
    auVar19._8_4_ = fVar32 / fVar44;
    auVar19._12_4_ = auVar30._12_4_ / fVar26;
  }
  fVar60 = param_3[3];
  fVar32 = -*param_3;
  fVar26 = -param_3[1];
  fVar43 = -param_3[2];
  fVar13 = fVar26 + fVar26;
  fVar48 = fVar43 + fVar43;
  fVar44 = (fVar32 + fVar32) * fVar32;
  fVar45 = (fVar32 + fVar32) * fVar60;
  fVar58 = 1.0 - fVar43 * fVar48;
  fVar71 = fVar13 * fVar32 + fVar48 * fVar60;
  fVar70 = fVar48 * fVar32 + fVar13 * fVar60;
  fVar33 = fVar13 * fVar32 - fVar48 * fVar60;
  fVar67 = fVar58 - fVar13 * fVar26;
  fVar58 = fVar58 - fVar44;
  fVar60 = fVar48 * fVar32 - fVar13 * fVar60;
  fVar59 = fVar48 * fVar26 - fVar45;
  fVar45 = fVar48 * fVar26 + fVar45;
  fVar46 = (1.0 - fVar44) - fVar13 * fVar26;
  fVar32 = auVar36._0_4_;
  fVar44 = fVar32 * fVar67;
  fVar26 = auVar36._4_4_;
  fVar43 = auVar36._8_4_;
  fVar13 = auVar29._0_4_;
  fVar48 = auVar29._4_4_;
  fVar5 = auVar29._8_4_;
  auVar61._0_4_ = fVar32 * fVar33;
  auVar61._4_4_ = fVar26 * fVar58;
  auVar61._8_4_ = fVar43 * fVar45;
  auVar61._12_4_ = auVar36._12_4_ * fVar70;
  fVar66 = fVar13 * fVar67;
  auVar62._4_12_ = auVar61._4_12_;
  auVar62._0_4_ = fVar66;
  auVar64._0_8_ = auVar62._0_8_;
  auVar64._8_4_ = fVar5 * fVar60;
  auVar64._12_4_ = auVar61._12_4_;
  auVar63._8_8_ = auVar64._8_8_;
  auVar63._4_4_ = fVar13 * fVar33;
  auVar63._0_4_ = fVar66;
  auVar65._0_12_ = auVar63._0_12_;
  auVar65._12_4_ = fVar5 * fVar45;
  fVar16 = auVar19._0_4_;
  fVar27 = auVar19._4_4_;
  fVar47 = auVar19._8_4_;
  fVar67 = fVar16 * fVar67;
  fVar68 = fVar47 * fVar60;
  fVar34 = fVar16 * fVar33;
  fVar45 = fVar47 * fVar45;
  fVar31 = fVar13 * fVar70 + fVar48 * fVar59 + fVar5 * fVar46;
  uVar52 = (undefined1)((uint)fVar68 >> 8);
  uVar53 = (undefined1)((uint)fVar68 >> 0x10);
  uVar54 = (undefined1)((uint)fVar68 >> 0x18);
  uVar49 = (undefined1)((uint)fVar34 >> 8);
  uVar50 = (undefined1)((uint)fVar34 >> 0x10);
  uVar51 = (undefined1)((uint)fVar34 >> 0x18);
  uVar55 = (undefined1)((uint)fVar45 >> 8);
  uVar56 = (undefined1)((uint)fVar45 >> 0x10);
  uVar57 = (undefined1)((uint)fVar45 >> 0x18);
  auVar3._4_4_ = auVar61._0_4_;
  auVar3._0_4_ = fVar44;
  auVar3._8_4_ = fVar43 * fVar60;
  auVar3._12_4_ = auVar61._8_4_;
  auVar4._4_4_ = auVar61._0_4_;
  auVar4._0_4_ = fVar44;
  auVar4._8_4_ = fVar43 * fVar60;
  auVar4._12_4_ = auVar61._8_4_;
  auVar18 = NEON_ext(auVar3,auVar4,8,1);
  auVar69 = NEON_ext(auVar65,auVar65,8,1);
  auVar1[4] = SUB41(fVar34,0);
  auVar1._0_4_ = fVar67;
  auVar1[5] = uVar49;
  auVar1[6] = uVar50;
  auVar1[7] = uVar51;
  auVar1[8] = SUB41(fVar68,0);
  auVar1[9] = uVar52;
  auVar1[10] = uVar53;
  auVar1[0xb] = uVar54;
  auVar1[0xc] = SUB41(fVar45,0);
  auVar1[0xd] = uVar55;
  auVar1[0xe] = uVar56;
  auVar1[0xf] = uVar57;
  auVar2[4] = SUB41(fVar34,0);
  auVar2._0_4_ = fVar67;
  auVar2[5] = uVar49;
  auVar2[6] = uVar50;
  auVar2[7] = uVar51;
  auVar2[8] = SUB41(fVar68,0);
  auVar2[9] = uVar52;
  auVar2[10] = uVar53;
  auVar2[0xb] = uVar54;
  auVar2[0xc] = SUB41(fVar45,0);
  auVar2[0xd] = uVar55;
  auVar2[0xe] = uVar56;
  auVar2[0xf] = uVar57;
  auVar14 = NEON_ext(auVar1,auVar2,8,1);
  fVar44 = auVar18._0_4_ + fVar26 * fVar71 + fVar44;
  fVar60 = auVar18._4_4_ + auVar61._4_4_ + auVar61._0_4_;
  fVar45 = auVar69._0_4_ + fVar48 * fVar71 + fVar66;
  fVar66 = auVar69._4_4_ + fVar48 * fVar58 + fVar13 * fVar33;
  fVar67 = auVar14._0_4_ + fVar27 * fVar71 + fVar67;
  fVar58 = auVar14._4_4_ + fVar27 * fVar58 + fVar34;
  fVar33 = fVar32 * fVar70 + fVar26 * fVar59 + fVar43 * fVar46;
  fVar34 = fVar16 * fVar70 + fVar27 * fVar59 + fVar47 * fVar46;
  fVar47 = fVar16 * fVar70 + fVar27 * fVar59 + fVar47 * fVar46;
  param_5[1] = CONCAT44(fVar32 * fVar70 + fVar26 * fVar59 + fVar43 * fVar46,fVar33);
  *param_5 = CONCAT44((int)(CONCAT17((char)((uint)fVar60 >> 0x18),
                                     CONCAT16((char)((uint)fVar60 >> 0x10),
                                              CONCAT15((char)((uint)fVar60 >> 8),
                                                       CONCAT14(SUB41(fVar60,0),fVar44)))) >> 0x20),
                      fVar44);
  param_5[3] = CONCAT44(fVar13 * fVar70 + fVar48 * fVar59 + fVar5 * fVar46,fVar31);
  param_5[2] = CONCAT44(fVar66,fVar45);
  param_5[5] = CONCAT44(fVar47,fVar34);
  param_5[4] = CONCAT44(fVar58,fVar67);
  if (param_7 != (undefined8 *)0x0) {
    param_7[1] = CONCAT44(fVar58,fVar67);
    *param_7 = CONCAT44(fVar45,fVar44);
    param_7[3] = CONCAT17((char)((uint)fVar47 >> 0x18),
                          CONCAT16((char)((uint)fVar47 >> 0x10),
                                   CONCAT15((char)((uint)fVar47 >> 8),
                                            CONCAT14(SUB41(fVar47,0),fVar58))));
    param_7[2] = CONCAT17((char)((uint)fVar66 >> 0x18),
                          CONCAT16((char)((uint)fVar66 >> 0x10),
                                   CONCAT15((char)((uint)fVar66 >> 8),
                                            CONCAT14(SUB41(fVar66,0),fVar60))));
    param_7[5] = CONCAT44(fVar47,fVar34);
    param_7[4] = CONCAT44(fVar31,fVar33);
  }
  fVar60 = param_2[3];
  fVar33 = -*param_2;
  fVar31 = -param_2[1];
  fVar44 = -param_2[2];
  fVar45 = fVar31 + fVar31;
  fVar46 = fVar44 + fVar44;
  fVar66 = (fVar33 + fVar33) * fVar33;
  auVar36 = NEON_ext(auVar36,auVar36,8,1);
  fVar59 = (fVar33 + fVar33) * fVar60;
  auVar14 = NEON_ext(auVar29,auVar29,8,1);
  fVar43 = auVar36._0_4_;
  fVar5 = auVar14._0_4_;
  fVar47 = 1.0 - fVar44 * fVar46;
  fVar34 = fVar46 * fVar31 - fVar59;
  fVar44 = fVar45 * fVar33 - fVar46 * fVar60;
  fVar59 = fVar46 * fVar31 + fVar59;
  fVar58 = fVar47 - fVar66;
  fVar67 = fVar45 * fVar33 + fVar46 * fVar60;
  fVar66 = (1.0 - fVar66) - fVar45 * fVar31;
  fVar47 = fVar47 - fVar45 * fVar31;
  fVar68 = fVar46 * fVar33 + fVar45 * fVar60;
  auVar36 = NEON_ext(auVar19,auVar19,8,1);
  fVar31 = auVar36._0_4_;
  fVar60 = fVar46 * fVar33 - fVar45 * fVar60;
  auVar20._0_4_ = fVar32 * fVar47;
  auVar20._4_4_ = fVar13 * fVar67;
  auVar20._8_4_ = fVar16 * fVar60;
  auVar20._12_4_ = fVar27 * fVar34;
  fVar33 = fVar43 * fVar47;
  auVar37._0_4_ = fVar43 * fVar44;
  auVar37._4_4_ = fVar5 * fVar58;
  auVar37._8_4_ = fVar31 * fVar59;
  auVar37._12_4_ = auVar36._4_4_ * fVar68;
  auVar21._4_12_ = auVar20._4_12_;
  auVar21._0_4_ = auVar20._0_4_;
  auVar23._0_8_ = auVar21._0_8_;
  auVar23._8_4_ = auVar20._8_4_;
  auVar23._12_4_ = auVar20._12_4_;
  auVar22._8_8_ = auVar23._8_8_;
  auVar22._4_4_ = fVar32 * fVar44;
  auVar22._0_4_ = auVar20._0_4_;
  auVar24._0_12_ = auVar22._0_12_;
  auVar24._12_4_ = fVar16 * fVar59;
  fVar47 = fVar26 * fVar47;
  auVar38._4_12_ = auVar37._4_12_;
  auVar38._0_4_ = fVar33;
  auVar40._0_8_ = auVar38._0_8_;
  auVar40._8_4_ = fVar31 * fVar60;
  auVar40._12_4_ = auVar37._12_4_;
  auVar39._8_8_ = auVar40._8_8_;
  auVar39._4_4_ = auVar37._0_4_;
  auVar39._0_4_ = fVar33;
  auVar41._0_12_ = auVar39._0_12_;
  auVar41._12_4_ = auVar37._8_4_;
  auVar7._0_4_ = fVar26 * fVar44;
  auVar7._4_4_ = fVar48 * fVar58;
  auVar7._8_4_ = fVar27 * fVar59;
  auVar7._12_4_ = auVar36._4_4_ * fVar68;
  auVar8._4_12_ = auVar7._4_12_;
  auVar8._0_4_ = fVar47;
  auVar10._0_8_ = auVar8._0_8_;
  auVar10._8_4_ = fVar27 * fVar60;
  auVar10._12_4_ = auVar7._12_4_;
  auVar9._8_8_ = auVar10._8_8_;
  auVar9._4_4_ = auVar7._0_4_;
  auVar9._0_4_ = fVar47;
  auVar11._0_12_ = auVar9._0_12_;
  auVar11._12_4_ = auVar7._8_4_;
  auVar14 = NEON_ext(auVar24,auVar24,8,1);
  auVar18 = NEON_ext(auVar41,auVar41,8,1);
  auVar36 = NEON_ext(auVar11,auVar11,8,1);
  fVar60 = -(auVar14._0_4_ + fVar13 * fVar67 + auVar20._0_4_);
  fVar44 = -(auVar14._4_4_ + fVar13 * fVar58 + fVar32 * fVar44);
  auVar12._0_8_ = CONCAT44(fVar44,fVar60);
  auVar12._8_4_ = -(fVar32 * fVar68 + fVar13 * fVar34 + fVar16 * fVar66);
  auVar12._12_4_ = -(fVar32 * fVar68 + fVar13 * fVar34 + fVar16 * fVar66);
  fVar32 = -(auVar36._0_4_ + fVar48 * fVar67 + fVar47);
  fVar13 = -(auVar36._4_4_ + fVar48 * fVar58 + auVar7._0_4_);
  auVar15._0_8_ = CONCAT44(fVar13,fVar32);
  auVar15._8_4_ = -(fVar26 * fVar68 + fVar48 * fVar34 + fVar27 * fVar66);
  auVar15._12_4_ = -(fVar26 * fVar68 + fVar48 * fVar34 + fVar27 * fVar66);
  fVar26 = -(auVar18._4_4_ + fVar5 * fVar58 + auVar37._0_4_);
  auVar25._0_8_ = CONCAT44(fVar26,-(auVar18._0_4_ + fVar5 * fVar67 + fVar33));
  auVar25._8_4_ = -(fVar43 * fVar68 + fVar5 * fVar34 + fVar31 * fVar66);
  auVar25._12_4_ = -(fVar43 * fVar68 + fVar5 * fVar34 + fVar31 * fVar66);
  param_4[1] = auVar12._8_8_;
  *param_4 = auVar12._0_8_;
  param_4[3] = auVar15._8_8_;
  param_4[2] = auVar15._0_8_;
  param_4[5] = auVar25._8_8_;
  param_4[4] = auVar25._0_8_;
  if (param_6 != (undefined8 *)0x0) {
    auVar36 = NEON_ext(auVar12,auVar12,8,1);
    auVar14 = NEON_ext(auVar15,auVar15,8,1);
    auVar18 = NEON_ext(auVar25,auVar25,8,1);
    auVar42._4_12_ = auVar18._4_12_;
    auVar42._0_4_ = fVar26;
    param_6[5] = auVar18._0_8_;
    param_6[4] = CONCAT44(auVar14._0_4_,auVar36._0_4_);
    param_6[1] = auVar25._0_8_;
    *param_6 = CONCAT44(fVar32,fVar60);
    param_6[3] = auVar42._0_8_;
    param_6[2] = CONCAT44(fVar13,fVar44);
  }
  return;
}


