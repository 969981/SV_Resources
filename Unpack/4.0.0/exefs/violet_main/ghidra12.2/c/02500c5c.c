/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02500c5c; name: FUN_02500c5c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_02500c5c(undefined1 param_1 [16],float param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  float fVar14;
  float fVar20;
  float fVar21;
  undefined1 auVar15 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar17 [16];
  undefined1 auVar16 [16];
  int iVar22;
  int iVar29;
  int iVar30;
  int iVar31;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  float fVar32;
  float fVar37;
  float fVar38;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  param_2 = param_2 * 0.5;
  iVar22 = -(uint)(ABS(param_2) == INFINITY);
  iVar29 = -(uint)(ABS(param_2) == INFINITY);
  iVar30 = -(uint)(ABS(param_2) == INFINITY);
  iVar31 = -(uint)(ABS(param_2) == INFINITY);
  fVar14 = param_2 + (float)_DAT_03caa8d0;
  fVar20 = param_2 + (float)((ulong)_DAT_03caa8d0 >> 0x20);
  fVar21 = param_2 + (float)_UNK_03caa8d8;
  param_2 = param_2 + (float)((ulong)_UNK_03caa8d8 >> 0x20);
  auVar23[0] = ~(byte)iVar22;
  auVar23[1] = ~(byte)((uint)iVar22 >> 8);
  auVar23[2] = ~(byte)((uint)iVar22 >> 0x10);
  auVar23[3] = ~(byte)((uint)iVar22 >> 0x18);
  auVar23[4] = ~(byte)iVar29;
  auVar23[5] = ~(byte)((uint)iVar29 >> 8);
  auVar23[6] = ~(byte)((uint)iVar29 >> 0x10);
  auVar23[7] = ~(byte)((uint)iVar29 >> 0x18);
  auVar23[8] = ~(byte)iVar30;
  auVar23[9] = ~(byte)((uint)iVar30 >> 8);
  auVar23[10] = ~(byte)((uint)iVar30 >> 0x10);
  auVar23[0xb] = ~(byte)((uint)iVar30 >> 0x18);
  auVar23[0xc] = ~(byte)iVar31;
  auVar23[0xd] = ~(byte)((uint)iVar31 >> 8);
  auVar23[0xe] = ~(byte)((uint)iVar31 >> 0x10);
  auVar23[0xf] = ~(byte)((uint)iVar31 >> 0x18);
  auVar33._0_4_ =
       (int)((float)(-(uint)(0.0 <= fVar14) & 0x80000000 ^ 0xbf000000) + fVar14 * 0.15915494);
  auVar33._4_4_ =
       (int)((float)(-(uint)(0.0 <= fVar20) & 0x80000000 ^ 0xbf000000) + fVar20 * 0.15915494);
  auVar33._8_4_ =
       (int)((float)(-(uint)(0.0 <= fVar21) & 0x80000000 ^ 0xbf000000) + fVar21 * 0.15915494);
  auVar33._12_4_ =
       (int)((float)(-(uint)(0.0 <= param_2) & 0x80000000 ^ 0xbf000000) + param_2 * 0.15915494);
  auVar34 = NEON_scvtf(auVar33,4);
  fVar14 = fVar14 + auVar34._0_4_ * -6.2831855;
  fVar20 = fVar20 + auVar34._4_4_ * -6.2831855;
  fVar21 = fVar21 + auVar34._8_4_ * -6.2831855;
  param_2 = param_2 + auVar34._12_4_ * -6.2831855;
  fVar14 = (float)((uint)fVar14 ^
                  ((uint)fVar14 ^ (uint)(-3.1415927 - fVar14)) & -(uint)(fVar14 < -1.5707964));
  fVar20 = (float)((uint)fVar20 ^
                  ((uint)fVar20 ^ (uint)(-3.1415927 - fVar20)) & -(uint)(fVar20 < -1.5707964));
  fVar21 = (float)((uint)fVar21 ^
                  ((uint)fVar21 ^ (uint)(-3.1415927 - fVar21)) & -(uint)(fVar21 < -1.5707964));
  param_2 = (float)((uint)param_2 ^
                   ((uint)param_2 ^ (uint)(-3.1415927 - param_2)) & -(uint)(param_2 < -1.5707964));
  fVar14 = (float)((uint)fVar14 ^
                  ((uint)fVar14 ^ (uint)(3.1415927 - fVar14)) & -(uint)(1.5707964 < fVar14));
  fVar20 = (float)((uint)fVar20 ^
                  ((uint)fVar20 ^ (uint)(3.1415927 - fVar20)) & -(uint)(1.5707964 < fVar20));
  fVar21 = (float)((uint)fVar21 ^
                  ((uint)fVar21 ^ (uint)(3.1415927 - fVar21)) & -(uint)(1.5707964 < fVar21));
  param_2 = (float)((uint)param_2 ^
                   ((uint)param_2 ^ (uint)(3.1415927 - param_2)) & -(uint)(1.5707964 < param_2));
  auVar40._0_12_ = ZEXT812(0);
  auVar40._12_4_ = -(uint)(param_2 == 1.5707964);
  fVar32 = fVar14 * fVar14;
  fVar37 = fVar20 * fVar20;
  fVar38 = fVar21 * fVar21;
  fVar39 = param_2 * param_2;
  auVar44 = NEON_fmov(0x3f800000,4);
  auVar35._8_4_ = 0x7fc00000;
  auVar35._0_8_ = 0x7fc000007fc00000;
  auVar35._12_4_ = 0x7fc00000;
  auVar15._0_4_ =
       fVar14 * (auVar44._0_4_ +
                fVar32 * (fVar32 * (fVar32 * (fVar32 * (fVar32 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar15._4_4_ =
       fVar20 * (auVar44._4_4_ +
                fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar15._8_4_ =
       fVar21 * (auVar44._8_4_ +
                fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar15._12_4_ =
       param_2 * (auVar44._12_4_ +
                 fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * -2.5052108e-08 + 2.7557319e-06) +
                                              -0.0001984127) + 0.008333334) + -0.16666667));
  auVar15 = auVar15 ^ (auVar15 ^ auVar44) & auVar40;
  fVar14 = param_1._0_4_;
  fVar20 = param_1._4_4_;
  fVar21 = param_1._8_4_;
  fVar32 = param_1._12_4_ * param_1._12_4_;
  auVar15 = auVar15 ^ (auVar15 ^ auVar35) & ~auVar23;
  auVar1._0_4_ = fVar14 * fVar14 + fVar20 * fVar20;
  auVar1._4_4_ = fVar21 * fVar21 + fVar32;
  auVar1._8_4_ = fVar14 * fVar14 + fVar20 * fVar20;
  auVar1._12_4_ = fVar21 * fVar21 + fVar32;
  auVar34 = NEON_ext(auVar1,auVar1,4,1);
  auVar2._0_4_ = auVar34._0_4_ + auVar34._4_4_;
  auVar2._4_4_ = auVar34._8_4_ + auVar34._12_4_;
  auVar2._8_4_ = auVar34._0_4_ + auVar34._4_4_;
  auVar2._12_4_ = auVar34._8_4_ + auVar34._12_4_;
  auVar34 = NEON_frsqrte(auVar2,4);
  auVar41._0_4_ = auVar2._0_4_ * auVar34._0_4_;
  auVar41._4_4_ = auVar2._4_4_ * auVar34._4_4_;
  auVar41._8_4_ = auVar2._8_4_ * auVar34._8_4_;
  auVar41._12_4_ = auVar2._12_4_ * auVar34._12_4_;
  auVar42 = NEON_frsqrts(auVar34,auVar41,4);
  auVar36._0_4_ = auVar34._0_4_ * auVar42._0_4_;
  auVar36._4_4_ = auVar34._4_4_ * auVar42._4_4_;
  auVar36._8_4_ = auVar34._8_4_ * auVar42._8_4_;
  auVar36._12_4_ = auVar34._12_4_ * auVar42._12_4_;
  auVar43._0_4_ = auVar2._0_4_ * auVar36._0_4_;
  auVar43._4_4_ = auVar2._4_4_ * auVar36._4_4_;
  auVar43._8_4_ = auVar2._8_4_ * auVar36._8_4_;
  auVar43._12_4_ = auVar2._12_4_ * auVar36._12_4_;
  iVar22 = -(uint)(auVar2._0_4_ == 0.0);
  iVar29 = -(uint)(auVar2._4_4_ == 0.0);
  iVar30 = -(uint)(auVar2._8_4_ == 0.0);
  auVar34 = NEON_frsqrts(auVar36,auVar43,4);
  fVar14 = fVar14 * auVar36._0_4_ * auVar34._0_4_;
  fVar20 = fVar20 * auVar36._4_4_ * auVar34._4_4_;
  fVar21 = fVar21 * auVar36._8_4_ * auVar34._8_4_;
  fVar14 = auVar15._0_4_ *
           (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                           CONCAT12((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                                    CONCAT11((byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                             SUB41(fVar14,0) & ~(byte)iVar22)));
  fVar20 = auVar15._4_4_ *
           (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                           CONCAT12((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                                    CONCAT11((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                             SUB41(fVar20,0) & ~(byte)iVar29)));
  uVar3 = SUB41(fVar20,0);
  uVar4 = (undefined1)((uint)fVar20 >> 8);
  uVar5 = (undefined1)((uint)fVar20 >> 0x10);
  uVar6 = (undefined1)((uint)fVar20 >> 0x18);
  fVar21 = auVar15._8_4_ *
           (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18),
                           CONCAT12((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10),
                                    CONCAT11((byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar30 >> 8),
                                             SUB41(fVar21,0) & ~(byte)iVar30)));
  uVar7 = SUB41(fVar21,0);
  uVar8 = (undefined1)((uint)fVar21 >> 8);
  uVar9 = (undefined1)((uint)fVar21 >> 0x10);
  uVar10 = (undefined1)((uint)fVar21 >> 0x18);
  fVar32 = auVar15._12_4_ * 1.0;
  uVar11 = (undefined1)((uint)fVar32 >> 8);
  uVar12 = (undefined1)((uint)fVar32 >> 0x10);
  uVar13 = (undefined1)((uint)fVar32 >> 0x18);
  auVar34[4] = uVar3;
  auVar34._0_4_ = fVar14;
  auVar34[5] = uVar4;
  auVar34[6] = uVar5;
  auVar34[7] = uVar6;
  auVar34[8] = uVar7;
  auVar34[9] = uVar8;
  auVar34[10] = uVar9;
  auVar34[0xb] = uVar10;
  auVar34[0xc] = SUB41(fVar32,0);
  auVar34[0xd] = uVar11;
  auVar34[0xe] = uVar12;
  auVar34[0xf] = uVar13;
  auVar42[4] = uVar3;
  auVar42._0_4_ = fVar14;
  auVar42[5] = uVar4;
  auVar42[6] = uVar5;
  auVar42[7] = uVar6;
  auVar42[8] = uVar7;
  auVar42[9] = uVar8;
  auVar42[10] = uVar9;
  auVar42[0xb] = uVar10;
  auVar42[0xc] = SUB41(fVar32,0);
  auVar42[0xd] = uVar11;
  auVar42[0xe] = uVar12;
  auVar42[0xf] = uVar13;
  auVar34 = NEON_ext(auVar34,auVar42,0xc,1);
  auVar16._4_12_ = auVar34._4_12_;
  auVar16._0_4_ = fVar14;
  auVar18._12_4_ = auVar34._12_4_;
  auVar18._0_8_ = auVar16._0_8_;
  auVar18._8_4_ =
       (int)(CONCAT17(uVar6,CONCAT16(uVar5,CONCAT15(uVar4,CONCAT14(uVar3,fVar14)))) >> 0x20);
  auVar17._8_8_ = auVar18._8_8_;
  auVar17._4_4_ = auVar34._0_4_;
  auVar17._0_4_ = fVar14;
  auVar19._0_12_ = auVar17._0_12_;
  auVar19._12_4_ = auVar34._4_4_;
  fVar39 = fVar21 * fVar21 + fVar21 * fVar21;
  auVar34 = NEON_ext(auVar19,auVar19,8,1);
  fVar37 = auVar34._4_4_ *
           (float)(CONCAT14(uVar10,CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6)))) >> 8);
  fVar38 = auVar34._8_4_ * fVar20;
  auVar24._0_4_ = auVar44._0_4_ - (fVar14 * fVar14 + fVar14 * fVar14);
  auVar24._4_4_ = auVar44._4_4_ - (fVar20 * fVar20 + fVar20 * fVar20);
  auVar24._8_4_ = auVar44._8_4_ - fVar39;
  auVar24._12_4_ = auVar44._12_4_ - (fVar32 * fVar32 + fVar32 * fVar32);
  auVar25._4_12_ = auVar24._4_12_;
  auVar25._0_4_ = auVar24._0_4_;
  auVar27._0_8_ = auVar25._0_8_;
  auVar27._8_4_ = auVar24._4_4_;
  auVar27._12_4_ = auVar24._12_4_;
  auVar26._8_8_ = auVar27._8_8_;
  auVar26._4_4_ = auVar24._0_4_;
  auVar26._0_4_ = auVar24._0_4_;
  auVar28._0_12_ = auVar26._0_12_;
  auVar28._12_4_ = auVar24._4_4_;
  auVar34 = NEON_ext(auVar28,auVar28,0xc,1);
  fVar20 = (fVar37 + fVar37) - (fVar20 * fVar32 + fVar20 * fVar32);
  fVar14 = fVar38 + fVar38 + fVar21 * fVar32 + fVar21 * fVar32;
  auVar44[4] = SUB41(fVar14,0);
  auVar44[5] = (undefined1)((uint)fVar14 >> 8);
  auVar44[6] = (undefined1)((uint)fVar14 >> 0x10);
  auVar44[7] = (undefined1)((uint)fVar14 >> 0x18);
  auVar44[8] = SUB41(fVar20,0);
  auVar44[9] = (undefined1)((uint)fVar20 >> 8);
  auVar44[10] = (undefined1)((uint)fVar20 >> 0x10);
  auVar44[0xb] = (undefined1)((uint)fVar20 >> 0x18);
  auVar44._0_4_ = auVar34._0_4_ - fVar39;
  auVar44._12_4_ = 0;
  return auVar44;
}


