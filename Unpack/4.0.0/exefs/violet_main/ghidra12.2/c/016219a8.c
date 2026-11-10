/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016219a8; name: FUN_016219a8
 */


void FUN_016219a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 local_350;
  char *pcStack_348;
  undefined8 local_340;
  long *local_338;
  undefined1 local_330;
  undefined1 *local_320;
  code *local_318;
  undefined1 *local_310;
  undefined1 *puStack_308;
  undefined1 **local_300;
  undefined1 **ppuStack_2f8;
  undefined1 *local_2a0;
  code *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  undefined1 **appuStack_280 [12];
  undefined1 *local_220;
  code *local_218;
  undefined1 *local_210;
  undefined1 *puStack_208;
  undefined1 **local_200 [12];
  undefined8 local_1a0;
  code *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [96];
  undefined8 local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 auStack_100 [104];
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  local_88 = auStack_78;
  local_98 = auStack_80;
  puStack_90 = auStack_70;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar1 = PTR_DAT_047d3e30;
  local_350 = *(undefined8 *)PTR_DAT_047d3e30;
  pcStack_348 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_340 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  local_338 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  plVar8 = local_338;
  if (local_338 != (long *)0x0) {
    (**(code **)(*local_338 + 0x18))();
    plVar8 = local_338;
  }
  local_330 = 1;
  local_108 = 0;
  local_110 = 0;
  local_118 = (code *)0x0;
  local_350 = 0x5b9955932a007325;
  pcStack_348 = "Title/Time/TimeChange/TimeZoneChange";
  local_120 = 0;
  local_320 = (undefined1 *)0x0;
  local_318 = (code *)0x0;
  local_310 = (undefined1 *)0x0;
  puStack_308 = (undefined1 *)0x0;
  local_2a0 = (undefined1 *)0x0;
  local_298 = (code *)0x0;
  local_290 = (undefined1 *)0x0;
  local_288 = (undefined1 *)0x0;
  local_220 = (undefined1 *)0x0;
  local_218 = (code *)0x0;
  local_210 = (undefined1 *)0x0;
  puStack_208 = (undefined1 *)0x0;
  local_1a0 = 0;
  local_198 = (code *)0x0;
  local_190 = 0;
  uStack_188 = 0;
  local_340 = 0x24;
  local_338 = (long *)0x0;
  if (plVar8 == (long *)0x0) {
    local_338 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar8 + 0x20))();
    pcVar5 = local_318;
    local_338 = (long *)0x0;
    if (local_318 != (code *)0x0) {
      local_310 = (undefined1 *)0x0;
      puStack_308 = (undefined1 *)0x0;
      local_320 = (undefined1 *)0x0;
      local_318 = (code *)0x0;
      (*pcVar5)(&local_300);
    }
  }
  pcVar5 = local_298;
  local_300 = &local_98;
  local_320 = &LAB_0212e5dc;
  local_318 = FUN_02b2320c;
  local_310 = &LAB_02b23214;
  puStack_308 = &LAB_02b23220;
  ppuStack_2f8 = &local_88;
  if (local_298 != (code *)0x0) {
    local_290 = (undefined1 *)0x0;
    local_288 = (undefined1 *)0x0;
    local_2a0 = (undefined1 *)0x0;
    local_298 = (code *)0x0;
    (*pcVar5)(appuStack_280);
  }
  pcVar5 = local_218;
  local_2a0 = &LAB_0212f640;
  local_298 = FUN_02b2322c;
  local_290 = &LAB_02b23230;
  local_288 = &LAB_02b2323c;
  appuStack_280[0] = &local_88;
  if (local_218 != (code *)0x0) {
    local_210 = (undefined1 *)0x0;
    puStack_208 = (undefined1 *)0x0;
    local_220 = (undefined1 *)0x0;
    local_218 = (code *)0x0;
    (*pcVar5)(local_200);
  }
  puVar2 = PTR_DAT_047d8918;
  local_200[0] = &local_88;
  local_220 = &LAB_0212f6e4;
  local_218 = FUN_02b23248;
  local_210 = &LAB_02b2324c;
  puStack_208 = &LAB_02b23258;
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  puVar4 = PTR_DAT_047d8928;
  puVar3 = PTR_DAT_047d8920;
  uVar7 = *(undefined8 *)PTR_DAT_047d8920;
  *(undefined8 *)PTR_DAT_047d8928 = uVar7;
  FUN_0162f274(uVar7,&local_350);
  pcVar5 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = 0;
    local_108 = 0;
    local_120 = 0;
    local_118 = (code *)0x0;
    (*pcVar5)(auStack_100);
  }
  pcVar5 = local_198;
  if (local_198 != (code *)0x0) {
    local_190 = 0;
    uStack_188 = 0;
    local_1a0 = 0;
    local_198 = (code *)0x0;
    (*pcVar5)(auStack_180);
  }
  pcVar5 = local_218;
  if (local_218 != (code *)0x0) {
    local_210 = (undefined1 *)0x0;
    puStack_208 = (undefined1 *)0x0;
    local_220 = (undefined1 *)0x0;
    local_218 = (code *)0x0;
    (*pcVar5)(local_200);
  }
  pcVar5 = local_298;
  if (local_298 != (code *)0x0) {
    local_290 = (undefined1 *)0x0;
    local_288 = (undefined1 *)0x0;
    local_2a0 = (undefined1 *)0x0;
    local_298 = (code *)0x0;
    (*pcVar5)(appuStack_280);
  }
  pcVar5 = local_318;
  if (local_318 != (code *)0x0) {
    local_310 = (undefined1 *)0x0;
    puStack_308 = (undefined1 *)0x0;
    local_320 = (undefined1 *)0x0;
    local_318 = (code *)0x0;
    (*pcVar5)(&local_300);
  }
  if (local_338 != (long *)0x0) {
    (**(code **)(*local_338 + 0x20))();
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_350 = *(undefined8 *)puVar1;
  pcStack_348 = *(char **)(puVar1 + 8);
  local_340 = *(undefined8 *)(puVar1 + 0x10);
  local_338 = *(long **)(puVar1 + 0x18);
  plVar8 = local_338;
  if (local_338 != (long *)0x0) {
    (**(code **)(*local_338 + 0x18))();
    plVar8 = local_338;
  }
  local_330 = 1;
  local_108 = 0;
  local_110 = 0;
  local_118 = (code *)0x0;
  local_350 = 0xfd0838e000d91958;
  pcStack_348 = "Title/Time/TimeChange/TimeZoneReset";
  local_120 = 0;
  local_320 = (undefined1 *)0x0;
  local_318 = (code *)0x0;
  local_310 = (undefined1 *)0x0;
  puStack_308 = (undefined1 *)0x0;
  local_2a0 = (undefined1 *)0x0;
  local_298 = (code *)0x0;
  local_290 = (undefined1 *)0x0;
  local_288 = (undefined1 *)0x0;
  local_220 = (undefined1 *)0x0;
  local_218 = (code *)0x0;
  local_210 = (undefined1 *)0x0;
  puStack_208 = (undefined1 *)0x0;
  local_1a0 = 0;
  local_198 = (code *)0x0;
  local_190 = 0;
  uStack_188 = 0;
  local_340 = 0x23;
  local_338 = (long *)0x0;
  if (plVar8 == (long *)0x0) {
    local_338 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar8 + 0x20))();
    pcVar5 = local_318;
    local_338 = (long *)0x0;
    if (local_318 != (code *)0x0) {
      local_310 = (undefined1 *)0x0;
      puStack_308 = (undefined1 *)0x0;
      local_320 = (undefined1 *)0x0;
      local_318 = (code *)0x0;
      (*pcVar5)(&local_300);
    }
  }
  local_320 = &LAB_0212f77c;
  local_318 = FUN_02b23264;
  local_310 = &LAB_02b23268;
  puStack_308 = &LAB_02b2326c;
  if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar6 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar7 = *(undefined8 *)puVar3;
  *(undefined8 *)puVar4 = uVar7;
  FUN_0162f274(uVar7,&local_350);
  pcVar5 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = 0;
    local_108 = 0;
    local_120 = 0;
    local_118 = (code *)0x0;
    (*pcVar5)(auStack_100);
  }
  pcVar5 = local_198;
  if (local_198 != (code *)0x0) {
    local_190 = 0;
    uStack_188 = 0;
    local_1a0 = 0;
    local_198 = (code *)0x0;
    (*pcVar5)(auStack_180);
  }
  pcVar5 = local_218;
  if (local_218 != (code *)0x0) {
    local_210 = (undefined1 *)0x0;
    puStack_208 = (undefined1 *)0x0;
    local_220 = (undefined1 *)0x0;
    local_218 = (code *)0x0;
    (*pcVar5)(local_200);
  }
  pcVar5 = local_298;
  if (local_298 != (code *)0x0) {
    local_290 = (undefined1 *)0x0;
    local_288 = (undefined1 *)0x0;
    local_2a0 = (undefined1 *)0x0;
    local_298 = (code *)0x0;
    (*pcVar5)(appuStack_280);
  }
  pcVar5 = local_318;
  if (local_318 != (code *)0x0) {
    local_310 = (undefined1 *)0x0;
    puStack_308 = (undefined1 *)0x0;
    local_320 = (undefined1 *)0x0;
    local_318 = (code *)0x0;
    (*pcVar5)(&local_300);
  }
  if (local_338 != (long *)0x0) {
    (**(code **)(*local_338 + 0x20))();
  }
  return;
}


