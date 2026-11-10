/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03191c8c; name: FUN_03191c8c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_03191c8c(float param_1,float param_2,float *param_3,undefined8 *param_4,undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 auVar10 [16];
  ulong uVar13;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  float fVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float *local_100;
  undefined8 uStack_f8;
  float local_f0;
  float fStack_ec;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [4];
  float fStack_4c;
  
  uVar5 = _UNK_03cabe68;
  uVar4 = _DAT_03cabe60;
  uVar3 = DAT_03cab628;
  uVar2 = DAT_03cab620;
  uVar7 = 0x80040200;
  if ((0.0 < param_2) && (0.0 < param_1)) {
    uVar30 = param_4[1];
    uVar28 = *param_4;
    fVar9 = *param_3;
    fVar20 = param_3[1];
    fVar27 = param_3[2];
    fVar19 = param_3[3];
    fVar8 = (float)uVar28 - fVar9;
    fVar11 = (float)((ulong)uVar28 >> 0x20) - fVar20;
    fVar12 = (float)uVar30 - fVar27;
    fVar24 = fVar8 * fVar8 + fVar11 * fVar11 + fVar12 * fVar12;
    fVar31 = SQRT(fVar24);
    fVar32 = SQRT(fVar8 * fVar8 + fVar11 * fVar11 + fVar12 * fVar12);
    if (0.0 < fVar31) {
      if (fVar24 == 0.0) {
        fVar8 = 0.0;
        fVar11 = 0.0;
        fVar12 = 0.0;
        fVar32 = 0.0;
      }
      else {
        fVar8 = fVar8 / fVar31;
        fVar11 = fVar11 / fVar32;
        fVar12 = fVar12 / fVar31;
        fVar32 = ((float)((ulong)uVar30 >> 0x20) - fVar19) / fVar32;
      }
      auVar10._8_8_ = DAT_03cab628;
      auVar10._0_8_ = DAT_03cab620;
      fVar24 = (float)_DAT_03caa5b0;
      fVar16 = (float)((ulong)_DAT_03caa5b0 >> 0x20);
      fVar17 = (float)_UNK_03caa5b8;
      fVar18 = (float)(_UNK_03caa5b8 >> 0x20);
      local_90 = _DAT_03cabe60;
      uStack_88 = _UNK_03cabe68;
      uStack_80 = _DAT_03caa5b0;
      uStack_78 = _UNK_03caa5b8;
      if (ABS(fVar12) < 0.99999) {
        auVar21._4_4_ = fVar11;
        auVar21._0_4_ = fVar8;
        auVar21._8_4_ = fVar12;
        auVar21._12_4_ = fVar32;
        auVar1._4_4_ = fVar11;
        auVar1._0_4_ = fVar8;
        auVar1._8_4_ = fVar12;
        auVar1._12_4_ = fVar32;
        auVar10 = NEON_ext(auVar21,auVar1,4,1);
        auVar14._0_4_ = auVar10._0_4_ * fVar24 + fVar8 * (float)_DAT_03cab4f0;
        auVar14._4_4_ = auVar10._4_4_ * fVar16 + fVar11 * (float)((ulong)_DAT_03cab4f0 >> 0x20);
        auVar14._8_4_ = fVar8 * fVar17 + fVar12 * (float)_UNK_03cab4f8;
        auVar14._12_4_ = fVar11 * fVar18 + fVar32 * (float)((ulong)_UNK_03cab4f8 >> 0x20);
        auVar10 = NEON_ext(auVar14,auVar14,4,1);
        fVar9 = auVar10._0_4_;
        fVar20 = auVar10._4_4_;
        fVar19 = auVar14._0_4_ * auVar14._0_4_ + fVar9 * fVar9 + fVar20 * fVar20;
        fVar8 = 0.0;
        fVar11 = 0.0;
        fVar27 = 0.0;
        if (fVar19 != 0.0) {
          fVar19 = SQRT(fVar19);
          fVar8 = fVar9 / fVar19;
          fVar11 = fVar20 / SQRT(auVar14._0_4_ * auVar14._0_4_ + fVar9 * fVar9 + fVar20 * fVar20);
          fVar27 = auVar14._0_4_ / fVar19;
        }
        auVar21 = NEON_fmov(0x3f800000,4);
        auVar15._0_4_ = ABS(fVar12);
        auVar15._4_4_ = ABS(fVar12);
        auVar15._8_4_ = ABS(fVar12);
        auVar15._12_4_ = ABS(fVar12);
        auVar10 = NEON_fmin(auVar15,auVar21,4);
        fVar9 = auVar10._0_4_;
        fVar20 = (auVar21._0_4_ - fVar9) * 0.5;
        uVar26 = -(uint)(0.5 < fVar9);
        fVar19 = (float)((uint)fVar20 ^ ((uint)fVar20 ^ (uint)(fVar9 * fVar9)) & ~uVar26);
        fVar20 = (float)((uint)SQRT(fVar20) ^ ((uint)SQRT(fVar20) ^ (uint)fVar9) & ~uVar26);
        fVar20 = fVar20 + fVar20 * fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * 0.0421632 +
                                                                          0.024181312) + 0.045470025
                                                                ) + 0.074953005) + 0.16666752);
        uVar13 = auVar10._0_8_ ^
                 (auVar10._0_8_ ^
                 (ulong)((uint)fVar20 ^
                        ((uint)fVar20 ^ (uint)(1.5707964 - (fVar20 + fVar20))) & uVar26)) &
                 ~(ulong)-(uint)(fVar9 < 0.0001);
        fVar9 = 1.5707964 -
                (float)CONCAT13((byte)(-(uint)(fVar12 < 0.0) >> 0x18) & 0x80 ^
                                (byte)(uVar13 >> 0x18),(int3)uVar13);
        local_60 = CONCAT44(SUB164(ZEXT816(0x3f0000003f000000),4) * fVar9,
                            SUB164(ZEXT816(0x3f0000003f000000),0) * fVar9);
        uStack_58 = local_60;
        FUN_01170160(&local_60,&local_100,local_50);
        fVar8 = fVar8 * local_100._0_4_;
        fVar11 = fVar11 * local_100._0_4_;
        fVar27 = fVar27 * local_100._0_4_;
        fVar22 = fVar11 + fVar11;
        fVar23 = fVar27 + fVar27;
        fVar25 = (fVar8 + fVar8) * fVar8;
        fVar12 = (fVar8 + fVar8) * fStack_4c;
        fVar9 = 1.0 - fVar27 * fVar23;
        fVar29 = fVar23 * fVar11 - fVar12;
        auVar10._0_4_ = fVar9 - fVar22 * fVar11;
        local_90 = CONCAT44(fVar9 - fVar25,fVar22 * fVar8 - fVar23 * fStack_4c);
        fVar9 = *param_3;
        fVar20 = param_3[1];
        fVar27 = param_3[2];
        fVar19 = param_3[3];
        auVar10._4_4_ = fVar22 * fVar8 + fVar23 * fStack_4c;
        fVar32 = fVar23 * fVar8 + fVar22 * fStack_4c;
        auVar10._8_4_ = fVar23 * fVar8 - fVar22 * fStack_4c;
        uStack_88 = CONCAT44(fVar32,fVar23 * fVar11 + fVar12);
        auVar10._12_4_ = fVar29;
        uVar30 = param_4[1];
        uVar28 = *param_4;
        uStack_80 = CONCAT44(fVar29,fVar32);
        uStack_78 = (ulong)(uint)((1.0 - fVar25) - fVar22 * fVar11);
      }
      local_70 = CONCAT44(((float)((ulong)uVar28 >> 0x20) + fVar20) * 0.5,
                          ((float)uVar28 + fVar9) * 0.5);
      uStack_68 = CONCAT44(((float)((ulong)uVar30 >> 0x20) + fVar19) * 0.5,
                           ((float)uVar30 + fVar27) * 0.5);
      fVar20 = param_1 * param_1 * 0.5;
      local_e0 = 0;
      uStack_d8 = 0;
      uVar28 = NEON_fmov(0x3e800000,4);
      fVar9 = (param_1 * param_1 + fVar31 * fVar31 * 0.33333334) * (float)uVar28;
      uStack_c0 = CONCAT44(fVar9 * (float)((ulong)uVar4 >> 0x20) * param_2,
                           fVar9 * (float)uVar4 * param_2);
      uStack_b8 = CONCAT44((float)((ulong)uVar5 >> 0x20) * 0.25 * param_2,
                           fVar20 * (float)uVar5 * param_2);
      local_100 = &local_f0;
      uStack_c8 = CONCAT44((float)((ulong)uVar3 >> 0x20) * 0.25 * param_2,
                           fVar20 * (float)uVar3 * param_2);
      local_d0 = CONCAT44(fVar9 * (float)((ulong)uVar2 >> 0x20) * param_2,
                          fVar9 * (float)uVar2 * param_2);
      uStack_f8 = -0x7ffffffeffffffff;
      uStack_a8 = CONCAT44(fVar18 * 0.25 * param_2,fVar20 * fVar17 * param_2);
      local_b0 = CONCAT44(fVar9 * fVar16 * param_2,fVar9 * fVar24 * param_2);
      uStack_98 = auVar10._8_8_;
      uStack_a0 = auVar10._0_8_;
      local_f0 = param_1 * 3.1415927 * param_1 * fVar31;
      fStack_ec = param_2;
      uVar7 = FUN_03191a34(&local_100,param_5);
      lVar6 = uStack_f8;
      uVar13 = (ulong)uStack_f8._4_4_;
      uStack_f8 = (ulong)uStack_f8._4_4_ << 0x20;
      if ((-1 < lVar6) && (local_100 != (float *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_100,uVar13 * 0x90);
      }
    }
  }
  return uVar7;
}


