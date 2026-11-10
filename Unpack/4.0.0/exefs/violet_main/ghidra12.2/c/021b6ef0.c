/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021b6ef0; name: FUN_021b6ef0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_021b6ef0(long param_1,int *param_2)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ushort *puVar12;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  undefined1 auVar14 [16];
  int iVar13;
  int iVar18;
  int iVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar29 [16];
  float fVar33;
  float fVar34;
  float fVar37;
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar9 = FUN_00c6a72c(param_1,*(undefined8 *)(param_1 + 8));
  uStack_58 = 0;
  uStack_48 = _UNK_03cabe58;
  local_50 = _DAT_03cabe50;
  local_60 = 0;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar11 == 0)) {
    lVar10 = 0;
  }
  else {
    lVar10 = (long)param_2 + uVar11;
  }
  auVar14 = FUN_00c6a4a0(lVar10);
  uStack_58 = auVar14._8_8_;
  local_60 = auVar14._0_8_;
  puVar12 = (ushort *)((long)param_2 - (long)*param_2);
  uVar1 = *puVar12;
  if (uVar1 < 9) {
    local_40 = 0;
LAB_021b71f4:
    local_3c = 0;
  }
  else {
    if ((ulong)puVar12[4] == 0) {
      local_40 = 0;
    }
    else {
      local_40 = *(undefined4 *)((long)param_2 + (ulong)puVar12[4]);
    }
    if (uVar1 < 0xb) goto LAB_021b71f4;
    if ((ulong)puVar12[5] == 0) {
      local_3c = 0;
    }
    else {
      local_3c = *(undefined4 *)((long)param_2 + (ulong)puVar12[5]);
    }
    if ((0xc < uVar1) && ((ulong)puVar12[6] != 0)) {
      lVar10 = (long)param_2 + (ulong)puVar12[6];
      goto LAB_021b6fac;
    }
  }
  lVar10 = 0;
