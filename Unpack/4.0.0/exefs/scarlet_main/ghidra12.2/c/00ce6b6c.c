/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ce6b6c; name: FUN_00ce6b6c
 */


void FUN_00ce6b6c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  char *pcVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  long *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  *param_1 = &PTR_FUN_045d5230;
  puVar15 = param_1 + 1;
  *puVar15 = 0;
  param_1[4] = 0x666666666666666;
  param_1[5] = 0;
  param_1[9] = 0x666666666666666;
  param_1[10] = 0;
  lVar16 = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  plVar14 = param_1 + 0xe;
  *plVar14 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  puVar6 = PTR_LAB_047d4510;
  puVar7 = PTR_DAT_047d4240;
  param_1[0x12] = param_2;
  param_1[0x13] = 0x7ffffffffffffff;
  puVar8 = PTR_DAT_047d4248;
  param_1[0x14] = 0;
  puVar9 = PTR_DAT_047d4250;
  *(undefined4 *)(param_1 + 0x15) = 0;
  do {
    pcVar13 = *(char **)((long)&PTR_s_BaseColorMap_045d5348 + lVar16);
    if (pcVar13 != (char *)0x0) {
      local_68 = (long *)0x0;
      if (*pcVar13 == '\0') {
        plVar12 = (long *)FUN_00d44228();
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
      }
      else {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          FUN_00100190(puVar6,puVar8,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar7);
        }
        uVar11 = *(undefined8 *)puVar8;
        *(undefined8 *)puVar9 = uVar11;
        FUN_00cf9884(&local_88,uVar11,pcVar13);
        plVar12 = local_68;
        local_68 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x20))();
        }
        plVar12 = local_88;
      }
      local_68 = plVar12;
      FUN_00ceab04(puVar15,&local_68,&DAT_045d5350 + lVar16);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
    puVar5 = PTR_s_DirtTexture_045d53d8;
    lVar16 = lVar16 + 0x10;
  } while (lVar16 != 0x90);
  if (PTR_s_DirtTexture_045d53d8 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_DirtTexture_045d53d8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar5);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d53e0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d53e8;
  if (DAT_045d53e8 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d53e8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d53f0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_LAB_047d4510;
  lVar16 = 0;
  do {
    pcVar13 = *(char **)((long)&PTR_s_BaseColorMap1_045d53f8 + lVar16);
    if (pcVar13 != (char *)0x0) {
      local_68 = (long *)0x0;
      if (*pcVar13 == '\0') {
        plVar12 = (long *)FUN_00d44228();
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
      }
      else {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          FUN_00100190(puVar6,puVar8,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar7);
        }
        uVar11 = *(undefined8 *)puVar8;
        *(undefined8 *)puVar9 = uVar11;
        FUN_00cf9884(&local_88,uVar11,pcVar13);
        plVar12 = local_68;
        local_68 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x20))();
        }
        plVar12 = local_88;
      }
      local_68 = plVar12;
      FUN_00ceab04(puVar15,&local_68,&DAT_045d5400 + lVar16);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
    puVar5 = PTR_s_DiffuseProbe_045d5458;
    lVar16 = lVar16 + 0x10;
  } while (lVar16 != 0x60);
  if (PTR_s_DiffuseProbe_045d5458 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_DiffuseProbe_045d5458 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar5);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5460);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_SpecularProbe_045d5468;
  if (PTR_s_SpecularProbe_045d5468 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_SpecularProbe_045d5468 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5470);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d5478;
  if (DAT_045d5478 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d5478 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5480);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_LAB_047d4510;
  lVar16 = 0;
  do {
    pcVar13 = *(char **)((long)&PTR_s_HeightMap_045d5488 + lVar16);
    if (pcVar13 != (char *)0x0) {
      local_68 = (long *)0x0;
      if (*pcVar13 == '\0') {
        plVar12 = (long *)FUN_00d44228();
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
      }
      else {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          FUN_00100190(puVar6,puVar8,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar7);
        }
        uVar11 = *(undefined8 *)puVar8;
        *(undefined8 *)puVar9 = uVar11;
        FUN_00cf9884(&local_88,uVar11,pcVar13);
        plVar12 = local_68;
        local_68 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x20))();
        }
        plVar12 = local_88;
      }
      local_68 = plVar12;
      FUN_00ceab04(puVar15,&local_68,&DAT_045d5490 + lVar16);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
    puVar5 = PTR_LAB_047d4510;
    lVar16 = lVar16 + 0x10;
  } while (lVar16 != 0x170);
  lVar16 = 0;
  do {
    pcVar13 = *(char **)((long)&PTR_s_BlendMap0_045d55f8 + lVar16);
    if (pcVar13 != (char *)0x0) {
      local_68 = (long *)0x0;
      if (*pcVar13 == '\0') {
        plVar12 = (long *)FUN_00d44228();
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
      }
      else {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          FUN_00100190(puVar5,puVar8,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar7);
        }
        uVar11 = *(undefined8 *)puVar8;
        *(undefined8 *)puVar9 = uVar11;
        FUN_00cf9884(&local_88,uVar11,pcVar13);
        plVar12 = local_68;
        local_68 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x20))();
        }
        plVar12 = local_88;
      }
      local_68 = plVar12;
      FUN_00ceab04(puVar15,&local_68,&DAT_045d5600 + lVar16);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
    puVar6 = PTR_s_EmissionMaskMap_045d5658;
    lVar16 = lVar16 + 0x10;
  } while (lVar16 != 0x60);
  if (PTR_s_EmissionMaskMap_045d5658 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_EmissionMaskMap_045d5658 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5660);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_MaskedEmissionMap_045d5668;
  if (PTR_s_MaskedEmissionMap_045d5668 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_MaskedEmissionMap_045d5668 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5670);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d5678;
  if (DAT_045d5678 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d5678 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5680);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_HighlightMaskMap_045d5688;
  if (PTR_s_HighlightMaskMap_045d5688 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_HighlightMaskMap_045d5688 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5690);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_EyelidShadowMaskMap_045d5698;
  if (PTR_s_EyelidShadowMaskMap_045d5698 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_EyelidShadowMaskMap_045d5698 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d56a0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d56a8;
  if (DAT_045d56a8 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d56a8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d56b0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_UpperEyelidColorMap_045d56b8;
  if (PTR_s_UpperEyelidColorMap_045d56b8 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_UpperEyelidColorMap_045d56b8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d56c0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_LowerEyelidColorMap_045d56c8;
  if (PTR_s_LowerEyelidColorMap_045d56c8 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_LowerEyelidColorMap_045d56c8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d56d0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d56d8;
  if (DAT_045d56d8 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d56d8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d56e0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_FlowMap_045d56e8;
  if (PTR_s_FlowMap_045d56e8 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_FlowMap_045d56e8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d56f0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_FoamMaskMap_045d56f8;
  if (PTR_s_FoamMaskMap_045d56f8 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_FoamMaskMap_045d56f8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5700);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d5708;
  if (DAT_045d5708 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d5708 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5710);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_LAB_047d4510;
  lVar16 = 0;
  do {
    pcVar13 = *(char **)((long)&PTR_s_SSSMaskMap_045d5718 + lVar16);
    if (pcVar13 != (char *)0x0) {
      local_68 = (long *)0x0;
      if (*pcVar13 == '\0') {
        plVar12 = (long *)FUN_00d44228();
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
      }
      else {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          FUN_00100190(puVar6,puVar8,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar7);
        }
        uVar11 = *(undefined8 *)puVar8;
        *(undefined8 *)puVar9 = uVar11;
        FUN_00cf9884(&local_88,uVar11,pcVar13);
        plVar12 = local_68;
        local_68 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x20))();
        }
        plVar12 = local_88;
      }
      local_68 = plVar12;
      FUN_00ceab04(puVar15,&local_68,&DAT_045d5720 + lVar16);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
    puVar5 = PTR_s_DetailMaskMap_045d5768;
    lVar16 = lVar16 + 0x10;
  } while (lVar16 != 0x50);
  if (PTR_s_DetailMaskMap_045d5768 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_DetailMaskMap_045d5768 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar5);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5770);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_RoughnessMap1_045d5778;
  if (PTR_s_RoughnessMap1_045d5778 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_RoughnessMap1_045d5778 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5780);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_RoughnessMap2_045d5788;
  if (PTR_s_RoughnessMap2_045d5788 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_RoughnessMap2_045d5788 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5790);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d5798;
  if (DAT_045d5798 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d5798 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d57a0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_InsideEmissionParallaxIntensityM_045d57a8;
  if (PTR_s_InsideEmissionParallaxIntensityM_045d57a8 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_InsideEmissionParallaxIntensityM_045d57a8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d57b0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d57b8;
  if (DAT_045d57b8 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d57b8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d57c0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_FlowMap_045d57c8;
  if (PTR_s_FlowMap_045d57c8 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_FlowMap_045d57c8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d57d0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_RefractionMap_045d57d8;
  if (PTR_s_RefractionMap_045d57d8 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_RefractionMap_045d57d8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d57e0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_NormalCubeMap_045d57e8;
  if (PTR_s_NormalCubeMap_045d57e8 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_NormalCubeMap_045d57e8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d57f0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d57f8;
  if (DAT_045d57f8 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d57f8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5800);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_BaseColorCubeMap_045d5808;
  if (PTR_s_BaseColorCubeMap_045d5808 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_BaseColorCubeMap_045d5808 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5810);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_NormalCubeMap_045d5818;
  if (PTR_s_NormalCubeMap_045d5818 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_NormalCubeMap_045d5818 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5820);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d5828;
  if (DAT_045d5828 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d5828 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5830);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_DisplacementMap_045d5838;
  if (PTR_s_DisplacementMap_045d5838 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_DisplacementMap_045d5838 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5840);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d5848;
  if (DAT_045d5848 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d5848 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5850);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_EmissionNormalMap_045d5858;
  if (PTR_s_EmissionNormalMap_045d5858 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_EmissionNormalMap_045d5858 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5860);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_FresnelNoiseMap_045d5868;
  if (PTR_s_FresnelNoiseMap_045d5868 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_FresnelNoiseMap_045d5868 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5870);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d5878;
  if (DAT_045d5878 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d5878 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5880);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_DiscardMaskMap_045d5888;
  if (PTR_s_DiscardMaskMap_045d5888 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_DiscardMaskMap_045d5888 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5890);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_HairFlowMap_045d5898;
  if (PTR_s_HairFlowMap_045d5898 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_HairFlowMap_045d5898 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d58a0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d58a8;
  if (DAT_045d58a8 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d58a8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d58b0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_DetailNormalMap_045d58b8;
  if (PTR_s_DetailNormalMap_045d58b8 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_DetailNormalMap_045d58b8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d58c0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d58c8;
  if (DAT_045d58c8 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d58c8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d58d0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_GrassWindShadeMask_045d58d8;
  if (PTR_s_GrassWindShadeMask_045d58d8 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_GrassWindShadeMask_045d58d8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d58e0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d58e8;
  if (DAT_045d58e8 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d58e8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d58f0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_LightMap_045d58f8;
  if (PTR_s_LightMap_045d58f8 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_LightMap_045d58f8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5900);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d5908;
  if (DAT_045d5908 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d5908 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5910);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_PackedMap_045d5918;
  if (PTR_s_PackedMap_045d5918 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_PackedMap_045d5918 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5920);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d5928;
  if (DAT_045d5928 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d5928 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5930);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_OpacityMap_045d5938;
  if (PTR_s_OpacityMap_045d5938 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_OpacityMap_045d5938 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5940);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_OpacityMap1_045d5948;
  if (PTR_s_OpacityMap1_045d5948 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_OpacityMap1_045d5948 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5950);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d5958;
  if (DAT_045d5958 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d5958 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5960);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_WeatherLayerMaskMap_045d5968;
  if (PTR_s_WeatherLayerMaskMap_045d5968 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_WeatherLayerMaskMap_045d5968 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5970);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d5978;
  if (DAT_045d5978 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d5978 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5980);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_JewelMaskMap_045d5988;
  if (PTR_s_JewelMaskMap_045d5988 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_JewelMaskMap_045d5988 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5990);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_EmissionColorMap1_045d5998;
  if (PTR_s_EmissionColorMap1_045d5998 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_EmissionColorMap1_045d5998 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d59a0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d59a8;
  if (DAT_045d59a8 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d59a8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d59b0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_FresnelMaskMap_045d59b8;
  if (PTR_s_FresnelMaskMap_045d59b8 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_FresnelMaskMap_045d59b8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d59c0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d59c8;
  if (DAT_045d59c8 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d59c8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d59d0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_WindMaskMap_045d59d8;
  if (PTR_s_WindMaskMap_045d59d8 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_WindMaskMap_045d59d8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d59e0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d59e8;
  if (DAT_045d59e8 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d59e8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d59f0);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_VATMap_045d59f8;
  if (PTR_s_VATMap_045d59f8 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_VATMap_045d59f8 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5a00);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_VATNormalMap_045d5a08;
  if (PTR_s_VATNormalMap_045d5a08 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_VATNormalMap_045d5a08 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5a10);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_VATTangentMap_045d5a18;
  if (PTR_s_VATTangentMap_045d5a18 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_VATTangentMap_045d5a18 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5a20);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d5a28;
  if (DAT_045d5a28 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d5a28 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5a30);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  puVar6 = PTR_s_LocalSpecularProbe_045d5a38;
  if (PTR_s_LocalSpecularProbe_045d5a38 != (undefined *)0x0) {
    local_68 = (long *)0x0;
    if (*PTR_s_LocalSpecularProbe_045d5a38 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,puVar6);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5a40);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  pcVar13 = DAT_045d5a48;
  if (DAT_045d5a48 != (char *)0x0) {
    local_68 = (long *)0x0;
    if (*DAT_045d5a48 == '\0') {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    else {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar11 = *(undefined8 *)puVar8;
      *(undefined8 *)puVar9 = uVar11;
      FUN_00cf9884(&local_88,uVar11,pcVar13);
      plVar12 = local_68;
      local_68 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      plVar12 = local_88;
    }
    local_68 = plVar12;
    FUN_00ceab04(puVar15,&local_68,&DAT_045d5a50);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  lVar16 = FUN_010c9d88(&local_88,param_2,param_3);
  if (lVar16 != 0) {
    piVar1 = (int *)(lVar16 + 0x28);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar12 = (long *)*plVar14;
  *plVar14 = 0;
  if (plVar12 != (long *)0x0) {
    plVar14 = plVar12 + 5;
    do {
      lVar4 = *plVar14;
      iVar10 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = iVar10;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  param_1[0xe] = lVar16;
  param_1 = param_1 + 0xf;
  local_88 = (long *)0xe7d5621586e83d61;
  puStack_80 = PTR_s_Shadow_047e10d8;
  local_78 = 0x1f;
  local_70 = (long *)0x0;
  FUN_00ceaf50(param_1,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_88 = (long *)0xeed0538c14eaa7d2;
  puStack_80 = PTR_s_ShadowCascaded1_047e10e0;
  local_78 = 0x1f;
  local_70 = (long *)0x0;
  FUN_00ceaf50(param_1,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_88 = (long *)0xeed0528c14eaa61f;
  puStack_80 = PTR_s_ShadowCascaded2_047e10e8;
  local_78 = 0x1f;
  local_70 = (long *)0x0;
  FUN_00ceaf50(param_1,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  local_88 = (long *)0xeed0518c14eaa46c;
  puStack_80 = PTR_s_ShadowCascaded3_047e10f0;
  local_78 = 0x1f;
  local_70 = (long *)0x0;
  FUN_00ceaf50(param_1,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  return;
}


