/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03301d00; name: FUN_03301d00
 */


/* WARNING: Removing unreachable block (ram,0x03301e38) */

void FUN_03301d00(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  double dVar7;
  long *plVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long *plVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  undefined1 auVar16 [16];
  float fVar18;
  float fVar19;
  float fVar22;
  undefined1 auVar20 [16];
  float fVar23;
  undefined1 auVar21 [16];
  uint uVar24;
  int iVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 local_60;
  byte *local_58;
  ulong local_50;
  double local_38;
  
  FUN_03325b88(&local_60,param_1,"wallFollowingFactor");
  pbVar11 = local_58;
  if (local_58 == (byte *)0x0) {
LAB_03301d90:
    uVar13 = 0;
    uVar9 = 0;
  }
  else {
    pbVar10 = local_58;
    if ((*local_58 & 1) == 0) {
      do {
        pbVar10 = *(byte **)(pbVar10 + 8);
      } while ((*pbVar10 & 1) == 0);
    }
    if ((*(ulong *)(pbVar10 + 0x10) & 0x1f) != 5) {
      pbVar11 = (byte *)0x0;
      goto LAB_03301d90;
    }
    uVar9 = local_60;
    uVar13 = local_50;
    if ((local_50 & 1) != 0) {
      piVar1 = (int *)((local_50 & 0xfffffffffffffffe) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  local_38 = 0.0;
  plVar12 = (long *)(uVar13 & 0xfffffffffffffffe);
  (**(code **)(*plVar12 + 0x38))(plVar12,uVar9,pbVar11,&local_38);
  dVar7 = local_38;
  if ((uVar13 & 1) != 0) {
    plVar8 = plVar12 + 1;
    do {
      lVar6 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar12 + 8))(plVar12);
    }
  }
  if ((local_50 & 1) != 0) {
    plVar8 = (long *)(local_50 & 0xfffffffffffffffe);
    plVar12 = plVar8 + 1;
    do {
      lVar6 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  fVar14 = (float)dVar7 * -0.5 + 1.0;
  fVar15 = 0.0;
  if (0.0 <= fVar14) {
    fVar15 = fVar14;
  }
  auVar16._0_4_ = ABS(fVar15);
  auVar16._4_4_ = ABS(fVar15);
  auVar16._8_4_ = ABS(fVar15);
  auVar16._12_4_ = ABS(fVar15);
  auVar20 = NEON_fmov(0x3f800000,4);
  auVar16 = NEON_fmin(auVar16,auVar20,4);
  fVar14 = auVar16._0_4_;
  fVar17 = auVar16._8_4_;
  fVar18 = auVar16._12_4_;
  fVar19 = (auVar20._0_4_ - fVar14) * 0.5;
  fVar22 = (auVar20._8_4_ - fVar17) * 0.5;
  fVar23 = (auVar20._12_4_ - fVar18) * 0.5;
  uVar24 = -(uint)(0.5 < fVar14);
  iVar25 = -(uint)(0.5 < auVar16._4_4_);
  uVar26 = -(uint)(0.5 < fVar17);
  auVar27._0_4_ = SQRT(fVar19);
  auVar27._4_4_ = SQRT((auVar20._4_4_ - auVar16._4_4_) * 0.5);
  auVar27._8_4_ = SQRT(fVar22);
  auVar27._12_4_ = SQRT(fVar23);
  fVar19 = (float)((uint)fVar19 ^ ((uint)fVar19 ^ (uint)(fVar14 * fVar14)) & ~uVar24);
  fVar22 = (float)((uint)fVar22 ^ ((uint)fVar22 ^ (uint)(fVar17 * fVar17)) & ~uVar26);
  fVar23 = (float)((uint)fVar23 ^ ((uint)fVar23 ^ (uint)(fVar18 * fVar18)) & ~-(uint)(0.5 < fVar18))
  ;
  auVar4._4_4_ = iVar25;
  auVar4._0_4_ = uVar24;
  auVar4._8_4_ = uVar26;
  auVar4._12_4_ = -(uint)(0.5 < fVar18);
  auVar27 = auVar27 ^ (auVar27 ^ auVar16) & ~auVar4;
  auVar21._0_4_ =
       auVar27._0_4_ +
       auVar27._0_4_ *
       fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * 0.0421632 + 0.024181312) + 0.045470025) +
                          0.074953005) + 0.16666752);
  auVar21._4_4_ = 0;
  auVar21._8_4_ =
       auVar27._8_4_ +
       auVar27._8_4_ *
       fVar22 * (fVar22 * (fVar22 * (fVar22 * (fVar22 * 0.0421632 + 0.024181312) + 0.045470025) +
                          0.074953005) + 0.16666752);
  auVar21._12_4_ =
       auVar27._12_4_ +
       auVar27._12_4_ *
       fVar23 * (fVar23 * (fVar23 * (fVar23 * (fVar23 * 0.0421632 + 0.024181312) + 0.045470025) +
                          0.074953005) + 0.16666752);
  auVar28._0_4_ = 1.5707964 - (auVar21._0_4_ + auVar21._0_4_);
  auVar28._4_4_ = 0;
  auVar28._8_4_ = 0.0 - (auVar21._8_4_ + auVar21._8_4_);
  auVar28._12_4_ = 0.0 - (auVar21._12_4_ + auVar21._12_4_);
  auVar5._4_4_ = iVar25;
  auVar5._0_4_ = uVar24;
  auVar5._8_4_ = uVar26;
  auVar5._12_4_ = 0;
  auVar20._4_4_ = 0;
  auVar20._0_4_ = -(uint)(fVar14 < 0.0001);
  auVar20._8_4_ = -(uint)(fVar17 < 0.0001);
  auVar20._12_4_ = -(uint)(fVar18 < 0.0001);
  auVar16 = auVar16 ^ (auVar16 ^ auVar21 ^ (auVar21 ^ auVar28) & auVar5) & ~auVar20;
  FUN_03325b88(&local_60,param_1,"wallFollowingAngle");
  if (local_58 != (byte *)0x0) {
    pbVar11 = local_58;
    if ((*local_58 & 1) == 0) {
      do {
        pbVar11 = *(byte **)(pbVar11 + 8);
      } while ((*pbVar11 & 1) == 0);
    }
    if ((*(ulong *)(pbVar11 + 0x10) & 0x1f) == 5) {
      uVar13 = local_50;
      if ((local_50 & 1) != 0) {
        piVar1 = (int *)((local_50 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      goto LAB_03301fa0;
    }
    local_58 = (byte *)0x0;
  }
  uVar13 = 0;
  local_60 = 0;
LAB_03301fa0:
  plVar12 = (long *)(uVar13 & 0xfffffffffffffffe);
  (**(code **)(*plVar12 + 0x30))
            ((double)(1.5707964 -
                     (float)CONCAT13((byte)(-(uint)(fVar15 < 0.0) >> 0x18) & 0x80 ^ auVar16[3],
                                     auVar16._0_3_)),plVar12,local_60,local_58);
  if ((uVar13 & 1) != 0) {
    plVar8 = plVar12 + 1;
    do {
      lVar6 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar12 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar12 + 8))(plVar12);
    }
  }
  if ((local_50 & 1) != 0) {
    plVar8 = (long *)(local_50 & 0xfffffffffffffffe);
    plVar12 = plVar8 + 1;
    do {
      lVar6 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar8 + 8))();
    }
  }
  return;
}


