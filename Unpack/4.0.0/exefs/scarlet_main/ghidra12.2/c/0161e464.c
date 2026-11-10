/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0161e464; name: FUN_0161e464
 */


void FUN_0161e464(void)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_2e0;
  char *pcStack_2d8;
  undefined8 local_2d0;
  long *local_2c8;
  undefined1 local_2c0;
  undefined1 *local_2b0;
  code *local_2a8;
  undefined1 *local_2a0;
  undefined1 *puStack_298;
  undefined1 auStack_290 [96];
  undefined8 local_230;
  code *local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [96];
  undefined1 *local_1b0;
  code *local_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 auStack_190 [96];
  undefined8 local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [96];
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [96];
  
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_2e0 = *(undefined8 *)PTR_DAT_047d3e30;
  pcStack_2d8 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_2d0 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  plVar1 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar1 != (long *)0x0) {
    local_2c8 = plVar1;
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  local_2c0 = 1;
  local_98 = 0;
  local_2e0 = 0x6ef9bb75323b3cd9;
  pcStack_2d8 = "Title/EyeBlink/StopEyeBlink";
  local_2b0 = (undefined1 *)0x0;
  local_2a8 = (code *)0x0;
  local_a0 = 0;
  local_a8 = (code *)0x0;
  local_b0 = 0;
  local_2a0 = (undefined1 *)0x0;
  puStack_298 = (undefined1 *)0x0;
  local_230 = 0;
  local_228 = (code *)0x0;
  local_220 = 0;
  uStack_218 = 0;
  local_1b0 = (undefined1 *)0x0;
  local_1a8 = (code *)0x0;
  local_1a0 = (undefined1 *)0x0;
  puStack_198 = (undefined1 *)0x0;
  local_130 = 0;
  local_128 = (code *)0x0;
  local_120 = 0;
  uStack_118 = 0;
  local_2d0 = 0x1b;
  local_2c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  local_2c8 = (long *)0x0;
  local_2b0 = &LAB_019a99f4;
  local_2a8 = FUN_02b235e4;
  local_2a0 = &LAB_02b235e8;
  puStack_298 = &LAB_02b235ec;
  local_1b0 = &LAB_019aa624;
  local_1a8 = FUN_02b235f0;
  local_1a0 = &LAB_02b235f4;
  puStack_198 = &LAB_02b235f8;
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar4 = *(undefined8 *)PTR_DAT_047d8920;
  *(undefined8 *)PTR_DAT_047d8928 = uVar4;
  FUN_0162f274(uVar4,&local_2e0);
  pcVar2 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = 0;
    local_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar2)(auStack_90);
  }
  pcVar2 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    local_128 = (code *)0x0;
    (*pcVar2)(auStack_110);
  }
  pcVar2 = local_1a8;
  if (local_1a8 != (code *)0x0) {
    local_1a0 = (undefined1 *)0x0;
    puStack_198 = (undefined1 *)0x0;
    local_1b0 = (undefined1 *)0x0;
    local_1a8 = (code *)0x0;
    (*pcVar2)(auStack_190);
  }
  pcVar2 = local_228;
  if (local_228 != (code *)0x0) {
    local_220 = 0;
    uStack_218 = 0;
    local_230 = 0;
    local_228 = (code *)0x0;
    (*pcVar2)(auStack_210);
  }
  pcVar2 = local_2a8;
  if (local_2a8 != (code *)0x0) {
    local_2a0 = (undefined1 *)0x0;
    puStack_298 = (undefined1 *)0x0;
    local_2b0 = (undefined1 *)0x0;
    local_2a8 = (code *)0x0;
    (*pcVar2)(auStack_290);
  }
  if (local_2c8 != (long *)0x0) {
    (**(code **)(*local_2c8 + 0x20))();
  }
  return;
}


