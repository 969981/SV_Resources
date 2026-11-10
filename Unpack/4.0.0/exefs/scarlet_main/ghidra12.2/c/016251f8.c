/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016251f8; name: FUN_016251f8
 */


void FUN_016251f8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined1 auStack_330 [8];
  undefined1 auStack_328 [8];
  undefined8 local_320;
  char *pcStack_318;
  undefined8 local_310;
  long *local_308;
  undefined1 local_300;
  undefined1 *local_2f0;
  code *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *local_2d0 [12];
  undefined1 *local_270;
  code *local_268;
  undefined1 *local_260;
  undefined1 *local_258;
  undefined1 *local_250 [12];
  undefined1 *local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0 [12];
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [112];
  
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  local_320 = *(undefined8 *)PTR_DAT_047d3e30;
  pcStack_318 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_310 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  plVar8 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar8 != (long *)0x0) {
    local_308 = plVar8;
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  local_300 = 1;
  local_d8 = 0;
  local_320 = 0xdbd36b6f2dd2d008;
  pcStack_318 = "Title/BlendColor/ObjectBlendColor";
  local_2f0 = (undefined1 *)0x0;
  local_2e8 = (code *)0x0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_f0 = 0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (undefined1 *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (undefined1 *)0x0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  uStack_158 = 0;
  local_310 = 0x21;
  local_308 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  local_308 = (long *)0x0;
  local_2d0[0] = auStack_328;
  local_2f0 = &LAB_021232d0;
  local_2e8 = FUN_02b21b20;
  local_2e0 = &LAB_02b21b24;
  local_2d8 = &LAB_02b21b30;
  local_270 = &LAB_02123ab4;
  local_268 = FUN_02b21b3c;
  local_260 = &LAB_02b21b40;
  local_258 = &LAB_02b21b4c;
  local_1f0 = &LAB_02123f3c;
  local_1e8 = FUN_02b21b58;
  local_1e0 = &LAB_02b21b5c;
  local_1d8 = &LAB_02b21b68;
  local_250[0] = local_2d0[0];
  local_1d0[0] = local_2d0[0];
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  puVar4 = PTR_DAT_047d8928;
  puVar3 = PTR_DAT_047d8920;
  uVar7 = *(undefined8 *)PTR_DAT_047d8920;
  *(undefined8 *)PTR_DAT_047d8928 = uVar7;
  FUN_0162f274(uVar7,&local_320);
  pcVar5 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar5)(auStack_d0);
  }
  pcVar5 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar5)(auStack_150);
  }
  pcVar5 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar5)(local_1d0);
  }
  pcVar5 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar5)(local_250);
  }
  pcVar5 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (undefined1 *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar5)(local_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar2;
  pcStack_318 = *(char **)(puVar2 + 8);
  local_310 = *(undefined8 *)(puVar2 + 0x10);
  local_308 = *(long **)(puVar2 + 0x18);
  plVar8 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar8 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x2326bad114b2427f;
  pcStack_318 = "Title/BlendColor/Rim";
  local_f0 = 0;
  local_2f0 = (undefined1 *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (undefined1 *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (undefined1 *)0x0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  uStack_158 = 0;
  local_310 = 0x14;
  local_308 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
    pcVar5 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (undefined1 *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar5)(local_2d0);
      goto LAB_01625474;
    }
  }
  local_308 = (long *)0x0;
LAB_01625474:
  pcVar5 = local_268;
  local_2f0 = &LAB_0212429c;
  local_2e8 = FUN_02b21b74;
  local_2e0 = &LAB_02b21b78;
  local_2d8 = &LAB_02b21b84;
  local_2d0[0] = auStack_328;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar5)(local_250);
  }
  pcVar5 = local_1e8;
  local_270 = &LAB_02124c88;
  local_268 = FUN_02b21b90;
  local_260 = &LAB_02b21b94;
  local_258 = &LAB_02b21ba0;
  local_250[0] = auStack_328;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar5)(local_1d0);
  }
  local_1f0 = &LAB_02125418;
  local_1e8 = FUN_02b21bac;
  local_1e0 = &LAB_02b21bb0;
  local_1d8 = &LAB_02b21bbc;
  local_1d0[0] = auStack_328;
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar7 = *(undefined8 *)puVar3;
  *(undefined8 *)puVar4 = uVar7;
  FUN_0162f274(uVar7,&local_320);
  pcVar5 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar5)(auStack_d0);
  }
  pcVar5 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar5)(auStack_150);
  }
  pcVar5 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar5)(local_1d0);
  }
  pcVar5 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar5)(local_250);
  }
  pcVar5 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (undefined1 *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar5)(local_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar2;
  pcStack_318 = *(char **)(puVar2 + 8);
  local_310 = *(undefined8 *)(puVar2 + 0x10);
  local_308 = *(long **)(puVar2 + 0x18);
  plVar8 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar8 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0xeacd5f360456d36;
  pcStack_318 = "Title/BlendColor/RimBlend";
  local_f0 = 0;
  local_2f0 = (undefined1 *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (undefined1 *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (undefined1 *)0x0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  uStack_158 = 0;
  local_310 = 0x19;
  local_308 = (long *)0x0;
  if (plVar8 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar8 + 0x20))();
    pcVar5 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (undefined1 *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar5)(local_2d0);
    }
  }
  pcVar5 = local_268;
  local_2f0 = &LAB_021258d4;
  local_2e8 = FUN_02b21bc8;
  local_2e0 = &LAB_02b21bcc;
  local_2d8 = &LAB_02b21bd8;
  local_2d0[0] = auStack_328;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar5)(local_250);
  }
  pcVar5 = local_1e8;
  local_270 = &LAB_02125d88;
  local_268 = FUN_02b21be4;
  local_260 = &LAB_02b21be8;
  local_258 = &LAB_02b21bf4;
  local_250[0] = auStack_330;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    local_250[0] = auStack_330;
    (*pcVar5)(local_1d0);
  }
  local_1f0 = &LAB_02126308;
  local_1e8 = FUN_02b21c00;
  local_1e0 = &LAB_02b21c04;
  local_1d8 = &LAB_02b21c10;
  local_1d0[0] = auStack_330;
  if (((*PTR_DAT_047d8918 & 1) == 0) &&
     (local_1d0[0] = auStack_330, iVar6 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar6 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar7 = *(undefined8 *)puVar3;
  *(undefined8 *)puVar4 = uVar7;
  FUN_0162f274(uVar7,&local_320);
  pcVar5 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar5)(auStack_d0);
  }
  pcVar5 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar5)(auStack_150);
  }
  pcVar5 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar5)(local_1d0);
  }
  pcVar5 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar5)(local_250);
  }
  pcVar5 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (undefined1 *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar5)(local_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar2;
  pcStack_318 = *(char **)(puVar2 + 8);
  local_310 = *(undefined8 *)(puVar2 + 0x10);
  local_308 = *(long **)(puVar2 + 0x18);
  plVar8 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar8 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x6ccfc76b22d7be64;
  pcStack_318 = "Title/BlendColor/ResetRim";
  local_f0 = 0;
  local_2f0 = (undefined1 *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (undefined1 *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (undefined1 *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  local_1d8 = (undefined1 *)0x0;
  local_170 = 0;
  local_168 = (code *)0x0;
  local_160 = 0;
  uStack_158 = 0;
  local_310 = 0x19;
  local_308 = (long *)0x0;
  if (plVar8 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar8 + 0x20))();
    pcVar5 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (undefined1 *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar5)(local_2d0);
    }
  }
  pcVar5 = local_268;
  local_2f0 = &LAB_02126600;
  local_2e8 = FUN_02b21c1c;
  local_2e0 = &LAB_02b21c20;
  local_2d8 = &LAB_02b21c2c;
  local_2d0[0] = auStack_330;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    local_2d0[0] = auStack_330;
    (*pcVar5)(local_250);
  }
  pcVar5 = local_1e8;
  local_270 = &LAB_021268f8;
  local_268 = FUN_02b21c38;
  local_260 = &LAB_02b21c3c;
  local_258 = &LAB_02b21c48;
  local_250[0] = auStack_330;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    local_250[0] = auStack_330;
    (*pcVar5)(local_1d0);
  }
  local_1f0 = &LAB_02126c7c;
  local_1e8 = FUN_02b21c54;
  local_1e0 = &LAB_02b21c58;
  local_1d8 = &LAB_02b21c64;
  local_1d0[0] = auStack_330;
  if (((*PTR_DAT_047d8918 & 1) == 0) &&
     (local_1d0[0] = auStack_330, iVar6 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar6 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar7 = *(undefined8 *)puVar3;
  *(undefined8 *)puVar4 = uVar7;
  FUN_0162f274(uVar7,&local_320);
  pcVar5 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar5)(auStack_d0);
  }
  pcVar5 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar5)(auStack_150);
  }
  pcVar5 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar5)(local_1d0);
  }
  pcVar5 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar5)(local_250);
  }
  pcVar5 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (undefined1 *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar5)(local_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  *(undefined8 *)puVar4 = *(undefined8 *)puVar3;
  plVar9 = (long *)FUN_0162f2c8();
  plVar8 = (long *)*plVar9;
  plVar10 = (long *)plVar9[1];
  if ((plVar8 != plVar10) && (*plVar8 != 0x1be915f7a564736f)) {
    do {
      plVar8 = plVar8 + 0x56;
      if (plVar10 == plVar8) {
        plVar8 = plVar10;
        goto LAB_016259ac;
      }
    } while (*plVar8 != 0x1be915f7a564736f);
  }
LAB_016259ac:
  if (plVar10 != plVar8) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_320 = *(undefined8 *)puVar2;
    pcStack_318 = *(char **)(puVar2 + 8);
    local_310 = *(undefined8 *)(puVar2 + 0x10);
    local_308 = *(long **)(puVar2 + 0x18);
    plVar10 = local_308;
    if (local_308 != (long *)0x0) {
      (**(code **)(*local_308 + 0x18))();
      plVar10 = local_308;
    }
    local_300 = 1;
    local_d8 = 0;
    local_320 = 0x1be915f7a564736f;
    pcStack_318 = "SceneController/Enable";
    local_e0 = 0;
    local_e8 = (code *)0x0;
    local_f0 = 0;
    local_2f0 = (undefined1 *)0x0;
    local_2e8 = (code *)0x0;
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_170 = 0;
    local_168 = (code *)0x0;
    local_160 = 0;
    uStack_158 = 0;
    local_310 = 0x16;
    local_308 = (long *)0x0;
    if (plVar10 == (long *)0x0) {
      local_308 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar10 + 0x20))();
      pcVar5 = local_2e8;
      local_308 = (long *)0x0;
      if (local_2e8 != (code *)0x0) {
        local_2e0 = (undefined1 *)0x0;
        local_2d8 = (undefined1 *)0x0;
        local_2f0 = (undefined1 *)0x0;
        local_2e8 = (code *)0x0;
        (*pcVar5)(local_2d0);
      }
    }
    pcVar5 = local_1e8;
    local_2f0 = &LAB_02126f74;
    local_2e8 = FUN_02b21c70;
    local_2e0 = &LAB_02b21c78;
    local_2d8 = &LAB_02b21c7c;
    if (local_1e8 != (code *)0x0) {
      local_1e0 = (undefined1 *)0x0;
      local_1d8 = (undefined1 *)0x0;
      local_1f0 = (undefined1 *)0x0;
      local_1e8 = (code *)0x0;
      (*pcVar5)(local_1d0);
    }
    local_1f0 = &LAB_021278b0;
    local_1e8 = FUN_02b21c80;
    local_1e0 = &LAB_02b21c84;
    local_1d8 = &LAB_02b21c88;
    lVar1 = *plVar9;
    lVar11 = (long)plVar8 - lVar1 >> 4;
    if ((ulong)((plVar9[1] - lVar1 >> 4) * -0x7d05f417d05f417d) <=
        (ulong)(lVar11 * -0x7d05f417d05f417d)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    FUN_0162f6c4(lVar1 + lVar11 * 0x10,&local_320);
    pcVar5 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      local_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar5)(auStack_d0);
    }
    pcVar5 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = 0;
      uStack_158 = 0;
      local_170 = 0;
      local_168 = (code *)0x0;
      (*pcVar5)(auStack_150);
    }
    pcVar5 = local_1e8;
    if (local_1e8 != (code *)0x0) {
      local_1e0 = (undefined1 *)0x0;
      local_1d8 = (undefined1 *)0x0;
      local_1f0 = (undefined1 *)0x0;
      local_1e8 = (code *)0x0;
      (*pcVar5)(local_1d0);
    }
    pcVar5 = local_268;
    if (local_268 != (code *)0x0) {
      local_260 = (undefined1 *)0x0;
      local_258 = (undefined1 *)0x0;
      local_270 = (undefined1 *)0x0;
      local_268 = (code *)0x0;
      (*pcVar5)(local_250);
    }
    pcVar5 = local_2e8;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (undefined1 *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar5)(local_2d0);
    }
    if (local_308 != (long *)0x0) {
      (**(code **)(*local_308 + 0x20))();
    }
  }
  return;
}


