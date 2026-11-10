/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012bb6d4; name: FUN_012bb6d4
 */


void FUN_012bb6d4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  undefined8 local_300;
  char *pcStack_2f8;
  undefined8 local_2f0;
  long *local_2e8;
  undefined1 local_2e0;
  code *local_2d0;
  code *local_2c8;
  undefined1 *local_2c0;
  undefined1 *puStack_2b8;
  undefined1 auStack_2b0 [96];
  undefined8 local_250;
  code *local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [96];
  undefined8 local_1d0;
  code *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [96];
  undefined1 *local_150;
  code *local_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 auStack_130 [96];
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [96];
  
  puVar1 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  local_300 = *(undefined8 *)PTR_DAT_047d3e30;
  pcStack_2f8 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_2f0 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  plVar5 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar5 != (long *)0x0) {
    local_2e8 = plVar5;
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_2e0 = 1;
  local_b8 = 0;
  local_300 = 0xe3ffdccc263b1d5a;
  pcStack_2f8 = "Scene/LoadSubScene";
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_c0 = 0;
  local_c8 = (code *)0x0;
  local_d0 = 0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = 0;
  local_1c8 = (code *)0x0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_150 = (undefined1 *)0x0;
  local_148 = (code *)0x0;
  local_140 = (undefined1 *)0x0;
  puStack_138 = (undefined1 *)0x0;
  local_2f0 = 0x12;
  local_2e8 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  local_2e8 = (long *)0x0;
  local_2d0 = FUN_018f4d3c;
  local_2c8 = FUN_02b79f94;
  local_2c0 = &LAB_02b79f98;
  puStack_2b8 = &LAB_02b79f9c;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar3)(auStack_b0);
  }
  pcVar3 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (undefined1 *)0x0;
    puStack_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar3)(auStack_130);
  }
  pcVar3 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1d0 = 0;
    local_1c8 = (code *)0x0;
    (*pcVar3)(auStack_1b0);
  }
  pcVar3 = local_248;
  if (local_248 != (code *)0x0) {
    local_240 = 0;
    uStack_238 = 0;
    local_250 = 0;
    local_248 = (code *)0x0;
    (*pcVar3)(auStack_230);
  }
  pcVar3 = local_2c8;
  if (local_2c8 != (code *)0x0) {
    local_2c0 = (undefined1 *)0x0;
    puStack_2b8 = (undefined1 *)0x0;
    local_2d0 = (code *)0x0;
    local_2c8 = (code *)0x0;
    (*pcVar3)(auStack_2b0);
  }
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_300 = *(undefined8 *)puVar2;
  pcStack_2f8 = *(char **)(puVar2 + 8);
  local_2f0 = *(undefined8 *)(puVar2 + 0x10);
  local_2e8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2e8;
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x18))();
    plVar5 = local_2e8;
  }
  local_2e0 = 1;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = (code *)0x0;
  local_300 = 0xc149e0b98cd1a37;
  pcStack_2f8 = "Scene/IsSetupSubScene";
  local_d0 = 0;
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = 0;
  local_1c8 = (code *)0x0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_150 = (undefined1 *)0x0;
  local_148 = (code *)0x0;
  local_140 = (undefined1 *)0x0;
  puStack_138 = (undefined1 *)0x0;
  local_2f0 = 0x15;
  local_2e8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2e8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_148;
    local_2e8 = (long *)0x0;
    if (local_148 != (code *)0x0) {
      local_140 = (undefined1 *)0x0;
      puStack_138 = (undefined1 *)0x0;
      local_150 = (undefined1 *)0x0;
      local_148 = (code *)0x0;
      (*pcVar3)(auStack_130);
    }
  }
  local_150 = &LAB_022511d0;
  local_148 = FUN_02b79fa0;
  local_140 = &LAB_02b79fa4;
  puStack_138 = &LAB_02b79fa8;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar3)(auStack_b0);
  }
  pcVar3 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (undefined1 *)0x0;
    puStack_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar3)(auStack_130);
  }
  pcVar3 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1d0 = 0;
    local_1c8 = (code *)0x0;
    (*pcVar3)(auStack_1b0);
  }
  pcVar3 = local_248;
  if (local_248 != (code *)0x0) {
    local_240 = 0;
    uStack_238 = 0;
    local_250 = 0;
    local_248 = (code *)0x0;
    (*pcVar3)(auStack_230);
  }
  pcVar3 = local_2c8;
  if (local_2c8 != (code *)0x0) {
    local_2c0 = (undefined1 *)0x0;
    puStack_2b8 = (undefined1 *)0x0;
    local_2d0 = (code *)0x0;
    local_2c8 = (code *)0x0;
    (*pcVar3)(auStack_2b0);
  }
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_300 = *(undefined8 *)puVar2;
  pcStack_2f8 = *(char **)(puVar2 + 8);
  local_2f0 = *(undefined8 *)(puVar2 + 0x10);
  local_2e8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2e8;
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x18))();
    plVar5 = local_2e8;
  }
  local_2e0 = 1;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = (code *)0x0;
  local_300 = 0x35fcb7ad182e857d;
  pcStack_2f8 = "Scene/TerminateSubScene";
  local_d0 = 0;
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = 0;
  local_1c8 = (code *)0x0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_150 = (undefined1 *)0x0;
  local_148 = (code *)0x0;
  local_140 = (undefined1 *)0x0;
  puStack_138 = (undefined1 *)0x0;
  local_2f0 = 0x17;
  local_2e8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2e8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2c8;
    local_2e8 = (long *)0x0;
    if (local_2c8 != (code *)0x0) {
      local_2c0 = (undefined1 *)0x0;
      puStack_2b8 = (undefined1 *)0x0;
      local_2d0 = (code *)0x0;
      local_2c8 = (code *)0x0;
      (*pcVar3)(auStack_2b0);
    }
  }
  local_2d0 = (code *)&LAB_018df1c0;
  local_2c8 = FUN_02b79fac;
  local_2c0 = &LAB_02b79fb0;
  puStack_2b8 = &LAB_02b79fb4;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar3)(auStack_b0);
  }
  pcVar3 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (undefined1 *)0x0;
    puStack_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar3)(auStack_130);
  }
  pcVar3 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1d0 = 0;
    local_1c8 = (code *)0x0;
    (*pcVar3)(auStack_1b0);
  }
  pcVar3 = local_248;
  if (local_248 != (code *)0x0) {
    local_240 = 0;
    uStack_238 = 0;
    local_250 = 0;
    local_248 = (code *)0x0;
    (*pcVar3)(auStack_230);
  }
  pcVar3 = local_2c8;
  if (local_2c8 != (code *)0x0) {
    local_2c0 = (undefined1 *)0x0;
    puStack_2b8 = (undefined1 *)0x0;
    local_2d0 = (code *)0x0;
    local_2c8 = (code *)0x0;
    (*pcVar3)(auStack_2b0);
  }
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x20))();
  }
  return;
}


