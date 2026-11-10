/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01301664; name: FUN_01301664
 */


void FUN_01301664(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 local_880;
  char *pcStack_878;
  undefined8 local_870;
  long *local_868;
  undefined1 local_860;
  undefined1 *local_850;
  code *local_848;
  undefined1 *local_840;
  undefined1 *puStack_838;
  undefined1 auStack_830 [96];
  undefined8 local_7d0;
  code *local_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined1 auStack_7b0 [96];
  undefined8 local_750;
  code *local_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined1 auStack_730 [96];
  undefined8 local_6d0;
  code *local_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined1 auStack_6b0 [96];
  undefined8 local_650;
  code *local_648;
  undefined8 local_640;
  undefined8 local_638;
  undefined1 auStack_630 [96];
  undefined8 local_5d0;
  char *local_5c8;
  undefined8 local_5c0;
  long *local_5b8;
  undefined1 local_5b0;
  undefined1 *local_5a0;
  code *local_598;
  undefined1 *local_590;
  undefined1 *local_588;
  undefined1 auStack_580 [96];
  undefined8 local_520;
  code *local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined1 auStack_500 [96];
  undefined8 local_4a0;
  code *local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined1 auStack_480 [96];
  undefined8 local_420;
  code *local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined1 auStack_400 [96];
  undefined8 local_3a0;
  code *local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined1 auStack_380 [96];
  undefined8 local_320;
  char *local_318;
  undefined8 local_310;
  long *local_308;
  undefined1 local_300;
  code *local_2f0;
  code *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined8 *local_2d0;
  undefined1 *local_2c8;
  undefined1 *local_270;
  code *local_268;
  undefined1 *local_260;
  undefined1 *local_258;
  undefined8 *local_250;
  undefined1 *local_248;
  code *local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined8 *local_1d0;
  undefined1 *local_1c8;
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
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  local_320 = *(undefined8 *)PTR_DAT_047d3e30;
  local_318 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_310 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  plVar4 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar4 != (long *)0x0) {
    local_308 = plVar4;
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  local_300 = 1;
  local_318 = "GameObject/SetTranslation";
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (undefined1 *)0x0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  local_158 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_f0 = 0;
  local_320 = 0xe399f322c04c65ae;
  local_310 = 0x19;
  local_308 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  local_2f0 = FUN_0221ecdc;
  local_2e0 = &LAB_02b78c90;
  local_270 = &LAB_0221fd10;
  local_260 = &LAB_02b78c9c;
  local_2e8 = FUN_02b78c8c;
  local_1f0 = (code *)&LAB_02220614;
  local_2d8 = &LAB_02b78c94;
  local_268 = FUN_02b78c98;
  local_1e0 = &LAB_02b78ca8;
  local_308 = (long *)0x0;
  local_258 = &LAB_02b78ca0;
  local_1e8 = FUN_02b78ca4;
  local_1d8 = &LAB_02b78cac;
  FUN_0162f274(param_1,&local_320);
  pcVar5 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar5)(auStack_d0);
  }
  pcVar5 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    local_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar5)(auStack_150);
  }
  pcVar5 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar5)(&local_1d0);
  }
  pcVar5 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar5)(&local_250);
  }
  pcVar5 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar5)(&local_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar2;
  local_318 = *(char **)(puVar2 + 8);
  local_310 = *(undefined8 *)(puVar2 + 0x10);
  local_308 = *(long **)(puVar2 + 0x18);
  plVar4 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar4 = local_308;
  }
  local_300 = 1;
  local_318 = "GameObject/SetScale";
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (undefined1 *)0x0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  local_158 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_f0 = 0;
  local_320 = 0xa82257669b0ee357;
  local_310 = 0x13;
  local_308 = (long *)0x0;
  pcVar5 = (code *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
    pcVar5 = local_2e8;
  }
  local_308 = (long *)0x0;
  if (pcVar5 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar5)(&local_2d0);
  }
  pcVar5 = local_268;
  local_2f0 = (code *)&LAB_02220c34;
  local_2e0 = &LAB_02b78cb4;
  local_2e8 = FUN_02b78cb0;
  local_2d8 = &LAB_02b78cc0;
  local_2d0 = &local_5d0;
  local_2c8 = (undefined1 *)&local_880;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    local_2c8 = (undefined1 *)&local_880;
    (*pcVar5)(&local_250);
  }
  pcVar5 = local_1e8;
  local_270 = &LAB_0222183c;
  local_268 = FUN_02b78ccc;
  local_260 = &LAB_02b78cd0;
  local_258 = &LAB_02b78cdc;
  local_250 = &local_5d0;
  local_248 = (undefined1 *)&local_880;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    local_248 = (undefined1 *)&local_880;
    (*pcVar5)(&local_1d0);
  }
  local_1d0 = &local_5d0;
  local_1f0 = (code *)&LAB_02221d38;
  local_1e8 = FUN_02b78ce8;
  local_1e0 = &LAB_02b78cec;
  local_1d8 = &LAB_02b78cf8;
  local_1c8 = (undefined1 *)&local_880;
  FUN_0162f274(param_1,&local_320);
  pcVar5 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar5)(auStack_d0);
  }
  pcVar5 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    local_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar5)(auStack_150);
  }
  pcVar5 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar5)(&local_1d0);
  }
  pcVar5 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar5)(&local_250);
  }
  pcVar5 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar5)(&local_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar2;
  local_318 = *(char **)(puVar2 + 8);
  local_310 = *(undefined8 *)(puVar2 + 0x10);
  local_308 = *(long **)(puVar2 + 0x18);
  plVar4 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar4 = local_308;
  }
  local_300 = 1;
  local_318 = "GameObject/AttachTransform";
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (undefined1 *)0x0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  local_158 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_f0 = 0;
  local_320 = 0xa9ee3479f116057c;
  local_310 = 0x1a;
  local_308 = (long *)0x0;
  if (plVar4 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))();
    pcVar5 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar5)(&local_2d0);
    }
  }
  pcVar5 = local_1e8;
  local_2f0 = (code *)&LAB_0158e8ec;
  local_2e0 = &LAB_02b78d08;
  local_2e8 = FUN_02b78d04;
  local_2d8 = &LAB_02b78d14;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar5)(&local_1d0);
  }
  local_1f0 = (code *)&LAB_016cbfb8;
  local_1e8 = FUN_02b78d20;
  local_1e0 = &LAB_02b78d24;
  local_1d8 = &LAB_02b78d30;
  FUN_0162f274(param_1,&local_320);
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_5d0 = *(undefined8 *)puVar2;
  local_5c8 = *(char **)(puVar2 + 8);
  local_5c0 = *(undefined8 *)(puVar2 + 0x10);
  local_5b8 = *(long **)(puVar2 + 0x18);
  plVar4 = local_5b8;
  if (local_5b8 != (long *)0x0) {
    (**(code **)(*local_5b8 + 0x18))();
    plVar4 = local_5b8;
  }
  local_5b0 = 1;
  local_5c8 = "GameObject/Attach";
  local_5a0 = (undefined1 *)0x0;
  local_598 = (code *)0x0;
  local_590 = (undefined1 *)0x0;
  local_588 = (undefined1 *)0x0;
  local_520 = 0;
  local_518 = (code *)0x0;
  local_510 = 0;
  local_508 = 0;
  local_4a0 = 0;
  local_498 = (code *)0x0;
  local_490 = 0;
  local_488 = 0;
  local_420 = 0;
  local_418 = (code *)0x0;
  local_410 = 0;
  local_408 = 0;
  local_388 = 0;
  local_390 = 0;
  local_398 = (code *)0x0;
  local_3a0 = 0;
  local_5d0 = 0x6cc0d715210cae70;
  local_5c0 = 0x11;
  local_5b8 = (long *)0x0;
  if (plVar4 == (long *)0x0) {
    local_5b8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))();
    pcVar5 = local_598;
    local_5b8 = (long *)0x0;
    if (local_598 != (code *)0x0) {
      local_590 = (undefined1 *)0x0;
      local_588 = (undefined1 *)0x0;
      local_5a0 = (undefined1 *)0x0;
      local_598 = (code *)0x0;
      (*pcVar5)(auStack_580);
    }
  }
  local_5a0 = &LAB_02222220;
  local_598 = FUN_02b78d3c;
  local_590 = &LAB_02b78d40;
  local_588 = &LAB_02b78d4c;
  FUN_0162f274(param_1,&local_5d0);
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_880 = *(undefined8 *)puVar2;
  pcStack_878 = *(char **)(puVar2 + 8);
  local_870 = *(undefined8 *)(puVar2 + 0x10);
  local_868 = *(long **)(puVar2 + 0x18);
  plVar4 = local_868;
  if (local_868 != (long *)0x0) {
    (**(code **)(*local_868 + 0x18))();
    plVar4 = local_868;
  }
  local_860 = 1;
  local_638 = 0;
  local_640 = 0;
  local_648 = (code *)0x0;
  local_880 = 0xc0ef571a6b1e9986;
  pcStack_878 = "GameObject/Detach";
  local_650 = 0;
  local_850 = (undefined1 *)0x0;
  local_848 = (code *)0x0;
  local_840 = (undefined1 *)0x0;
  puStack_838 = (undefined1 *)0x0;
  local_7d0 = 0;
  local_7c8 = (code *)0x0;
  local_7c0 = 0;
  uStack_7b8 = 0;
  local_750 = 0;
  local_748 = (code *)0x0;
  local_740 = 0;
  uStack_738 = 0;
  local_6d0 = 0;
  local_6c8 = (code *)0x0;
  local_6c0 = 0;
  uStack_6b8 = 0;
  local_870 = 0x11;
  local_868 = (long *)0x0;
  if (plVar4 == (long *)0x0) {
    local_868 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))();
    pcVar5 = local_848;
    local_868 = (long *)0x0;
    if (local_848 != (code *)0x0) {
      local_840 = (undefined1 *)0x0;
      puStack_838 = (undefined1 *)0x0;
      local_850 = (undefined1 *)0x0;
      local_848 = (code *)0x0;
      (*pcVar5)(auStack_830);
    }
  }
  local_850 = &LAB_022222a8;
  local_848 = FUN_02b78d58;
  local_840 = &LAB_02b78d5c;
  puStack_838 = &LAB_02b78d68;
  FUN_0162f274(param_1,&local_880);
  pcVar5 = local_648;
  if (local_648 != (code *)0x0) {
    local_640 = 0;
    local_638 = 0;
    local_650 = 0;
    local_648 = (code *)0x0;
    (*pcVar5)(auStack_630);
  }
  pcVar5 = local_6c8;
  if (local_6c8 != (code *)0x0) {
    local_6c0 = 0;
    uStack_6b8 = 0;
    local_6d0 = 0;
    local_6c8 = (code *)0x0;
    (*pcVar5)(auStack_6b0);
  }
  pcVar5 = local_748;
  if (local_748 != (code *)0x0) {
    local_740 = 0;
    uStack_738 = 0;
    local_750 = 0;
    local_748 = (code *)0x0;
    (*pcVar5)(auStack_730);
  }
  pcVar5 = local_7c8;
  if (local_7c8 != (code *)0x0) {
    local_7c0 = 0;
    uStack_7b8 = 0;
    local_7d0 = 0;
    local_7c8 = (code *)0x0;
    (*pcVar5)(auStack_7b0);
  }
  pcVar5 = local_848;
  if (local_848 != (code *)0x0) {
    local_840 = (undefined1 *)0x0;
    puStack_838 = (undefined1 *)0x0;
    local_850 = (undefined1 *)0x0;
    local_848 = (code *)0x0;
    (*pcVar5)(auStack_830);
  }
  if (local_868 != (long *)0x0) {
    (**(code **)(*local_868 + 0x20))();
  }
  pcVar5 = local_398;
  if (local_398 != (code *)0x0) {
    local_390 = 0;
    local_388 = 0;
    local_3a0 = 0;
    local_398 = (code *)0x0;
    (*pcVar5)(auStack_380);
  }
  pcVar5 = local_418;
  if (local_418 != (code *)0x0) {
    local_410 = 0;
    local_408 = 0;
    local_420 = 0;
    local_418 = (code *)0x0;
    (*pcVar5)(auStack_400);
  }
  pcVar5 = local_498;
  if (local_498 != (code *)0x0) {
    local_490 = 0;
    local_488 = 0;
    local_4a0 = 0;
    local_498 = (code *)0x0;
    (*pcVar5)(auStack_480);
  }
  pcVar5 = local_518;
  if (local_518 != (code *)0x0) {
    local_510 = 0;
    local_508 = 0;
    local_520 = 0;
    local_518 = (code *)0x0;
    (*pcVar5)(auStack_500);
  }
  pcVar5 = local_598;
  if (local_598 != (code *)0x0) {
    local_590 = (undefined1 *)0x0;
    local_588 = (undefined1 *)0x0;
    local_5a0 = (undefined1 *)0x0;
    local_598 = (code *)0x0;
    (*pcVar5)(auStack_580);
  }
  if (local_5b8 != (long *)0x0) {
    (**(code **)(*local_5b8 + 0x20))();
  }
  pcVar5 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar5)(auStack_d0);
  }
  pcVar5 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    local_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar5)(auStack_150);
  }
  pcVar5 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar5)(&local_1d0);
  }
  pcVar5 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar5)(&local_250);
  }
  pcVar5 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar5)(&local_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar2;
  local_318 = *(char **)(puVar2 + 8);
  local_310 = *(undefined8 *)(puVar2 + 0x10);
  local_308 = *(long **)(puVar2 + 0x18);
  plVar4 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar4 = local_308;
  }
  local_300 = 1;
  local_318 = "GameObject/SetLengthScale";
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (undefined1 *)0x0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  local_158 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_f0 = 0;
  local_320 = 0xc03ab229ecedb837;
  local_310 = 0x19;
  local_308 = (long *)0x0;
  if (plVar4 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))();
    pcVar5 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar5)(&local_2d0);
    }
  }
  pcVar5 = local_268;
  local_2f0 = (code *)&LAB_01946e78;
  local_2e0 = &LAB_02b78d78;
  local_2e8 = FUN_02b78d74;
  local_2d8 = &LAB_02b78d7c;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar5)(&local_250);
  }
  pcVar5 = local_1e8;
  local_270 = &LAB_02222330;
  local_260 = &LAB_02b78d84;
  local_268 = FUN_02b78d80;
  local_258 = &LAB_02b78d90;
  local_250 = &local_5d0;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar5)(&local_1d0);
  }
  local_1f0 = (code *)&LAB_01ac8550;
  local_1e8 = FUN_02b78d9c;
  local_1e0 = &LAB_02b78da0;
  local_1d8 = &LAB_02b78dac;
  local_1d0 = &local_5d0;
  FUN_0162f274(param_1,&local_320);
  pcVar5 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar5)(auStack_d0);
  }
  pcVar5 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    local_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar5)(auStack_150);
  }
  pcVar5 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar5)(&local_1d0);
  }
  pcVar5 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar5)(&local_250);
  }
  pcVar5 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar5)(&local_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar2;
  local_318 = *(char **)(puVar2 + 8);
  local_310 = *(undefined8 *)(puVar2 + 0x10);
  local_308 = *(long **)(puVar2 + 0x18);
  plVar4 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar4 = local_308;
  }
  local_300 = 1;
  local_318 = "GameObject/Shake";
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (undefined1 *)0x0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  local_158 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_f0 = 0;
  local_320 = 0xe5404862ac5de551;
  local_310 = 0x10;
  local_308 = (long *)0x0;
  pcVar5 = (code *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
    pcVar5 = local_2e8;
  }
  local_308 = (long *)0x0;
  if (pcVar5 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar5)(&local_2d0);
  }
  pcVar5 = local_268;
  local_2f0 = (code *)&LAB_02222410;
  local_2e0 = &LAB_02b78dbc;
  local_2e8 = FUN_02b78db8;
  local_2d8 = &LAB_02b78dc8;
  local_2d0 = &local_5d0;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar5)(&local_250);
  }
  pcVar5 = local_1e8;
  local_270 = &LAB_0118066c;
  local_260 = &LAB_02b78dd8;
  local_268 = FUN_02b78dd4;
  local_258 = &LAB_02b78de4;
  local_250 = &local_5d0;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar5)(&local_1d0);
  }
  local_1d0 = &local_5d0;
  local_1e8 = FUN_02b78df0;
  local_1f0 = (code *)&LAB_0222249c;
  local_1e0 = &LAB_02b78df4;
  local_1d8 = &LAB_02b78e00;
  FUN_0162f274(param_1,&local_320);
  pcVar5 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar5)(auStack_d0);
  }
  pcVar5 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    local_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar5)(auStack_150);
  }
  pcVar5 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar5)(&local_1d0);
  }
  pcVar5 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar5)(&local_250);
  }
  pcVar5 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar5)(&local_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar2;
  local_318 = *(char **)(puVar2 + 8);
  local_310 = *(undefined8 *)(puVar2 + 0x10);
  local_308 = *(long **)(puVar2 + 0x18);
  plVar4 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar4 = local_308;
  }
  local_300 = 1;
  local_318 = "GameObject/DisableCulling";
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (undefined1 *)0x0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  local_158 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_f0 = 0;
  local_320 = 0x8e82712463c27b95;
  local_310 = 0x19;
  local_308 = (long *)0x0;
  if (plVar4 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))();
    pcVar5 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar5)(&local_2d0);
    }
  }
  pcVar5 = local_1e8;
  local_2f0 = (code *)&LAB_02222580;
  local_2e0 = &LAB_02b78e10;
  local_2e8 = FUN_02b78e0c;
  local_2d8 = &LAB_02b78e14;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar5)(&local_1d0);
  }
  local_1f0 = (code *)&LAB_02222814;
  local_1e8 = FUN_02b78e18;
  local_1e0 = &LAB_02b78e1c;
  local_1d8 = &LAB_02b78e20;
  FUN_0162f274(param_1,&local_320);
  pcVar5 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar5)(auStack_d0);
  }
  pcVar5 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    local_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar5)(auStack_150);
  }
  pcVar5 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar5)(&local_1d0);
  }
  pcVar5 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar5)(&local_250);
  }
  pcVar5 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar5)(&local_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar2;
  local_318 = *(char **)(puVar2 + 8);
  local_310 = *(undefined8 *)(puVar2 + 0x10);
  local_308 = *(long **)(puVar2 + 0x18);
  plVar4 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar4 = local_308;
  }
  local_300 = 1;
  local_318 = "GameObject/DisableOcclusion";
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (undefined1 *)0x0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  local_158 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_f0 = 0;
  local_320 = 0xa9172bcbb9416890;
  local_310 = 0x1b;
  local_308 = (long *)0x0;
  if (plVar4 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))();
    pcVar5 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar5)(&local_2d0);
    }
  }
  pcVar5 = local_1e8;
  local_2f0 = FUN_01a37cc4;
  local_2e0 = &LAB_02b78e28;
  local_2e8 = FUN_02b78e24;
  local_2d8 = &LAB_02b78e2c;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar5)(&local_1d0);
  }
  local_1f0 = FUN_01a66c14;
  local_1e8 = FUN_02b78e30;
  local_1e0 = &LAB_02b78e34;
  local_1d8 = &LAB_02b78e38;
  FUN_0162f274(param_1,&local_320);
  pcVar5 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar5)(auStack_d0);
  }
  pcVar5 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    local_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar5)(auStack_150);
  }
  pcVar5 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar5)(&local_1d0);
  }
  pcVar5 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar5)(&local_250);
  }
  pcVar5 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar5)(&local_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  return;
}


