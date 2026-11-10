/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021b6b68; name: FUN_021b6b68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_021b6b68(long param_1,int *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  undefined1 auVar12 [16];
  int iVar11;
  int iVar16;
  int iVar17;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar27 [16];
  float fVar31;
  float fVar32;
  float fVar35;
  float fVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_1 != 0) {
    uVar8 = FUN_00c6a72c(param_1,*(undefined8 *)(param_1 + 8));
    uStack_58 = 0;
    uStack_48 = _UNK_03cabe58;
    local_50 = _DAT_03cabe50;
    local_60 = 0;
    if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
       (uVar10 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar10 == 0)) {
      lVar9 = 0;
    }
    else {
      lVar9 = (long)param_2 + uVar10;
    }
    auVar12 = FUN_00c6a4a0(lVar9);
    uStack_58 = auVar12._8_8_;
    local_60 = auVar12._0_8_;
    if ((*(ushort *)((long)param_2 - (long)*param_2) < 9) ||
       (uVar10 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar10 == 0)) {
      lVar9 = 0;
    }
    else {
      lVar9 = (long)param_2 + uVar10;
    }
    auVar12 = FUN_00c6a4a0(lVar9);
    uStack_38 = auVar12._8_8_;
    local_40 = auVar12._0_8_;
    if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xb) ||
       (uVar10 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar10 == 0)) {
      lVar9 = 0;
    }
    else {
      lVar9 = (long)param_2 + uVar10;
    }
    FUN_00c6a4a0(lVar9);
    fVar26 = extraout_var_00 * 0.017453292 * 0.5;
    fVar28 = extraout_s0 * 0.017453292 * 0.5;
    fVar29 = extraout_var * 0.017453292 * 0.5;
    auVar25._0_4_ =
         (int)((float)(-(uint)(0.0 <= fVar26) & 0x80000000 ^ 0xbf000000) + fVar26 * 0.15915494);
    auVar25._4_4_ =
         (int)((float)(-(uint)(0.0 <= fVar28) & 0x80000000 ^ 0xbf000000) + fVar28 * 0.15915494);
    auVar25._8_4_ =
         (int)((float)(-(uint)(0.0 <= fVar29) & 0x80000000 ^ 0xbf000000) + fVar29 * 0.15915494);
    auVar25._12_4_ = 0;
    auVar12 = NEON_scvtf(auVar25,4);
    iVar4 = -(uint)(fVar26 == 0.0);
    iVar5 = -(uint)(fVar28 == 0.0);
    iVar6 = -(uint)(fVar29 == 0.0);
    fVar39 = fVar26 + 1.5707964;
    fVar40 = fVar28 + 1.5707964;
    fVar41 = fVar29 + 1.5707964;
    auVar27._0_4_ = fVar26 - auVar12._0_4_ * 6.2831855;
    auVar27._4_4_ = fVar28 - auVar12._4_4_ * 6.2831855;
    auVar27._8_4_ = fVar29 - auVar12._8_4_ * 6.2831855;
    auVar27._12_4_ = 0.0 - auVar12._12_4_ * 6.2831855;
    auVar33._0_4_ = -(uint)(auVar27._0_4_ < -1.5707964);
    auVar33._4_4_ = -(uint)(auVar27._4_4_ < -1.5707964);
    auVar33._8_4_ = -(uint)(auVar27._8_4_ < -1.5707964);
    auVar33._12_4_ = -(uint)(auVar27._12_4_ < -1.5707964);
    auVar18._0_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar39) & 0x80000000 ^ 0x3f000000) + fVar39 * 0.15915494);
    auVar18._4_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar40) & 0x80000000 ^ 0x3f000000) + fVar40 * 0.15915494);
    auVar18._8_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar41) & 0x80000000 ^ 0x3f000000) + fVar41 * 0.15915494);
    auVar18._12_4_ = 0;
    auVar24._4_4_ = -3.1415927 - auVar27._4_4_;
    auVar24._0_4_ = -3.1415927 - auVar27._0_4_;
    auVar24._8_4_ = -3.1415927 - auVar27._8_4_;
    auVar24._12_4_ = -3.1415927 - auVar27._12_4_;
    auVar27 = auVar27 ^ (auVar27 ^ auVar24) & auVar33;
    auVar34._0_4_ = -(uint)(1.5707964 < auVar27._0_4_);
    auVar34._4_4_ = -(uint)(1.5707964 < auVar27._4_4_);
    auVar34._8_4_ = -(uint)(1.5707964 < auVar27._8_4_);
    auVar34._12_4_ = -(uint)(1.5707964 < auVar27._12_4_);
    iVar11 = -(uint)(ABS(fVar26) == INFINITY);
    iVar16 = -(uint)(ABS(fVar28) == INFINITY);
    iVar17 = -(uint)(ABS(fVar29) == INFINITY);
    auVar13[0] = ~(byte)iVar11;
    auVar13[1] = ~(byte)((uint)iVar11 >> 8);
    auVar13[2] = ~(byte)((uint)iVar11 >> 0x10);
    auVar13[3] = ~(byte)((uint)iVar11 >> 0x18);
    auVar13[4] = ~(byte)iVar16;
    auVar13[5] = ~(byte)((uint)iVar16 >> 8);
    auVar13[6] = ~(byte)((uint)iVar16 >> 0x10);
    auVar13[7] = ~(byte)((uint)iVar16 >> 0x18);
    auVar13[8] = ~(byte)iVar17;
    auVar13[9] = ~(byte)((uint)iVar17 >> 8);
    auVar13[10] = ~(byte)((uint)iVar17 >> 0x10);
    auVar13[0xb] = ~(byte)((uint)iVar17 >> 0x18);
    auVar13[0xc] = 0xff;
    auVar13[0xd] = 0xff;
    auVar13[0xe] = 0xff;
    auVar13[0xf] = 0xff;
    auVar12 = NEON_scvtf(auVar18,4);
    fVar26 = fVar39 - auVar12._0_4_ * 6.2831855;
    fVar28 = fVar40 - auVar12._4_4_ * 6.2831855;
    fVar29 = fVar41 - auVar12._8_4_ * 6.2831855;
    fVar42 = 1.5707964 - auVar12._12_4_ * 6.2831855;
    auVar7._4_4_ = 3.1415927 - auVar27._4_4_;
    auVar7._0_4_ = 3.1415927 - auVar27._0_4_;
    auVar7._8_4_ = 3.1415927 - auVar27._8_4_;
    auVar7._12_4_ = 3.1415927 - auVar27._12_4_;
    auVar27 = auVar27 ^ (auVar27 ^ auVar7) & auVar34;
    fVar22 = auVar27._0_4_;
    fVar32 = fVar22 * fVar22;
    fVar23 = auVar27._4_4_;
    fVar35 = fVar23 * fVar23;
    fVar30 = auVar27._8_4_;
    fVar36 = fVar30 * fVar30;
    fVar31 = auVar27._12_4_;
    fVar37 = fVar31 * fVar31;
    iVar11 = -(uint)(ABS(fVar39) == INFINITY);
    iVar16 = -(uint)(ABS(fVar40) == INFINITY);
    iVar17 = -(uint)(ABS(fVar41) == INFINITY);
    auVar20[0] = ~(byte)iVar11;
    auVar20[1] = ~(byte)((uint)iVar11 >> 8);
    auVar20[2] = ~(byte)((uint)iVar11 >> 0x10);
    auVar20[3] = ~(byte)((uint)iVar11 >> 0x18);
    auVar20[4] = ~(byte)iVar16;
    auVar20[5] = ~(byte)((uint)iVar16 >> 8);
    auVar20[6] = ~(byte)((uint)iVar16 >> 0x10);
    auVar20[7] = ~(byte)((uint)iVar16 >> 0x18);
    auVar20[8] = ~(byte)iVar17;
    auVar20[9] = ~(byte)((uint)iVar17 >> 8);
    auVar20[10] = ~(byte)((uint)iVar17 >> 0x10);
    auVar20[0xb] = ~(byte)((uint)iVar17 >> 0x18);
    auVar20[0xc] = 0xff;
    auVar20[0xd] = 0xff;
    auVar20[0xe] = 0xff;
    auVar20[0xf] = 0xff;
    fVar26 = (float)((uint)fVar26 ^
                    ((uint)fVar26 ^ (uint)(-3.1415927 - fVar26)) & -(uint)(fVar26 < -1.5707964));
    fVar28 = (float)((uint)fVar28 ^
                    ((uint)fVar28 ^ (uint)(-3.1415927 - fVar28)) & -(uint)(fVar28 < -1.5707964));
    fVar29 = (float)((uint)fVar29 ^
                    ((uint)fVar29 ^ (uint)(-3.1415927 - fVar29)) & -(uint)(fVar29 < -1.5707964));
    fVar42 = (float)((uint)fVar42 ^
                    ((uint)fVar42 ^ (uint)(-3.1415927 - fVar42)) & -(uint)(fVar42 < -1.5707964));
    fVar26 = (float)((uint)fVar26 ^
                    ((uint)fVar26 ^ (uint)(3.1415927 - fVar26)) & -(uint)(1.5707964 < fVar26));
    fVar28 = (float)((uint)fVar28 ^
                    ((uint)fVar28 ^ (uint)(3.1415927 - fVar28)) & -(uint)(1.5707964 < fVar28));
    fVar29 = (float)((uint)fVar29 ^
                    ((uint)fVar29 ^ (uint)(3.1415927 - fVar29)) & -(uint)(1.5707964 < fVar29));
    fVar42 = (float)((uint)fVar42 ^
                    ((uint)fVar42 ^ (uint)(3.1415927 - fVar42)) & -(uint)(1.5707964 < fVar42));
    auVar24 = NEON_fmov(0x3f800000,4);
    fVar39 = fVar26 * fVar26;
    fVar40 = fVar28 * fVar28;
    fVar41 = fVar29 * fVar29;
    fVar38 = fVar42 * fVar42;
    auVar19._0_4_ =
         fVar26 * (auVar24._0_4_ +
                  fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar19._4_4_ =
         fVar28 * (auVar24._4_4_ +
                  fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar19._8_4_ =
         fVar29 * (auVar24._8_4_ +
                  fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar19._12_4_ =
         fVar42 * (auVar24._12_4_ +
                  fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar12._8_4_ = 0x7fc00000;
    auVar12._0_8_ = 0x7fc000007fc00000;
    auVar12._12_4_ = 0x7fc00000;
    auVar19 = auVar19 ^ (auVar19 ^ auVar12) & ~auVar20;
    auVar3[1] = ~(byte)((uint)iVar4 >> 8);
    auVar3[0] = ~(byte)iVar4;
    auVar3[2] = ~(byte)((uint)iVar4 >> 0x10);
    auVar3[3] = ~(byte)((uint)iVar4 >> 0x18);
    auVar3[4] = ~(byte)iVar5;
    auVar3[5] = ~(byte)((uint)iVar5 >> 8);
    auVar3[6] = ~(byte)((uint)iVar5 >> 0x10);
    auVar3[7] = ~(byte)((uint)iVar5 >> 0x18);
    auVar3[8] = ~(byte)iVar6;
    auVar3[9] = ~(byte)((uint)iVar6 >> 8);
    auVar3[10] = ~(byte)((uint)iVar6 >> 0x10);
    auVar3[0xb] = ~(byte)((uint)iVar6 >> 0x18);
    auVar3._12_4_ = 0;
    auVar21._0_4_ =
         fVar22 * (auVar24._0_4_ +
                  fVar32 * (fVar32 * (fVar32 * (fVar32 * (fVar32 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar21._4_4_ =
         fVar23 * (auVar24._4_4_ +
                  fVar35 * (fVar35 * (fVar35 * (fVar35 * (fVar35 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar21._8_4_ =
         fVar30 * (auVar24._8_4_ +
                  fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar21._12_4_ =
         fVar31 * (auVar24._12_4_ +
                  fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar1._8_4_ = 0x7fc00000;
    auVar1._0_8_ = 0x7fc000007fc00000;
    auVar1._12_4_ = 0x7fc00000;
    auVar21 = auVar21 ^ (auVar21 ^ auVar1) & ~auVar13;
    fVar42 = auVar21._0_4_;
    auVar2._8_4_ = 0x7fc00000;
    auVar2._0_8_ = 0x7fc000007fc00000;
    auVar2._12_4_ = 0x7fc00000;
    auVar14._8_4_ = 0x7fc00000;
    auVar14._0_8_ = 0x7fc000007fc00000;
    auVar14._12_4_ = 0x7fc00000;
    auVar14 = auVar14 ^ (auVar2 ^ auVar19 ^ (auVar19 ^ auVar24) & ~auVar3) & auVar13;
    fVar26 = auVar14._0_4_;
    fVar28 = auVar14._4_4_;
    fVar22 = auVar21._4_4_;
    fVar29 = auVar14._8_4_;
    fVar23 = auVar21._8_4_;
    auVar15._0_8_ =
         CONCAT44(fVar23 * fVar26 * fVar28 +
                  fVar29 * fVar22 * fVar42 * (float)((ulong)_DAT_03cab3a0 >> 0x20),
                  fVar29 * fVar26 * fVar22 + fVar23 * fVar28 * fVar42 * (float)_DAT_03cab3a0);
    auVar15._8_4_ = fVar29 * fVar42 * fVar28 + fVar23 * fVar22 * fVar26 * (float)_UNK_03cab3a8;
    auVar15._12_4_ =
         fVar29 * fVar26 * fVar28 + fVar23 * fVar22 * fVar42 * (float)((ulong)_UNK_03cab3a8 >> 0x20)
    ;
    uStack_48 = auVar15._8_8_;
    local_50 = auVar15._0_8_;
    FUN_021b6e60(uVar8,&local_60);
  }
  return param_1;
}


