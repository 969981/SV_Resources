/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03301870; name: FUN_03301870
 */


/* WARNING: Removing unreachable block (ram,0x03301ac4) */

void FUN_03301870(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  long lVar5;
  double dVar6;
  long *plVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  long *plVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  undefined1 auVar22 [16];
  uint uVar25;
  int iVar26;
  uint uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  byte *local_80;
  ulong local_78;
  undefined1 auStack_60 [16];
  ulong local_50;
  double local_38;
  
  FUN_03325b88(&local_88,param_1,"localSensorAabb");
  FUN_033234d0(auStack_60,&local_88);
  if ((local_78 & 1) != 0) {
    plVar7 = (long *)(local_78 & 0xfffffffffffffffe);
    plVar11 = plVar7 + 1;
    do {
      lVar5 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  auVar15 = NEON_fmov(0xc0a00000,4);
  auVar17 = NEON_fmov(0x40a00000,4);
  uStack_a8 = auVar17._8_8_;
  local_b0 = auVar17._0_8_;
  uStack_98 = auVar15._8_8_;
  uStack_a0 = auVar15._0_8_;
  FUN_03325b88(&local_88,auStack_60,&DAT_03c3fcda);
  FUN_03286e14(&local_88,&uStack_a0,4);
  if ((local_78 & 1) != 0) {
    plVar7 = (long *)(local_78 & 0xfffffffffffffffe);
    plVar11 = plVar7 + 1;
    do {
      lVar5 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_03325b88(&local_88,auStack_60,&DAT_03bd89ed);
  FUN_03286e14(&local_88,&local_b0,4);
  if ((local_78 & 1) != 0) {
    plVar7 = (long *)(local_78 & 0xfffffffffffffffe);
    plVar11 = plVar7 + 1;
    do {
      lVar5 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  FUN_03325b88(&local_88,param_1,"wallFollowingFactor");
  pbVar10 = local_80;
  if (local_80 == (byte *)0x0) {
LAB_03301a1c:
    uVar12 = 0;
    uVar8 = 0;
  }
  else {
    pbVar9 = local_80;
    if ((*local_80 & 1) == 0) {
      do {
        pbVar9 = *(byte **)(pbVar9 + 8);
      } while ((*pbVar9 & 1) == 0);
    }
    if ((*(ulong *)(pbVar9 + 0x10) & 0x1f) != 5) {
      pbVar10 = (byte *)0x0;
      goto LAB_03301a1c;
    }
    uVar8 = local_88;
    uVar12 = local_78;
    if ((local_78 & 1) != 0) {
      piVar1 = (int *)((local_78 & 0xfffffffffffffffe) + 8);
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
  plVar11 = (long *)(uVar12 & 0xfffffffffffffffe);
  (**(code **)(*plVar11 + 0x38))(plVar11,uVar8,pbVar10,&local_38);
  dVar6 = local_38;
  if ((uVar12 & 1) != 0) {
    plVar7 = plVar11 + 1;
    do {
      lVar5 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar11 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar11 + 8))(plVar11);
    }
  }
  if ((local_78 & 1) != 0) {
    plVar7 = (long *)(local_78 & 0xfffffffffffffffe);
    plVar11 = plVar7 + 1;
    do {
      lVar5 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  fVar13 = (float)dVar6 * -0.5 + 1.0;
  fVar14 = 0.0;
  if (0.0 <= fVar13) {
    fVar14 = fVar13;
  }
  auVar18._0_4_ = ABS(fVar14);
  auVar18._4_4_ = ABS(fVar14);
  auVar18._8_4_ = ABS(fVar14);
  auVar18._12_4_ = ABS(fVar14);
  auVar15 = NEON_fmov(0x3f800000,4);
  auVar18 = NEON_fmin(auVar18,auVar15,4);
  fVar13 = auVar18._0_4_;
  fVar19 = auVar18._8_4_;
  fVar20 = auVar18._12_4_;
  fVar21 = (auVar15._0_4_ - fVar13) * 0.5;
  fVar23 = (auVar15._8_4_ - fVar19) * 0.5;
  fVar24 = (auVar15._12_4_ - fVar20) * 0.5;
  uVar25 = -(uint)(0.5 < fVar13);
  iVar26 = -(uint)(0.5 < auVar18._4_4_);
  uVar27 = -(uint)(0.5 < fVar19);
  auVar28._0_4_ = SQRT(fVar21);
  auVar28._4_4_ = SQRT((auVar15._4_4_ - auVar18._4_4_) * 0.5);
  auVar28._8_4_ = SQRT(fVar23);
  auVar28._12_4_ = SQRT(fVar24);
  fVar21 = (float)((uint)fVar21 ^ ((uint)fVar21 ^ (uint)(fVar13 * fVar13)) & ~uVar25);
  fVar23 = (float)((uint)fVar23 ^ ((uint)fVar23 ^ (uint)(fVar19 * fVar19)) & ~uVar27);
  fVar24 = (float)((uint)fVar24 ^ ((uint)fVar24 ^ (uint)(fVar20 * fVar20)) & ~-(uint)(0.5 < fVar20))
  ;
  auVar17._4_4_ = iVar26;
  auVar17._0_4_ = uVar25;
  auVar17._8_4_ = uVar27;
  auVar17._12_4_ = -(uint)(0.5 < fVar20);
  auVar28 = auVar28 ^ (auVar28 ^ auVar18) & ~auVar17;
  auVar22._0_4_ =
       auVar28._0_4_ +
       auVar28._0_4_ *
       fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * 0.0421632 + 0.024181312) + 0.045470025) +
                          0.074953005) + 0.16666752);
  auVar22._4_4_ = 0;
  auVar22._8_4_ =
       auVar28._8_4_ +
       auVar28._8_4_ *
       fVar23 * (fVar23 * (fVar23 * (fVar23 * (fVar23 * 0.0421632 + 0.024181312) + 0.045470025) +
                          0.074953005) + 0.16666752);
  auVar22._12_4_ =
       auVar28._12_4_ +
       auVar28._12_4_ *
       fVar24 * (fVar24 * (fVar24 * (fVar24 * (fVar24 * 0.0421632 + 0.024181312) + 0.045470025) +
                          0.074953005) + 0.16666752);
  auVar29._0_4_ = 1.5707964 - (auVar22._0_4_ + auVar22._0_4_);
  auVar29._4_4_ = 0;
  auVar29._8_4_ = 0.0 - (auVar22._8_4_ + auVar22._8_4_);
  auVar29._12_4_ = 0.0 - (auVar22._12_4_ + auVar22._12_4_);
  auVar4._4_4_ = iVar26;
  auVar4._0_4_ = uVar25;
  auVar4._8_4_ = uVar27;
  auVar4._12_4_ = 0;
  auVar15._4_4_ = 0;
  auVar15._0_4_ = -(uint)(fVar13 < 0.0001);
  auVar15._8_4_ = -(uint)(fVar19 < 0.0001);
  auVar15._12_4_ = -(uint)(fVar20 < 0.0001);
  auVar18 = auVar18 ^ (auVar18 ^ auVar22 ^ (auVar22 ^ auVar29) & auVar4) & ~auVar15;
  FUN_03325b88(&local_88,param_1,"wallFollowingAngle");
  if (local_80 != (byte *)0x0) {
    pbVar10 = local_80;
    if ((*local_80 & 1) == 0) {
      do {
        pbVar10 = *(byte **)(pbVar10 + 8);
      } while ((*pbVar10 & 1) == 0);
    }
    if ((*(ulong *)(pbVar10 + 0x10) & 0x1f) == 5) {
      uVar12 = local_78;
      if ((local_78 & 1) != 0) {
        piVar1 = (int *)((local_78 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      goto LAB_03301c2c;
    }
    local_80 = (byte *)0x0;
  }
  uVar12 = 0;
  local_88 = 0;
LAB_03301c2c:
  plVar11 = (long *)(uVar12 & 0xfffffffffffffffe);
  auVar16._0_8_ =
       (double)(1.5707964 -
               (float)CONCAT13((byte)(-(uint)(fVar14 < 0.0) >> 0x18) & 0x80 ^ auVar18[3],
                               auVar18._0_3_));
  auVar16._8_8_ = 0;
  (**(code **)(*plVar11 + 0x30))(auVar16,plVar11,local_88,local_80);
  if ((uVar12 & 1) != 0) {
    plVar7 = plVar11 + 1;
    do {
      lVar5 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar11 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar11 + 8))(plVar11);
    }
  }
  if ((local_78 & 1) != 0) {
    plVar7 = (long *)(local_78 & 0xfffffffffffffffe);
    plVar11 = plVar7 + 1;
    do {
      lVar5 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  if ((local_50 & 1) != 0) {
    plVar7 = (long *)(local_50 & 0xfffffffffffffffe);
    plVar11 = plVar7 + 1;
    do {
      lVar5 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = (int)lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar5 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  return;
}


