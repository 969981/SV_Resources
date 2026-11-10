/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01622530; name: FUN_01622530
 */


void FUN_01622530(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 local_5f0;
  char *pcStack_5e8;
  undefined8 local_5e0;
  long *local_5d8;
  undefined1 local_5d0;
  undefined1 *local_5c0;
  code *local_5b8;
  undefined1 *local_5b0;
  undefined1 *puStack_5a8;
  undefined1 *local_5a0;
  undefined1 *puStack_598;
  undefined1 *local_540;
  code *local_538;
  undefined1 *local_530;
  undefined1 *puStack_528;
  undefined1 **local_520;
  undefined1 *puStack_518;
  undefined1 *local_510;
  undefined8 local_4c0;
  code *local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined1 auStack_4a0 [96];
  undefined8 local_440;
  code *local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined1 auStack_420 [96];
  undefined8 local_3c0;
  code *local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined1 auStack_3a0 [96];
  undefined1 auStack_340 [8];
  undefined1 auStack_338 [8];
  undefined1 *local_330;
  undefined1 auStack_328 [8];
  undefined8 local_320;
  char *local_318;
  undefined8 local_310;
  long *local_308;
  undefined1 local_300;
  undefined1 *local_2f0;
  code *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined1 *local_270;
  code *local_268;
  undefined1 *local_260;
  undefined1 *local_258;
  undefined1 **local_250;
  undefined1 *local_248;
  undefined1 *local_240;
  undefined8 local_1f0;
  code *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined1 auStack_1d0 [96];
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [112];
  
  puVar1 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  local_320 = *(undefined8 *)PTR_DAT_047d3e30;
  local_318 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_310 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  plVar9 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar9 != (long *)0x0) {
    local_308 = plVar9;
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  local_300 = 1;
  local_330 = auStack_328;
  local_318 = "Title/Battle/CameraShake";
  local_2f0 = (undefined1 *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = 0;
  local_1e8 = (code *)0x0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  local_158 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_f0 = 0;
  local_320 = 0x2f6eb2306e8b2de8;
  local_310 = 0x18;
  local_308 = (long *)0x0;
  if (plVar9 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar9 + 0x20))(plVar9);
    pcVar6 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (undefined1 *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar6)(&local_2d0);
    }
  }
  pcVar6 = local_268;
  local_2f0 = &LAB_015acb10;
  local_2e0 = &LAB_02b223a0;
  local_2e8 = FUN_02b2239c;
  local_2d8 = &LAB_02b223ac;
  local_2d0 = auStack_338;
  local_2c8 = auStack_340;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar6)(&local_250);
  }
  puVar3 = PTR_DAT_047d8918;
  local_250 = &local_330;
  local_270 = &LAB_01234c7c;
  local_268 = FUN_02b223b8;
  local_260 = &LAB_02b22508;
  local_258 = &LAB_02b2251c;
  local_248 = auStack_338;
  local_240 = auStack_340;
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  puVar5 = PTR_DAT_047d8928;
  puVar4 = PTR_DAT_047d8920;
  uVar8 = *(undefined8 *)PTR_DAT_047d8920;
  *(undefined8 *)PTR_DAT_047d8928 = uVar8;
  FUN_0162f274(uVar8,&local_320);
  if (((*puVar1 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_5f0 = *(undefined8 *)puVar2;
  pcStack_5e8 = *(char **)(puVar2 + 8);
  local_5e0 = *(undefined8 *)(puVar2 + 0x10);
  local_5d8 = *(long **)(puVar2 + 0x18);
  plVar9 = local_5d8;
  if (local_5d8 != (long *)0x0) {
    (**(code **)(*local_5d8 + 0x18))();
    plVar9 = local_5d8;
  }
  local_5d0 = 1;
  local_3a8 = 0;
  local_3b0 = 0;
  local_3b8 = (code *)0x0;
  local_5f0 = 0x134ec6365c4506be;
  pcStack_5e8 = "Title/Battle/CameraShakeFade";
  local_3c0 = 0;
  local_5c0 = (undefined1 *)0x0;
  local_5b8 = (code *)0x0;
  local_5b0 = (undefined1 *)0x0;
  puStack_5a8 = (undefined1 *)0x0;
  local_540 = (undefined1 *)0x0;
  local_538 = (code *)0x0;
  local_530 = (undefined1 *)0x0;
  puStack_528 = (undefined1 *)0x0;
  local_4c0 = 0;
  local_4b8 = (code *)0x0;
  local_4b0 = 0;
  uStack_4a8 = 0;
  local_440 = 0;
  local_438 = (code *)0x0;
  local_430 = 0;
  uStack_428 = 0;
  local_5e0 = 0x1c;
  local_5d8 = (long *)0x0;
  if (plVar9 == (long *)0x0) {
    local_5d8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar9 + 0x20))();
    pcVar6 = local_5b8;
    local_5d8 = (long *)0x0;
    if (local_5b8 != (code *)0x0) {
      local_5b0 = (undefined1 *)0x0;
      puStack_5a8 = (undefined1 *)0x0;
      local_5c0 = (undefined1 *)0x0;
      local_5b8 = (code *)0x0;
      (*pcVar6)(&local_5a0);
    }
  }
  pcVar6 = local_538;
  local_5c0 = &LAB_02129384;
  local_5b8 = FUN_02b22530;
  local_5b0 = &LAB_02b22534;
  puStack_5a8 = &LAB_02b22540;
  local_5a0 = auStack_338;
  puStack_598 = auStack_340;
  if (local_538 != (code *)0x0) {
    local_530 = (undefined1 *)0x0;
    puStack_528 = (undefined1 *)0x0;
    local_540 = (undefined1 *)0x0;
    local_538 = (code *)0x0;
    (*pcVar6)(&local_520);
  }
  local_520 = &local_330;
  local_540 = &LAB_0212a068;
  local_538 = FUN_02b2254c;
  local_530 = &LAB_02b22550;
  puStack_528 = &LAB_02b22564;
  puStack_518 = auStack_338;
  local_510 = auStack_340;
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar8 = *(undefined8 *)puVar4;
  *(undefined8 *)puVar5 = uVar8;
  FUN_0162f274(uVar8,&local_5f0);
  pcVar6 = local_3b8;
  if (local_3b8 != (code *)0x0) {
    local_3b0 = 0;
    local_3a8 = 0;
    local_3c0 = 0;
    local_3b8 = (code *)0x0;
    (*pcVar6)(auStack_3a0);
  }
  pcVar6 = local_438;
  if (local_438 != (code *)0x0) {
    local_430 = 0;
    uStack_428 = 0;
    local_440 = 0;
    local_438 = (code *)0x0;
    (*pcVar6)(auStack_420);
  }
  pcVar6 = local_4b8;
  if (local_4b8 != (code *)0x0) {
    local_4b0 = 0;
    uStack_4a8 = 0;
    local_4c0 = 0;
    local_4b8 = (code *)0x0;
    (*pcVar6)(auStack_4a0);
  }
  pcVar6 = local_538;
  if (local_538 != (code *)0x0) {
    local_530 = (undefined1 *)0x0;
    puStack_528 = (undefined1 *)0x0;
    local_540 = (undefined1 *)0x0;
    local_538 = (code *)0x0;
    (*pcVar6)(&local_520);
  }
  pcVar6 = local_5b8;
  if (local_5b8 != (code *)0x0) {
    local_5b0 = (undefined1 *)0x0;
    puStack_5a8 = (undefined1 *)0x0;
    local_5c0 = (undefined1 *)0x0;
    local_5b8 = (code *)0x0;
    (*pcVar6)(&local_5a0);
  }
  if (local_5d8 != (long *)0x0) {
    (**(code **)(*local_5d8 + 0x20))();
  }
  pcVar6 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar6)(auStack_d0);
  }
  pcVar6 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    local_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar6)(auStack_150);
  }
  pcVar6 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = 0;
    local_1d8 = 0;
    local_1f0 = 0;
    local_1e8 = (code *)0x0;
    (*pcVar6)(auStack_1d0);
  }
  pcVar6 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar6)(&local_250);
  }
  pcVar6 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (undefined1 *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar6)(&local_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  return;
}


