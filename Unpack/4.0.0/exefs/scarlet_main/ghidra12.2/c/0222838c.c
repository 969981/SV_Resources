/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0222838c; name: FUN_0222838c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0222838c(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  int iVar25;
  int iVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar31;
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 auVar36 [16];
  float fVar37;
  float fVar41;
  float fVar42;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  local_70 = *(undefined8 *)(param_1 + 0x110);
  uStack_68 = *(undefined8 *)(param_1 + 0x118);
  local_60 = *(undefined8 *)(param_1 + 0x120);
  local_58 = *(long **)(param_1 + 0x128);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_50,param_1 + 0x30,&local_70);
  }
  lVar17 = FUN_01180e7c(param_1,&local_50);
  puVar18 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar16 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar16 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_38 = *puVar18;
        FUN_00c44438(lVar19 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (lVar17 != 0) {
    local_38 = 0xa64821aac6259864;
    fVar21 = *(float *)(lVar17 + 0xc4);
    fVar35 = *(float *)(lVar17 + 200);
    fVar49 = *(float *)(lVar17 + 0xd4);
    fVar50 = *(float *)(lVar17 + 0xd8);
    fVar20 = fmodf(*(float *)(lVar17 + 0xd0) + *(float *)(lVar17 + 0xc0),360.0);
    fVar48 = fVar20 + 360.0;
    if (0.0 <= fVar20) {
      fVar48 = fVar20;
    }
    fVar21 = fmodf(fVar49 + fVar21,360.0);
    fVar49 = fVar21 + 360.0;
    if (0.0 <= fVar21) {
      fVar49 = fVar21;
    }
    fVar21 = fmodf(fVar50 + fVar35,360.0);
    fVar50 = fVar21 + 360.0;
    if (0.0 <= fVar21) {
      fVar50 = fVar21;
    }
    fVar21 = *(float *)PTR_FloatPi_047d23a0 / *(float *)PTR_FloatDegree180_047d2390;
    fVar35 = fVar50 * fVar21 * 0.5;
    fVar20 = fVar48 * fVar21 * 0.5;
    fVar21 = fVar49 * fVar21 * 0.5;
    iVar16 = -(uint)(fVar35 == 0.0);
    iVar9 = -(uint)(fVar20 == 0.0);
    iVar10 = -(uint)(fVar21 == 0.0);
    iVar22 = -(uint)(ABS(fVar35) == INFINITY);
    iVar25 = -(uint)(ABS(fVar20) == INFINITY);
    iVar26 = -(uint)(ABS(fVar21) == INFINITY);
    auVar23[0] = ~(byte)iVar22;
    auVar23[1] = ~(byte)((uint)iVar22 >> 8);
    auVar23[2] = ~(byte)((uint)iVar22 >> 0x10);
    auVar23[3] = ~(byte)((uint)iVar22 >> 0x18);
    auVar23[4] = ~(byte)iVar25;
    auVar23[5] = ~(byte)((uint)iVar25 >> 8);
    auVar23[6] = ~(byte)((uint)iVar25 >> 0x10);
    auVar23[7] = ~(byte)((uint)iVar25 >> 0x18);
    auVar23[8] = ~(byte)iVar26;
    auVar23[9] = ~(byte)((uint)iVar26 >> 8);
    auVar23[10] = ~(byte)((uint)iVar26 >> 0x10);
    auVar23[0xb] = ~(byte)((uint)iVar26 >> 0x18);
    auVar23[0xc] = 0xff;
    auVar23[0xd] = 0xff;
    auVar23[0xe] = 0xff;
    auVar23[0xf] = 0xff;
    auVar34._0_4_ =
         (int)((float)(-(uint)(0.0 <= fVar35) & 0x80000000 ^ 0xbf000000) + fVar35 * 0.15915494);
    auVar34._4_4_ =
         (int)((float)(-(uint)(0.0 <= fVar20) & 0x80000000 ^ 0xbf000000) + fVar20 * 0.15915494);
    auVar34._8_4_ =
         (int)((float)(-(uint)(0.0 <= fVar21) & 0x80000000 ^ 0xbf000000) + fVar21 * 0.15915494);
    auVar34._12_4_ = 0;
    auVar38 = NEON_scvtf(auVar34,4);
    fVar48 = fVar35 + 1.5707964;
    fVar49 = fVar20 + 1.5707964;
    fVar50 = fVar21 + 1.5707964;
    auVar36._0_4_ = fVar35 - auVar38._0_4_ * 6.2831855;
    auVar36._4_4_ = fVar20 - auVar38._4_4_ * 6.2831855;
    auVar36._8_4_ = fVar21 - auVar38._8_4_ * 6.2831855;
    auVar36._12_4_ = 0.0 - auVar38._12_4_ * 6.2831855;
    auVar39._0_4_ = -(uint)(auVar36._0_4_ < -1.5707964);
    auVar39._4_4_ = -(uint)(auVar36._4_4_ < -1.5707964);
    auVar39._8_4_ = -(uint)(auVar36._8_4_ < -1.5707964);
    auVar39._12_4_ = -(uint)(auVar36._12_4_ < -1.5707964);
    iVar22 = -(uint)(ABS(fVar48) == INFINITY);
    iVar25 = -(uint)(ABS(fVar49) == INFINITY);
    iVar26 = -(uint)(ABS(fVar50) == INFINITY);
    auVar29[0] = ~(byte)iVar22;
    auVar29[1] = ~(byte)((uint)iVar22 >> 8);
    auVar29[2] = ~(byte)((uint)iVar22 >> 0x10);
    auVar29[3] = ~(byte)((uint)iVar22 >> 0x18);
    auVar29[4] = ~(byte)iVar25;
    auVar29[5] = ~(byte)((uint)iVar25 >> 8);
    auVar29[6] = ~(byte)((uint)iVar25 >> 0x10);
    auVar29[7] = ~(byte)((uint)iVar25 >> 0x18);
    auVar29[8] = ~(byte)iVar26;
    auVar29[9] = ~(byte)((uint)iVar26 >> 8);
    auVar29[10] = ~(byte)((uint)iVar26 >> 0x10);
    auVar29[0xb] = ~(byte)((uint)iVar26 >> 0x18);
    auVar29[0xc] = 0xff;
    auVar29[0xd] = 0xff;
    auVar29[0xe] = 0xff;
    auVar29[0xf] = 0xff;
    auVar33._4_4_ = -3.1415927 - auVar36._4_4_;
    auVar33._0_4_ = -3.1415927 - auVar36._0_4_;
    auVar33._8_4_ = -3.1415927 - auVar36._8_4_;
    auVar33._12_4_ = -3.1415927 - auVar36._12_4_;
    auVar36 = auVar36 ^ (auVar36 ^ auVar33) & auVar39;
    auVar40._0_4_ = -(uint)(1.5707964 < auVar36._0_4_);
    auVar40._4_4_ = -(uint)(1.5707964 < auVar36._4_4_);
    auVar40._8_4_ = -(uint)(1.5707964 < auVar36._8_4_);
    auVar40._12_4_ = -(uint)(1.5707964 < auVar36._12_4_);
    auVar27._0_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar48) & 0x80000000 ^ 0x3f000000) + fVar48 * 0.15915494);
    auVar27._4_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar49) & 0x80000000 ^ 0x3f000000) + fVar49 * 0.15915494);
    auVar27._8_4_ =
         (int)((float)(~-(uint)(0.0 <= fVar50) & 0x80000000 ^ 0x3f000000) + fVar50 * 0.15915494);
    auVar27._12_4_ = 0;
    auVar38 = NEON_scvtf(auVar27,4);
    fVar48 = fVar48 - auVar38._0_4_ * 6.2831855;
    fVar49 = fVar49 - auVar38._4_4_ * 6.2831855;
    fVar50 = fVar50 - auVar38._8_4_ * 6.2831855;
    fVar21 = 1.5707964 - auVar38._12_4_ * 6.2831855;
    auVar11._4_4_ = 3.1415927 - auVar36._4_4_;
    auVar11._0_4_ = 3.1415927 - auVar36._0_4_;
    auVar11._8_4_ = 3.1415927 - auVar36._8_4_;
    auVar11._12_4_ = 3.1415927 - auVar36._12_4_;
    auVar36 = auVar36 ^ (auVar36 ^ auVar11) & auVar40;
    fVar35 = auVar36._0_4_;
    fVar37 = fVar35 * fVar35;
    fVar20 = auVar36._4_4_;
    fVar41 = fVar20 * fVar20;
    fVar31 = auVar36._8_4_;
    fVar42 = fVar31 * fVar31;
    fVar32 = auVar36._12_4_;
    fVar43 = fVar32 * fVar32;
    fVar48 = (float)((uint)fVar48 ^
                    ((uint)fVar48 ^ (uint)(-3.1415927 - fVar48)) & -(uint)(fVar48 < -1.5707964));
    fVar49 = (float)((uint)fVar49 ^
                    ((uint)fVar49 ^ (uint)(-3.1415927 - fVar49)) & -(uint)(fVar49 < -1.5707964));
    fVar50 = (float)((uint)fVar50 ^
                    ((uint)fVar50 ^ (uint)(-3.1415927 - fVar50)) & -(uint)(fVar50 < -1.5707964));
    fVar21 = (float)((uint)fVar21 ^
                    ((uint)fVar21 ^ (uint)(-3.1415927 - fVar21)) & -(uint)(fVar21 < -1.5707964));
    fVar48 = (float)((uint)fVar48 ^
                    ((uint)fVar48 ^ (uint)(3.1415927 - fVar48)) & -(uint)(1.5707964 < fVar48));
    fVar49 = (float)((uint)fVar49 ^
                    ((uint)fVar49 ^ (uint)(3.1415927 - fVar49)) & -(uint)(1.5707964 < fVar49));
    fVar50 = (float)((uint)fVar50 ^
                    ((uint)fVar50 ^ (uint)(3.1415927 - fVar50)) & -(uint)(1.5707964 < fVar50));
    fVar21 = (float)((uint)fVar21 ^
                    ((uint)fVar21 ^ (uint)(3.1415927 - fVar21)) & -(uint)(1.5707964 < fVar21));
    auVar33 = NEON_fmov(0x3f800000,4);
    fVar44 = fVar48 * fVar48;
    fVar45 = fVar49 * fVar49;
    fVar46 = fVar50 * fVar50;
    fVar47 = fVar21 * fVar21;
    auVar28._0_4_ =
         fVar48 * (auVar33._0_4_ +
                  fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar28._4_4_ =
         fVar49 * (auVar33._4_4_ +
                  fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar28._8_4_ =
         fVar50 * (auVar33._8_4_ +
                  fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar28._12_4_ =
         fVar21 * (auVar33._12_4_ +
                  fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar38._8_4_ = 0x7fc00000;
    auVar38._0_8_ = 0x7fc000007fc00000;
    auVar38._12_4_ = 0x7fc00000;
    auVar28 = auVar28 ^ (auVar28 ^ auVar38) & ~auVar29;
    auVar8[1] = ~(byte)((uint)iVar16 >> 8);
    auVar8[0] = ~(byte)iVar16;
    auVar8[2] = ~(byte)((uint)iVar16 >> 0x10);
    auVar8[3] = ~(byte)((uint)iVar16 >> 0x18);
    auVar8[4] = ~(byte)iVar9;
    auVar8[5] = ~(byte)((uint)iVar9 >> 8);
    auVar8[6] = ~(byte)((uint)iVar9 >> 0x10);
    auVar8[7] = ~(byte)((uint)iVar9 >> 0x18);
    auVar8[8] = ~(byte)iVar10;
    auVar8[9] = ~(byte)((uint)iVar10 >> 8);
    auVar8[10] = ~(byte)((uint)iVar10 >> 0x10);
    auVar8[0xb] = ~(byte)((uint)iVar10 >> 0x18);
    auVar8._12_4_ = 0;
    auVar30._0_4_ =
         fVar35 * (auVar33._0_4_ +
                  fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar30._4_4_ =
         fVar20 * (auVar33._4_4_ +
                  fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar30._8_4_ =
         fVar31 * (auVar33._8_4_ +
                  fVar42 * (fVar42 * (fVar42 * (fVar42 * (fVar42 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar30._12_4_ =
         fVar32 * (auVar33._12_4_ +
                  fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * -2.5052108e-08 + 2.7557319e-06) +
                                               -0.0001984127) + 0.008333334) + -0.16666667));
    auVar6._8_4_ = 0x7fc00000;
    auVar6._0_8_ = 0x7fc000007fc00000;
    auVar6._12_4_ = 0x7fc00000;
    auVar30 = auVar30 ^ (auVar30 ^ auVar6) & ~auVar23;
    fVar20 = auVar30._0_4_;
    auVar7._8_4_ = 0x7fc00000;
    auVar7._0_8_ = 0x7fc000007fc00000;
    auVar7._12_4_ = 0x7fc00000;
    auVar24._8_4_ = 0x7fc00000;
    auVar24._0_8_ = 0x7fc000007fc00000;
    auVar24._12_4_ = 0x7fc00000;
    auVar24 = auVar24 ^ (auVar7 ^ auVar28 ^ (auVar28 ^ auVar33) & ~auVar8) & auVar23;
    fVar48 = auVar24._0_4_;
    fVar49 = auVar24._4_4_;
    fVar31 = auVar30._4_4_;
    fVar50 = auVar24._8_4_;
    fVar32 = auVar30._8_4_;
    fVar21 = (float)_DAT_03cab3a0;
    uVar14 = (ulong)_DAT_03cab3a0 >> 0x20;
    fVar35 = (float)_UNK_03cab3a8;
    uVar15 = (ulong)_UNK_03cab3a8 >> 0x20;
    puVar18 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_38);
    uVar13 = CONCAT44(fVar32 * fVar48 * fVar49 + fVar50 * fVar31 * fVar20 * (float)uVar14,
                      fVar50 * fVar48 * fVar31 + fVar32 * fVar49 * fVar20 * fVar21);
    auVar12._8_4_ = fVar50 * fVar20 * fVar49 + fVar32 * fVar31 * fVar48 * fVar35;
    auVar12._0_8_ = uVar13;
    auVar12._12_4_ = fVar50 * fVar48 * fVar49 + fVar32 * fVar31 * fVar20 * (float)uVar15;
    puVar18[3] = auVar12._8_8_;
    puVar18[2] = uVar13;
    *puVar18 = &LAB_02b78e74;
    FUN_022287d8(param_1);
  }
  return;
}


