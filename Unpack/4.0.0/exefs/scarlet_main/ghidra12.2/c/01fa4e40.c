/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fa4e40; name: FUN_01fa4e40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01fa4e40(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  int iVar5;
  long lVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined4 uVar10;
  float fVar18;
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar12 [16];
  undefined1 auVar17 [16];
  undefined1 auVar16 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  plVar1 = (long *)(param_1 + 0x140);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_01fa4e74;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01fa4e74;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01fa4e74:
  if (((*PTR_DAT_047d88a0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d88a0), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047dbdd0,PTR_DAT_047d88a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88a0);
  }
  lVar6 = *(long *)PTR_DAT_047d88a8;
  *(long *)PTR_DAT_047d88b0 = lVar6;
  lVar6 = *(long *)(lVar6 + 0x30);
  if (*(char *)(lVar6 + 0x20) == '\0') {
    fVar7 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    uVar10 = 0;
  }
  else {
    auVar8 = FUN_00e42dbc(DAT_0485a0e8,lVar6 + 0x24);
    fVar7 = auVar8._0_4_;
    auVar12._0_4_ = -fVar7;
    fVar26 = auVar8._4_4_;
    fVar18 = -fVar26;
    fVar27 = auVar8._8_4_;
    auVar11._8_4_ = -fVar27;
    fVar9 = auVar8._12_4_;
    auVar20._4_4_ = fVar27;
    auVar20._0_4_ = fVar27;
    auVar20._8_4_ = fVar27;
    auVar20._12_4_ = fVar27;
    auVar8 = NEON_ext(auVar20,auVar8,0xc,1);
    auVar23._4_4_ = fVar26;
    auVar23._0_4_ = fVar26;
    auVar23._8_4_ = fVar26;
    auVar23._12_4_ = fVar26;
    auVar24 = NEON_ext(auVar23,auVar8,0xc,1);
    fVar29 = (float)_DAT_03cab640;
    fVar30 = (float)((ulong)_DAT_03cab640 >> 0x20);
    fVar31 = (float)_UNK_03cab648;
    fVar28 = (float)((ulong)_UNK_03cab648 >> 0x20);
    fVar25 = (float)_DAT_03caa5b0 * fVar9 + fVar7 * fVar29 * 0.0 +
             (float)DAT_03cab620 * auVar24._0_4_ * fVar29 + (float)_DAT_03caad80 * auVar8._0_4_;
    fVar26 = (float)((ulong)_DAT_03caa5b0 >> 0x20) * fVar9 + fVar26 * fVar30 * 0.0 +
             (float)((ulong)DAT_03cab620 >> 0x20) * auVar24._4_4_ * fVar30 +
             (float)((ulong)_DAT_03caad80 >> 0x20) * auVar8._4_4_;
    fVar27 = (float)_UNK_03caa5b8 * fVar9 + fVar27 * fVar31 * 0.0 +
             (float)DAT_03cab628 * auVar24._8_4_ * fVar31 + (float)_UNK_03caad88 * auVar8._8_4_;
    fVar28 = (float)((ulong)_UNK_03caa5b8 >> 0x20) * fVar9 + fVar7 * fVar28 * 0.0 +
             (float)((ulong)DAT_03cab628 >> 0x20) * auVar24._12_4_ * fVar28 +
             (float)((ulong)_UNK_03caad88 >> 0x20) * auVar8._12_4_;
    auVar11._4_4_ = auVar11._8_4_;
    auVar11._0_4_ = auVar11._8_4_;
    auVar11._12_4_ = auVar11._8_4_;
    auVar24._4_4_ = fVar27;
    auVar24._0_4_ = fVar27;
    auVar24._8_4_ = fVar27;
    auVar24._12_4_ = fVar27;
    auVar8._4_4_ = fVar26;
    auVar8._0_4_ = fVar25;
    auVar8._8_4_ = fVar27;
    auVar8._12_4_ = fVar28;
    auVar8 = NEON_ext(auVar24,auVar8,0xc,1);
    auVar21._4_4_ = fVar26;
    auVar21._0_4_ = fVar26;
    auVar21._8_4_ = fVar26;
    auVar21._12_4_ = fVar26;
    auVar12._4_12_ = auVar11._4_12_;
    auVar22._0_8_ = auVar12._0_8_;
    auVar22._8_4_ = fVar18;
    auVar22._12_4_ = auVar11._8_4_;
    auVar19._8_8_ = auVar22._8_8_;
    auVar19._4_4_ = auVar11._8_4_;
    auVar19._0_4_ = auVar12._0_4_;
    auVar13._0_12_ = auVar19._0_12_;
    auVar13._12_4_ = auVar11._8_4_;
    auVar19 = NEON_ext(auVar13,auVar13,8,1);
    fVar7 = auVar19._0_4_;
    auVar14._4_12_ = auVar13._4_12_;
    auVar14._0_4_ = fVar7;
    auVar16._0_8_ = auVar14._0_8_;
    auVar16._8_4_ = auVar19._8_4_;
    auVar16._12_4_ = auVar11._8_4_;
    auVar15._8_8_ = auVar16._8_8_;
    auVar15._4_4_ = auVar12._0_4_;
    auVar15._0_4_ = fVar7;
    auVar17._0_12_ = auVar15._0_12_;
    auVar17._12_4_ = fVar18;
    auVar22 = NEON_ext(auVar21,auVar8,0xc,1);
    auVar24 = NEON_ext(auVar17,auVar19,8,1);
    auVar24 = NEON_ext(auVar24,auVar24,0xc,1);
    fVar7 = -((auVar12._0_4_ * fVar28 + fVar9 * fVar25 * fVar29 +
              auVar24._0_4_ * auVar22._0_4_ * fVar29) - auVar8._0_4_ * fVar7);
    fVar26 = -((fVar18 * fVar28 + fVar9 * fVar26 * fVar30 + auVar24._4_4_ * auVar22._4_4_ * fVar30)
              - auVar8._4_4_ * auVar19._4_4_);
    fVar27 = -((auVar11._8_4_ * fVar28 + fVar9 * fVar27 * fVar31 +
               auVar24._8_4_ * auVar22._8_4_ * fVar31) - auVar8._8_4_ * auVar19._8_4_);
    uVar10 = 0x80000000;
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x148));
  auVar4._4_4_ = fVar26;
  auVar4._0_4_ = fVar7;
  auVar4._8_4_ = fVar27;
  auVar4._12_4_ = uVar10;
  return auVar4;
}


