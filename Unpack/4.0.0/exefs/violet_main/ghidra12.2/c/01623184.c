/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01623184; name: FUN_01623184
 */


void FUN_01623184(void)

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
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  local_310 = *(undefined8 *)PTR_DAT_047d3e30;
  pcStack_308 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_300 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  plVar9 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar9 != (long *)0x0) {
    local_2f8 = plVar9;
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_310 = 0x66b6adc4559e4ff0;
  pcStack_308 = "Title/EffectCollision/AddEffectCollision";
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
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_300 = 0x28;
  local_2f8 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  puVar3 = PTR_DAT_047d8918;
  local_2f8 = (long *)0x0;
  local_2e0 = &LAB_0213136c;
  local_2d8 = FUN_02b23310;
  local_2d0 = &LAB_02b23314;
  puStack_2c8 = &LAB_02b23318;
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  puVar5 = PTR_DAT_047d8928;
  puVar4 = PTR_DAT_047d8920;
  uVar8 = *(undefined8 *)PTR_DAT_047d8920;
  *(undefined8 *)PTR_DAT_047d8928 = uVar8;
  FUN_0162f274(uVar8,&local_310);
  pcVar6 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar6)(auStack_c0);
  }
  pcVar6 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar6)(auStack_140);
  }
  pcVar6 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar6)(auStack_1c0);
  }
  pcVar6 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar6)(auStack_240);
  }
  pcVar6 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar6)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar9 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar9 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0xd1b1bf11d6ceebd5;
  pcStack_308 = "Title/EffectCollision/RemoveEffectCollision";
  local_e0 = 0;
  local_2e0 = (undefined1 *)0x0;
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
  local_300 = 0x2b;
  local_2f8 = (long *)0x0;
  if (plVar9 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar9 + 0x20))();
    pcVar6 = local_1d8;
    local_2f8 = (long *)0x0;
    if (local_1d8 != (code *)0x0) {
      local_1d0 = (undefined1 *)0x0;
      puStack_1c8 = (undefined1 *)0x0;
      local_1e0 = (code *)0x0;
      local_1d8 = (code *)0x0;
      (*pcVar6)(auStack_1c0);
    }
  }
  local_1e0 = FUN_02131d30;
  local_1d8 = FUN_02b2331c;
  local_1d0 = &LAB_02b23320;
  puStack_1c8 = &LAB_02b23324;
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar8 = *(undefined8 *)puVar4;
  *(undefined8 *)puVar5 = uVar8;
  FUN_0162f274(uVar8,&local_310);
  pcVar6 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar6)(auStack_c0);
  }
  pcVar6 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar6)(auStack_140);
  }
  pcVar6 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar6)(auStack_1c0);
  }
  pcVar6 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar6)(auStack_240);
  }
  pcVar6 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar6)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar9 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar9 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0xc1e5f9a0f38caa4e;
  pcStack_308 = "Title/EffectCollision/CheckHitEffectCollision";
  local_e0 = 0;
  local_2e0 = (undefined1 *)0x0;
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
  local_300 = 0x2d;
  local_2f8 = (long *)0x0;
  if (plVar9 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar9 + 0x20))();
    pcVar6 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      puStack_2c8 = (undefined1 *)0x0;
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar6)(auStack_2c0);
    }
  }
  pcVar6 = local_258;
  local_2e0 = &LAB_021320f4;
  local_2d8 = FUN_02b23328;
  local_2d0 = &LAB_02b23440;
  puStack_2c8 = &LAB_02b23444;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar6)(auStack_240);
  }
  local_260 = &LAB_0148b1bc;
  local_258 = FUN_02b23448;
  local_250 = &LAB_02b2344c;
  puStack_248 = &LAB_02b23450;
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar8 = *(undefined8 *)puVar4;
  *(undefined8 *)puVar5 = uVar8;
  FUN_0162f274(uVar8,&local_310);
  pcVar6 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar6)(auStack_c0);
  }
  pcVar6 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar6)(auStack_140);
  }
  pcVar6 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar6)(auStack_1c0);
  }
  pcVar6 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar6)(auStack_240);
  }
  pcVar6 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar6)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  return;
}


