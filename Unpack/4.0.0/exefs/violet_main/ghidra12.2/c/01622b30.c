/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01622b30; name: FUN_01622b30
 */


void FUN_01622b30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 local_360;
  char *pcStack_358;
  undefined8 local_350;
  long *local_348;
  undefined1 local_340;
  code *local_330;
  code *local_328;
  undefined1 *local_320;
  undefined1 *local_318;
  undefined1 **appuStack_310 [12];
  code *local_2b0;
  code *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  undefined1 ***local_290 [12];
  undefined1 *local_230;
  code *local_228;
  undefined1 *local_220;
  undefined1 *puStack_218;
  undefined1 **local_210 [12];
  undefined8 local_1b0;
  code *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [96];
  undefined8 local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 auStack_110 [96];
  undefined1 *local_b0;
  undefined1 **ppuStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 auStack_88 [8];
  undefined1 *local_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  local_a0 = auStack_88;
  puStack_98 = auStack_78;
  local_b0 = auStack_70;
  ppuStack_a8 = &local_80;
  local_90 = local_b0;
  local_80 = local_b0;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_360 = *(undefined8 *)PTR_DAT_047d3e30;
  pcStack_358 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_350 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  local_348 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  plVar6 = local_348;
  if (local_348 != (long *)0x0) {
    (**(code **)(*local_348 + 0x18))();
    plVar6 = local_348;
  }
  local_340 = 1;
  local_118 = 0;
  local_120 = 0;
  local_128 = (code *)0x0;
  local_360 = 0xf70ed76c46077d42;
  pcStack_358 = "Title/EvolutionDemo/MoveMinAltitude";
  local_130 = 0;
  local_330 = (code *)0x0;
  local_328 = (code *)0x0;
  local_320 = (undefined1 *)0x0;
  local_318 = (undefined1 *)0x0;
  local_2b0 = (code *)0x0;
  local_2a8 = (code *)0x0;
  local_2a0 = (undefined1 *)0x0;
  local_298 = (undefined1 *)0x0;
  local_230 = (undefined1 *)0x0;
  local_228 = (code *)0x0;
  local_220 = (undefined1 *)0x0;
  puStack_218 = (undefined1 *)0x0;
  local_1b0 = 0;
  local_1a8 = (code *)0x0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_350 = 0x23;
  local_348 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
    pcVar4 = local_328;
    local_348 = (long *)0x0;
    if (local_328 != (code *)0x0) {
      local_320 = (undefined1 *)0x0;
      local_318 = (undefined1 *)0x0;
      local_330 = (code *)0x0;
      local_328 = (code *)0x0;
      (*pcVar4)(appuStack_310);
      goto LAB_01622c1c;
    }
  }
  local_348 = (long *)0x0;
