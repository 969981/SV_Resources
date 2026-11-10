/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02760a8c; name: FUN_02760a8c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02760a8c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined1 (*pauVar5) [12];
  undefined1 auVar6 [12];
  long lVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined1 auVar11 [16];
  undefined1 auVar10 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar12 [16];
  undefined1 auVar16 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar13 [16];
  float fVar19;
  float fVar25;
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 in_q7 [16];
  undefined1 auVar32 [12];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  long *local_40;
  long *local_38;
  
  plVar1 = (long *)(param_1 + 0x178);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_02760ac0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x180));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02760ac0;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02760ac0:
  FUN_00c9e664(&local_40,param_1 + 0xe8);
  puVar8 = (undefined8 *)(**(code **)(*(long *)local_38[9] + 0x68))();
  uVar38 = *puVar8;
  uVar37 = puVar8[2];
  uVar36 = puVar8[4];
  uVar35 = puVar8[6];
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 5;
    do {
      lVar7 = *plVar1;
      iVar4 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  auVar32 = in_q7._4_12_;
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x60))();
    auVar32 = in_q7._4_12_;
  }
  lVar7 = *(long *)(param_1 + 0x120);
  if (*(long *)(lVar7 + 0xd8) != 0) {
    auVar11 = *(undefined1 (*) [16])(param_1 + 400);
    pauVar5 = (undefined1 (*) [12])(param_1 + 0x1a0);
    fVar26 = (float)*(undefined8 *)(param_1 + 0x1a8);
    fVar34 = (float)((ulong)*(undefined8 *)(param_1 + 0x1a8) >> 0x20);
    fVar19 = (float)*(undefined8 *)*pauVar5;
    fVar33 = (float)((ulong)*(undefined8 *)*pauVar5 >> 0x20);
    fVar19 = fVar19 * fVar19;
    auVar12._12_4_ = fVar34;
    auVar12._0_12_ = *pauVar5;
    auVar27._12_4_ = fVar34;
    auVar27._0_12_ = *pauVar5;
    auVar12 = NEON_ext(auVar12,auVar27,0xc,1);
    uVar9 = SUB124(*pauVar5,0);
    auVar13._4_12_ = auVar12._4_12_;
    auVar13._0_4_ = uVar9;
    auVar15._12_4_ = auVar12._12_4_;
    auVar15._0_8_ = auVar13._0_8_;
    auVar15._8_4_ = SUB124(*pauVar5,4);
    auVar14._8_8_ = auVar15._8_8_;
    auVar14._4_4_ = auVar12._0_4_;
    auVar14._0_4_ = uVar9;
    auVar16._0_12_ = auVar14._0_12_;
    auVar16._12_4_ = auVar12._4_4_;
    fVar25 = fVar26 * fVar26 + fVar26 * fVar26;
    auVar12 = NEON_ext(auVar16,auVar16,8,1);
    fVar17 = auVar12._4_4_ * SUB124(*pauVar5,8);
    fVar18 = auVar12._8_4_ * fVar33;
    auVar12 = NEON_fmov(0x3f800000,4);
    auVar20._0_4_ = auVar12._0_4_ - (fVar19 + fVar19);
    auVar20._4_4_ = auVar12._4_4_ - (fVar33 * fVar33 + fVar33 * fVar33);
    auVar20._8_4_ = auVar12._8_4_ - fVar25;
    auVar20._12_4_ = auVar12._12_4_ - (fVar34 * fVar34 + fVar34 * fVar34);
    auVar21._4_12_ = auVar20._4_12_;
    auVar21._0_4_ = auVar20._0_4_;
    auVar23._0_8_ = auVar21._0_8_;
    auVar23._8_4_ = auVar20._4_4_;
    auVar23._12_4_ = auVar20._12_4_;
    auVar22._8_8_ = auVar23._8_8_;
    auVar22._4_4_ = auVar20._0_4_;
    auVar22._0_4_ = auVar20._0_4_;
    auVar24._0_12_ = auVar22._0_12_;
    auVar24._12_4_ = auVar20._4_4_;
    fVar26 = fVar18 + fVar18 + fVar26 * fVar34 + fVar26 * fVar34;
    auVar12 = NEON_ext(auVar24,auVar24,0xc,1);
    fVar19 = (fVar17 + fVar17) - (fVar33 * fVar34 + fVar33 * fVar34);
    auVar28._0_8_ = auVar32._0_8_ << 0x20;
    auVar28._12_4_ = auVar32._8_4_;
    auVar28._8_4_ = 0;
    auVar32._4_8_ = auVar28._8_8_;
    auVar32._0_4_ = auVar11._0_4_;
    fVar25 = auVar12._0_4_ - fVar25;
    auVar12 = NEON_ext(ZEXT816(0),auVar11,4,1);
    auVar27 = NEON_ext(auVar12,ZEXT816(0),0xc,1);
    auVar29._0_8_ = auVar32._0_8_ << 0x20;
    auVar29._8_4_ = auVar11._4_4_;
    auVar29._12_4_ = auVar11._4_4_;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = auVar29._8_8_;
    auVar30._0_12_ = SUB1612(auVar31 << 0x40,0);
    auVar30._12_4_ = 0;
    auVar31 = NEON_ext(auVar30,ZEXT816(0),4,1);
    auVar10._0_8_ = auVar11._4_8_ << 0x20;
    auVar10._12_4_ = auVar11._12_4_;
    auVar10._8_4_ = 0;
    auVar6._4_8_ = auVar10._8_8_;
    auVar6._0_4_ = auVar11._8_4_;
    auVar11._0_12_ = auVar6 << 0x20;
    auVar11._12_4_ = auVar10._12_4_;
    auVar12 = NEON_ext(ZEXT816(0),auVar11,0xc,1);
    fVar33 = auVar27._0_4_ * fVar25 + auVar31._0_4_ * fVar26 + auVar12._0_4_ * fVar19 +
             (float)_DAT_03cabe50 * 0.0;
    fVar34 = auVar27._4_4_ * fVar25 + auVar31._4_4_ * fVar26 + auVar12._4_4_ * fVar19 +
             (float)((ulong)_DAT_03cabe50 >> 0x20) * 0.0;
    fVar17 = auVar27._8_4_ * fVar25 + auVar31._8_4_ * fVar26 + auVar12._8_4_ * fVar19 +
             (float)_UNK_03cabe58 * 0.0;
    fVar19 = auVar27._12_4_ * fVar25 + auVar31._12_4_ * fVar26 + auVar12._12_4_ * fVar19 +
             (float)((ulong)_UNK_03cabe58 >> 0x20) * 0.0;
    (**(code **)(*(long *)(*(long *)(lVar7 + 0xd8) + 0x30) + 0x10))
              ((float)uVar38 *
               ((float)DAT_03cab620 * fVar33 + (float)_DAT_03cabe60 * fVar34 +
                (float)_DAT_03caa5b0 * fVar17 + *(float *)(param_1 + 0x1b0) * fVar19) +
               (float)uVar37 *
               ((float)((ulong)DAT_03cab620 >> 0x20) * fVar33 +
                (float)((ulong)_DAT_03cabe60 >> 0x20) * fVar34 +
                (float)((ulong)_DAT_03caa5b0 >> 0x20) * fVar17 +
               *(float *)(param_1 + 0x1b4) * fVar19) +
               (float)uVar36 *
               ((float)DAT_03cab628 * fVar33 + (float)_UNK_03cabe68 * fVar34 +
                (float)_UNK_03caa5b8 * fVar17 + *(float *)(param_1 + 0x1b8) * fVar19) +
               (float)uVar35 *
               ((float)((ulong)DAT_03cab628 >> 0x20) * fVar33 +
                (float)((ulong)_UNK_03cabe68 >> 0x20) * fVar34 +
                (float)((ulong)_UNK_03caa5b8 >> 0x20) * fVar17 + fVar19 * 1.0));
    lVar7 = *(long *)(param_1 + 0x120);
  }
  FUN_00c4cf3c(lVar7);
  *(undefined8 *)(param_1 + 0x178) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x180));
  return;
}


