/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02007534; name: FUN_02007534
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_02007534(undefined8 *param_1,undefined8 param_2,undefined1 (*param_3) [16],long param_4,
                  uint param_5,uint param_6)

{
  short *psVar1;
  short sVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  byte bVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  byte bVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [12];
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [16];
  int iVar27;
  int iVar29;
  int iVar30;
  undefined1 auVar28 [16];
  int iVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  long local_120 [2];
  char *local_110;
  undefined8 local_108;
  undefined1 auStack_100 [8];
  char *local_f8;
  long *local_e8;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  char *pcStack_a8;
  long *local_a0;
  long *local_98;
  undefined1 auStack_88 [8];
  char *local_80;
  long *local_70;
  
  bVar12 = *(byte *)((long)param_1 + 0x25) & 0xfc |
           *(byte *)((long)param_1 + 0x25) & 1 | (param_3 != (undefined1 (*) [16])0x0) << 1;
  *(byte *)((long)param_1 + 0x25) = bVar12;
  if (param_3 == (undefined1 (*) [16])0x0) {
    bVar11 = false;
    uVar15 = 0xffffffff;
    goto LAB_020079dc;
  }
  param_1[1] = *(undefined8 *)(*param_3 + 8);
  *param_1 = *(undefined8 *)*param_3;
  fVar21 = *(float *)param_3[1];
  fVar24 = *(float *)(param_3[1] + 4);
  fVar25 = *(float *)(param_3[1] + 8);
  fVar26 = *(float *)(param_3[1] + 0xc);
  auVar28._0_4_ = fVar21 * fVar21 + fVar24 * fVar24;
  auVar28._4_4_ = fVar25 * fVar25 + fVar26 * fVar26;
  auVar28._8_4_ = fVar21 * fVar21 + fVar24 * fVar24;
  auVar28._12_4_ = fVar25 * fVar25 + fVar26 * fVar26;
  auVar28 = NEON_ext(auVar28,auVar28,4,1);
  auVar20._0_4_ = auVar28._0_4_ + auVar28._4_4_;
  auVar20._4_4_ = auVar28._8_4_ + auVar28._12_4_;
  auVar20._8_4_ = auVar28._0_4_ + auVar28._4_4_;
  auVar20._12_4_ = auVar28._8_4_ + auVar28._12_4_;
  auVar28 = NEON_frsqrte(auVar20,4);
  auVar33._0_4_ = auVar20._0_4_ * auVar28._0_4_;
  auVar33._4_4_ = auVar20._4_4_ * auVar28._4_4_;
  auVar33._8_4_ = auVar20._8_4_ * auVar28._8_4_;
  auVar33._12_4_ = auVar20._12_4_ * auVar28._12_4_;
  auVar34 = NEON_frsqrts(auVar28,auVar33,4);
  auVar32._0_4_ = auVar28._0_4_ * auVar34._0_4_;
  auVar32._4_4_ = auVar28._4_4_ * auVar34._4_4_;
  auVar32._8_4_ = auVar28._8_4_ * auVar34._8_4_;
  auVar32._12_4_ = auVar28._12_4_ * auVar34._12_4_;
  auVar35._0_4_ = auVar20._0_4_ * auVar32._0_4_;
  auVar35._4_4_ = auVar20._4_4_ * auVar32._4_4_;
  auVar35._8_4_ = auVar20._8_4_ * auVar32._8_4_;
  auVar35._12_4_ = auVar20._12_4_ * auVar32._12_4_;
  iVar27 = -(uint)(auVar20._0_4_ == 0.0);
  iVar29 = -(uint)(auVar20._4_4_ == 0.0);
  iVar30 = -(uint)(auVar20._8_4_ == 0.0);
  iVar31 = -(uint)(auVar20._12_4_ == 0.0);
  auVar28 = NEON_frsqrts(auVar32,auVar35,4);
  fVar21 = fVar21 * auVar32._0_4_ * auVar28._0_4_ * (float)_DAT_03cabe60;
  fVar24 = fVar24 * auVar32._4_4_ * auVar28._4_4_ * (float)((ulong)_DAT_03cabe60 >> 0x20);
  fVar25 = fVar25 * auVar32._8_4_ * auVar28._8_4_ * (float)_UNK_03cabe68;
  fVar26 = fVar26 * auVar32._12_4_ * auVar28._12_4_ * (float)((ulong)_UNK_03cabe68 >> 0x20);
  fVar21 = (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                           CONCAT12((byte)((uint)fVar21 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                    CONCAT11((byte)((uint)fVar21 >> 8) & ~(byte)((uint)iVar27 >> 8),
                                             SUB41(fVar21,0) & ~(byte)iVar27)));
  auVar22._0_8_ =
       CONCAT17((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                CONCAT16((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                         CONCAT15((byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                  CONCAT14(SUB41(fVar24,0) & ~(byte)iVar29,fVar21))));
  auVar22[8] = SUB41(fVar25,0) & ~(byte)iVar30;
  auVar22[9] = (byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar30 >> 8);
  auVar22[10] = (byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
  auVar22[0xb] = (byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
  auVar23[0xc] = SUB41(fVar26,0) & ~(byte)iVar31;
  auVar23._0_12_ = auVar22;
  auVar23[0xd] = (byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar31 >> 8);
  auVar23[0xe] = (byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
  auVar23[0xf] = (byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
  fVar25 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
  fVar24 = (float)((ulong)auVar22._0_8_ >> 0x20);
  auVar34._0_4_ = fVar21 + fVar24;
  auVar34._4_4_ = auVar22._8_4_ + auVar23._12_4_;
  auVar34._8_4_ = fVar21 + fVar24;
  auVar34._12_4_ = auVar22._8_4_ + auVar23._12_4_;
  auVar28 = NEON_ext(auVar34,auVar34,4,1);
  uVar15 = (ulong)((fVar25 / *(float *)PTR_FloatDegree180_047d2390) * 35.0);
  bVar11 = auVar28._0_4_ + auVar28._4_4_ <
           *(float *)(PTR_SinCosSampleTable_047d2398 + (uVar15 >> 0x18 & 0xff) * 0x10) +
           *(float *)((long)(PTR_SinCosSampleTable_047d2398 + (uVar15 >> 0x18 & 0xff) * 0x10) + 8) *
           (float)((uint)uVar15 & 0xffffff) * 5.9604645e-08;
  FUN_00ceecf8(auStack_88,param_3[3] + 8);
  if (*local_80 == '\0') {
LAB_020076ec:
    uVar15 = 0xffffffff;
LAB_020076f0:
    FUN_00ceec28(&local_b0,*param_3);
    if (local_a0 != (long *)0x0) {
      auVar6._8_8_ = pcStack_a8;
      auVar6._0_8_ = local_b0;
      uVar13 = *(long *)(local_a0[0x42] + 0x140) - *(long *)(local_a0[0x42] + 0x138);
      iVar27 = (int)(uVar13 >> 5);
      if (iVar27 < 0x21) {
        iVar29 = FUN_02007cc0();
        uVar19 = (ulong)iVar29;
      }
      else {
        uVar19 = FUN_00cf2664(auVar6);
      }
      puVar10 = PTR_DAT_047d3e30;
      puVar9 = PTR_DAT_047d3e28;
      if ((iVar27 < 1) || (uVar19 == 0)) {
LAB_02007898:
        if (local_a0 == (long *)0x0) {
LAB_02007c48:
          if ((*PTR_DAT_047d3e28 & 1) == 0) {
            iVar27 = __cxa_guard_acquire(PTR_DAT_047d3e28);
            puVar14 = (undefined8 *)PTR_DAT_047d3e30;
            if (iVar27 != 0) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
              goto LAB_02007924;
            }
          }
          puVar14 = (undefined8 *)PTR_DAT_047d3e30;
        }
        else {
          iVar27 = (int)((ulong)(*(long *)(local_a0[0x42] + 0xe0) - *(long *)(local_a0[0x42] + 0xd8)
                                ) >> 5);
          if (iVar27 < 1) {
            iVar29 = 0;
          }
          else {
            iVar30 = 0;
            iVar31 = 0;
            bVar12 = 0;
            while( true ) {
              bVar17 = bVar12;
              if (local_a0 == (long *)0x0) {
                bVar12 = 0;
              }
              else {
                auVar7._8_8_ = pcStack_a8;
                auVar7._0_8_ = local_b0;
                bVar12 = FUN_02007d40(auVar7,local_a0,iVar30);
              }
              iVar29 = iVar30;
              if (bVar12 <= bVar17) {
                iVar29 = iVar31;
              }
              if (iVar27 + -1 == iVar30) break;
              iVar30 = iVar30 + 1;
              iVar31 = iVar29;
              if (bVar12 <= bVar17) {
                bVar12 = bVar17;
              }
            }
            if (local_a0 == (long *)0x0) goto LAB_02007c48;
          }
          auVar8._8_8_ = pcStack_a8;
          auVar8._0_8_ = local_b0;
          puVar14 = (undefined8 *)FUN_00d0ba70(auVar8);
          if (*(char *)puVar14[1] == '\0') {
            puVar14 = (undefined8 *)FUN_00cf2638(local_a0,iVar29);
          }
        }
LAB_02007924:
        local_d0 = *puVar14;
        pcStack_c8 = (char *)puVar14[1];
        local_c0 = puVar14[2];
        local_b8 = (long *)puVar14[3];
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x18))();
        }
        FUN_00ceea80(auStack_e0,&local_d0);
        FUN_01f9d098(auStack_100,auStack_e0);
        cVar4 = *local_f8;
        if (local_e8 != (long *)0x0) {
          (**(code **)(*local_e8 + 0x20))();
        }
        if (cVar4 != '\0') {
          local_120[1] = 0xff8f4b5e6204ca59;
          local_110 = "AttrKey";
          local_108 = 7;
          FUN_00d8fb98(auStack_100,local_120 + 1);
          uVar15 = FUN_01e1f6e8(auStack_e0,auStack_100);
          uVar15 = uVar15 & 0xffffffff;
          if (local_e8 != (long *)0x0) {
            (**(code **)(*local_e8 + 0x20))();
          }
        }
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x20))();
        }
      }
      else {
        lVar16 = 0;
        uVar18 = 0;
        do {
          if ((uVar19 >> (uVar18 & 0x3f) & 1) != 0) {
            if (local_a0 == (long *)0x0) {
              puVar14 = (undefined8 *)puVar10;
              if (((*puVar9 & 1) == 0) && (iVar27 = __cxa_guard_acquire(puVar9), iVar27 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,puVar10,&PTR_LOOP_04483000);
                __cxa_guard_release(puVar9);
              }
            }
            else {
              lVar3 = *(long *)(local_a0[0x42] + 0x138);
              if ((ulong)(*(long *)(local_a0[0x42] + 0x140) - lVar3 >> 5) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_out_of_range();
              }
              puVar14 = (undefined8 *)(lVar3 + lVar16);
            }
            local_d0 = *puVar14;
            pcStack_c8 = (char *)puVar14[1];
            local_c0 = puVar14[2];
            local_b8 = (long *)puVar14[3];
            if (local_b8 != (long *)0x0) {
              (**(code **)(*local_b8 + 0x18))();
            }
            FUN_00ceea80(auStack_e0,&local_d0);
            FUN_01f9d098(auStack_100,auStack_e0);
            cVar4 = *local_f8;
            if (local_e8 == (long *)0x0) {
              if (cVar4 != '\0') goto LAB_020077e4;
LAB_02007860:
              bVar5 = true;
            }
            else {
              (**(code **)(*local_e8 + 0x20))();
              if (cVar4 == '\0') goto LAB_02007860;
LAB_020077e4:
              local_120[1] = 0xff8f4b5e6204ca59;
              local_110 = "AttrKey";
              local_108 = 7;
              FUN_00d8fb98(auStack_100,local_120 + 1);
              uVar15 = FUN_01e1f6e8(auStack_e0,auStack_100);
              uVar15 = uVar15 & 0xffffffff;
              if (local_e8 != (long *)0x0) {
                (**(code **)(*local_e8 + 0x20))();
              }
              bVar5 = false;
            }
            if (local_b8 != (long *)0x0) {
              (**(code **)(*local_b8 + 0x20))();
            }
            if (!bVar5) break;
          }
          lVar16 = lVar16 + 0x20;
          uVar18 = uVar18 + 1;
        } while ((uVar13 >> 5 & 0xffffffff) * 0x20 != lVar16);
        if ((int)uVar15 < 0) goto LAB_02007898;
      }
      if (local_a0 != (long *)0x0) {
        lVar16 = local_a0[6];
        psVar1 = (short *)(lVar16 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar16 + 0x10) = 0;
          (**(code **)(*local_a0 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
  }
  else {
    FUN_00cef088(auStack_100,auStack_88);
    FUN_01f9d098(&local_b0,auStack_100);
    cVar4 = *pcStack_a8;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    if (cVar4 == '\0') goto LAB_020076ec;
    local_d0 = 0xff8f4b5e6204ca59;
    pcStack_c8 = "AttrKey";
    local_c0 = 7;
    FUN_00d8fb98(&local_b0,&local_d0);
    uVar13 = FUN_01e1f6e8(auStack_100,&local_b0);
    uVar15 = uVar13 & 0xffffffff;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    if ((int)uVar13 < 0) goto LAB_020076f0;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  bVar12 = *(byte *)((long)param_1 + 0x25);
LAB_020079dc:
  *(undefined4 *)(param_1 + 4) = 0xff7fffff;
  *(byte *)((long)param_1 + 0x25) = bVar12 & 0xfb | (param_4 != 0) << 2;
  if ((param_4 != 0) &&
     (fVar21 = *(float *)(param_4 + 4), *(float *)(param_1 + 4) = fVar21,
     *(float *)((long)param_1 + 4) < fVar21)) {
    FUN_00ceecf8(auStack_88,param_4 + 0x38);
    if (*local_80 != '\0') {
      FUN_00cef088(auStack_100,auStack_88);
      FUN_01f9d098(&local_b0,auStack_100);
      cVar4 = *pcStack_a8;
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (cVar4 != '\0') {
        local_d0 = 0xff8f4b5e6204ca59;
        pcStack_c8 = "AttrKey";
        local_c0 = 7;
        FUN_00d8fb98(&local_b0,&local_d0);
        uVar15 = FUN_01e1f6e8(auStack_100,&local_b0);
        uVar15 = uVar15 & 0xffffffff;
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x20))();
        }
      }
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
  }
  local_120[0] = 1L << (uVar15 & 0x3f);
  if ((int)uVar15 < 0) {
    local_120[0] = 0;
  }
  FUN_02007dd4(param_1,param_2,local_120,bVar11,param_5 & 1,param_6 & 1);
  return uVar15;
}


