/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016204c0; name: FUN_016204c0
 */


void FUN_016204c0(void)

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
  undefined8 local_300;
  char *pcStack_2f8;
  undefined8 local_2f0;
  long *local_2e8;
  undefined1 local_2e0;
  undefined1 *local_2d0;
  code *local_2c8;
  undefined1 *local_2c0;
  undefined1 *puStack_2b8;
  undefined1 auStack_2b0 [96];
  undefined8 local_250;
  code *local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [96];
  undefined1 *local_1d0;
  code *local_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 auStack_1b0 [96];
  undefined8 local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [96];
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [96];
  
  puVar1 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  local_300 = *(undefined8 *)PTR_DAT_047d3e30;
  pcStack_2f8 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_2f0 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  plVar9 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar9 != (long *)0x0) {
    local_2e8 = plVar9;
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  local_2e0 = 1;
  local_b8 = 0;
  local_300 = 0xa20b15638f2850de;
  pcStack_2f8 = "Title/Capture/UpdateCapture";
  local_2d0 = (undefined1 *)0x0;
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
  local_1d0 = (undefined1 *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0x1b;
  local_2e8 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  puVar3 = PTR_DAT_047d8918;
  local_2e8 = (long *)0x0;
  local_2d0 = &LAB_01a2e8c4;
  local_2c8 = FUN_02b22378;
  local_2c0 = &LAB_02b2237c;
  puStack_2b8 = &LAB_02b22380;
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  puVar5 = PTR_DAT_047d8928;
  puVar4 = PTR_DAT_047d8920;
  uVar8 = *(undefined8 *)PTR_DAT_047d8920;
  *(undefined8 *)PTR_DAT_047d8928 = uVar8;
  FUN_0162f274(uVar8,&local_300);
  pcVar6 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar6)(auStack_b0);
  }
  pcVar6 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar6)(auStack_130);
  }
  pcVar6 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (undefined1 *)0x0;
    puStack_1b8 = (undefined1 *)0x0;
    local_1d0 = (undefined1 *)0x0;
    local_1c8 = (code *)0x0;
    (*pcVar6)(auStack_1b0);
  }
  pcVar6 = local_248;
  if (local_248 != (code *)0x0) {
    local_240 = 0;
    uStack_238 = 0;
    local_250 = 0;
    local_248 = (code *)0x0;
    (*pcVar6)(auStack_230);
  }
  pcVar6 = local_2c8;
  if (local_2c8 != (code *)0x0) {
    local_2c0 = (undefined1 *)0x0;
    puStack_2b8 = (undefined1 *)0x0;
    local_2d0 = (undefined1 *)0x0;
    local_2c8 = (code *)0x0;
    (*pcVar6)(auStack_2b0);
  }
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_300 = *(undefined8 *)puVar2;
  pcStack_2f8 = *(char **)(puVar2 + 8);
  local_2f0 = *(undefined8 *)(puVar2 + 0x10);
  local_2e8 = *(long **)(puVar2 + 0x18);
  plVar9 = local_2e8;
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x18))();
    plVar9 = local_2e8;
  }
  local_2e0 = 1;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = (code *)0x0;
  local_300 = 0x833ea5d72f78287a;
  pcStack_2f8 = "Title/Capture/SetTexture";
  local_d0 = 0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = (undefined1 *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0x18;
  local_2e8 = (long *)0x0;
  if (plVar9 == (long *)0x0) {
    local_2e8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar9 + 0x20))();
    pcVar6 = local_2c8;
    local_2e8 = (long *)0x0;
    if (local_2c8 != (code *)0x0) {
      local_2c0 = (undefined1 *)0x0;
      puStack_2b8 = (undefined1 *)0x0;
      local_2d0 = (undefined1 *)0x0;
      local_2c8 = (code *)0x0;
      (*pcVar6)(auStack_2b0);
    }
  }
  pcVar6 = local_1c8;
  local_2d0 = &LAB_01a9e0c0;
  local_2c8 = FUN_02b22384;
  local_2c0 = &LAB_02b22388;
  puStack_2b8 = &LAB_02b2238c;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (undefined1 *)0x0;
    puStack_1b8 = (undefined1 *)0x0;
    local_1d0 = (undefined1 *)0x0;
    local_1c8 = (code *)0x0;
    (*pcVar6)(auStack_1b0);
  }
  local_1d0 = &LAB_01a90d10;
  local_1c8 = FUN_02b22390;
  local_1c0 = &LAB_02b22394;
  puStack_1b8 = &LAB_02b22398;
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar8 = *(undefined8 *)puVar4;
  *(undefined8 *)puVar5 = uVar8;
  FUN_0162f274(uVar8,&local_300);
  pcVar6 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar6)(auStack_b0);
  }
  pcVar6 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar6)(auStack_130);
  }
  pcVar6 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (undefined1 *)0x0;
    puStack_1b8 = (undefined1 *)0x0;
    local_1d0 = (undefined1 *)0x0;
    local_1c8 = (code *)0x0;
    (*pcVar6)(auStack_1b0);
  }
  pcVar6 = local_248;
  if (local_248 != (code *)0x0) {
    local_240 = 0;
    uStack_238 = 0;
    local_250 = 0;
    local_248 = (code *)0x0;
    (*pcVar6)(auStack_230);
  }
  pcVar6 = local_2c8;
  if (local_2c8 != (code *)0x0) {
    local_2c0 = (undefined1 *)0x0;
    puStack_2b8 = (undefined1 *)0x0;
    local_2d0 = (undefined1 *)0x0;
    local_2c8 = (code *)0x0;
    (*pcVar6)(auStack_2b0);
  }
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x20))();
  }
  return;
}


