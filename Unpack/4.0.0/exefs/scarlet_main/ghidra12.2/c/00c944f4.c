/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c944f4; name: FUN_00c944f4
 */


void FUN_00c944f4(long param_1,undefined8 param_2)

{
  undefined1 (*pauVar1) [12];
  long *plVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  bool bVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float fVar17;
  float fVar18;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  float fVar23;
  undefined1 auVar20 [16];
  
  if ((*(byte *)(param_1 + 0x134) & 1) == 0) {
    iVar3 = *(int *)(param_1 + 0x130);
    if (iVar3 == 3) {
      plVar15 = *(long **)(param_1 + 0x188);
      *(undefined1 *)(param_1 + 0x336) = 1;
      for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        FUN_00c94b78(plVar15[6],param_2);
      }
      FUN_00c948d0(param_1);
      *(undefined8 *)(param_1 + 0x1d8) = extraout_var_00;
      *(ulong *)(param_1 + 0x1d0) = CONCAT44(extraout_var,extraout_s0);
      if (((1.1920929e-07 <= (float)((ulong)extraout_var_00 >> 0x20)) &&
          (*(char *)(param_1 + 0x332) != '\0')) && (*(char *)(param_1 + 0x333) == '\0')) {
        plVar15 = (long *)(param_1 + 0x2c0);
        do {
          lVar9 = *plVar15;
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar14) {
            *plVar15 = lVar9;
            *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x2c8);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        lVar8 = nn::os::GetCurrentThread();
        if (lVar8 != lVar9) {
          lVar9 = nn::os::GetCurrentThread();
LAB_00c945a0:
          if (*plVar15 == 0 && *(long *)(param_1 + 0x2c8) == 0) goto code_r0x00c945ac;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2d0));
          do {
            if (*plVar15 != 0 || *(long *)(param_1 + 0x2c8) != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2d0));
                while (*plVar15 == 0 && *(long *)(param_1 + 0x2c8) == 0) {
                  cVar6 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar14) {
                    *plVar15 = lVar9;
                    *(undefined8 *)(param_1 + 0x2c8) = 0;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_00c945b4;
                }
              } while( true );
            }
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar14) {
              *plVar15 = lVar9;
              *(undefined8 *)(param_1 + 0x2c8) = 0;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_00c945b4:
          bVar14 = false;
          goto LAB_00c945b8;
        }
        bVar14 = true;
