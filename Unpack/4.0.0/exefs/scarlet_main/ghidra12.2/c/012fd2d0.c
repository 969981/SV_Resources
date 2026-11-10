/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012fd2d0; name: FUN_012fd2d0
 */


void FUN_012fd2d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 local_310;
  char *pcStack_308;
  undefined8 local_300;
  long *local_2f8;
  undefined1 local_2f0;
  code *local_2e0;
  code *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined1 *apuStack_2c0 [12];
  undefined1 *local_260;
  code *local_258;
  undefined1 *local_250;
  undefined1 *puStack_248;
  undefined1 *local_240 [12];
  code *local_1e0;
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
  undefined1 auStack_48 [8];
  
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
  local_310 = 0xd99e23f665d505e3;
  pcStack_308 = "Camera/SetFovy";
  local_2e0 = (code *)0x0;
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
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_300 = 0xe;
  local_2f8 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  local_2f8 = (long *)0x0;
  local_2e0 = FUN_0223a1b0;
  local_2d8 = FUN_02b793b8;
  local_2d0 = &LAB_02b793bc;
  local_2c8 = &LAB_02b793c0;
  local_260 = &LAB_0223a78c;
  local_258 = FUN_02b793c4;
  local_250 = &LAB_02b793c8;
  puStack_248 = &LAB_02b793cc;
  local_1e0 = (code *)&LAB_0223aea8;
  local_1d8 = FUN_02b793d0;
  local_1d0 = &LAB_02b793d4;
  puStack_1c8 = &LAB_02b793d8;
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
    local_1e0 = (code *)0x0;
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
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar5)(apuStack_2c0);
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
  local_310 = 0xdd1ccf68fb41f3b0;
  pcStack_308 = "Camera/SetNearFar";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_300 = 0x11;
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
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar5)(apuStack_2c0);
    }
  }
  pcVar5 = local_258;
  local_2e0 = (code *)&LAB_0223b45c;
  local_2d8 = FUN_02b793dc;
  local_2d0 = &LAB_02b793e0;
  local_2c8 = &LAB_02b793e4;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar5)(local_240);
  }
  pcVar5 = local_1d8;
  local_260 = &LAB_0223ba84;
  local_258 = FUN_02b793e8;
  local_250 = &LAB_02b793ec;
  puStack_248 = &LAB_02b793f0;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  local_1e0 = (code *)&LAB_0223c20c;
  local_1d8 = FUN_02b793f4;
  local_1d0 = &LAB_02b793f8;
  puStack_1c8 = &LAB_02b793fc;
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
    local_1e0 = (code *)0x0;
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
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar5)(apuStack_2c0);
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
  local_310 = 0x2ae7bfcc8649ea93;
  pcStack_308 = "Camera/SetRotation";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_300 = 0x12;
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
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar5)(apuStack_2c0);
    }
  }
  pcVar5 = local_258;
  local_2e0 = FUN_01a63088;
  local_2d8 = FUN_02b79400;
  local_2d0 = &LAB_02b79404;
  local_2c8 = &LAB_02b79408;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar5)(local_240);
  }
  pcVar5 = local_1d8;
  local_260 = &LAB_0223c7f8;
  local_258 = FUN_02b7940c;
  local_250 = &LAB_02b79410;
  puStack_248 = &LAB_02b79414;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  local_1e0 = FUN_01a65e20;
  local_1d8 = FUN_02b79418;
  local_1d0 = &LAB_02b7941c;
  puStack_1c8 = &LAB_02b79420;
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
    local_1e0 = (code *)0x0;
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
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar5)(apuStack_2c0);
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
  local_310 = 0x820804a3c7613e53;
  pcStack_308 = "Camera/SetTargetObject";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_300 = 0x16;
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
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar5)(apuStack_2c0);
    }
  }
  local_2e0 = (code *)&LAB_0223d464;
  local_2d8 = FUN_02b79424;
  local_2d0 = &LAB_02b79428;
  local_2c8 = &LAB_02b7942c;
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
    local_1e0 = (code *)0x0;
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
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar5)(apuStack_2c0);
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
  local_310 = 0x475d357a1e012fa4;
  pcStack_308 = "Camera/SetTarget";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_300 = 0x10;
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
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar5)(apuStack_2c0);
    }
  }
  pcVar5 = local_258;
  local_2e0 = (code *)&LAB_0223db88;
  local_2d8 = FUN_02b79430;
  local_2d0 = &LAB_02b79434;
  local_2c8 = &LAB_02b79438;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar5)(local_240);
  }
  pcVar5 = local_1d8;
  local_260 = &LAB_0223e1b8;
  local_258 = FUN_02b7943c;
  local_250 = &LAB_02b79440;
  puStack_248 = &LAB_02b79444;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  local_1e0 = (code *)&LAB_0223e9b8;
  local_1d8 = FUN_02b79448;
  local_1d0 = &LAB_02b7944c;
  puStack_1c8 = &LAB_02b79450;
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
    local_1e0 = (code *)0x0;
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
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar5)(apuStack_2c0);
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
  local_310 = 0x75d735ec071b7efb;
  pcStack_308 = "Camera/SelectThis";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_300 = 0x11;
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
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar5)(apuStack_2c0);
    }
  }
  local_2e0 = (code *)&LAB_017e95b4;
  local_2d8 = FUN_02b79454;
  local_2d0 = &LAB_02b79458;
  local_2c8 = &LAB_02b7945c;
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
    local_1e0 = (code *)0x0;
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
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar5)(apuStack_2c0);
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
  local_310 = 0x85de6a52c5f33235;
  pcStack_308 = "Camera/SetOffsetDistance";
  local_e0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
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
      local_2e0 = (code *)0x0;
      local_2d8 = (code *)0x0;
      (*pcVar5)(apuStack_2c0);
    }
  }
  pcVar5 = local_258;
  local_2e0 = (code *)&LAB_0223f0cc;
  local_2d8 = FUN_02b79460;
  local_2d0 = &LAB_02b79464;
  local_2c8 = &LAB_02b79468;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar5)(local_240);
  }
  pcVar5 = local_1d8;
  local_260 = &LAB_0223f6b4;
  local_258 = FUN_02b7946c;
  local_250 = &LAB_02b79470;
  puStack_248 = &LAB_02b79474;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  local_1e0 = (code *)&LAB_0223fdec;
  local_1d8 = FUN_02b79478;
  local_1d0 = &LAB_02b7947c;
  puStack_1c8 = &LAB_02b79480;
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
    local_1e0 = (code *)0x0;
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
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar5)(apuStack_2c0);
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
  local_310 = 0xb8e00dce029def7;
  pcStack_308 = "Camera/SetTrackingCameraWithNode";
  local_d0 = 0;
  local_2e0 = (code *)0x0;
  local_2d8 = (code *)0x0;
  local_d8 = (code *)0x0;
  local_e0 = 0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (undefined1 *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (code *)0x0;
  local_250 = (undefined1 *)0x0;
  puStack_248 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1d8 = (code *)0x0;
  local_1d0 = (undefined1 *)0x0;
  puStack_1c8 = (undefined1 *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_300 = 0x20;
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
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar5)(apuStack_2c0);
  }
  pcVar5 = local_258;
  local_2e0 = (code *)&LAB_022403b0;
  local_2d8 = FUN_02b79484;
  local_2d0 = &LAB_02b79488;
  local_2c8 = &LAB_02b79494;
  apuStack_2c0[0] = auStack_48;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    puStack_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar5)(local_240);
  }
  pcVar5 = local_1d8;
  local_260 = &LAB_02241664;
  local_258 = FUN_02b794a0;
  local_250 = &LAB_02b794a4;
  puStack_248 = &LAB_02b794b0;
  local_240[0] = auStack_48;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar5)(local_1c0);
  }
  local_1c0[0] = auStack_48;
  local_1e0 = (code *)&LAB_02241754;
  local_1d8 = FUN_02b794bc;
  local_1d0 = &LAB_02b794c0;
  puStack_1c8 = &LAB_02b794cc;
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
    local_1e0 = (code *)0x0;
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
    local_2e0 = (code *)0x0;
    local_2d8 = (code *)0x0;
    (*pcVar5)(apuStack_2c0);
  }
  if (local_2f8 != (long *)0x0) {
    (**(code **)(*local_2f8 + 0x20))();
  }
  return;
}


