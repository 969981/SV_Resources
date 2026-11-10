/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013085b0; name: FUN_013085b0
 */


void FUN_013085b0(undefined8 param_1)

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
  code *local_1d0;
  code *local_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 auStack_1b0 [96];
  undefined8 local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [96];
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
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
  local_b8 = (undefined1 *)0x0;
  local_300 = 0xe8902dda97f10c93;
  pcStack_2f8 = "Audio/PostEventGlobal";
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_c8 = (code *)0x0;
  local_d0 = (undefined1 *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = (code *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0x15;
  local_2e8 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  local_2e8 = (long *)0x0;
  local_2d0 = (code *)&LAB_014975a8;
  local_2c8 = FUN_02b790b8;
  local_2c0 = &LAB_02b790bc;
  puStack_2b8 = &LAB_02b790c0;
  local_d0 = &LAB_01a3fe2c;
  local_c8 = FUN_02b790c4;
  local_c0 = &LAB_02b790c8;
  local_b8 = &LAB_02b790cc;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
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
    local_1d0 = (code *)0x0;
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
  local_b8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_c8 = (code *)0x0;
  local_300 = 0x75f6e4d16d0a2406;
  pcStack_2f8 = "Audio/PostEventAtObject";
  local_d0 = (undefined1 *)0x0;
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = (code *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0x17;
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
  pcVar3 = local_c8;
  local_2d0 = FUN_014dca74;
  local_2c8 = FUN_02b790d0;
  local_2c0 = &LAB_02b790d4;
  puStack_2b8 = &LAB_02b790d8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar3)(auStack_b0);
  }
  local_d0 = &LAB_02230c08;
  local_c8 = FUN_02b790dc;
  local_c0 = &LAB_02b790e0;
  local_b8 = &LAB_02b790e4;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
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
    local_1d0 = (code *)0x0;
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
  local_b8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_c8 = (code *)0x0;
  local_300 = 0x7a48ecdb73d55d72;
  pcStack_2f8 = "Audio/PostEventAtLocation";
  local_d0 = (undefined1 *)0x0;
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = (code *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0x19;
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
  local_2d0 = (code *)&LAB_02230d80;
  local_2c8 = FUN_02b790e8;
  local_2c0 = &LAB_02b790ec;
  puStack_2b8 = &LAB_02b790f0;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
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
    local_1d0 = (code *)0x0;
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
  local_b8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_c8 = (code *)0x0;
  local_300 = 0x495df1a2e082e78d;
  pcStack_2f8 = "Audio/PostEventAtObjectLocation";
  local_d0 = (undefined1 *)0x0;
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = (code *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0x1f;
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
  local_2d0 = (code *)&LAB_01972724;
  local_2c8 = FUN_02b790f4;
  local_2c0 = &LAB_02b790f8;
  puStack_2b8 = &LAB_02b790fc;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
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
    local_1d0 = (code *)0x0;
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
  local_b8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_c8 = (code *)0x0;
  local_300 = 0x43462c106a769b1b;
  pcStack_2f8 = "Audio/PostEventAtJoint";
  local_d0 = (undefined1 *)0x0;
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = (code *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0x16;
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
  local_2d0 = FUN_02231108;
  local_2c8 = FUN_02b79100;
  local_2c0 = &LAB_02b79104;
  puStack_2b8 = &LAB_02b79108;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
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
    local_1d0 = (code *)0x0;
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
  local_b8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_c8 = (code *)0x0;
  local_300 = 0xe004b7a983ce01c9;
  pcStack_2f8 = "Audio/IgnoreAnimationSound";
  local_d0 = (undefined1 *)0x0;
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = (code *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0x1a;
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
  pcVar3 = local_1c8;
  local_2d0 = (code *)&LAB_02231790;
  local_2c8 = FUN_02b7910c;
  local_2c0 = &LAB_02b79110;
  puStack_2b8 = &LAB_02b79114;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (undefined1 *)0x0;
    puStack_1b8 = (undefined1 *)0x0;
    local_1d0 = (code *)0x0;
    local_1c8 = (code *)0x0;
    (*pcVar3)(auStack_1b0);
  }
  local_1d0 = (code *)&LAB_02231b34;
  local_1c8 = FUN_02b79118;
  local_1c0 = &LAB_02b7911c;
  puStack_1b8 = &LAB_02b79120;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
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
    local_1d0 = (code *)0x0;
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
  local_b8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_c8 = (code *)0x0;
  local_300 = 0x8d299dada6d68765;
  pcStack_2f8 = "Audio/LockMotionDetector";
  local_d0 = (undefined1 *)0x0;
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = (code *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0x18;
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
  pcVar3 = local_1c8;
  local_2d0 = (code *)&LAB_02231e9c;
  local_2c8 = FUN_02b79124;
  local_2c0 = &LAB_02b79128;
  puStack_2b8 = &LAB_02b7912c;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (undefined1 *)0x0;
    puStack_1b8 = (undefined1 *)0x0;
    local_1d0 = (code *)0x0;
    local_1c8 = (code *)0x0;
    (*pcVar3)(auStack_1b0);
  }
  local_1d0 = (code *)&LAB_02232238;
  local_1c8 = FUN_02b79130;
  local_1c0 = &LAB_02b79134;
  puStack_1b8 = &LAB_02b79138;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
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
    local_1d0 = (code *)0x0;
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
  local_b8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_c8 = (code *)0x0;
  local_300 = 0xae23c285e0a0305a;
  pcStack_2f8 = "Audio/SetSwitch";
  local_d0 = (undefined1 *)0x0;
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = (code *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0xf;
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
  pcVar3 = local_c8;
  local_2d0 = (code *)&LAB_022325dc;
  local_2c8 = FUN_02b7913c;
  local_2c0 = &LAB_02b79140;
  puStack_2b8 = &LAB_02b79144;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar3)(auStack_b0);
  }
  local_d0 = &LAB_02232a14;
  local_c8 = FUN_02b79148;
  local_c0 = &LAB_02b7914c;
  local_b8 = &LAB_02b79150;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
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
    local_1d0 = (code *)0x0;
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
  local_b8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_c8 = (code *)0x0;
  local_300 = 0xa653f5bef403ca77;
  pcStack_2f8 = "Audio/SetState";
  local_d0 = (undefined1 *)0x0;
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = (code *)0x0;
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
  pcVar3 = local_c8;
  local_2d0 = (code *)&LAB_02232b8c;
  local_2c8 = FUN_02b79154;
  local_2c0 = &LAB_02b79158;
  puStack_2b8 = &LAB_02b7915c;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar3)(auStack_b0);
  }
  local_d0 = &LAB_02232e38;
  local_c8 = FUN_02b79160;
  local_c0 = &LAB_02b79164;
  local_b8 = &LAB_02b79168;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
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
    local_1d0 = (code *)0x0;
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
  local_b8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_c8 = (code *)0x0;
  local_300 = 0xffea79378dd55645;
  pcStack_2f8 = "Audio/SetRTPC";
  local_d0 = (undefined1 *)0x0;
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = (code *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0xd;
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
  pcVar3 = local_c8;
  local_2d0 = (code *)&LAB_01a75920;
  local_2c8 = FUN_02b7916c;
  local_2c0 = &LAB_02b79170;
  puStack_2b8 = &LAB_02b79174;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar3)(auStack_b0);
  }
  local_d0 = &LAB_02232fb0;
  local_c8 = FUN_02b79178;
  local_c0 = &LAB_02b7917c;
  local_b8 = &LAB_02b79180;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
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
    local_1d0 = (code *)0x0;
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
  local_b8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_c8 = (code *)0x0;
  local_300 = 0x69ab9d417b8120bc;
  pcStack_2f8 = "Audio/LoadBank";
  local_d0 = (undefined1 *)0x0;
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = (code *)0x0;
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
  local_2d0 = (code *)&LAB_02233128;
  local_2c8 = FUN_02b79184;
  local_2c0 = &LAB_02b79188;
  puStack_2b8 = &LAB_02b7918c;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
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
    local_1d0 = (code *)0x0;
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
  local_b8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_c8 = (code *)0x0;
  local_300 = 0x1843c353cb2993cf;
  pcStack_2f8 = "Audio/UnloadBank";
  local_d0 = (undefined1 *)0x0;
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = (code *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0x10;
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
  local_2d0 = (code *)&LAB_02233364;
  local_2c8 = FUN_02b79190;
  local_2c0 = &LAB_02b79194;
  puStack_2b8 = &LAB_02b79198;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
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
    local_1d0 = (code *)0x0;
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
  local_b8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_c8 = (code *)0x0;
  local_300 = 0xe60225bdb4d373c3;
  pcStack_2f8 = "Audio/PrepareEvent";
  local_d0 = (undefined1 *)0x0;
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = (code *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0x12;
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
  local_2d0 = (code *)&LAB_02233620;
  local_2c8 = FUN_02b7919c;
  local_2c0 = &LAB_02b791a0;
  puStack_2b8 = &LAB_02b791a4;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
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
    local_1d0 = (code *)0x0;
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
  local_b8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_c8 = (code *)0x0;
  local_300 = 0x80025cbfbb4c7678;
  pcStack_2f8 = "Audio/UnprepareEvent";
  local_d0 = (undefined1 *)0x0;
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = (code *)0x0;
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
  local_2d0 = (code *)&LAB_0223385c;
  local_2c8 = FUN_02b791a8;
  local_2c0 = &LAB_02b791ac;
  puStack_2b8 = &LAB_02b791b0;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
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
    local_1d0 = (code *)0x0;
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
  local_b8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_c8 = (code *)0x0;
  local_300 = 0xff34fc5e2b5345bb;
  pcStack_2f8 = "Audio/ShapeSoundGenerator";
  local_d0 = (undefined1 *)0x0;
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = (code *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0x19;
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
  pcVar3 = local_1c8;
  local_2d0 = (code *)&LAB_02233a94;
  local_2c8 = FUN_02b791b4;
  local_2c0 = &LAB_02b791b8;
  puStack_2b8 = &LAB_02b791bc;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (undefined1 *)0x0;
    puStack_1b8 = (undefined1 *)0x0;
    local_1d0 = (code *)0x0;
    local_1c8 = (code *)0x0;
    (*pcVar3)(auStack_1b0);
  }
  local_1d0 = FUN_02234c74;
  local_1c8 = FUN_02b791c0;
  local_1c0 = &LAB_02b791c4;
  puStack_1b8 = &LAB_02b791c8;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
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
    local_1d0 = (code *)0x0;
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
  local_b8 = (undefined1 *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_c8 = (code *)0x0;
  local_300 = 0x51933a07a8fed81c;
  pcStack_2f8 = "Audio/PreviewAddAudioComponent";
  local_d0 = (undefined1 *)0x0;
  local_2d0 = (code *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = 0;
  local_248 = (code *)0x0;
  local_240 = 0;
  uStack_238 = 0;
  local_1d0 = (code *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0x1e;
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
  local_2d0 = (code *)&LAB_022351b4;
  local_2c8 = FUN_02b791cc;
  local_2c0 = &LAB_02b791d0;
  puStack_2b8 = &LAB_02b791d4;
  FUN_0162f274(param_1,&local_300);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
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
    local_1d0 = (code *)0x0;
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