LAB_01622c1c:
  pcVar4 = local_2a8;
  local_330 = (code *)&LAB_0212dec4;
  local_328 = FUN_02b23110;
  local_320 = &LAB_02b23114;
  local_318 = &LAB_02b23120;
  appuStack_310[0] = &local_a0;
  if (local_2a8 != (code *)0x0) {
    local_2a0 = (undefined1 *)0x0;
    local_298 = (undefined1 *)0x0;
    local_2b0 = (code *)0x0;
    local_2a8 = (code *)0x0;
    (*pcVar4)(local_290);
  }
  pcVar4 = local_228;
  local_2b0 = (code *)&LAB_0212e144;
  local_2a8 = FUN_02b2312c;
  local_2a0 = &LAB_02b23130;
  local_290[0] = &ppuStack_a8;
  local_298 = &LAB_02b2313c;
  if (local_228 != (code *)0x0) {
    local_220 = (undefined1 *)0x0;
    puStack_218 = (undefined1 *)0x0;
    local_230 = (undefined1 *)0x0;
    local_228 = (code *)0x0;
    (*pcVar4)(local_210);
  }
  puVar1 = PTR_DAT_047d8918;
  local_210[0] = &local_b0;
  local_230 = &LAB_0212e26c;
  local_228 = FUN_02b23148;
  local_220 = &LAB_02b2314c;
  puStack_218 = &LAB_02b23158;
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  puVar3 = PTR_DAT_047d8928;
  puVar2 = PTR_DAT_047d8920;
  uVar7 = *(undefined8 *)PTR_DAT_047d8920;
  *(undefined8 *)PTR_DAT_047d8928 = uVar7;
  FUN_0162f274(uVar7,&local_360);
  plVar6 = local_348;
  local_360 = 0x77734db7b3efd38d;
  pcStack_358 = "Title/EvolutionDemo/MoveMinAltitudeWater";
  local_350 = 0x28;
  local_348 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  pcVar4 = local_328;
  local_348 = (long *)0x0;
  if (local_328 != (code *)0x0) {
    local_320 = (undefined1 *)0x0;
    local_318 = (undefined1 *)0x0;
    local_330 = (code *)0x0;
    local_328 = (code *)0x0;
    (*pcVar4)(appuStack_310);
  }
  pcVar4 = local_2a8;
  local_330 = FUN_01ac6b30;
  local_328 = FUN_02b23164;
  local_320 = &LAB_02b23168;
  local_318 = &LAB_02b23174;
  appuStack_310[0] = &local_a0;
  if (local_2a8 != (code *)0x0) {
    local_2a0 = (undefined1 *)0x0;
    local_298 = (undefined1 *)0x0;
    local_2b0 = (code *)0x0;
    local_2a8 = (code *)0x0;
    (*pcVar4)(local_290);
  }
  pcVar4 = local_228;
  local_290[0] = &ppuStack_a8;
  local_2b0 = FUN_01962e20;
  local_2a8 = FUN_02b23180;
  local_2a0 = &LAB_02b23184;
  local_298 = &LAB_02b23190;
  if (local_228 != (code *)0x0) {
    local_220 = (undefined1 *)0x0;
    puStack_218 = (undefined1 *)0x0;
    local_230 = (undefined1 *)0x0;
    local_228 = (code *)0x0;
    (*pcVar4)(local_210);
  }
  local_210[0] = &local_b0;
  local_230 = &LAB_01aa8e84;
  local_228 = FUN_02b2319c;
  local_220 = &LAB_02b231a0;
  puStack_218 = &LAB_02b231ac;
  if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar7 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar7;
  FUN_0162f274(uVar7,&local_360);
  plVar6 = local_348;
  local_360 = 0xc0f1aeb68021be41;
  pcStack_358 = "Title/EvolutionDemo/MoveAltitudeWater";
  local_350 = 0x25;
  local_348 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  pcVar4 = local_328;
  local_348 = (long *)0x0;
  if (local_328 != (code *)0x0) {
    local_320 = (undefined1 *)0x0;
    local_318 = (undefined1 *)0x0;
    local_330 = (code *)0x0;
    local_328 = (code *)0x0;
    (*pcVar4)(appuStack_310);
  }
  pcVar4 = local_2a8;
  local_330 = (code *)&LAB_0212e34c;
  local_328 = FUN_02b231b8;
  local_320 = &LAB_02b231bc;
  local_318 = &LAB_02b231c8;
  appuStack_310[0] = &local_a0;
  if (local_2a8 != (code *)0x0) {
    local_2a0 = (undefined1 *)0x0;
    local_298 = (undefined1 *)0x0;
    local_2b0 = (code *)0x0;
    local_2a8 = (code *)0x0;
    (*pcVar4)(local_290);
  }
  pcVar4 = local_228;
  local_290[0] = &ppuStack_a8;
  local_2b0 = (code *)&LAB_0212e3d4;
  local_2a8 = FUN_02b231d4;
  local_2a0 = &LAB_02b231d8;
  local_298 = &LAB_02b231e4;
  if (local_228 != (code *)0x0) {
    local_220 = (undefined1 *)0x0;
    puStack_218 = (undefined1 *)0x0;
    local_230 = (undefined1 *)0x0;
    local_228 = (code *)0x0;
    (*pcVar4)(local_210);
  }
  local_210[0] = &local_b0;
  local_230 = &LAB_0212e4fc;
  local_228 = FUN_02b231f0;
  local_220 = &LAB_02b231f4;
  puStack_218 = &LAB_02b23200;
  if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar5 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar7 = *(undefined8 *)puVar2;
  *(undefined8 *)puVar3 = uVar7;
  FUN_0162f274(uVar7,&local_360);
  pcVar4 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = 0;
    local_118 = 0;
    local_130 = 0;
    local_128 = (code *)0x0;
    (*pcVar4)(auStack_110);
  }
  pcVar4 = local_1a8;
  if (local_1a8 != (code *)0x0) {
    local_1a0 = 0;
    uStack_198 = 0;
    local_1b0 = 0;
    local_1a8 = (code *)0x0;
    (*pcVar4)(auStack_190);
  }
  pcVar4 = local_228;
  if (local_228 != (code *)0x0) {
    local_220 = (undefined1 *)0x0;
    puStack_218 = (undefined1 *)0x0;
    local_230 = (undefined1 *)0x0;
    local_228 = (code *)0x0;
    (*pcVar4)(local_210);
  }
  pcVar4 = local_2a8;
  if (local_2a8 != (code *)0x0) {
    local_2a0 = (undefined1 *)0x0;
    local_298 = (undefined1 *)0x0;
    local_2b0 = (code *)0x0;
    local_2a8 = (code *)0x0;
    (*pcVar4)(local_290);
  }
  pcVar4 = local_328;
  if (local_328 != (code *)0x0) {
    local_320 = (undefined1 *)0x0;
    local_318 = (undefined1 *)0x0;
    local_330 = (code *)0x0;
    local_328 = (code *)0x0;
    (*pcVar4)(appuStack_310);
  }
  if (local_348 != (long *)0x0) {
    (**(code **)(*local_348 + 0x20))();
  }
  return;
}


