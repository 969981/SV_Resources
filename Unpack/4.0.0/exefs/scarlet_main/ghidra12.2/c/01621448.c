/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01621448; name: FUN_01621448
 */


void FUN_01621448(void)

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
  code *local_2e0;
  code *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined1 *local_2c0 [12];
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
  undefined1 auStack_48 [8];
  
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
  local_310 = 0xabaa96d38853691e;
  pcStack_308 = "Title/Weather/WeatherChange/WeatherChange";
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_e0 = 0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (undefined1 *)0x0;
  local_260 = 0;
  local_258 = (code *)0x0;
  local_250 = 0;
  uStack_248 = 0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_300 = 0x29;
  local_2f8 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  puVar3 = PTR_DAT_047d8918;
  local_2f8 = (long *)0x0;
  local_2c0[0] = auStack_48;
  local_2e0 = (code *)&LAB_0212f928;
  local_2d8 = FUN_02b23270;
  local_2d0 = &LAB_02b23274;
  local_2c8 = &LAB_02b23280;
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
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar6)(auStack_140);
  }
  pcVar6 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
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
    local_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar6)(local_2c0);
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
  local_310 = 0xb1078518f124ab2d;
  pcStack_308 = "Title/Weather/WeatherChange/WeatherReset";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (undefined1 *)0x0;
  local_260 = 0;
  local_258 = (code *)0x0;
  local_250 = 0;
  uStack_248 = 0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_300 = 0x28;
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
      local_2c8 = (undefined1 *)0x0;
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar6)(local_2c0);
    }
  }
  pcVar6 = local_158;
  local_2e0 = FUN_0212ff54;
  local_2d8 = FUN_02b2328c;
  local_2d0 = &LAB_02b23290;
  local_2c0[0] = auStack_48;
  local_2c8 = &LAB_02b2329c;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar6)(auStack_140);
  }
  pcVar6 = local_1d8;
  local_160 = &LAB_0213004c;
  local_158 = FUN_02b232a8;
  local_150 = &LAB_02b232ac;
  puStack_148 = &LAB_02b232b0;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar6)(auStack_1c0);
  }
  local_1e0 = &LAB_021301c0;
  local_1d8 = FUN_02b232b4;
  local_1d0 = &LAB_02b232b8;
  puStack_1c8 = &LAB_02b232bc;
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
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar6)(auStack_140);
  }
  pcVar6 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
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
    local_2c8 = (undefined1 *)0x0;
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar6)(local_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  return;
}


