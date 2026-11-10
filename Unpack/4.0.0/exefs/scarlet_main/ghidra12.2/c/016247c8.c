/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016247c8; name: FUN_016247c8
 */


void FUN_016247c8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
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
  undefined8 local_260;
  code *local_258;
  undefined8 local_250;
  undefined8 uStack_248;
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
  
  puVar2 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar3 = PTR_DAT_047d3e30;
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
  local_310 = 0x521913c6c1d44232;
  pcStack_308 = "Title/LookAt/LookAtGameObject";
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_e0 = 0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = 0;
  local_258 = (code *)0x0;
  local_250 = 0;
  uStack_248 = 0;
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
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  puVar4 = PTR_DAT_047d8918;
  local_2f8 = (long *)0x0;
  local_2e0 = FUN_02b25aa0;
  local_2d8 = FUN_02b266fc;
  local_2d0 = &LAB_02b26700;
  puStack_2c8 = &LAB_02b26704;
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  puVar6 = PTR_DAT_047d8928;
  puVar5 = PTR_DAT_047d8920;
  lVar10 = *(long *)PTR_DAT_047d8920;
  *(long *)PTR_DAT_047d8928 = lVar10;
  lVar1 = *(long *)(lVar10 + 0x30);
  if (lVar1 == *(long *)(lVar10 + 0x38)) {
    FUN_0162f8f8(lVar10 + 0x28,&local_310);
  }
  else {
    FUN_0162f2d0(lVar10 + 0x40,lVar1,&local_310);
    *(long *)(lVar10 + 0x30) = lVar1 + 0x2b0;
  }
  pcVar7 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar7)(auStack_c0);
  }
  pcVar7 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar7)(auStack_140);
  }
  pcVar7 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar7)(auStack_1c0);
  }
  pcVar7 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = 0;
    uStack_248 = 0;
    local_260 = 0;
    local_258 = (code *)0x0;
    (*pcVar7)(auStack_240);
  }
  pcVar7 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar7)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar3;
  pcStack_308 = *(char **)(puVar3 + 8);
  local_300 = *(undefined8 *)(puVar3 + 0x10);
  local_2f8 = *(long **)(puVar3 + 0x18);
  plVar9 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar9 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0x47de68abb4f27e24;
  pcStack_308 = "Title/LookAt/LookAtPosition";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = 0;
  local_258 = (code *)0x0;
  local_250 = 0;
  uStack_248 = 0;
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
  if (plVar9 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar9 + 0x20))();
    pcVar7 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      puStack_2c8 = (undefined1 *)0x0;
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar7)(auStack_2c0);
    }
  }
  local_2e0 = (code *)&LAB_02b26708;
  local_2d8 = FUN_02b26da8;
  local_2d0 = &LAB_02b26dac;
  puStack_2c8 = &LAB_02b26db0;
  if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  lVar10 = *(long *)puVar5;
  *(long *)puVar6 = lVar10;
  lVar1 = *(long *)(lVar10 + 0x30);
  if (lVar1 == *(long *)(lVar10 + 0x38)) {
    FUN_0162f8f8(lVar10 + 0x28,&local_310);
  }
  else {
    FUN_0162f2d0(lVar10 + 0x40,lVar1,&local_310);
    *(long *)(lVar10 + 0x30) = lVar1 + 0x2b0;
  }
  pcVar7 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar7)(auStack_c0);
  }
  pcVar7 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar7)(auStack_140);
  }
  pcVar7 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar7)(auStack_1c0);
  }
  pcVar7 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = 0;
    uStack_248 = 0;
    local_260 = 0;
    local_258 = (code *)0x0;
    (*pcVar7)(auStack_240);
  }
  pcVar7 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar7)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar3;
  pcStack_308 = *(char **)(puVar3 + 8);
  local_300 = *(undefined8 *)(puVar3 + 0x10);
  local_2f8 = *(long **)(puVar3 + 0x18);
  plVar9 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar9 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0xca4b77120972dd59;
  pcStack_308 = "Title/LookAt/DisableLookAt";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = 0;
  local_258 = (code *)0x0;
  local_250 = 0;
  uStack_248 = 0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_300 = 0x1a;
  local_2f8 = (long *)0x0;
  if (plVar9 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar9 + 0x20))();
    pcVar7 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      puStack_2c8 = (undefined1 *)0x0;
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar7)(auStack_2c0);
    }
  }
  local_2e0 = (code *)&LAB_02b26db4;
  local_2d8 = FUN_02b272c4;
  local_2d0 = &LAB_02b272c8;
  puStack_2c8 = &LAB_02b272cc;
  if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  lVar10 = *(long *)puVar5;
  *(long *)puVar6 = lVar10;
  lVar1 = *(long *)(lVar10 + 0x30);
  if (lVar1 == *(long *)(lVar10 + 0x38)) {
    FUN_0162f8f8(lVar10 + 0x28,&local_310);
  }
  else {
    FUN_0162f2d0(lVar10 + 0x40,lVar1,&local_310);
    *(long *)(lVar10 + 0x30) = lVar1 + 0x2b0;
  }
  pcVar7 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar7)(auStack_c0);
  }
  pcVar7 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar7)(auStack_140);
  }
  pcVar7 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar7)(auStack_1c0);
  }
  pcVar7 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = 0;
    uStack_248 = 0;
    local_260 = 0;
    local_258 = (code *)0x0;
    (*pcVar7)(auStack_240);
  }
  pcVar7 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar7)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar3;
  pcStack_308 = *(char **)(puVar3 + 8);
  local_300 = *(undefined8 *)(puVar3 + 0x10);
  local_2f8 = *(long **)(puVar3 + 0x18);
  plVar9 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar9 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0x7cefd643003999d7;
  pcStack_308 = "Title/LookAt/IgnoreLookAtDisable";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = 0;
  local_258 = (code *)0x0;
  local_250 = 0;
  uStack_248 = 0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_300 = 0x20;
  local_2f8 = (long *)0x0;
  if (plVar9 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar9 + 0x20))();
    pcVar7 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      puStack_2c8 = (undefined1 *)0x0;
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar7)(auStack_2c0);
    }
  }
  pcVar7 = local_1d8;
  local_2e0 = (code *)&LAB_02b272d0;
  local_2d8 = FUN_02b27754;
  local_2d0 = &LAB_02b27758;
  puStack_2c8 = &LAB_02b2775c;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar7)(auStack_1c0);
  }
  local_1e0 = &LAB_02b27760;
  local_1d8 = FUN_02b27be0;
  local_1d0 = &LAB_02b27be4;
  puStack_1c8 = &LAB_02b27be8;
  if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  lVar10 = *(long *)puVar5;
  *(long *)puVar6 = lVar10;
  lVar1 = *(long *)(lVar10 + 0x30);
  if (lVar1 == *(long *)(lVar10 + 0x38)) {
    FUN_0162f8f8(lVar10 + 0x28,&local_310);
  }
  else {
    FUN_0162f2d0(lVar10 + 0x40,lVar1,&local_310);
    *(long *)(lVar10 + 0x30) = lVar1 + 0x2b0;
  }
  pcVar7 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar7)(auStack_c0);
  }
  pcVar7 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar7)(auStack_140);
  }
  pcVar7 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar7)(auStack_1c0);
  }
  pcVar7 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = 0;
    uStack_248 = 0;
    local_260 = 0;
    local_258 = (code *)0x0;
    (*pcVar7)(auStack_240);
  }
  pcVar7 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    puStack_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar7)(auStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  return;
}


