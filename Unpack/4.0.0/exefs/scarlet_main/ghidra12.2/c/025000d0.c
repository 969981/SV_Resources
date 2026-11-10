/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025000d0; name: FUN_025000d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025000d0(long *param_1,long *param_2,undefined8 *param_3,float *param_4)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auVar7 [16];
  float fVar8;
  int iVar9;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  int iVar21;
  float fVar28;
  int iVar29;
  float fVar30;
  int iVar31;
  undefined1 auVar22 [12];
  float fVar32;
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  float fVar37;
  float fVar39;
  float fVar40;
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x40,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_2;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    uVar4 = _UNK_03cabe58;
    uVar3 = _DAT_03cabe50;
    fVar8 = *param_4 * 0.5;
    fVar20 = fVar8 + (float)_DAT_03caa8d0;
    fVar28 = fVar8 + (float)((ulong)_DAT_03caa8d0 >> 0x20);
    fVar30 = fVar8 + (float)_UNK_03caa8d8;
    fVar32 = fVar8 + (float)((ulong)_UNK_03caa8d8 >> 0x20);
    fVar37 = (float)*param_3;
    fVar39 = (float)((ulong)*param_3 >> 0x20);
    fVar40 = (float)param_3[1];
    fVar48 = (float)((ulong)param_3[1] >> 0x20);
    fVar48 = fVar48 * fVar48;
    auVar17._0_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar20) & 0x80000000 ^ 0x3f000000) + fVar20 * 0.15915494);
    auVar17._4_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar28) & 0x80000000 ^ 0x3f000000) + fVar28 * 0.15915494);
    auVar17._8_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar30) & 0x80000000 ^ 0x3f000000) + fVar30 * 0.15915494);
    auVar17._12_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar32) & 0x80000000 ^ 0x3f000000) + fVar32 * 0.15915494);
    auVar18 = NEON_scvtf(auVar17,4);
    fVar20 = fVar20 + auVar18._0_4_ * -6.2831855;
    fVar28 = fVar28 + auVar18._4_4_ * -6.2831855;
    fVar30 = fVar30 + auVar18._8_4_ * -6.2831855;
    fVar32 = fVar32 + auVar18._12_4_ * -6.2831855;
    fVar20 = (float)((uint)(-3.1415927 - fVar20) ^
                    ((uint)(-3.1415927 - fVar20) ^ (uint)fVar20) & ~-(uint)(fVar20 < -1.5707964));
    fVar28 = (float)((uint)(-3.1415927 - fVar28) ^
                    ((uint)(-3.1415927 - fVar28) ^ (uint)fVar28) & ~-(uint)(fVar28 < -1.5707964));
    fVar30 = (float)((uint)(-3.1415927 - fVar30) ^
                    ((uint)(-3.1415927 - fVar30) ^ (uint)fVar30) & ~-(uint)(fVar30 < -1.5707964));
    fVar32 = (float)((uint)(-3.1415927 - fVar32) ^
                    ((uint)(-3.1415927 - fVar32) ^ (uint)fVar32) & ~-(uint)(fVar32 < -1.5707964));
    auVar47._0_4_ = fVar37 * fVar37 + fVar39 * fVar39;
    auVar47._4_4_ = fVar40 * fVar40 + fVar48;
    auVar47._8_4_ = fVar37 * fVar37 + fVar39 * fVar39;
    auVar47._12_4_ = fVar40 * fVar40 + fVar48;
    auVar18 = NEON_ext(auVar47,auVar47,4,1);
    auVar7._0_4_ = auVar18._0_4_ + auVar18._4_4_;
    auVar7._4_4_ = auVar18._8_4_ + auVar18._12_4_;
    auVar7._8_4_ = auVar18._0_4_ + auVar18._4_4_;
    auVar7._12_4_ = auVar18._8_4_ + auVar18._12_4_;
    fVar20 = (float)((uint)fVar20 ^
                    ((uint)fVar20 ^ (uint)(3.1415927 - fVar20)) & -(uint)(1.5707964 < fVar20));
    fVar28 = (float)((uint)fVar28 ^
                    ((uint)fVar28 ^ (uint)(3.1415927 - fVar28)) & -(uint)(1.5707964 < fVar28));
    fVar30 = (float)((uint)fVar30 ^
                    ((uint)fVar30 ^ (uint)(3.1415927 - fVar30)) & -(uint)(1.5707964 < fVar30));
    fVar32 = (float)((uint)fVar32 ^
                    ((uint)fVar32 ^ (uint)(3.1415927 - fVar32)) & -(uint)(1.5707964 < fVar32));
    fVar48 = fVar20 * fVar20;
    fVar41 = fVar28 * fVar28;
    fVar42 = fVar30 * fVar30;
    fVar43 = fVar32 * fVar32;
    auVar18 = NEON_frsqrte(auVar7,4);
    auVar44._0_4_ = auVar7._0_4_ * auVar18._0_4_;
    auVar44._4_4_ = auVar7._4_4_ * auVar18._4_4_;
    auVar44._8_4_ = auVar7._8_4_ * auVar18._8_4_;
    auVar44._12_4_ = auVar7._12_4_ * auVar18._12_4_;
    auVar45 = NEON_frsqrts(auVar18,auVar44,4);
    auVar38._0_4_ = auVar18._0_4_ * auVar45._0_4_;
    auVar38._4_4_ = auVar18._4_4_ * auVar45._4_4_;
    auVar38._8_4_ = auVar18._8_4_ * auVar45._8_4_;
    auVar38._12_4_ = auVar18._12_4_ * auVar45._12_4_;
    auVar46._0_4_ = auVar7._0_4_ * auVar38._0_4_;
    auVar46._4_4_ = auVar7._4_4_ * auVar38._4_4_;
    auVar46._8_4_ = auVar7._8_4_ * auVar38._8_4_;
    auVar46._12_4_ = auVar7._12_4_ * auVar38._12_4_;
    auVar18 = NEON_frsqrts(auVar38,auVar46,4);
    iVar9 = -(uint)(ABS(fVar8) == INFINITY);
    iVar13 = -(uint)(ABS(fVar8) == INFINITY);
    iVar14 = -(uint)(ABS(fVar8) == INFINITY);
    iVar15 = -(uint)(ABS(fVar8) == INFINITY);
    auVar47 = NEON_fmov(0x3f800000,4);
    iVar21 = -(uint)(auVar7._0_4_ == 0.0);
    iVar29 = -(uint)(auVar7._4_4_ == 0.0);
    iVar31 = -(uint)(auVar7._8_4_ == 0.0);
    fVar37 = fVar37 * auVar38._0_4_ * auVar18._0_4_;
    fVar39 = fVar39 * auVar38._4_4_ * auVar18._4_4_;
    fVar40 = fVar40 * auVar38._8_4_ * auVar18._8_4_;
    auVar19._0_4_ =
         fVar20 * (auVar47._0_4_ +
                  fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar19._4_4_ =
         fVar28 * (auVar47._4_4_ +
                  fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar19._8_4_ =
         fVar30 * (auVar47._8_4_ +
                  fVar42 * (fVar42 * (fVar42 * (fVar42 * (fVar42 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar19._12_4_ =
         fVar32 * (auVar47._12_4_ +
                  fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    fVar8 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                            CONCAT12((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                                     CONCAT11((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar21 >> 8)
                                              ,SUB41(fVar37,0) & ~(byte)iVar21)));
    auVar22._0_8_ =
         CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                  CONCAT16((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                           CONCAT15((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                    CONCAT14(SUB41(fVar39,0) & ~(byte)iVar29,fVar8))));
    auVar22[8] = SUB41(fVar40,0) & ~(byte)iVar31;
    auVar22[9] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar31 >> 8);
    auVar22[10] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
    auVar22[0xb] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
    auVar10[0] = ~(byte)iVar9;
    auVar10[1] = ~(byte)((uint)iVar9 >> 8);
    auVar10[2] = ~(byte)((uint)iVar9 >> 0x10);
    auVar10[3] = ~(byte)((uint)iVar9 >> 0x18);
    auVar10[4] = ~(byte)iVar13;
    auVar10[5] = ~(byte)((uint)iVar13 >> 8);
    auVar10[6] = ~(byte)((uint)iVar13 >> 0x10);
    auVar10[7] = ~(byte)((uint)iVar13 >> 0x18);
    auVar10[8] = ~(byte)iVar14;
    auVar10[9] = ~(byte)((uint)iVar14 >> 8);
    auVar10[10] = ~(byte)((uint)iVar14 >> 0x10);
    auVar10[0xb] = ~(byte)((uint)iVar14 >> 0x18);
    auVar10[0xc] = ~(byte)iVar15;
    auVar10[0xd] = ~(byte)((uint)iVar15 >> 8);
    auVar10[0xe] = ~(byte)((uint)iVar15 >> 0x10);
    auVar10[0xf] = ~(byte)((uint)iVar15 >> 0x18);
    auVar18._12_4_ = -(uint)(fVar32 == 1.5707964);
    auVar18._0_12_ = ZEXT812(0);
    auVar45._8_4_ = 0x7fc00000;
    auVar45._0_8_ = 0x7fc000007fc00000;
    auVar45._12_4_ = 0x7fc00000;
    auVar11._8_4_ = 0x7fc00000;
    auVar11._0_8_ = 0x7fc000007fc00000;
    auVar11._12_4_ = 0x7fc00000;
    auVar11 = auVar11 ^ (auVar45 ^ auVar19 ^ (auVar19 ^ auVar47) & auVar18) & auVar10;
    auVar12._0_4_ = fVar8 * auVar11._0_4_;
    auVar12._4_4_ = (float)((ulong)auVar22._0_8_ >> 0x20) * auVar11._4_4_;
    auVar12._8_4_ = auVar22._8_4_ * auVar11._8_4_;
    auVar12._12_4_ = auVar11._12_4_ * 1.0;
    auVar18 = NEON_ext(auVar12,auVar12,0xc,1);
    auVar33._4_12_ = auVar18._4_12_;
    auVar33._0_4_ = auVar12._0_4_;
    auVar35._12_4_ = auVar18._12_4_;
    auVar35._0_8_ = auVar33._0_8_;
    auVar35._8_4_ = auVar12._4_4_;
    auVar34._8_8_ = auVar35._8_8_;
    auVar34._4_4_ = auVar18._0_4_;
    auVar34._0_4_ = auVar12._0_4_;
    auVar36._0_12_ = auVar34._0_12_;
    auVar36._12_4_ = auVar18._4_4_;
    fVar32 = auVar12._4_4_ * auVar12._4_4_ + auVar12._4_4_ * auVar12._4_4_;
    fVar37 = auVar12._8_4_ * auVar12._8_4_ + auVar12._8_4_ * auVar12._8_4_;
    auVar18 = NEON_ext(auVar36,auVar36,8,1);
    auVar23._0_4_ = auVar47._0_4_ - (auVar12._0_4_ * auVar12._0_4_ + auVar12._0_4_ * auVar12._0_4_);
    auVar23._4_4_ = auVar47._4_4_ - fVar32;
    auVar23._8_4_ = auVar47._8_4_ - fVar37;
    auVar23._12_4_ =
         auVar47._12_4_ - (auVar12._12_4_ * auVar12._12_4_ + auVar12._12_4_ * auVar12._12_4_);
    fVar8 = auVar18._0_4_ * auVar12._8_4_;
    fVar20 = auVar18._4_4_ * auVar12._8_4_;
    fVar28 = auVar18._8_4_ * auVar12._4_4_;
    auVar24._4_12_ = auVar23._4_12_;
    auVar24._0_4_ = auVar23._0_4_;
    auVar26._0_8_ = auVar24._0_8_;
    auVar26._8_4_ = auVar23._4_4_;
    auVar26._12_4_ = auVar23._12_4_;
    auVar25._8_8_ = auVar26._8_8_;
    auVar25._4_4_ = auVar23._0_4_;
    auVar25._0_4_ = auVar23._0_4_;
    auVar27._0_12_ = auVar25._0_12_;
    auVar27._12_4_ = auVar23._4_4_;
    auVar18 = NEON_ext(auVar27,auVar27,0xc,1);
    fVar30 = auVar18._0_4_ - fVar37;
    auVar16._0_8_ = CONCAT44(auVar18._4_4_ - fVar37,fVar30);
    auVar16._8_4_ = auVar18._8_4_ - fVar32;
    fVar32 = auVar12._0_4_ * auVar12._12_4_ + auVar12._0_4_ * auVar12._12_4_;
    fVar37 = auVar12._4_4_ * auVar12._12_4_ + auVar12._4_4_ * auVar12._12_4_;
    fVar39 = auVar12._8_4_ * auVar12._12_4_ + auVar12._8_4_ * auVar12._12_4_;
    fVar8 = fVar8 + fVar8;
    fVar20 = fVar20 + fVar20;
    fVar28 = fVar28 + fVar28;
    auVar1._8_4_ = auVar16._8_4_;
    auVar1._0_8_ = auVar16._0_8_;
    auVar2._4_8_ = auVar1._4_8_;
    auVar2._0_4_ = fVar28 - fVar39;
    puVar5[5] = auVar16._4_8_ >> 0x20;
    puVar5[4] = CONCAT44(fVar8 - fVar32,fVar20 + fVar37);
    puVar5[7] = uVar4;
    puVar5[6] = uVar3;
    puVar5[1] = (ulong)(uint)(fVar20 - fVar37);
    *puVar5 = CONCAT44(fVar28 + fVar39,fVar30);
    puVar5[3] = (ulong)(uint)(fVar8 + fVar32);
    puVar5[2] = auVar2._0_8_;
    *param_1 = (long)puVar5;
    param_1[1] = (long)param_2;
    param_1[2] = 0x40;
    param_1[3] = 0x10;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  return;
}


