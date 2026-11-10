/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0218f68c; name: FUN_0218f68c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0218f68c(undefined8 *param_1,int *param_2)

{
  float *pfVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ushort *puVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar19;
  int iVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar32;
  float fVar33;
  undefined1 auVar31 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  uVar13 = _UNK_03cabe58;
  uVar12 = _DAT_03cabe50;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0x3f4ccccd3f000000;
  param_1[5] = 0x83e4ccccd;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  puVar14 = (ushort *)((long)param_2 - (long)*param_2);
  uVar2 = *puVar14;
  if (uVar2 < 5) {
    *param_1 = 0;
    param_1[1] = 0;
LAB_0218f97c:
    *(undefined4 *)(param_1 + 4) = 0;
LAB_0218f980:
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  else {
    if ((ulong)puVar14[2] == 0) {
      auVar31 = ZEXT816(0);
    }
    else {
      auVar31._12_4_ = 0;
      auVar31._0_12_ = *(undefined1 (*) [12])((long)param_2 + (ulong)puVar14[2]);
    }
    param_1[1] = auVar31._8_8_;
    *param_1 = auVar31._0_8_;
    if (uVar2 < 7) goto LAB_0218f97c;
    if ((ulong)puVar14[3] == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined4 *)((long)param_2 + (ulong)puVar14[3]);
    }
    *(undefined4 *)(param_1 + 4) = uVar15;
    if (uVar2 < 9) goto LAB_0218f980;
    if ((ulong)puVar14[4] == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined4 *)((long)param_2 + (ulong)puVar14[4]);
    }
    *(undefined4 *)((long)param_1 + 0x24) = uVar15;
    if (10 < uVar2) {
      if ((ulong)puVar14[5] == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined4 *)((long)param_2 + (ulong)puVar14[5]);
      }
      *(undefined4 *)(param_1 + 5) = uVar15;
      if (0xc < uVar2) {
        uVar15 = 0;
        if ((ulong)puVar14[6] != 0) {
          uVar15 = *(undefined4 *)((long)param_2 + (ulong)puVar14[6]);
        }
        *(undefined4 *)((long)param_1 + 0x2c) = uVar15;
        if ((0xe < uVar2) && ((ulong)puVar14[7] != 0)) {
          pfVar1 = (float *)((long)param_2 + (ulong)puVar14[7]);
          fVar26 = pfVar1[2] * 0.017453292 * 0.5;
          fVar27 = *pfVar1 * 0.017453292 * 0.5;
          fVar28 = pfVar1[1] * 0.017453292 * 0.5;
          iVar7 = -(uint)(fVar26 == 0.0);
          iVar8 = -(uint)(fVar27 == 0.0);
          iVar9 = -(uint)(fVar28 == 0.0);
          auVar25._0_4_ =
               (int)((float)(-(uint)(0.0 <= fVar26) & 0x80000000 ^ 0xbf000000) + fVar26 * 0.15915494
                    );
          auVar25._4_4_ =
               (int)((float)(-(uint)(0.0 <= fVar27) & 0x80000000 ^ 0xbf000000) + fVar27 * 0.15915494
                    );
          auVar25._8_4_ =
               (int)((float)(-(uint)(0.0 <= fVar28) & 0x80000000 ^ 0xbf000000) + fVar28 * 0.15915494
                    );
          auVar25._12_4_ = 0;
          auVar31 = NEON_scvtf(auVar25,4);
          iVar16 = -(uint)(ABS(fVar26) == INFINITY);
          iVar19 = -(uint)(ABS(fVar27) == INFINITY);
          iVar20 = -(uint)(ABS(fVar28) == INFINITY);
          auVar17[0] = ~(byte)iVar16;
          auVar17[1] = ~(byte)((uint)iVar16 >> 8);
          auVar17[2] = ~(byte)((uint)iVar16 >> 0x10);
          auVar17[3] = ~(byte)((uint)iVar16 >> 0x18);
          auVar17[4] = ~(byte)iVar19;
          auVar17[5] = ~(byte)((uint)iVar19 >> 8);
          auVar17[6] = ~(byte)((uint)iVar19 >> 0x10);
          auVar17[7] = ~(byte)((uint)iVar19 >> 0x18);
          auVar17[8] = ~(byte)iVar20;
          auVar17[9] = ~(byte)((uint)iVar20 >> 8);
          auVar17[10] = ~(byte)((uint)iVar20 >> 0x10);
          auVar17[0xb] = ~(byte)((uint)iVar20 >> 0x18);
          auVar17[0xc] = 0xff;
          auVar17[0xd] = 0xff;
          auVar17[0xe] = 0xff;
          auVar17[0xf] = 0xff;
          fVar39 = fVar26 + 1.5707964;
          fVar40 = fVar27 + 1.5707964;
          fVar41 = fVar28 + 1.5707964;
          fVar26 = fVar26 - auVar31._0_4_ * 6.2831855;
          fVar27 = fVar27 - auVar31._4_4_ * 6.2831855;
          fVar28 = fVar28 - auVar31._8_4_ * 6.2831855;
          fVar29 = 0.0 - auVar31._12_4_ * 6.2831855;
          iVar16 = -(uint)(ABS(fVar39) == INFINITY);
          iVar19 = -(uint)(ABS(fVar40) == INFINITY);
          iVar20 = -(uint)(ABS(fVar41) == INFINITY);
          auVar23[0] = ~(byte)iVar16;
          auVar23[1] = ~(byte)((uint)iVar16 >> 8);
          auVar23[2] = ~(byte)((uint)iVar16 >> 0x10);
          auVar23[3] = ~(byte)((uint)iVar16 >> 0x18);
          auVar23[4] = ~(byte)iVar19;
          auVar23[5] = ~(byte)((uint)iVar19 >> 8);
          auVar23[6] = ~(byte)((uint)iVar19 >> 0x10);
          auVar23[7] = ~(byte)((uint)iVar19 >> 0x18);
          auVar23[8] = ~(byte)iVar20;
          auVar23[9] = ~(byte)((uint)iVar20 >> 8);
          auVar23[10] = ~(byte)((uint)iVar20 >> 0x10);
          auVar23[0xb] = ~(byte)((uint)iVar20 >> 0x18);
          auVar23[0xc] = 0xff;
          auVar23[0xd] = 0xff;
          auVar23[0xe] = 0xff;
          auVar23[0xf] = 0xff;
          fVar26 = (float)((uint)fVar26 ^
                          ((uint)fVar26 ^ (uint)(-3.1415927 - fVar26)) &
                          -(uint)(fVar26 < -1.5707964));
          fVar27 = (float)((uint)fVar27 ^
                          ((uint)fVar27 ^ (uint)(-3.1415927 - fVar27)) &
                          -(uint)(fVar27 < -1.5707964));
          fVar28 = (float)((uint)fVar28 ^
                          ((uint)fVar28 ^ (uint)(-3.1415927 - fVar28)) &
                          -(uint)(fVar28 < -1.5707964));
          fVar29 = (float)((uint)fVar29 ^
                          ((uint)fVar29 ^ (uint)(-3.1415927 - fVar29)) &
                          -(uint)(fVar29 < -1.5707964));
          auVar21._0_4_ =
               (int)((float)(~-(uint)(0.0 <= fVar39) & 0x80000000 ^ 0x3f000000) +
                    fVar39 * 0.15915494);
          auVar21._4_4_ =
               (int)((float)(~-(uint)(0.0 <= fVar40) & 0x80000000 ^ 0x3f000000) +
                    fVar40 * 0.15915494);
          auVar21._8_4_ =
               (int)((float)(~-(uint)(0.0 <= fVar41) & 0x80000000 ^ 0x3f000000) +
                    fVar41 * 0.15915494);
          auVar21._12_4_ = 0;
          auVar31 = NEON_scvtf(auVar21,4);
          fVar39 = fVar39 - auVar31._0_4_ * 6.2831855;
          fVar40 = fVar40 - auVar31._4_4_ * 6.2831855;
          fVar41 = fVar41 - auVar31._8_4_ * 6.2831855;
          fVar42 = 1.5707964 - auVar31._12_4_ * 6.2831855;
          fVar26 = (float)((uint)fVar26 ^
                          ((uint)fVar26 ^ (uint)(3.1415927 - fVar26)) & -(uint)(1.5707964 < fVar26))
          ;
          fVar27 = (float)((uint)fVar27 ^
                          ((uint)fVar27 ^ (uint)(3.1415927 - fVar27)) & -(uint)(1.5707964 < fVar27))
          ;
          fVar28 = (float)((uint)fVar28 ^
                          ((uint)fVar28 ^ (uint)(3.1415927 - fVar28)) & -(uint)(1.5707964 < fVar28))
          ;
          fVar29 = (float)((uint)fVar29 ^
                          ((uint)fVar29 ^ (uint)(3.1415927 - fVar29)) & -(uint)(1.5707964 < fVar29))
          ;
          fVar30 = fVar26 * fVar26;
          fVar32 = fVar27 * fVar27;
          fVar33 = fVar28 * fVar28;
          fVar34 = fVar29 * fVar29;
          fVar39 = (float)((uint)fVar39 ^
                          ((uint)fVar39 ^ (uint)(-3.1415927 - fVar39)) &
                          -(uint)(fVar39 < -1.5707964));
          fVar40 = (float)((uint)fVar40 ^
                          ((uint)fVar40 ^ (uint)(-3.1415927 - fVar40)) &
                          -(uint)(fVar40 < -1.5707964));
          fVar41 = (float)((uint)fVar41 ^
                          ((uint)fVar41 ^ (uint)(-3.1415927 - fVar41)) &
                          -(uint)(fVar41 < -1.5707964));
          fVar42 = (float)((uint)fVar42 ^
                          ((uint)fVar42 ^ (uint)(-3.1415927 - fVar42)) &
                          -(uint)(fVar42 < -1.5707964));
          fVar39 = (float)((uint)fVar39 ^
                          ((uint)fVar39 ^ (uint)(3.1415927 - fVar39)) & -(uint)(1.5707964 < fVar39))
          ;
          fVar40 = (float)((uint)fVar40 ^
                          ((uint)fVar40 ^ (uint)(3.1415927 - fVar40)) & -(uint)(1.5707964 < fVar40))
          ;
          fVar41 = (float)((uint)fVar41 ^
                          ((uint)fVar41 ^ (uint)(3.1415927 - fVar41)) & -(uint)(1.5707964 < fVar41))
          ;
          fVar42 = (float)((uint)fVar42 ^
                          ((uint)fVar42 ^ (uint)(3.1415927 - fVar42)) & -(uint)(1.5707964 < fVar42))
          ;
          auVar31 = NEON_fmov(0x3f800000,4);
          fVar35 = fVar39 * fVar39;
          fVar36 = fVar40 * fVar40;
          fVar37 = fVar41 * fVar41;
          fVar38 = fVar42 * fVar42;
          auVar22._0_4_ =
               fVar39 * (auVar31._0_4_ +
                        fVar35 * (fVar35 * (fVar35 * (fVar35 * (fVar35 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
          auVar22._4_4_ =
               fVar40 * (auVar31._4_4_ +
                        fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
          auVar22._8_4_ =
               fVar41 * (auVar31._8_4_ +
                        fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
          auVar22._12_4_ =
               fVar42 * (auVar31._12_4_ +
                        fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
          auVar3._8_4_ = 0x7fc00000;
          auVar3._0_8_ = 0x7fc000007fc00000;
          auVar3._12_4_ = 0x7fc00000;
          auVar22 = auVar22 ^ (auVar22 ^ auVar3) & ~auVar23;
          auVar6[1] = ~(byte)((uint)iVar7 >> 8);
          auVar6[0] = ~(byte)iVar7;
          auVar6[2] = ~(byte)((uint)iVar7 >> 0x10);
          auVar6[3] = ~(byte)((uint)iVar7 >> 0x18);
          auVar6[4] = ~(byte)iVar8;
          auVar6[5] = ~(byte)((uint)iVar8 >> 8);
          auVar6[6] = ~(byte)((uint)iVar8 >> 0x10);
          auVar6[7] = ~(byte)((uint)iVar8 >> 0x18);
          auVar6[8] = ~(byte)iVar9;
          auVar6[9] = ~(byte)((uint)iVar9 >> 8);
          auVar6[10] = ~(byte)((uint)iVar9 >> 0x10);
          auVar6[0xb] = ~(byte)((uint)iVar9 >> 0x18);
          auVar6._12_4_ = 0;
          auVar24._0_4_ =
               fVar26 * (auVar31._0_4_ +
                        fVar30 * (fVar30 * (fVar30 * (fVar30 * (fVar30 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
          auVar24._4_4_ =
               fVar27 * (auVar31._4_4_ +
                        fVar32 * (fVar32 * (fVar32 * (fVar32 * (fVar32 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
          auVar24._8_4_ =
               fVar28 * (auVar31._8_4_ +
                        fVar33 * (fVar33 * (fVar33 * (fVar33 * (fVar33 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
          auVar24._12_4_ =
               fVar29 * (auVar31._12_4_ +
                        fVar34 * (fVar34 * (fVar34 * (fVar34 * (fVar34 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                           0.008333334) + -0.16666667));
          auVar4._8_4_ = 0x7fc00000;
          auVar4._0_8_ = 0x7fc000007fc00000;
          auVar4._12_4_ = 0x7fc00000;
          auVar24 = auVar24 ^ (auVar24 ^ auVar4) & ~auVar17;
          fVar26 = auVar24._0_4_;
          auVar5._8_4_ = 0x7fc00000;
          auVar5._0_8_ = 0x7fc000007fc00000;
          auVar5._12_4_ = 0x7fc00000;
          auVar18._8_4_ = 0x7fc00000;
          auVar18._0_8_ = 0x7fc000007fc00000;
          auVar18._12_4_ = 0x7fc00000;
          auVar18 = auVar18 ^ (auVar5 ^ auVar22 ^ (auVar22 ^ auVar31) & ~auVar6) & auVar17;
          fVar39 = auVar18._0_4_;
          fVar40 = auVar18._4_4_;
          fVar27 = auVar24._4_4_;
          fVar41 = auVar18._8_4_;
          fVar28 = auVar24._8_4_;
          fVar42 = (float)_DAT_03cab3a0;
          uVar10 = (ulong)_DAT_03cab3a0 >> 0x20;
          uVar11 = (ulong)_UNK_03cab3a8 >> 0x20;
          *(float *)(param_1 + 3) =
               fVar41 * fVar26 * fVar40 + fVar28 * fVar27 * fVar39 * (float)_UNK_03cab3a8;
          *(float *)((long)param_1 + 0x1c) =
               fVar41 * fVar39 * fVar40 + fVar28 * fVar27 * fVar26 * (float)uVar11;
          *(float *)(param_1 + 2) = fVar41 * fVar39 * fVar27 + fVar28 * fVar40 * fVar26 * fVar42;
          *(float *)((long)param_1 + 0x14) =
               fVar28 * fVar39 * fVar40 + fVar41 * fVar27 * fVar26 * (float)uVar10;
        }
        return;
      }
      goto LAB_0218f988;
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
LAB_0218f988:
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  return;
}


