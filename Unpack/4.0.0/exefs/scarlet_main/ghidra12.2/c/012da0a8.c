/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012da0a8; name: FUN_012da0a8
 */


void FUN_012da0a8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  code *pcVar5;
  undefined1 *local_340;
  undefined1 *puStack_338;
  undefined8 local_330;
  char *pcStack_328;
  undefined8 local_320;
  long *local_318;
  undefined1 local_310;
  undefined1 *local_300;
  code *local_2f8;
  undefined1 *local_2f0;
  undefined1 *local_2e8;
  undefined1 *apuStack_2e0 [12];
  undefined1 *local_280;
  code *local_278;
  undefined1 *local_270;
  undefined1 *puStack_268;
  undefined1 *local_260 [12];
  undefined1 *local_200;
  code *local_1f8;
  undefined1 *local_1f0;
  undefined1 *puStack_1e8;
  undefined1 *local_1e0 [12];
  undefined8 local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [96];
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [104];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  local_330 = *(undefined8 *)PTR_DAT_047d3e30;
  pcStack_328 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_320 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  plVar4 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar4 != (long *)0x0) {
    local_318 = plVar4;
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  local_310 = 1;
  local_e8 = 0;
  local_330 = 0x3697b3cbb67bffd9;
  pcStack_328 = "GameObject/SetRotation";
  local_300 = (undefined1 *)0x0;
  local_2f8 = (code *)0x0;
  local_f0 = 0;
  local_f8 = (code *)0x0;
  local_100 = 0;
  local_2f0 = (undefined1 *)0x0;
  local_2e8 = (undefined1 *)0x0;
  local_280 = (undefined1 *)0x0;
  local_278 = (code *)0x0;
  local_270 = (undefined1 *)0x0;
  puStack_268 = (undefined1 *)0x0;
  local_200 = (undefined1 *)0x0;
  local_1f8 = (code *)0x0;
  local_1f0 = (undefined1 *)0x0;
  puStack_1e8 = (undefined1 *)0x0;
  local_180 = 0;
  local_178 = (code *)0x0;
  local_170 = 0;
  uStack_168 = 0;
  local_320 = 0x16;
  local_318 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  local_318 = (long *)0x0;
  local_300 = &LAB_02222c8c;
  local_2f8 = FUN_02b78e3c;
  local_2f0 = &LAB_02b78e40;
  local_2e8 = &LAB_02b78e44;
  local_280 = &LAB_022234bc;
  local_278 = FUN_02b78e48;
  local_260[0] = auStack_68;
  local_270 = &LAB_02b78e4c;
  puStack_268 = &LAB_02b78e58;
  local_200 = &LAB_02223ef8;
  local_1f8 = FUN_02b78e64;
  local_1f0 = &LAB_02b78e68;
  puStack_1e8 = &LAB_02b78e6c;
  FUN_0162f274(param_1,&local_330);
  pcVar5 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = 0;
    local_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar5)(auStack_e0);
  }
  pcVar5 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    local_178 = (code *)0x0;
    (*pcVar5)(auStack_160);
  }
  pcVar5 = local_1f8;
  if (local_1f8 != (code *)0x0) {
    local_1f0 = (undefined1 *)0x0;
    puStack_1e8 = (undefined1 *)0x0;
    local_200 = (undefined1 *)0x0;
    local_1f8 = (code *)0x0;
    (*pcVar5)(local_1e0);
  }
  pcVar5 = local_278;
  if (local_278 != (code *)0x0) {
    local_270 = (undefined1 *)0x0;
    puStack_268 = (undefined1 *)0x0;
    local_280 = (undefined1 *)0x0;
    local_278 = (code *)0x0;
    (*pcVar5)(local_260);
  }
  pcVar5 = local_2f8;
  if (local_2f8 != (code *)0x0) {
    local_2f0 = (undefined1 *)0x0;
    local_2e8 = (undefined1 *)0x0;
    local_300 = (undefined1 *)0x0;
    local_2f8 = (code *)0x0;
    (*pcVar5)(apuStack_2e0);
  }
  if (local_318 != (long *)0x0) {
    (**(code **)(*local_318 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_330 = *(undefined8 *)puVar2;
  pcStack_328 = *(char **)(puVar2 + 8);
  local_320 = *(undefined8 *)(puVar2 + 0x10);
  local_318 = *(long **)(puVar2 + 0x18);
  plVar4 = local_318;
  if (local_318 != (long *)0x0) {
    (**(code **)(*local_318 + 0x18))();
    plVar4 = local_318;
  }
  local_310 = 1;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = (code *)0x0;
  local_330 = 0xd8abd54c068c0dd9;
  pcStack_328 = "GameObject/SetRotationRelative";
  local_100 = 0;
  local_300 = (undefined1 *)0x0;
  local_2f8 = (code *)0x0;
  local_2f0 = (undefined1 *)0x0;
  local_2e8 = (undefined1 *)0x0;
  local_280 = (undefined1 *)0x0;
  local_278 = (code *)0x0;
  local_270 = (undefined1 *)0x0;
  puStack_268 = (undefined1 *)0x0;
  local_200 = (undefined1 *)0x0;
  local_1f8 = (code *)0x0;
  local_1f0 = (undefined1 *)0x0;
  puStack_1e8 = (undefined1 *)0x0;
  local_180 = 0;
  local_178 = (code *)0x0;
  local_170 = 0;
  uStack_168 = 0;
  local_320 = 0x1e;
  local_318 = (long *)0x0;
  if (plVar4 == (long *)0x0) {
    local_318 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x20))();
    pcVar5 = local_2f8;
    local_318 = (long *)0x0;
    if (local_2f8 != (code *)0x0) {
      local_2f0 = (undefined1 *)0x0;
      local_2e8 = (undefined1 *)0x0;
      local_300 = (undefined1 *)0x0;
      local_2f8 = (code *)0x0;
      (*pcVar5)(apuStack_2e0);
    }
  }
  pcVar5 = local_278;
  local_300 = &LAB_02224898;
  local_2f8 = FUN_02b78e70;
  local_2f0 = &LAB_02b78e78;
  local_2e8 = &LAB_02b78e7c;
  if (local_278 != (code *)0x0) {
    local_270 = (undefined1 *)0x0;
    puStack_268 = (undefined1 *)0x0;
    local_280 = (undefined1 *)0x0;
    local_278 = (code *)0x0;
    (*pcVar5)(local_260);
  }
  pcVar5 = local_1f8;
  local_280 = &LAB_02225bb0;
  local_278 = FUN_02b78e80;
  local_270 = &LAB_02b78e84;
  puStack_268 = &LAB_02b78e88;
  if (local_1f8 != (code *)0x0) {
    local_1f0 = (undefined1 *)0x0;
    puStack_1e8 = (undefined1 *)0x0;
    local_200 = (undefined1 *)0x0;
    local_1f8 = (code *)0x0;
    (*pcVar5)(local_1e0);
  }
  local_200 = &LAB_02226d08;
  local_1f8 = FUN_02b78e8c;
  local_1f0 = &LAB_02b78e90;
  puStack_1e8 = &LAB_02b78e94;
  FUN_0162f274(param_1,&local_330);
  pcVar5 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = 0;
    local_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar5)(auStack_e0);
  }
  pcVar5 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    local_178 = (code *)0x0;
    (*pcVar5)(auStack_160);
  }
  pcVar5 = local_1f8;
  if (local_1f8 != (code *)0x0) {
    local_1f0 = (undefined1 *)0x0;
    puStack_1e8 = (undefined1 *)0x0;
    local_200 = (undefined1 *)0x0;
    local_1f8 = (code *)0x0;
    (*pcVar5)(local_1e0);
  }
  pcVar5 = local_278;
  if (local_278 != (code *)0x0) {
    local_270 = (undefined1 *)0x0;
    puStack_268 = (undefined1 *)0x0;
    local_280 = (undefined1 *)0x0;
    local_278 = (code *)0x0;
    (*pcVar5)(local_260);
  }
  pcVar5 = local_2f8;
  if (local_2f8 != (code *)0x0) {
    local_2f0 = (undefined1 *)0x0;
    local_2e8 = (undefined1 *)0x0;
    local_300 = (undefined1 *)0x0;
    local_2f8 = (code *)0x0;
    (*pcVar5)(apuStack_2e0);
  }
  if (local_318 != (long *)0x0) {
    (**(code **)(*local_318 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_330 = *(undefined8 *)puVar2;
  pcStack_328 = *(char **)(puVar2 + 8);
  local_320 = *(undefined8 *)(puVar2 + 0x10);
  local_318 = *(long **)(puVar2 + 0x18);
  plVar4 = local_318;
  if (local_318 != (long *)0x0) {
    (**(code **)(*local_318 + 0x18))();
    plVar4 = local_318;
  }
  local_310 = 1;
  local_e8 = 0;
  local_330 = 0xba44b44674e74491;
  pcStack_328 = "GameObject/SetRotationtoTarget";
  local_f0 = 0;
  local_300 = (undefined1 *)0x0;
  local_2f8 = (code *)0x0;
  local_f8 = (code *)0x0;
  local_100 = 0;
  local_2f0 = (undefined1 *)0x0;
  local_2e8 = (undefined1 *)0x0;
  local_280 = (undefined1 *)0x0;
  local_278 = (code *)0x0;
  local_270 = (undefined1 *)0x0;
  puStack_268 = (undefined1 *)0x0;
  local_200 = (undefined1 *)0x0;
  local_1f8 = (code *)0x0;
  local_1f0 = (undefined1 *)0x0;
  puStack_1e8 = (undefined1 *)0x0;
  local_180 = 0;
  local_178 = (code *)0x0;
  local_170 = 0;
  uStack_168 = 0;
  local_320 = 0x1e;
  local_318 = (long *)0x0;
  pcVar5 = (code *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
    pcVar5 = local_2f8;
  }
  local_340 = auStack_70;
  local_318 = (long *)0x0;
  puStack_338 = auStack_78;
  if (pcVar5 != (code *)0x0) {
    local_2f0 = (undefined1 *)0x0;
    local_2e8 = (undefined1 *)0x0;
    local_300 = (undefined1 *)0x0;
    local_2f8 = (code *)0x0;
    (*pcVar5)(apuStack_2e0);
  }
  pcVar5 = local_278;
  local_300 = &LAB_02227b3c;
  local_2f8 = FUN_02b78e98;
  local_2f0 = &LAB_02b78e9c;
  local_2e8 = &LAB_02b78ea8;
  apuStack_2e0[0] = (undefined1 *)&local_340;
  if (local_278 != (code *)0x0) {
    local_270 = (undefined1 *)0x0;
    puStack_268 = (undefined1 *)0x0;
    local_280 = (undefined1 *)0x0;
    local_278 = (code *)0x0;
    apuStack_2e0[0] = (undefined1 *)&local_340;
    (*pcVar5)(local_260);
  }
  pcVar5 = local_1f8;
  local_280 = &LAB_0147f08c;
  local_278 = FUN_02b78eb4;
  local_270 = &LAB_02b78eb8;
  puStack_268 = &LAB_02b78ec4;
  local_260[0] = (undefined1 *)&local_340;
  if (local_1f8 != (code *)0x0) {
    local_1f0 = (undefined1 *)0x0;
    puStack_1e8 = (undefined1 *)0x0;
    local_200 = (undefined1 *)0x0;
    local_1f8 = (code *)0x0;
    local_260[0] = (undefined1 *)&local_340;
    (*pcVar5)(local_1e0);
  }
  local_200 = &LAB_02228048;
  local_1f8 = FUN_02b78ed0;
  local_1f0 = &LAB_02b78ed4;
  puStack_1e8 = &LAB_02b78ee0;
  local_1e0[0] = (undefined1 *)&local_340;
  FUN_0162f274(param_1,&local_330);
  pcVar5 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = 0;
    local_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar5)(auStack_e0);
  }
  pcVar5 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    local_178 = (code *)0x0;
    (*pcVar5)(auStack_160);
  }
  pcVar5 = local_1f8;
  if (local_1f8 != (code *)0x0) {
    local_1f0 = (undefined1 *)0x0;
    puStack_1e8 = (undefined1 *)0x0;
    local_200 = (undefined1 *)0x0;
    local_1f8 = (code *)0x0;
    (*pcVar5)(local_1e0);
  }
  pcVar5 = local_278;
  if (local_278 != (code *)0x0) {
    local_270 = (undefined1 *)0x0;
    puStack_268 = (undefined1 *)0x0;
    local_280 = (undefined1 *)0x0;
    local_278 = (code *)0x0;
    (*pcVar5)(local_260);
  }
  pcVar5 = local_2f8;
  if (local_2f8 != (code *)0x0) {
    local_2f0 = (undefined1 *)0x0;
    local_2e8 = (undefined1 *)0x0;
    local_300 = (undefined1 *)0x0;
    local_2f8 = (code *)0x0;
    (*pcVar5)(apuStack_2e0);
  }
  if (local_318 != (long *)0x0) {
    (**(code **)(*local_318 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_330 = *(undefined8 *)puVar2;
  pcStack_328 = *(char **)(puVar2 + 8);
  local_320 = *(undefined8 *)(puVar2 + 0x10);
  local_318 = *(long **)(puVar2 + 0x18);
  plVar4 = local_318;
  if (local_318 != (long *)0x0) {
    (**(code **)(*local_318 + 0x18))();
    plVar4 = local_318;
  }
  local_310 = 1;
  local_e8 = 0;
  local_330 = 0x81b95386b8482d11;
  pcStack_328 = "GameObject/SetRotationByTarget";
  local_f0 = 0;
  local_300 = (undefined1 *)0x0;
  local_2f8 = (code *)0x0;
  local_f8 = (code *)0x0;
  local_100 = 0;
  local_2f0 = (undefined1 *)0x0;
  local_2e8 = (undefined1 *)0x0;
  local_280 = (undefined1 *)0x0;
  local_278 = (code *)0x0;
  local_270 = (undefined1 *)0x0;
  puStack_268 = (undefined1 *)0x0;
  local_200 = (undefined1 *)0x0;
  local_1f8 = (code *)0x0;
  local_1f0 = (undefined1 *)0x0;
  puStack_1e8 = (undefined1 *)0x0;
  local_180 = 0;
  local_178 = (code *)0x0;
  local_170 = 0;
  uStack_168 = 0;
  local_320 = 0x1e;
  local_318 = (long *)0x0;
  pcVar5 = (code *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
    pcVar5 = local_2f8;
  }
  local_340 = auStack_70;
  local_318 = (long *)0x0;
  puStack_338 = auStack_68;
  if (pcVar5 != (code *)0x0) {
    local_2f0 = (undefined1 *)0x0;
    local_2e8 = (undefined1 *)0x0;
    local_300 = (undefined1 *)0x0;
    local_2f8 = (code *)0x0;
    (*pcVar5)(apuStack_2e0);
  }
  pcVar5 = local_278;
  local_300 = &LAB_018bceb8;
  local_2f8 = FUN_02b78eec;
  local_2f0 = &LAB_02b78ef0;
  local_2e8 = &LAB_02b78efc;
  apuStack_2e0[0] = (undefined1 *)&local_340;
  if (local_278 != (code *)0x0) {
    local_270 = (undefined1 *)0x0;
    puStack_268 = (undefined1 *)0x0;
    local_280 = (undefined1 *)0x0;
    local_278 = (code *)0x0;
    apuStack_2e0[0] = (undefined1 *)&local_340;
    (*pcVar5)(local_260);
  }
  pcVar5 = local_1f8;
  local_280 = &LAB_0222812c;
  local_278 = FUN_02b78f08;
  local_270 = &LAB_02b78f0c;
  puStack_268 = &LAB_02b78f18;
  local_260[0] = (undefined1 *)&local_340;
  if (local_1f8 != (code *)0x0) {
    local_1f0 = (undefined1 *)0x0;
    puStack_1e8 = (undefined1 *)0x0;
    local_200 = (undefined1 *)0x0;
    local_1f8 = (code *)0x0;
    local_260[0] = (undefined1 *)&local_340;
    (*pcVar5)(local_1e0);
  }
  local_200 = &LAB_0222821c;
  local_1f8 = FUN_02b78f24;
  local_1f0 = &LAB_02b78f28;
  puStack_1e8 = &LAB_02b78f34;
  local_1e0[0] = (undefined1 *)&local_340;
  FUN_0162f274(param_1,&local_330);
  pcVar5 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = 0;
    local_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar5)(auStack_e0);
  }
  pcVar5 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    local_178 = (code *)0x0;
    (*pcVar5)(auStack_160);
  }
  pcVar5 = local_1f8;
  if (local_1f8 != (code *)0x0) {
    local_1f0 = (undefined1 *)0x0;
    puStack_1e8 = (undefined1 *)0x0;
    local_200 = (undefined1 *)0x0;
    local_1f8 = (code *)0x0;
    (*pcVar5)(local_1e0);
  }
  pcVar5 = local_278;
  if (local_278 != (code *)0x0) {
    local_270 = (undefined1 *)0x0;
    puStack_268 = (undefined1 *)0x0;
    local_280 = (undefined1 *)0x0;
    local_278 = (code *)0x0;
    (*pcVar5)(local_260);
  }
  pcVar5 = local_2f8;
  if (local_2f8 != (code *)0x0) {
    local_2f0 = (undefined1 *)0x0;
    local_2e8 = (undefined1 *)0x0;
    local_300 = (undefined1 *)0x0;
    local_2f8 = (code *)0x0;
    (*pcVar5)(apuStack_2e0);
  }
  if (local_318 != (long *)0x0) {
    (**(code **)(*local_318 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_330 = *(undefined8 *)puVar2;
  pcStack_328 = *(char **)(puVar2 + 8);
  local_320 = *(undefined8 *)(puVar2 + 0x10);
  local_318 = *(long **)(puVar2 + 0x18);
  plVar4 = local_318;
  if (local_318 != (long *)0x0) {
    (**(code **)(*local_318 + 0x18))();
    plVar4 = local_318;
  }
  local_310 = 1;
  local_e8 = 0;
  local_330 = 0x9608bb2037553904;
  pcStack_328 = "GameObject/SetRotationFront";
  local_f0 = 0;
  local_300 = (undefined1 *)0x0;
  local_2f8 = (code *)0x0;
  local_f8 = (code *)0x0;
  local_100 = 0;
  local_2f0 = (undefined1 *)0x0;
  local_2e8 = (undefined1 *)0x0;
  local_280 = (undefined1 *)0x0;
  local_278 = (code *)0x0;
  local_270 = (undefined1 *)0x0;
  puStack_268 = (undefined1 *)0x0;
  local_200 = (undefined1 *)0x0;
  local_1f8 = (code *)0x0;
  local_1f0 = (undefined1 *)0x0;
  puStack_1e8 = (undefined1 *)0x0;
  local_180 = 0;
  local_178 = (code *)0x0;
  local_170 = 0;
  uStack_168 = 0;
  local_320 = 0x1b;
  local_318 = (long *)0x0;
  pcVar5 = (code *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
    pcVar5 = local_2f8;
  }
  local_340 = auStack_70;
  local_318 = (long *)0x0;
  puStack_338 = auStack_78;
  if (pcVar5 != (code *)0x0) {
    local_2f0 = (undefined1 *)0x0;
    local_2e8 = (undefined1 *)0x0;
    local_300 = (undefined1 *)0x0;
    local_2f8 = (code *)0x0;
    (*pcVar5)(apuStack_2e0);
  }
  pcVar5 = local_278;
  local_300 = &LAB_02228304;
  local_2f8 = FUN_02b78f40;
  local_2f0 = &LAB_02b78f44;
  local_2e8 = &LAB_02b78f50;
  apuStack_2e0[0] = (undefined1 *)&local_340;
  if (local_278 != (code *)0x0) {
    local_270 = (undefined1 *)0x0;
    puStack_268 = (undefined1 *)0x0;
    local_280 = (undefined1 *)0x0;
    local_278 = (code *)0x0;
    apuStack_2e0[0] = (undefined1 *)&local_340;
    (*pcVar5)(local_260);
  }
  pcVar5 = local_1f8;
  local_280 = &LAB_02228c90;
  local_278 = FUN_02b78f5c;
  local_270 = &LAB_02b78f60;
  puStack_268 = &LAB_02b78f6c;
  local_260[0] = (undefined1 *)&local_340;
  if (local_1f8 != (code *)0x0) {
    local_1f0 = (undefined1 *)0x0;
    puStack_1e8 = (undefined1 *)0x0;
    local_200 = (undefined1 *)0x0;
    local_1f8 = (code *)0x0;
    local_260[0] = (undefined1 *)&local_340;
    (*pcVar5)(local_1e0);
  }
  local_200 = &LAB_02228d70;
  local_1f8 = FUN_02b78f78;
  local_1f0 = &LAB_02b78f7c;
  puStack_1e8 = &LAB_02b78f88;
  local_1e0[0] = (undefined1 *)&local_340;
  FUN_0162f274(param_1,&local_330);
  pcVar5 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = 0;
    local_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar5)(auStack_e0);
  }
  pcVar5 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    local_178 = (code *)0x0;
    (*pcVar5)(auStack_160);
  }
  pcVar5 = local_1f8;
  if (local_1f8 != (code *)0x0) {
    local_1f0 = (undefined1 *)0x0;
    puStack_1e8 = (undefined1 *)0x0;
    local_200 = (undefined1 *)0x0;
    local_1f8 = (code *)0x0;
    (*pcVar5)(local_1e0);
  }
  pcVar5 = local_278;
  if (local_278 != (code *)0x0) {
    local_270 = (undefined1 *)0x0;
    puStack_268 = (undefined1 *)0x0;
    local_280 = (undefined1 *)0x0;
    local_278 = (code *)0x0;
    (*pcVar5)(local_260);
  }
  pcVar5 = local_2f8;
  if (local_2f8 != (code *)0x0) {
    local_2f0 = (undefined1 *)0x0;
    local_2e8 = (undefined1 *)0x0;
    local_300 = (undefined1 *)0x0;
    local_2f8 = (code *)0x0;
    (*pcVar5)(apuStack_2e0);
  }
  if (local_318 != (long *)0x0) {
    (**(code **)(*local_318 + 0x20))();
  }
  return;
}


