/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016238d8; name: FUN_016238d8
 */


void FUN_016238d8(void)

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
  undefined8 local_260;
  code *local_258;
  undefined8 local_250;
  undefined8 uStack_248;
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
  local_310 = 0x705c09d4959bfade;
  pcStack_308 = "Title/Pokemon/InFrameScale";
  local_2e0 = (undefined1 *)0x0;
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
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  puVar3 = PTR_DAT_047d8918;
  local_2f8 = (long *)0x0;
  local_2e0 = &LAB_019d7990;
  local_2d8 = FUN_02b21c8c;
  local_2d0 = &LAB_02b21c90;
  puStack_2c8 = &LAB_02b21c94;
  local_1e0 = (code *)&LAB_019cdcac;
  local_1d8 = FUN_02b21c98;
  local_1d0 = &LAB_02b21c9c;
  puStack_1c8 = &LAB_02b21ca0;
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
    local_250 = 0;
    uStack_248 = 0;
    local_260 = 0;
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
  local_310 = 0x3a98508ab04fb39e;
  pcStack_308 = "Title/Pokemon/ChangeForm";
  local_e0 = 0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = 0;
  local_258 = (code *)0x0;
  local_250 = 0;
  uStack_248 = 0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_300 = 0x18;
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
  local_2e0 = &LAB_01a07684;
  local_2d8 = FUN_02b21ca4;
  local_2d0 = &LAB_02b21ca8;
  puStack_2c8 = &LAB_02b21cac;
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
    local_250 = 0;
    uStack_248 = 0;
    local_260 = 0;
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
  local_310 = 0xb767ae3828cbd8b5;
  pcStack_308 = "Title/Pokemon/HideFloorEnable";
  local_e0 = 0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  puStack_2c8 = (undefined1 *)0x0;
  local_260 = 0;
  local_258 = (code *)0x0;
  local_250 = 0;
  uStack_248 = 0;
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
  pcVar6 = local_1d8;
  local_2e0 = &LAB_021280f4;
  local_2d8 = FUN_02b21cb0;
  local_2d0 = &LAB_02b21cb4;
  puStack_2c8 = &LAB_02b21cb8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar6)(auStack_1c0);
  }
  local_1e0 = FUN_02128468;
  local_1d8 = FUN_02b21cbc;
  local_1d0 = &LAB_02b21cc0;
  puStack_1c8 = &LAB_02b21cc4;
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
    local_250 = 0;
    uStack_248 = 0;
    local_260 = 0;
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


