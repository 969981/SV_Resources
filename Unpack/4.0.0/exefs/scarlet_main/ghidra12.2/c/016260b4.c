/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016260b4; name: FUN_016260b4
 */


void FUN_016260b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  code *pcVar8;
  undefined8 *local_388;
  undefined1 *puStack_380;
  undefined8 *local_378;
  undefined8 local_370;
  char *pcStack_368;
  undefined8 local_360;
  long *local_358;
  undefined1 local_350;
  code *local_340;
  code *local_338;
  undefined1 *local_330;
  undefined1 *local_328;
  undefined8 **local_320;
  undefined1 *puStack_318;
  undefined1 ***local_310;
  undefined8 *puStack_308;
  undefined1 *local_300;
  undefined1 *local_2c0;
  code *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  undefined1 ***local_2a0;
  undefined8 *puStack_298;
  code *local_240;
  code *local_238;
  undefined1 *local_230;
  undefined1 *puStack_228;
  undefined1 **local_220 [12];
  undefined1 *local_1c0;
  code *local_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 **local_1a0 [12];
  undefined8 local_140;
  code *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 auStack_120 [96];
  undefined8 *local_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 *puStack_a8;
  undefined1 **local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  local_90 = auStack_70;
  local_a0 = &local_90;
  puStack_98 = auStack_80;
  local_c0 = &puStack_a8;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar1 = PTR_DAT_047d3e30;
  local_370 = *(undefined8 *)PTR_DAT_047d3e30;
  pcStack_368 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_360 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  local_358 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  plVar6 = local_358;
  if (local_358 != (long *)0x0) {
    (**(code **)(*local_358 + 0x18))();
    plVar6 = local_358;
  }
  local_350 = 1;
  local_128 = 0;
  local_130 = 0;
  local_138 = (code *)0x0;
  local_370 = 0x3c8a92e5206bee2f;
  pcStack_368 = "Title/PostEffect/RadialBlurEnable";
  local_140 = 0;
  local_340 = (code *)0x0;
  local_338 = (code *)0x0;
  local_330 = (undefined1 *)0x0;
  local_328 = (undefined1 *)0x0;
  local_2c0 = (undefined1 *)0x0;
  local_2b8 = (code *)0x0;
  local_2b0 = (undefined1 *)0x0;
  local_2a8 = (undefined1 *)0x0;
  local_240 = (code *)0x0;
  local_238 = (code *)0x0;
  local_230 = (undefined1 *)0x0;
  puStack_228 = (undefined1 *)0x0;
  local_1c0 = (undefined1 *)0x0;
  local_1b8 = (code *)0x0;
  local_1b0 = (undefined1 *)0x0;
  puStack_1a8 = (undefined1 *)0x0;
  local_360 = 0x21;
  local_358 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
    pcVar8 = local_338;
    local_358 = (long *)0x0;
    if (local_338 != (code *)0x0) {
      local_330 = (undefined1 *)0x0;
      local_328 = (undefined1 *)0x0;
      local_340 = (code *)0x0;
      local_338 = (code *)0x0;
      (*pcVar8)(&local_320);
      goto LAB_0162619c;
    }
  }
  local_358 = (long *)0x0;
