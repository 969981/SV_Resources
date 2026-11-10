/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0130a79c; name: FUN_0130a79c
 */


void FUN_0130a79c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  undefined8 local_310;
  char *pcStack_308;
  undefined8 local_300;
  long *local_2f8;
  undefined1 local_2f0;
  code *local_2e0;
  code *local_2d8;
  undefined1 *local_2d0;
  undefined1 *puStack_2c8;
  undefined1 auStack_2c0 [96];
  undefined1 *local_260;
  code *local_258;
  undefined1 *local_250;
  undefined1 *puStack_248;
  undefined1 auStack_240 [96];
  code *local_1e0;
  code *local_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 auStack_1c0 [96];
  undefined1 *local_160;
  code *local_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 auStack_140 [96];
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [96];
  
  puVar1 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  local_310 = *(undefined8 *)PTR_DAT_047d3e30;
  pcStack_308 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_300 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  plVar5 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar5 != (long *)0x0) {
    local_2f8 = plVar5;
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_310 = 0x23fef53200406456;
  pcStack_308 = "Animation/SetTrigger";
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_e0 = 0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_300 = 0x14;
  local_2f8 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  local_2f8 = (long *)0x0;
  local_2e0 = (code *)&LAB_02228e50;
  local_2d8 = FUN_02b78f94;
  local_2d0 = &LAB_02b78f98;
  puStack_2c8 = &LAB_02b78f9c;
  FUN_0162f274(param_1,&local_310);
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar3)(auStack_c0);
  }
  pcVar3 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  pcVar3 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar3)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar5 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0xfb6973a70869cce2;
  pcStack_308 = "Animation/SetBool";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_300 = 0x11;
  local_2f8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      puStack_2c8 = (undefined1 *)0x0;
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  local_2e0 = (code *)&LAB_02229408;
  local_2d8 = FUN_02b78fa0;
  local_2d0 = &LAB_02b78fa4;
  puStack_2c8 = &LAB_02b78fa8;
  FUN_0162f274(param_1,&local_310);
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar3)(auStack_c0);
  }
  pcVar3 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  pcVar3 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar3)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar5 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0x26518cade5b5f3ff;
  pcStack_308 = "Animation/SetInt";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_300 = 0x10;
  local_2f8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      puStack_2c8 = (undefined1 *)0x0;
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  local_2e0 = (code *)&LAB_022299e0;
  local_2d8 = FUN_02b78fac;
  local_2d0 = &LAB_02b78fb0;
  puStack_2c8 = &LAB_02b78fb4;
  FUN_0162f274(param_1,&local_310);
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar3)(auStack_c0);
  }
  pcVar3 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  pcVar3 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar3)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar5 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0xfa5ba7b8e454f744;
  pcStack_308 = "Animation/SetFloat";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_300 = 0x12;
  local_2f8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      puStack_2c8 = (undefined1 *)0x0;
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  pcVar3 = local_258;
  local_2e0 = (code *)&LAB_01a06550;
  local_2d8 = FUN_02b78fb8;
  local_2d0 = &LAB_02b78fbc;
  puStack_2c8 = &LAB_02b78fc0;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_1d8;
  local_260 = &LAB_02229fb0;
  local_258 = FUN_02b78fc4;
  local_250 = &LAB_02b78fc8;
  puStack_248 = &LAB_02b78fcc;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  local_1e0 = (code *)&LAB_01a01d78;
  local_1d8 = FUN_02b78fd0;
  local_1d0 = &LAB_02b78fd4;
  puStack_1c8 = &LAB_02b78fd8;
  FUN_0162f274(param_1,&local_310);
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar3)(auStack_c0);
  }
  pcVar3 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  pcVar3 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar3)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar5 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0xdb78a3ea9f1b812f;
  pcStack_308 = "Animation/SetMasterSpeed";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_300 = 0x18;
  local_2f8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      puStack_2c8 = (undefined1 *)0x0;
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  pcVar3 = local_1d8;
  local_2e0 = (code *)&LAB_01823104;
  local_2d8 = FUN_02b78fdc;
  local_2d0 = &LAB_02b78fe0;
  puStack_2c8 = &LAB_02b78fe4;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  local_1e0 = FUN_0185ca14;
  local_1d8 = FUN_02b78fe8;
  local_1d0 = &LAB_02b78fec;
  puStack_1c8 = &LAB_02b78ff0;
  FUN_0162f274(param_1,&local_310);
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar3)(auStack_c0);
  }
  pcVar3 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  pcVar3 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar3)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar5 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0x861bd0973c9ba72b;
  pcStack_308 = "Animation/AwaitableAnimationState";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_300 = 0x21;
  local_2f8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_158;
    local_2f8 = (long *)0x0;
    if (local_158 != (code *)0x0) {
      local_150 = (undefined1 *)0x0;
      puStack_148 = (undefined1 *)0x0;
      local_160 = (undefined1 *)0x0;
      local_158 = (code *)0x0;
      (*pcVar3)(auStack_140);
    }
  }
  local_160 = &LAB_0222ace8;
  local_158 = FUN_02b78ff4;
  local_150 = &LAB_02b78ff8;
  puStack_148 = &LAB_02b78ffc;
  FUN_0162f274(param_1,&local_310);
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar3)(auStack_c0);
  }
  pcVar3 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  pcVar3 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar3)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar5 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0xa398d92bf16c89ae;
  pcStack_308 = "Animation/ChangeSpineAnimationEnable";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_300 = 0x24;
  local_2f8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      puStack_2c8 = (undefined1 *)0x0;
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  pcVar3 = local_1d8;
  local_2e0 = FUN_0222b6c0;
  local_2d8 = FUN_02b79000;
  local_2d0 = &LAB_02b79004;
  puStack_2c8 = &LAB_02b79008;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  local_1e0 = (code *)&LAB_0222bf1c;
  local_1d8 = FUN_02b7900c;
  local_1d0 = &LAB_02b79010;
  puStack_1c8 = &LAB_02b79014;
  FUN_0162f274(param_1,&local_310);
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar3)(auStack_c0);
  }
  pcVar3 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  pcVar3 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar3)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar5 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0x90c5281d0961c607;
  pcStack_308 = "Animation/AddConfig";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_300 = 0x13;
  local_2f8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      puStack_2c8 = (undefined1 *)0x0;
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  pcVar3 = local_1d8;
  local_2e0 = (code *)&LAB_0222c694;
  local_2d8 = FUN_02b79018;
  local_2d0 = &LAB_02b79020;
  puStack_2c8 = &LAB_02b79024;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  local_1e0 = (code *)&LAB_0222d2e0;
  local_1d8 = FUN_02b79028;
  local_1d0 = &LAB_02b7902c;
  puStack_1c8 = &LAB_02b79030;
  FUN_0162f274(param_1,&local_310);
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar3)(auStack_c0);
  }
  pcVar3 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  pcVar3 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar3)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar5 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0x859af0338a5b4971;
  pcStack_308 = "Animation/ChangeEnable";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_300 = 0x16;
  local_2f8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      puStack_2c8 = (undefined1 *)0x0;
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  local_2e0 = (code *)&LAB_0222dcf8;
  local_2d8 = FUN_02b79034;
  local_2d0 = &LAB_02b79038;
  puStack_2c8 = &LAB_02b7903c;
  FUN_0162f274(param_1,&local_310);
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar3)(auStack_c0);
  }
  pcVar3 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  pcVar3 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar3)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar5 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0xf6f4a8c8e272d095;
  pcStack_308 = "Animation/ChangeCharaCreateAnimation";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_300 = 0x24;
  local_2f8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      puStack_2c8 = (undefined1 *)0x0;
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  local_2e0 = (code *)&LAB_0222e638;
  local_2d8 = FUN_02b79040;
  local_2d0 = &LAB_02b79044;
  puStack_2c8 = &LAB_02b79048;
  FUN_0162f274(param_1,&local_310);
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar3)(auStack_c0);
  }
  pcVar3 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  pcVar3 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar3)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar5 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0x58dab4ace8d5e7d6;
  pcStack_308 = "Animation/IsLoadedAnimationContainer";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_300 = 0x24;
  local_2f8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_158;
    local_2f8 = (long *)0x0;
    if (local_158 != (code *)0x0) {
      local_150 = (undefined1 *)0x0;
      puStack_148 = (undefined1 *)0x0;
      local_160 = (undefined1 *)0x0;
      local_158 = (code *)0x0;
      (*pcVar3)(auStack_140);
    }
  }
  local_160 = &LAB_01856ca8;
  local_158 = FUN_02b7904c;
  local_150 = &LAB_02b79050;
  puStack_148 = &LAB_02b79054;
  FUN_0162f274(param_1,&local_310);
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar3)(auStack_c0);
  }
  pcVar3 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  pcVar3 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar3)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar5 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0x3dba5d8691bfbed7;
  pcStack_308 = "Animation/IsSetup";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_300 = 0x11;
  local_2f8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_158;
    local_2f8 = (long *)0x0;
    if (local_158 != (code *)0x0) {
      local_150 = (undefined1 *)0x0;
      puStack_148 = (undefined1 *)0x0;
      local_160 = (undefined1 *)0x0;
      local_158 = (code *)0x0;
      (*pcVar3)(auStack_140);
    }
  }
  local_160 = &LAB_01849a60;
  local_158 = FUN_02b79058;
  local_150 = &LAB_02b7905c;
  puStack_148 = &LAB_02b79060;
  FUN_0162f274(param_1,&local_310);
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar3)(auStack_c0);
  }
  pcVar3 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  pcVar3 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar3)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar5 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0xc049a49d8e630b73;
  pcStack_308 = "Animation/LookAtPosition";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_300 = 0x18;
  local_2f8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      puStack_2c8 = (undefined1 *)0x0;
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  local_2e0 = (code *)&LAB_0222f0b8;
  local_2d8 = FUN_02b79064;
  local_2d0 = &LAB_02b79068;
  puStack_2c8 = &LAB_02b7906c;
  FUN_0162f274(param_1,&local_310);
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar3)(auStack_c0);
  }
  pcVar3 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  pcVar3 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar3)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar5 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0x71cbe9d43dae6b09;
  pcStack_308 = "Animation/LookAtGameObject";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_300 = 0x1a;
  local_2f8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      puStack_2c8 = (undefined1 *)0x0;
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  local_2e0 = (code *)&LAB_01a7ea08;
  local_2d8 = FUN_02b79070;
  local_2d0 = &LAB_02b79074;
  puStack_2c8 = &LAB_02b79078;
  FUN_0162f274(param_1,&local_310);
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar3)(auStack_c0);
  }
  pcVar3 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  pcVar3 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar3)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar5 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0x9edb4f7cb902e7b8;
  pcStack_308 = "Animation/DisableLookAt";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_300 = 0x17;
  local_2f8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      puStack_2c8 = (undefined1 *)0x0;
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  local_2e0 = (code *)&LAB_0222f6d8;
  local_2d8 = FUN_02b7907c;
  local_2d0 = &LAB_02b79080;
  puStack_2c8 = &LAB_02b79084;
  FUN_0162f274(param_1,&local_310);
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar3)(auStack_c0);
  }
  pcVar3 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  pcVar3 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar3)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar5 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0xd6d99a76619c6d26;
  pcStack_308 = "Animation/SetUpdateInterval";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_300 = 0x1b;
  local_2f8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      puStack_2c8 = (undefined1 *)0x0;
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  pcVar3 = local_1d8;
  local_2e0 = FUN_0222fcf0;
  local_2d8 = FUN_02b79088;
  local_2d0 = &LAB_02b7908c;
  puStack_2c8 = &LAB_02b79090;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  local_1e0 = (code *)&LAB_022301c8;
  local_1d8 = FUN_02b79094;
  local_1d0 = &LAB_02b79098;
  puStack_1c8 = &LAB_02b7909c;
  FUN_0162f274(param_1,&local_310);
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar3)(auStack_c0);
  }
  pcVar3 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  pcVar3 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar3)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar5 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0x4eb6be92b3a91576;
  pcStack_308 = "Animation/IsCharaCreateSetup";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_300 = 0x1c;
  local_2f8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_158;
    local_2f8 = (long *)0x0;
    if (local_158 != (code *)0x0) {
      local_150 = (undefined1 *)0x0;
      puStack_148 = (undefined1 *)0x0;
      local_160 = (undefined1 *)0x0;
      local_158 = (code *)0x0;
      (*pcVar3)(auStack_140);
    }
  }
  local_160 = &LAB_0223088c;
  local_158 = FUN_02b790a0;
  local_150 = &LAB_02b790a4;
  puStack_148 = &LAB_02b790a8;
  FUN_0162f274(param_1,&local_310);
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar3)(auStack_c0);
  }
  pcVar3 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  pcVar3 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar3)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar5 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0xc438bfc5324f3a9a;
  pcStack_308 = "Animation/ResetState";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_300 = 0x14;
  local_2f8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      puStack_2c8 = (undefined1 *)0x0;
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  local_2e0 = (code *)&LAB_01a33034;
  local_2d8 = FUN_02b790ac;
  local_2d0 = &LAB_02b790b0;
  puStack_2c8 = &LAB_02b790b4;
  FUN_0162f274(param_1,&local_310);
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar3)(auStack_c0);
  }
  pcVar3 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  pcVar3 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar3)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  return;
}


