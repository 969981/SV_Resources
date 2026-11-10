/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb3fcc; name: FUN_01fb3fcc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fb3fcc(undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
                 long param_5,undefined8 *param_6,undefined8 param_7)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  bool bVar10;
  int iVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  short sVar16;
  long *plVar17;
  long *plVar18;
  int iVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  float fVar30;
  undefined1 auVar29 [16];
  float fVar31;
  float fVar32;
  float fVar36;
  float fVar37;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 local_60;
  undefined2 local_58;
  long *local_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  FUN_0100e6b8(&local_50,*param_6,param_7,0);
  local_50[0x1d] = param_2._8_8_;
  local_50[0x1c] = param_2._0_8_;
  if (*(char *)((long)local_50 + 0xf4) == '\0') {
    *(undefined1 *)((long)local_50 + 0xf4) = 1;
    (**(code **)(*local_50 + 0x78))();
    bVar10 = *(char *)((long)local_50 + 0xf4) == '\0';
  }
  else {
    bVar10 = false;
  }
  param_4 = param_4 * 0.5;
  iVar11 = -(uint)(param_4 == 0.0);
  iVar22 = -(uint)(ABS(param_4) == INFINITY);
  auVar33 = NEON_scvtf(ZEXT416((uint)(int)((float)(-(uint)(0.0 <= param_4) & 0x80000000 ^ 0xbf000000
                                                  ) + param_4 * 0.15915494)) << 0x40,4);
  auVar19[8] = ~(byte)iVar22;
  auVar19._0_8_ = 0xffffffffffffffff;
  auVar19[9] = ~(byte)((uint)iVar22 >> 8);
  auVar19[10] = ~(byte)((uint)iVar22 >> 0x10);
  auVar19[0xb] = ~(byte)((uint)iVar22 >> 0x18);
  auVar19[0xc] = 0xff;
  auVar19[0xd] = 0xff;
  auVar19[0xe] = 0xff;
  auVar19[0xf] = 0xff;
  fVar45 = param_4 + 1.5707964;
  auVar29._0_4_ = 0.0 - auVar33._0_4_ * 6.2831855;
  auVar29._4_4_ = 0.0 - auVar33._4_4_ * 6.2831855;
  auVar29._8_4_ = param_4 - auVar33._8_4_ * 6.2831855;
  auVar29._12_4_ = 0.0 - auVar33._12_4_ * 6.2831855;
  auVar34._0_4_ = -(uint)(auVar29._0_4_ < -1.5707964);
  auVar34._4_4_ = -(uint)(auVar29._4_4_ < -1.5707964);
  auVar34._8_4_ = -(uint)(auVar29._8_4_ < -1.5707964);
  auVar34._12_4_ = -(uint)(auVar29._12_4_ < -1.5707964);
  iVar22 = -(uint)(ABS(fVar45) == INFINITY);
  auVar24[8] = ~(byte)iVar22;
  auVar24._0_8_ = 0xffffffffffffffff;
  auVar24[9] = ~(byte)((uint)iVar22 >> 8);
  auVar24[10] = ~(byte)((uint)iVar22 >> 0x10);
  auVar24[0xb] = ~(byte)((uint)iVar22 >> 0x18);
  auVar24[0xc] = 0xff;
  auVar24[0xd] = 0xff;
  auVar24[0xe] = 0xff;
  auVar24[0xf] = 0xff;
  auVar28._4_4_ = -3.1415927 - auVar29._4_4_;
  auVar28._0_4_ = -3.1415927 - auVar29._0_4_;
  auVar28._8_4_ = -3.1415927 - auVar29._8_4_;
  auVar28._12_4_ = -3.1415927 - auVar29._12_4_;
  auVar29 = auVar29 ^ (auVar29 ^ auVar28) & auVar34;
  auVar35._0_4_ = -(uint)(1.5707964 < auVar29._0_4_);
  auVar35._4_4_ = -(uint)(1.5707964 < auVar29._4_4_);
  auVar35._8_4_ = -(uint)(1.5707964 < auVar29._8_4_);
  auVar35._12_4_ = -(uint)(1.5707964 < auVar29._12_4_);
  auVar33 = NEON_scvtf(ZEXT416((uint)(int)((float)(~-(uint)(0.0 <= fVar45) & 0x80000000 ^ 0x3f000000
                                                  ) + fVar45 * 0.15915494)) << 0x40,4);
  fVar43 = 1.5707964 - auVar33._0_4_ * 6.2831855;
  fVar44 = 1.5707964 - auVar33._4_4_ * 6.2831855;
  fVar45 = fVar45 - auVar33._8_4_ * 6.2831855;
  fVar46 = 1.5707964 - auVar33._12_4_ * 6.2831855;
  auVar8._4_4_ = 3.1415927 - auVar29._4_4_;
  auVar8._0_4_ = 3.1415927 - auVar29._0_4_;
  auVar8._8_4_ = 3.1415927 - auVar29._8_4_;
  auVar8._12_4_ = 3.1415927 - auVar29._12_4_;
  auVar29 = auVar29 ^ (auVar29 ^ auVar8) & auVar35;
  fVar26 = auVar29._0_4_;
  fVar32 = fVar26 * fVar26;
  fVar27 = auVar29._4_4_;
  fVar36 = fVar27 * fVar27;
  fVar30 = auVar29._8_4_;
  fVar37 = fVar30 * fVar30;
  fVar31 = auVar29._12_4_;
  fVar38 = fVar31 * fVar31;
  fVar43 = (float)((uint)fVar43 ^
                  ((uint)fVar43 ^ (uint)(-3.1415927 - fVar43)) & -(uint)(fVar43 < -1.5707964));
  fVar44 = (float)((uint)fVar44 ^
                  ((uint)fVar44 ^ (uint)(-3.1415927 - fVar44)) & -(uint)(fVar44 < -1.5707964));
  fVar45 = (float)((uint)fVar45 ^
                  ((uint)fVar45 ^ (uint)(-3.1415927 - fVar45)) & -(uint)(fVar45 < -1.5707964));
  fVar46 = (float)((uint)fVar46 ^
                  ((uint)fVar46 ^ (uint)(-3.1415927 - fVar46)) & -(uint)(fVar46 < -1.5707964));
  fVar43 = (float)((uint)fVar43 ^
                  ((uint)fVar43 ^ (uint)(3.1415927 - fVar43)) & -(uint)(1.5707964 < fVar43));
  fVar44 = (float)((uint)fVar44 ^
                  ((uint)fVar44 ^ (uint)(3.1415927 - fVar44)) & -(uint)(1.5707964 < fVar44));
  fVar45 = (float)((uint)fVar45 ^
                  ((uint)fVar45 ^ (uint)(3.1415927 - fVar45)) & -(uint)(1.5707964 < fVar45));
  fVar46 = (float)((uint)fVar46 ^
                  ((uint)fVar46 ^ (uint)(3.1415927 - fVar46)) & -(uint)(1.5707964 < fVar46));
  auVar28 = NEON_fmov(0x3f800000,4);
  fVar39 = fVar43 * fVar43;
  fVar40 = fVar44 * fVar44;
  fVar41 = fVar45 * fVar45;
  fVar42 = fVar46 * fVar46;
  auVar23._0_4_ =
       fVar43 * (auVar28._0_4_ +
                fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar23._4_4_ =
       fVar44 * (auVar28._4_4_ +
                fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar23._8_4_ =
       fVar45 * (auVar28._8_4_ +
                fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar23._12_4_ =
       fVar46 * (auVar28._12_4_ +
                fVar42 * (fVar42 * (fVar42 * (fVar42 * (fVar42 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar33._8_4_ = 0x7fc00000;
  auVar33._0_8_ = 0x7fc000007fc00000;
  auVar33._12_4_ = 0x7fc00000;
  auVar23 = auVar23 ^ (auVar23 ^ auVar33) & ~auVar24;
  auVar25._0_4_ =
       fVar26 * (auVar28._0_4_ +
                fVar32 * (fVar32 * (fVar32 * (fVar32 * (fVar32 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar25._4_4_ =
       fVar27 * (auVar28._4_4_ +
                fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar25._8_4_ =
       fVar30 * (auVar28._8_4_ +
                fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar25._12_4_ =
       fVar31 * (auVar28._12_4_ +
                fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * -2.5052108e-08 + 2.7557319e-06) +
                                             -0.0001984127) + 0.008333334) + -0.16666667));
  auVar6._8_4_ = 0x7fc00000;
  auVar6._0_8_ = 0x7fc000007fc00000;
  auVar6._12_4_ = 0x7fc00000;
  auVar25 = auVar25 ^ (auVar25 ^ auVar6) & ~auVar19;
  fVar46 = auVar25._0_4_;
  auVar7._8_4_ = 0x7fc00000;
  auVar7._0_8_ = 0x7fc000007fc00000;
  auVar7._12_4_ = 0x7fc00000;
  auVar20._8_4_ = 0x7fc00000;
  auVar20._0_8_ = 0x7fc000007fc00000;
  auVar20._12_4_ = 0x7fc00000;
  auVar20 = auVar20 ^ (auVar7 ^ auVar23 ^ (auVar23 ^ auVar28) &
                                          ~(ZEXT416(CONCAT13(~(byte)((uint)iVar11 >> 0x18),
                                                             CONCAT12(~(byte)((uint)iVar11 >> 0x10),
                                                                      CONCAT11(~(byte)((uint)iVar11
                                                                                      >> 8),
                                                                               ~(byte)iVar11)))) <<
                                           0x40)) & auVar19;
  fVar43 = auVar20._0_4_;
  fVar44 = auVar20._4_4_;
  fVar26 = auVar25._4_4_;
  fVar45 = auVar20._8_4_;
  fVar27 = auVar25._8_4_;
  auVar21._0_8_ =
       CONCAT44(fVar27 * fVar43 * fVar44 +
                fVar45 * fVar26 * fVar46 * (float)((ulong)_DAT_03cab3a0 >> 0x20),
                fVar45 * fVar43 * fVar26 + fVar27 * fVar44 * fVar46 * (float)_DAT_03cab3a0);
  auVar21._8_4_ = fVar45 * fVar46 * fVar44 + fVar27 * fVar26 * fVar43 * (float)_UNK_03cab3a8;
  auVar21._12_4_ =
       fVar45 * fVar43 * fVar44 + fVar27 * fVar26 * fVar46 * (float)((ulong)_UNK_03cab3a8 >> 0x20);
  local_50[0x1b] = auVar21._8_8_;
  local_50[0x1a] = auVar21._0_8_;
  if (bVar10) {
    *(undefined1 *)((long)local_50 + 0xf4) = 1;
    (**(code **)(*local_50 + 0x78))();
  }
  FUN_00d40af0(local_50,local_50[1],param_5 + 0x58);
  uVar12 = FUN_00e75364(local_50,local_50[1]);
  local_58 = 0;
  if (((*PTR_DAT_047d8c00 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar14 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar14;
  local_60 = *(undefined8 *)(lVar14 + 0x70);
  FUN_0100e844(local_48,uVar12,&local_60);
  puVar15 = local_48[0];
  if (local_48[0] == (undefined8 *)0x0) {
    plVar17 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_48[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_48[0] + 0x1a);
      sVar16 = *(short *)((long)local_48[0] + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar16) {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar16 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01fb4524;
          bVar10 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01fb4524:
          bVar10 = false;
        }
        if (bVar10) {
          plVar17 = (long *)0x0;
          if (local_48[0][2] != 0) {
            plVar17 = (long *)(local_48[0][2] + -0x28);
          }
          goto LAB_01fb454c;
        }
        sVar16 = sVar4;
      } while (sVar4 != 0);
    }
    plVar17 = (long *)0x0;
LAB_01fb454c:
    psVar1 = (short *)(local_48[0] + 3);
    do {
      sVar16 = *psVar1;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_48[0] + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_38 = *puVar15;
        FUN_00c44438(lVar14 + 0x8040,&local_38);
      }
    }
    else if (sVar16 == 0) goto LAB_01fb43e0;
  }
  plVar13 = (long *)plVar17[0xb];
  plVar17[8] = -0x3ddd3d69fecdf19d;
  plVar17[9] = (long)"trigger";
  plVar17[10] = 7;
  plVar17[0xb] = 0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  FUN_0100e778(plVar17,0x10);
  plVar13 = local_50;
  *(undefined2 *)((long)plVar17 + 0x221) = 0x100;
  *(undefined4 *)(plVar17 + 0x20) = 2;
  plVar17[0x26] = 0;
  plVar17[0x27] = 0;
  lVar9 = _UNK_03cabe58;
  lVar14 = _DAT_03cabe50;
  *(undefined4 *)((long)plVar17 + 0xe4) = 1;
  *(undefined2 *)((long)plVar17 + 0xf9) = 1;
  plVar17[0x29] = lVar9;
  plVar17[0x28] = lVar14;
  plVar17[0x2b] = param_3._8_8_;
  plVar17[0x2a] = param_3._0_8_;
  if (*(int *)((long)plVar17 + 0x74) == 0) {
    *(undefined4 *)((long)plVar17 + 0x74) = 1;
  }
  *(undefined1 *)((long)plVar17 + 0x71) = 0;
  plVar18 = local_50 + 5;
  (**(code **)(*local_50 + 0x18))(local_48,local_50);
  *param_1 = 0;
  param_1[1] = 0;
  plVar3 = (long *)0x0;
  if (plVar13 != (long *)0x0) {
    plVar3 = plVar18;
  }
  puVar15 = local_48[0];
  if ((long *)local_48[0][2] == plVar3) {
    FUN_00cbc6dc(param_1,local_48);
    puVar15 = local_48[0];
  }
  if (puVar15 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar15 + 3);
    do {
      sVar16 = *psVar1;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)puVar15 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_38 = *puVar15;
        FUN_00c44438(lVar14 + 0x8040,&local_38);
      }
    }
    else if (sVar16 == 0) {
LAB_01fb43e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar14 = plVar17[6];
  psVar1 = (short *)(lVar14 + 0x1a);
  do {
    sVar16 = *psVar1;
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar10) {
      *psVar1 = sVar16 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar16 == 1) {
    *(undefined8 *)(lVar14 + 0x10) = 0;
    (**(code **)(*plVar17 + 0x50))(plVar17);
  }
  else if (sVar16 == 0) goto LAB_01fb442c;
  if (local_50 != (long *)0x0) {
    lVar14 = local_50[6];
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar16 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar16 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*local_50 + 0x50))();
    }
    else if (sVar16 == 0) {
LAB_01fb442c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


