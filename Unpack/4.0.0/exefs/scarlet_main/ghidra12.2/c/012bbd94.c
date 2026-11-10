/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012bbd94; name: FUN_012bbd94
 */


void FUN_012bbd94(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  undefined1 *local_310;
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
  undefined1 *local_250;
  code *local_248;
  undefined1 *local_240;
  undefined1 *puStack_238;
  undefined1 *local_230 [12];
  undefined1 *local_1d0;
  code *local_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0 [12];
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
  local_300 = 0x67a4a150a1bb6d7c;
  pcStack_2f8 = "Physics/CastRay";
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (code *)0x0;
  local_c0 = 0;
  local_c8 = (code *)0x0;
  local_d0 = 0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = (undefined1 *)0x0;
  local_248 = (code *)0x0;
  local_240 = (undefined1 *)0x0;
  puStack_238 = (undefined1 *)0x0;
  local_1d0 = (undefined1 *)0x0;
  local_1c8 = (code *)0x0;
  local_1c0 = (undefined1 *)0x0;
  puStack_1b8 = (undefined1 *)0x0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_2f0 = 0xf;
  local_2e8 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  local_310 = auStack_308;
  local_2d0 = &LAB_022429b4;
  local_2c8 = FUN_02b79514;
  local_2c0 = &LAB_02b795e0;
  puStack_2b8 = &LAB_02b795ec;
  local_250 = &LAB_02243bcc;
  local_248 = FUN_02b795f8;
  local_240 = &LAB_02b795fc;
  puStack_238 = &LAB_02b79608;
  local_1d0 = &LAB_02243c60;
  local_1c8 = FUN_02b79614;
  local_2e8 = (long *)0x0;
  local_1c0 = &LAB_02b79618;
  puStack_1b8 = &LAB_02b79624;
  local_2b0[0] = (undefined1 *)&local_310;
  local_230[0] = (undefined1 *)&local_310;
  local_1b0[0] = (undefined1 *)&local_310;
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
    (*pcVar3)(local_1b0);
  }
  pcVar3 = local_248;
  if (local_248 != (code *)0x0) {
    local_240 = (undefined1 *)0x0;
    puStack_238 = (undefined1 *)0x0;
    local_250 = (undefined1 *)0x0;
    local_248 = (code *)0x0;
    (*pcVar3)(local_230);
  }
  pcVar3 = local_2c8;
  if (local_2c8 != (code *)0x0) {
    local_2c0 = (undefined1 *)0x0;
    puStack_2b8 = (undefined1 *)0x0;
    local_2d0 = (undefined1 *)0x0;
    local_2c8 = (code *)0x0;
    (*pcVar3)(local_2b0);
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
  local_300 = 0x91692bcc6c12a235;
  pcStack_2f8 = "Physics/HavokOff";
  local_d0 = 0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = (undefined1 *)0x0;
  local_248 = (code *)0x0;
  local_240 = (undefined1 *)0x0;
  puStack_238 = (undefined1 *)0x0;
  local_1d0 = (undefined1 *)0x0;
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
      local_2d0 = (undefined1 *)0x0;
      local_2c8 = (code *)0x0;
      (*pcVar3)(local_2b0);
    }
  }
  pcVar3 = local_1c8;
  local_2d0 = &LAB_02243cf4;
  local_2c8 = FUN_02b79630;
  local_2c0 = &LAB_02b79634;
  puStack_2b8 = &LAB_02b79638;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (undefined1 *)0x0;
    puStack_1b8 = (undefined1 *)0x0;
    local_1d0 = (undefined1 *)0x0;
    local_1c8 = (code *)0x0;
    (*pcVar3)(local_1b0);
  }
  local_1d0 = &LAB_02244204;
  local_1c8 = FUN_02b7963c;
  local_1c0 = &LAB_02b79640;
  puStack_1b8 = &LAB_02b79644;
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
    (*pcVar3)(local_1b0);
  }
  pcVar3 = local_248;
  if (local_248 != (code *)0x0) {
    local_240 = (undefined1 *)0x0;
    puStack_238 = (undefined1 *)0x0;
    local_250 = (undefined1 *)0x0;
    local_248 = (code *)0x0;
    (*pcVar3)(local_230);
  }
  pcVar3 = local_2c8;
  if (local_2c8 != (code *)0x0) {
    local_2c0 = (undefined1 *)0x0;
    puStack_2b8 = (undefined1 *)0x0;
    local_2d0 = (undefined1 *)0x0;
    local_2c8 = (code *)0x0;
    (*pcVar3)(local_2b0);
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
  local_300 = 0x227d06ef03c49647;
  pcStack_2f8 = "Physics/SpringBoneReset";
  local_d0 = 0;
  local_2d0 = (undefined1 *)0x0;
  local_2c8 = (code *)0x0;
  local_2c0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  local_250 = (undefined1 *)0x0;
  local_248 = (code *)0x0;
  local_240 = (undefined1 *)0x0;
  puStack_238 = (undefined1 *)0x0;
  local_1d0 = (undefined1 *)0x0;
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
      local_2d0 = (undefined1 *)0x0;
      local_2c8 = (code *)0x0;
      (*pcVar3)(local_2b0);
    }
  }
  local_2d0 = &LAB_02244604;
  local_2c8 = FUN_02b79648;
  local_2c0 = &LAB_02b79658;
  puStack_2b8 = &LAB_02b7965c;
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
    (*pcVar3)(local_1b0);
  }
  pcVar3 = local_248;
  if (local_248 != (code *)0x0) {
    local_240 = (undefined1 *)0x0;
    puStack_238 = (undefined1 *)0x0;
    local_250 = (undefined1 *)0x0;
    local_248 = (code *)0x0;
    (*pcVar3)(local_230);
  }
  pcVar3 = local_2c8;
  if (local_2c8 != (code *)0x0) {
    local_2c0 = (undefined1 *)0x0;
    puStack_2b8 = (undefined1 *)0x0;
    local_2d0 = (undefined1 *)0x0;
    local_2c8 = (code *)0x0;
    (*pcVar3)(local_2b0);
  }
  if (local_2e8 != (long *)0x0) {
    (**(code **)(*local_2e8 + 0x20))();
  }
  return;
}


