/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d6ea1c; name: FUN_00d6ea1c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d6ea1c(undefined4 *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  code *pcVar10;
  short sVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined8 uVar15;
  float fVar17;
  undefined8 uVar16;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  ulong uVar21;
  int iVar22;
  int iVar24;
  int iVar25;
  undefined1 auVar23 [16];
  int iVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined4 *puStack_d0;
  
  lVar9 = param_2[8];
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar11 = *(short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00d6ebcc;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d6ebcc:
        bVar4 = false;
      }
      if (bVar4) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 != 0) {
          pcVar10 = *(code **)(lVar9 + 0x300);
          if (pcVar10 != (code *)0x0) {
            *(undefined8 *)(lVar9 + 0x308) = 0;
            *(undefined8 *)(lVar9 + 0x310) = 0;
            *(undefined8 *)(lVar9 + 0x2f8) = 0;
            *(undefined8 *)(lVar9 + 0x300) = 0;
            (*pcVar10)(lVar9 + 0x318);
          }
          *(undefined1 **)(lVar9 + 0x2f8) = &LAB_00a9c554;
          *(undefined1 **)(lVar9 + 0x308) = &LAB_00a9c568;
          pcVar10 = *(code **)(lVar9 + 0x280);
          *(undefined1 **)(lVar9 + 0x300) = &LAB_00a9c564;
          *(undefined4 **)(lVar9 + 0x318) = param_1;
          *(undefined1 **)(lVar9 + 0x310) = &LAB_00a9c574;
          if (pcVar10 != (code *)0x0) {
            *(undefined8 *)(lVar9 + 0x288) = 0;
            *(undefined8 *)(lVar9 + 0x290) = 0;
            *(undefined8 *)(lVar9 + 0x278) = 0;
            *(undefined8 *)(lVar9 + 0x280) = 0;
            (*pcVar10)(lVar9 + 0x298);
          }
          *(undefined1 **)(lVar9 + 0x278) = &LAB_00a9c580;
          *(undefined1 **)(lVar9 + 0x288) = &LAB_00a9c594;
          pcVar10 = *(code **)(lVar9 + 0x200);
          *(undefined1 **)(lVar9 + 0x280) = &LAB_00a9c590;
          *(undefined4 **)(lVar9 + 0x298) = param_1;
          *(undefined1 **)(lVar9 + 0x290) = &LAB_00a9c5a0;
          if (pcVar10 != (code *)0x0) {
            *(undefined8 *)(lVar9 + 0x208) = 0;
            *(undefined8 *)(lVar9 + 0x210) = 0;
            *(undefined8 *)(lVar9 + 0x1f8) = 0;
            *(undefined8 *)(lVar9 + 0x200) = 0;
            (*pcVar10)(lVar9 + 0x218);
          }
          *(undefined4 **)(lVar9 + 0x218) = param_1;
          plVar12 = (long *)(lVar9 + -0x28);
          *(undefined1 **)(lVar9 + 0x1f8) = &LAB_00a9c5ac;
          *(undefined1 **)(lVar9 + 0x200) = &LAB_00a9c5bc;
          *(undefined1 **)(lVar9 + 0x208) = &LAB_00a9c5c0;
          *(undefined1 **)(lVar9 + 0x210) = &LAB_00a9c5cc;
          local_f0 = &LAB_00a9c5d8;
          local_e8 = &LAB_00a9c5e8;
          local_e0 = &LAB_00a9c5ec;
          local_d8 = &LAB_00a9c5f8;
          pcVar10 = *(code **)(lVar9 + 0x180);
          puStack_d0 = param_1;
          if (pcVar10 != (code *)0x0) {
            *(undefined8 *)(lVar9 + 0x188) = 0;
            *(undefined8 *)(lVar9 + 400) = 0;
            *(undefined8 *)(lVar9 + 0x178) = 0;
            *(undefined8 *)(lVar9 + 0x180) = 0;
            (*pcVar10)(lVar9 + 0x198);
          }
          *(undefined4 **)(lVar9 + 0x198) = param_1;
          *(undefined1 **)(lVar9 + 400) = local_d8;
          *(undefined1 **)(lVar9 + 0x180) = local_e8;
          *(undefined1 **)(lVar9 + 0x188) = local_e0;
          *(undefined8 *)(lVar9 + 0x178) = local_f0;
          *(undefined1 *)(lVar9 + 0x378) = 0;
          if (*(int *)(lVar9 + 0x550) != 2) {
            *(undefined4 *)(lVar9 + 0x550) = 2;
            *(undefined1 *)(lVar9 + 0x555) = 1;
          }
          local_e8._4_4_ = (undefined4)param_2[0x1c];
          local_f0 = (undefined1 *)CONCAT44(*(undefined4 *)(lVar9 + 0x2c),local_e8._4_4_);
          local_e8._0_4_ = 0x42c80000;
          FUN_013f8a48(plVar12,&local_f0);
          fVar14 = *(float *)(param_2 + 0x1c);
          local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,fVar14);
          local_f0 = (undefined1 *)CONCAT44(fVar14 * 5.0,fVar14 * 10.0);
          FUN_01e21adc(plVar12,&local_f0);
          pcVar6 = (char *)FUN_01e21b18();
          if (*pcVar6 != '\0') {
            if (((char)param_2[0x24] == '\0') || (*(char *)((long)param_2 + 0x11a) != '\0')) {
              uVar7 = 0xffffffff;
            }
            else {
              uVar8 = 0xfffffffe;
              if ((char)param_2[0x23] != '\0') {
                uVar8 = 0xffffffff;
              }
              uVar7 = uVar8 & 0xfffffffb;
              if (*(char *)((long)param_2 + 0x119) != '\0') {
                uVar7 = uVar8;
              }
            }
            FUN_01e21b24(plVar12,uVar7);
          }
          pcVar6 = (char *)FUN_01e21b64();
          if (*pcVar6 != '\0') {
            local_e8 = (undefined1 *)0xffffffff;
            local_e0 = (undefined1 *)0x1;
            local_f0 = &DAT_04544c50;
            memcpy(&local_d8,(void *)(lVar9 + 0x4d0),0x80);
            uVar19 = 0;
            if ((char)param_2[0x24] == '\0') {
              uVar16 = 0;
            }
            else {
              uVar16 = 0;
              if (*(char *)((long)param_2 + 0x11a) == '\0') {
                uVar16 = 0x40000000;
                if ((char)param_2[0x23] != '\0') {
                  uVar16 = 0;
                }
                uVar19 = 0x40000000;
                if (*(char *)((long)param_2 + 0x119) != '\0') {
                  uVar19 = 0;
                }
              }
            }
            FUN_01e21b70(uVar16,&local_f0,0);
            FUN_01e21b70(uVar19,&local_f0,2);
            memcpy((void *)(lVar9 + 0x4d0),&local_d8,0x80);
            *(long *)(lVar9 + 0x4b0) = lVar9 + 0x4b8;
          }
          FUN_01496e8c(plVar12);
          FUN_01e21b84(plVar12,1);
          local_f0 = (undefined1 *)0x3f80000040c00000;
          local_e8 = (undefined1 *)0x42c800003f800000;
          local_e0 = (undefined1 *)0x3f000000;
          FUN_01e21ba4(plVar12,&local_f0);
          lVar9 = *(long *)(lVar9 + 8);
          psVar1 = (short *)(lVar9 + 0x1a);
          do {
            sVar11 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar11 == 1) {
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*plVar12 + 0x50))(plVar12);
          }
          else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        break;
      }
      sVar11 = sVar2;
    } while (sVar2 != 0);
  }
  lVar9 = *param_2;
  if ((lVar9 == 0) || (*(short *)(lVar9 + 0x1a) == 0)) {
    plVar12 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar11 = *(short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00d6eef8;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d6eef8:
        bVar4 = false;
      }
      if (bVar4) {
        plVar12 = (long *)0x0;
        if (*(long *)(lVar9 + 0x10) != 0) {
          plVar12 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
        }
        break;
      }
      plVar12 = (long *)0x0;
      sVar11 = sVar2;
    } while (sVar2 != 0);
  }
  lVar9 = (**(code **)(*plVar12 + 0x68))(plVar12);
  uVar19 = *(undefined8 *)(lVar9 + 0x28);
  uVar15 = *(undefined8 *)(lVar9 + 0x20);
  uVar21 = *(ulong *)(lVar9 + 0x38);
  uVar16 = *(undefined8 *)(lVar9 + 0x30);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  fVar18 = (float)uVar19;
  *(ulong *)(param_1 + 6) = uVar21 & 0xffffffff;
  *(undefined8 *)(param_1 + 4) = uVar16;
  uVar19 = *(undefined8 *)(param_1 + 4);
  uVar16 = *(undefined8 *)(param_1 + 6);
  fVar14 = (float)uVar15;
  fVar17 = (float)((ulong)uVar15 >> 0x20);
  *(undefined8 *)(param_1 + 8) = uVar19;
  *(undefined8 *)(param_1 + 10) = uVar16;
  *(undefined8 *)(param_1 + 0xc) = uVar19;
  *(undefined8 *)(param_1 + 0xe) = uVar16;
  *(undefined8 *)(param_1 + 0x10) = uVar19;
  *(undefined8 *)(param_1 + 0x12) = uVar16;
  auVar23._0_4_ = fVar14 * fVar14 + fVar17 * fVar17;
  auVar23._4_4_ = fVar18 * fVar18 + 0.0;
  auVar23._8_4_ = fVar14 * fVar14 + fVar17 * fVar17;
  auVar23._12_4_ = fVar18 * fVar18 + 0.0;
  auVar23 = NEON_ext(auVar23,auVar23,4,1);
  auVar13._0_4_ = auVar23._0_4_ + auVar23._4_4_;
  auVar13._4_4_ = auVar23._8_4_ + auVar23._12_4_;
  auVar13._8_4_ = auVar23._0_4_ + auVar23._4_4_;
  auVar13._12_4_ = auVar23._8_4_ + auVar23._12_4_;
  auVar23 = NEON_frsqrte(auVar13,4);
  auVar28._0_4_ = auVar13._0_4_ * auVar23._0_4_;
  auVar28._4_4_ = auVar13._4_4_ * auVar23._4_4_;
  auVar28._8_4_ = auVar13._8_4_ * auVar23._8_4_;
  auVar28._12_4_ = auVar13._12_4_ * auVar23._12_4_;
  auVar29 = NEON_frsqrts(auVar23,auVar28,4);
  auVar27._0_4_ = auVar23._0_4_ * auVar29._0_4_;
  auVar27._4_4_ = auVar23._4_4_ * auVar29._4_4_;
  auVar27._8_4_ = auVar23._8_4_ * auVar29._8_4_;
  auVar27._12_4_ = auVar23._12_4_ * auVar29._12_4_;
  auVar29._0_4_ = auVar13._0_4_ * auVar27._0_4_;
  auVar29._4_4_ = auVar13._4_4_ * auVar27._4_4_;
  auVar29._8_4_ = auVar13._8_4_ * auVar27._8_4_;
  auVar29._12_4_ = auVar13._12_4_ * auVar27._12_4_;
  iVar22 = -(uint)(auVar13._0_4_ == 0.0);
  iVar24 = -(uint)(auVar13._4_4_ == 0.0);
  iVar25 = -(uint)(auVar13._8_4_ == 0.0);
  iVar26 = -(uint)(auVar13._12_4_ == 0.0);
  auVar23 = NEON_frsqrts(auVar27,auVar29,4);
  fVar14 = fVar14 * auVar27._0_4_ * auVar23._0_4_;
  fVar17 = fVar17 * auVar27._4_4_ * auVar23._4_4_;
  fVar18 = fVar18 * auVar27._8_4_ * auVar23._8_4_;
  fVar20 = auVar27._12_4_ * auVar23._12_4_ * 0.0;
  *(ulong *)(param_1 + 0x16) =
       CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                CONCAT16((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                         CONCAT15((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                  CONCAT14(SUB41(fVar20,0) & ~(byte)iVar26,
                                           CONCAT13((byte)((uint)fVar18 >> 0x18) &
                                                    ~(byte)((uint)iVar25 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar18 >> 0x10) &
                                                             ~(byte)((uint)iVar25 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar18 >> 8) &
                                                                      ~(byte)((uint)iVar25 >> 8),
                                                                      SUB41(fVar18,0) &
                                                                      ~(byte)iVar25)))))));
  *(ulong *)(param_1 + 0x14) =
       CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                CONCAT16((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                         CONCAT15((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar24 >> 8),
                                  CONCAT14(SUB41(fVar17,0) & ~(byte)iVar24,
                                           CONCAT13((byte)((uint)fVar14 >> 0x18) &
                                                    ~(byte)((uint)iVar22 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar14 >> 0x10) &
                                                             ~(byte)((uint)iVar22 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar14 >> 8) &
                                                                      ~(byte)((uint)iVar22 >> 8),
                                                                      SUB41(fVar14,0) &
                                                                      ~(byte)iVar22)))))));
  fVar14 = *(float *)(param_2 + 0x1c);
  if (*(float *)(param_2 + 0x1c) <= 1.0) {
    fVar14 = 1.0;
  }
  param_1[0x1c] = fVar14 * 0.5 * fVar14 * 0.5;
  fVar14 = *(float *)(param_2 + 0x1c);
  param_1[0x24] = 0;
  *(undefined4 *)((long)param_1 + 0x79) = 0;
  *(undefined1 *)((long)param_1 + 0x7d) = 0;
  *(undefined8 *)((long)param_1 + 0x86) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)((long)param_1 + 0xb2) = 0;
  param_1[0x34] = 0;
  uVar5 = DAT_03cab628;
  uVar15 = DAT_03cab620;
  uVar16 = _UNK_03caa5b8;
  uVar19 = _DAT_03caa5b0;
  if (fVar14 <= 1.0) {
    fVar14 = 1.0;
  }
  *(undefined8 *)(param_1 + 0x2a) = _UNK_03caa5b8;
  *(undefined8 *)(param_1 + 0x28) = uVar19;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_1 + 0x12);
  fVar14 = fVar14 * 1.5 + fVar14 * 0.5;
  param_1[0x1d] = fVar14 * fVar14;
  *(undefined8 *)(param_1 + 0x3a) = uVar16;
  *(undefined8 *)(param_1 + 0x38) = uVar19;
  *(undefined8 *)(param_1 + 0x3e) = uVar5;
  *(undefined8 *)(param_1 + 0x3c) = uVar15;
  *(undefined8 *)((long)param_1 + 0x105) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x60))(plVar12);
  }
  return;
}


