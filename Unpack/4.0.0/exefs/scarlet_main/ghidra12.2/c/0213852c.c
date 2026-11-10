/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0213852c; name: FUN_0213852c
 */


void FUN_0213852c(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  void *__dest;
  undefined1 (*pauVar9) [16];
  long lVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar23;
  float fVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_38;
  float fStack_34;
  
  plVar11 = (long *)(param_1 + 0x180);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar11 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = lVar7;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_02138560;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x188));
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x188));
        while (*plVar11 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *plVar11 = lVar7;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_02138560;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = lVar7;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_02138560:
  auVar16 = *(undefined1 (*) [16])(param_1 + 0x1f0);
  auVar21 = *(undefined1 (*) [16])(param_1 + 0x260);
  auVar37 = *(undefined1 (*) [16])(param_1 + 0x2d0);
  auVar20._0_4_ = *(float *)(param_1 + 0x380) + auVar16._0_4_ * 0.01;
  auVar26._0_4_ = *(float *)(param_1 + 0x390) + auVar21._0_4_ * 0.01;
  auVar20._4_4_ = *(float *)(param_1 + 900) + auVar16._4_4_ * 0.01;
  auVar20._8_8_ = 0;
  auVar26._4_4_ = *(float *)(param_1 + 0x394) + auVar21._4_4_ * 0.01;
  auVar26._8_8_ = 0;
  auVar16 = NEON_ext(auVar16,auVar20,8,1);
  auVar20 = NEON_ext(auVar16,auVar16,8,1);
  auVar16 = NEON_ext(auVar21,auVar26,8,1);
  auVar16 = NEON_ext(auVar16,auVar16,8,1);
  *(long *)(param_1 + 0x388) = auVar20._8_8_;
  *(long *)(param_1 + 0x380) = auVar20._0_8_;
  *(long *)(param_1 + 0x398) = auVar16._8_8_;
  *(long *)(param_1 + 0x390) = auVar16._0_8_;
  auVar16._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x3a0) >> 0x20) + auVar37._4_4_ * 0.01;
  auVar16._0_4_ = (float)*(undefined8 *)(param_1 + 0x3a0) + auVar37._0_4_ * 0.01;
  auVar16._8_8_ = 0;
  auVar16 = NEON_ext(auVar37,auVar16,8,1);
  auVar37 = NEON_ext(auVar16,auVar16,8,1);
  auVar16 = *(undefined1 (*) [16])(param_1 + 0x340);
  auVar21._0_4_ = (float)*(undefined8 *)(param_1 + 0x3b0) + auVar16._0_4_ * 0.01;
  auVar21._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x3b0) >> 0x20) + auVar16._4_4_ * 0.01;
  auVar21._8_8_ = 0;
  auVar16 = NEON_ext(auVar16,auVar21,8,1);
  auVar16 = NEON_ext(auVar16,auVar16,8,1);
  lVar7 = *(long *)(param_1 + 0x360);
  *(long *)(param_1 + 0x3a8) = auVar37._8_8_;
  *(long *)(param_1 + 0x3a0) = auVar37._0_8_;
  *(long *)(param_1 + 0x3b8) = auVar16._8_8_;
  *(long *)(param_1 + 0x3b0) = auVar16._0_8_;
  pcVar8 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar7 + 0x70) + 0x110),lVar7 + 0x30);
  __dest = (void *)0x0;
  if ((*pcVar8 != '\0') && (*(long *)(pcVar8 + 8) != 0)) {
    if (*(long *)(*(long *)(pcVar8 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_buffer","Map",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                 ,0x31);
    }
    __dest = (void *)(**(code **)PTR_DAT_047d8da8)();
  }
  memcpy(__dest,(void *)(param_1 + 0x370),0x80);
  FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar7 + 0x70) + 0x110),lVar7 + 0x30);
  if (*(char *)(param_1 + 0x3f9) == '\0') {
    lVar7 = *(long *)(param_1 + 0x128);
    pauVar9 = (undefined1 (*) [16])
              (**(code **)(**(long **)(*(long *)(param_1 + 0xe8) + 0x48) + 0x68))();
    lVar7 = *(long *)(lVar7 + 0xd8);
    if (lVar7 == 0) goto LAB_0213881c;
    auVar37 = pauVar9[2];
    auVar36 = pauVar9[3];
    auVar17 = *pauVar9;
    auVar22 = pauVar9[1];
  }
  else {
    if (*(long *)(param_1 + 0xe8) == 0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = *(long **)(*(long *)(param_1 + 0xe8) + 0x48);
    }
    pauVar9 = (undefined1 (*) [16])(**(code **)(*plVar11 + 0x68))(plVar11);
    auVar16 = *pauVar9;
    uVar3 = *(undefined8 *)pauVar9[1];
    uVar4 = *(undefined8 *)(pauVar9[1] + 8);
    uVar5 = *(undefined8 *)pauVar9[2];
    uVar6 = *(undefined8 *)(pauVar9[2] + 8);
    auVar21 = *(undefined1 (*) [16])(plVar11 + 0x1a);
    fStack_38 = auVar21._8_4_;
    fStack_34 = auVar21._12_4_;
    lVar10 = (**(code **)(*plVar11 + 0x68))(plVar11);
    lVar7 = *(long *)(*(long *)(param_1 + 0x128) + 0xd8);
    if (lVar7 == 0) goto LAB_0213881c;
    local_50 = (float)uVar5;
    fStack_4c = (float)((ulong)uVar5 >> 0x20);
    fStack_48 = (float)uVar6;
    fStack_44 = (float)((ulong)uVar6 >> 0x20);
    fVar40 = auVar21._0_4_;
    fVar41 = auVar21._4_4_;
    local_70 = auVar16._0_4_;
    fStack_6c = auVar16._4_4_;
    fStack_68 = auVar16._8_4_;
    fStack_64 = auVar16._12_4_;
    fStack_60 = (float)uVar3;
    fStack_5c = (float)((ulong)uVar3 >> 0x20);
    fStack_58 = (float)uVar4;
    fStack_54 = (float)((ulong)uVar4 >> 0x20);
    auVar12._0_4_ = fStack_60 * fStack_60 + fStack_5c * fStack_5c;
    auVar12._4_4_ = fStack_58 * fStack_58 + fStack_54 * fStack_54;
    auVar12._8_4_ = fStack_60 * fStack_60 + fStack_5c * fStack_5c;
    auVar12._12_4_ = fStack_58 * fStack_58 + fStack_54 * fStack_54;
    auVar13._0_4_ = local_50 * local_50 + fStack_4c * fStack_4c;
    auVar13._4_4_ = fStack_48 * fStack_48 + fStack_44 * fStack_44;
    auVar13._8_4_ = local_50 * local_50 + fStack_4c * fStack_4c;
    auVar13._12_4_ = fStack_48 * fStack_48 + fStack_44 * fStack_44;
    auVar37 = NEON_ext(auVar12,auVar12,4,1);
    auVar14._0_4_ = local_70 * local_70 + fStack_6c * fStack_6c;
    auVar14._4_4_ = fStack_68 * fStack_68 + fStack_64 * fStack_64;
    auVar14._8_4_ = local_70 * local_70 + fStack_6c * fStack_6c;
    auVar14._12_4_ = fStack_68 * fStack_68 + fStack_64 * fStack_64;
    auVar16 = NEON_ext(auVar14,auVar14,4,1);
    auVar20 = NEON_ext(auVar13,auVar13,4,1);
    fVar18 = SQRT(auVar37._0_4_ + auVar37._4_4_);
    fVar38 = fVar41 * fVar41 + fVar41 * fVar41;
    fVar39 = fStack_38 * fStack_38 + fStack_38 * fStack_38;
    fVar25 = SQRT(auVar20._0_4_ + auVar20._4_4_);
    fVar15 = SQRT(auVar16._0_4_ + auVar16._4_4_);
    auVar16 = NEON_ext(auVar21,auVar21,0xc,1);
    auVar27._4_12_ = auVar16._4_12_;
    auVar27._0_4_ = fVar40;
    auVar29._12_4_ = auVar16._12_4_;
    auVar29._0_8_ = auVar27._0_8_;
    auVar29._8_4_ = fVar41;
    auVar28._8_8_ = auVar29._8_8_;
    auVar28._4_4_ = auVar16._0_4_;
    auVar28._0_4_ = fVar40;
    auVar30._0_12_ = auVar28._0_12_;
    auVar30._12_4_ = auVar16._4_4_;
    auVar16 = NEON_ext(auVar30,auVar30,8,1);
    fVar15 = (float)((uint)fVar15 ^ ((uint)fVar15 ^ 0x2b8cbccc) & -(uint)(ABS(fVar15) < 1e-12));
    fVar19 = auVar16._0_4_ * fStack_38;
    fVar23 = auVar16._4_4_ * fStack_38;
    fVar24 = auVar16._8_4_ * fVar41;
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar31._0_4_ = auVar16._0_4_ - (fVar40 * fVar40 + fVar40 * fVar40);
    auVar31._4_4_ = auVar16._4_4_ - fVar38;
    auVar31._8_4_ = auVar16._8_4_ - fVar39;
    auVar31._12_4_ = auVar16._12_4_ - (fStack_34 * fStack_34 + fStack_34 * fStack_34);
    fVar19 = fVar19 + fVar19;
    fVar23 = fVar23 + fVar23;
    fVar24 = fVar24 + fVar24;
    auVar32._4_12_ = auVar31._4_12_;
    auVar32._0_4_ = auVar31._0_4_;
    auVar34._0_8_ = auVar32._0_8_;
    auVar34._8_4_ = auVar31._4_4_;
    auVar34._12_4_ = auVar31._12_4_;
    auVar33._8_8_ = auVar34._8_8_;
    auVar33._4_4_ = auVar31._0_4_;
    auVar33._0_4_ = auVar31._0_4_;
    auVar35._0_12_ = auVar33._0_12_;
    auVar35._12_4_ = auVar31._4_4_;
    auVar16 = NEON_ext(auVar35,auVar35,0xc,1);
    fVar40 = fVar40 * fStack_34 + fVar40 * fStack_34;
    fVar41 = fVar41 * fStack_34 + fVar41 * fStack_34;
    fVar42 = fStack_38 * fStack_34 + fStack_38 * fStack_34;
    fVar18 = (float)((uint)fVar18 ^ ((uint)fVar18 ^ 0x2b8cbccc) & -(uint)(ABS(fVar18) < 1e-12));
    fVar25 = (float)((uint)fVar25 ^ ((uint)fVar25 ^ 0x2b8cbccc) & -(uint)(ABS(fVar25) < 1e-12));
    auVar17._0_4_ = (auVar16._0_4_ - fVar39) * fVar15;
    auVar17._4_4_ = (fVar24 + fVar42) * fVar15;
    auVar17._8_4_ = (fVar23 - fVar41) * fVar15;
    auVar17._12_4_ = fVar15 * 0.0;
    auVar37._0_4_ = (fVar23 + fVar41) * fVar25;
    auVar37._4_4_ = (fVar19 - fVar40) * fVar25;
    auVar37._8_4_ = (auVar16._8_4_ - fVar38) * fVar25;
    auVar37._12_4_ = fVar25 * 0.0;
    auVar22._0_4_ = (fVar24 - fVar42) * fVar18;
    auVar22._4_4_ = (auVar16._4_4_ - fVar39) * fVar18;
    auVar22._8_4_ = (fVar19 + fVar40) * fVar18;
    auVar22._12_4_ = fVar18 * 0.0;
    auVar36._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar10 + 0x30),0);
    auVar36._12_4_ = 0x3f800000;
  }
  (**(code **)(*(long *)(lVar7 + 0x30) + 0x10))(auVar17,auVar22,auVar37,auVar36);
LAB_0213881c:
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x128));
  *(undefined8 *)(param_1 + 0x180) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x188));
  return;
}


