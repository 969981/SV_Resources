/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0086eb50; name: FUN_0086eb50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0086eb50(undefined8 *param_1,undefined8 *param_2,float *param_3,float *param_4,uint param_5
                 ,undefined8 *param_6,undefined8 *param_7)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar18;
  undefined1 auVar17 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar26;
  byte bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar34;
  undefined1 auVar33 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar45 [16];
  float fVar47;
  float fVar48;
  undefined1 auVar46 [16];
  float fVar49;
  float fVar51;
  float fVar52;
  undefined1 auVar50 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  
  fVar19 = *param_3;
  fVar36 = param_3[1];
  fVar37 = param_3[2];
  fVar38 = param_3[3];
  fVar26 = (float)param_2[1];
  fVar56 = (float)((ulong)param_2[1] >> 0x20);
  fVar51 = (float)*param_2;
  fVar52 = (float)((ulong)*param_2 >> 0x20);
  fVar5 = *param_4;
  fVar6 = param_4[1];
  fVar7 = param_4[2];
  fVar49 = param_4[3];
  auVar28._0_4_ = fVar19 - fVar51;
  auVar28._4_4_ = fVar36 - fVar52;
  auVar28._8_4_ = fVar37 - fVar26;
  auVar28._12_4_ = fVar38 - fVar56;
  auVar15 = NEON_ext(auVar28,auVar28,4,1);
  auVar50._0_4_ = fVar51 - fVar5;
  auVar50._4_4_ = fVar52 - fVar6;
  auVar50._8_4_ = fVar26 - fVar7;
  auVar50._12_4_ = fVar56 - fVar49;
  auVar17 = NEON_ext(auVar50,auVar50,4,1);
  auVar29._0_4_ = auVar28._0_4_ * auVar17._0_4_ - auVar50._0_4_ * auVar15._0_4_;
  auVar29._4_4_ = auVar28._4_4_ * auVar17._4_4_ - auVar50._4_4_ * auVar15._4_4_;
  auVar29._8_4_ = auVar28._8_4_ * auVar50._0_4_ - auVar50._8_4_ * auVar28._0_4_;
  auVar29._12_4_ = auVar28._12_4_ * auVar50._4_4_ - auVar50._12_4_ * auVar28._4_4_;
  auVar23 = NEON_ext(auVar29,auVar29,4,1);
  auVar15 = *(undefined1 (*) [16])(param_1 + 2);
  fVar16 = auVar15._0_4_;
  fVar32 = (float)*param_6;
  fVar18 = auVar15._4_4_;
  fVar34 = (float)((ulong)*param_6 >> 0x20);
  fVar31 = auVar15._8_4_;
  fVar20 = (float)*param_1;
  auVar17._0_4_ = fVar20 - fVar51;
  fVar21 = (float)((ulong)*param_1 >> 0x20);
  auVar17._4_4_ = fVar21 - fVar52;
  fVar22 = (float)param_1[1];
  auVar17._8_4_ = fVar22 - fVar26;
  fVar25 = (float)((ulong)param_1[1] >> 0x20);
  auVar17._12_4_ = fVar25 - fVar56;
  fVar39 = auVar17._0_4_ * auVar23._0_4_;
  fVar41 = auVar17._4_4_ * auVar23._4_4_;
  fVar35 = (auVar17._0_4_ + fVar32 * fVar16) * auVar23._0_4_;
  fVar47 = (auVar17._4_4_ + fVar34 * fVar18) * auVar23._4_4_;
  fVar48 = (auVar17._8_4_ + fVar32 * fVar31) * auVar29._0_4_;
  fVar40 = fVar39 + fVar41 + auVar17._8_4_ * auVar29._0_4_;
  fVar39 = fVar39 + fVar41 + auVar17._8_4_ * auVar29._0_4_;
  fVar41 = fVar35 + fVar47 + fVar48;
  if (0.0 <= fVar40 * fVar41) {
    return 0;
  }
  bVar44 = (byte)(-(uint)(fVar40 < 0.0) >> 0x18);
  bVar27 = (byte)(-(uint)(fVar39 < 0.0) >> 0x18);
  bVar42 = bVar44 & 0x80;
  bVar43 = bVar27 & 0x80;
  bVar44 = bVar44 & 0x80;
  auVar45._0_4_ = fVar5 - fVar19;
  auVar45._4_4_ = fVar6 - fVar36;
  auVar45._8_4_ = fVar7 - fVar37;
  auVar45._12_4_ = fVar49 - fVar38;
  fVar55 = fVar20 + fVar20;
  fVar57 = fVar21 + fVar21;
  fVar58 = fVar22 + fVar22;
  auVar23._0_8_ =
       CONCAT17(bVar43 ^ auVar23[7],
                CONCAT16(auVar23[6],
                         CONCAT15(auVar23[5],
                                  CONCAT14(auVar23[4],CONCAT13(bVar42 ^ auVar23[3],auVar23._0_3_))))
               );
  auVar23[8] = SUB41(auVar29._0_4_,0);
  auVar23[9] = (undefined1)((uint)auVar29._0_4_ >> 8);
  auVar23[10] = (undefined1)((uint)auVar29._0_4_ >> 0x10);
  auVar23[0xb] = bVar44 ^ (byte)((uint)auVar29._0_4_ >> 0x18);
  auVar23._12_3_ = 0;
  auVar23[0xf] = bVar27 & 0x80;
  param_7[1] = auVar23._8_8_;
  *param_7 = auVar23._0_8_;
  auVar29 = NEON_ext(auVar28,auVar28,8,1);
  auVar23 = NEON_ext(auVar45,auVar45,8,1);
  fVar9 = auVar29._0_4_;
  fVar11 = auVar23._0_4_;
  auVar29 = NEON_ext(auVar50,auVar50,8,1);
  auVar15 = NEON_ext(auVar15,auVar15,8,1);
  fVar10 = auVar29._0_4_;
  fVar12 = auVar15._0_4_;
  *param_6 = CONCAT44(fVar34 * (fVar39 / (fVar39 - (fVar35 + fVar47 + fVar48))),
                      fVar32 * (fVar40 / (fVar40 - fVar41)));
  auVar33._0_4_ = fVar9 * fVar9 + auVar28._0_4_ * auVar28._0_4_ + auVar28._4_4_ * auVar28._4_4_;
  auVar33._4_4_ = fVar11 * fVar11 + auVar45._0_4_ * auVar45._0_4_ + auVar45._4_4_ * auVar45._4_4_;
  auVar33._8_4_ = fVar10 * fVar10 + auVar50._0_4_ * auVar50._0_4_ + auVar50._4_4_ * auVar50._4_4_;
  auVar33._12_4_ = fVar12 * fVar12 + fVar16 * fVar16 + fVar18 * fVar18;
  auVar53._0_4_ = fVar55 - (fVar19 + fVar51);
  auVar53._4_4_ = fVar57 - (fVar36 + fVar52);
  auVar53._8_4_ = fVar58 - (fVar37 + fVar26);
  auVar53._12_4_ = (fVar25 + fVar25) - (fVar38 + fVar56);
  auVar54._0_4_ = fVar55 - (fVar19 + fVar5);
  auVar54._4_4_ = fVar57 - (fVar36 + fVar6);
  auVar54._8_4_ = fVar58 - (fVar37 + fVar7);
  auVar54._12_4_ = (fVar25 + fVar25) - (fVar38 + fVar49);
  auVar15._8_4_ = 0xffffffff;
  auVar15._0_8_ = 0xffffffffffffffff;
  auVar15._12_4_ = 0xffffffff;
  auVar15 = NEON_sshl(auVar33,auVar15,4);
  fVar35 = (float)(auVar15._12_4_ + 0x1fbb4000);
  fVar32 = (float)*(undefined8 *)PTR_DAT_047d1ae0 +
           (float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x260) *
           (float)(((int)(auVar17._8_4_ * auVar17._8_4_ +
                         auVar17._0_4_ * auVar17._0_4_ + auVar17._4_4_ * auVar17._4_4_) >> 1) +
                  0x1fbb4000);
  fVar34 = (float)((ulong)*(undefined8 *)PTR_DAT_047d1ae0 >> 0x20) +
           (float)((ulong)*(undefined8 *)(PTR_DAT_047d19b0 + 0x260) >> 0x20) *
           (float)(((int)(auVar17._8_4_ * auVar17._8_4_ +
                         auVar17._0_4_ * auVar17._0_4_ + auVar17._4_4_ * auVar17._4_4_) >> 1) +
                  0x1fbb4000);
  fVar56 = (float)(auVar15._0_4_ + 0x1fbb4000) * fVar35 * (fVar32 + fVar32);
  fVar39 = (float)(auVar15._4_4_ + 0x1fbb4000) * fVar35 * (fVar34 + fVar34);
  fVar41 = (float)(auVar15._8_4_ + 0x1fbb4000) * fVar35 * (fVar32 + fVar32);
  auVar29 = NEON_ext(auVar53,auVar53,8,1);
  auVar23 = NEON_ext(auVar54,auVar54,8,1);
  fVar35 = auVar29._0_4_ * (auVar28._0_4_ * fVar18 - auVar28._4_4_ * fVar16) +
           auVar53._0_4_ * (auVar28._4_4_ * fVar31 - fVar9 * fVar18) +
           auVar53._4_4_ * (fVar9 * fVar16 - auVar28._0_4_ * fVar31);
  fVar47 = auVar23._0_4_ * (auVar45._0_4_ * fVar18 - auVar45._4_4_ * fVar16) +
           auVar54._0_4_ * (auVar45._4_4_ * fVar31 - fVar11 * fVar18) +
           auVar54._4_4_ * (fVar11 * fVar16 - auVar45._0_4_ * fVar31);
  fVar48 = (fVar58 - (fVar26 + fVar7)) * (auVar50._0_4_ * fVar18 - auVar50._4_4_ * fVar16) +
           (fVar55 - (fVar51 + fVar5)) * (auVar50._4_4_ * fVar31 - fVar10 * fVar18) +
           (fVar57 - (fVar52 + fVar6)) * (fVar10 * fVar16 - auVar50._0_4_ * fVar31);
  fVar49 = 0.0 - fVar56;
  fVar51 = 0.0 - fVar39;
  fVar52 = 0.0 - fVar41;
  uVar8 = 2;
  if (0.0 <= fVar40) {
    uVar8 = 1;
  }
  uVar8 = uVar8 & (param_5 ^ 3);
  uVar1 = (uVar8 >> (ulong)((-(uint)(fVar47 < fVar51) & 2) + (uint)(fVar35 < fVar49) |
                           -(uint)(fVar48 < fVar52) & 4) |
          uVar8 >> (ulong)((-(uint)(fVar39 < fVar47) & 2) + (uint)(fVar56 < fVar35) |
                          -(uint)(fVar41 < fVar48) & 4)) & uVar8;
  if ((uVar1 != 0) &&
     (fVar35 = (float)CONCAT13(bVar42 ^ (byte)((uint)fVar35 >> 0x18),SUB43(fVar35,0)),
     (fVar51 <= (float)(CONCAT17(bVar43 ^ (byte)((uint)fVar47 >> 0x18),
                                 CONCAT16((char)((uint)fVar47 >> 0x10),
                                          CONCAT15((char)((uint)fVar47 >> 8),
                                                   CONCAT14(SUB41(fVar47,0),fVar35)))) >> 0x20) ||
     fVar49 <= fVar35) ||
     fVar52 <= (float)CONCAT13(bVar44 ^ (byte)((uint)fVar48 >> 0x18),SUB43(fVar48,0)))) {
    auVar13._0_4_ = fVar20 - fVar19;
    auVar13._4_4_ = fVar21 - fVar36;
    auVar13._8_4_ = fVar22 - fVar37;
    auVar13._12_4_ = fVar25 - fVar38;
    fVar35 = (float)(0x5f375a86 - auVar15._0_4_);
    fVar36 = (float)(0x5f375a86 - auVar15._4_4_);
    fVar37 = (float)(0x5f375a86 - auVar15._8_4_);
    fVar38 = (float)(0x5f375a86 - auVar15._12_4_);
    auVar24._0_4_ = auVar28._0_4_ * fVar35;
    auVar24._4_4_ = auVar45._0_4_ * fVar36;
    auVar24._8_4_ = auVar50._0_4_ * fVar37;
    auVar24._12_4_ = fVar16 * fVar38;
    fVar47 = auVar45._4_4_ * fVar36;
    fVar48 = auVar50._4_4_ * fVar37;
    fVar19 = fVar18 * fVar38;
    auVar46._8_8_ = _UNK_03cabbc8;
    auVar46._0_8_ = _DAT_03cabbc0;
    auVar30._0_4_ = fVar9 * fVar35;
    auVar30._4_4_ = fVar11 * fVar36;
    auVar30._8_4_ = fVar10 * fVar37;
    auVar30._12_4_ = fVar12 * fVar38;
    auVar23 = NEON_ext(auVar17,auVar17,8,1);
    auVar15 = a64_TBL(ZEXT816(0),auVar24,auVar46);
    auVar3[4] = SUB41(fVar47,0);
    auVar3._0_4_ = auVar28._4_4_ * fVar35;
    auVar3[5] = (char)((uint)fVar47 >> 8);
    auVar3[6] = (char)((uint)fVar47 >> 0x10);
    auVar3[7] = (char)((uint)fVar47 >> 0x18);
    auVar3[8] = SUB41(fVar48,0);
    auVar3[9] = (char)((uint)fVar48 >> 8);
    auVar3[10] = (char)((uint)fVar48 >> 0x10);
    auVar3[0xb] = (char)((uint)fVar48 >> 0x18);
    auVar3[0xc] = SUB41(fVar19,0);
    auVar3[0xd] = (char)((uint)fVar19 >> 8);
    auVar3[0xe] = (char)((uint)fVar19 >> 0x10);
    auVar3[0xf] = (char)((uint)fVar19 >> 0x18);
    auVar50 = a64_TBL(ZEXT816(0),auVar3,auVar46);
    auVar29 = a64_TBL(ZEXT816(0),auVar30,auVar46);
    fVar36 = auVar24._0_4_ + auVar15._0_4_;
    fVar38 = auVar24._4_4_ + auVar15._4_4_;
    fVar25 = auVar24._8_4_ + auVar15._8_4_;
    fVar52 = auVar24._12_4_ + auVar15._12_4_;
    fVar35 = auVar28._4_4_ * fVar35 + auVar50._0_4_;
    fVar47 = fVar47 + auVar50._4_4_;
    fVar48 = fVar48 + auVar50._8_4_;
    fVar19 = fVar19 + auVar50._12_4_;
    fVar56 = auVar30._0_4_ + auVar29._0_4_;
    fVar39 = auVar30._4_4_ + auVar29._4_4_;
    fVar40 = auVar30._8_4_ + auVar29._8_4_;
    fVar41 = auVar30._12_4_ + auVar29._12_4_;
    auVar15 = NEON_ext(auVar13,auVar13,8,1);
    fVar37 = fVar16 * fVar56 - fVar31 * fVar36;
    fVar49 = fVar16 * fVar39 - fVar31 * fVar38;
    fVar51 = fVar16 * fVar40 - fVar31 * fVar25;
    fVar26 = fVar16 * fVar41 - fVar31 * fVar52;
    fVar56 = fVar31 * fVar35 - fVar18 * fVar56;
    fVar39 = fVar31 * fVar47 - fVar18 * fVar39;
    fVar40 = fVar31 * fVar48 - fVar18 * fVar40;
    fVar31 = fVar31 * fVar19 - fVar18 * fVar41;
    fVar35 = fVar18 * fVar36 - fVar16 * fVar35;
    fVar47 = fVar18 * fVar38 - fVar16 * fVar47;
    fVar48 = fVar18 * fVar25 - fVar16 * fVar48;
    fVar19 = fVar18 * fVar52 - fVar16 * fVar19;
    auVar14._0_4_ = fVar35 * fVar35 + fVar56 * fVar56 + fVar37 * fVar37;
    auVar14._4_4_ = fVar47 * fVar47 + fVar39 * fVar39 + fVar49 * fVar49;
    auVar14._8_4_ = fVar48 * fVar48 + fVar40 * fVar40 + fVar51 * fVar51;
    auVar14._12_4_ = fVar19 * fVar19 + fVar31 * fVar31 + fVar26 * fVar26;
    auVar4._8_4_ = 0xffffffff;
    auVar4._0_8_ = 0xffffffffffffffff;
    auVar4._12_4_ = 0xffffffff;
    auVar29 = NEON_sshl(auVar14,auVar4,4);
    fVar35 = (auVar23._0_4_ * fVar35 + auVar17._0_4_ * fVar56 + auVar17._4_4_ * fVar37) *
             (float)(0x5f375a86 - auVar29._0_4_);
    fVar47 = (auVar15._0_4_ * fVar47 + auVar13._0_4_ * fVar39 + auVar13._4_4_ * fVar49) *
             (float)(0x5f375a86 - auVar29._4_4_);
    fVar48 = ((fVar22 - fVar7) * fVar48 + (fVar20 - fVar5) * fVar40 + (fVar21 - fVar6) * fVar51) *
             (float)(0x5f375a86 - auVar29._8_4_);
    uVar2 = 0;
    if (((uVar8 >> (ulong)((-(uint)(fVar34 < fVar47) & 2) + (uint)(fVar32 < fVar35) |
                          -(uint)(fVar32 < fVar48) & 4) |
         uVar8 >> (ulong)((-(uint)(fVar47 < 0.0 - fVar34) & 2) + (uint)(fVar35 < 0.0 - fVar32) |
                         -(uint)(fVar48 < 0.0 - fVar32) & 4)) & uVar8) != 0) {
      uVar2 = uVar1;
    }
    return uVar2;
  }
  return uVar1;
}


