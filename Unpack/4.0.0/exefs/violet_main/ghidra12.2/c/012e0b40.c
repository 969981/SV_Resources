/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012e0b40; name: FUN_012e0b40
 */


void FUN_012e0b40(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  undefined1 auStack_328 [8];
  undefined8 local_320;
  char *pcStack_318;
  undefined8 local_310;
  long *local_308;
  undefined1 local_300;
  code *local_2f0;
  code *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *apuStack_2d0 [12];
  undefined1 *local_270;
  code *local_268;
  undefined1 *local_260;
  undefined1 *local_258;
  undefined1 *apuStack_250 [12];
  undefined1 *local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0 [12];
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [112];
  
  puVar1 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  local_320 = *(undefined8 *)PTR_DAT_047d3e30;
  pcStack_318 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_310 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  plVar5 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar5 != (long *)0x0) {
    local_308 = plVar5;
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_300 = 1;
  local_d8 = 0;
  local_320 = 0x68d4f428eaa6c66b;
  pcStack_318 = "Particle/Emit";
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_f0 = 0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (undefined1 *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (undefined1 *)0x0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  uStack_158 = 0;
  local_310 = 0xd;
  local_308 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  local_308 = (long *)0x0;
  local_2f0 = (code *)&LAB_02237bc4;
  local_2e8 = FUN_02b792b0;
  local_2e0 = &LAB_02b792b4;
  local_2d8 = &LAB_02b792b8;
  FUN_0162f274(param_1,&local_320);
  pcVar3 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar3)(auStack_d0);
  }
  pcVar3 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar3)(auStack_150);
  }
  pcVar3 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(local_1d0);
  }
  pcVar3 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar3)(apuStack_250);
  }
  pcVar3 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar3)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar2;
  pcStack_318 = *(char **)(puVar2 + 8);
  local_310 = *(undefined8 *)(puVar2 + 0x10);
  local_308 = *(long **)(puVar2 + 0x18);
  plVar5 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar5 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0xb2a64a8f31b06048;
  pcStack_318 = "Particle/Stop";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (undefined1 *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (undefined1 *)0x0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  uStack_158 = 0;
  local_310 = 0xd;
  local_308 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar3)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_0223821c;
  local_2e8 = FUN_02b792bc;
  local_2e0 = &LAB_02b792c0;
  local_2d8 = &LAB_02b792c4;
  FUN_0162f274(param_1,&local_320);
  pcVar3 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar3)(auStack_d0);
  }
  pcVar3 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar3)(auStack_150);
  }
  pcVar3 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(local_1d0);
  }
  pcVar3 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar3)(apuStack_250);
  }
  pcVar3 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar3)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar2;
  pcStack_318 = *(char **)(puVar2 + 8);
  local_310 = *(undefined8 *)(puVar2 + 0x10);
  local_308 = *(long **)(puVar2 + 0x18);
  plVar5 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar5 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x6f4288df66617e3c;
  pcStack_318 = "Particle/SetVisibility";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (undefined1 *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (undefined1 *)0x0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  uStack_158 = 0;
  local_310 = 0x16;
  local_308 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar3)(apuStack_2d0);
    }
  }
  local_2f0 = FUN_01a476e0;
  local_2e8 = FUN_02b792c8;
  local_2e0 = &LAB_02b792cc;
  local_2d8 = &LAB_02b792d0;
  FUN_0162f274(param_1,&local_320);
  pcVar3 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar3)(auStack_d0);
  }
  pcVar3 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar3)(auStack_150);
  }
  pcVar3 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(local_1d0);
  }
  pcVar3 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar3)(apuStack_250);
  }
  pcVar3 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar3)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar2;
  pcStack_318 = *(char **)(puVar2 + 8);
  local_310 = *(undefined8 *)(puVar2 + 0x10);
  local_308 = *(long **)(puVar2 + 0x18);
  plVar5 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar5 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0xb51d209fb7e35171;
  pcStack_318 = "Particle/SetSpeedRate";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (undefined1 *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (undefined1 *)0x0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  uStack_158 = 0;
  local_310 = 0x15;
  local_308 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar3)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_022385bc;
  local_2e8 = FUN_02b792d4;
  local_2e0 = &LAB_02b792d8;
  local_2d8 = &LAB_02b792dc;
  FUN_0162f274(param_1,&local_320);
  pcVar3 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar3)(auStack_d0);
  }
  pcVar3 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar3)(auStack_150);
  }
  pcVar3 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(local_1d0);
  }
  pcVar3 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar3)(apuStack_250);
  }
  pcVar3 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar3)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar2;
  pcStack_318 = *(char **)(puVar2 + 8);
  local_310 = *(undefined8 *)(puVar2 + 0x10);
  local_308 = *(long **)(puVar2 + 0x18);
  plVar5 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar5 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0xccfb30d779615032;
  pcStack_318 = "Particle/SetLocator";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (undefined1 *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (undefined1 *)0x0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  uStack_158 = 0;
  local_310 = 0x13;
  local_308 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar3)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_0223894c;
  local_2e8 = FUN_02b792e0;
  local_2e0 = &LAB_02b792e4;
  local_2d8 = &LAB_02b792e8;
  FUN_0162f274(param_1,&local_320);
  pcVar3 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar3)(auStack_d0);
  }
  pcVar3 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar3)(auStack_150);
  }
  pcVar3 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(local_1d0);
  }
  pcVar3 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar3)(apuStack_250);
  }
  pcVar3 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar3)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar2;
  pcStack_318 = *(char **)(puVar2 + 8);
  local_310 = *(undefined8 *)(puVar2 + 0x10);
  local_308 = *(long **)(puVar2 + 0x18);
  plVar5 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar5 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x372f6faa2aefdb7;
  pcStack_318 = "Particle/SetColor";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (undefined1 *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (undefined1 *)0x0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  uStack_158 = 0;
  local_310 = 0x11;
  local_308 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar3)(apuStack_2d0);
      goto LAB_012e11ec;
    }
  }
  local_308 = (long *)0x0;
