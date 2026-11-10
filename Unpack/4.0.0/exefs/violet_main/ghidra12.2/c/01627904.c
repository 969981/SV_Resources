/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01627904; name: FUN_01627904
 */


void FUN_01627904(void)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  code *pcVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined1 auStack_328 [8];
  undefined8 local_320;
  char *pcStack_318;
  undefined8 local_310;
  long *local_308;
  undefined1 local_300;
  code *local_2f0;
  code *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  undefined1 *apuStack_2d0 [12];
  code *local_270;
  code *local_268;
  undefined1 *local_260;
  undefined1 *local_258;
  undefined1 *local_250 [12];
  code *local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *local_1d0 [12];
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [112];
  
  puVar5 = PTR_DAT_047d8918;
  if (((*PTR_DAT_047d8918 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  puVar16 = (undefined8 *)PTR_DAT_047d8928;
  puVar6 = PTR_DAT_047d8920;
  *(undefined8 *)PTR_DAT_047d8928 = *(undefined8 *)PTR_DAT_047d8920;
  plVar8 = (long *)FUN_0162f2c8();
  puVar4 = PTR_DAT_047d3e30;
  puVar3 = PTR_DAT_047d3e28;
  plVar10 = (long *)*plVar8;
  plVar13 = (long *)plVar8[1];
  plVar11 = plVar10;
  if ((plVar10 != plVar13) && (*plVar10 != -0x1c660cdd3fb39a52)) {
    plVar15 = plVar10;
    do {
      if (plVar13 + -0x56 == plVar15) {
        plVar11 = plVar13;
        break;
      }
      plVar11 = plVar15 + 0x56;
      plVar1 = plVar15 + 0x56;
      plVar15 = plVar11;
    } while (*plVar1 != -0x1c660cdd3fb39a52);
  }
  if (plVar13 != plVar11) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_320 = *(undefined8 *)puVar4;
    pcStack_318 = *(char **)(puVar4 + 8);
    local_310 = *(undefined8 *)(puVar4 + 0x10);
    plVar10 = *(long **)(puVar4 + 0x18);
    if (plVar10 != (long *)0x0) {
      local_308 = plVar10;
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
    local_300 = 1;
    local_320 = 0xe399f322c04c65ae;
    pcStack_318 = "GameObject/SetTranslation";
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = (code *)0x0;
    local_f0 = 0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_310 = 0x19;
    local_308 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    local_308 = (long *)0x0;
    local_2f0 = FUN_0133f79c;
    local_2e8 = FUN_02b203a4;
    local_2e0 = &LAB_02b203ac;
    local_2d8 = &LAB_02b203b0;
    local_270 = (code *)&LAB_021196c4;
    local_268 = FUN_02b203b4;
    local_260 = &LAB_02b203b8;
    local_258 = &LAB_02b203bc;
    local_1f0 = (code *)&LAB_0211a33c;
    local_1e8 = FUN_02b203c0;
    local_1e0 = &LAB_02b203c4;
    puStack_1d8 = &LAB_02b203c8;
    lVar2 = *plVar8;
    lVar14 = (long)plVar11 - lVar2 >> 4;
    if ((ulong)((plVar8[1] - lVar2 >> 4) * -0x7d05f417d05f417d) <=
        (ulong)(lVar14 * -0x7d05f417d05f417d)) goto LAB_0162f264;
    FUN_0162f6c4(lVar2 + lVar14 * 0x10,&local_320);
    pcVar12 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      local_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar12)(auStack_d0);
    }
    pcVar12 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = (undefined1 *)0x0;
      puStack_158 = (undefined1 *)0x0;
      local_170 = (undefined1 *)0x0;
      local_168 = (code *)0x0;
      (*pcVar12)(auStack_150);
    }
    pcVar12 = local_1e8;
    if (local_1e8 != (code *)0x0) {
      local_1e0 = (undefined1 *)0x0;
      puStack_1d8 = (undefined1 *)0x0;
      local_1f0 = (code *)0x0;
      local_1e8 = (code *)0x0;
      (*pcVar12)(local_1d0);
    }
    pcVar12 = local_268;
    if (local_268 != (code *)0x0) {
      local_260 = (undefined1 *)0x0;
      local_258 = (undefined1 *)0x0;
      local_270 = (code *)0x0;
      local_268 = (code *)0x0;
      (*pcVar12)(local_250);
    }
    pcVar12 = local_2e8;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
    if (local_308 != (long *)0x0) {
      (**(code **)(*local_308 + 0x20))();
    }
    plVar10 = (long *)*plVar8;
    plVar13 = (long *)plVar8[1];
  }
  plVar11 = plVar10;
  if ((plVar10 != plVar13) && (*plVar10 != 0xb8e00dce029def7)) {
    plVar15 = plVar10;
    do {
      if (plVar13 + -0x56 == plVar15) {
        plVar11 = plVar13;
        break;
      }
      plVar11 = plVar15 + 0x56;
      plVar1 = plVar15 + 0x56;
      plVar15 = plVar11;
    } while (*plVar1 != 0xb8e00dce029def7);
  }
  if (plVar13 != plVar11) {
    if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_320 = *(undefined8 *)puVar4;
    pcStack_318 = *(char **)(puVar4 + 8);
    local_310 = *(undefined8 *)(puVar4 + 0x10);
    local_308 = *(long **)(puVar4 + 0x18);
    plVar10 = local_308;
    if (local_308 != (long *)0x0) {
      (**(code **)(*local_308 + 0x18))();
      plVar10 = local_308;
    }
    local_300 = 1;
    local_d8 = 0;
    local_e0 = 0;
    local_320 = 0xb8e00dce029def7;
    pcStack_318 = "Camera/SetTrackingCameraWithNode";
    local_e8 = (code *)0x0;
    local_f0 = 0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_310 = 0x20;
    local_308 = (long *)0x0;
    pcVar12 = (code *)0x0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
      pcVar12 = local_2e8;
    }
    local_308 = (long *)0x0;
    if (pcVar12 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
    pcVar12 = local_268;
    local_2f0 = (code *)&LAB_01a7f94c;
    local_2e8 = FUN_02b203cc;
    local_2e0 = &LAB_02b203d0;
    local_2d8 = &LAB_02b203dc;
    apuStack_2d0[0] = auStack_328;
    if (local_268 != (code *)0x0) {
      local_260 = (undefined1 *)0x0;
      local_258 = (undefined1 *)0x0;
      local_270 = (code *)0x0;
      local_268 = (code *)0x0;
      (*pcVar12)(local_250);
    }
    pcVar12 = local_1e8;
    local_270 = (code *)&LAB_02b203e8;
    local_268 = FUN_02b204d8;
    local_260 = &LAB_02b204dc;
    local_258 = &LAB_02b204e8;
    local_250[0] = auStack_328;
    if (local_1e8 != (code *)0x0) {
      local_1e0 = (undefined1 *)0x0;
      puStack_1d8 = (undefined1 *)0x0;
      local_1f0 = (code *)0x0;
      local_1e8 = (code *)0x0;
      (*pcVar12)(local_1d0);
    }
    local_1d0[0] = auStack_328;
    local_1f0 = (code *)&LAB_02b204f4;
    local_1e8 = FUN_02b205d8;
    local_1e0 = &LAB_02b205dc;
    puStack_1d8 = &LAB_02b205e8;
    lVar2 = *plVar8;
    lVar14 = (long)plVar11 - lVar2 >> 4;
    if ((ulong)((plVar8[1] - lVar2 >> 4) * -0x7d05f417d05f417d) <=
        (ulong)(lVar14 * -0x7d05f417d05f417d)) goto LAB_0162f270;
    FUN_0162f6c4(lVar2 + lVar14 * 0x10,&local_320);
    pcVar12 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      local_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar12)(auStack_d0);
    }
    pcVar12 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = (undefined1 *)0x0;
      puStack_158 = (undefined1 *)0x0;
      local_170 = (undefined1 *)0x0;
      local_168 = (code *)0x0;
      (*pcVar12)(auStack_150);
    }
    pcVar12 = local_1e8;
    if (local_1e8 != (code *)0x0) {
      local_1e0 = (undefined1 *)0x0;
      puStack_1d8 = (undefined1 *)0x0;
      local_1f0 = (code *)0x0;
      local_1e8 = (code *)0x0;
      (*pcVar12)(local_1d0);
    }
    pcVar12 = local_268;
    if (local_268 != (code *)0x0) {
      local_260 = (undefined1 *)0x0;
      local_258 = (undefined1 *)0x0;
      local_270 = (code *)0x0;
      local_268 = (code *)0x0;
      (*pcVar12)(local_250);
    }
    pcVar12 = local_2e8;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
    if (local_308 != (long *)0x0) {
      (**(code **)(*local_308 + 0x20))();
    }
    plVar10 = (long *)*plVar8;
    plVar13 = (long *)plVar8[1];
    puVar16 = (undefined8 *)PTR_DAT_047d8928;
  }
  plVar11 = plVar10;
  if ((plVar10 != plVar13) && (*plVar10 != -0x254109c169cb73cb)) {
    plVar15 = plVar10;
    do {
      if (plVar13 + -0x56 == plVar15) {
        plVar11 = plVar13;
        break;
      }
      plVar11 = plVar15 + 0x56;
      plVar1 = plVar15 + 0x56;
      plVar15 = plVar11;
    } while (*plVar1 != -0x254109c169cb73cb);
  }
  if (plVar13 != plVar11) {
    if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_320 = *(undefined8 *)puVar4;
    pcStack_318 = *(char **)(puVar4 + 8);
    local_310 = *(undefined8 *)(puVar4 + 0x10);
    local_308 = *(long **)(puVar4 + 0x18);
    plVar10 = local_308;
    if (local_308 != (long *)0x0) {
      (**(code **)(*local_308 + 0x18))();
      plVar10 = local_308;
    }
    local_300 = 1;
    local_d8 = 0;
    local_320 = 0xdabef63e96348c35;
    pcStack_318 = "Model/SetVisibility";
    local_e0 = 0;
    local_e8 = (code *)0x0;
    local_f0 = 0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_310 = 0x13;
    local_308 = (long *)0x0;
    if (plVar10 == (long *)0x0) {
      local_308 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar10 + 0x20))();
      pcVar12 = local_2e8;
      local_308 = (long *)0x0;
      if (local_2e8 != (code *)0x0) {
        local_2e0 = (undefined1 *)0x0;
        local_2d8 = (undefined1 *)0x0;
        local_2f0 = (code *)0x0;
        local_2e8 = (code *)0x0;
        (*pcVar12)(apuStack_2d0);
      }
    }
    local_2f0 = (code *)&LAB_0211aeb0;
    local_2e8 = FUN_02b205f4;
    local_2e0 = &LAB_02b205f8;
    local_2d8 = &LAB_02b205fc;
    lVar2 = *plVar8;
    lVar14 = (long)plVar11 - lVar2 >> 4;
    if ((ulong)((plVar8[1] - lVar2 >> 4) * -0x7d05f417d05f417d) <=
        (ulong)(lVar14 * -0x7d05f417d05f417d)) goto LAB_0162f264;
    FUN_0162f6c4(lVar2 + lVar14 * 0x10,&local_320);
    pcVar12 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      local_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar12)(auStack_d0);
    }
    pcVar12 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = (undefined1 *)0x0;
      puStack_158 = (undefined1 *)0x0;
      local_170 = (undefined1 *)0x0;
      local_168 = (code *)0x0;
      (*pcVar12)(auStack_150);
    }
    pcVar12 = local_1e8;
    if (local_1e8 != (code *)0x0) {
      local_1e0 = (undefined1 *)0x0;
      puStack_1d8 = (undefined1 *)0x0;
      local_1f0 = (code *)0x0;
      local_1e8 = (code *)0x0;
      (*pcVar12)(local_1d0);
    }
    pcVar12 = local_268;
    if (local_268 != (code *)0x0) {
      local_260 = (undefined1 *)0x0;
      local_258 = (undefined1 *)0x0;
      local_270 = (code *)0x0;
      local_268 = (code *)0x0;
      (*pcVar12)(local_250);
    }
    pcVar12 = local_2e8;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
    if (local_308 != (long *)0x0) {
      (**(code **)(*local_308 + 0x20))();
    }
    plVar10 = (long *)*plVar8;
    plVar13 = (long *)plVar8[1];
  }
  if ((plVar10 != plVar13) && (*plVar10 != -0x90b57371d8d2f6b)) {
    do {
      if (plVar13 + -0x56 == plVar10) {
        plVar10 = plVar13;
        goto LAB_01627f98;
      }
      plVar11 = plVar10 + 0x56;
      plVar10 = plVar10 + 0x56;
    } while (*plVar11 != -0x90b57371d8d2f6b);
  }
