/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0156d194; name: FUN_0156d194
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0156d194(float param_1,long *param_2,long param_3,undefined8 *param_4,
                 code *UNRECOVERED_JUMPTABLE,ulong param_6,long param_7)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar11;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar12;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar20;
  float fVar28;
  float fVar29;
  undefined1 auVar21 [16];
  float fVar31;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar30;
  float fVar32;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar35;
  undefined1 auVar33 [16];
  float fVar36;
  undefined1 auVar34 [16];
  float fVar37;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined8 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [16];
  long *local_38;
  
  if ((param_3 != 0) && (*param_2 != 0)) {
    fVar18 = *(float *)(param_3 + 0xc0) * 0.5;
    iVar1 = -(uint)(fVar18 == 0.0);
    fVar35 = fVar18 + 1.5707964;
    auVar47 = NEON_fmov(0x3f800000,4);
    iVar11 = -(uint)(ABS(fVar18) == INFINITY);
    auVar6[8] = ~(byte)iVar11;
    auVar6._0_8_ = 0xffffffffffffffff;
    auVar6[9] = ~(byte)((uint)iVar11 >> 8);
    auVar6[10] = ~(byte)((uint)iVar11 >> 0x10);
    auVar6[0xb] = ~(byte)((uint)iVar11 >> 0x18);
    auVar6[0xc] = 0xff;
    auVar6[0xd] = 0xff;
    auVar6[0xe] = 0xff;
    auVar6[0xf] = 0xff;
    auVar21 = NEON_scvtf(ZEXT416((uint)(int)((float)(-(uint)(0.0 <= fVar18) & 0x80000000 ^
                                                    0xbf000000) + fVar18 * 0.15915494)) << 0x40,4);
    fVar12 = 0.0 - auVar21._0_4_ * 6.2831855;
    fVar17 = 0.0 - auVar21._4_4_ * 6.2831855;
    fVar18 = fVar18 - auVar21._8_4_ * 6.2831855;
    fVar19 = 0.0 - auVar21._12_4_ * 6.2831855;
    fVar12 = (float)((uint)fVar12 ^
                    ((uint)fVar12 ^ (uint)(-3.1415927 - fVar12)) & -(uint)(fVar12 < -1.5707964));
    fVar17 = (float)((uint)fVar17 ^
                    ((uint)fVar17 ^ (uint)(-3.1415927 - fVar17)) & -(uint)(fVar17 < -1.5707964));
    fVar18 = (float)((uint)fVar18 ^
                    ((uint)fVar18 ^ (uint)(-3.1415927 - fVar18)) & -(uint)(fVar18 < -1.5707964));
    fVar19 = (float)((uint)fVar19 ^
                    ((uint)fVar19 ^ (uint)(-3.1415927 - fVar19)) & -(uint)(fVar19 < -1.5707964));
    fVar12 = (float)((uint)fVar12 ^
                    ((uint)fVar12 ^ (uint)(3.1415927 - fVar12)) & -(uint)(1.5707964 < fVar12));
    fVar17 = (float)((uint)fVar17 ^
                    ((uint)fVar17 ^ (uint)(3.1415927 - fVar17)) & -(uint)(1.5707964 < fVar17));
    fVar18 = (float)((uint)fVar18 ^
                    ((uint)fVar18 ^ (uint)(3.1415927 - fVar18)) & -(uint)(1.5707964 < fVar18));
    fVar19 = (float)((uint)fVar19 ^
                    ((uint)fVar19 ^ (uint)(3.1415927 - fVar19)) & -(uint)(1.5707964 < fVar19));
    fVar20 = fVar12 * fVar12;
    fVar28 = fVar17 * fVar17;
    fVar29 = fVar18 * fVar18;
    fVar31 = fVar19 * fVar19;
    fVar37 = auVar47._0_4_;
    fVar41 = auVar47._4_4_;
    fVar42 = auVar47._8_4_;
    fVar43 = auVar47._12_4_;
    auVar13._0_4_ =
         fVar12 * (fVar37 + fVar20 * (fVar20 * (fVar20 * (fVar20 * (fVar20 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
    auVar13._4_4_ =
         fVar17 * (fVar41 + fVar28 * (fVar28 * (fVar28 * (fVar28 * (fVar28 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
    auVar13._8_4_ =
         fVar18 * (fVar42 + fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
    auVar13._12_4_ =
         fVar19 * (fVar43 + fVar31 * (fVar31 * (fVar31 * (fVar31 * (fVar31 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
    iVar11 = -(uint)(ABS(fVar35) == INFINITY);
    auVar22[8] = ~(byte)iVar11;
    auVar22._0_8_ = 0xffffffffffffffff;
    auVar22[9] = ~(byte)((uint)iVar11 >> 8);
    auVar22[10] = ~(byte)((uint)iVar11 >> 0x10);
    auVar22[0xb] = ~(byte)((uint)iVar11 >> 0x18);
    auVar22[0xc] = 0xff;
    auVar22[0xd] = 0xff;
    auVar22[0xe] = 0xff;
    auVar22[0xf] = 0xff;
    auVar21[10] = 0xc0;
    auVar21._0_10_ = (unkuint10)0x7fc000007fc00000;
    auVar21[0xb] = 0x7f;
    auVar21._12_2_ = 0;
    auVar21[0xe] = 0xc0;
    auVar21[0xf] = 0x7f;
    auVar13 = auVar13 ^ (auVar13 ^ auVar21) & ~auVar6;
    auVar21 = NEON_scvtf(ZEXT416((uint)(int)((float)(-(uint)(0.0 <= fVar35) & 0x80000000 ^
                                                    0xbf000000) + fVar35 * 0.15915494)) << 0x40,4);
    fVar12 = 1.5707964 - auVar21._0_4_ * 6.2831855;
    fVar17 = 1.5707964 - auVar21._4_4_ * 6.2831855;
    fVar35 = fVar35 - auVar21._8_4_ * 6.2831855;
    fVar18 = 1.5707964 - auVar21._12_4_ * 6.2831855;
    fVar12 = (float)((uint)fVar12 ^
                    ((uint)fVar12 ^ (uint)(-3.1415927 - fVar12)) & -(uint)(fVar12 < -1.5707964));
    fVar17 = (float)((uint)fVar17 ^
                    ((uint)fVar17 ^ (uint)(-3.1415927 - fVar17)) & -(uint)(fVar17 < -1.5707964));
    fVar35 = (float)((uint)fVar35 ^
                    ((uint)fVar35 ^ (uint)(-3.1415927 - fVar35)) & -(uint)(fVar35 < -1.5707964));
    fVar18 = (float)((uint)fVar18 ^
                    ((uint)fVar18 ^ (uint)(-3.1415927 - fVar18)) & -(uint)(fVar18 < -1.5707964));
    fVar12 = (float)((uint)fVar12 ^
                    ((uint)fVar12 ^ (uint)(3.1415927 - fVar12)) & -(uint)(1.5707964 < fVar12));
    fVar17 = (float)((uint)fVar17 ^
                    ((uint)fVar17 ^ (uint)(3.1415927 - fVar17)) & -(uint)(1.5707964 < fVar17));
    fVar35 = (float)((uint)fVar35 ^
                    ((uint)fVar35 ^ (uint)(3.1415927 - fVar35)) & -(uint)(1.5707964 < fVar35));
    fVar18 = (float)((uint)fVar18 ^
                    ((uint)fVar18 ^ (uint)(3.1415927 - fVar18)) & -(uint)(1.5707964 < fVar18));
    fVar20 = fVar12 * fVar12;
    fVar28 = fVar17 * fVar17;
    fVar29 = fVar35 * fVar35;
    fVar31 = fVar18 * fVar18;
    fVar19 = auVar13._0_4_;
    auVar33._0_4_ =
         fVar12 * (fVar37 + fVar20 * (fVar20 * (fVar20 * (fVar20 * (fVar20 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
    auVar33._4_4_ =
         fVar17 * (fVar41 + fVar28 * (fVar28 * (fVar28 * (fVar28 * (fVar28 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
    auVar33._8_4_ =
         fVar35 * (fVar42 + fVar29 * (fVar29 * (fVar29 * (fVar29 * (fVar29 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
    auVar33._12_4_ =
         fVar18 * (fVar43 + fVar31 * (fVar31 * (fVar31 * (fVar31 * (fVar31 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
    fVar20 = auVar13._4_4_;
    auVar48[10] = 0xc0;
    auVar48._0_10_ = (unkuint10)0x7fc000007fc00000;
    auVar48[0xb] = 0x7f;
    auVar48._12_2_ = 0;
    auVar48[0xe] = 0xc0;
    auVar48[0xf] = 0x7f;
    auVar23[10] = 0xc0;
    auVar23._0_10_ = (unkuint10)0x7fc000007fc00000;
    auVar23[0xb] = 0x7f;
    auVar23._12_2_ = 0;
    auVar23[0xe] = 0xc0;
    auVar23[0xf] = 0x7f;
    auVar23 = auVar23 ^ (auVar48 ^ auVar33) & auVar22;
    auVar5[10] = 0xc0;
    auVar5._0_10_ = (unkuint10)0x7fc000007fc00000;
    auVar5[0xb] = 0x7f;
    auVar5._12_2_ = 0;
    auVar5[0xe] = 0xc0;
    auVar5[0xf] = 0x7f;
    auVar7[10] = 0xc0;
    auVar7._0_10_ = (unkuint10)0x7fc000007fc00000;
    auVar7[0xb] = 0x7f;
    auVar7._12_2_ = 0;
    auVar7[0xe] = 0xc0;
    auVar7[0xf] = 0x7f;
    auVar7 = auVar7 ^ (auVar5 ^ auVar23 ^ (auVar23 ^ auVar47) &
                                          ~(ZEXT416(CONCAT13(~(byte)((uint)iVar1 >> 0x18),
                                                             CONCAT12(~(byte)((uint)iVar1 >> 0x10),
                                                                      CONCAT11(~(byte)((uint)iVar1
                                                                                      >> 8),
                                                                               ~(byte)iVar1)))) <<
                                           0x40)) & auVar6;
    fVar12 = auVar7._0_4_;
    fVar17 = auVar7._4_4_;
    fVar18 = auVar7._8_4_;
    fVar28 = auVar13._8_4_;
    fVar29 = (float)_DAT_03cab3a0;
    fVar31 = (float)((ulong)_DAT_03cab3a0 >> 0x20);
    fVar35 = (float)_UNK_03cab3a8;
    fVar44 = (float)((ulong)_UNK_03cab3a8 >> 0x20);
    auVar8._0_8_ = CONCAT44(fVar28 * fVar12 * fVar17 + fVar18 * fVar20 * fVar19 * fVar31,
                            fVar18 * fVar12 * fVar20 + fVar28 * fVar17 * fVar19 * fVar29);
    auVar8._8_4_ = fVar18 * fVar19 * fVar17 + fVar28 * fVar20 * fVar12 * fVar35;
    auVar8._12_4_ = fVar18 * fVar12 * fVar17 + fVar28 * fVar20 * fVar19 * fVar44;
    param_4[1] = auVar8._8_8_;
    *param_4 = auVar8._0_8_;
    param_2 = (long *)*param_2;
    local_38 = param_2;
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 0x58))(param_2);
    }
    fVar12 = (float)FUN_0156da00(&local_38);
    auVar39._8_4_ = 0xbf000000;
    auVar39._0_8_ = 0xbf000000bf000000;
    auVar39._12_4_ = 0xbf000000;
    auVar46._8_4_ = 0x3f000000;
    auVar46._0_8_ = 0x3f0000003f000000;
    auVar46._12_4_ = 0x3f000000;
    auVar15._8_4_ = 0x7fc00000;
    auVar15._0_8_ = 0x7fc000007fc00000;
    auVar4._8_4_ = 0x7fc00000;
    auVar4._0_8_ = 0x7fc000007fc00000;
    auVar27._8_4_ = 0x7fc00000;
    auVar27._0_8_ = 0x7fc000007fc00000;
    auVar3._8_4_ = 0x7fc00000;
    auVar3._0_8_ = 0x7fc000007fc00000;
    auVar2._8_4_ = 0x7fc00000;
    auVar2._0_8_ = 0x7fc000007fc00000;
    fVar12 = fVar12 * 0.5;
    auVar24._8_4_ = -(uint)(0.0 <= fVar12);
    auVar24._0_8_ = 0xffffffffffffffff;
    auVar24._12_4_ = 0xffffffff;
    iVar1 = -(uint)(fVar12 == 0.0);
    auVar21 = auVar39 ^ (auVar39 ^ auVar46) & auVar24;
    fVar36 = fVar12 + 1.5707964;
    iVar11 = -(uint)(ABS(fVar12) == INFINITY);
    auVar14[8] = ~(byte)iVar11;
    auVar14._0_8_ = 0xffffffffffffffff;
    auVar14[9] = ~(byte)((uint)iVar11 >> 8);
    auVar14[10] = ~(byte)((uint)iVar11 >> 0x10);
    auVar14[0xb] = ~(byte)((uint)iVar11 >> 0x18);
    auVar14[0xc] = 0xff;
    auVar14[0xd] = 0xff;
    auVar14[0xe] = 0xff;
    auVar14[0xf] = 0xff;
    auVar25._0_4_ = (int)(auVar21._0_4_ + 0.0);
    auVar25._4_4_ = (int)(auVar21._4_4_ + 0.0);
    auVar25._8_4_ = (int)(auVar21._8_4_ + fVar12 * 0.15915494);
    auVar25._12_4_ = (int)(auVar21._12_4_ + 0.0);
    auVar21 = NEON_scvtf(auVar25,4);
    fVar17 = 0.0 - auVar21._0_4_ * 6.2831855;
    fVar18 = 0.0 - auVar21._4_4_ * 6.2831855;
    fVar12 = fVar12 - auVar21._8_4_ * 6.2831855;
    fVar19 = 0.0 - auVar21._12_4_ * 6.2831855;
    fVar17 = (float)((uint)fVar17 ^
                    ((uint)fVar17 ^ (uint)(-3.1415927 - fVar17)) & -(uint)(fVar17 < -1.5707964));
    fVar18 = (float)((uint)fVar18 ^
                    ((uint)fVar18 ^ (uint)(-3.1415927 - fVar18)) & -(uint)(fVar18 < -1.5707964));
    fVar12 = (float)((uint)fVar12 ^
                    ((uint)fVar12 ^ (uint)(-3.1415927 - fVar12)) & -(uint)(fVar12 < -1.5707964));
    fVar19 = (float)((uint)fVar19 ^
                    ((uint)fVar19 ^ (uint)(-3.1415927 - fVar19)) & -(uint)(fVar19 < -1.5707964));
    fVar17 = (float)((uint)fVar17 ^
                    ((uint)fVar17 ^ (uint)(3.1415927 - fVar17)) & -(uint)(1.5707964 < fVar17));
    fVar18 = (float)((uint)fVar18 ^
                    ((uint)fVar18 ^ (uint)(3.1415927 - fVar18)) & -(uint)(1.5707964 < fVar18));
    fVar12 = (float)((uint)fVar12 ^
                    ((uint)fVar12 ^ (uint)(3.1415927 - fVar12)) & -(uint)(1.5707964 < fVar12));
    fVar19 = (float)((uint)fVar19 ^
                    ((uint)fVar19 ^ (uint)(3.1415927 - fVar19)) & -(uint)(1.5707964 < fVar19));
    fVar20 = fVar17 * fVar17;
    fVar28 = fVar18 * fVar18;
    fVar30 = fVar12 * fVar12;
    fVar32 = fVar19 * fVar19;
    iVar11 = -(uint)(ABS(fVar36) == INFINITY);
    auVar26[8] = ~(byte)iVar11;
    auVar26._0_8_ = 0xffffffffffffffff;
    auVar26[9] = ~(byte)((uint)iVar11 >> 8);
    auVar26[10] = ~(byte)((uint)iVar11 >> 0x10);
    auVar26[0xb] = ~(byte)((uint)iVar11 >> 0x18);
    auVar26[0xc] = 0xff;
    auVar26[0xd] = 0xff;
    auVar26[0xe] = 0xff;
    auVar26[0xf] = 0xff;
    auVar9._0_4_ = fVar17 * (fVar37 + fVar20 * (fVar20 * (fVar20 * (fVar20 * (fVar20 * 
                                                  -2.5052108e-08 + 2.7557319e-06) + -0.0001984127) +
                                                  0.008333334) + -0.16666667));
    auVar9._4_4_ = fVar18 * (fVar41 + fVar28 * (fVar28 * (fVar28 * (fVar28 * (fVar28 * 
                                                  -2.5052108e-08 + 2.7557319e-06) + -0.0001984127) +
                                                  0.008333334) + -0.16666667));
    auVar9._8_4_ = fVar12 * (fVar42 + fVar30 * (fVar30 * (fVar30 * (fVar30 * (fVar30 * 
                                                  -2.5052108e-08 + 2.7557319e-06) + -0.0001984127) +
                                                  0.008333334) + -0.16666667));
    auVar9._12_4_ =
         fVar19 * (fVar43 + fVar32 * (fVar32 * (fVar32 * (fVar32 * (fVar32 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
    auVar38._8_4_ = -(uint)(0.0 <= fVar36);
    auVar38._0_8_ = 0xffffffffffffffff;
    auVar38._12_4_ = 0xffffffff;
    auVar39 = auVar39 ^ (auVar39 ^ auVar46) & auVar38;
    auVar2._12_4_ = 0x7fc00000;
    auVar9 = auVar9 ^ (auVar9 ^ auVar2) & ~auVar14;
    auVar40._0_4_ = (int)(auVar39._0_4_ + 0.25);
    auVar40._4_4_ = (int)(auVar39._4_4_ + 0.25);
    auVar40._8_4_ = (int)(auVar39._8_4_ + fVar36 * 0.15915494);
    auVar40._12_4_ = (int)(auVar39._12_4_ + 0.25);
    auVar21 = NEON_scvtf(auVar40,4);
    fVar17 = 1.5707964 - auVar21._0_4_ * 6.2831855;
    fVar18 = 1.5707964 - auVar21._4_4_ * 6.2831855;
    fVar36 = fVar36 - auVar21._8_4_ * 6.2831855;
    fVar19 = 1.5707964 - auVar21._12_4_ * 6.2831855;
    fVar17 = (float)((uint)fVar17 ^
                    ((uint)fVar17 ^ (uint)(-3.1415927 - fVar17)) & -(uint)(fVar17 < -1.5707964));
    fVar18 = (float)((uint)fVar18 ^
                    ((uint)fVar18 ^ (uint)(-3.1415927 - fVar18)) & -(uint)(fVar18 < -1.5707964));
    fVar36 = (float)((uint)fVar36 ^
                    ((uint)fVar36 ^ (uint)(-3.1415927 - fVar36)) & -(uint)(fVar36 < -1.5707964));
    fVar19 = (float)((uint)fVar19 ^
                    ((uint)fVar19 ^ (uint)(-3.1415927 - fVar19)) & -(uint)(fVar19 < -1.5707964));
    fVar17 = (float)((uint)fVar17 ^
                    ((uint)fVar17 ^ (uint)(3.1415927 - fVar17)) & -(uint)(1.5707964 < fVar17));
    fVar18 = (float)((uint)fVar18 ^
                    ((uint)fVar18 ^ (uint)(3.1415927 - fVar18)) & -(uint)(1.5707964 < fVar18));
    fVar36 = (float)((uint)fVar36 ^
                    ((uint)fVar36 ^ (uint)(3.1415927 - fVar36)) & -(uint)(1.5707964 < fVar36));
    fVar19 = (float)((uint)fVar19 ^
                    ((uint)fVar19 ^ (uint)(3.1415927 - fVar19)) & -(uint)(1.5707964 < fVar19));
    fVar20 = fVar17 * fVar17;
    fVar28 = fVar18 * fVar18;
    fVar30 = fVar36 * fVar36;
    fVar32 = fVar19 * fVar19;
    fVar12 = auVar9._0_4_;
    auVar34._0_4_ =
         fVar17 * (fVar37 + fVar20 * (fVar20 * (fVar20 * (fVar20 * (fVar20 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
    auVar34._4_4_ =
         fVar18 * (fVar41 + fVar28 * (fVar28 * (fVar28 * (fVar28 * (fVar28 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
    auVar34._8_4_ =
         fVar36 * (fVar42 + fVar30 * (fVar30 * (fVar30 * (fVar30 * (fVar30 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
    auVar34._12_4_ =
         fVar19 * (fVar43 + fVar32 * (fVar32 * (fVar32 * (fVar32 * (fVar32 * -2.5052108e-08 +
                                                                   2.7557319e-06) + -0.0001984127) +
                                               0.008333334) + -0.16666667));
    fVar17 = auVar9._4_4_;
    auVar3._12_4_ = 0x7fc00000;
    auVar27._12_4_ = 0x7fc00000;
    auVar27 = auVar27 ^ (auVar3 ^ auVar34) & auVar26;
    auVar4._12_4_ = 0x7fc00000;
    auVar15._12_4_ = 0x7fc00000;
    auVar15 = auVar15 ^ (auVar4 ^ auVar27 ^ (auVar27 ^ auVar47) &
                                            ~(ZEXT416(CONCAT13(~(byte)((uint)iVar1 >> 0x18),
                                                               CONCAT12(~(byte)((uint)iVar1 >> 0x10)
                                                                        ,CONCAT11(~(byte)((uint)
                                                  iVar1 >> 8),~(byte)iVar1)))) << 0x40)) & auVar14;
    fVar19 = auVar15._0_4_;
    fVar20 = auVar15._4_4_;
    fVar28 = auVar15._8_4_;
    fVar18 = auVar9._8_4_;
    auVar10._0_8_ =
         CONCAT44(fVar18 * fVar19 * fVar20 + fVar28 * fVar17 * fVar12 * fVar31,
                  fVar28 * fVar19 * fVar17 + fVar18 * fVar20 * fVar12 * fVar29);
    auVar10._8_4_ = fVar28 * fVar12 * fVar20 + fVar18 * fVar17 * fVar19 * fVar35;
    auVar10._12_4_ = fVar28 * fVar19 * fVar20 + fVar18 * fVar17 * fVar12 * fVar44;
    param_4[3] = auVar10._8_8_;
    param_4[2] = auVar10._0_8_;
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 0x60))(param_2);
    }
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_3 + 0xc4);
    *(undefined8 *)((long)param_4 + 0x24) = 0x3f000000;
    *(float *)((long)param_4 + 0x2c) = param_1;
    if (param_1 < 1.1920929e-07) {
      uVar51 = param_4[2];
      fVar18 = *(float *)((long)param_4 + 0x14);
      fVar12 = *(float *)(param_4 + 3);
      fVar36 = (float)uVar51;
      fVar54 = (float)((ulong)param_4[3] >> 0x20);
      fVar19 = *(float *)(param_4 + 2) * fVar54;
      fVar52 = (float)((ulong)uVar51 >> 0x20);
      fVar44 = fVar18 * fVar54 + fVar18 * fVar54;
      fVar30 = fVar12 * fVar54 + fVar12 * fVar54;
      fVar32 = fVar54 * 0.0 + fVar54 * 0.0;
      fVar53 = (float)param_4[3];
      fVar29 = fVar12 * fVar12 + fVar12 * fVar12;
      fVar12 = fVar36 * fVar53 + fVar36 * fVar53;
      fVar17 = fVar36 * fVar52 + fVar36 * fVar52;
      fVar20 = (fVar37 - (fVar52 * fVar52 + fVar52 * fVar52)) - fVar29;
      fVar19 = (fVar19 + fVar19) - (fVar52 * fVar53 + fVar52 * fVar53);
      fVar28 = fVar44 - fVar12;
      fVar31 = fVar30 - fVar17;
      fVar35 = fVar32 - 0.0;
      auVar16._0_4_ = fVar37 - fVar19 * fVar19;
      auVar16._4_4_ = fVar41 - fVar28 * fVar28;
      auVar16._8_4_ = fVar42 - fVar31 * fVar31;
      auVar16._12_4_ = fVar43 - fVar35 * fVar35;
      auVar21 = NEON_fmax(auVar16,ZEXT816(0),4);
      auVar21 = NEON_fmin(auVar21,auVar47,4);
      NEON_fmov(0xbf800000,4);
      auVar45._0_4_ = ABS(fVar31 / fVar20);
      auVar45._4_4_ = ABS(fVar31 / fVar20);
      auVar45._8_4_ = ABS(fVar31 / fVar20);
      auVar45._12_4_ = ABS(fVar31 / fVar20);
      auVar48 = NEON_frecpe(auVar45,4);
      auVar23 = NEON_frecps(auVar48,auVar45,4);
      auVar49._0_4_ = auVar48._0_4_ * auVar23._0_4_;
      auVar49._4_4_ = auVar48._4_4_ * auVar23._4_4_;
      auVar49._8_4_ = auVar48._8_4_ * auVar23._8_4_;
      auVar49._12_4_ = auVar48._12_4_ * auVar23._12_4_;
      NEON_frecps(auVar49,auVar45,4);
      auVar50._0_4_ = ABS(fVar19 / SQRT(auVar21._0_4_));
      auVar50._4_4_ =
           ABS((fVar44 + fVar12) /
               ((fVar41 - (fVar36 * fVar36 + fVar36 * fVar36)) - (fVar18 * fVar18 + fVar18 * fVar18)
               ));
      auVar50._8_4_ =
           ABS((fVar30 + fVar17) / ((fVar42 - (fVar36 * fVar36 + fVar36 * fVar36)) - fVar29));
      auVar50._12_4_ = ABS((fVar32 + 0.0) / 0.0);
      auVar48 = NEON_frecpe(auVar50,4);
      auVar21 = NEON_frecps(auVar48,auVar50,4);
      auVar55._0_4_ = auVar48._0_4_ * auVar21._0_4_;
      auVar55._4_4_ = auVar48._4_4_ * auVar21._4_4_;
      auVar55._8_4_ = auVar48._8_4_ * auVar21._8_4_;
      auVar55._12_4_ = auVar48._12_4_ * auVar21._12_4_;
      NEON_frecps(auVar55,auVar50,4);
      auVar47._0_4_ = fVar36 * fVar36 + fVar52 * fVar52;
      auVar47._4_4_ = fVar53 * fVar53 + fVar54 * fVar54;
      auVar47._8_4_ = fVar36 * fVar36 + fVar52 * fVar52;
      auVar47._12_4_ = fVar53 * fVar53 + fVar54 * fVar54;
      NEON_ext(auVar47,auVar47,4,1);
      if ((param_6 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(param_7 + ((long)param_6 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x0156d9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}


