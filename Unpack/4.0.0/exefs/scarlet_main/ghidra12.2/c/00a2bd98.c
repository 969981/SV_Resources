/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a2bd98; name: FUN_00a2bd98
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a2bd98(long *param_1)

{
  long *plVar1;
  short *psVar2;
  undefined *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  char *pcVar16;
  int iVar17;
  int iVar18;
  long *plVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  undefined8 uVar23;
  long *plVar24;
  long *aplStack_3c0 [12];
  undefined8 local_360;
  char *pcStack_358;
  undefined8 local_350;
  long *local_348;
  code *local_340;
  code *local_338;
  undefined1 *local_330;
  undefined1 *local_328;
  undefined *apuStack_320 [13];
  char *local_2b8;
  char *local_2b0;
  undefined8 local_2a8;
  long *local_2a0;
  long *local_298;
  char *local_290;
  undefined *puStack_288;
  undefined8 local_280;
  long *local_278;
  undefined8 local_270;
  undefined *puStack_268;
  undefined8 local_260;
  long *local_258;
  undefined8 local_250;
  undefined *puStack_248;
  undefined8 local_240;
  long *local_238;
  undefined8 local_230;
  undefined *puStack_228;
  undefined8 local_220;
  long *local_218;
  undefined8 local_210;
  undefined *puStack_208;
  undefined8 local_200;
  long *local_1f8;
  undefined8 local_1f0;
  undefined *local_1e8;
  undefined8 local_1e0;
  long *local_1d8;
  long *local_1d0;
  code *local_1c8;
  code *local_1c0;
  long *local_1b8;
  long *local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  long *local_198;
  undefined8 local_190;
  undefined *local_188;
  undefined8 local_180;
  long *local_178;
  undefined8 local_170;
  undefined *local_168;
  undefined8 local_160;
  long *local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined8 local_140;
  long *local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined8 local_120;
  long *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long *local_f0;
  code *local_e8;
  code *local_e0;
  long *local_d8;
  long *local_d0 [14];
  
  FUN_012acb4c();
  local_108 = DAT_048351e0;
  uStack_100 = DAT_048351e8;
  local_f8 = DAT_048351f0;
  FUN_00a301c8(&local_108);
  if (((*PTR_DAT_047d8840 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_047d8840), iVar17 != 0)) {
    FUN_00100190(&LAB_00a2dd4c,PTR_DAT_047d8848,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8840);
  }
  lVar20 = *(long *)PTR_DAT_047d8848;
  *(long *)PTR_DAT_047d8850 = lVar20;
  local_1d0 = (long *)&LAB_01831778;
  local_1c8 = FUN_00a2dd50;
  local_1b8 = (long *)&LAB_00a2dd60;
  local_1c0 = FUN_00a2dd54;
  lVar20 = *(long *)(lVar20 + 0x28);
  pcVar21 = *(code **)(lVar20 + 0x268);
  local_1b0 = param_1;
  if (pcVar21 == (code *)0x0) {
LAB_00a2be6c:
    (*local_1c0)(&local_1b0,lVar20 + 0x280);
    *(long **)(lVar20 + 0x278) = local_1b8;
    *(undefined8 *)(lVar20 + 0x260) = local_1d0;
    *(code **)(lVar20 + 0x268) = local_1c8;
    *(code **)(lVar20 + 0x270) = local_1c0;
  }
  else {
    *(undefined8 *)(lVar20 + 0x270) = 0;
    *(undefined8 *)(lVar20 + 0x278) = 0;
    *(undefined8 *)(lVar20 + 0x260) = 0;
    *(undefined8 *)(lVar20 + 0x268) = 0;
    (*pcVar21)(lVar20 + 0x280);
    if (local_1c0 != (code *)0x0) goto LAB_00a2be6c;
  }
  pcVar21 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1b8 = (long *)0x0;
    local_1c0 = (code *)0x0;
    local_1c8 = (code *)0x0;
    local_1d0 = (long *)0x0;
    (*pcVar21)(&local_1b0);
  }
  FUN_017a9d84(param_1);
  nn::hid::InitializeTouchScreen();
  plVar1 = param_1 + 0x3e;
  FUN_01769f14(param_1[0x3e]);
  nn::oe::SetPerformanceConfiguration(0,0x20004);
  nn::oe::SetPerformanceConfiguration(1,0x10001);
  if (((*PTR_DAT_047d8858 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_047d8858), iVar17 != 0)) {
    FUN_00100190(&LAB_00a2dd6c,PTR_DAT_047d8860,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8858);
  }
  *(undefined8 *)PTR_DAT_047d8868 = *(undefined8 *)PTR_DAT_047d8860;
  FUN_01762ce0();
  FUN_0168de48();
  FUN_017782d4(*plVar1);
  if (((*PTR_DAT_047d6c20 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar17 != 0)) {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  uVar23 = *(undefined8 *)PTR_DAT_047d6c28;
  local_290 = "script/lua/bin/release/";
  *(undefined8 *)PTR_DAT_047d6c30 = uVar23;
  FUN_00e52f24(&local_1d0,&local_290);
  local_290 = &DAT_e4d07a996e5ef5e8;
  puStack_288 = &DAT_03c60f6f;
  local_280 = 4;
  local_278 = (long *)0x0;
  FUN_012069ac(uVar23,&local_1d0,&local_290);
  if (local_278 != (long *)0x0) {
    (**(code **)(*local_278 + 0x20))();
  }
  if (local_1b0 != (long *)0x0) {
    (**(code **)(*local_1b0 + 0x20))();
  }
  if (local_1d0 != (long *)0x0) {
    (**(code **)(*local_1d0 + 0x20))();
  }
  FUN_015aba50(*plVar1);
  FUN_015ae020(*plVar1);
  puVar13 = PTR_DAT_047d88a0;
  puVar12 = PTR_s_Strength_047d8898;
  puVar3 = PTR_s_NoiseScale_047d8890;
  puVar11 = PTR_s_Speed_047d8880;
  local_1c0 = (code *)0x1f;
  local_1b8 = (long *)0x0;
  local_1d0 = (long *)0x1f33679e2a63116b;
  local_1b0 = (long *)0x1f33679e2a63116b;
  local_1c8 = (code *)PTR_s_Ambient_047d8870;
  local_1a8 = PTR_s_Ambient_047d8878;
  local_1a0 = 0x1f;
  local_198 = (long *)0x0;
  local_190 = 0x2036f83774399ea;
  local_180 = 0x1f;
  local_178 = (long *)0x0;
  local_188 = PTR_s_Direction_047d8888;
  local_170 = 0x5925fa3a92333d80;
  local_168 = PTR_s_Speed_047d8880;
  local_160 = 0x1f;
  local_158 = (long *)0x0;
  local_150 = 0x9331808c8765e725;
  local_148 = PTR_s_NoiseScale_047d8890;
  local_140 = 0x1f;
  local_138 = (long *)0x0;
  local_130 = 0xc15508fa830cbd90;
  local_128 = PTR_s_Strength_047d8898;
  local_120 = 0x1f;
  local_118 = (long *)0x0;
  if (((*PTR_DAT_047d88a0 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_047d88a0), iVar17 != 0)) {
    FUN_00100190(&LAB_00a2dd04,PTR_DAT_047d88a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88a0);
  }
  puVar15 = PTR_DAT_047d88b0;
  puVar14 = PTR_DAT_047d88a8;
  lVar20 = *(long *)PTR_DAT_047d88a8;
  *(long *)PTR_DAT_047d88b0 = lVar20;
  FUN_00c41df8(*(undefined8 *)(lVar20 + 0x30),&local_1d0);
  local_290 = (char *)0xf29f7305d88d881b;
  puStack_288 = PTR_s_PointWind_047d88b8;
  local_280 = 0x1f;
  local_278 = (long *)0x0;
  local_260 = 0x1f;
  local_258 = (long *)0x0;
  local_250 = 0x5925fa3a92333d80;
  puStack_248 = puVar11;
  local_240 = 0x1f;
  local_238 = (long *)0x0;
  local_230 = 0x9331808c8765e725;
  puStack_228 = puVar3;
  local_270 = 0x8b622068af766820;
  puStack_268 = PTR_s_WindDistance_047d88c0;
  local_220 = 0x1f;
  local_218 = (long *)0x0;
  local_210 = 0xc15508fa830cbd90;
  puStack_208 = puVar12;
  local_200 = 0x1f;
  local_1f8 = (long *)0x0;
  local_1f0 = 0x10c3e168171871e4;
  local_1e8 = PTR_s_FadePower_047d88c8;
  local_1e0 = 0x1f;
  local_1d8 = (long *)0x0;
  if (((*puVar13 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_047d88a0), iVar17 != 0)) {
    FUN_00100190(&LAB_00a2dd04,PTR_DAT_047d88a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88a0);
  }
  lVar20 = *(long *)puVar14;
  *(long *)puVar15 = lVar20;
  FUN_017f9f58(*(undefined8 *)(lVar20 + 0x30),&local_290);
  if (((*puVar13 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_047d88a0), iVar17 != 0)) {
    FUN_00100190(&LAB_00a2dd04,PTR_DAT_047d88a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88a0);
  }
  lVar20 = *(long *)puVar14;
  *(long *)puVar15 = lVar20;
  FUN_012f8b44(*(undefined8 *)(lVar20 + 0x50),*plVar1,6);
  puVar11 = PTR_DAT_047d88d0;
  if (((*PTR_DAT_047d88d0 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar17 != 0)) {
    FUN_00100190(&LAB_00a2dd00,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  puVar12 = PTR_DAT_047d88e0;
  puVar3 = PTR_DAT_047d88d8;
  *(undefined8 *)PTR_DAT_047d88e0 = *(undefined8 *)PTR_DAT_047d88d8;
  FUN_018de2e0();
  if (((*puVar11 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar17 != 0)) {
    FUN_00100190(&LAB_00a2dd00,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  uVar23 = *(undefined8 *)puVar3;
  *(undefined8 *)puVar12 = uVar23;
  FUN_018e9808(uVar23,1);
  if (((*puVar11 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar17 != 0)) {
    FUN_00100190(&LAB_00a2dd00,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  uVar23 = *(undefined8 *)puVar3;
  *(undefined8 *)puVar12 = uVar23;
  FUN_0188bef4(uVar23,1);
  FUN_0177e9d4();
  FUN_02a2d8ec(*plVar1);
  FUN_01782210();
  FUN_0177ed3c();
  FUN_017fdcf0();
  if (((*PTR_DAT_047d88e8 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_047d88e8), iVar17 != 0)) {
    FUN_00100190(&LAB_00a2dd10,PTR_DAT_047d88f0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88e8);
  }
  lVar20 = *(long *)PTR_DAT_047d88f0;
  *(long *)PTR_DAT_047d88f8 = lVar20;
  lVar22 = *plVar1;
  *(long *)(lVar20 + 0x80) = lVar22;
  *(long *)(lVar20 + 0x88) = lVar22;
  FUN_01782580();
  FUN_017828f0();
  FUN_017ea700();
  FUN_01830ec4(*plVar1);
  FUN_01826a28(*plVar1);
  puVar11 = PTR_DAT_047d8900;
  if (((*PTR_DAT_047d8900 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_047d8900), iVar17 != 0)) {
    FUN_00100190(&LAB_00a2df04,PTR_DAT_047d8908,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8900);
  }
  puVar13 = PTR_DAT_047d8910;
  puVar12 = PTR_DAT_047d8908;
  *(undefined8 *)PTR_DAT_047d8910 = *(undefined8 *)PTR_DAT_047d8908;
  FUN_02112f54();
  puVar3 = PTR_DAT_047d84a8;
  if (((*PTR_DAT_047d84a8 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_047d84a8), iVar17 != 0)) {
    FUN_00100190(&LAB_00a2df08,PTR_DAT_047d84b0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d84a8);
  }
  puVar10 = PTR_DAT_047d84b8;
  puVar9 = PTR_DAT_047d84b0;
  *(undefined8 *)PTR_DAT_047d84b8 = *(undefined8 *)PTR_DAT_047d84b0;
  FUN_02113c60();
  FUN_0169d3f0();
  FUN_0178ca58(*plVar1);
  FUN_01825e8c(*plVar1);
  if (((*puVar11 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_047d8900), iVar17 != 0)) {
    FUN_00100190(&LAB_00a2df04,PTR_DAT_047d8908,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8900);
  }
  *(undefined8 *)puVar13 = *(undefined8 *)puVar12;
  FUN_019215e0();
  if (((*puVar3 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_047d84a8), iVar17 != 0)) {
    FUN_00100190(&LAB_00a2df08,PTR_DAT_047d84b0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d84a8);
  }
  *(undefined8 *)puVar10 = *(undefined8 *)puVar9;
  FUN_01924c38();
  FUN_01779628(*plVar1);
  FUN_016379e0(*plVar1);
  FUN_01576614();
  plVar24 = (long *)*plVar1;
  local_f0 = plVar24;
  plVar19 = (long *)FUN_01409590(&local_2b8,plVar24,&local_f0);
  if (plVar19 != (long *)0x0) {
    lVar20 = plVar19[6];
    if (*(long *)(lVar20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar20 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar23 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
      *(undefined8 *)(lVar20 + 8) = uVar23;
      *(undefined4 *)(lVar20 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  local_298 = plVar19;
  FUN_01a92a80(plVar24,&local_298);
  if (local_298 != (long *)0x0) {
    lVar20 = local_298[6];
    psVar2 = (short *)(lVar20 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar20 + 0x10) = 0;
      (**(code **)(*local_298 + 0x50))();
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_016a9e74(*plVar1);
  FUN_01dacea0();
  FUN_01792a18();
  iVar17 = DAT_048420a8;
  if (((*PTR_DAT_047d8280 & 1) == 0) &&
     (iVar18 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar18 != 0)) {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar20 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar20;
  if (iVar17 == 0x32) {
    local_2b8 = (char *)0x48b4a739dfe6f49a;
    local_2b0 = "SET_STATE_TITLE_ROMVER_A";
  }
  else {
    local_2b8 = (char *)0x48b4a639dfe6f2e7;
    local_2b0 = "SET_STATE_TITLE_ROMVER_B";
  }
  local_2a8 = 0x18;
  local_2a0 = (long *)0x0;
  if (*(long *)(lVar20 + 0x48) == 0) {
    uVar23 = 0xffffffffffffffff;
  }
  else {
    uVar23 = FUN_00cf8198();
  }
  pcVar16 = local_2b0;
  memset(&local_f0,0,0x80);
  plVar19 = *(long **)(*(long *)(lVar20 + 0x200) + 0x60);
  iVar17 = (**(code **)(*plVar19 + 0xd0))(plVar19,pcVar16,uVar23,1,&LAB_01080c70,lVar20,0,0,0);
  if ((iVar17 != 0) &&
     (FUN_0104f218(*(undefined8 *)(lVar20 + 0x220),&local_2b8,iVar17,uVar23,0,&local_f0,0),
     pcVar21 = local_e8, local_e8 != (code *)0x0)) {
    local_e0 = (code *)0x0;
    local_d8 = (long *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar21)(local_d0);
  }
  if (local_2a0 != (long *)0x0) {
    (**(code **)(*local_2a0 + 0x20))();
  }
  FUN_0181e7d4(*plVar1);
  FUN_01732450(*plVar1);
  FUN_0180356c(*plVar1);
  FUN_0185e160(*plVar1);
  FUN_01804818(*plVar1);
  FUN_02a30384(*plVar1);
  FUN_0177cae4(*plVar1);
  FUN_017dda10(*plVar1);
  FUN_017ec1d0(*plVar1);
  FUN_018a4704(*plVar1);
  local_f0 = (long *)*plVar1;
  FUN_017a89b0(local_f0,&local_f0);
  FUN_01728fc0(*plVar1);
  FUN_01801288(*plVar1);
  if (((*PTR_DAT_047d8918 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar17 != 0)) {
    FUN_00100190(&LAB_00a2df8c,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  apuStack_320[0] = PTR_FUN_047d8930;
  local_340 = FUN_00a2df90;
  local_338 = FUN_00a2df98;
  lVar20 = *(long *)PTR_DAT_047d8920;
  *(long *)PTR_DAT_047d8928 = lVar20;
  local_328 = &LAB_00a2dfa8;
  local_330 = &LAB_00a2df9c;
  FUN_012af424(lVar20 + 0x28,0xde);
  if (local_340 != (code *)0x0) {
    (*local_340)(apuStack_320);
  }
  pcVar21 = local_338;
  if (local_338 != (code *)0x0) {
    local_330 = (undefined1 *)0x0;
    local_328 = (undefined1 *)0x0;
    local_340 = (code *)0x0;
    local_338 = (code *)0x0;
    (*pcVar21)(apuStack_320);
  }
  FUN_0173c43c(*plVar1);
  FUN_01823948(*plVar1);
  FUN_014c7d1c(*plVar1);
  FUN_018cbef8(*plVar1);
  FUN_01699a4c(*plVar1);
  FUN_0121ace8(*plVar1);
  FUN_01858618(*plVar1);
  FUN_01875514(*plVar1);
  if (((*PTR_DAT_047d8938 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_047d8938), iVar17 != 0)) {
    FUN_00100190(&LAB_00a2dfb4,PTR_DAT_047d8940,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8938);
  }
  uVar23 = *(undefined8 *)PTR_DAT_047d8940;
  local_360 = 0xec4c32a758998312;
  pcStack_358 = "pokemon/catalog/catalog/poke_resource_table.trpmcatalog";
  local_350 = 0x37;
  local_348 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d8948 = uVar23;
  FUN_011554ac(uVar23,&local_360);
  puVar11 = PTR_DAT_047d88a0;
  if (local_348 != (long *)0x0) {
    (**(code **)(*local_348 + 0x20))();
  }
  FUN_01828a54(param_1[0x3e]);
  FUN_011fbc4c(param_1[0x3e]);
  *(long *)PTR_DAT_047d7b78 = param_1[0x3e];
  FUN_017e9f34();
  FUN_01dacf14(param_1);
  FUN_01778aa8(param_1[0x3e]);
  if (((*PTR_DAT_047d8950 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_047d8950), iVar17 != 0)) {
    FUN_00100190(&LAB_00a2e148,PTR_DAT_047d8958,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8950);
  }
  *(undefined8 *)PTR_DAT_047d8960 = *(undefined8 *)PTR_DAT_047d8958;
  FUN_00a393b0();
  FUN_0174b214(*plVar1);
  if (((*PTR_DAT_047d8968 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_047d8968), iVar17 != 0)) {
    FUN_00100190(&LAB_00a2e14c,PTR_DAT_047d8970,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8968);
  }
  *(undefined8 *)PTR_DAT_047d8978 = *(undefined8 *)PTR_DAT_047d8970;
  FUN_016b1f78();
  FUN_014741f0(*plVar1);
  FUN_00a395cc(*plVar1);
  FUN_018749f4(*plVar1);
  FUN_01766e5c(*plVar1);
  FUN_0180640c(*plVar1);
  if (((*puVar11 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_047d88a0), iVar17 != 0)) {
    FUN_00100190(&LAB_00a2dd04,PTR_DAT_047d88a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88a0);
  }
  uVar23 = *(undefined8 *)puVar14;
  local_2b8 = "effect/paint_surface/all/paint_surface_all.bntx";
  *(undefined8 *)puVar15 = uVar23;
  FUN_00e52f24(&local_f0,&local_2b8);
  FUN_02270708(uVar23,&local_f0);
  if (local_d0[0] != (long *)0x0) {
    (**(code **)(*local_d0[0] + 0x20))();
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x20))();
  }
  puVar11 = PTR_DAT_047d8980;
  *PTR_DAT_047d8980 = 1;
  *(undefined4 *)(puVar11 + 4) = 1;
  *(undefined8 *)(puVar11 + 8) = 0x41800000;
  *(undefined4 *)(puVar11 + 0x10) = 0xc0800000;
  FUN_017b4488(*plVar1);
  if (((*PTR_DAT_047d4df8 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar17 != 0)) {
    FUN_00100190(&LAB_00a2e334,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar22 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar22;
  uVar8 = _DAT_03cabd20;
  uVar7 = _UNK_03cab1b8;
  uVar23 = _DAT_03cab1b0;
  lVar20 = *(long *)(*(long *)(lVar22 + 0x38) + 0x40);
  *(undefined8 *)(lVar20 + 0x58) = _UNK_03cabd28;
  *(undefined8 *)(lVar20 + 0x50) = uVar8;
  *(undefined8 *)(lVar20 + 0x68) = uVar7;
  *(undefined8 *)(lVar20 + 0x60) = uVar23;
  *(undefined8 *)(lVar20 + 0x70) = 100;
  FUN_01738474(lVar20 + 0x78,10000);
  lVar20 = *(long *)(*(long *)(*(long *)(lVar22 + 0x38) + 0x48) + 0x150);
  *(undefined8 *)(lVar20 + 0x2c) = 0x43a0000043960000;
  *(undefined8 *)(lVar20 + 0x34) = 0x43b4000043aa0000;
  *(undefined1 *)(lVar20 + 0x40) = 0;
  FUN_0185fe8c(*plVar1);
  FUN_018c0a74(*plVar1);
  FUN_01811fe0(*plVar1);
  FUN_0186c4c0(*plVar1);
  if (((*PTR_DAT_047d4d78 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_047d4d78), iVar17 != 0)) {
    FUN_00100190(&LAB_00a2e338,PTR_DAT_047d4d80,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4d78);
  }
  *(undefined8 *)PTR_DAT_047d4d88 = *(undefined8 *)PTR_DAT_047d4d80;
  FUN_02bb7218(1);
  FUN_0180c260(&local_f0,param_1[0x3e]);
  plVar1 = local_f0;
  local_f0 = (long *)0x0;
  lVar20 = param_1[100];
  param_1[100] = (long)plVar1;
  if (lVar20 != 0) {
    FUN_01dad408(param_1 + 0x65);
  }
  param_1[0x66] = (long)local_e0;
  param_1[0x67] = (long)local_d8;
  param_1[0x65] = (long)local_e8;
  puVar11 = PTR_DAT_047d8988;
  local_f0 = (long *)&LAB_01db6f40;
  local_e8 = FUN_00a2e340;
  local_e0 = FUN_00a2e348;
  local_d8 = (long *)&LAB_00a2e34c;
  pcVar21 = *(code **)(PTR_DAT_047d8988 + 8);
  if (pcVar21 != (code *)0x0) {
    puVar3 = PTR_DAT_047d8988 + 0x20;
    *(undefined8 *)(PTR_DAT_047d8988 + 0x10) = 0;
    *(undefined8 *)(puVar11 + 0x18) = 0;
    *(undefined8 *)puVar11 = 0;
    *(undefined8 *)(puVar11 + 8) = 0;
    (*pcVar21)(puVar3);
    if (local_e0 == (code *)0x0) goto LAB_00a2c918;
  }
  (*local_e0)(local_d0,puVar11 + 0x20);
  *(long **)puVar11 = local_f0;
  *(code **)(puVar11 + 8) = local_e8;
  *(code **)(puVar11 + 0x10) = local_e0;
  *(long **)(puVar11 + 0x18) = local_d8;
LAB_00a2c918:
  pcVar21 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (long *)0x0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar21)(local_d0);
  }
  FUN_00a3043c();
  puVar11 = PTR_DAT_047d8990;
  pcVar21 = *(code **)(PTR_DAT_047d8990 + 8);
  aplStack_3c0[0] = param_1;
  if (pcVar21 != (code *)0x0) {
    puVar3 = PTR_DAT_047d8990 + 0x20;
    *(undefined8 *)(PTR_DAT_047d8990 + 0x10) = 0;
    *(undefined8 *)(puVar11 + 0x18) = 0;
    *(undefined8 *)puVar11 = 0;
    *(undefined8 *)(puVar11 + 8) = 0;
    (*pcVar21)(puVar3);
  }
  FUN_00a2e354(aplStack_3c0,puVar11 + 0x20);
  *(undefined1 **)puVar11 = &LAB_014094a4;
  *(code **)(puVar11 + 8) = FUN_00a2e350;
  *(code **)(puVar11 + 0x10) = FUN_00a2e354;
  *(undefined1 **)(puVar11 + 0x18) = &LAB_00a2e360;
  FUN_00a2e350(aplStack_3c0);
  local_f0 = *(long **)PTR_DAT_047d8998;
  local_e8 = *(code **)(PTR_DAT_047d8998 + 8);
  local_e0 = *(code **)(PTR_DAT_047d8998 + 0x10);
  local_d8 = (long *)0x0;
  FUN_00cce014(DAT_0485a0e0,&local_f0);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  FUN_02a3d700();
  FUN_02a3d824();
  if (local_1d8 != (long *)0x0) {
    (**(code **)(*local_1d8 + 0x20))();
  }
  if (local_1f8 != (long *)0x0) {
    (**(code **)(*local_1f8 + 0x20))();
  }
  if (local_218 != (long *)0x0) {
    (**(code **)(*local_218 + 0x20))();
  }
  if (local_238 != (long *)0x0) {
    (**(code **)(*local_238 + 0x20))();
  }
  if (local_258 != (long *)0x0) {
    (**(code **)(*local_258 + 0x20))();
  }
  if (local_278 != (long *)0x0) {
    (**(code **)(*local_278 + 0x20))();
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x20))();
  }
  if (local_138 != (long *)0x0) {
    (**(code **)(*local_138 + 0x20))();
  }
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  if (local_198 != (long *)0x0) {
    (**(code **)(*local_198 + 0x20))();
  }
  if (local_1b8 != (long *)0x0) {
    (**(code **)(*local_1b8 + 0x20))();
  }
  return;
}


