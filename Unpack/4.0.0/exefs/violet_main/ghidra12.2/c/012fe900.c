/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012fe900; name: FUN_012fe900
 */


void FUN_012fe900(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  code *pcVar5;
  undefined1 auStack_318 [8];
  undefined8 local_310;
  char *pcStack_308;
  undefined8 local_300;
  long *local_2f8;
  undefined1 local_2f0;
  undefined1 *local_2e0;
  code *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined1 *local_2c0 [12];
  undefined1 *local_260;
  code *local_258;
  undefined1 *local_250;
  undefined1 *puStack_248;
  undefined1 *local_240 [12];
  undefined1 *local_1e0;
  code *local_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *local_1c0 [12];
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
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  local_310 = *(undefined8 *)PTR_DAT_047d3e30;
  pcStack_308 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_300 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  plVar4 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar4 != (long *)0x0) {
    local_2f8 = plVar4;
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_310 = 0x1c878076c9ce9d5f;
  pcStack_308 = "Decal/SetColorUV";
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (code *)0x0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_e0 = 0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (undefined1 *)0x0;
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
  local_300 = 0x10;
  local_2f8 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  local_2f8 = (long *)0x0;
  local_2c0[0] = auStack_318;
  local_2e0 = &LAB_0224a68c;
  local_2d8 = FUN_02b79828;
  local_2d0 = &LAB_02b7982c;
  local_2c8 = &LAB_02b79838;
  local_260 = &LAB_0224af8c;
  local_258 = FUN_02b79844;
  local_250 = &LAB_02b79848;
  puStack_248 = &LAB_02b79854;
  local_1e0 = &LAB_0224b030;
  local_1d8 = FUN_02b79860;
  local_1d0 = &LAB_02b79864;
  puStack_1c8 = &LAB_02b79870;
  local_240[0] = local_2c0[0];
  local_1c0[0] = local_2c0[0];
  FUN_0162f274(param_1,&local_310);
  pcVar5 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar5)(auStack_c0);
  }
  pcVar5 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar5)(auStack_140);
  }
  pcVar5 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  pcVar5 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar5)(local_240);
  }
  pcVar5 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    local_2c8 = (undefined1 *)0x0;
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar5)(local_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar4 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar4 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_310 = 0xf2b56f8fce36d5a;
  pcStack_308 = "Decal/SetMaskUV";
  local_d0 = 0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (code *)0x0;
  local_d8 = (code *)0x0;
  local_e0 = 0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (undefined1 *)0x0;
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
  local_300 = 0xf;
  local_2f8 = (long *)0x0;
  pcVar5 = (code *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
    pcVar5 = local_2d8;
  }
  local_2f8 = (long *)0x0;
  if (pcVar5 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    local_2c8 = (undefined1 *)0x0;
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar5)(local_2c0);
  }
  pcVar5 = local_258;
  local_2e0 = &LAB_0224b0c8;
  local_2d8 = FUN_02b7987c;
  local_2d0 = &LAB_02b79880;
  local_2c8 = &LAB_02b7988c;
  local_2c0[0] = auStack_318;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar5)(local_240);
  }
  pcVar5 = local_1d8;
  local_260 = &LAB_0224b91c;
  local_258 = FUN_02b79898;
  local_250 = &LAB_02b7989c;
  puStack_248 = &LAB_02b798a8;
  local_240[0] = auStack_318;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  local_1c0[0] = auStack_318;
  local_1e0 = &LAB_0224b9c0;
  local_1d8 = FUN_02b798b4;
  local_1d0 = &LAB_02b798b8;
  puStack_1c8 = &LAB_02b798c4;
  FUN_0162f274(param_1,&local_310);
  pcVar5 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar5)(auStack_c0);
  }
  pcVar5 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar5)(auStack_140);
  }
  pcVar5 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  pcVar5 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar5)(local_240);
  }
  pcVar5 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    local_2c8 = (undefined1 *)0x0;
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar5)(local_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar4 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar4 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_310 = 0xc5a60acc026dd07d;
  pcStack_308 = "Decal/SetDistortionUV";
  local_d0 = 0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (code *)0x0;
  local_d8 = (code *)0x0;
  local_e0 = 0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (undefined1 *)0x0;
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
  local_300 = 0x15;
  local_2f8 = (long *)0x0;
  pcVar5 = (code *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
    pcVar5 = local_2d8;
  }
  local_2f8 = (long *)0x0;
  if (pcVar5 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    local_2c8 = (undefined1 *)0x0;
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar5)(local_2c0);
  }
  pcVar5 = local_258;
  local_2e0 = &LAB_0224ba58;
  local_2d8 = FUN_02b798d0;
  local_2d0 = &LAB_02b798d4;
  local_2c8 = &LAB_02b798e0;
  local_2c0[0] = auStack_318;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar5)(local_240);
  }
  pcVar5 = local_1d8;
  local_260 = &LAB_0224c2ac;
  local_258 = FUN_02b798ec;
  local_250 = &LAB_02b798f0;
  puStack_248 = &LAB_02b798fc;
  local_240[0] = auStack_318;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  local_1c0[0] = auStack_318;
  local_1e0 = &LAB_0224c350;
  local_1d8 = FUN_02b79908;
  local_1d0 = &LAB_02b7990c;
  puStack_1c8 = &LAB_02b79918;
  FUN_0162f274(param_1,&local_310);
  pcVar5 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar5)(auStack_c0);
  }
  pcVar5 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar5)(auStack_140);
  }
  pcVar5 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  pcVar5 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar5)(local_240);
  }
  pcVar5 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    local_2c8 = (undefined1 *)0x0;
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar5)(local_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar4 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar4 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_310 = 0xb96524b1c91949a;
  pcStack_308 = "Decal/SetDisolveUV";
  local_d0 = 0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (code *)0x0;
  local_d8 = (code *)0x0;
  local_e0 = 0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (undefined1 *)0x0;
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
  local_300 = 0x12;
  local_2f8 = (long *)0x0;
  pcVar5 = (code *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
    pcVar5 = local_2d8;
  }
  local_2f8 = (long *)0x0;
  if (pcVar5 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    local_2c8 = (undefined1 *)0x0;
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar5)(local_2c0);
  }
  pcVar5 = local_258;
  local_2e0 = &LAB_0224c3e8;
  local_2d8 = FUN_02b79924;
  local_2d0 = &LAB_02b79928;
  local_2c8 = &LAB_02b79934;
  local_2c0[0] = auStack_318;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar5)(local_240);
  }
  pcVar5 = local_1d8;
  local_260 = &LAB_0224cc3c;
  local_258 = FUN_02b79940;
  local_250 = &LAB_02b79944;
  puStack_248 = &LAB_02b79950;
  local_240[0] = auStack_318;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  local_1c0[0] = auStack_318;
  local_1e0 = &LAB_0224cce0;
  local_1d8 = FUN_02b7995c;
  local_1d0 = &LAB_02b79960;
  puStack_1c8 = &LAB_02b7996c;
  FUN_0162f274(param_1,&local_310);
  pcVar5 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar5)(auStack_c0);
  }
  pcVar5 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar5)(auStack_140);
  }
  pcVar5 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  pcVar5 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar5)(local_240);
  }
  pcVar5 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    local_2c8 = (undefined1 *)0x0;
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar5)(local_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar4 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar4 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0xc5a49dc7a65a10d4;
  pcStack_308 = "Decal/SetDistortionCorrectX";
  local_e0 = 0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (undefined1 *)0x0;
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
  if (plVar4 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))();
    pcVar5 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      local_2c8 = (undefined1 *)0x0;
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar5)(local_2c0);
    }
  }
  pcVar5 = local_258;
  local_2e0 = &LAB_0224cd78;
  local_2d8 = FUN_02b79978;
  local_2d0 = &LAB_02b7997c;
  local_2c8 = &LAB_02b79980;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar5)(local_240);
  }
  pcVar5 = local_1d8;
  local_260 = &LAB_0224d24c;
  local_258 = FUN_02b79984;
  local_250 = &LAB_02b79988;
  puStack_248 = &LAB_02b7998c;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  local_1e0 = &LAB_0224d774;
  local_1d8 = FUN_02b79990;
  local_1d0 = &LAB_02b79994;
  puStack_1c8 = &LAB_02b79998;
  FUN_0162f274(param_1,&local_310);
  pcVar5 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar5)(auStack_c0);
  }
  pcVar5 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar5)(auStack_140);
  }
  pcVar5 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  pcVar5 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar5)(local_240);
  }
  pcVar5 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    local_2c8 = (undefined1 *)0x0;
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar5)(local_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar4 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar4 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0xc5a49ec7a65a1287;
  pcStack_308 = "Decal/SetDistortionCorrectY";
  local_e0 = 0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (undefined1 *)0x0;
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
  if (plVar4 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))();
    pcVar5 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      local_2c8 = (undefined1 *)0x0;
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar5)(local_2c0);
    }
  }
  pcVar5 = local_258;
  local_2e0 = &LAB_0224db44;
  local_2d8 = FUN_02b7999c;
  local_2d0 = &LAB_02b799a0;
  local_2c8 = &LAB_02b799a4;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar5)(local_240);
  }
  pcVar5 = local_1d8;
  local_260 = &LAB_0224df74;
  local_258 = FUN_02b799a8;
  local_250 = &LAB_02b799ac;
  puStack_248 = &LAB_02b799b0;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  local_1e0 = &LAB_0224e49c;
  local_1d8 = FUN_02b799b4;
  local_1d0 = &LAB_02b799b8;
  puStack_1c8 = &LAB_02b799bc;
  FUN_0162f274(param_1,&local_310);
  pcVar5 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar5)(auStack_c0);
  }
  pcVar5 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar5)(auStack_140);
  }
  pcVar5 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  pcVar5 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar5)(local_240);
  }
  pcVar5 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    local_2c8 = (undefined1 *)0x0;
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar5)(local_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar4 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar4 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0x8cf505d3d41b2f99;
  pcStack_308 = "Decal/SetMaskCorrect";
  local_e0 = 0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (undefined1 *)0x0;
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
  local_300 = 0x14;
  local_2f8 = (long *)0x0;
  if (plVar4 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))();
    pcVar5 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      local_2c8 = (undefined1 *)0x0;
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar5)(local_2c0);
    }
  }
  pcVar5 = local_258;
  local_2e0 = &LAB_0224e86c;
  local_2d8 = FUN_02b799c0;
  local_2d0 = &LAB_02b799c4;
  local_2c8 = &LAB_02b799c8;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar5)(local_240);
  }
  pcVar5 = local_1d8;
  local_260 = &LAB_0224ec9c;
  local_258 = FUN_02b799cc;
  local_250 = &LAB_02b799d0;
  puStack_248 = &LAB_02b799d4;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  local_1e0 = &LAB_0224f1c4;
  local_1d8 = FUN_02b799d8;
  local_1d0 = &LAB_02b799dc;
  puStack_1c8 = &LAB_02b799e0;
  FUN_0162f274(param_1,&local_310);
  pcVar5 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar5)(auStack_c0);
  }
  pcVar5 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar5)(auStack_140);
  }
  pcVar5 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  pcVar5 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar5)(local_240);
  }
  pcVar5 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    local_2c8 = (undefined1 *)0x0;
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar5)(local_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_310 = *(undefined8 *)puVar2;
  pcStack_308 = *(char **)(puVar2 + 8);
  local_300 = *(undefined8 *)(puVar2 + 0x10);
  local_2f8 = *(long **)(puVar2 + 0x18);
  plVar4 = local_2f8;
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x18))();
    plVar4 = local_2f8;
  }
  local_2f0 = 1;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = (code *)0x0;
  local_310 = 0x7225c92da7beded9;
  pcStack_308 = "Decal/SetDisolveCorrect";
  local_e0 = 0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (undefined1 *)0x0;
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
  local_300 = 0x17;
  local_2f8 = (long *)0x0;
  if (plVar4 == (long *)0x0) {
    local_2f8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))();
    pcVar5 = local_2d8;
    local_2f8 = (long *)0x0;
    if (local_2d8 != (code *)0x0) {
      local_2d0 = (undefined1 *)0x0;
      local_2c8 = (undefined1 *)0x0;
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar5)(local_2c0);
    }
  }
  pcVar5 = local_258;
  local_2e0 = &LAB_0224f594;
  local_2d8 = FUN_02b799e4;
  local_2d0 = &LAB_02b799e8;
  local_2c8 = &LAB_02b799ec;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar5)(local_240);
  }
  pcVar5 = local_1d8;
  local_260 = &LAB_0224f9c4;
  local_258 = FUN_02b799f0;
  local_250 = &LAB_02b799f4;
  puStack_248 = &LAB_02b799f8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  local_1e0 = &LAB_0224feec;
  local_1d8 = FUN_02b799fc;
  local_1d0 = &LAB_02b79a00;
  puStack_1c8 = &LAB_02b79a04;
  FUN_0162f274(param_1,&local_310);
  pcVar5 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    local_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar5)(auStack_c0);
  }
  pcVar5 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar5)(auStack_140);
  }
  pcVar5 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  pcVar5 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar5)(local_240);
  }
  pcVar5 = local_2d8;
  if (local_2d8 != (code *)0x0) {
    local_2d0 = (undefined1 *)0x0;
    local_2c8 = (undefined1 *)0x0;
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar5)(local_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  return;
}