LAB_021b6fac:
  FUN_00c6a4a0(lVar10);
  fVar28 = extraout_var_00 * 0.017453292 * 0.5;
  fVar30 = extraout_s0 * 0.017453292 * 0.5;
  fVar31 = extraout_var * 0.017453292 * 0.5;
  auVar27._0_4_ =
       (int)((float)(-(uint)(0.0 <= fVar28) & 0x80000000 ^ 0xbf000000) + fVar28 * 0.15915494);
  auVar27._4_4_ =
       (int)((float)(-(uint)(0.0 <= fVar30) & 0x80000000 ^ 0xbf000000) + fVar30 * 0.15915494);
  auVar27._8_4_ =
       (int)((float)(-(uint)(0.0 <= fVar31) & 0x80000000 ^ 0xbf000000) + fVar31 * 0.15915494);
  auVar27._12_4_ = 0;
  auVar14 = NEON_scvtf(auVar27,4);
  iVar5 = -(uint)(fVar28 == 0.0);
  iVar6 = -(uint)(fVar30 == 0.0);
  iVar7 = -(uint)(fVar31 == 0.0);
  fVar41 = fVar28 + 1.5707964;
  fVar42 = fVar30 + 1.5707964;
  fVar43 = fVar31 + 1.5707964;
  auVar29._0_4_ = fVar28 - auVar14._0_4_ * 6.2831855;
  auVar29._4_4_ = fVar30 - auVar14._4_4_ * 6.2831855;
  auVar29._8_4_ = fVar31 - auVar14._8_4_ * 6.2831855;
  auVar29._12_4_ = 0.0 - auVar14._12_4_ * 6.2831855;
  auVar35._0_4_ = -(uint)(auVar29._0_4_ < -1.5707964);
  auVar35._4_4_ = -(uint)(auVar29._4_4_ < -1.5707964);
  auVar35._8_4_ = -(uint)(auVar29._8_4_ < -1.5707964);
  auVar35._12_4_ = -(uint)(auVar29._12_4_ < -1.5707964);
  auVar20._0_4_ =
       (int)((float)(~-(uint)(0.0 <= fVar41) & 0x80000000 ^ 0x3f000000) + fVar41 * 0.15915494);
  auVar20._4_4_ =
       (int)((float)(~-(uint)(0.0 <= fVar42) & 0x80000000 ^ 0x3f000000) + fVar42 * 0.15915494);
  auVar20._8_4_ =
       (int)((float)(~-(uint)(0.0 <= fVar43) & 0x80000000 ^ 0x3f000000) + fVar43 * 0.15915494);
  auVar20._12_4_ = 0;
  auVar26._4_4_ = -3.1415927 - auVar29._4_4_;
  auVar26._0_4_ = -3.1415927 - auVar29._0_4_;
  auVar26._8_4_ = -3.1415927 - auVar29._8_4_;
  auVar26._12_4_ = -3.1415927 - auVar29._12_4_;
  auVar29 = auVar29 ^ (auVar29 ^ auVar26) & auVar35;
  auVar36._0_4_ = -(uint)(1.5707964 < auVar29._0_4_);
  auVar36._4_4_ = -(uint)(1.5707964 < auVar29._4_4_);
  auVar36._8_4_ = -(uint)(1.5707964 < auVar29._8_4_);
  auVar36._12_4_ = -(uint)(1.5707964 < auVar29._12_4_);
  iVar13 = -(uint)(ABS(fVar28) == INFINITY);
  iVar18 = -(uint)(ABS(fVar30) == INFINITY);
  iVar19 = -(uint)(ABS(fVar31) == INFINITY);
  auVar15[0] = ~(byte)iVar13;
  auVar15[1] = ~(byte)((uint)iVar13 >> 8);
  auVar15[2] = ~(byte)((uint)iVar13 >> 0x10);
  auVar15[3] = ~(byte)((uint)iVar13 >> 0x18);
  auVar15[4] = ~(byte)iVar18;
  auVar15[5] = ~(byte)((uint)iVar18 >> 8);
  auVar15[6] = ~(byte)((uint)iVar18 >> 0x10);
  auVar15[7] = ~(byte)((uint)iVar18 >> 0x18);
  auVar15[8] = ~(byte)iVar19;
  auVar15[9] = ~(byte)((uint)iVar19 >> 8);
  auVar15[10] = ~(byte)((uint)iVar19 >> 0x10);
  auVar15[0xb] = ~(byte)((uint)iVar19 >> 0x18);
  auVar15[0xc] = 0xff;
  auVar15[0xd] = 0xff;
  auVar15[0xe] = 0xff;
  auVar15[0xf] = 0xff;
  auVar14 = NEON_scvtf(auVar20,4);
  fVar28 = fVar41 - auVar14._0_4_ * 6.2831855;
  fVar30 = fVar42 - auVar14._4_4_ * 6.2831855;
  fVar31 = fVar43 - auVar14._8_4_ * 6.2831855;
  fVar44 = 1.5707964 - auVar14._12_4_ * 6.2831855;
  auVar8._4_4_ = 3.1415927 - auVar29._4_4_;
  auVar8._0_4_ = 3.1415927 - auVar29._0_4_;
  auVar8._8_4_ = 3.1415927 - auVar29._8_4_;
  auVar8._12_4_ = 3.1415927 - auVar29._12_4_;
  auVar29 = auVar29 ^ (auVar29 ^ auVar8) & auVar36;
  fVar24 = auVar29._0_4_;
  fVar34 = fVar24 * fVar24;
  fVar25 = auVar29._4_4_;
  fVar37 = fVar25 * fVar25;
  fVar32 = auVar29._8_4_;
  fVar38 = fVar32 * fVar32;
  fVar33 = auVar29._12_4_;
  fVar39 = fVar33 * fVar33;
  iVar13 = -(uint)(ABS(fVar41) == INFINITY);
  iVar18 = -(uint)(ABS(fVar42) == INFINITY);
  iVar19 = -(uint)(ABS(fVar43) == INFINITY);
  auVar22[0] = ~(byte)iVar13;
  auVar22[1] = ~(byte)((uint)iVar13 >> 8);
  auVar22[2] = ~(byte)((uint)iVar13 >> 0x10);
  auVar22[3] = ~(byte)((uint)iVar13 >> 0x18);
  auVar22[4] = ~(byte)iVar18;
  auVar22[5] = ~(byte)((uint)iVar18 >> 8);
  auVar22[6] = ~(byte)((uint)iVar18 >> 0x10);
  auVar22[7] = ~(byte)((uint)iVar18 >> 0x18);
  auVar22[8] = ~(byte)iVar19;
  auVar22[9] = ~(byte)((uint)iVar19 >> 8);
  auVar22[10] = ~(byte)((uint)iVar19 >> 0x10);
  auVar22[0xb] = ~(byte)((uint)iVar19 >> 0x18);
  auVar22[0xc] = 0xff;
  auVar22[0xd] = 0xff;
  auVar22[0xe] = 0xff;
  auVar22[0xf] = 0xff;
  fVar28 = (float)((uint)fVar28 ^
                  ((uint)fVar28 ^ (uint)(-3.1415927 - fVar28)) & -(uint)(fVar28 < -1.5707964));
  fVar30 = (float)((uint)fVar30 ^
                  ((uint)fVar30 ^ (uint)(-3.1415927 - fVar30)) & -(uint)(fVar30 < -1.5707964));
  fVar31 = (float)((uint)fVar31 ^
                  ((uint)fVar31 ^ (uint)(-3.1415927 - fVar31)) & -(uint)(fVar31 < -1.5707964));
  fVar44 = (float)((uint)fVar44 ^
                  ((uint)fVar44 ^ (uint)(-3.1415927 - fVar44)) & -(uint)(fVar44 < -1.5707964));
  fVar28 = (float)((uint)fVar28 ^
                  ((uint)fVar28 ^ (uint)(3.1415927 - fVar28)) & -(uint)(1.5707964 < fVar28));
  fVar30 = (float)((uint)fVar30 ^
                  ((uint)fVar30 ^ (uint)(3.1415927 - fVar30)) & -(uint)(1.5707964 < fVar30));
  fVar31 = (float)((uint)fVar31 ^
                  ((uint)fVar31 ^ (uint)(3.1415927 - fVar31)) & -(uint)(1.5707964 < fVar31));
  fVar44 = (float)((uint)fVar44 ^
                  ((uint)fVar44 ^ (uint)(3.1415927 - fVar44)) & -(uint)(1.5707964 < fVar44));
  auVar26 = NEON_fmov(0x3f800000,4);
  fVar41 = fVar28 * fVar28;
  fVar42 = fVar30 * fVar30;
  fVar43 = fVar31 * fVar31;
  fVar40 = fVar44 * fVar44;
  auVar21._0_4_ =
       fVar28 * (auVar26._0_4_ +
                fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar21._4_4_ =
       fVar30 * (auVar26._4_4_ +
                fVar42 * (fVar42 * (fVar42 * (fVar42 * (fVar42 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar21._8_4_ =
       fVar31 * (auVar26._8_4_ +
                fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar21._12_4_ =
       fVar44 * (auVar26._12_4_ +
                fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar14._8_4_ = 0x7fc00000;
  auVar14._0_8_ = 0x7fc000007fc00000;
  auVar14._12_4_ = 0x7fc00000;
  auVar21 = auVar21 ^ (auVar21 ^ auVar14) & ~auVar22;
  auVar4[1] = ~(byte)((uint)iVar5 >> 8);
  auVar4[0] = ~(byte)iVar5;
  auVar4[2] = ~(byte)((uint)iVar5 >> 0x10);
  auVar4[3] = ~(byte)((uint)iVar5 >> 0x18);
  auVar4[4] = ~(byte)iVar6;
  auVar4[5] = ~(byte)((uint)iVar6 >> 8);
  auVar4[6] = ~(byte)((uint)iVar6 >> 0x10);
  auVar4[7] = ~(byte)((uint)iVar6 >> 0x18);
  auVar4[8] = ~(byte)iVar7;
  auVar4[9] = ~(byte)((uint)iVar7 >> 8);
  auVar4[10] = ~(byte)((uint)iVar7 >> 0x10);
  auVar4[0xb] = ~(byte)((uint)iVar7 >> 0x18);
  auVar4._12_4_ = 0;
  auVar23._0_4_ =
       fVar24 * (auVar26._0_4_ +
                fVar34 * (fVar34 * (fVar34 * (fVar34 * (fVar34 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar23._4_4_ =
       fVar25 * (auVar26._4_4_ +
                fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar23._8_4_ =
       fVar32 * (auVar26._8_4_ +
                fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar23._12_4_ =
       fVar33 * (auVar26._12_4_ +
                fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar2._8_4_ = 0x7fc00000;
  auVar2._0_8_ = 0x7fc000007fc00000;
  auVar2._12_4_ = 0x7fc00000;
  auVar23 = auVar23 ^ (auVar23 ^ auVar2) & ~auVar15;
  fVar44 = auVar23._0_4_;
  auVar3._8_4_ = 0x7fc00000;
  auVar3._0_8_ = 0x7fc000007fc00000;
  auVar3._12_4_ = 0x7fc00000;
  auVar16._8_4_ = 0x7fc00000;
  auVar16._0_8_ = 0x7fc000007fc00000;
  auVar16._12_4_ = 0x7fc00000;
  auVar16 = auVar16 ^ (auVar3 ^ auVar21 ^ (auVar21 ^ auVar26) & ~auVar4) & auVar15;
  fVar28 = auVar16._0_4_;
  fVar30 = auVar16._4_4_;
  fVar24 = auVar23._4_4_;
  fVar31 = auVar16._8_4_;
  fVar25 = auVar23._8_4_;
  auVar17._0_8_ =
       CONCAT44(fVar25 * fVar28 * fVar30 +
                fVar31 * fVar24 * fVar44 * (float)((ulong)_DAT_03cab3a0 >> 0x20),
                fVar31 * fVar28 * fVar24 + fVar25 * fVar30 * fVar44 * (float)_DAT_03cab3a0);
  auVar17._8_4_ = fVar31 * fVar44 * fVar30 + fVar25 * fVar24 * fVar28 * (float)_UNK_03cab3a8;
  auVar17._12_4_ =
       fVar31 * fVar28 * fVar30 + fVar25 * fVar24 * fVar44 * (float)((ulong)_UNK_03cab3a8 >> 0x20);
  uStack_48 = auVar17._8_8_;
  local_50 = auVar17._0_8_;
  FUN_021b7200(uVar9,&local_60);
  return param_1;
}