LAB_00c945b8:
        lVar9 = *(long *)(param_1 + 0x2e0);
        if (lVar9 != 0) {
          pauVar1 = (undefined1 (*) [12])(param_1 + 0x1d0);
          fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x1d8) >> 0x20);
          uVar7 = *(undefined8 *)*pauVar1;
          auVar19._12_4_ = fVar17;
          auVar19._0_12_ = *pauVar1;
          auVar20._12_4_ = fVar17;
          auVar20._0_12_ = *pauVar1;
          auVar19 = NEON_ext(auVar19,auVar20,8,1);
          if (((*(long *)(lVar9 + 0x2c8) == 0) ||
              (1.1920929e-07 < ABS(*(float *)(param_1 + 0x1f0) - fVar17))) ||
             (fVar18 = *(float *)(param_1 + 0x1e0) - (float)uVar7,
             fVar21 = *(float *)(param_1 + 0x1e4) - (float)((ulong)uVar7 >> 0x20),
             fVar22 = *(float *)(param_1 + 0x1e8) - auVar19._0_4_,
             fVar23 = *(float *)(param_1 + 0x1ec) - 0.0, fVar18 = fVar18 * fVar18,
             fVar21 = fVar21 * fVar21, fVar22 = fVar22 * fVar22, fVar23 = fVar23 * fVar23,
             auVar16._0_4_ = fVar18 + fVar21, auVar16._4_4_ = fVar22 + fVar23,
             auVar16._8_4_ = fVar18 + fVar21, auVar16._12_4_ = fVar22 + fVar23,
             auVar20 = NEON_ext(auVar16,auVar16,4,1), 1.1920929e-07 < auVar20._0_4_ + auVar20._4_4_)
             ) {
            *(ulong *)(param_1 + 0x1e8) = (ulong)(uint)auVar19._0_4_;
            *(undefined8 *)(param_1 + 0x1e0) = uVar7;
            fVar18 = 1.0;
            if (0.0 <= fVar17) {
              fVar18 = 0.0;
            }
            fVar21 = 1.0;
            if (0.0 > fVar17) {
              fVar21 = 0.0;
            }
            *(float *)(param_1 + 0x1f0) = fVar17 * fVar21 - fVar17 * fVar18;
            FUN_00c94f60(lVar9,param_1 + 0x1e0);
          }
        }
        if (!bVar14) {
          do {
            lVar9 = *plVar15;
            lVar8 = *(long *)(param_1 + 0x2c8);
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar14) {
              *plVar15 = lVar9;
              *(long *)(param_1 + 0x2c8) = lVar8;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          do {
            lVar13 = *plVar15;
            lVar4 = *(long *)(param_1 + 0x2c8);
            if (lVar13 != lVar9 || lVar4 != lVar8) {
              bVar14 = false;
              ClearExclusiveLocal();
              goto LAB_00c946ac;
            }
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar14) {
              *plVar15 = 0;
              *(long *)(param_1 + 0x2c4) = lVar8;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar14 = true;
LAB_00c946ac:
          if (!bVar14) {
            do {
              lVar9 = *plVar15;
              lVar8 = *(long *)(param_1 + 0x2c8);
              if (lVar9 != lVar13 || lVar8 != lVar4) {
                bVar14 = false;
                ClearExclusiveLocal();
                goto joined_r0x00c94840;
              }
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar14) {
                *plVar15 = 0;
                *(long *)(param_1 + 0x2c4) = lVar4;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar14 = true;
joined_r0x00c94840:
            if (!bVar14) {
              do {
                lVar13 = *plVar15;
                lVar4 = *(long *)(param_1 + 0x2c8);
                if (lVar13 != lVar9 || lVar4 != lVar8) {
                  bVar14 = false;
                  ClearExclusiveLocal();
                  lVar9 = lVar13;
                  lVar8 = lVar4;
                  goto joined_r0x00c94840;
                }
                cVar6 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar14) {
                  *plVar15 = 0;
                  *(long *)(param_1 + 0x2c4) = lVar8;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              bVar14 = true;
              lVar9 = lVar13;
              lVar8 = lVar4;
              goto joined_r0x00c94840;
            }
          }
          nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2d0));
        }
      }
      plVar15 = *(long **)(*(long *)(param_1 + 0x1c8) + 0xb0);
      if (plVar15 != (long *)0x0) {
        plVar2 = plVar15 + 5;
        do {
          lVar9 = *plVar2;
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar14) {
            *(int *)plVar2 = (int)lVar9 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((int)lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        uVar5 = *(uint *)(plVar15 + 0x2b);
        if (0 < (int)uVar5) {
          lVar9 = *(long *)(param_1 + 0x120);
          uVar10 = 0;
          do {
            uVar11 = 1L << (uVar10 & 0x3f);
            for (plVar12 = *(long **)(param_1 + 0x188); plVar12 != (long *)0x0;
                plVar12 = (long *)*plVar12) {
              lVar8 = plVar12[6];
              if (((lVar8 != 0) &&
                  (lVar13 = *(long *)(*(long *)(lVar8 + 0x70) + 0x90),
                  (int)((ulong)(*(long *)(lVar13 + 0x218) - *(long *)(lVar13 + 0x210)) >> 5) != 0))
                 && ((*(ulong *)(lVar8 + 0x90) & uVar11) == 0)) {
                uVar11 = *(ulong *)(lVar9 + 0x1a0) & (uVar11 ^ 0xffffffffffffffff);
                goto LAB_00c94744;
              }
            }
            uVar11 = *(ulong *)(lVar9 + 0x1a0) | uVar11;
LAB_00c94744:
            uVar10 = uVar10 + 1;
            *(ulong *)(lVar9 + 0x1a0) = uVar11;
          } while (uVar10 != uVar5);
        }
        do {
          lVar9 = *plVar2;
          iVar3 = (int)lVar9 + -1;
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar14) {
            *(int *)plVar2 = iVar3;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00c94808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar15 + 0x10))();
          return;
        }
        if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    else {
      if (iVar3 == 2) {
        FUN_00c95034(param_1);
        return;
      }
      if (iVar3 == 1) {
        FUN_00c95778(param_1);
        return;
      }
    }
  }
  return;
code_r0x00c945ac:
  cVar6 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar14) {
    *plVar15 = lVar9;
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00c945b4;
  goto LAB_00c945a0;
}


