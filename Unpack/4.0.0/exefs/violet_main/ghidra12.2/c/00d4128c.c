/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d4128c; name: FUN_00d4128c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_00d4128c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined1 auVar5 [16];
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  auVar10._8_8_ = DAT_03cab628;
  auVar10._0_8_ = DAT_03cab620;
  uVar17 = param_3._8_8_;
  uVar16 = param_3._0_8_;
  if (*(int *)(param_4 + 0x128) == 4) {
    plVar7 = *(long **)(*(long *)(param_4 + 0x138) + 0x70);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    auVar10 = (**(code **)(plVar7[6] + 0x28))();
    auVar21._8_8_ = uVar17;
    auVar21._0_8_ = uVar16;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 5;
      do {
        lVar6 = *plVar1;
        iVar4 = (int)lVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  else {
    auVar21._8_8_ = _UNK_03caa5b8;
    auVar21._0_8_ = _DAT_03caa5b0;
    param_2._8_8_ = _UNK_03cabe68;
    param_2._0_8_ = _DAT_03cabe60;
  }
  fVar27 = auVar10._0_4_;
  fVar28 = auVar10._4_4_;
  fVar29 = auVar10._8_4_;
  fVar30 = auVar10._12_4_;
  fVar12 = param_2._0_4_;
  fVar13 = param_2._4_4_;
  fVar14 = param_2._8_4_;
  fVar15 = param_2._12_4_;
  auVar32._0_4_ = fVar27 * fVar27 + fVar28 * fVar28;
  auVar32._4_4_ = fVar29 * fVar29 + fVar30 * fVar30;
  auVar32._8_4_ = fVar27 * fVar27 + fVar28 * fVar28;
  auVar32._12_4_ = fVar29 * fVar29 + fVar30 * fVar30;
  fVar18 = auVar21._0_4_ * auVar21._0_4_;
  fVar19 = auVar21._4_4_ * auVar21._4_4_;
  fVar25 = auVar21._8_4_;
  fVar20 = auVar21._12_4_ * auVar21._12_4_;
  auVar23 = NEON_ext(auVar32,auVar32,4,1);
  auVar8._0_4_ = fVar12 * fVar12 + fVar13 * fVar13;
  auVar8._4_4_ = fVar14 * fVar14 + fVar15 * fVar15;
  auVar8._8_4_ = fVar12 * fVar12 + fVar13 * fVar13;
  auVar8._12_4_ = fVar14 * fVar14 + fVar15 * fVar15;
  auVar9._0_4_ = fVar18 + fVar19;
  auVar9._4_4_ = fVar25 * fVar25 + fVar20;
  auVar9._8_4_ = fVar18 + fVar19;
  auVar9._12_4_ = fVar25 * fVar25 + fVar20;
  auVar21 = NEON_ext(auVar8,auVar8,4,1);
  auVar10 = NEON_ext(auVar9,auVar9,4,1);
  auVar32 = NEON_fmov(0x3f800000,4);
  fVar19 = SQRT(auVar23._0_4_ + auVar23._4_4_);
  fVar18 = SQRT(auVar21._0_4_ + auVar21._4_4_);
  auVar31._4_12_ = SUB1612(ZEXT816(0),4);
  auVar31._0_4_ = SQRT(auVar10._0_4_ + auVar10._4_4_);
  fVar27 = fVar27 / fVar19;
  fVar28 = fVar28 / SQRT(auVar23._8_4_ + auVar23._12_4_);
  fVar29 = fVar29 / SQRT(auVar23._0_4_ + auVar23._4_4_);
  fVar30 = fVar30 / SQRT(auVar23._8_4_ + auVar23._12_4_);
  auVar11._4_4_ = fVar18;
  auVar11._0_4_ = fVar19;
  auVar24._0_4_ = fVar12 / fVar18;
  auVar24._4_4_ = fVar13 / SQRT(auVar21._8_4_ + auVar21._12_4_);
  auVar24._8_4_ = fVar14 / SQRT(auVar21._0_4_ + auVar21._4_4_);
  auVar24._12_4_ = fVar15 / SQRT(auVar21._8_4_ + auVar21._12_4_);
  NEON_ext(auVar24,auVar24,8,1);
  fVar25 = fVar25 / SQRT(auVar10._0_4_ + auVar10._4_4_);
  auVar23._4_4_ = fVar28;
  auVar23._0_4_ = fVar27;
  auVar23._8_4_ = fVar29;
  auVar23._12_4_ = fVar30;
  auVar5._4_4_ = fVar28;
  auVar5._0_4_ = fVar27;
  auVar5._8_4_ = fVar29;
  auVar5._12_4_ = fVar30;
  NEON_ext(auVar23,auVar5,8,1);
  auVar10 = NEON_fmov(0x40800000,4);
  auVar22._0_4_ =
       SQRT(auVar32._0_4_ + (float)_DAT_03cab3a0 * fVar27 + (float)_DAT_03cac210 * auVar24._4_4_ +
            (float)_DAT_03cabb00 * fVar25) * 0.5 * auVar10._0_4_;
  auVar22._4_4_ =
       SQRT(auVar32._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar27 +
            (float)((ulong)_DAT_03cac210 >> 0x20) * auVar24._4_4_ +
            (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar25) * 0.5 * auVar10._4_4_;
  auVar22._8_4_ =
       SQRT(auVar32._8_4_ + (float)_UNK_03cab3a8 * fVar27 + (float)_UNK_03cac218 * auVar24._4_4_ +
            (float)_UNK_03cabb08 * fVar25) * 0.5 * auVar10._8_4_;
  auVar22._12_4_ =
       SQRT(auVar32._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar27 +
            (float)((ulong)_UNK_03cac218 >> 0x20) * auVar24._4_4_ +
            (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar25) * 0.5 * auVar10._12_4_;
  auVar10 = NEON_frecpe(auVar22,4);
  auVar21 = NEON_frecps(auVar10,auVar22,4);
  auVar26._0_4_ = auVar10._0_4_ * auVar21._0_4_;
  auVar26._4_4_ = auVar10._4_4_ * auVar21._4_4_;
  auVar26._8_4_ = auVar10._8_4_ * auVar21._8_4_;
  auVar26._12_4_ = auVar10._12_4_ * auVar21._12_4_;
  NEON_frecps(auVar26,auVar22,4);
  auVar11._8_8_ = auVar31._0_8_;
  return auVar11;
}


