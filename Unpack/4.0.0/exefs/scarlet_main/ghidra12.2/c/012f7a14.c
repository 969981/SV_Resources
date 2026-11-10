/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012f7a14; name: FUN_012f7a14
 */


void FUN_012f7a14(undefined8 param_1)

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
  undefined1 *local_2e0;
  code *local_2d8;
  undefined1 *local_2d0;
  undefined1 *puStack_2c8;
  undefined1 auStack_2c0 [96];
  undefined1 *local_260;
  code *local_258;
  undefined1 *local_250;
  undefined1 *puStack_248;
  undefined1 auStack_240 [96];
  undefined1 *local_1e0;
  code *local_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 auStack_1c0 [96];
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
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
  local_310 = 0x69f1f9a90bb7d44e;
  pcStack_308 = "Light/OnOff";
  local_2e0 = (undefined1 *)0x0;
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
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_300 = 0xb;
  local_2f8 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  local_2f8 = (long *)0x0;
  local_2e0 = &LAB_02244e48;
  local_2d8 = FUN_02b79660;
  local_2d0 = &LAB_02b79664;
  puStack_2c8 = &LAB_02b79668;
  local_1e0 = &LAB_02245110;
  local_1d8 = FUN_02b7966c;
  local_1d0 = &LAB_02b79670;
  puStack_1c8 = &LAB_02b79674;
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
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
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
    local_2e0 = (undefined1 *)0x0;
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
  local_310 = 0x43f70142b7406f7e;
  pcStack_308 = "Light/SetDirectApplierFloat";
  local_e0 = 0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
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
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  pcVar3 = local_258;
  local_2e0 = &LAB_02245554;
  local_2d8 = FUN_02b79678;
  local_2d0 = &LAB_02b7967c;
  puStack_2c8 = &LAB_02b79680;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_1d8;
  local_260 = &LAB_02245f28;
  local_258 = FUN_02b79684;
  local_250 = &LAB_02b79688;
  puStack_248 = &LAB_02b7968c;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  local_1e0 = &LAB_0224663c;
  local_1d8 = FUN_02b79690;
  local_1d0 = &LAB_02b79694;
  puStack_1c8 = &LAB_02b79698;
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
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
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
    local_2e0 = (undefined1 *)0x0;
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
  local_310 = 0x7a55ea4b5def05cd;
  pcStack_308 = "Light/SetDirectApplierVector4";
  local_e0 = 0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_300 = 0x1d;
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
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  pcVar3 = local_258;
  local_2e0 = &LAB_019801ac;
  local_2d8 = FUN_02b7969c;
  local_2d0 = &LAB_02b796a0;
  puStack_2c8 = &LAB_02b796a4;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_1d8;
  local_260 = &LAB_02246b20;
  local_258 = FUN_02b796a8;
  local_250 = &LAB_02b796ac;
  puStack_248 = &LAB_02b796b0;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  local_1e0 = &LAB_01914ab4;
  local_1d8 = FUN_02b796b4;
  local_1d0 = &LAB_02b796b8;
  puStack_1c8 = &LAB_02b796bc;
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
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
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
    local_2e0 = (undefined1 *)0x0;
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
  local_310 = 0xcdfd682cd2ed2b5a;
  pcStack_308 = "Light/SetDirectApplierRotation";
  local_e0 = 0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_300 = 0x1e;
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
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  pcVar3 = local_258;
  local_2e0 = &LAB_02247364;
  local_2d8 = FUN_02b796c0;
  local_2d0 = &LAB_02b796c4;
  puStack_2c8 = &LAB_02b796c8;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_1d8;
  local_260 = &LAB_02247fbc;
  local_258 = FUN_02b796cc;
  local_250 = &LAB_02b796d0;
  puStack_248 = &LAB_02b796d4;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  local_1e0 = &LAB_022489e8;
  local_1d8 = FUN_02b796d8;
  local_1d0 = &LAB_02b796dc;
  puStack_1c8 = &LAB_02b796e0;
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
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
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
    local_2e0 = (undefined1 *)0x0;
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
  local_310 = 0xa578f7a2ee7cb949;
  pcStack_308 = "Light/ResetDirectApplier";
  local_e0 = 0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
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
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  local_2e0 = &LAB_017df3cc;
  local_2d8 = FUN_02b796e4;
  local_2d0 = &LAB_02b796e8;
  puStack_2c8 = &LAB_02b796ec;
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
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
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
    local_2e0 = (undefined1 *)0x0;
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
  local_310 = 0x1606bf103dd47f44;
  pcStack_308 = "Light/SetDirectApplierPriority";
  local_e0 = 0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_300 = 0x1e;
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
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  pcVar3 = local_1d8;
  local_2e0 = &LAB_0193ddc0;
  local_2d8 = FUN_02b796f0;
  local_2d0 = &LAB_02b796f4;
  puStack_2c8 = &LAB_02b796f8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  local_1e0 = &LAB_0192b08c;
  local_1d8 = FUN_02b796fc;
  local_1d0 = &LAB_02b79700;
  puStack_1c8 = &LAB_02b79704;
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
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
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
    local_2e0 = (undefined1 *)0x0;
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
  local_310 = 0xb0b0cc017c8ddcbf;
  pcStack_308 = "Light/SetSingleApplierPriority";
  local_e0 = 0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_300 = 0x1e;
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
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  pcVar3 = local_1d8;
  local_2e0 = &LAB_018933e0;
  local_2d8 = FUN_02b79708;
  local_2d0 = &LAB_02b7970c;
  puStack_2c8 = &LAB_02b79710;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  local_1e0 = &LAB_01865f38;
  local_1d8 = FUN_02b79714;
  local_1d0 = &LAB_02b79718;
  puStack_1c8 = &LAB_02b7971c;
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
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar3)(auStack_140);
  }
  pcVar3 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
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
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar3)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  return;
}


