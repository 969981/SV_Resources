/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012d3f40; name: FUN_012d3f40
 */


void FUN_012d3f40(undefined8 param_1)

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
  local_300 = 0xebe9c35b4a7af2ec;
  pcStack_2f8 = "CameraAnimation/IsLoaded";
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
  local_2f0 = 0x18;
  local_2e8 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  local_2e8 = (long *)0x0;
  local_150 = &LAB_017c3b40;
  local_148 = FUN_02b794d8;
  local_140 = &LAB_02b794dc;
  puStack_138 = &LAB_02b794e0;
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
  local_300 = 0x7a50a7d4e176e345;
  pcStack_2f8 = "CameraAnimation/Load";
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
  local_2f0 = 0x14;
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
  local_2d0 = (code *)&LAB_018968d4;
  local_2c8 = FUN_02b794e4;
  local_2c0 = &LAB_02b794e8;
  puStack_2b8 = &LAB_02b794ec;
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
  local_300 = 0x736d2a81d92d9ec9;
  pcStack_2f8 = "CameraAnimation/Pause";
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
  local_2d0 = (code *)&LAB_02241838;
  local_2c8 = FUN_02b794f0;
  local_2c0 = &LAB_02b794f4;
  puStack_2b8 = &LAB_02b794f8;
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
  local_300 = 0x5a013a7bd454d2bf;
  pcStack_2f8 = "CameraAnimation/Play";
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
  local_2f0 = 0x14;
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
  local_2d0 = FUN_02241b9c;
  local_2c8 = FUN_02b794fc;
  local_2c0 = &LAB_02b79500;
  puStack_2b8 = &LAB_02b79504;
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
  local_300 = 0xd2077adf750b9f0e;
  pcStack_2f8 = "CameraAnimation/Unload";
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
  local_2f0 = 0x16;
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
  local_2d0 = FUN_022422e4;
  local_2c8 = FUN_02b79508;
  local_2c0 = &LAB_02b7950c;
  puStack_2b8 = &LAB_02b79510;
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


