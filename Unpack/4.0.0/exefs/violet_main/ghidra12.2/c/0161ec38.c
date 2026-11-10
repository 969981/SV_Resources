/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0161ec38; name: FUN_0161ec38
 */


void FUN_0161ec38(void)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined8 local_2e0;
  char *pcStack_2d8;
  undefined8 local_2d0;
  long *local_2c8;
  undefined1 local_2c0;
  undefined8 local_2b0;
  code *local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [96];
  undefined8 local_230;
  code *local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [96];
  undefined8 local_1b0;
  code *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [96];
  undefined1 *local_130;
  code *local_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 auStack_110 [96];
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [96];
  
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_2e0 = *(undefined8 *)PTR_DAT_047d3e30;
  pcStack_2d8 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_2d0 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  plVar2 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar2 != (long *)0x0) {
    local_2c8 = plVar2;
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  local_2c0 = 1;
  local_98 = 0;
  local_2e0 = 0xb082bdc5de035a09;
  pcStack_2d8 = "Title/EggDemo/EggDemoPause";
  local_2b0 = 0;
  local_2a8 = (code *)0x0;
  local_a0 = 0;
  local_a8 = (code *)0x0;
  local_b0 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_230 = 0;
  local_228 = (code *)0x0;
  local_220 = 0;
  uStack_218 = 0;
  local_1b0 = 0;
  local_1a8 = (code *)0x0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_130 = (undefined1 *)0x0;
  local_128 = (code *)0x0;
  local_120 = (undefined1 *)0x0;
  puStack_118 = (undefined1 *)0x0;
  local_2d0 = 0x1a;
  local_2c8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  local_2c8 = (long *)0x0;
  local_130 = &LAB_02b24c84;
  local_128 = FUN_02b24cc0;
  local_120 = &LAB_02b24cc4;
  puStack_118 = &LAB_02b24cc8;
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  lVar5 = *(long *)PTR_DAT_047d8920;
  *(long *)PTR_DAT_047d8928 = lVar5;
  lVar1 = *(long *)(lVar5 + 0x30);
  if (lVar1 == *(long *)(lVar5 + 0x38)) {
    FUN_0162f8f8(lVar5 + 0x28,&local_2e0);
  }
  else {
    FUN_0162f2d0(lVar5 + 0x40,lVar1,&local_2e0);
    *(long *)(lVar5 + 0x30) = lVar1 + 0x2b0;
  }
  pcVar3 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = 0;
    local_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar3)(auStack_90);
  }
  pcVar3 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = (undefined1 *)0x0;
    puStack_118 = (undefined1 *)0x0;
    local_130 = (undefined1 *)0x0;
    local_128 = (code *)0x0;
    (*pcVar3)(auStack_110);
  }
  pcVar3 = local_1a8;
  if (local_1a8 != (code *)0x0) {
    local_1a0 = 0;
    uStack_198 = 0;
    local_1b0 = 0;
    local_1a8 = (code *)0x0;
    (*pcVar3)(auStack_190);
  }
  pcVar3 = local_228;
  if (local_228 != (code *)0x0) {
    local_220 = 0;
    uStack_218 = 0;
    local_230 = 0;
    local_228 = (code *)0x0;
    (*pcVar3)(auStack_210);
  }
  pcVar3 = local_2a8;
  if (local_2a8 != (code *)0x0) {
    local_2a0 = 0;
    uStack_298 = 0;
    local_2b0 = 0;
    local_2a8 = (code *)0x0;
    (*pcVar3)(auStack_290);
  }
  if (local_2c8 != (long *)0x0) {
    (**(code **)(*local_2c8 + 0x20))();
  }
  return;
}