LAB_01627f98:
  if (plVar13 != plVar10) {
    if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_320 = *(undefined8 *)puVar4;
    pcStack_318 = *(char **)(puVar4 + 8);
    local_310 = *(undefined8 *)(puVar4 + 0x10);
    local_308 = *(long **)(puVar4 + 0x18);
    plVar11 = local_308;
    if (local_308 != (long *)0x0) {
      (**(code **)(*local_308 + 0x18))();
      plVar11 = local_308;
    }
    local_300 = 1;
    local_d8 = 0;
    local_320 = 0xf6f4a8c8e272d095;
    pcStack_318 = "Animation/ChangeCharaCreateAnimation";
    local_e0 = 0;
    local_e8 = (code *)0x0;
    local_f0 = 0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_310 = 0x24;
    local_308 = (long *)0x0;
    if (plVar11 == (long *)0x0) {
      local_308 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar11 + 0x20))();
      pcVar12 = local_2e8;
      local_308 = (long *)0x0;
      if (local_2e8 != (code *)0x0) {
        local_2e0 = (undefined1 *)0x0;
        local_2d8 = (undefined1 *)0x0;
        local_2f0 = (code *)0x0;
        local_2e8 = (code *)0x0;
        (*pcVar12)(apuStack_2d0);
      }
    }
    pcVar12 = local_1e8;
    local_2f0 = (code *)&LAB_0211b448;
    local_2e8 = FUN_02b20600;
    local_2e0 = &LAB_02b20604;
    local_2d8 = &LAB_02b20608;
    if (local_1e8 != (code *)0x0) {
      local_1e0 = (undefined1 *)0x0;
      puStack_1d8 = (undefined1 *)0x0;
      local_1f0 = (code *)0x0;
      local_1e8 = (code *)0x0;
      (*pcVar12)(local_1d0);
    }
    local_1f0 = (code *)&LAB_0211be54;
    local_1e8 = FUN_02b2060c;
    local_1e0 = &LAB_02b20610;
    puStack_1d8 = &LAB_02b20614;
    lVar2 = *plVar8;
    lVar14 = (long)plVar10 - lVar2 >> 4;
    if ((ulong)((plVar8[1] - lVar2 >> 4) * -0x7d05f417d05f417d) <=
        (ulong)(lVar14 * -0x7d05f417d05f417d)) {
LAB_0162f264:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    FUN_0162f6c4(lVar2 + lVar14 * 0x10,&local_320);
    pcVar12 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      local_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar12)(auStack_d0);
    }
    pcVar12 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = (undefined1 *)0x0;
      puStack_158 = (undefined1 *)0x0;
      local_170 = (undefined1 *)0x0;
      local_168 = (code *)0x0;
      (*pcVar12)(auStack_150);
    }
    pcVar12 = local_1e8;
    if (local_1e8 != (code *)0x0) {
      local_1e0 = (undefined1 *)0x0;
      puStack_1d8 = (undefined1 *)0x0;
      local_1f0 = (code *)0x0;
      local_1e8 = (code *)0x0;
      (*pcVar12)(local_1d0);
    }
    pcVar12 = local_268;
    if (local_268 != (code *)0x0) {
      local_260 = (undefined1 *)0x0;
      local_258 = (undefined1 *)0x0;
      local_270 = (code *)0x0;
      local_268 = (code *)0x0;
      (*pcVar12)(local_250);
    }
    pcVar12 = local_2e8;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
    if (local_308 != (long *)0x0) {
      (**(code **)(*local_308 + 0x20))();
    }
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0xa1d2759e2b1b0206;
  pcStack_318 = "Model/SetAllOtherVisibility";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x1b;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  pcVar12 = local_1e8;
  local_2f0 = FUN_017570c0;
  local_2e8 = FUN_02b20618;
  local_2e0 = &LAB_02b2061c;
  local_2d8 = &LAB_02b20620;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  local_1f0 = (code *)&LAB_02b20624;
  local_1e8 = FUN_02b206a0;
  local_1e0 = &LAB_02b206a4;
  puStack_1d8 = &LAB_02b206a8;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x58d86912bb06ec1f;
  pcStack_318 = "Title/Battle/AttackMotion";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x19;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  pcVar12 = local_268;
  local_2f0 = (code *)&LAB_018fa66c;
  local_2e8 = FUN_02b206ac;
  local_2e0 = &LAB_02b206b0;
  local_2d8 = &LAB_02b206b4;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  local_270 = (code *)&LAB_01429f50;
  local_268 = FUN_02b206b8;
  local_260 = &LAB_02b206bc;
  local_258 = &LAB_02b206c0;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x1458ae3786270322;
  pcStack_318 = "Title/Battle/CompositionCamera";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x1e;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_01901064;
  local_2e8 = FUN_02b206c4;
  local_2e0 = &LAB_02b206c8;
  local_2d8 = &LAB_02b206cc;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0xa0d3b0bb9b41dd65;
  pcStack_318 = "Title/Battle/CompositionCameraOffset";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x24;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_0197d9f8;
  local_2e8 = FUN_02b206d0;
  local_2e0 = &LAB_02b206d4;
  local_2d8 = &LAB_02b206d8;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x6081c6c756d2c5e3;
  pcStack_318 = "Title/Battle/CompositionCameraTarget";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x24;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_019639b0;
  local_2e8 = FUN_02b206dc;
  local_2e0 = &LAB_02b206e0;
  local_2d8 = &LAB_02b206e4;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0xb2ca4347cc78d714;
  pcStack_318 = "Title/Battle/CompositionCameraAABB";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x22;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_0211c30c;
  local_2e8 = FUN_02b206e8;
  local_2e0 = &LAB_02b206ec;
  local_2d8 = &LAB_02b206f0;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x13fe11325dfd5033;
  pcStack_318 = "Title/Battle/ResetPosition";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x1a;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  pcVar12 = local_268;
  local_2f0 = (code *)&LAB_018999b0;
  local_2e8 = FUN_02b206f4;
  local_2e0 = &LAB_02b206f8;
  local_2d8 = &LAB_02b206fc;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  local_270 = (code *)&LAB_0211d5a4;
  local_268 = FUN_02b20700;
  local_260 = &LAB_02b20704;
  local_258 = &LAB_02b20708;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x7e3ab42c3ab10766;
  pcStack_318 = "Title/Battle/ResetTrainerState";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x1e;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  pcVar12 = local_268;
  local_2f0 = (code *)&LAB_019daf54;
  local_2e8 = FUN_02b2070c;
  local_2e0 = &LAB_02b20710;
  local_2d8 = &LAB_02b20714;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  local_270 = (code *)&LAB_0211d684;
  local_268 = FUN_02b20718;
  local_260 = &LAB_02b2071c;
  local_258 = &LAB_02b20720;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0xdc58f7ee86d4347a;
  pcStack_318 = "Title/Battle/ResetTrainerPosition";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x21;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  pcVar12 = local_268;
  local_2f0 = (code *)&LAB_017cfd3c;
  local_2e8 = FUN_02b20724;
  local_2e0 = &LAB_02b20728;
  local_2d8 = &LAB_02b2072c;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  local_270 = FUN_0211d828;
  local_268 = FUN_02b20730;
  local_260 = &LAB_02b20734;
  local_258 = &LAB_02b20738;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0xacb7d35641da37f9;
  pcStack_318 = "Title/Battle/ResetBattleCamera";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x1e;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_017fa430;
  local_2e8 = FUN_02b2073c;
  local_2e0 = &LAB_02b20740;
  local_2d8 = &LAB_02b20744;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x11cbfaa6585dc180;
  pcStack_318 = "Title/Battle/CameraPositionCopy";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x1f;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_01a64df4;
  local_2e8 = FUN_02b20748;
  local_2e0 = &LAB_02b2074c;
  local_2d8 = &LAB_02b20750;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x38d2506240716504;
  pcStack_318 = "Title/Battle/ChangeGem";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x16;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_019a4434;
  local_2e8 = FUN_02b20754;
  local_2e0 = &LAB_02b20758;
  local_2d8 = &LAB_02b2075c;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x6acf9bbd54d45625;
  pcStack_318 = "Title/Battle/SetGemObjectVisible";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x20;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_01a44b8c;
  local_2e8 = FUN_02b20760;
  local_2e0 = &LAB_02b20764;
  local_2d8 = &LAB_02b20768;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x114a2109b7f6f96e;
  pcStack_318 = "Title/Battle/GemVisible";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x17;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = FUN_01958e58;
  local_2e8 = FUN_02b2076c;
  local_2e0 = &LAB_02b20770;
  local_2d8 = &LAB_02b20774;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0xf83b4efb7267b2cf;
  pcStack_318 = "Title/Battle/GemLightEnable";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x1b;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_01915148;
  local_2e8 = FUN_02b20778;
  local_2e0 = &LAB_02b2077c;
  local_2d8 = &LAB_02b20780;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0xed8be2297c7bb3c5;
  pcStack_318 = "Title/Battle/LandSmoke";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x16;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = FUN_01800318;
  local_2e8 = FUN_02b20784;
  local_2e0 = &LAB_02b20788;
  local_2d8 = &LAB_02b2078c;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x76a42e7cdfbe2ad8;
  pcStack_318 = "Title/Battle/MessageDisp";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x18;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  pcVar12 = local_168;
  local_2f0 = (code *)&LAB_0192fffc;
  local_2e8 = FUN_02b20790;
  local_2e0 = &LAB_02b20794;
  local_2d8 = &LAB_02b20798;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  local_170 = &LAB_01618578;
  local_168 = FUN_02b2079c;
  local_160 = &LAB_02b207a0;
  puStack_158 = &LAB_02b207a4;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x75c78bdd3afd0314;
  pcStack_318 = "Title/Battle/MessageHide";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x18;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_017c0284;
  local_2e8 = FUN_02b207a8;
  local_2e0 = &LAB_02b207ac;
  local_2d8 = &LAB_02b207b0;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0xf0f4ddbef310c30e;
  pcStack_318 = "Title/Battle/WazaSyncMessageDisp";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x20;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_0211d908;
  local_2e8 = FUN_02b207b4;
  local_2e0 = &LAB_02b207b8;
  local_2d8 = &LAB_02b207bc;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x2e0207afafda6252;
  pcStack_318 = "Title/Battle/LastBattle2MessageDisp";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x23;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  pcVar12 = local_168;
  local_2f0 = (code *)&LAB_01a861c8;
  local_2e8 = FUN_02b207c0;
  local_2e0 = &LAB_02b207c4;
  local_2d8 = &LAB_02b207c8;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  local_170 = &LAB_015bef54;
  local_168 = FUN_02b207cc;
  local_160 = &LAB_02b207d0;
  puStack_158 = &LAB_02b207d4;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x998fa8b0dd5a7b2c;
  pcStack_318 = "Title/Battle/AdjustScale";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x18;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_01877004;
  local_2e8 = FUN_02b207d8;
  local_2e0 = &LAB_02b207dc;
  local_2d8 = &LAB_02b207e0;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0xe2bc76266f266015;
  pcStack_318 = "Title/Battle/AdjustScaleTarget";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x1e;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_01548824;
  local_2e8 = FUN_02b207e4;
  local_2e0 = &LAB_02b207e8;
  local_2d8 = &LAB_02b207ec;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x5da1189739eb39c;
  pcStack_318 = "Title/Battle/GaugeDisp";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x16;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = FUN_016b8778;
  local_2e8 = FUN_02b207f0;
  local_2e0 = &LAB_02b207f4;
  local_2d8 = &LAB_02b207f8;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x2589d98b730304a7;
  pcStack_318 = "Title/Battle/GaugeDispAll";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x19;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = FUN_015c0088;
  local_2e8 = FUN_02b207fc;
  local_2e0 = &LAB_02b20800;
  local_2d8 = &LAB_02b20804;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0xeaecd5b871dbe771;
  pcStack_318 = "Title/Battle/GaugeDamage";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x18;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_017ceb24;
  local_2e8 = FUN_02b20808;
  local_2e0 = &LAB_02b2080c;
  local_2d8 = &LAB_02b20810;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x3d0d8d75b838fefc;
  pcStack_318 = "Title/Battle/CameraControlEnable";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x20;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = FUN_01796388;
  local_2e8 = FUN_02b20814;
  local_2e0 = &LAB_02b20818;
  local_2d8 = &LAB_02b2081c;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0xce8589a3d422df6f;
  pcStack_318 = "Title/Battle/SetPropagateState";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x1e;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_0211d9f4;
  local_2e8 = FUN_02b20820;
  local_2e0 = &LAB_02b20824;
  local_2d8 = &LAB_02b20828;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x671348732c1c850a;
  pcStack_318 = "Title/Battle/ResidentEffectVisible";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x22;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_01973144;
  local_2e8 = FUN_02b2082c;
  local_2e0 = &LAB_02b20830;
  local_2d8 = &LAB_02b20834;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x39e38c29bb3773c1;
  pcStack_318 = "Title/Battle/SetCenterPosition";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x1e;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  pcVar12 = local_268;
  local_2f0 = (code *)&LAB_019fb97c;
  local_2e8 = FUN_02b20838;
  local_2e0 = &LAB_02b2083c;
  local_2d8 = &LAB_02b20840;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_1e8;
  local_270 = (code *)&LAB_0211dcd8;
  local_268 = FUN_02b20844;
  local_260 = &LAB_02b20848;
  local_258 = &LAB_02b2084c;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  local_1f0 = FUN_019c6b14;
  local_1e8 = FUN_02b20850;
  local_1e0 = &LAB_02b20854;
  puStack_1d8 = &LAB_02b20858;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0xb2f0058cb0634a91;
  pcStack_318 = "Title/Battle/CameraRoll";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x17;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  pcVar12 = local_268;
  local_2f0 = (code *)&LAB_019113e0;
  local_2e8 = FUN_02b2085c;
  local_2e0 = &LAB_02b20864;
  local_2d8 = &LAB_02b20868;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_1e8;
  local_270 = (code *)&LAB_0184b3d8;
  local_268 = FUN_02b2086c;
  local_260 = &LAB_02b20870;
  local_258 = &LAB_02b20874;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  local_1f0 = FUN_0184aabc;
  local_1e8 = FUN_02b20878;
  local_1e0 = &LAB_02b2087c;
  puStack_1d8 = &LAB_02b20880;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x23a4bc4fd27a3d5b;
  pcStack_318 = "Title/Battle/GemSRT";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x13;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  pcVar12 = local_268;
  local_2f0 = (code *)&LAB_019cff1c;
  local_2e8 = FUN_02b20884;
  local_2e0 = &LAB_02b20888;
  local_2d8 = &LAB_02b2088c;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_1e8;
  local_270 = (code *)&LAB_0141f608;
  local_268 = FUN_02b20890;
  local_260 = &LAB_02b20894;
  local_258 = &LAB_02b20898;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  local_1f0 = (code *)&LAB_019dc7a0;
  local_1e8 = FUN_02b2089c;
  local_1e0 = &LAB_02b208a0;
  puStack_1d8 = &LAB_02b208a4;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x1611d3ad270e800e;
  pcStack_318 = "Title/Battle/StopSickAnim";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x19;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  pcVar12 = local_1e8;
  local_2f0 = (code *)&LAB_017a9a10;
  local_2e8 = FUN_02b208a8;
  local_2e0 = &LAB_02b208ac;
  local_2d8 = &LAB_02b208b0;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  local_1f0 = (code *)&LAB_0179ebf8;
  local_1e8 = FUN_02b208b4;
  local_1e0 = &LAB_02b208b8;
  puStack_1d8 = &LAB_02b208bc;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x8e43bfcb98716e78;
  pcStack_318 = "Title/Battle/EnableTrainerCustomDither";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x26;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_018a06e8;
  local_2e8 = FUN_02b208c0;
  local_2e0 = &LAB_02b208c4;
  local_2d8 = &LAB_02b208c8;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x1d2a645d5dcc6507;
  pcStack_318 = "Title/Battle/SetTrainerCustomDither";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x23;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_018d4244;
  local_2e8 = FUN_02b208cc;
  local_2e0 = &LAB_02b208d0;
  local_2d8 = &LAB_02b208d4;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x312363fdb56fdc0;
  pcStack_318 = "Title/Battle/EnablePokemonCustomDither";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x26;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_019fa514;
  local_2e8 = FUN_02b208d8;
  local_2e0 = &LAB_02b208dc;
  local_2d8 = &LAB_02b208e0;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x9716a1a0fa80e9c7;
  pcStack_318 = "Title/Battle/SetPokemonCustomDither";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x23;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = FUN_01a2dc70;
  local_2e8 = FUN_02b208e4;
  local_2e0 = &LAB_02b208e8;
  local_2d8 = &LAB_02b208ec;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0xec2597517d479930;
  pcStack_318 = "Title/Battle/ShadowFadeDistance";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x1f;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = FUN_0195529c;
  local_2e8 = FUN_02b208f0;
  local_2e0 = &LAB_02b208f4;
  local_2d8 = &LAB_02b208f8;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0xf81e2a20a89510ea;
  pcStack_318 = "Title/Battle/IgnoreEnableFaceOverwrite";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x26;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  pcVar12 = local_1e8;
  local_2f0 = (code *)&LAB_019cf410;
  local_2e8 = FUN_02b208fc;
  local_2e0 = &LAB_02b20900;
  local_2d8 = &LAB_02b20904;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  local_1f0 = (code *)&LAB_019ce21c;
  local_1e8 = FUN_02b20908;
  local_1e0 = &LAB_02b2090c;
  puStack_1d8 = &LAB_02b20910;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x7af3c816e1995e85;
  pcStack_318 = "Title/Battle/FloatDisp";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x16;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_0211ebf4;
  local_2e8 = FUN_02b20914;
  local_2e0 = &LAB_02b20918;
  local_2d8 = &LAB_02b2091c;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x3646f37016e916d3;
  pcStack_318 = "Title/Battle/FormChange";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x17;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  pcVar12 = local_168;
  local_2f0 = (code *)&LAB_01a4467c;
  local_2e8 = FUN_02b20920;
  local_2e0 = &LAB_02b20924;
  local_2d8 = &LAB_02b20928;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  local_170 = &LAB_017a1bf8;
  local_168 = FUN_02b2092c;
  local_160 = &LAB_02b20930;
  puStack_158 = &LAB_02b20934;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x84a45236a7ba3db8;
  pcStack_318 = "GameObject/SetAdsorption";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x18;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_0211ee10;
  local_2e8 = FUN_02b20938;
  local_2e0 = &LAB_02b20958;
  local_2d8 = &LAB_02b2095c;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  plVar11 = (long *)*plVar8;
  plVar10 = (long *)plVar8[1];
  if ((plVar11 != plVar10) && (*plVar11 != 0x3697b3cbb67bffd9)) {
    do {
      plVar11 = plVar11 + 0x56;
      if (plVar10 == plVar11) {
        plVar11 = plVar10;
        goto LAB_0162b6fc;
      }
    } while (*plVar11 != 0x3697b3cbb67bffd9);
  }
