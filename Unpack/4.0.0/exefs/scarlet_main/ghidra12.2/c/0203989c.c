/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0203989c; name: FUN_0203989c
 */


int FUN_0203989c(long param_1,long *param_2)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  short sVar12;
  int iVar13;
  float extraout_s0;
  float fVar14;
  float extraout_s0_00;
  float fVar15;
  float extraout_s0_01;
  float fVar16;
  float extraout_s0_02;
  float fVar17;
  float extraout_s0_03;
  float fVar18;
  float extraout_var;
  float fVar20;
  float extraout_var_00;
  float fVar21;
  float extraout_var_01;
  float fVar22;
  float extraout_var_02;
  float fVar23;
  float extraout_var_03;
  float fVar24;
  float extraout_var_04;
  float fVar25;
  float extraout_var_05;
  float fVar26;
  float extraout_var_06;
  float fVar27;
  float extraout_var_07;
  float fVar28;
  float extraout_var_08;
  float fVar29;
  undefined1 auVar19 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float local_160;
  float fStack_15c;
  float local_150;
  float fStack_14c;
  float local_140;
  float fStack_13c;
  float local_110;
  float fStack_10c;
  float local_100;
  float fStack_fc;
  float local_f0;
  float fStack_ec;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  long local_58;
  long local_50 [2];
  long *local_40 [2];
  
  FUN_011f3030(local_40,*(undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 8)));
  if (local_40[0] == (long *)0x0) {
    iVar13 = -1;
  }
  else {
    if (*(short *)((long)local_40[0] + 0x1a) == 0) {
LAB_02039c5c:
      iVar13 = -1;
      plVar10 = local_40[0];
    }
    else {
      psVar1 = (short *)((long)local_40[0] + 0x1a);
      iVar13 = -1;
      sVar12 = *(short *)((long)local_40[0] + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar12) {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_02039920;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02039920:
          bVar11 = false;
        }
        if (bVar11) {
          plVar10 = (long *)(local_40[0][2] + -0x28);
          if (local_40[0][2] == 0) goto LAB_02039c5c;
          FUN_01b2f888(local_50);
          if ((local_50[0] == 0) || (*(short *)(local_50[0] + 0x1a) == 0)) {
            FUN_01b2f968(local_50);
            iVar13 = -1;
          }
          else {
            if (local_50[0] == 0) {
              local_58 = 0;
LAB_02039c68:
              iVar13 = -1;
            }
            else {
              FUN_01d8542c(&local_58);
              if (local_58 == 0) goto LAB_02039c68;
              lVar9 = (**(code **)(*plVar10 + 0x68))(plVar10);
              auVar19 = *(undefined1 (*) [16])(lVar9 + 0x30);
              fVar29 = auVar19._8_4_;
              local_f0 = auVar19._0_4_;
              fStack_ec = auVar19._4_4_;
              FUN_0203598c(local_58);
              fVar14 = (local_f0 - extraout_s0) * (local_f0 - extraout_s0);
              fVar20 = (fStack_ec - extraout_var) * (fStack_ec - extraout_var);
              fVar25 = (fVar29 - extraout_var_04) * (fVar29 - extraout_var_04);
              local_78 = 0xd12c9fa8becdb294;
              pcStack_70 = "loc_pos_front";
              local_68 = 0xd;
              local_60 = (long *)0x0;
              FUN_01df9928(local_58,&local_78);
              fVar15 = (local_f0 - extraout_s0_00) * (local_f0 - extraout_s0_00);
              fVar21 = (fStack_ec - extraout_var_00) * (fStack_ec - extraout_var_00);
              fVar26 = (fVar29 - extraout_var_05) * (fVar29 - extraout_var_05);
              local_98 = 0x5ffeee0b8714c6c6;
              pcStack_90 = "loc_pos_back";
              local_88 = 0xc;
              local_80 = (long *)0x0;
              FUN_01df9928(local_58,&local_98);
              fVar16 = (local_f0 - extraout_s0_01) * (local_f0 - extraout_s0_01);
              fVar22 = (fStack_ec - extraout_var_01) * (fStack_ec - extraout_var_01);
              fVar27 = (fVar29 - extraout_var_06) * (fVar29 - extraout_var_06);
              local_a8 = 0xc;
              local_a0 = (long *)0x0;
              local_b8 = 0x2a4fded6fb8a9ac4;
              pcStack_b0 = "loc_pos_left";
              FUN_01df9928(local_58,&local_b8);
              fVar17 = (local_f0 - extraout_s0_02) * (local_f0 - extraout_s0_02);
              fVar23 = (fStack_ec - extraout_var_02) * (fStack_ec - extraout_var_02);
              fVar28 = (fVar29 - extraout_var_07) * (fVar29 - extraout_var_07);
              local_c8 = 0xd;
              local_c0 = (long *)0x0;
              local_d8 = 0xa2216459b5afc411;
              pcStack_d0 = "loc_pos_right";
              FUN_01df9928(local_58,&local_d8);
              fVar18 = (local_f0 - extraout_s0_03) * (local_f0 - extraout_s0_03);
              fVar24 = (fStack_ec - extraout_var_03) * (fStack_ec - extraout_var_03);
              fVar29 = (fVar29 - extraout_var_08) * (fVar29 - extraout_var_08);
              if (local_c0 != (long *)0x0) {
                (**(code **)(*local_c0 + 0x20))();
              }
              auVar6._4_4_ = fVar25 + 0.0;
              auVar6._0_4_ = fVar14 + fVar20;
              auVar6._8_4_ = fVar14 + fVar20;
              auVar6._12_4_ = fVar25 + 0.0;
              auVar30 = NEON_ext(auVar6,auVar6,4,1);
              auVar31._4_4_ = fVar26 + 0.0;
              auVar31._0_4_ = fVar15 + fVar21;
              auVar31._8_4_ = fVar15 + fVar21;
              auVar31._12_4_ = fVar26 + 0.0;
              auVar19 = NEON_ext(auVar31,auVar31,4,1);
              local_110 = auVar19._0_4_;
              fStack_10c = auVar19._4_4_;
              local_100 = auVar30._0_4_;
              fStack_fc = auVar30._4_4_;
              auVar30._4_4_ = fVar27 + 0.0;
              auVar30._0_4_ = fVar16 + fVar22;
              auVar30._8_4_ = fVar16 + fVar22;
              auVar30._12_4_ = fVar27 + 0.0;
              auVar31 = NEON_ext(auVar30,auVar30,4,1);
              auVar19._4_4_ = fVar28 + 0.0;
              auVar19._0_4_ = fVar17 + fVar23;
              auVar19._8_4_ = fVar17 + fVar23;
              auVar19._12_4_ = fVar28 + 0.0;
              auVar19 = NEON_ext(auVar19,auVar19,4,1);
              auVar7._4_4_ = fVar29 + 0.0;
              auVar7._0_4_ = fVar18 + fVar24;
              auVar7._8_4_ = fVar18 + fVar24;
              auVar7._12_4_ = fVar29 + 0.0;
              auVar30 = NEON_ext(auVar7,auVar7,4,1);
              if (local_a0 != (long *)0x0) {
                (**(code **)(*local_a0 + 0x20))();
              }
              local_100 = local_100 + fStack_fc;
              local_140 = auVar31._0_4_;
              fStack_13c = auVar31._4_4_;
              local_140 = local_140 + fStack_13c;
              local_150 = auVar19._0_4_;
              fStack_14c = auVar19._4_4_;
              local_150 = local_150 + fStack_14c;
              local_160 = auVar30._0_4_;
              fStack_15c = auVar30._4_4_;
              if (local_80 != (long *)0x0) {
                (**(code **)(*local_80 + 0x20))();
              }
              if (local_60 != (long *)0x0) {
                (**(code **)(*local_60 + 0x20))();
              }
              fVar29 = local_100;
              if (3.4028235e+38 <= local_100) {
                fVar29 = 3.4028235e+38;
              }
              iVar13 = -(uint)(3.4028235e+38 <= local_100);
              if (local_110 + fStack_10c < fVar29) {
                iVar13 = 1;
                fVar29 = local_110 + fStack_10c;
              }
              fVar14 = local_140;
              if (fVar29 <= local_140) {
                fVar14 = fVar29;
              }
              iVar8 = 2;
              if (fVar29 <= local_140) {
                iVar8 = iVar13;
              }
              fVar29 = local_150;
              if (fVar14 <= local_150) {
                fVar29 = fVar14;
              }
              iVar13 = 3;
              if (fVar14 <= local_150) {
                iVar13 = iVar8;
              }
              iVar8 = 4;
              if (fVar29 <= local_160 + fStack_15c) {
                iVar8 = iVar13;
              }
              iVar13 = iVar8 + -1;
              if (iVar8 < 0) {
                iVar13 = -1;
              }
            }
            FUN_019c51a8(&local_58);
            FUN_01b2f968(local_50);
          }
          (**(code **)(*plVar10 + 0x60))(plVar10);
          break;
        }
        sVar12 = sVar4;
      } while (sVar4 != 0);
      plVar10 = local_40[0];
      if (local_40[0] == (long *)0x0) {
        return iVar13;
      }
    }
    plVar2 = plVar10 + 3;
    do {
      sVar12 = (short)*plVar2;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *(short *)plVar2 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      piVar3 = (int *)((long)plVar10 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar11) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_50[0] = *plVar10;
        FUN_00c44438(lVar9 + 0x8040,local_50);
      }
    }
    else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return iVar13;
}