LAB_0162619c:
  pcVar8 = local_2b8;
  local_340 = FUN_0212a158;
  local_338 = FUN_02b22bcc;
  local_330 = &LAB_02b22bd0;
  local_328 = &LAB_02b22bdc;
  pcVar7 = FUN_02b22bcc;
  local_320 = &local_c0;
  if (local_2b8 != (code *)0x0) {
    local_2b0 = (undefined1 *)0x0;
    local_2a8 = (undefined1 *)0x0;
    local_2c0 = (undefined1 *)0x0;
    local_2b8 = (code *)0x0;
    (*pcVar8)(&local_2a0);
    pcVar7 = local_338;
  }
  local_2c0 = &LAB_01288c4c;
  local_2b8 = FUN_02b22be8;
  local_2b0 = &LAB_02b22bec;
  local_2a8 = &LAB_02b22bf8;
  local_2a0 = (undefined1 ***)&local_c0;
  if (pcVar7 != (code *)0x0) {
    local_330 = (undefined1 *)0x0;
    local_328 = (undefined1 *)0x0;
    local_340 = (code *)0x0;
    local_338 = (code *)0x0;
    (*pcVar7)(&local_320);
  }
  local_340 = (code *)&LAB_0212a2b8;
  local_338 = FUN_02b22c04;
  local_330 = &LAB_02b22c08;
  local_328 = &LAB_02b22c14;
  local_320 = &local_c0;
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  puVar3 = PTR_DAT_047d8928;
  puVar2 = PTR_DAT_047d8920;
  uVar5 = *(undefined8 *)PTR_DAT_047d8920;
  *(undefined8 *)PTR_DAT_047d8928 = uVar5;
  FUN_0162f274(uVar5,&local_370);
  pcVar8 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = 0;
    local_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    (*pcVar8)(auStack_120);
  }
  pcVar8 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (undefined1 *)0x0;
    puStack_1a8 = (undefined1 *)0x0;
    local_1c0 = (undefined1 *)0x0;
    local_1b8 = (code *)0x0;
    (*pcVar8)(local_1a0);
  }
  pcVar8 = local_238;
  if (local_238 != (code *)0x0) {
    local_230 = (undefined1 *)0x0;
    puStack_228 = (undefined1 *)0x0;
    local_240 = (code *)0x0;
    local_238 = (code *)0x0;
    (*pcVar8)(local_220);
  }
  pcVar8 = local_2b8;
  if (local_2b8 != (code *)0x0) {
    local_2b0 = (undefined1 *)0x0;
    local_2a8 = (undefined1 *)0x0;
    local_2c0 = (undefined1 *)0x0;
    local_2b8 = (code *)0x0;
    (*pcVar8)(&local_2a0);
  }
  pcVar8 = local_338;
  if (local_338 != (code *)0x0) {
    local_330 = (undefined1 *)0x0;
    local_328 = (undefined1 *)0x0;
    local_340 = (code *)0x0;
    local_338 = (code *)0x0;
    (*pcVar8)(&local_320);
  }
  if (local_358 != (long *)0x0) {
    (**(code **)(*local_358 + 0x20))();
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_370 = *(undefined8 *)puVar1;
  pcStack_368 = *(char **)(puVar1 + 8);
  local_360 = *(undefined8 *)(puVar1 + 0x10);
  local_358 = *(long **)(puVar1 + 0x18);
  plVar6 = local_358;
  if (local_358 != (long *)0x0) {
    (**(code **)(*local_358 + 0x18))();
    plVar6 = local_358;
  }
  local_350 = 1;
  local_128 = 0;
  local_370 = 0xe9b9c189b953ec41;
  pcStack_368 = "Title/PostEffect/RadialBlurParam";
  local_130 = 0;
  local_340 = (code *)0x0;
  local_338 = (code *)0x0;
  local_138 = (code *)0x0;
  local_140 = 0;
  local_330 = (undefined1 *)0x0;
  local_328 = (undefined1 *)0x0;
  local_2c0 = (undefined1 *)0x0;
  local_2b8 = (code *)0x0;
  local_2b0 = (undefined1 *)0x0;
  local_2a8 = (undefined1 *)0x0;
  local_240 = (code *)0x0;
  local_238 = (code *)0x0;
  local_230 = (undefined1 *)0x0;
  puStack_228 = (undefined1 *)0x0;
  local_1c0 = (undefined1 *)0x0;
  local_1b8 = (code *)0x0;
  local_1b0 = (undefined1 *)0x0;
  puStack_1a8 = (undefined1 *)0x0;
  local_360 = 0x20;
  local_358 = (long *)0x0;
  pcVar8 = (code *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
    pcVar8 = local_338;
  }
  local_358 = (long *)0x0;
  local_388 = &puStack_a8;
  puStack_380 = auStack_78;
  if (pcVar8 != (code *)0x0) {
    local_330 = (undefined1 *)0x0;
    local_328 = (undefined1 *)0x0;
    local_340 = (code *)0x0;
    local_338 = (code *)0x0;
    (*pcVar8)(&local_320);
  }
  pcVar8 = local_2b8;
  local_320 = &local_388;
  puStack_318 = auStack_b0;
  local_340 = (code *)&LAB_0172301c;
  local_338 = FUN_02b22c20;
  local_330 = &LAB_02b22c28;
  local_328 = &LAB_02b22c3c;
  local_310 = (undefined1 ***)&puStack_a8;
  puStack_308 = (undefined8 *)auStack_b8;
  local_300 = auStack_78;
  if (local_2b8 != (code *)0x0) {
    local_2b0 = (undefined1 *)0x0;
    local_2a8 = (undefined1 *)0x0;
    local_2c0 = (undefined1 *)0x0;
    local_2b8 = (code *)0x0;
    (*pcVar8)(&local_2a0);
  }
  pcVar8 = local_238;
  local_2a0 = (undefined1 ***)&puStack_a8;
  local_2c0 = &LAB_013293c0;
  local_2b8 = FUN_02b22c50;
  local_2b0 = &LAB_02b22c54;
  local_2a8 = &LAB_02b22c60;
  puStack_298 = (undefined8 *)auStack_b8;
  if (local_238 != (code *)0x0) {
    local_230 = (undefined1 *)0x0;
    puStack_228 = (undefined1 *)0x0;
    local_240 = (code *)0x0;
    local_238 = (code *)0x0;
    (*pcVar8)(local_220);
  }
  local_220[0] = (undefined1 **)&local_388;
  local_240 = FUN_015763ac;
  local_238 = FUN_02b22c6c;
  local_230 = &LAB_02b22c70;
  puStack_228 = &LAB_02b22c7c;
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar5 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar5;
  FUN_0162f274(uVar5,&local_370);
  pcVar8 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = 0;
    local_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    (*pcVar8)(auStack_120);
  }
  pcVar8 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (undefined1 *)0x0;
    puStack_1a8 = (undefined1 *)0x0;
    local_1c0 = (undefined1 *)0x0;
    local_1b8 = (code *)0x0;
    (*pcVar8)(local_1a0);
  }
  pcVar8 = local_238;
  if (local_238 != (code *)0x0) {
    local_230 = (undefined1 *)0x0;
    puStack_228 = (undefined1 *)0x0;
    local_240 = (code *)0x0;
    local_238 = (code *)0x0;
    (*pcVar8)(local_220);
  }
  pcVar8 = local_2b8;
  if (local_2b8 != (code *)0x0) {
    local_2b0 = (undefined1 *)0x0;
    local_2a8 = (undefined1 *)0x0;
    local_2c0 = (undefined1 *)0x0;
    local_2b8 = (code *)0x0;
    (*pcVar8)(&local_2a0);
  }
  pcVar8 = local_338;
  if (local_338 != (code *)0x0) {
    local_330 = (undefined1 *)0x0;
    local_328 = (undefined1 *)0x0;
    local_340 = (code *)0x0;
    local_338 = (code *)0x0;
    (*pcVar8)(&local_320);
  }
  if (local_358 != (long *)0x0) {
    (**(code **)(*local_358 + 0x20))();
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_370 = *(undefined8 *)puVar1;
  pcStack_368 = *(char **)(puVar1 + 8);
  local_360 = *(undefined8 *)(puVar1 + 0x10);
  local_358 = *(long **)(puVar1 + 0x18);
  plVar6 = local_358;
  if (local_358 != (long *)0x0) {
    (**(code **)(*local_358 + 0x18))();
    plVar6 = local_358;
  }
  local_350 = 1;
  local_128 = 0;
  local_130 = 0;
  local_138 = (code *)0x0;
  local_370 = 0x8c1e8533e82f5dfa;
  pcStack_368 = "Title/PostEffect/ChromaticAberationEnable";
  local_140 = 0;
  local_340 = (code *)0x0;
  local_338 = (code *)0x0;
  local_330 = (undefined1 *)0x0;
  local_328 = (undefined1 *)0x0;
  local_2c0 = (undefined1 *)0x0;
  local_2b8 = (code *)0x0;
  local_2b0 = (undefined1 *)0x0;
  local_2a8 = (undefined1 *)0x0;
  local_240 = (code *)0x0;
  local_238 = (code *)0x0;
  local_230 = (undefined1 *)0x0;
  puStack_228 = (undefined1 *)0x0;
  local_1c0 = (undefined1 *)0x0;
  local_1b8 = (code *)0x0;
  local_1b0 = (undefined1 *)0x0;
  puStack_1a8 = (undefined1 *)0x0;
  local_360 = 0x29;
  local_358 = (long *)0x0;
  if (plVar6 == (long *)0x0) {
    local_358 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0x20))();
    pcVar8 = local_338;
    local_358 = (long *)0x0;
    if (local_338 != (code *)0x0) {
      local_330 = (undefined1 *)0x0;
      local_328 = (undefined1 *)0x0;
      local_340 = (code *)0x0;
      local_338 = (code *)0x0;
      (*pcVar8)(&local_320);
    }
  }
  pcVar8 = local_2b8;
  local_340 = (code *)&LAB_0212a4f8;
  local_338 = FUN_02b22c88;
  local_330 = &LAB_02b22c8c;
  local_328 = &LAB_02b22c98;
  pcVar7 = FUN_02b22c88;
  local_320 = &local_c0;
  if (local_2b8 != (code *)0x0) {
    local_2b0 = (undefined1 *)0x0;
    local_2a8 = (undefined1 *)0x0;
    local_2c0 = (undefined1 *)0x0;
    local_2b8 = (code *)0x0;
    (*pcVar8)(&local_2a0);
    pcVar7 = local_338;
  }
  local_2c0 = &LAB_0212a658;
  local_2b8 = FUN_02b22ca4;
  local_2b0 = &LAB_02b22ca8;
  local_2a8 = &LAB_02b22cb4;
  local_2a0 = (undefined1 ***)&local_c0;
  if (pcVar7 != (code *)0x0) {
    local_330 = (undefined1 *)0x0;
    local_328 = (undefined1 *)0x0;
    local_340 = (code *)0x0;
    local_338 = (code *)0x0;
    (*pcVar7)(&local_320);
  }
  local_340 = (code *)&LAB_0212a7b8;
  local_338 = FUN_02b22cc0;
  local_330 = &LAB_02b22cc4;
  local_328 = &LAB_02b22cd0;
  local_320 = &local_c0;
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar5 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar5;
  FUN_0162f274(uVar5,&local_370);
  pcVar8 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = 0;
    local_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    (*pcVar8)(auStack_120);
  }
  pcVar8 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (undefined1 *)0x0;
    puStack_1a8 = (undefined1 *)0x0;
    local_1c0 = (undefined1 *)0x0;
    local_1b8 = (code *)0x0;
    (*pcVar8)(local_1a0);
  }
  pcVar8 = local_238;
  if (local_238 != (code *)0x0) {
    local_230 = (undefined1 *)0x0;
    puStack_228 = (undefined1 *)0x0;
    local_240 = (code *)0x0;
    local_238 = (code *)0x0;
    (*pcVar8)(local_220);
  }
  pcVar8 = local_2b8;
  if (local_2b8 != (code *)0x0) {
    local_2b0 = (undefined1 *)0x0;
    local_2a8 = (undefined1 *)0x0;
    local_2c0 = (undefined1 *)0x0;
    local_2b8 = (code *)0x0;
    (*pcVar8)(&local_2a0);
  }
  pcVar8 = local_338;
  if (local_338 != (code *)0x0) {
    local_330 = (undefined1 *)0x0;
    local_328 = (undefined1 *)0x0;
    local_340 = (code *)0x0;
    local_338 = (code *)0x0;
    (*pcVar8)(&local_320);
  }
  if (local_358 != (long *)0x0) {
    (**(code **)(*local_358 + 0x20))();
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_370 = *(undefined8 *)puVar1;
  pcStack_368 = *(char **)(puVar1 + 8);
  local_360 = *(undefined8 *)(puVar1 + 0x10);
  local_358 = *(long **)(puVar1 + 0x18);
  plVar6 = local_358;
  if (local_358 != (long *)0x0) {
    (**(code **)(*local_358 + 0x18))();
    plVar6 = local_358;
  }
  local_350 = 1;
  local_128 = 0;
  local_370 = 0x3be7e8c22396fbae;
  pcStack_368 = "Title/PostEffect/ChromaticAberationParam";
  local_130 = 0;
  local_340 = (code *)0x0;
  local_338 = (code *)0x0;
  local_138 = (code *)0x0;
  local_140 = 0;
  local_330 = (undefined1 *)0x0;
  local_328 = (undefined1 *)0x0;
  local_2c0 = (undefined1 *)0x0;
  local_2b8 = (code *)0x0;
  local_2b0 = (undefined1 *)0x0;
  local_2a8 = (undefined1 *)0x0;
  local_240 = (code *)0x0;
  local_238 = (code *)0x0;
  local_230 = (undefined1 *)0x0;
  puStack_228 = (undefined1 *)0x0;
  local_1c0 = (undefined1 *)0x0;
  local_1b8 = (code *)0x0;
  local_1b0 = (undefined1 *)0x0;
  puStack_1a8 = (undefined1 *)0x0;
  local_360 = 0x28;
  local_358 = (long *)0x0;
  pcVar8 = (code *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
    pcVar8 = local_338;
  }
  local_388 = &puStack_a8;
  local_358 = (long *)0x0;
  if (pcVar8 != (code *)0x0) {
    local_330 = (undefined1 *)0x0;
    local_328 = (undefined1 *)0x0;
    local_340 = (code *)0x0;
    local_338 = (code *)0x0;
    (*pcVar8)(&local_320);
  }
  pcVar8 = local_2b8;
  local_320 = &local_388;
  puStack_318 = auStack_b0;
  local_340 = (code *)&LAB_016c9018;
  local_338 = FUN_02b22cdc;
  local_330 = &LAB_02b22ce0;
  local_328 = &LAB_02b22cec;
  if (local_2b8 != (code *)0x0) {
    local_2b0 = (undefined1 *)0x0;
    local_2a8 = (undefined1 *)0x0;
    local_2c0 = (undefined1 *)0x0;
    local_2b8 = (code *)0x0;
    (*pcVar8)(&local_2a0);
  }
  pcVar8 = local_238;
  local_2a0 = (undefined1 ***)&puStack_a8;
  puStack_298 = (undefined8 *)auStack_b8;
  local_2c0 = &LAB_01441794;
  local_2b8 = FUN_02b22cf8;
  local_2b0 = &LAB_02b22cfc;
  local_2a8 = &LAB_02b22d08;
  if (local_238 != (code *)0x0) {
    local_230 = (undefined1 *)0x0;
    puStack_228 = (undefined1 *)0x0;
    local_240 = (code *)0x0;
    local_238 = (code *)0x0;
    (*pcVar8)(local_220);
  }
  local_220[0] = (undefined1 **)&local_388;
  local_240 = (code *)&LAB_016fcf1c;
  local_238 = FUN_02b22d14;
  local_230 = &LAB_02b22d18;
  puStack_228 = &LAB_02b22d24;
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar5 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar5;
  FUN_0162f274(uVar5,&local_370);
  pcVar8 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = 0;
    local_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    (*pcVar8)(auStack_120);
  }
  pcVar8 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (undefined1 *)0x0;
    puStack_1a8 = (undefined1 *)0x0;
    local_1c0 = (undefined1 *)0x0;
    local_1b8 = (code *)0x0;
    (*pcVar8)(local_1a0);
  }
  pcVar8 = local_238;
  if (local_238 != (code *)0x0) {
    local_230 = (undefined1 *)0x0;
    puStack_228 = (undefined1 *)0x0;
    local_240 = (code *)0x0;
    local_238 = (code *)0x0;
    (*pcVar8)(local_220);
  }
  pcVar8 = local_2b8;
  if (local_2b8 != (code *)0x0) {
    local_2b0 = (undefined1 *)0x0;
    local_2a8 = (undefined1 *)0x0;
    local_2c0 = (undefined1 *)0x0;
    local_2b8 = (code *)0x0;
    (*pcVar8)(&local_2a0);
  }
  pcVar8 = local_338;
  if (local_338 != (code *)0x0) {
    local_330 = (undefined1 *)0x0;
    local_328 = (undefined1 *)0x0;
    local_340 = (code *)0x0;
    local_338 = (code *)0x0;
    (*pcVar8)(&local_320);
  }
  if (local_358 != (long *)0x0) {
    (**(code **)(*local_358 + 0x20))();
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_370 = *(undefined8 *)puVar1;
  pcStack_368 = *(char **)(puVar1 + 8);
  local_360 = *(undefined8 *)(puVar1 + 0x10);
  local_358 = *(long **)(puVar1 + 0x18);
  plVar6 = local_358;
  if (local_358 != (long *)0x0) {
    (**(code **)(*local_358 + 0x18))();
    plVar6 = local_358;
  }
  local_350 = 1;
  local_128 = 0;
  local_130 = 0;
  local_138 = (code *)0x0;
  local_370 = 0x4a6fad965dc1034f;
  pcStack_368 = "Title/PostEffect/FeedbackBlurEnable";
  local_140 = 0;
  local_340 = (code *)0x0;
  local_338 = (code *)0x0;
  local_330 = (undefined1 *)0x0;
  local_328 = (undefined1 *)0x0;
  local_2c0 = (undefined1 *)0x0;
  local_2b8 = (code *)0x0;
  local_2b0 = (undefined1 *)0x0;
  local_2a8 = (undefined1 *)0x0;
  local_240 = (code *)0x0;
  local_238 = (code *)0x0;
  local_230 = (undefined1 *)0x0;
  puStack_228 = (undefined1 *)0x0;
  local_1c0 = (undefined1 *)0x0;
  local_1b8 = (code *)0x0;
  local_1b0 = (undefined1 *)0x0;
  puStack_1a8 = (undefined1 *)0x0;
  local_360 = 0x23;
  local_358 = (long *)0x0;
  if (plVar6 == (long *)0x0) {
    local_358 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0x20))();
    pcVar8 = local_338;
    local_358 = (long *)0x0;
    if (local_338 != (code *)0x0) {
      local_330 = (undefined1 *)0x0;
      local_328 = (undefined1 *)0x0;
      local_340 = (code *)0x0;
      local_338 = (code *)0x0;
      (*pcVar8)(&local_320);
    }
  }
  pcVar8 = local_2b8;
  local_340 = (code *)&LAB_0212a918;
  local_338 = FUN_02b22d30;
  local_330 = &LAB_02b22ee8;
  local_328 = &LAB_02b22ef4;
  pcVar7 = FUN_02b22d30;
  local_320 = &local_c0;
  if (local_2b8 != (code *)0x0) {
    local_2b0 = (undefined1 *)0x0;
    local_2a8 = (undefined1 *)0x0;
    local_2c0 = (undefined1 *)0x0;
    local_2b8 = (code *)0x0;
    (*pcVar8)(&local_2a0);
    pcVar7 = local_338;
  }
  local_2c0 = &LAB_016fc320;
  local_2b8 = FUN_02b22f00;
  local_2b0 = &LAB_02b22f04;
  local_2a8 = &LAB_02b22f10;
  local_2a0 = (undefined1 ***)&local_c0;
  if (pcVar7 != (code *)0x0) {
    local_330 = (undefined1 *)0x0;
    local_328 = (undefined1 *)0x0;
    local_340 = (code *)0x0;
    local_338 = (code *)0x0;
    (*pcVar7)(&local_320);
  }
  local_340 = (code *)&LAB_0212a9a0;
  local_338 = FUN_02b22f1c;
  local_330 = &LAB_02b22f20;
  local_328 = &LAB_02b22f2c;
  local_320 = &local_c0;
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar5 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar5;
  FUN_0162f274(uVar5,&local_370);
  pcVar8 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = 0;
    local_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    (*pcVar8)(auStack_120);
  }
  pcVar8 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (undefined1 *)0x0;
    puStack_1a8 = (undefined1 *)0x0;
    local_1c0 = (undefined1 *)0x0;
    local_1b8 = (code *)0x0;
    (*pcVar8)(local_1a0);
  }
  pcVar8 = local_238;
  if (local_238 != (code *)0x0) {
    local_230 = (undefined1 *)0x0;
    puStack_228 = (undefined1 *)0x0;
    local_240 = (code *)0x0;
    local_238 = (code *)0x0;
    (*pcVar8)(local_220);
  }
  pcVar8 = local_2b8;
  if (local_2b8 != (code *)0x0) {
    local_2b0 = (undefined1 *)0x0;
    local_2a8 = (undefined1 *)0x0;
    local_2c0 = (undefined1 *)0x0;
    local_2b8 = (code *)0x0;
    (*pcVar8)(&local_2a0);
  }
  pcVar8 = local_338;
  if (local_338 != (code *)0x0) {
    local_330 = (undefined1 *)0x0;
    local_328 = (undefined1 *)0x0;
    local_340 = (code *)0x0;
    local_338 = (code *)0x0;
    (*pcVar8)(&local_320);
  }
  if (local_358 != (long *)0x0) {
    (**(code **)(*local_358 + 0x20))();
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_370 = *(undefined8 *)puVar1;
  pcStack_368 = *(char **)(puVar1 + 8);
  local_360 = *(undefined8 *)(puVar1 + 0x10);
  local_358 = *(long **)(puVar1 + 0x18);
  plVar6 = local_358;
  if (local_358 != (long *)0x0) {
    (**(code **)(*local_358 + 0x18))();
    plVar6 = local_358;
  }
  local_350 = 1;
  local_128 = 0;
  local_370 = 0xf754047ccb3f5ce1;
  pcStack_368 = "Title/PostEffect/FeedbackBlurParam";
  local_130 = 0;
  local_340 = (code *)0x0;
  local_338 = (code *)0x0;
  local_138 = (code *)0x0;
  local_140 = 0;
  local_330 = (undefined1 *)0x0;
  local_328 = (undefined1 *)0x0;
  local_2c0 = (undefined1 *)0x0;
  local_2b8 = (code *)0x0;
  local_2b0 = (undefined1 *)0x0;
  local_2a8 = (undefined1 *)0x0;
  local_240 = (code *)0x0;
  local_238 = (code *)0x0;
  local_230 = (undefined1 *)0x0;
  puStack_228 = (undefined1 *)0x0;
  local_1c0 = (undefined1 *)0x0;
  local_1b8 = (code *)0x0;
  local_1b0 = (undefined1 *)0x0;
  puStack_1a8 = (undefined1 *)0x0;
  local_360 = 0x22;
  local_358 = (long *)0x0;
  pcVar8 = (code *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
    pcVar8 = local_338;
  }
  local_388 = &puStack_a8;
  local_358 = (long *)0x0;
  if (pcVar8 != (code *)0x0) {
    local_330 = (undefined1 *)0x0;
    local_328 = (undefined1 *)0x0;
    local_340 = (code *)0x0;
    local_338 = (code *)0x0;
    (*pcVar8)(&local_320);
  }
  pcVar8 = local_2b8;
  local_320 = &local_388;
  puStack_318 = auStack_b0;
  local_340 = (code *)&LAB_0193c330;
  local_338 = FUN_02b22f38;
  local_330 = &LAB_02b22f3c;
  local_328 = &LAB_02b22f48;
  if (local_2b8 != (code *)0x0) {
    local_2b0 = (undefined1 *)0x0;
    local_2a8 = (undefined1 *)0x0;
    local_2c0 = (undefined1 *)0x0;
    local_2b8 = (code *)0x0;
    (*pcVar8)(&local_2a0);
  }
  pcVar8 = local_238;
  local_2a0 = (undefined1 ***)&puStack_a8;
  puStack_298 = (undefined8 *)auStack_b8;
  local_2c0 = &LAB_0212aa28;
  local_2b8 = FUN_02b22f54;
  local_2b0 = &LAB_02b22f58;
  local_2a8 = &LAB_02b22f64;
  if (local_238 != (code *)0x0) {
    local_230 = (undefined1 *)0x0;
    puStack_228 = (undefined1 *)0x0;
    local_240 = (code *)0x0;
    local_238 = (code *)0x0;
    (*pcVar8)(local_220);
  }
  local_220[0] = (undefined1 **)&local_388;
  local_240 = FUN_01921d58;
  local_238 = FUN_02b22f70;
  local_230 = &LAB_02b22f74;
  puStack_228 = &LAB_02b22f80;
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar5 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar5;
  FUN_0162f274(uVar5,&local_370);
  pcVar8 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = 0;
    local_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    (*pcVar8)(auStack_120);
  }
  pcVar8 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (undefined1 *)0x0;
    puStack_1a8 = (undefined1 *)0x0;
    local_1c0 = (undefined1 *)0x0;
    local_1b8 = (code *)0x0;
    (*pcVar8)(local_1a0);
  }
  pcVar8 = local_238;
  if (local_238 != (code *)0x0) {
    local_230 = (undefined1 *)0x0;
    puStack_228 = (undefined1 *)0x0;
    local_240 = (code *)0x0;
    local_238 = (code *)0x0;
    (*pcVar8)(local_220);
  }
  pcVar8 = local_2b8;
  if (local_2b8 != (code *)0x0) {
    local_2b0 = (undefined1 *)0x0;
    local_2a8 = (undefined1 *)0x0;
    local_2c0 = (undefined1 *)0x0;
    local_2b8 = (code *)0x0;
    (*pcVar8)(&local_2a0);
  }
  pcVar8 = local_338;
  if (local_338 != (code *)0x0) {
    local_330 = (undefined1 *)0x0;
    local_328 = (undefined1 *)0x0;
    local_340 = (code *)0x0;
    local_338 = (code *)0x0;
    (*pcVar8)(&local_320);
  }
  if (local_358 != (long *)0x0) {
    (**(code **)(*local_358 + 0x20))();
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_370 = *(undefined8 *)puVar1;
  pcStack_368 = *(char **)(puVar1 + 8);
  local_360 = *(undefined8 *)(puVar1 + 0x10);
  local_358 = *(long **)(puVar1 + 0x18);
  plVar6 = local_358;
  if (local_358 != (long *)0x0) {
    (**(code **)(*local_358 + 0x18))();
    plVar6 = local_358;
  }
  local_350 = 1;
  local_128 = 0;
  local_370 = 0xa520fcc4f16215a8;
  pcStack_368 = "Title/PostEffect/ScreenBlurParam";
  local_130 = 0;
  local_340 = (code *)0x0;
  local_338 = (code *)0x0;
  local_138 = (code *)0x0;
  local_140 = 0;
  local_330 = (undefined1 *)0x0;
  local_328 = (undefined1 *)0x0;
  local_2c0 = (undefined1 *)0x0;
  local_2b8 = (code *)0x0;
  local_2b0 = (undefined1 *)0x0;
  local_2a8 = (undefined1 *)0x0;
  local_240 = (code *)0x0;
  local_238 = (code *)0x0;
  local_230 = (undefined1 *)0x0;
  puStack_228 = (undefined1 *)0x0;
  local_1c0 = (undefined1 *)0x0;
  local_1b8 = (code *)0x0;
  local_1b0 = (undefined1 *)0x0;
  puStack_1a8 = (undefined1 *)0x0;
  local_360 = 0x20;
  local_358 = (long *)0x0;
  pcVar8 = (code *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
    pcVar8 = local_338;
  }
  local_388 = &puStack_a8;
  local_358 = (long *)0x0;
  if (pcVar8 != (code *)0x0) {
    local_330 = (undefined1 *)0x0;
    local_328 = (undefined1 *)0x0;
    local_340 = (code *)0x0;
    local_338 = (code *)0x0;
    (*pcVar8)(&local_320);
  }
  pcVar8 = local_2b8;
  local_320 = &local_388;
  puStack_318 = auStack_b0;
  local_340 = FUN_01860ec8;
  local_338 = FUN_02b22f8c;
  local_330 = &LAB_02b22f90;
  local_328 = &LAB_02b22f9c;
  if (local_2b8 != (code *)0x0) {
    local_2b0 = (undefined1 *)0x0;
    local_2a8 = (undefined1 *)0x0;
    local_2c0 = (undefined1 *)0x0;
    local_2b8 = (code *)0x0;
    (*pcVar8)(&local_2a0);
  }
  pcVar8 = local_238;
  local_2a0 = (undefined1 ***)&puStack_a8;
  puStack_298 = (undefined8 *)auStack_b8;
  local_2c0 = &LAB_0117c0d0;
  local_2b8 = FUN_02b22fa8;
  local_2b0 = &LAB_02b22fac;
  local_2a8 = &LAB_02b22fb8;
  if (local_238 != (code *)0x0) {
    local_230 = (undefined1 *)0x0;
    puStack_228 = (undefined1 *)0x0;
    local_240 = (code *)0x0;
    local_238 = (code *)0x0;
    (*pcVar8)(local_220);
  }
  local_220[0] = (undefined1 **)&local_388;
  local_240 = (code *)&LAB_0212ab7c;
  local_238 = FUN_02b22fc4;
  local_230 = &LAB_02b22fc8;
  puStack_228 = &LAB_02b22fd4;
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar5 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar5;
  FUN_0162f274(uVar5,&local_370);
  pcVar8 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = 0;
    local_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    (*pcVar8)(auStack_120);
  }
  pcVar8 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (undefined1 *)0x0;
    puStack_1a8 = (undefined1 *)0x0;
    local_1c0 = (undefined1 *)0x0;
    local_1b8 = (code *)0x0;
    (*pcVar8)(local_1a0);
  }
  pcVar8 = local_238;
  if (local_238 != (code *)0x0) {
    local_230 = (undefined1 *)0x0;
    puStack_228 = (undefined1 *)0x0;
    local_240 = (code *)0x0;
    local_238 = (code *)0x0;
    (*pcVar8)(local_220);
  }
  pcVar8 = local_2b8;
  if (local_2b8 != (code *)0x0) {
    local_2b0 = (undefined1 *)0x0;
    local_2a8 = (undefined1 *)0x0;
    local_2c0 = (undefined1 *)0x0;
    local_2b8 = (code *)0x0;
    (*pcVar8)(&local_2a0);
  }
  pcVar8 = local_338;
  if (local_338 != (code *)0x0) {
    local_330 = (undefined1 *)0x0;
    local_328 = (undefined1 *)0x0;
    local_340 = (code *)0x0;
    local_338 = (code *)0x0;
    (*pcVar8)(&local_320);
  }
  if (local_358 != (long *)0x0) {
    (**(code **)(*local_358 + 0x20))();
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_370 = *(undefined8 *)puVar1;
  pcStack_368 = *(char **)(puVar1 + 8);
  local_360 = *(undefined8 *)(puVar1 + 0x10);
  local_358 = *(long **)(puVar1 + 0x18);
  plVar6 = local_358;
  if (local_358 != (long *)0x0) {
    (**(code **)(*local_358 + 0x18))();
    plVar6 = local_358;
  }
  local_350 = 1;
  local_128 = 0;
  local_370 = 0x3da0e5da825a0b32;
  pcStack_368 = "Title/PostEffect/FieldColorParam";
  local_130 = 0;
  local_340 = (code *)0x0;
  local_338 = (code *)0x0;
  local_138 = (code *)0x0;
  local_140 = 0;
  local_330 = (undefined1 *)0x0;
  local_328 = (undefined1 *)0x0;
  local_2c0 = (undefined1 *)0x0;
  local_2b8 = (code *)0x0;
  local_2b0 = (undefined1 *)0x0;
  local_2a8 = (undefined1 *)0x0;
  local_240 = (code *)0x0;
  local_238 = (code *)0x0;
  local_230 = (undefined1 *)0x0;
  puStack_228 = (undefined1 *)0x0;
  local_1c0 = (undefined1 *)0x0;
  local_1b8 = (code *)0x0;
  local_1b0 = (undefined1 *)0x0;
  puStack_1a8 = (undefined1 *)0x0;
  local_360 = 0x20;
  local_358 = (long *)0x0;
  pcVar8 = (code *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
    pcVar8 = local_338;
  }
  local_388 = (undefined8 *)auStack_80;
  local_358 = (long *)0x0;
  puStack_380 = auStack_78;
  local_378 = &puStack_a8;
  if (pcVar8 != (code *)0x0) {
    local_330 = (undefined1 *)0x0;
    local_328 = (undefined1 *)0x0;
    local_340 = (code *)0x0;
    local_338 = (code *)0x0;
    (*pcVar8)(&local_320);
  }
  pcVar8 = local_2b8;
  local_320 = &local_388;
  puStack_318 = auStack_88;
  local_340 = (code *)&LAB_0165ff80;
  local_338 = FUN_02b22fe0;
  local_330 = &LAB_02b22fe8;
  local_328 = &LAB_02b22ffc;
  local_310 = &local_a0;
  puStack_308 = &puStack_a8;
  if (local_2b8 != (code *)0x0) {
    local_2b0 = (undefined1 *)0x0;
    local_2a8 = (undefined1 *)0x0;
    local_2c0 = (undefined1 *)0x0;
    local_2b8 = (code *)0x0;
    (*pcVar8)(&local_2a0);
  }
  pcVar8 = local_1b8;
  puStack_298 = &puStack_a8;
  local_2c0 = &LAB_0113da80;
  local_2b8 = FUN_02b23010;
  local_2b0 = &LAB_02b23014;
  local_2a8 = &LAB_02b23020;
  local_2a0 = &local_a0;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (undefined1 *)0x0;
    puStack_1a8 = (undefined1 *)0x0;
    local_1c0 = (undefined1 *)0x0;
    local_1b8 = (code *)0x0;
    (*pcVar8)(local_1a0);
  }
  local_1a0[0] = (undefined1 **)&local_388;
  local_1c0 = &LAB_0212af9c;
  local_1b8 = FUN_02b2302c;
  local_1b0 = &LAB_02b23030;
  puStack_1a8 = &LAB_02b2303c;
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar5 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar5;
  FUN_0162f274(uVar5,&local_370);
  pcVar8 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = 0;
    local_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    (*pcVar8)(auStack_120);
  }
  pcVar8 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (undefined1 *)0x0;
    puStack_1a8 = (undefined1 *)0x0;
    local_1c0 = (undefined1 *)0x0;
    local_1b8 = (code *)0x0;
    (*pcVar8)(local_1a0);
  }
  pcVar8 = local_238;
  if (local_238 != (code *)0x0) {
    local_230 = (undefined1 *)0x0;
    puStack_228 = (undefined1 *)0x0;
    local_240 = (code *)0x0;
    local_238 = (code *)0x0;
    (*pcVar8)(local_220);
  }
  pcVar8 = local_2b8;
  if (local_2b8 != (code *)0x0) {
    local_2b0 = (undefined1 *)0x0;
    local_2a8 = (undefined1 *)0x0;
    local_2c0 = (undefined1 *)0x0;
    local_2b8 = (code *)0x0;
    (*pcVar8)(&local_2a0);
  }
  pcVar8 = local_338;
  if (local_338 != (code *)0x0) {
    local_330 = (undefined1 *)0x0;
    local_328 = (undefined1 *)0x0;
    local_340 = (code *)0x0;
    local_338 = (code *)0x0;
    (*pcVar8)(&local_320);
  }
  if (local_358 != (long *)0x0) {
    (**(code **)(*local_358 + 0x20))();
  }
  return;
}


