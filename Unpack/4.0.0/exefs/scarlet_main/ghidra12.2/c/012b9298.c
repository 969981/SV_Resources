/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012b9298; name: FUN_012b9298
 */


void FUN_012b9298(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  undefined8 local_2f0;
  char *pcStack_2e8;
  undefined8 local_2e0;
  long *local_2d8;
  undefined1 local_2d0;
  undefined1 *local_2c0;
  code *local_2b8;
  undefined1 *local_2b0;
  undefined1 *puStack_2a8;
  undefined1 auStack_2a0 [96];
  undefined8 local_240;
  code *local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [96];
  undefined1 *local_1c0;
  code *local_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 auStack_1a0 [96];
  undefined8 local_140;
  code *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [96];
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [96];
  
  puVar1 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  local_2f0 = *(undefined8 *)PTR_DAT_047d3e30;
  pcStack_2e8 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_2e0 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  plVar5 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar5 != (long *)0x0) {
    local_2d8 = plVar5;
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_2d0 = 1;
  local_a8 = 0;
  local_2f0 = 0xaf6c6f9caee0121b;
  pcStack_2e8 = "MultiView/Enable";
  local_2c0 = (undefined1 *)0x0;
  local_2b8 = (code *)0x0;
  local_b0 = 0;
  local_b8 = (code *)0x0;
  local_c0 = 0;
  local_2b0 = (undefined1 *)0x0;
  puStack_2a8 = (undefined1 *)0x0;
  local_240 = 0;
  local_238 = (code *)0x0;
  local_230 = 0;
  uStack_228 = 0;
  local_1c0 = (undefined1 *)0x0;
  local_1b8 = (code *)0x0;
  local_1b0 = (undefined1 *)0x0;
  puStack_1a8 = (undefined1 *)0x0;
  local_140 = 0;
  local_138 = (code *)0x0;
  local_130 = 0;
  uStack_128 = 0;
  local_2e0 = 0x10;
  local_2d8 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  local_2d8 = (long *)0x0;
  local_2c0 = &LAB_022502bc;
  local_2b8 = FUN_02b79a14;
  local_2b0 = &LAB_02b79a18;
  puStack_2a8 = &LAB_02b79a1c;
  local_1c0 = &LAB_02b79a20;
  local_1b8 = FUN_02b79ac0;
  local_1b0 = &LAB_02b79ac4;
  puStack_1a8 = &LAB_02b79ac8;
  FUN_0162f274(param_1,&local_2f0);
  pcVar3 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = 0;
    local_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar3)(auStack_a0);
  }
  pcVar3 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    (*pcVar3)(auStack_120);
  }
  pcVar3 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (undefined1 *)0x0;
    puStack_1a8 = (undefined1 *)0x0;
    local_1c0 = (undefined1 *)0x0;
    local_1b8 = (code *)0x0;
    (*pcVar3)(auStack_1a0);
  }
  pcVar3 = local_238;
  if (local_238 != (code *)0x0) {
    local_230 = 0;
    uStack_228 = 0;
    local_240 = 0;
    local_238 = (code *)0x0;
    (*pcVar3)(auStack_220);
  }
  pcVar3 = local_2b8;
  if (local_2b8 != (code *)0x0) {
    local_2b0 = (undefined1 *)0x0;
    puStack_2a8 = (undefined1 *)0x0;
    local_2c0 = (undefined1 *)0x0;
    local_2b8 = (code *)0x0;
    (*pcVar3)(auStack_2a0);
  }
  if (local_2d8 != (long *)0x0) {
    (**(code **)(*local_2d8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_2f0 = *(undefined8 *)puVar2;
  pcStack_2e8 = *(char **)(puVar2 + 8);
  local_2e0 = *(undefined8 *)(puVar2 + 0x10);
  local_2d8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2d8;
  if (local_2d8 != (long *)0x0) {
    (**(code **)(*local_2d8 + 0x18))();
    plVar5 = local_2d8;
  }
  local_2d0 = 1;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = (code *)0x0;
  local_2f0 = 0xfb0b39bf879b4cdd;
  pcStack_2e8 = "MultiView/ScissorEnable";
  local_c0 = 0;
  local_2c0 = (undefined1 *)0x0;
  local_2b8 = (code *)0x0;
  local_2b0 = (undefined1 *)0x0;
  puStack_2a8 = (undefined1 *)0x0;
  local_240 = 0;
  local_238 = (code *)0x0;
  local_230 = 0;
  uStack_228 = 0;
  local_1c0 = (undefined1 *)0x0;
  local_1b8 = (code *)0x0;
  local_1b0 = (undefined1 *)0x0;
  puStack_1a8 = (undefined1 *)0x0;
  local_140 = 0;
  local_138 = (code *)0x0;
  local_130 = 0;
  uStack_128 = 0;
  local_2e0 = 0x17;
  local_2d8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2d8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2b8;
    local_2d8 = (long *)0x0;
    if (local_2b8 != (code *)0x0) {
      local_2b0 = (undefined1 *)0x0;
      puStack_2a8 = (undefined1 *)0x0;
      local_2c0 = (undefined1 *)0x0;
      local_2b8 = (code *)0x0;
      (*pcVar3)(auStack_2a0);
    }
  }
  pcVar3 = local_1b8;
  local_2c0 = &LAB_02b79acc;
  local_2b8 = FUN_02b79e8c;
  local_2b0 = &LAB_02b79e90;
  puStack_2a8 = &LAB_02b79e94;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (undefined1 *)0x0;
    puStack_1a8 = (undefined1 *)0x0;
    local_1c0 = (undefined1 *)0x0;
    local_1b8 = (code *)0x0;
    (*pcVar3)(auStack_1a0);
  }
  local_1c0 = &LAB_02b79e98;
  local_1b8 = FUN_02b79f40;
  local_1b0 = &LAB_02b79f44;
  puStack_1a8 = &LAB_02b79f48;
  FUN_0162f274(param_1,&local_2f0);
  pcVar3 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = 0;
    local_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar3)(auStack_a0);
  }
  pcVar3 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    (*pcVar3)(auStack_120);
  }
  pcVar3 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (undefined1 *)0x0;
    puStack_1a8 = (undefined1 *)0x0;
    local_1c0 = (undefined1 *)0x0;
    local_1b8 = (code *)0x0;
    (*pcVar3)(auStack_1a0);
  }
  pcVar3 = local_238;
  if (local_238 != (code *)0x0) {
    local_230 = 0;
    uStack_228 = 0;
    local_240 = 0;
    local_238 = (code *)0x0;
    (*pcVar3)(auStack_220);
  }
  pcVar3 = local_2b8;
  if (local_2b8 != (code *)0x0) {
    local_2b0 = (undefined1 *)0x0;
    puStack_2a8 = (undefined1 *)0x0;
    local_2c0 = (undefined1 *)0x0;
    local_2b8 = (code *)0x0;
    (*pcVar3)(auStack_2a0);
  }
  if (local_2d8 != (long *)0x0) {
    (**(code **)(*local_2d8 + 0x20))();
  }
  return;
}


