/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0161fff0; name: FUN_0161fff0
 */


void FUN_0161fff0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  code *pcVar9;
  undefined1 auStack_308 [8];
  undefined8 local_300;
  char *pcStack_2f8;
  undefined8 local_2f0;
  long *local_2e8;
  undefined1 local_2e0;
  undefined1 *local_2d0;
  code *local_2c8;
  undefined1 *local_2c0;
  undefined1 *puStack_2b8;
  undefined1 *local_2b0 [12];
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
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  local_300 = *(undefined8 *)PTR_DAT_047d3e30;
  pcStack_2f8 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_2f0 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  plVar8 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar8 != (long *)0x0) {
    local_2e8 = plVar8;
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  local_2e0 = 1;
  local_b8 = 0;
  local_300 = 0x1e26d33146a8dc43;
  pcStack_2f8 = "Title/Fade/SetFadeOut";
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
  local_1d0 = 0;
  local_1c8 = (code *)0x0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0x15;
  local_2e8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  puVar3 = PTR_DAT_047d8918;
  local_2e8 = (long *)0x0;
  local_2b0[0] = auStack_308;
  local_2d0 = &LAB_015ee3a4;
  local_2c8 = FUN_02b2036c;
  local_2c0 = &LAB_02b20370;
  puStack_2b8 = &LAB_02b2037c;
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  puVar5 = PTR_DAT_047d8928;
  puVar4 = PTR_DAT_047d8920;
  uVar7 = *(undefined8 *)PTR_DAT_047d8920;
  *(undefined8 *)PTR_DAT_047d8928 = uVar7;
  FUN_0162f274(uVar7,&local_300);
  pcVar9 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar9)(auStack_b0);
  }
  pcVar9 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar9)(auStack_130);
  }
  pcVar9 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1d0 = 0;
    local_1c8 = (code *)0x0;
    (*pcVar9)(auStack_1b0);
  }
  pcVar9 = local_248;
  if (local_248 != (code *)0x0) {
    local_240 = 0;
    uStack_238 = 0;
    local_250 = 0;
    local_248 = (code *)0x0;
    (*pcVar9)(auStack_230);
  }
  pcVar9 = local_2c8;
  if (local_2c8 != (code *)0x0) {
    local_2c0 = (undefined1 *)0x0;
    puStack_2b8 = (undefined1 *)0x0;
    local_2d0 = (undefined1 *)0x0;
    local_2c8 = (code *)0x0;
    (*pcVar9)(local_2b0);
  }
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_300 = *(undefined8 *)puVar2;
  pcStack_2f8 = *(char **)(puVar2 + 8);
  local_2f0 = *(undefined8 *)(puVar2 + 0x10);
  local_2e8 = *(long **)(puVar2 + 0x18);
  plVar8 = local_2e8;
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x18))();
    plVar8 = local_2e8;
  }
  local_2e0 = 1;
  local_b8 = 0;
  local_300 = 0x77a03b67b0a6178a;
  pcStack_2f8 = "Title/Fade/SetFadeIn";
  local_c0 = 0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (code *)0x0;
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
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0x14;
  local_2e8 = (long *)0x0;
  pcVar9 = (code *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
    pcVar9 = local_2c8;
  }
  local_2e8 = (long *)0x0;
  if (pcVar9 != (code *)0x0) {
    local_2c0 = (undefined1 *)0x0;
    puStack_2b8 = (undefined1 *)0x0;
    local_2d0 = (undefined1 *)0x0;
    local_2c8 = (code *)0x0;
    (*pcVar9)(local_2b0);
  }
  local_2b0[0] = auStack_308;
  local_2d0 = &LAB_014f3820;
  local_2c8 = FUN_02b20388;
  local_2c0 = &LAB_02b2038c;
  puStack_2b8 = &LAB_02b20398;
  if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar6 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar7 = *(undefined8 *)puVar4;
  *(undefined8 *)puVar5 = uVar7;
  FUN_0162f274(uVar7,&local_300);
  pcVar9 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar9)(auStack_b0);
  }
  pcVar9 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar9)(auStack_130);
  }
  pcVar9 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1d0 = 0;
    local_1c8 = (code *)0x0;
    (*pcVar9)(auStack_1b0);
  }
  pcVar9 = local_248;
  if (local_248 != (code *)0x0) {
    local_240 = 0;
    uStack_238 = 0;
    local_250 = 0;
    local_248 = (code *)0x0;
    (*pcVar9)(auStack_230);
  }
  pcVar9 = local_2c8;
  if (local_2c8 != (code *)0x0) {
    local_2c0 = (undefined1 *)0x0;
    puStack_2b8 = (undefined1 *)0x0;
    local_2d0 = (undefined1 *)0x0;
    local_2c8 = (code *)0x0;
    (*pcVar9)(local_2b0);
  }
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x20))();
  }
  return;
}