LAB_0162b6fc:
  if (plVar10 != plVar11) {
    if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_320 = *(undefined8 *)puVar4;
    pcStack_318 = *(char **)(puVar4 + 8);
    local_310 = *(undefined8 *)(puVar4 + 0x10);
    local_308 = *(long **)(puVar4 + 0x18);
    plVar10 = local_308;
    if (local_308 != (long *)0x0) {
      (**(code **)(*local_308 + 0x18))();
      plVar10 = local_308;
    }
    local_300 = 1;
    local_d8 = 0;
    local_320 = 0x3697b3cbb67bffd9;
    pcStack_318 = "GameObject/SetRotation";
    local_e0 = 0;
    local_e8 = (code *)0x0;
    local_f0 = 0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_310 = 0x16;
    local_308 = (long *)0x0;
    if (plVar10 == (long *)0x0) {
      local_308 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar10 + 0x20))();
      pcVar12 = local_2e8;
      local_308 = (long *)0x0;
      if (local_2e8 != (code *)0x0) {
        local_2e0 = (undefined1 *)0x0;
        local_2d8 = (undefined1 *)0x0;
        local_2f0 = (code *)0x0;
        local_2e8 = (code *)0x0;
        (*pcVar12)(apuStack_2d0);
      }
    }
    pcVar12 = local_268;
    local_2f0 = (code *)&LAB_0211f58c;
    local_2e8 = FUN_02b20960;
    local_2e0 = &LAB_02b20964;
    local_2d8 = &LAB_02b20968;
    if (local_268 != (code *)0x0) {
      local_260 = (undefined1 *)0x0;
      local_258 = (undefined1 *)0x0;
      local_270 = (code *)0x0;
      local_268 = (code *)0x0;
      (*pcVar12)(local_250);
    }
    pcVar12 = local_1e8;
    local_270 = (code *)&LAB_02b2096c;
    local_268 = FUN_02b213f4;
    local_260 = &LAB_02b213f8;
    local_250[0] = auStack_328;
    local_258 = &LAB_02b21404;
    if (local_1e8 != (code *)0x0) {
      local_1e0 = (undefined1 *)0x0;
      puStack_1d8 = (undefined1 *)0x0;
      local_1f0 = (code *)0x0;
      local_1e8 = (code *)0x0;
      (*pcVar12)(local_1d0);
    }
    local_1f0 = FUN_021200dc;
    local_1e8 = FUN_02b21410;
    local_1e0 = &LAB_02b21414;
    puStack_1d8 = &LAB_02b21418;
    lVar2 = *plVar8;
    lVar14 = (long)plVar11 - lVar2 >> 4;
    if ((ulong)((plVar8[1] - lVar2 >> 4) * -0x7d05f417d05f417d) <=
        (ulong)(lVar14 * -0x7d05f417d05f417d)) {
LAB_0162f270:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    FUN_0162f6c4(lVar2 + lVar14 * 0x10,&local_320);
    pcVar12 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      local_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar12)(auStack_d0);
    }
    pcVar12 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = (undefined1 *)0x0;
      puStack_158 = (undefined1 *)0x0;
      local_170 = (undefined1 *)0x0;
      local_168 = (code *)0x0;
      (*pcVar12)(auStack_150);
    }
    pcVar12 = local_1e8;
    if (local_1e8 != (code *)0x0) {
      local_1e0 = (undefined1 *)0x0;
      puStack_1d8 = (undefined1 *)0x0;
      local_1f0 = (code *)0x0;
      local_1e8 = (code *)0x0;
      (*pcVar12)(local_1d0);
    }
    pcVar12 = local_268;
    if (local_268 != (code *)0x0) {
      local_260 = (undefined1 *)0x0;
      local_258 = (undefined1 *)0x0;
      local_270 = (code *)0x0;
      local_268 = (code *)0x0;
      (*pcVar12)(local_250);
    }
    pcVar12 = local_2e8;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
    if (local_308 != (long *)0x0) {
      (**(code **)(*local_308 + 0x20))();
    }
    puVar16 = (undefined8 *)PTR_DAT_047d8928;
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0xa11794890a39a30e;
  pcStack_318 = "Title/Battle/TameVisible";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x18;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = FUN_019af2a8;
  local_2e8 = FUN_02b2141c;
  local_2e0 = &LAB_02b21420;
  local_2d8 = &LAB_02b21424;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x88d79dfac6d364b0;
  pcStack_318 = "Title/Battle/MigawariVisible";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x1c;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  local_2f0 = (code *)&LAB_02120a50;
  local_2e8 = FUN_02b21428;
  local_2e0 = &LAB_02b2142c;
  local_2d8 = &LAB_02b21430;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0x6191735db6437df1;
  pcStack_318 = "Title/Battle/SetDitherFade";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x1a;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  pcVar12 = local_1e8;
  local_2f0 = (code *)&LAB_02120c48;
  local_2e8 = FUN_02b21434;
  local_2e0 = &LAB_02b21438;
  local_2d8 = &LAB_02b2143c;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  local_1f0 = FUN_02121218;
  local_1e8 = FUN_02b21440;
  local_1e0 = &LAB_02b21444;
  puStack_1d8 = &LAB_02b21448;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_320 = *(undefined8 *)puVar4;
  pcStack_318 = *(char **)(puVar4 + 8);
  local_310 = *(undefined8 *)(puVar4 + 0x10);
  local_308 = *(long **)(puVar4 + 0x18);
  plVar11 = local_308;
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x18))();
    plVar11 = local_308;
  }
  local_300 = 1;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_320 = 0xcaa71e09e6c1b299;
  pcStack_318 = "Title/Battle/FormChangeHavokOff";
  local_f0 = 0;
  local_2f0 = (code *)0x0;
  local_2e8 = (code *)0x0;
  local_2e0 = (undefined1 *)0x0;
  local_2d8 = (undefined1 *)0x0;
  local_270 = (code *)0x0;
  local_268 = (code *)0x0;
  local_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_1f0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1e0 = (undefined1 *)0x0;
  puStack_1d8 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_168 = (code *)0x0;
  local_160 = (undefined1 *)0x0;
  puStack_158 = (undefined1 *)0x0;
  local_310 = 0x1f;
  local_308 = (long *)0x0;
  if (plVar11 == (long *)0x0) {
    local_308 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar11 + 0x20))();
    pcVar12 = local_2e8;
    local_308 = (long *)0x0;
    if (local_2e8 != (code *)0x0) {
      local_2e0 = (undefined1 *)0x0;
      local_2d8 = (undefined1 *)0x0;
      local_2f0 = (code *)0x0;
      local_2e8 = (code *)0x0;
      (*pcVar12)(apuStack_2d0);
    }
  }
  pcVar12 = local_1e8;
  local_2f0 = (code *)&LAB_02b2144c;
  local_2e8 = FUN_02b217e0;
  local_2e0 = &LAB_02b217e4;
  local_2d8 = &LAB_02b217e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  local_1f0 = (code *)&LAB_02b217ec;
  local_1e8 = FUN_02b218dc;
  local_1e0 = &LAB_02b218e0;
  puStack_1d8 = &LAB_02b218e4;
  if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8918), iVar7 != 0)) {
    FUN_00100190(PTR_LAB_047dcdc8,PTR_DAT_047d8920,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8918);
  }
  uVar9 = *(undefined8 *)puVar6;
  *puVar16 = uVar9;
  FUN_0162f274(uVar9,&local_320);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  pcVar12 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (undefined1 *)0x0;
    puStack_158 = (undefined1 *)0x0;
    local_170 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    (*pcVar12)(auStack_150);
  }
  pcVar12 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    puStack_1d8 = (undefined1 *)0x0;
    local_1f0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar12)(local_1d0);
  }
  pcVar12 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    local_270 = (code *)0x0;
    local_268 = (code *)0x0;
    (*pcVar12)(local_250);
  }
  pcVar12 = local_2e8;
  if (local_2e8 != (code *)0x0) {
    local_2e0 = (undefined1 *)0x0;
    local_2d8 = (undefined1 *)0x0;
    local_2f0 = (code *)0x0;
    local_2e8 = (code *)0x0;
    (*pcVar12)(apuStack_2d0);
  }
  if (local_308 != (long *)0x0) {
    (**(code **)(*local_308 + 0x20))();
  }
  return;
}


