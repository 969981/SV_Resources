/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0151b9b4; name: FUN_0151b9b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0151b9b4(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar21;
  float fVar22;
  int iVar23;
  int iVar24;
  float fVar25;
  int iVar26;
  int iVar27;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar39;
  int iVar40;
  float fVar43;
  int iVar44;
  float fVar45;
  int iVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar47;
  int iVar48;
  int iVar49;
  int iVar51;
  int iVar52;
  undefined1 auVar50 [16];
  int iVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
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
  
  param_1 = param_1 * 0.5;
  iVar13 = -(uint)(ABS(param_1) == INFINITY);
  iVar21 = -(uint)(ABS(param_1) == INFINITY);
  iVar24 = -(uint)(ABS(param_1) == INFINITY);
  iVar27 = -(uint)(ABS(param_1) == INFINITY);
  fVar30 = param_1 + (float)_DAT_03caa8d0;
  fVar35 = param_1 + (float)((ulong)_DAT_03caa8d0 >> 0x20);
  fVar37 = param_1 + (float)_UNK_03caa8d8;
  fVar38 = param_1 + (float)((ulong)_UNK_03caa8d8 >> 0x20);
  auVar17[0] = ~(byte)iVar13;
  auVar17[1] = ~(byte)((uint)iVar13 >> 8);
  auVar17[2] = ~(byte)((uint)iVar13 >> 0x10);
  auVar17[3] = ~(byte)((uint)iVar13 >> 0x18);
  auVar17[4] = ~(byte)iVar21;
  auVar17[5] = ~(byte)((uint)iVar21 >> 8);
  auVar17[6] = ~(byte)((uint)iVar21 >> 0x10);
  auVar17[7] = ~(byte)((uint)iVar21 >> 0x18);
  auVar17[8] = ~(byte)iVar24;
  auVar17[9] = ~(byte)((uint)iVar24 >> 8);
  auVar17[10] = ~(byte)((uint)iVar24 >> 0x10);
  auVar17[0xb] = ~(byte)((uint)iVar24 >> 0x18);
  auVar17[0xc] = ~(byte)iVar27;
  auVar17[0xd] = ~(byte)((uint)iVar27 >> 8);
  auVar17[0xe] = ~(byte)((uint)iVar27 >> 0x10);
  auVar17[0xf] = ~(byte)((uint)iVar27 >> 0x18);
  auVar41._0_4_ =
       (int)((float)(-(uint)(0.0 <= fVar30) & 0x80000000 ^ 0xbf000000) + fVar30 * 0.15915494);
  auVar41._4_4_ =
       (int)((float)(-(uint)(0.0 <= fVar35) & 0x80000000 ^ 0xbf000000) + fVar35 * 0.15915494);
  auVar41._8_4_ =
       (int)((float)(-(uint)(0.0 <= fVar37) & 0x80000000 ^ 0xbf000000) + fVar37 * 0.15915494);
  auVar41._12_4_ =
       (int)((float)(-(uint)(0.0 <= fVar38) & 0x80000000 ^ 0xbf000000) + fVar38 * 0.15915494);
  auVar42 = NEON_scvtf(auVar41,4);
  fVar30 = fVar30 + auVar42._0_4_ * -6.2831855;
  fVar35 = fVar35 + auVar42._4_4_ * -6.2831855;
  fVar37 = fVar37 + auVar42._8_4_ * -6.2831855;
  fVar38 = fVar38 + auVar42._12_4_ * -6.2831855;
  fVar30 = (float)((uint)fVar30 ^
                  ((uint)fVar30 ^ (uint)(-3.1415927 - fVar30)) & -(uint)(fVar30 < -1.5707964));
  fVar35 = (float)((uint)fVar35 ^
                  ((uint)fVar35 ^ (uint)(-3.1415927 - fVar35)) & -(uint)(fVar35 < -1.5707964));
  fVar37 = (float)((uint)fVar37 ^
                  ((uint)fVar37 ^ (uint)(-3.1415927 - fVar37)) & -(uint)(fVar37 < -1.5707964));
  fVar38 = (float)((uint)fVar38 ^
                  ((uint)fVar38 ^ (uint)(-3.1415927 - fVar38)) & -(uint)(fVar38 < -1.5707964));
  fVar30 = (float)((uint)fVar30 ^
                  ((uint)fVar30 ^ (uint)(3.1415927 - fVar30)) & -(uint)(1.5707964 < fVar30));
  fVar35 = (float)((uint)fVar35 ^
                  ((uint)fVar35 ^ (uint)(3.1415927 - fVar35)) & -(uint)(1.5707964 < fVar35));
  fVar37 = (float)((uint)fVar37 ^
                  ((uint)fVar37 ^ (uint)(3.1415927 - fVar37)) & -(uint)(1.5707964 < fVar37));
  fVar38 = (float)((uint)fVar38 ^
                  ((uint)fVar38 ^ (uint)(3.1415927 - fVar38)) & -(uint)(1.5707964 < fVar38));
  auVar50._0_12_ = ZEXT812(0);
  auVar50._12_4_ = -(uint)(fVar38 == 1.5707964);
  fVar39 = fVar30 * fVar30;
  fVar43 = fVar35 * fVar35;
  fVar45 = fVar37 * fVar37;
  fVar47 = fVar38 * fVar38;
  auVar42 = NEON_fmov(0x3f800000,4);
  auVar18._8_4_ = 0x7fc00000;
  auVar18._0_8_ = 0x7fc000007fc00000;
  auVar18._12_4_ = 0x7fc00000;
  auVar32._0_4_ =
       fVar30 * (auVar42._0_4_ +
                fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar32._4_4_ =
       fVar35 * (auVar42._4_4_ +
                fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar32._8_4_ =
       fVar37 * (auVar42._8_4_ +
                fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar32._12_4_ =
       fVar38 * (auVar42._12_4_ +
                fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar18 = auVar18 ^ (auVar18 ^ auVar32 ^ (auVar32 ^ auVar42) & auVar50) & auVar17;
  fVar30 = auVar18._12_4_;
  auVar10._0_4_ = auVar18._0_4_ / fVar30;
  auVar10._4_4_ = auVar18._4_4_ / fVar30;
  auVar10._8_4_ = auVar18._8_4_ / fVar30;
  auVar33._8_4_ = 0x80000000;
  auVar33._0_8_ = 0x8000000080000000;
  auVar33._12_4_ = 0x80000000;
  auVar54._0_4_ = -(uint)(param_1 == -0.0);
  auVar54._4_4_ = -(uint)(param_1 == -0.0);
  auVar54._8_4_ = -(uint)(param_1 == -0.0);
  auVar54._12_4_ = -(uint)(param_1 == -0.0);
  auVar10._12_4_ = auVar10._0_4_;
  auVar10 = auVar10 ^ (auVar10 ^ auVar33) & auVar54;
  auVar42 = NEON_frecpe(auVar10,4);
  auVar34 = NEON_frecps(auVar42,auVar10,4);
  auVar19._0_4_ = auVar42._0_4_ * auVar34._0_4_;
  auVar19._4_4_ = auVar42._4_4_ * auVar34._4_4_;
  auVar19._8_4_ = auVar42._8_4_ * auVar34._8_4_;
  auVar19._12_4_ = auVar42._12_4_ * auVar34._12_4_;
  auVar42 = NEON_frecps(auVar19,auVar10,4);
  auVar20._0_4_ = auVar19._0_4_ * auVar42._0_4_;
  auVar20._4_4_ = auVar19._4_4_ * auVar42._4_4_;
  auVar20._8_4_ = auVar19._8_4_ * auVar42._8_4_;
  auVar20._12_4_ = auVar19._12_4_ * auVar42._12_4_;
  auVar42 = NEON_ext(ZEXT816(0),auVar20,4,1);
  auVar42 = NEON_ext(auVar42,auVar42,8,1);
  fVar14 = param_3 / (param_4 - param_3);
  fVar30 = (param_3 * param_4) / (param_4 - param_3);
  FUN_00d4a7f4();
  uVar4 = DAT_03cb56b0;
  uVar3 = DAT_03cb5690;
  uVar2 = DAT_03cb5600;
  uVar1 = DAT_03cb5410;
  fVar35 = -1.0 / (auVar20._0_4_ / param_2);
  fVar43 = -1.0 / auVar20._0_4_;
  lVar5 = *(long *)(param_5 + 0x1e8);
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(ulong *)(lVar5 + 0x80) = (ulong)(uint)(auVar20._0_4_ / param_2);
  *(long *)(lVar5 + 0x98) = auVar42._8_8_;
  *(long *)(lVar5 + 0x90) = auVar42._0_8_;
  *(ulong *)(lVar5 + 0xa8) = CONCAT44(0xbf800000,fVar14);
  *(undefined8 *)(lVar5 + 0xa0) = 0;
  *(ulong *)(lVar5 + 0xb8) = (ulong)(uint)fVar30;
  *(undefined8 *)(lVar5 + 0xb0) = 0;
  lVar5 = *(long *)(param_5 + 0x1e8);
  fVar15 = (float)uVar1;
  fVar22 = (float)((ulong)uVar1 >> 0x20);
  fVar37 = (float)uVar4;
  fVar38 = (float)((ulong)uVar4 >> 0x20);
  auVar42._0_4_ = fVar15 * fVar15 + fVar22 * fVar22;
  auVar42._4_4_ = fVar35 * fVar35 + 0.0;
  auVar42._8_4_ = fVar15 * fVar15 + fVar22 * fVar22;
  auVar42._12_4_ = fVar35 * fVar35 + 0.0;
  auVar42 = NEON_ext(auVar42,auVar42,4,1);
  fVar45 = (float)uVar2;
  fVar47 = (float)((ulong)uVar2 >> 0x20);
  auVar34._0_4_ = fVar37 * fVar37 + fVar38 * fVar38;
  auVar34._4_4_ = fVar35 * fVar35 + 0.0;
  auVar34._8_4_ = fVar37 * fVar37 + fVar38 * fVar38;
  auVar34._12_4_ = fVar35 * fVar35 + 0.0;
  auVar34 = NEON_ext(auVar34,auVar34,4,1);
  fVar31 = (float)uVar3;
  fVar36 = (float)((ulong)uVar3 >> 0x20);
  auVar58._0_4_ = fVar45 * fVar45 + fVar47 * fVar47;
  auVar58._4_4_ = fVar43 * fVar43 + 0.0;
  auVar58._8_4_ = fVar45 * fVar45 + fVar47 * fVar47;
  auVar58._12_4_ = fVar43 * fVar43 + 0.0;
  auVar6._0_4_ = auVar42._0_4_ + auVar42._4_4_;
  auVar6._4_4_ = auVar42._8_4_ + auVar42._12_4_;
  auVar6._8_4_ = auVar42._0_4_ + auVar42._4_4_;
  auVar6._12_4_ = auVar42._8_4_ + auVar42._12_4_;
  auVar54 = NEON_frsqrte(auVar6,4);
  auVar42 = NEON_ext(auVar58,auVar58,4,1);
  auVar7._0_4_ = auVar34._0_4_ + auVar34._4_4_;
  auVar7._4_4_ = auVar34._8_4_ + auVar34._12_4_;
  auVar7._8_4_ = auVar34._0_4_ + auVar34._4_4_;
  auVar7._12_4_ = auVar34._8_4_ + auVar34._12_4_;
  auVar58 = NEON_frsqrte(auVar7,4);
  auVar61._0_4_ = fVar31 * fVar31 + fVar36 * fVar36;
  auVar61._4_4_ = fVar43 * fVar43 + 0.0;
  auVar61._8_4_ = fVar31 * fVar31 + fVar36 * fVar36;
  auVar61._12_4_ = fVar43 * fVar43 + 0.0;
  auVar34 = NEON_ext(auVar61,auVar61,4,1);
  auVar60._0_4_ = auVar6._0_4_ * auVar54._0_4_;
  auVar60._4_4_ = auVar6._4_4_ * auVar54._4_4_;
  auVar60._8_4_ = auVar6._8_4_ * auVar54._8_4_;
  auVar60._12_4_ = auVar6._12_4_ * auVar54._12_4_;
  auVar8._0_4_ = auVar42._0_4_ + auVar42._4_4_;
  auVar8._4_4_ = auVar42._8_4_ + auVar42._12_4_;
  auVar8._8_4_ = auVar42._0_4_ + auVar42._4_4_;
  auVar8._12_4_ = auVar42._8_4_ + auVar42._12_4_;
  auVar42 = NEON_frsqrte(auVar8,4);
  auVar9._0_4_ = auVar34._0_4_ + auVar34._4_4_;
  auVar9._4_4_ = auVar34._8_4_ + auVar34._12_4_;
  auVar9._8_4_ = auVar34._0_4_ + auVar34._4_4_;
  auVar9._12_4_ = auVar34._8_4_ + auVar34._12_4_;
  auVar34 = NEON_frsqrte(auVar9,4);
  auVar61 = NEON_frsqrts(auVar54,auVar60,4);
  auVar55._0_4_ = auVar54._0_4_ * auVar61._0_4_;
  auVar55._4_4_ = auVar54._4_4_ * auVar61._4_4_;
  auVar55._8_4_ = auVar54._8_4_ * auVar61._8_4_;
  auVar55._12_4_ = auVar54._12_4_ * auVar61._12_4_;
  auVar62._0_4_ = auVar7._0_4_ * auVar58._0_4_;
  auVar62._4_4_ = auVar7._4_4_ * auVar58._4_4_;
  auVar62._8_4_ = auVar7._8_4_ * auVar58._8_4_;
  auVar62._12_4_ = auVar7._12_4_ * auVar58._12_4_;
  auVar61 = NEON_frsqrts(auVar58,auVar62,4);
  auVar59._0_4_ = auVar58._0_4_ * auVar61._0_4_;
  auVar59._4_4_ = auVar58._4_4_ * auVar61._4_4_;
  auVar59._8_4_ = auVar58._8_4_ * auVar61._8_4_;
  auVar59._12_4_ = auVar58._12_4_ * auVar61._12_4_;
  auVar63._0_4_ = auVar8._0_4_ * auVar42._0_4_;
  auVar63._4_4_ = auVar8._4_4_ * auVar42._4_4_;
  auVar63._8_4_ = auVar8._8_4_ * auVar42._8_4_;
  auVar63._12_4_ = auVar8._12_4_ * auVar42._12_4_;
  auVar58 = NEON_frsqrts(auVar42,auVar63,4);
  auVar56._0_4_ = auVar42._0_4_ * auVar58._0_4_;
  auVar56._4_4_ = auVar42._4_4_ * auVar58._4_4_;
  auVar56._8_4_ = auVar42._8_4_ * auVar58._8_4_;
  auVar56._12_4_ = auVar42._12_4_ * auVar58._12_4_;
  auVar64._0_4_ = auVar9._0_4_ * auVar34._0_4_;
  auVar64._4_4_ = auVar9._4_4_ * auVar34._4_4_;
  auVar64._8_4_ = auVar9._8_4_ * auVar34._8_4_;
  auVar64._12_4_ = auVar9._12_4_ * auVar34._12_4_;
  auVar42 = NEON_frsqrts(auVar34,auVar64,4);
  auVar57._0_4_ = auVar34._0_4_ * auVar42._0_4_;
  auVar57._4_4_ = auVar34._4_4_ * auVar42._4_4_;
  auVar57._8_4_ = auVar34._8_4_ * auVar42._8_4_;
  auVar57._12_4_ = auVar34._12_4_ * auVar42._12_4_;
  auVar65._0_4_ = auVar6._0_4_ * auVar55._0_4_;
  auVar65._4_4_ = auVar6._4_4_ * auVar55._4_4_;
  auVar65._8_4_ = auVar6._8_4_ * auVar55._8_4_;
  auVar65._12_4_ = auVar6._12_4_ * auVar55._12_4_;
  iVar13 = -(uint)(auVar6._0_4_ == 0.0);
  iVar21 = -(uint)(auVar6._4_4_ == 0.0);
  iVar24 = -(uint)(auVar6._8_4_ == 0.0);
  iVar27 = -(uint)(auVar6._12_4_ == 0.0);
  auVar42 = NEON_frsqrts(auVar55,auVar65,4);
  auVar66._0_4_ = auVar7._0_4_ * auVar59._0_4_;
  auVar66._4_4_ = auVar7._4_4_ * auVar59._4_4_;
  auVar66._8_4_ = auVar7._8_4_ * auVar59._8_4_;
  auVar66._12_4_ = auVar7._12_4_ * auVar59._12_4_;
  iVar40 = -(uint)(auVar7._0_4_ == 0.0);
  iVar44 = -(uint)(auVar7._4_4_ == 0.0);
  iVar46 = -(uint)(auVar7._8_4_ == 0.0);
  iVar48 = -(uint)(auVar7._12_4_ == 0.0);
  auVar34 = NEON_frsqrts(auVar59,auVar66,4);
  fVar15 = fVar15 * auVar55._0_4_ * auVar42._0_4_;
  fVar22 = fVar22 * auVar55._4_4_ * auVar42._4_4_;
  fVar25 = fVar35 * auVar55._8_4_ * auVar42._8_4_;
  fVar28 = auVar55._12_4_ * auVar42._12_4_ * 0.0;
  iVar16 = -(uint)(auVar8._0_4_ == 0.0);
  iVar23 = -(uint)(auVar8._4_4_ == 0.0);
  iVar26 = -(uint)(auVar8._8_4_ == 0.0);
  iVar29 = -(uint)(auVar8._12_4_ == 0.0);
  auVar67._0_4_ = auVar8._0_4_ * auVar56._0_4_;
  auVar67._4_4_ = auVar8._4_4_ * auVar56._4_4_;
  auVar67._8_4_ = auVar8._8_4_ * auVar56._8_4_;
  auVar67._12_4_ = auVar8._12_4_ * auVar56._12_4_;
  iVar49 = -(uint)(auVar9._0_4_ == 0.0);
  iVar51 = -(uint)(auVar9._4_4_ == 0.0);
  iVar52 = -(uint)(auVar9._8_4_ == 0.0);
  iVar53 = -(uint)(auVar9._12_4_ == 0.0);
  auVar42 = NEON_frsqrts(auVar56,auVar67,4);
  fVar37 = fVar37 * auVar59._0_4_ * auVar34._0_4_;
  fVar38 = fVar38 * auVar59._4_4_ * auVar34._4_4_;
  fVar35 = fVar35 * auVar59._8_4_ * auVar34._8_4_;
  fVar39 = auVar59._12_4_ * auVar34._12_4_ * 0.0;
  fVar30 = fVar30 / fVar14;
  auVar68._0_4_ = auVar9._0_4_ * auVar57._0_4_;
  auVar68._4_4_ = auVar9._4_4_ * auVar57._4_4_;
  auVar68._8_4_ = auVar9._8_4_ * auVar57._8_4_;
  auVar68._12_4_ = auVar9._12_4_ * auVar57._12_4_;
  fVar45 = fVar45 * auVar56._0_4_ * auVar42._0_4_;
  fVar47 = fVar47 * auVar56._4_4_ * auVar42._4_4_;
  fVar11 = fVar43 * auVar56._8_4_ * auVar42._8_4_;
  fVar12 = auVar56._12_4_ * auVar42._12_4_ * 0.0;
  *(byte *)(lVar5 + 200) = SUB41(fVar25,0) & ~(byte)iVar24;
  *(byte *)(lVar5 + 0xc9) = (byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar24 >> 8);
  *(byte *)(lVar5 + 0xca) = (byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
  *(byte *)(lVar5 + 0xcb) = (byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
  *(byte *)(lVar5 + 0xcc) = SUB41(fVar28,0) & ~(byte)iVar27;
  *(byte *)(lVar5 + 0xcd) = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar27 >> 8);
  *(byte *)(lVar5 + 0xce) = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
  *(byte *)(lVar5 + 0xcf) = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
  *(byte *)(lVar5 + 0xc0) = SUB41(fVar15,0) & ~(byte)iVar13;
  *(byte *)(lVar5 + 0xc1) = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar13 >> 8);
  *(byte *)(lVar5 + 0xc2) = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10);
  *(byte *)(lVar5 + 0xc3) = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18);
  *(byte *)(lVar5 + 0xc4) = SUB41(fVar22,0) & ~(byte)iVar21;
  *(byte *)(lVar5 + 0xc5) = (byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar21 >> 8);
  *(byte *)(lVar5 + 0xc6) = (byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
  *(byte *)(lVar5 + 199) = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
  *(byte *)(lVar5 + 0xd8) = SUB41(fVar35,0) & ~(byte)iVar46;
  *(byte *)(lVar5 + 0xd9) = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar46 >> 8);
  *(byte *)(lVar5 + 0xda) = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
  *(byte *)(lVar5 + 0xdb) = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
  *(byte *)(lVar5 + 0xdc) = SUB41(fVar39,0) & ~(byte)iVar48;
  *(byte *)(lVar5 + 0xdd) = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar48 >> 8);
  *(byte *)(lVar5 + 0xde) = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
  *(byte *)(lVar5 + 0xdf) = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
  *(byte *)(lVar5 + 0xd0) = SUB41(fVar37,0) & ~(byte)iVar40;
  *(byte *)(lVar5 + 0xd1) = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar40 >> 8);
  *(byte *)(lVar5 + 0xd2) = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10);
  *(byte *)(lVar5 + 0xd3) = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18);
  *(byte *)(lVar5 + 0xd4) = SUB41(fVar38,0) & ~(byte)iVar44;
  *(byte *)(lVar5 + 0xd5) = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar44 >> 8);
  *(byte *)(lVar5 + 0xd6) = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10);
  *(byte *)(lVar5 + 0xd7) = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18);
  auVar42 = NEON_frsqrts(auVar57,auVar68,4);
  fVar31 = fVar31 * auVar57._0_4_ * auVar42._0_4_;
  fVar36 = fVar36 * auVar57._4_4_ * auVar42._4_4_;
  fVar43 = fVar43 * auVar57._8_4_ * auVar42._8_4_;
  fVar35 = auVar57._12_4_ * auVar42._12_4_ * 0.0;
  *(ulong *)(lVar5 + 0xe8) =
       CONCAT17((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                CONCAT16((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                         CONCAT15((byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                  CONCAT14(SUB41(fVar12,0) & ~(byte)iVar29,
                                           CONCAT13((byte)((uint)fVar11 >> 0x18) &
                                                    ~(byte)((uint)iVar26 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar11 >> 0x10) &
                                                             ~(byte)((uint)iVar26 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar11 >> 8) &
                                                                      ~(byte)((uint)iVar26 >> 8),
                                                                      SUB41(fVar11,0) &
                                                                      ~(byte)iVar26)))))));
  *(ulong *)(lVar5 + 0xe0) =
       CONCAT17((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                CONCAT16((byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                         CONCAT15((byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar23 >> 8),
                                  CONCAT14(SUB41(fVar47,0) & ~(byte)iVar23,
                                           CONCAT13((byte)((uint)fVar45 >> 0x18) &
                                                    ~(byte)((uint)iVar16 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar45 >> 0x10) &
                                                             ~(byte)((uint)iVar16 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar45 >> 8) &
                                                                      ~(byte)((uint)iVar16 >> 8),
                                                                      SUB41(fVar45,0) &
                                                                      ~(byte)iVar16)))))));
  *(byte *)(lVar5 + 0xf8) = SUB41(fVar43,0) & ~(byte)iVar52;
  *(byte *)(lVar5 + 0xf9) = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar52 >> 8);
  *(byte *)(lVar5 + 0xfa) = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
  *(byte *)(lVar5 + 0xfb) = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
  *(byte *)(lVar5 + 0xfc) = SUB41(fVar35,0) & ~(byte)iVar53;
  *(byte *)(lVar5 + 0xfd) = (byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar53 >> 8);
  *(byte *)(lVar5 + 0xfe) = (byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10);
  *(byte *)(lVar5 + 0xff) = (byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18);
  *(byte *)(lVar5 + 0xf0) = SUB41(fVar31,0) & ~(byte)iVar49;
  *(byte *)(lVar5 + 0xf1) = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar49 >> 8);
  *(byte *)(lVar5 + 0xf2) = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10);
  *(byte *)(lVar5 + 0xf3) = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18);
  *(byte *)(lVar5 + 0xf4) = SUB41(fVar36,0) & ~(byte)iVar51;
  *(byte *)(lVar5 + 0xf5) = (byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar51 >> 8);
  *(byte *)(lVar5 + 0xf6) = (byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
  *(byte *)(lVar5 + 0xf7) = (byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
  *(ulong *)(lVar5 + 0x108) = CONCAT44((fVar14 * fVar30) / (fVar14 + 1.0),0xbf800000);
  *(undefined8 *)(lVar5 + 0x100) = 0;
  *(ulong *)(lVar5 + 0x118) = CONCAT44(fVar30,0x3f800000);
  *(undefined8 *)(lVar5 + 0x110) = 0;
  *(undefined1 *)(*(long *)(param_5 + 0x1e8) + 0x180) = 1;
  return;
}


