/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0205703c; name: FUN_0205703c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0205703c(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 *puVar16;
  long lVar17;
  short sVar18;
  long *plVar19;
  float extraout_s0;
  float fVar20;
  float fVar21;
  float extraout_var;
  float extraout_var_00;
  undefined1 auVar22 [16];
  float fVar25;
  float fVar26;
  float fVar28;
  undefined1 auVar23 [16];
  float fVar27;
  undefined1 auVar24 [16];
  float fVar34;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  int iVar38;
  float fVar39;
  int iVar40;
  float fVar41;
  int iVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar47;
  int iVar53;
  int iVar54;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  long *local_40 [2];
  
  FUN_011f3030(local_40,*(undefined8 *)(*param_4 + (ulong)*(uint *)(param_2 + 8)));
  if (local_40[0] != (long *)0x0) {
    if (*(short *)((long)local_40[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_40[0] + 0x1a);
      sVar18 = *(short *)((long)local_40[0] + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar18) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_020570d0;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_020570d0:
          bVar5 = false;
        }
        if (bVar5) {
          plVar19 = (long *)0x0;
          if (local_40[0][2] != 0) {
            plVar19 = (long *)(local_40[0][2] + -0x28);
          }
          goto LAB_020570f8;
        }
        sVar18 = sVar3;
      } while (sVar3 != 0);
    }
    plVar19 = (long *)0x0;
LAB_020570f8:
    plVar2 = local_40[0] + 3;
    do {
      sVar18 = (short)*plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(short *)plVar2 = sVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar18 == 1) {
      FUN_0116e168();
    }
    else if (sVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar19 != (long *)0x0) {
      FUN_014410c0(local_40,*(undefined8 *)(*param_4 + (ulong)*(uint *)(param_2 + 8)));
      if (local_40[0] == (long *)0x0) {
        puVar16 = (undefined1 *)FUN_00f6866c();
      }
      else {
        FUN_01025bc4(local_40[0],*param_4 + (ulong)*(uint *)(param_2 + 0xe8));
        auVar29._8_4_ = 0x3f000000;
        auVar29._0_8_ = 0x3f0000003f000000;
        auVar29._12_4_ = 0x3f000000;
        fVar37 = ((extraout_var_00 * 3.1415927) / 180.0) * 0.5;
        fVar39 = ((extraout_s0 * 3.1415927) / 180.0) * 0.5;
        fVar41 = ((extraout_var * 3.1415927) / 180.0) * 0.5;
        fVar21 = fVar37 + 1.5707964;
        fVar27 = fVar39 + 1.5707964;
        fVar34 = fVar41 + 1.5707964;
        auVar48._0_4_ = -(uint)(0.0 <= fVar37);
        auVar48._4_4_ = -(uint)(0.0 <= fVar39);
        auVar48._8_4_ = -(uint)(0.0 <= fVar41);
        auVar48._12_4_ = 0xffffffff;
        iVar9 = -(uint)(0.0 <= fVar27);
        iVar10 = -(uint)(0.0 <= fVar34);
        auVar12._8_4_ = 0xbf000000;
        auVar12._0_8_ = 0xbf000000bf000000;
        auVar12._12_4_ = 0xbf000000;
        auVar49._8_4_ = 0xbf000000;
        auVar49._0_8_ = 0xbf000000bf000000;
        auVar49._12_4_ = 0xbf000000;
        auVar49 = auVar49 ^ (auVar12 ^ auVar29) & auVar48;
        auVar13._8_4_ = 0xbf000000;
        auVar13._0_8_ = 0xbf000000bf000000;
        auVar13._12_4_ = 0xbf000000;
        auVar8[4] = (char)iVar9;
        auVar8._0_4_ = -(uint)(0.0 <= fVar21);
        auVar8[5] = (char)((uint)iVar9 >> 8);
        auVar8[6] = (char)((uint)iVar9 >> 0x10);
        auVar8[7] = (char)((uint)iVar9 >> 0x18);
        auVar8[8] = (char)iVar10;
        auVar8[9] = (char)((uint)iVar10 >> 8);
        auVar8[10] = (char)((uint)iVar10 >> 0x10);
        auVar8[0xb] = (char)((uint)iVar10 >> 0x18);
        auVar8[0xc] = 0xff;
        auVar8[0xd] = 0xff;
        auVar8[0xe] = 0xff;
        auVar8[0xf] = 0xff;
        auVar29 = auVar29 ^ (auVar29 ^ auVar13) & ~auVar8;
        iVar9 = -(uint)(fVar37 == 0.0);
        iVar10 = -(uint)(fVar39 == 0.0);
        iVar11 = -(uint)(fVar41 == 0.0);
        auVar50._0_4_ = (int)(auVar49._0_4_ + fVar37 * 0.15915494);
        auVar50._4_4_ = (int)(auVar49._4_4_ + fVar39 * 0.15915494);
        auVar50._8_4_ = (int)(auVar49._8_4_ + fVar41 * 0.15915494);
        auVar50._12_4_ = (int)(auVar49._12_4_ + 0.0);
        auVar30._0_4_ = (int)(auVar29._0_4_ + fVar21 * 0.15915494);
        auVar30._4_4_ = (int)(auVar29._4_4_ + fVar27 * 0.15915494);
        auVar30._8_4_ = (int)(auVar29._8_4_ + fVar34 * 0.15915494);
        auVar30._12_4_ = (int)(auVar29._12_4_ + 0.25);
        auVar43 = NEON_scvtf(auVar50,4);
        auVar31 = NEON_scvtf(auVar30,4);
        fVar59 = fVar37 - auVar43._0_4_ * 6.2831855;
        fVar61 = fVar39 - auVar43._4_4_ * 6.2831855;
        fVar63 = fVar41 - auVar43._8_4_ * 6.2831855;
        fVar65 = 0.0 - auVar43._12_4_ * 6.2831855;
        fVar20 = fVar21 - auVar31._0_4_ * 6.2831855;
        fVar25 = fVar27 - auVar31._4_4_ * 6.2831855;
        fVar26 = fVar34 - auVar31._8_4_ * 6.2831855;
        fVar28 = 1.5707964 - auVar31._12_4_ * 6.2831855;
        auVar44._0_4_ = -(uint)(fVar59 < -1.5707964);
        auVar44._4_4_ = -(uint)(fVar61 < -1.5707964);
        auVar44._8_4_ = -(uint)(fVar63 < -1.5707964);
        auVar44._12_4_ = -(uint)(fVar65 < -1.5707964);
        auVar32._0_4_ = -3.1415927 - fVar20;
        auVar32._4_4_ = -3.1415927 - fVar25;
        auVar32._8_4_ = -3.1415927 - fVar26;
        auVar32._12_4_ = -3.1415927 - fVar28;
        auVar51._0_4_ = -(uint)(fVar20 < -1.5707964);
        auVar51._4_4_ = -(uint)(fVar25 < -1.5707964);
        auVar51._8_4_ = -(uint)(fVar26 < -1.5707964);
        auVar51._12_4_ = -(uint)(fVar28 < -1.5707964);
        auVar14._4_4_ = fVar61;
        auVar14._0_4_ = fVar59;
        auVar14._8_4_ = fVar63;
        auVar14._12_4_ = fVar65;
        auVar15._4_4_ = -3.1415927 - fVar61;
        auVar15._0_4_ = -3.1415927 - fVar59;
        auVar15._8_4_ = -3.1415927 - fVar63;
        auVar15._12_4_ = -3.1415927 - fVar65;
        auVar45._4_4_ = fVar61;
        auVar45._0_4_ = fVar59;
        auVar45._8_4_ = fVar63;
        auVar45._12_4_ = fVar65;
        auVar45 = auVar45 ^ (auVar14 ^ auVar15) & auVar44;
        auVar31[4] = SUB41(fVar25,0);
        auVar31._0_4_ = fVar20;
        auVar31[5] = (char)((uint)fVar25 >> 8);
        auVar31[6] = (char)((uint)fVar25 >> 0x10);
        auVar31[7] = (char)((uint)fVar25 >> 0x18);
        auVar31[8] = SUB41(fVar26,0);
        auVar31[9] = (char)((uint)fVar26 >> 8);
        auVar31[10] = (char)((uint)fVar26 >> 0x10);
        auVar31[0xb] = (char)((uint)fVar26 >> 0x18);
        auVar31[0xc] = SUB41(fVar28,0);
        auVar31[0xd] = (char)((uint)fVar28 >> 8);
        auVar31[0xe] = (char)((uint)fVar28 >> 0x10);
        auVar31[0xf] = (char)((uint)fVar28 >> 0x18);
        auVar32 = auVar32 ^ (auVar32 ^ auVar31) & ~auVar51;
        fVar20 = 3.1415927 - auVar45._4_4_;
        fVar25 = 3.1415927 - auVar45._8_4_;
        fVar26 = 3.1415927 - auVar45._12_4_;
        auVar52._0_4_ = -(uint)(1.5707964 < auVar32._0_4_);
        auVar52._4_4_ = -(uint)(1.5707964 < auVar32._4_4_);
        auVar52._8_4_ = -(uint)(1.5707964 < auVar32._8_4_);
        auVar52._12_4_ = -(uint)(1.5707964 < auVar32._12_4_);
        auVar35._0_4_ = 3.1415927 - auVar32._0_4_;
        auVar35._4_4_ = 3.1415927 - auVar32._4_4_;
        auVar35._8_4_ = 3.1415927 - auVar32._8_4_;
        auVar35._12_4_ = 3.1415927 - auVar32._12_4_;
        auVar22._0_4_ = -(uint)(1.5707964 < auVar45._0_4_);
        auVar22._4_4_ = -(uint)(1.5707964 < auVar45._4_4_);
        auVar22._8_4_ = -(uint)(1.5707964 < auVar45._8_4_);
        auVar22._12_4_ = -(uint)(1.5707964 < auVar45._12_4_);
        auVar32 = auVar32 ^ (auVar32 ^ auVar35) & auVar52;
        auVar43[4] = SUB41(fVar20,0);
        auVar43._0_4_ = 3.1415927 - auVar45._0_4_;
        auVar43[5] = (char)((uint)fVar20 >> 8);
        auVar43[6] = (char)((uint)fVar20 >> 0x10);
        auVar43[7] = (char)((uint)fVar20 >> 0x18);
        auVar43[8] = SUB41(fVar25,0);
        auVar43[9] = (char)((uint)fVar25 >> 8);
        auVar43[10] = (char)((uint)fVar25 >> 0x10);
        auVar43[0xb] = (char)((uint)fVar25 >> 0x18);
        auVar43[0xc] = SUB41(fVar26,0);
        auVar43[0xd] = (char)((uint)fVar26 >> 8);
        auVar43[0xe] = (char)((uint)fVar26 >> 0x10);
        auVar43[0xf] = (char)((uint)fVar26 >> 0x18);
        auVar45 = auVar45 ^ (auVar45 ^ auVar43) & auVar22;
        auVar31 = NEON_fmov(0x3f800000,4);
        fVar59 = auVar32._0_4_;
        fVar60 = fVar59 * fVar59;
        fVar61 = auVar32._4_4_;
        fVar62 = fVar61 * fVar61;
        fVar63 = auVar32._8_4_;
        fVar64 = fVar63 * fVar63;
        fVar65 = auVar32._12_4_;
        fVar66 = fVar65 * fVar65;
        fVar20 = auVar45._0_4_;
        fVar55 = fVar20 * fVar20;
        fVar25 = auVar45._4_4_;
        fVar56 = fVar25 * fVar25;
        fVar26 = auVar45._8_4_;
        fVar57 = fVar26 * fVar26;
        fVar28 = auVar45._12_4_;
        fVar58 = fVar28 * fVar28;
        auVar46._8_4_ = 0x7fc00000;
        auVar46._0_8_ = 0x7fc000007fc00000;
        auVar46._12_4_ = 0x7fc00000;
        iVar47 = -(uint)(ABS(fVar21) == INFINITY);
        iVar53 = -(uint)(ABS(fVar27) == INFINITY);
        iVar54 = -(uint)(ABS(fVar34) == INFINITY);
        iVar38 = -(uint)(ABS(fVar37) == INFINITY);
        iVar40 = -(uint)(ABS(fVar39) == INFINITY);
        iVar42 = -(uint)(ABS(fVar41) == INFINITY);
        auVar33._0_4_ =
             fVar59 * (auVar31._0_4_ +
                      fVar60 * (fVar60 * (fVar60 * (fVar60 * (fVar60 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar33._4_4_ =
             fVar61 * (auVar31._4_4_ +
                      fVar62 * (fVar62 * (fVar62 * (fVar62 * (fVar62 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar33._8_4_ =
             fVar63 * (auVar31._8_4_ +
                      fVar64 * (fVar64 * (fVar64 * (fVar64 * (fVar64 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar33._12_4_ =
             fVar65 * (auVar31._12_4_ +
                      fVar66 * (fVar66 * (fVar66 * (fVar66 * (fVar66 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar6[1] = ~(byte)((uint)iVar47 >> 8);
        auVar6[0] = ~(byte)iVar47;
        auVar6[2] = ~(byte)((uint)iVar47 >> 0x10);
        auVar6[3] = ~(byte)((uint)iVar47 >> 0x18);
        auVar6[4] = ~(byte)iVar53;
        auVar6[5] = ~(byte)((uint)iVar53 >> 8);
        auVar6[6] = ~(byte)((uint)iVar53 >> 0x10);
        auVar6[7] = ~(byte)((uint)iVar53 >> 0x18);
        auVar6[8] = ~(byte)iVar54;
        auVar6[9] = ~(byte)((uint)iVar54 >> 8);
        auVar6[10] = ~(byte)((uint)iVar54 >> 0x10);
        auVar6[0xb] = ~(byte)((uint)iVar54 >> 0x18);
        auVar6[0xc] = 0xff;
        auVar6[0xd] = 0xff;
        auVar6[0xe] = 0xff;
        auVar6[0xf] = 0xff;
        auVar33 = auVar33 ^ (auVar33 ^ auVar46) & ~auVar6;
        auVar7[1] = ~(byte)((uint)iVar9 >> 8);
        auVar7[0] = ~(byte)iVar9;
        auVar7[2] = ~(byte)((uint)iVar9 >> 0x10);
        auVar7[3] = ~(byte)((uint)iVar9 >> 0x18);
        auVar7[4] = ~(byte)iVar10;
        auVar7[5] = ~(byte)((uint)iVar10 >> 8);
        auVar7[6] = ~(byte)((uint)iVar10 >> 0x10);
        auVar7[7] = ~(byte)((uint)iVar10 >> 0x18);
        auVar7[8] = ~(byte)iVar11;
        auVar7[9] = ~(byte)((uint)iVar11 >> 8);
        auVar7[10] = ~(byte)((uint)iVar11 >> 0x10);
        auVar7[0xb] = ~(byte)((uint)iVar11 >> 0x18);
        auVar7._12_4_ = 0;
        auVar33 = auVar33 ^ (auVar33 ^ auVar31) & ~auVar7;
        auVar23._0_4_ =
             fVar20 * (auVar31._0_4_ +
                      fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar23._4_4_ =
             fVar25 * (auVar31._4_4_ +
                      fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar23._8_4_ =
             fVar26 * (auVar31._8_4_ +
                      fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar23._12_4_ =
             fVar28 * (auVar31._12_4_ +
                      fVar58 * (fVar58 * (fVar58 * (fVar58 * (fVar58 * -2.5052108e-08 +
                                                             2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
        auVar36[0] = ~(byte)iVar38;
        auVar36[1] = ~(byte)((uint)iVar38 >> 8);
        auVar36[2] = ~(byte)((uint)iVar38 >> 0x10);
        auVar36[3] = ~(byte)((uint)iVar38 >> 0x18);
        auVar36[4] = ~(byte)iVar40;
        auVar36[5] = ~(byte)((uint)iVar40 >> 8);
        auVar36[6] = ~(byte)((uint)iVar40 >> 0x10);
        auVar36[7] = ~(byte)((uint)iVar40 >> 0x18);
        auVar36[8] = ~(byte)iVar42;
        auVar36[9] = ~(byte)((uint)iVar42 >> 8);
        auVar36[10] = ~(byte)((uint)iVar42 >> 0x10);
        auVar36[0xb] = ~(byte)((uint)iVar42 >> 0x18);
        auVar36[0xc] = 0xff;
        auVar36[0xd] = 0xff;
        auVar36[0xe] = 0xff;
        auVar36[0xf] = 0xff;
        auVar33 = auVar33 ^ (auVar33 ^ auVar46) & ~auVar36;
        fVar25 = auVar33._0_4_;
        auVar23 = auVar23 ^ (auVar23 ^ auVar46) & ~auVar36;
        fVar21 = auVar23._0_4_;
        fVar34 = auVar33._4_4_;
        fVar20 = auVar23._4_4_;
        fVar26 = auVar33._8_4_;
        fVar27 = auVar23._8_4_;
        auVar24._0_8_ =
             CONCAT44(fVar27 * fVar25 * fVar34 +
                      fVar26 * fVar20 * fVar21 * (float)((ulong)_DAT_03cab3a0 >> 0x20),
                      fVar26 * fVar25 * fVar20 + fVar27 * fVar34 * fVar21 * (float)_DAT_03cab3a0);
        auVar24._8_4_ = fVar26 * fVar21 * fVar34 + fVar27 * fVar20 * fVar25 * (float)_UNK_03cab3a8;
        auVar24._12_4_ =
             fVar26 * fVar25 * fVar34 +
             fVar27 * fVar20 * fVar21 * (float)((ulong)_UNK_03cab3a8 >> 0x20);
        plVar19[0x1b] = auVar24._8_8_;
        plVar19[0x1a] = auVar24._0_8_;
        if (*(char *)((long)plVar19 + 0xf4) == '\0') {
          *(undefined1 *)((long)plVar19 + 0xf4) = 1;
          (**(code **)(*plVar19 + 0x78))(plVar19);
        }
        puVar16 = (undefined1 *)FUN_015c0588();
      }
      *param_1 = *puVar16;
      if (local_40[0] != (long *)0x0) {
        lVar17 = local_40[0][6];
        psVar1 = (short *)(lVar17 + 0x1a);
        do {
          sVar18 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar18 == 1) {
          *(undefined8 *)(lVar17 + 0x10) = 0;
          (**(code **)(*local_40[0] + 0x50))();
        }
        else if (sVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      (**(code **)(*plVar19 + 0x60))(plVar19);
      return;
    }
  }
  puVar16 = (undefined1 *)FUN_00f6866c();
  *param_1 = *puVar16;
  return;
}


