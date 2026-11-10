/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012fac04; name: FUN_012fac04
 */


void FUN_012fac04(undefined8 param_1)

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
  local_310 = 0x74210b8856b05fa4;
  pcStack_308 = "OffScreen/Enable";
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
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_300 = 0x10;
  local_2f8 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  local_2f8 = (long *)0x0;
  local_2e0 = (code *)&LAB_0191a578;
  local_2d8 = FUN_02b7972c;
  local_2d0 = &LAB_02b79730;
  puStack_2c8 = &LAB_02b79734;
  local_1e0 = (code *)&LAB_0191a7f4;
  local_1d8 = FUN_02b79738;
  local_1d0 = &LAB_02b7973c;
  puStack_1c8 = &LAB_02b79740;
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
  local_310 = 0x9d6230d0ef8f85d8;
  pcStack_308 = "OffScreen/RenderEnable";
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
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
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
  pcVar3 = local_1d8;
  local_2e0 = (code *)&LAB_019d7f5c;
  local_2d8 = FUN_02b79744;
  local_2d0 = &LAB_02b79748;
  puStack_2c8 = &LAB_02b7974c;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  local_1e0 = (code *)&LAB_019d81d8;
  local_1d8 = FUN_02b79750;
  local_1d0 = &LAB_02b79754;
  puStack_1c8 = &LAB_02b79758;
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
  local_310 = 0xed1272f11fe3412b;
  pcStack_308 = "OffScreen/RegisterModel";
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
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
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
  pcVar3 = local_1d8;
  local_2e0 = (code *)&LAB_019d0e38;
  local_2d8 = FUN_02b7975c;
  local_2d0 = &LAB_02b79760;
  puStack_2c8 = &LAB_02b79764;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  local_1e0 = (code *)&LAB_019ce538;
  local_1d8 = FUN_02b79768;
  local_1d0 = &LAB_02b7976c;
  puStack_1c8 = &LAB_02b79770;
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
  local_310 = 0xbd029003e1654170;
  pcStack_308 = "OffScreen/RegisterParticle";
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
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
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
  pcVar3 = local_1d8;
  local_2e0 = FUN_01a83e5c;
  local_2d8 = FUN_02b79774;
  local_2d0 = &LAB_02b79778;
  puStack_2c8 = &LAB_02b7977c;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  local_1e0 = FUN_01a81520;
  local_1d8 = FUN_02b79780;
  local_1d0 = &LAB_02b79784;
  puStack_1c8 = &LAB_02b79788;
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
  local_310 = 0xd84aec0a5a9efe62;
  pcStack_308 = "OffScreen/SetCamera";
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
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
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
  local_2e0 = (code *)&LAB_019983d8;
  local_2d8 = FUN_02b7978c;
  local_2d0 = &LAB_02b79790;
  puStack_2c8 = &LAB_02b79794;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  local_1e0 = (code *)&LAB_01916e34;
  local_1d8 = FUN_02b79798;
  local_1d0 = &LAB_02b7979c;
  puStack_1c8 = &LAB_02b797a0;
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
  local_310 = 0xf2ee27e7eac1110a;
  pcStack_308 = "OffScreen/SetPrimitiveAlpha";
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
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  pcVar3 = local_258;
  local_2e0 = (code *)&LAB_019975e8;
  local_2d8 = FUN_02b797a4;
  local_2d0 = &LAB_02b797a8;
  puStack_2c8 = &LAB_02b797ac;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar3)(auStack_240);
  }
  pcVar3 = local_1d8;
  local_260 = &LAB_01734c08;
  local_258 = FUN_02b797b0;
  local_250 = &LAB_02b797b4;
  puStack_248 = &LAB_02b797b8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  local_1e0 = (code *)&LAB_01981c00;
  local_1d8 = FUN_02b797bc;
  local_1d0 = &LAB_02b797c0;
  puStack_1c8 = &LAB_02b797c4;
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
  local_310 = 0x4bd91e5f00469258;
  pcStack_308 = "OffScreen/SetTexture";
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
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
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
  pcVar3 = local_1d8;
  local_2e0 = FUN_01abed20;
  local_2d8 = FUN_02b797c8;
  local_2d0 = &LAB_02b797cc;
  puStack_2c8 = &LAB_02b797d0;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar3)(auStack_1c0);
  }
  local_1e0 = (code *)&LAB_01aba168;
  local_1d8 = FUN_02b797d4;
  local_1d0 = &LAB_02b797d8;
  puStack_1c8 = &LAB_02b797dc;
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
  local_310 = 0x2bd9cbfd1951966d;
  pcStack_308 = "OffScreen/ChangePrimitivePass";
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
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar3)(auStack_2c0);
    }
  }
  local_2e0 = (code *)&LAB_02249458;
  local_2d8 = FUN_02b797e0;
  local_2d0 = &LAB_02b797e4;
  puStack_2c8 = &LAB_02b797e8;
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


