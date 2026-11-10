/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012bc44c; name: FUN_012bc44c
 */


void FUN_012bc44c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  undefined8 local_300;
  char *pcStack_2f8;
  undefined8 local_2f0;
  long *local_2e8;
  undefined1 local_2e0;
  code *local_2d0;
  code *local_2c8;
  undefined1 *local_2c0;
  undefined1 *puStack_2b8;
  undefined1 auStack_2b0 [96];
  undefined8 local_250;
  code *local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [96];
  undefined1 *local_1d0;
  code *local_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
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
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  local_300 = *(undefined8 *)PTR_DAT_047d3e30;
  pcStack_2f8 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_2f0 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  plVar5 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar5 != (long *)0x0) {
    local_2e8 = plVar5;
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_2e0 = 1;
  local_b8 = 0;
  local_300 = 0x45ff91631df447dc;
  pcStack_2f8 = "Layout/SetVisibility";
  local_2d0 = (code *)0x0;
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
  local_1d0 = (undefined1 *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0x14;
  local_2e8 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  local_2e8 = (long *)0x0;
  local_2d0 = (code *)&LAB_0140ef90;
  local_2c8 = FUN_02b797ec;
  local_2c0 = &LAB_02b797f0;
  puStack_2b8 = &LAB_02b797f4;
  local_1d0 = &LAB_0186579c;
  local_1c8 = FUN_02b797f8;
  local_1c0 = &LAB_02b797fc;
  puStack_1b8 = &LAB_02b79800;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar3)(auStack_b0);
  }
  pcVar3 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar3)(auStack_130);
  }
  pcVar3 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (undefined1 *)0x0;
    puStack_1b8 = (undefined1 *)0x0;
    local_1d0 = (undefined1 *)0x0;
    local_1c8 = (code *)0x0;
    (*pcVar3)(auStack_1b0);
  }
  pcVar3 = local_248;
  if (local_248 != (code *)0x0) {
    local_240 = 0;
    uStack_238 = 0;
    local_250 = 0;
    local_248 = (code *)0x0;
    (*pcVar3)(auStack_230);
  }
  pcVar3 = local_2c8;
  if (local_2c8 != (code *)0x0) {
    local_2c0 = (undefined1 *)0x0;
    puStack_2b8 = (undefined1 *)0x0;
    local_2d0 = (code *)0x0;
    local_2c8 = (code *)0x0;
    (*pcVar3)(auStack_2b0);
  }
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_300 = *(undefined8 *)puVar2;
  pcStack_2f8 = *(char **)(puVar2 + 8);
  local_2f0 = *(undefined8 *)(puVar2 + 0x10);
  local_2e8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2e8;
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x18))();
    plVar5 = local_2e8;
  }
  local_2e0 = 1;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = (code *)0x0;
  local_300 = 0xec117e0ae3e015e0;
  pcStack_2f8 = "Layout/PlayAnimation";
  local_d0 = 0;
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = (undefined1 *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0x14;
  local_2e8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2e8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2c8;
    local_2e8 = (long *)0x0;
    if (local_2c8 != (code *)0x0) {
      local_2c0 = (undefined1 *)0x0;
      puStack_2b8 = (undefined1 *)0x0;
      local_2d0 = (code *)0x0;
      local_2c8 = (code *)0x0;
      (*pcVar3)(auStack_2b0);
    }
  }
  local_2d0 = (code *)&LAB_01832730;
  local_2c8 = FUN_02b79804;
  local_2c0 = &LAB_02b79808;
  puStack_2b8 = &LAB_02b7980c;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar3)(auStack_b0);
  }
  pcVar3 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar3)(auStack_130);
  }
  pcVar3 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (undefined1 *)0x0;
    puStack_1b8 = (undefined1 *)0x0;
    local_1d0 = (undefined1 *)0x0;
    local_1c8 = (code *)0x0;
    (*pcVar3)(auStack_1b0);
  }
  pcVar3 = local_248;
  if (local_248 != (code *)0x0) {
    local_240 = 0;
    uStack_238 = 0;
    local_250 = 0;
    local_248 = (code *)0x0;
    (*pcVar3)(auStack_230);
  }
  pcVar3 = local_2c8;
  if (local_2c8 != (code *)0x0) {
    local_2c0 = (undefined1 *)0x0;
    puStack_2b8 = (undefined1 *)0x0;
    local_2d0 = (code *)0x0;
    local_2c8 = (code *)0x0;
    (*pcVar3)(auStack_2b0);
  }
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_300 = *(undefined8 *)puVar2;
  pcStack_2f8 = *(char **)(puVar2 + 8);
  local_2f0 = *(undefined8 *)(puVar2 + 0x10);
  local_2e8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2e8;
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x18))();
    plVar5 = local_2e8;
  }
  local_2e0 = 1;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = (code *)0x0;
  local_300 = 0xa5bb6c528ca1d366;
  pcStack_2f8 = "Layout/StopAnimation";
  local_d0 = 0;
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = (undefined1 *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0x14;
  local_2e8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2e8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2c8;
    local_2e8 = (long *)0x0;
    if (local_2c8 != (code *)0x0) {
      local_2c0 = (undefined1 *)0x0;
      puStack_2b8 = (undefined1 *)0x0;
      local_2d0 = (code *)0x0;
      local_2c8 = (code *)0x0;
      (*pcVar3)(auStack_2b0);
    }
  }
  local_2d0 = FUN_022498c0;
  local_2c8 = FUN_02b79810;
  local_2c0 = &LAB_02b79814;
  puStack_2b8 = &LAB_02b79818;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar3)(auStack_b0);
  }
  pcVar3 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar3)(auStack_130);
  }
  pcVar3 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (undefined1 *)0x0;
    puStack_1b8 = (undefined1 *)0x0;
    local_1d0 = (undefined1 *)0x0;
    local_1c8 = (code *)0x0;
    (*pcVar3)(auStack_1b0);
  }
  pcVar3 = local_248;
  if (local_248 != (code *)0x0) {
    local_240 = 0;
    uStack_238 = 0;
    local_250 = 0;
    local_248 = (code *)0x0;
    (*pcVar3)(auStack_230);
  }
  pcVar3 = local_2c8;
  if (local_2c8 != (code *)0x0) {
    local_2c0 = (undefined1 *)0x0;
    puStack_2b8 = (undefined1 *)0x0;
    local_2d0 = (code *)0x0;
    local_2c8 = (code *)0x0;
    (*pcVar3)(auStack_2b0);
  }
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x20))();
  }
  if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_300 = *(undefined8 *)puVar2;
  pcStack_2f8 = *(char **)(puVar2 + 8);
  local_2f0 = *(undefined8 *)(puVar2 + 0x10);
  local_2e8 = *(long **)(puVar2 + 0x18);
  plVar5 = local_2e8;
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x18))();
    plVar5 = local_2e8;
  }
  local_2e0 = 1;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = (code *)0x0;
  local_300 = 0xe83ac52132291b77;
  pcStack_2f8 = "Layout/SetText";
  local_d0 = 0;
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = (undefined1 *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0xe;
  local_2e8 = (long *)0x0;
  if (plVar5 == (long *)0x0) {
    local_2e8 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar5 + 0x20))();
    pcVar3 = local_2c8;
    local_2e8 = (long *)0x0;
    if (local_2c8 != (code *)0x0) {
      local_2c0 = (undefined1 *)0x0;
      puStack_2b8 = (undefined1 *)0x0;
      local_2d0 = (code *)0x0;
      local_2c8 = (code *)0x0;
      (*pcVar3)(auStack_2b0);
    }
  }
  local_2d0 = FUN_02249c7c;
  local_2c8 = FUN_02b7981c;
  local_2c0 = &LAB_02b79820;
  puStack_2b8 = &LAB_02b79824;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar3)(auStack_b0);
  }
  pcVar3 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar3)(auStack_130);
  }
  pcVar3 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (undefined1 *)0x0;
    puStack_1b8 = (undefined1 *)0x0;
    local_1d0 = (undefined1 *)0x0;
    local_1c8 = (code *)0x0;
    (*pcVar3)(auStack_1b0);
  }
  pcVar3 = local_248;
  if (local_248 != (code *)0x0) {
    local_240 = 0;
    uStack_238 = 0;
    local_250 = 0;
    local_248 = (code *)0x0;
    (*pcVar3)(auStack_230);
  }
  pcVar3 = local_2c8;
  if (local_2c8 != (code *)0x0) {
    local_2c0 = (undefined1 *)0x0;
    puStack_2b8 = (undefined1 *)0x0;
    local_2d0 = (code *)0x0;
    local_2c8 = (code *)0x0;
    (*pcVar3)(auStack_2b0);
  }
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x20))();
  }
  return;
}


