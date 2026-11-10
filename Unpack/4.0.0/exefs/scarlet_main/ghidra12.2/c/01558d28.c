/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01558d28; name: FUN_01558d28
 */


void FUN_01558d28(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,int param_6)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  
  uVar26 = param_3._8_8_;
  uVar25 = param_3._0_8_;
  fVar24 = param_2._12_4_;
  fVar23 = param_2._8_4_;
  fVar22 = param_2._4_4_;
  fVar21 = param_2._0_4_;
  if (*(int *)(param_5 + 0x70) != param_6) {
    lVar10 = *(long *)(param_5 + 0x2a0);
    lVar11 = *(long *)(param_5 + 0x2a8);
    if (lVar10 != lVar11) {
      uVar9 = 0xffffffffffffffff;
      do {
        uVar9 = uVar9 + 1;
        if (param_6 == 1) {
          auVar19 = FUN_01559060(param_5,uVar9 & 0xffffffff);
          fVar28 = (float)*(undefined8 *)(lVar10 + 0x460);
          fVar17 = (float)((ulong)*(undefined8 *)(lVar10 + 0x460) >> 0x20);
          fVar13 = fVar21 * fVar17;
          fVar15 = fVar22 * fVar17;
          fVar16 = fVar23 * fVar17;
          fVar17 = fVar24 * fVar17;
          fVar21 = 0.0;
          fVar22 = 0.0;
          fVar23 = 0.0;
          fVar24 = 0.0;
          fVar29 = (float)*(undefined8 *)(lVar10 + 0x468);
          auVar27._0_12_ = param_4._0_12_;
          auVar27._12_4_ = 0;
          uVar3 = *(uint *)(lVar10 + 0x450);
          *(ulong *)(lVar10 + 0x4c8) =
               CONCAT44(auVar19._12_4_ * fVar28 + fVar17 + (float)((ulong)uVar26 >> 0x20) * fVar29 +
                        0.0,param_4._8_4_ + auVar19._8_4_ * fVar28 + fVar16 + (float)uVar26 * fVar29
                       );
          *(ulong *)(lVar10 + 0x4c0) =
               CONCAT44(param_4._4_4_ +
                        auVar19._4_4_ * fVar28 + fVar15 + (float)(uVar25 >> 0x20) * fVar29,
                        param_4._0_4_ + auVar19._0_4_ * fVar28 + fVar13 + (float)uVar25 * fVar29);
          uVar18 = 0;
          uVar20 = 0;
          if (-1 < (int)uVar3) {
            lVar12 = *(long *)(param_5 + 0x2d8);
            plVar1 = (long *)(lVar12 + 0x450);
            lVar5 = nn::os::GetCurrentThread();
            do {
              lVar7 = *plVar1;
              lVar8 = *(long *)(lVar12 + 0x458);
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar7;
                *(long *)(lVar12 + 0x458) = lVar8;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              while ((lVar7 != 0 && (lVar5 != lVar7))) {
                nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x460));
                do {
                  lVar7 = *plVar1;
                  lVar8 = *(long *)(lVar12 + 0x458);
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *plVar1 = lVar7;
                    *(long *)(lVar12 + 0x458) = lVar8;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              do {
                lVar2 = *plVar1;
                if (lVar2 != lVar7 || *(long *)(lVar12 + 0x458) != lVar8) {
                  bVar6 = false;
                  ClearExclusiveLocal();
                  goto LAB_01558e98;
                }
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = lVar7;
                  *(long *)(lVar12 + 0x454) = lVar8 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              bVar6 = true;
LAB_01558e98:
              lVar7 = lVar2;
              lVar8 = *(long *)(lVar12 + 0x458);
            } while (!bVar6);
            lVar5 = *(long *)(lVar12 + 0x248) +
                    (long)*(short *)(*(long *)(lVar12 + 0xa0) +
                                    (-((ulong)(uVar3 >> 0xf) & 1) & 0xfffffffffffe0000 |
                                    ((ulong)uVar3 & 0xffff) << 1)) * 0x30;
            uVar20 = *(undefined8 *)(lVar5 + 0x28);
            uVar18 = *(undefined8 *)(lVar5 + 0x20);
            do {
              lVar5 = *plVar1;
              lVar7 = *(long *)(lVar12 + 0x458);
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar5;
                *(long *)(lVar12 + 0x458) = lVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              lVar8 = *plVar1;
              lVar2 = *(long *)(lVar12 + 0x458);
              if (lVar8 != lVar5 || lVar2 != lVar7) {
                bVar6 = false;
                ClearExclusiveLocal();
                goto LAB_01558ef0;
              }
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar5;
                *(long *)(lVar12 + 0x454) = lVar7 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            bVar6 = true;
LAB_01558ef0:
            if (!bVar6) {
              do {
                lVar5 = *plVar1;
                lVar7 = *(long *)(lVar12 + 0x458);
                if (lVar5 != lVar8 || lVar7 != lVar2) {
                  bVar6 = false;
                  ClearExclusiveLocal();
                  goto joined_r0x01559004;
                }
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *plVar1 = lVar8;
                  *(long *)(lVar12 + 0x454) = lVar2 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              bVar6 = true;
joined_r0x01559004:
              if (!bVar6) {
                do {
                  lVar8 = *plVar1;
                  lVar2 = *(long *)(lVar12 + 0x458);
                  if (lVar8 != lVar5 || lVar2 != lVar7) {
                    bVar6 = false;
                    ClearExclusiveLocal();
                    lVar5 = lVar8;
                    lVar7 = lVar2;
                    goto joined_r0x01559004;
                  }
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *plVar1 = lVar5;
                    *(long *)(lVar12 + 0x454) = lVar7 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                bVar6 = true;
                lVar5 = lVar8;
                lVar7 = lVar2;
                goto joined_r0x01559004;
              }
            }
            nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x460));
          }
          *(undefined8 *)(lVar10 + 0x4d8) = uVar20;
          *(undefined8 *)(lVar10 + 0x4d0) = uVar18;
          lVar5 = *(long *)(param_5 + 0x2a0);
          if (((*(int *)(param_5 + 0x70) != 1) || (*(char *)(lVar5 + uVar9 * 0x550 + 0x360) == '\0')
              ) || (fVar13 = *(float *)(lVar5 + uVar9 * 0x550 + 0x4e4), fVar13 <= 0.0)) {
            *(undefined4 *)(lVar5 + uVar9 * 0x550 + 0x4e0) = 0;
            param_4 = auVar27;
          }
          else {
            lVar5 = lVar5 + uVar9 * 0x550;
            fVar21 = *(float *)(lVar5 + 0x3a0) - (float)*(undefined8 *)(lVar5 + 0x3c0);
            fVar22 = *(float *)(lVar5 + 0x3a4) -
                     (float)((ulong)*(undefined8 *)(lVar5 + 0x3c0) >> 0x20);
            fVar23 = *(float *)(lVar5 + 0x3a8) - (float)*(undefined8 *)(lVar5 + 0x3c8);
            fVar24 = (*(float *)(lVar5 + 0x40) + *(float *)(lVar5 + 0x44)) / fVar13;
            uVar25 = (ulong)(uint)fVar24;
            uVar26 = 0;
            fVar21 = fVar21 * fVar21;
            fVar22 = fVar22 * fVar22;
            fVar23 = fVar23 * fVar23;
            fVar15 = *(float *)(lVar5 + 0x380) - (float)*(undefined8 *)(lVar5 + 0x3e0);
            fVar16 = *(float *)(lVar5 + 900) -
                     (float)((ulong)*(undefined8 *)(lVar5 + 0x3e0) >> 0x20);
            fVar17 = *(float *)(lVar5 + 0x388) - (float)*(undefined8 *)(lVar5 + 1000);
            auVar19._0_4_ = fVar21 + fVar22;
            auVar19._4_4_ = fVar23 + 0.0;
            auVar19._8_4_ = fVar21 + fVar22;
            auVar19._12_4_ = fVar23 + 0.0;
            auVar19 = NEON_ext(auVar19,auVar19,4,1);
            fVar15 = fVar15 * fVar15;
            fVar16 = fVar16 * fVar16;
            fVar17 = fVar17 * fVar17;
            auVar14._0_4_ = fVar15 + fVar16;
            auVar14._4_4_ = fVar17 + 0.0;
            auVar14._8_4_ = fVar15 + fVar16;
            auVar14._12_4_ = fVar17 + 0.0;
            auVar27 = NEON_ext(auVar14,auVar14,4,1);
            param_4._0_4_ = SQRT(auVar27._0_4_ + auVar27._4_4_);
            param_4._4_4_ = SQRT(auVar27._8_4_ + auVar27._12_4_);
            param_4._8_4_ = SQRT(auVar27._0_4_ + auVar27._4_4_);
            param_4._12_4_ = SQRT(auVar27._8_4_ + auVar27._12_4_);
            fVar13 = (*(float *)(lVar5 + 0x48) + *(float *)(lVar5 + 0x4c)) / fVar13;
            fVar21 = SQRT(auVar19._0_4_ + auVar19._4_4_) / fVar24;
            if (fVar24 <= 0.0) {
              fVar21 = 0.0;
            }
            fVar24 = 0.0;
            fVar23 = 0.0;
            fVar22 = 0.0;
            fVar15 = param_4._0_4_ / fVar13;
            if (fVar13 <= 0.0) {
              fVar15 = 0.0;
            }
            *(float *)(lVar5 + 0x4e0) = (fVar21 + fVar15) * 0.5;
          }
        }
        else if (param_6 == 0) {
          *(undefined8 *)(lVar10 + 0x470) = *(undefined8 *)(lVar10 + 0x460);
          *(undefined8 *)(lVar10 + 0x478) = *(undefined8 *)(lVar10 + 0x468);
        }
        lVar10 = lVar10 + 0x550;
      } while (lVar10 != lVar11);
    }
    *(int *)(param_5 + 0x70) = param_6;
  }
  return;
}