LAB_012e11ec:
  pcVar3 = local_268;
  local_2f0 = (code *)&LAB_02238d08;
  local_2e8 = FUN_02b792ec;
  local_2e0 = &LAB_02b792f0;
  local_2d8 = &LAB_02b792fc;
  apuStack_2d0[0] = auStack_328;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar3)(apuStack_250);
  }
  pcVar3 = local_1e8;
  local_270 = &LAB_0223950c;
  local_268 = FUN_02b79308;
  local_260 = &LAB_02b7930c;
  local_258 = &LAB_02b79318;
  apuStack_250[0] = auStack_328;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(local_1d0);
  }
  local_1f0 = &LAB_022395fc;
  local_1e8 = FUN_02b79324;
  local_1e0 = &LAB_02b79328;
  local_1d8 = &LAB_02b79334;
  local_1d0[0] = auStack_328;
  FUN_0162f274(param_1,&local_320);
  pcVar3 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar3)(auStack_d0);
  }
  pcVar3 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar3)(auStack_150);
  }
  pcVar3 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(local_1d0);
  }
  pcVar3 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar3)(apuStack_250);
  }
  pcVar3 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar3)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar2;
  pcStack_318 = *(char **)(puVar2 + 8);
  local_310 = *(undefined8 *)(puVar2 + 0x10);
  local_308 = *(long **)(puVar2 + 0x18);
  plVar5 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar5 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x95bdee0e7360b794;
  pcStack_318 = "Particle/SetAlpha";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (undefined1 *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (undefined1 *)0x0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  uStack_158 = 0;
  local_310 = 0x11;
  local_308 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar3)(apuStack_2d0);
    }
  }
  pcVar3 = local_268;
  local_2f0 = (code *)&LAB_022396e0;
  local_2e8 = FUN_02b79340;
  local_2e0 = &LAB_02b79344;
  local_2d8 = &LAB_02b79350;
  apuStack_2d0[0] = auStack_328;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar3)(apuStack_250);
  }
  pcVar3 = local_1e8;
  local_270 = &LAB_016aa5ac;
  local_268 = FUN_02b7935c;
  local_260 = &LAB_02b79360;
  local_258 = &LAB_02b7936c;
  apuStack_250[0] = auStack_328;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(local_1d0);
  }
  local_1f0 = &LAB_02239cf4;
  local_1e8 = FUN_02b79378;
  local_1e0 = &LAB_02b7937c;
  local_1d8 = &LAB_02b79388;
  local_1d0[0] = auStack_328;
  FUN_0162f274(param_1,&local_320);
  pcVar3 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar3)(auStack_d0);
  }
  pcVar3 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar3)(auStack_150);
  }
  pcVar3 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar3)(local_1d0);
  }
  pcVar3 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar3)(apuStack_250);
  }
  pcVar3 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar3)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  return;
}


