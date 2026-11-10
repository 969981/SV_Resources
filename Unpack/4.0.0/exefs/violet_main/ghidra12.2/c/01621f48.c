/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01621f48; name: FUN_01621f48
 */


void FUN_01621f48(undefined8 param_1)

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
  undefined1 auStack_328 [8];
  undefined8 local_320;
  char *pcStack_318;
  undefined8 local_310;
  long *local_308;
  undefined1 local_300;
  undefined1 *local_2f0;
  code *local_2e8;
  undefined1 *local_2e0;
  undefined1 *puStack_2d8;
  undefined8 local_2d0;
  undefined1 *local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_270;
  code *local_268;
  undefined1 *local_260;
  undefined1 *puStack_258;
  undefined8 local_250;
  undefined1 *puStack_248;
  undefined1 *local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined8 local_1d0;
  undefined1 *puStack_1c8;
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [96];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  local_320 = *(undefined8 *)PTR_DAT_047d3e30;
  pcStack_318 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_310 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  plVar9 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar9 != (long *)0x0) {
    local_308 = plVar9;
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  local_300 = 1;
  local_d8 = 0;
  local_320 = 0x664ab02e5a35fa27;
  pcStack_318 = "Title/Dither/Dither";
  local_2f0 = (undefined1 *)0x0;
  local_2e8 = (code *)0x0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_f0 = 0;
  local_2e0 = (undefined1 *)0x0;
  puStack_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  puStack_258 = (undefined1 *)0x0;
  local_1f0 = (undefined1 *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  uStack_158 = 0;
  local_310 = 0x13;
  local_308 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  puVar3 = PTR_DAT_047d8918;
  local_2c8 = auStack_68;
  local_2c0 = auStack_48;
  local_308 = (long *)0x0;
  local_2f0 = &LAB_0212b024;
  local_2e8 = FUN_02b23048;
  local_2e0 = &LAB_02b2304c;
  puStack_2d8 = &LAB_02b23060;
  puStack_248 = auStack_70;
  local_270 = &LAB_0212c368;
  local_268 = FUN_02b23074;
  local_260 = &LAB_02b23078;
  puStack_258 = &LAB_02b23084;
  local_1f0 = &LAB_0212ccd8;
  local_1e8 = FUN_02b23090;
  local_1e0 = &LAB_02b23094;
  puStack_1d8 = &LAB_02b230a0;
  local_2d0 = param_1;
  local_250 = param_1;
  local_1d0 = param_1;
  puStack_1c8 = local_2c8;
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  puVar5 = PTR_DAT_047d8928;
  puVar4 = PTR_DAT_047d8920;
  uVar8 = *(undefined8 *)PTR_DAT_047d8920;
  *(undefined8 *)PTR_DAT_047d8928 = uVar8;
  FUN_0162f274(uVar8,&local_320);
  pcVar6 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar6)(auStack_d0);
  }
  pcVar6 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar6)(auStack_150);
  }
  pcVar6 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar6)(&local_1d0);
  }
  pcVar6 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    puStack_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar6)(&local_250);
  }
  pcVar6 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    puStack_2d8 = (undefined1 *)0x0;
    local_2f0 = (undefined1 *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar6)(&local_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar2;
  pcStack_318 = *(char **)(puVar2 + 8);
  local_310 = *(undefined8 *)(puVar2 + 0x10);
  local_308 = *(long **)(puVar2 + 0x18);
  plVar9 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar9 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x1362fd94689aaf2e;
  pcStack_318 = "Title/Dither/ResetDither";
  local_f0 = 0;
  local_2f0 = (undefined1 *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  puStack_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  puStack_258 = (undefined1 *)0x0;
  local_1f0 = (undefined1 *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  uStack_158 = 0;
  local_310 = 0x18;
  local_308 = (long *)0x0;
  if (plVar9 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar9 + 0x20))();
    pcVar6 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      puStack_2d8 = (undefined1 *)0x0;
      local_2f0 = (undefined1 *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar6)(&local_2d0);
    }
  }
  pcVar6 = local_268;
  local_2c8 = auStack_70;
  local_2c0 = auStack_48;
  local_2f0 = &LAB_0212cd80;
  local_2e8 = FUN_02b230ac;
  local_2e0 = &LAB_02b230b0;
  puStack_2d8 = &LAB_02b230c4;
  local_2d0 = param_1;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    puStack_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar6)(&local_250);
  }
  pcVar6 = local_1e8;
  puStack_248 = auStack_328;
  local_270 = &LAB_0212d4d4;
  local_268 = FUN_02b230d8;
  local_260 = &LAB_02b230dc;
  puStack_258 = &LAB_02b230e8;
  local_250 = param_1;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar6)(&local_1d0);
  }
  puStack_1c8 = auStack_70;
  local_1f0 = &LAB_0212de1c;
  local_1e8 = FUN_02b230f4;
  local_1e0 = &LAB_02b230f8;
  puStack_1d8 = &LAB_02b23104;
  local_1d0 = param_1;
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar8 = *(undefined8 *)puVar4;
  *(undefined8 *)puVar5 = uVar8;
  FUN_0162f274(uVar8,&local_320);
  pcVar6 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar6)(auStack_d0);
  }
  pcVar6 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar6)(auStack_150);
  }
  pcVar6 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar6)(&local_1d0);
  }
  pcVar6 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    puStack_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar6)(&local_250);
  }
  pcVar6 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    puStack_2d8 = (undefined1 *)0x0;
    local_2f0 = (undefined1 *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar6)(&local_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  return;
}


