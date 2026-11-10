/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0161fc78; name: FUN_0161fc78
 */


void FUN_0161fc78(void)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_300;
  char *pcStack_2f8;
  undefined8 local_2f0;
  long *local_2e8;
  undefined1 local_2e0;
  undefined1 *local_2d0;
  code *local_2c8;
  undefined1 *local_2c0;
  undefined1 *puStack_2b8;
  undefined1 *local_2b0;
  undefined1 *puStack_2a8;
  undefined1 *local_250;
  code *local_248;
  undefined1 *local_240;
  undefined1 *puStack_238;
  undefined1 *local_230;
  undefined1 *puStack_228;
  undefined1 *local_1d0;
  code *local_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined8 local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [96];
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [104];
  undefined1 auStack_48 [8];
  undefined1 auStack_28 [8];
  
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  *(undefined8 *)PTR_DAT_047d8928 = *(undefined8 *)PTR_DAT_047d8920;
  plVar5 = (long *)FUN_0162f2c8();
  plVar7 = (long *)*plVar5;
  plVar2 = (long *)plVar5[1];
  if ((plVar7 != plVar2) && (*plVar7 != -0x57dda89964f11ca9)) {
    do {
      plVar7 = plVar7 + 0x56;
      if (plVar2 == plVar7) {
        plVar7 = plVar2;
        goto LAB_0161fce8;
      }
    } while (*plVar7 != -0x57dda89964f11ca9);
  }
LAB_0161fce8:
  if (plVar2 != plVar7) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_300 = *(undefined8 *)PTR_DAT_047d3e30;
    pcStack_2f8 = *(char **)(PTR_DAT_047d3e30 + 8);
    local_2f0 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
    plVar2 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar2 != (long *)0x0) {
      local_2e8 = plVar2;
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    local_2e0 = 1;
    local_300 = 0xa82257669b0ee357;
    pcStack_2f8 = "GameObject/SetScale";
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = (code *)0x0;
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
    local_2f0 = 0x13;
    local_2e8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2);
    }
    local_2e8 = (long *)0x0;
    local_2d0 = &LAB_02133e74;
    local_2c8 = FUN_02b24c30;
    local_2c0 = &LAB_02b24c34;
    puStack_2b8 = &LAB_02b24c40;
    local_250 = &LAB_02135168;
    local_248 = FUN_02b24c4c;
    local_2b0 = auStack_28;
    puStack_2a8 = auStack_48;
    local_240 = &LAB_02b24c50;
    puStack_238 = &LAB_02b24c5c;
    local_1d0 = &LAB_02135664;
    local_1c8 = FUN_02b24c68;
    local_1c0 = &LAB_02b24c6c;
    puStack_1b8 = &LAB_02b24c78;
    lVar1 = *plVar5;
    lVar6 = (long)plVar7 - lVar1 >> 4;
    local_230 = local_2b0;
    puStack_228 = puStack_2a8;
    local_1b0 = local_2b0;
    puStack_1a8 = puStack_2a8;
    if ((ulong)((plVar5[1] - lVar1 >> 4) * -0x7d05f417d05f417d) <=
        (ulong)(lVar6 * -0x7d05f417d05f417d)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    FUN_0162f6c4(lVar1 + lVar6 * 0x10,&local_300);
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
      (*pcVar3)(&local_1b0);
    }
    pcVar3 = local_248;
    if (local_248 != (code *)0x0) {
      local_240 = (undefined1 *)0x0;
      puStack_238 = (undefined1 *)0x0;
      local_250 = (undefined1 *)0x0;
      local_248 = (code *)0x0;
      (*pcVar3)(&local_230);
    }
    pcVar3 = local_2c8;
    if (local_2c8 != (code *)0x0) {
      local_2c0 = (undefined1 *)0x0;
      puStack_2b8 = (undefined1 *)0x0;
      local_2d0 = (undefined1 *)0x0;
      local_2c8 = (code *)0x0;
      (*pcVar3)(&local_2b0);
    }
    if (local_2e8 != (long *)0x0) {
      (**(code **)(*local_2e8 + 0x20))();
    }
  }
  return;
}


