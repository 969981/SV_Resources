/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0141c8fc; name: FUN_0141c8fc
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0141c8fc(long param_1,long param_2)

{
  long *plVar1;
  short *psVar2;
  size_t *psVar3;
  char **ppcVar4;
  undefined1 **ppuVar5;
  ulong **ppuVar6;
  long **pplVar7;
  ulong *puVar8;
  int *piVar9;
  short sVar10;
  char cVar11;
  int iVar12;
  char *pcVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  bool bVar26;
  ushort uVar27;
  int iVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  void *pvVar31;
  ulong *puVar32;
  long lVar33;
  long lVar34;
  uint uVar35;
  uint uVar36;
  long lVar37;
  long *plVar38;
  code *pcVar39;
  undefined1 *puVar40;
  int *piVar41;
  ulong uVar42;
  undefined1 *puVar43;
  short sVar44;
  long *plVar45;
  undefined1 *puVar46;
  ulong *puVar47;
  ulong uVar48;
  ulong *puVar49;
  char *pcVar50;
  char *pcVar51;
  ulong uVar52;
  long *plVar53;
  ulong uVar54;
  char *pcVar55;
  ulong *puVar56;
  undefined4 uVar57;
  ulong *local_1e8;
  ulong *local_1e0;
  ulong *local_1c8;
  ulong *local_1c0;
  ulong *local_1b8;
  ulong *local_1b0;
  long *local_1a8;
  ulong *local_1a0;
  ulong *local_198;
  ulong *local_190;
  ulong *local_188;
  long *local_180;
  ulong *local_178;
  undefined8 uStack_170;
  long *local_168;
  ulong *local_160;
  undefined8 uStack_158;
  undefined8 *local_150;
  undefined8 uStack_148;
  long *local_140;
  ulong *local_138;
  undefined8 uStack_130;
  ulong *local_128;
  ulong local_120;
  char *local_118;
  char *local_110;
  ulong *local_108;
  long *local_100;
  ulong local_f8;
  undefined8 local_f0;
  ulong *local_e8;
  ulong *local_e0;
  undefined8 local_d8;
  ulong *local_d0;
  char *pcStack_c8;
  ulong local_c0;
  ulong *local_b8;
  ulong *local_b0;
  char *local_a8;
  undefined1 *local_a0;
  ulong *local_98;
  long *local_90;
  char *local_88;
  char *local_80;
  ulong *local_78;
  ulong *local_70;
  
  puVar40 = *(undefined1 **)(param_2 + 0x160);
  if (puVar40 != (undefined1 *)0x0) {
    uVar42 = (long)puVar40 - ((ulong)puVar40 >> 1 & 0x5555555555555555);
    uVar42 = (uVar42 & 0x3333333333333333) + (uVar42 >> 2 & 0x3333333333333333);
    uVar42 = (uVar42 + (uVar42 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar42 < 2) {
      puVar43 = (undefined1 *)((ulong)(puVar40 + -1) & 0xf1c9bf636e0f4f06);
    }
    else {
      puVar43 = &DAT_f1c9bf636e0f4f06;
      if (puVar40 < (undefined1 *)0xf1c9bf636e0f4f07) {
        uVar48 = 0;
        if (puVar40 != (undefined1 *)0x0) {
          uVar48 = 0xf1c9bf636e0f4f06 / (ulong)puVar40;
        }
        puVar43 = &DAT_f1c9bf636e0f4f06 + -(uVar48 * (long)puVar40);
      }
    }
    plVar45 = *(long **)(*(long *)(param_2 + 0x158) + (long)puVar43 * 8);
    if ((plVar45 != (long *)0x0) && (plVar45 = (long *)*plVar45, plVar45 != (long *)0x0)) {
      if (uVar42 < 2) {
        do {
          if ((undefined1 *)plVar45[1] == &DAT_f1c9bf636e0f4f06) {
            if ((undefined1 *)plVar45[2] == &DAT_f1c9bf636e0f4f06) goto LAB_0141ca28;
          }
          else if ((undefined1 *)((ulong)plVar45[1] & (ulong)(puVar40 + -1)) != puVar43) break;
          plVar45 = (long *)*plVar45;
        } while (plVar45 != (long *)0x0);
      }
      else {
        do {
          puVar46 = (undefined1 *)plVar45[1];
          if (puVar46 == &DAT_f1c9bf636e0f4f06) {
            if ((undefined1 *)plVar45[2] == &DAT_f1c9bf636e0f4f06) goto LAB_0141ca28;
          }
          else {
            if (puVar40 <= puVar46) {
              uVar42 = 0;
              if (puVar40 != (undefined1 *)0x0) {
                uVar42 = (ulong)puVar46 / (ulong)puVar40;
              }
              puVar46 = puVar46 + -(uVar42 * (long)puVar40);
            }
            if (puVar46 != puVar43) break;
          }
          plVar45 = (long *)*plVar45;
        } while (plVar45 != (long *)0x0);
      }
    }
  }
LAB_0141ca50:
  local_c0 = 0xf;
  local_b8 = (ulong *)0x0;
  local_d0 = (ulong *)0xe58c09b1920c446b;
  pcStack_c8 = "MessageDataPath";
  FUN_01315eac(&local_b0,param_2,&local_d0);
  puVar14 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) &&
     (iVar28 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar28 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar15 = PTR_DAT_047d3e30;
  bVar26 = local_b0._0_1_ != (string)0x0;
  ppcVar4 = (char **)PTR_DAT_047d3e30;
  if (bVar26) {
    ppcVar4 = &local_a8;
  }
  local_88 = *ppcVar4;
  ppuVar5 = (undefined1 **)(PTR_DAT_047d3e30 + 8);
  if (bVar26) {
    ppuVar5 = &local_a0;
  }
  local_80 = *ppuVar5;
  ppuVar6 = (ulong **)(PTR_DAT_047d3e30 + 0x10);
  if (bVar26) {
    ppuVar6 = &local_98;
  }
  local_78 = *ppuVar6;
  pplVar7 = (long **)(PTR_DAT_047d3e30 + 0x18);
  if (bVar26) {
    pplVar7 = &local_90;
  }
  local_70 = (ulong *)*pplVar7;
  if (local_70 != (ulong *)0x0) {
    (**(code **)(*local_70 + 0x18))();
  }
  if (local_b0._0_1_ != (string)0x0) {
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    local_b0 = (ulong *)((ulong)local_b0 & 0xffffffffffffff00);
  }
  if (local_b8 != (ulong *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (*local_80 == '\0') {
    uVar42 = 0;
  }
  else {
    uVar42 = FUN_01072328(&local_88);
    uVar42 = uVar42 & 0xffffffff;
  }
  if (local_70 != (ulong *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if ((uVar42 & 1) == 0) {
    return;
  }
  local_b0 = (ulong *)&DAT_f1c9bf636e0f4f06;
  puVar29 = (undefined8 *)FUN_01235878(param_2 + 0x158,&local_b0);
  *(undefined1 *)(puVar29 + 2) = 1;
  *puVar29 = PTR_LAB_047dcd90;
  puVar16 = PTR_DAT_047d4240;
  if (((*PTR_DAT_047d4240 & 1) == 0) &&
     (iVar28 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar28 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  puVar18 = PTR_DAT_047d4250;
  puVar17 = PTR_DAT_047d4248;
  uVar30 = *(undefined8 *)PTR_DAT_047d4248;
  *(undefined8 *)PTR_DAT_047d4250 = uVar30;
  FUN_00cf9884(&local_b0,uVar30,"MessageWindow_00");
  puVar21 = local_b0;
  if (((*puVar16 & 1) == 0) && (iVar28 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar28 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar30 = *(undefined8 *)puVar17;
  *(undefined8 *)puVar18 = uVar30;
  FUN_00cf9884(&local_b0,uVar30,"MessageWindow_01");
  local_1a0 = local_b0;
  if (((*puVar16 & 1) == 0) && (iVar28 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar28 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar30 = *(undefined8 *)puVar17;
  *(undefined8 *)puVar18 = uVar30;
  FUN_00cf9884(&local_b0,uVar30,"L_msg/in");
  local_1b0 = local_b0;
  if (((*puVar16 & 1) == 0) && (iVar28 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar28 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar30 = *(undefined8 *)puVar17;
  *(undefined8 *)puVar18 = uVar30;
  FUN_00cf9884(&local_b0,uVar30,"L_msg/in_strong");
  local_1b8 = local_b0;
  if (((*puVar16 & 1) == 0) && (iVar28 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar28 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar30 = *(undefined8 *)puVar17;
  *(undefined8 *)puVar18 = uVar30;
  FUN_00cf9884(&local_b0,uVar30,"L_msg/out");
  local_1c0 = local_b0;
  if (((*puVar16 & 1) == 0) && (iVar28 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar28 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar30 = *(undefined8 *)puVar17;
  *(undefined8 *)puVar18 = uVar30;
  FUN_00cf9884(&local_b0,uVar30,"L_msg/out_strong");
  local_1c8 = local_b0;
  if (((*puVar16 & 1) == 0) && (iVar28 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar28 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar30 = *(undefined8 *)puVar17;
  *(undefined8 *)puVar18 = uVar30;
  FUN_00cf9884(&local_b0,uVar30,"L_msg/ptn_window");
  puVar22 = local_b0;
  if (((*puVar16 & 1) == 0) && (iVar28 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar28 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar30 = *(undefined8 *)puVar17;
  *(undefined8 *)puVar18 = uVar30;
  FUN_00cf9884(&local_b0,uVar30,"system_ui.ViewStatic");
  local_188 = local_b0;
  if (((*puVar16 & 1) == 0) && (iVar28 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar28 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar30 = *(undefined8 *)puVar17;
  *(undefined8 *)puVar18 = uVar30;
  FUN_00cf9884(&local_b0,uVar30,"tml_msg_demo.View_Child");
  local_198 = local_b0;
  if (((*puVar16 & 1) == 0) && (iVar28 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar28 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar30 = *(undefined8 *)puVar17;
  *(undefined8 *)puVar18 = uVar30;
  FUN_00cf9884(&local_b0,uVar30,"tml_msg_battle.View_Child");
  puVar23 = local_b0;
  local_1e0 = local_b0;
  if (((*puVar16 & 1) == 0) && (iVar28 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar28 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar30 = *(undefined8 *)puVar17;
  *(undefined8 *)puVar18 = uVar30;
  FUN_00cf9884(&local_b0,uVar30,"tml_msg_jimaku.View_Child");
  puVar24 = local_b0;
  local_1e8 = local_b0;
  if (((*puVar16 & 1) == 0) && (iVar28 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar28 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar30 = *(undefined8 *)puVar17;
  local_190 = puVar21;
  *(undefined8 *)puVar18 = uVar30;
  FUN_00cf9884(&local_b0,uVar30,"L_msg/ptn_name");
  puVar21 = local_b0;
  if (((*puVar16 & 1) == 0) && (iVar28 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar28 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar30 = *(undefined8 *)puVar17;
  *(undefined8 *)puVar18 = uVar30;
  FUN_00cf9884(&local_b0,uVar30,"L_msg/T_name_00");
  puVar25 = local_b0;
  puVar17 = PTR_DAT_047d8a20;
  if (((*PTR_DAT_047d8a20 & 1) == 0) &&
     (iVar28 = __cxa_guard_acquire(PTR_DAT_047d8a20), iVar28 != 0)) {
    FUN_00100190(PTR_LAB_047d8eb0,PTR_DAT_047d8a28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a20);
  }
  puVar19 = PTR_DAT_047d8ea8;
  puVar18 = PTR_DAT_047d8a28;
  lVar37 = *(long *)PTR_DAT_047d8a28;
  *(long *)PTR_DAT_047d8ea8 = lVar37;
  piVar41 = *(int **)(lVar37 + 0x28);
  piVar9 = *(int **)(lVar37 + 0x30);
  if (piVar41 != piVar9) {
    if (*piVar41 != *(int *)(param_2 + 0x1c0)) {
      do {
        piVar41 = piVar41 + 4;
        if (piVar9 == piVar41) {
          piVar41 = piVar9;
          goto LAB_0141cdd0;
        }
      } while (*piVar41 != *(int *)(param_2 + 0x1c0));
    }
  }
LAB_0141cdd0:
  if (piVar9 == piVar41) {
    FUN_00ea425c(&local_b0);
    puVar56 = local_b0;
    FUN_011b825c(local_b0,0);
  }
  else {
    if (((*puVar17 & 1) == 0) && (iVar28 = __cxa_guard_acquire(PTR_DAT_047d8a20), iVar28 != 0)) {
      FUN_00100190(PTR_LAB_047d8eb0,PTR_DAT_047d8a28,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8a20);
    }
    uVar30 = *(undefined8 *)puVar18;
    *(undefined8 *)puVar19 = uVar30;
    FUN_01dbf334(&local_b0,uVar30,*(undefined4 *)(param_2 + 0x1c0));
    puVar56 = local_b0;
    if (local_b0 == (ulong *)0x0) {
      FUN_00ea425c(&local_b0);
      puVar56 = local_b0;
    }
  }
  local_b0 = (ulong *)0xe5c5d5f051ea99b5;
  local_a8 = "WindowType";
  local_a0 = &DAT_0000000a;
  local_98 = (ulong *)0x0;
  uVar42 = FUN_01470908(param_2,&local_b0);
  local_128 = local_190;
  uVar35 = 0;
  if ((uVar42 & 0xff) != 0) {
    uVar35 = (uint)(uVar42 >> 0x20);
  }
  if (local_98 != (ulong *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if ((uVar35 < 4) || (uVar35 == 5)) {
    if (local_128 != (ulong *)0x0) {
      uVar42 = *local_128;
LAB_0141ce54:
      (**(code **)(uVar42 + 0x18))(local_128);
    }
LAB_0141ce5c:
    puVar47 = local_188;
    puVar32 = local_198;
    switch(uVar35) {
    case 0:
      local_d0 = (ulong *)PTR_DAT_047d8b70;
      if (puVar23 != (ulong *)0x0) {
        local_d0 = puVar23 + 6;
      }
      local_d0 = (ulong *)*local_d0;
      puVar32 = (ulong *)PTR_PTR_047d4508;
      if (puVar23 != (ulong *)0x0) {
        puVar32 = puVar23 + 7;
      }
      pcStack_c8 = (char *)*puVar32;
      local_c0 = 0;
      if (puVar23 != (ulong *)0x0) {
        local_c0 = puVar23[8];
      }
      local_b8 = (ulong *)0x0;
      if (puVar23 == (ulong *)0x0) {
        puVar32 = (ulong *)0x0;
      }
      else {
        (**(code **)(*puVar23 + 0x18))(puVar23);
        puVar32 = puVar23;
      }
      local_b8 = local_1e0;
      if (*(code **)(param_2 + 0x10) != (code *)0x0) {
        (**(code **)(param_2 + 0x10))(&local_138,param_2 + 0x30,&local_d0);
        puVar32 = local_b8;
        break;
      }
      goto LAB_0141e0a8;
    case 1:
      puVar47 = (ulong *)PTR_DAT_047d8b70;
      if (local_198 != (ulong *)0x0) {
        puVar47 = local_198 + 6;
      }
      local_88 = (char *)*puVar47;
      puVar47 = (ulong *)PTR_PTR_047d4508;
      if (local_198 != (ulong *)0x0) {
        puVar47 = local_198 + 7;
      }
      local_80 = (char *)*puVar47;
      if (local_198 == (ulong *)0x0) {
        local_78 = (ulong *)0x0;
      }
      else {
        local_78 = (ulong *)local_198[8];
      }
      local_70 = (ulong *)0x0;
      if (local_198 == (ulong *)0x0) {
        puVar32 = (ulong *)0x0;
      }
      else {
        (**(code **)(*local_198 + 0x18))(local_198);
      }
      local_70 = puVar32;
      if (*(code **)(param_2 + 0x10) == (code *)0x0) goto LAB_0141e0a8;
      (**(code **)(param_2 + 0x10))(&local_138,param_2 + 0x30,&local_88);
      puVar32 = local_70;
      break;
    case 2:
    case 3:
    case 4:
      goto switchD_0141ce80_caseD_2;
    case 5:
      puVar32 = (ulong *)PTR_DAT_047d8b70;
      if (puVar24 != (ulong *)0x0) {
        puVar32 = puVar24 + 6;
      }
      local_100 = (long *)*puVar32;
      puVar32 = (ulong *)PTR_PTR_047d4508;
      if (puVar24 != (ulong *)0x0) {
        puVar32 = puVar24 + 7;
      }
      local_f8 = *puVar32;
      local_f0 = (char *)0x0;
      if (puVar24 != (ulong *)0x0) {
        local_f0 = (char *)puVar24[8];
      }
      local_e8 = (ulong *)0x0;
      if (puVar24 == (ulong *)0x0) {
        puVar32 = (ulong *)0x0;
      }
      else {
        (**(code **)(*puVar24 + 0x18))(puVar24);
        puVar32 = puVar24;
      }
      local_e8 = local_1e8;
      if (*(code **)(param_2 + 0x10) == (code *)0x0) goto LAB_0141e0a8;
      (**(code **)(param_2 + 0x10))(&local_138,param_2 + 0x30,&local_100);
      puVar32 = local_e8;
      break;
    default:
      puVar32 = (ulong *)PTR_DAT_047d8b70;
      if (local_188 != (ulong *)0x0) {
        puVar32 = local_188 + 6;
      }
      local_120 = *puVar32;
      puVar32 = (ulong *)PTR_PTR_047d4508;
      if (local_188 != (ulong *)0x0) {
        puVar32 = local_188 + 7;
      }
      local_118 = (char *)*puVar32;
      local_110 = (char *)0x0;
      if (local_188 != (ulong *)0x0) {
        local_110 = (char *)local_188[8];
      }
      local_108 = (ulong *)0x0;
      if (local_188 == (ulong *)0x0) {
        puVar32 = (ulong *)0x0;
      }
      else {
        (**(code **)(*local_188 + 0x18))(local_188);
        puVar32 = puVar47;
      }
      local_108 = puVar47;
      if (*(code **)(param_2 + 0x10) == (code *)0x0) goto LAB_0141e0a8;
      (**(code **)(param_2 + 0x10))(&local_138,param_2 + 0x30,&local_120);
      puVar32 = local_108;
    }
  }
  else {
    if (uVar35 != 4) {
      local_128 = local_190;
      if (local_190 != (ulong *)0x0) {
        uVar42 = *local_190;
        goto LAB_0141ce54;
      }
      goto LAB_0141ce5c;
    }
    local_128 = local_1a0;
    if (local_1a0 != (ulong *)0x0) {
      (**(code **)(*local_1a0 + 0x18))();
    }
switchD_0141ce80_caseD_2:
    puVar32 = local_188;
    local_b0 = (ulong *)PTR_DAT_047d8b70;
    if (local_188 != (ulong *)0x0) {
      local_b0 = local_188 + 6;
    }
    local_b0 = (ulong *)*local_b0;
    psVar3 = (size_t *)PTR_PTR_047d4508;
    if (local_188 != (ulong *)0x0) {
      psVar3 = local_188 + 7;
    }
    local_a8 = (char *)*psVar3;
    if (local_188 == (ulong *)0x0) {
      local_a0 = (undefined1 *)0x0;
    }
    else {
      local_a0 = (undefined1 *)local_188[8];
    }
    local_98 = (ulong *)0x0;
    if (local_188 == (ulong *)0x0) {
      local_98 = (ulong *)0x0;
    }
    else {
      (**(code **)(*local_188 + 0x18))(local_188);
      local_98 = puVar32;
    }
    if (*(code **)(param_2 + 0x10) == (code *)0x0) {
LAB_0141e0a8:
      local_138 = (ulong *)0x0;
      uStack_130 = 0;
    }
    else {
      (**(code **)(param_2 + 0x10))(&local_138,param_2 + 0x30,&local_b0);
      puVar32 = local_98;
    }
  }
  if (puVar32 != (ulong *)0x0) {
    (**(code **)(*puVar32 + 0x20))(puVar32);
  }
  if (local_138 != (ulong *)0x0) {
    if (*(short *)((long)local_138 + 0x1a) != 0) {
      if ((local_138 == (ulong *)0x0) || (*(short *)((long)local_138 + 0x1a) == 0)) {
        plVar45 = (long *)0x0;
      }
      else {
        psVar2 = (short *)((long)local_138 + 0x1a);
        sVar44 = *(short *)((long)local_138 + 0x1a);
        do {
          sVar10 = *psVar2;
          if (sVar10 == sVar44) {
            cVar11 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar26) {
              *psVar2 = sVar44 + 1;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 != '\0') goto LAB_0141ed3c;
            bVar26 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_0141ed3c:
            bVar26 = false;
          }
          if (bVar26) {
            plVar45 = (long *)0x0;
            if (local_138[2] != 0) {
              plVar45 = (long *)(local_138[2] - 0x28);
            }
            break;
          }
          plVar45 = (long *)0x0;
          sVar44 = sVar10;
        } while (sVar10 != 0);
      }
      lVar37 = FUN_0104cf4c(plVar45 + 0x21,&local_b0);
      if (lVar37 != 0) {
        local_78 = (ulong *)0xf;
        local_70 = (ulong *)0x0;
        local_88 = (char *)0xe58c09b1920c446b;
        local_80 = "MessageDataPath";
        FUN_01315eac(&local_b0,param_2,&local_88);
        if (((*puVar14 & 1) == 0) && (iVar28 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar28 != 0))
        {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        ppuVar5 = (undefined1 **)(puVar15 + 8);
        if (local_b0._0_1_ != (string)0x0) {
          ppuVar5 = &local_a0;
        }
        pcVar50 = *ppuVar5;
        pplVar7 = (long **)(puVar15 + 0x18);
        if (local_b0._0_1_ != (string)0x0) {
          pplVar7 = &local_90;
        }
        plVar53 = *pplVar7;
        if (plVar53 != (long *)0x0) {
          (**(code **)(*plVar53 + 0x18))(plVar53);
        }
        if (local_b0._0_1_ != (string)0x0) {
          if (local_90 != (long *)0x0) {
            (**(code **)(*local_90 + 0x20))();
          }
          local_b0 = (ulong *)((ulong)local_b0 & 0xffffffffffffff00);
        }
        if (local_70 != (ulong *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        if (*pcVar50 != '\0') {
          local_d0 = (ulong *)&DAT_c721ad9799dfe67d;
          pcStack_c8 = "Label";
          local_c0 = 5;
          local_b8 = (ulong *)0x0;
          FUN_01315eac(&local_b0,param_2,&local_d0);
          if (((*puVar14 & 1) == 0) && (iVar28 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar28 != 0)
             ) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          bVar26 = local_b0._0_1_ != (string)0x0;
          ppcVar4 = (char **)puVar15;
          if (bVar26) {
            ppcVar4 = &local_a8;
          }
          local_88 = *ppcVar4;
          ppuVar5 = (undefined1 **)(puVar15 + 8);
          if (bVar26) {
            ppuVar5 = &local_a0;
          }
          local_80 = *ppuVar5;
          ppuVar6 = (ulong **)(puVar15 + 0x10);
          if (bVar26) {
            ppuVar6 = &local_98;
          }
          local_78 = *ppuVar6;
          pplVar7 = (long **)(puVar15 + 0x18);
          if (bVar26) {
            pplVar7 = &local_90;
          }
          local_70 = (ulong *)*pplVar7;
          if (local_70 != (ulong *)0x0) {
            (**(code **)(*local_70 + 0x18))();
          }
          if (local_b0._0_1_ != (string)0x0) {
            if (local_90 != (long *)0x0) {
              (**(code **)(*local_90 + 0x20))();
            }
            local_b0 = (ulong *)((ulong)local_b0 & 0xffffffffffffff00);
          }
          if (local_b8 != (ulong *)0x0) {
            (**(code **)(*local_b8 + 0x20))();
          }
          if (plVar53 != (long *)0x0) {
            (**(code **)(*plVar53 + 0x18))(plVar53);
          }
          uVar30 = *(undefined8 *)(param_1 + 8);
          lVar34 = tpidr_el0;
          local_1a8 = plVar53;
          if (*(long *)(lVar34 + 0x30) == 0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar28 = __cxa_guard_acquire(&DAT_04859438), iVar28 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            *(long **)(lVar34 + 0x30) = DAT_04859430;
          }
          local_e0 = *(ulong **)(lVar34 + 0x30);
          local_d8 = *(undefined8 *)(lVar34 + 0x38);
          *(undefined8 *)(lVar34 + 0x30) = uVar30;
          *(undefined2 *)(lVar34 + 0x38) = 1;
          if (*pcVar50 == '\0') {
            puVar32 = (ulong *)FUN_00d44228();
            if (puVar32 != (ulong *)0x0) {
              (**(code **)(*puVar32 + 0x18))(puVar32);
            }
          }
          else {
            if (((*puVar16 & 1) == 0) &&
               (iVar28 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar28 != 0)) {
              FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d4240);
            }
            uVar30 = *(undefined8 *)PTR_DAT_047d4248;
            *(undefined8 *)PTR_DAT_047d4250 = uVar30;
            FUN_00cf9884(&local_b0,uVar30,pcVar50);
            puVar32 = local_b0;
          }
          puVar47 = (ulong *)PTR_PTR_047d4508;
          if (puVar32 != (ulong *)0x0) {
            puVar47 = puVar32 + 7;
          }
          pcVar51 = (char *)*puVar47;
          pcVar50 = (char *)strlen(pcVar51);
          if ((char *)0xffffffffffffffef < pcVar50) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (pcVar50 < (char *)0x17) {
            local_b0 = (ulong *)CONCAT71(local_b0._1_7_,(char)((int)pcVar50 << 1));
            puVar40 = (undefined1 *)((ulong)&local_b0 | 1);
            if (pcVar50 != (char *)0x0) goto LAB_0141d240;
          }
          else {
            plVar53 = *(long **)(lVar34 + 0x30);
            if (plVar53 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar28 = __cxa_guard_acquire(&DAT_04859438), iVar28 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar53 = DAT_04859430;
              *(long **)(lVar34 + 0x30) = DAT_04859430;
            }
            puVar40 = (undefined1 *)
                      (**(code **)(*plVar53 + 0x10))
                                (plVar53,(ulong)(pcVar50 + 0x10) & 0xfffffffffffffff0,8);
            local_b0 = (ulong *)((ulong)(pcVar50 + 0x10) & 0xfffffffffffffff0 | 1);
            local_a8 = pcVar50;
            local_a0 = puVar40;
LAB_0141d240:
            memcpy(puVar40,pcVar51,(size_t)pcVar50);
          }
          puVar40[(long)pcVar50] = 0;
          if (puVar32 != (ulong *)0x0) {
            (**(code **)(*puVar32 + 0x20))(puVar32);
          }
          puVar40 = (undefined1 *)((ulong)&local_b0 | 1);
          pcVar50 = (char *)((ulong)local_b0 >> 1 & 0x7f);
          if (((ulong)local_b0 & 1) != 0) {
            puVar40 = local_a0;
            pcVar50 = local_a8;
          }
          pcVar51 = pcVar50;
          do {
            pcVar55 = (char *)0xffffffffffffffff;
            if (pcVar51 == (char *)0x0) break;
            pvVar31 = memchr(&DAT_03c0f511,(uint)(byte)puVar40[(long)(pcVar51 + -1)],1);
            pcVar55 = pcVar51 + -1;
            pcVar51 = pcVar55;
          } while (pvVar31 == (void *)0x0);
          iVar28 = (int)pcVar55 + 1;
          do {
            pcVar51 = (char *)0xffffffffffffffff;
            if (pcVar50 == (char *)0x0) break;
            pcVar51 = pcVar50 + -1;
            pcVar55 = pcVar50 + -1;
            pcVar50 = pcVar51;
          } while (puVar40[(long)pcVar55] != '.');
          std::string::string((string *)&local_100,(string *)&local_b0,(long)iVar28,
                              (long)((int)pcVar51 - iVar28),(allocator *)&local_b0);
          pcVar50 = (char *)((ulong)local_b0 >> 1 & 0x7f);
          puVar40 = (undefined1 *)((ulong)&local_b0 | 1);
          if (((ulong)local_b0 & 1) != 0) {
            pcVar50 = local_a8;
            puVar40 = local_a0;
          }
          do {
            pcVar55 = (char *)0xffffffffffffffff;
            if (pcVar50 == (char *)0x0) break;
            pcVar55 = pcVar50 + -1;
            pcVar13 = pcVar50 + -1;
            pcVar50 = pcVar55;
          } while (puVar40[(long)pcVar13] != '/');
          iVar28 = (int)pcVar55 + 1;
          std::string::string((string *)&local_120,(string *)&local_b0,(long)iVar28,
                              (long)((int)pcVar51 - iVar28),(allocator *)&local_b0);
          uVar42 = (ulong)local_100 >> 1 & 0x7f;
          if (((ulong)local_100 & 1) != 0) {
            uVar42 = local_f8;
          }
          if ((local_120 & 1) == 0) {
            if (uVar42 <= (local_120 >> 1 & 0x7f)) goto LAB_0141dcb8;
            pcVar50 = (char *)((ulong)&local_120 | 1);
          }
          else if (local_118 < uVar42) {
            pcVar50 = local_110;
          }
          else {
LAB_0141dcb8:
            pcVar50 = (char *)((ulong)&local_100 | 1);
            if (((ulong)local_100 & 1) != 0) {
              pcVar50 = local_f0;
            }
          }
          if (*pcVar50 == '\0') {
            puVar32 = (ulong *)FUN_00d44228();
            if (puVar32 != (ulong *)0x0) {
              (**(code **)(*puVar32 + 0x18))(puVar32);
            }
          }
          else {
            if (((*puVar16 & 1) == 0) &&
               (iVar28 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar28 != 0)) {
              FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d4240);
            }
            uVar30 = *(undefined8 *)PTR_DAT_047d4248;
            *(undefined8 *)PTR_DAT_047d4250 = uVar30;
            FUN_00cf9884(&local_d0,uVar30,pcVar50);
            puVar32 = local_d0;
          }
          puVar47 = (ulong *)PTR_DAT_047d8b70;
          if (puVar32 != (ulong *)0x0) {
            puVar47 = puVar32 + 6;
          }
          puVar47 = (ulong *)*puVar47;
          puVar49 = (ulong *)PTR_PTR_047d4508;
          if (puVar32 != (ulong *)0x0) {
            puVar49 = puVar32 + 7;
          }
          pcVar50 = (char *)*puVar49;
          if (puVar32 == (ulong *)0x0) {
            local_c0 = 0;
            local_b8 = (ulong *)0x0;
            local_d0 = puVar47;
            pcStack_c8 = pcVar50;
          }
          else {
            uVar42 = puVar32[8];
            (**(code **)(*puVar32 + 0x18))(puVar32);
            local_d0 = puVar47;
            pcStack_c8 = pcVar50;
            local_c0 = uVar42;
            local_b8 = puVar32;
            (**(code **)(*puVar32 + 0x20))(puVar32);
          }
          pcVar50 = local_110;
          if (((local_120 & 1) != 0) && (local_110 != (char *)0x0)) {
            plVar53 = *(long **)(lVar34 + 0x30);
            if (plVar53 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar28 = __cxa_guard_acquire(&DAT_04859438), iVar28 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar53 = DAT_04859430;
              *(long **)(lVar34 + 0x30) = DAT_04859430;
            }
            uVar42 = (**(code **)(*plVar53 + 0xf8))(plVar53);
            if (((uVar42 & 1) == 0) || (lVar33 = FUN_00c4e600(), *(int *)(lVar33 + 0x12c8) < 1)) {
              (**(code **)(*plVar53 + 0x18))(plVar53,pcVar50,0,8);
            }
            else {
              FUN_00c48fe8(plVar53,pcVar50,0,8);
            }
          }
          pcVar50 = local_f0;
          if ((((ulong)local_100 & 1) != 0) && (local_f0 != (char *)0x0)) {
            plVar53 = *(long **)(lVar34 + 0x30);
            if (plVar53 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar28 = __cxa_guard_acquire(&DAT_04859438), iVar28 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar53 = DAT_04859430;
              *(long **)(lVar34 + 0x30) = DAT_04859430;
            }
            uVar42 = (**(code **)(*plVar53 + 0xf8))(plVar53);
            if (((uVar42 & 1) == 0) || (lVar33 = FUN_00c4e600(), *(int *)(lVar33 + 0x12c8) < 1)) {
              (**(code **)(*plVar53 + 0x18))(plVar53,pcVar50,0,8);
            }
            else {
              FUN_00c48fe8(plVar53,pcVar50,0,8);
            }
          }
          puVar40 = local_a0;
          if ((((ulong)local_b0 & 1) != 0) && (local_a0 != (undefined1 *)0x0)) {
            plVar53 = *(long **)(lVar34 + 0x30);
            if (plVar53 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar28 = __cxa_guard_acquire(&DAT_04859438), iVar28 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar53 = DAT_04859430;
              *(long **)(lVar34 + 0x30) = DAT_04859430;
            }
            uVar42 = (**(code **)(*plVar53 + 0xf8))(plVar53);
            if (((uVar42 & 1) == 0) || (lVar33 = FUN_00c4e600(), *(int *)(lVar33 + 0x12c8) < 1)) {
              (**(code **)(*plVar53 + 0x18))(plVar53,puVar40,0,8);
            }
            else {
              FUN_00c48fe8(plVar53,puVar40,0,8);
            }
          }
          plVar53 = local_1a8;
          *(ulong **)(lVar34 + 0x30) = local_e0;
          *(undefined2 *)(lVar34 + 0x38) = (undefined2)local_d8;
          if (local_1a8 != (long *)0x0) {
            (**(code **)(*local_1a8 + 0x20))(local_1a8);
          }
          if (*local_80 == '\0') {
            local_b0 = (ulong *)0x145f3f3a9d78f3cb;
            local_a8 = "Index";
            local_a0 = &DAT_00000005;
            local_98 = (ulong *)0x0;
            uVar42 = FUN_01470908(param_2,&local_b0);
            uVar36 = 0;
            if ((uVar42 & 0xff) != 0) {
              uVar36 = (uint)(uVar42 >> 0x20);
            }
            if (local_98 != (ulong *)0x0) {
              (**(code **)(*local_98 + 0x20))();
            }
            FUN_01513554(&local_b0,&local_d0,uVar36 & ((int)uVar36 >> 0x1f ^ 0xffffffffU));
            plVar53 = local_1a8;
          }
          else {
            FUN_00f11e84(&local_b0,&local_d0,&local_88);
          }
          puVar32 = local_b0;
          local_100 = (long *)0x0;
          local_f8 = 1;
          local_f0 = (char *)CONCAT35(local_f0._5_3_,0x10101);
          local_e8 = (ulong *)CONCAT44(local_e8._4_4_,0x3fc00000);
          if (local_b0 != (ulong *)0x0) {
            puVar47 = local_b0 + 5;
            do {
              uVar42 = *puVar47;
              cVar11 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(puVar47,0x10);
              if (bVar26) {
                *(int *)puVar47 = (int)uVar42 + 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if ((int)uVar42 == -1) goto LAB_0141f21c;
          }
          uVar42 = puVar56[0x23];
          *(undefined4 *)((long)puVar56 + 0xcc) = 0;
          *(undefined2 *)(puVar56 + 0x1a) = 0;
          *(undefined4 *)((long)puVar56 + 0xd4) = 0;
          *(undefined4 *)((long)puVar56 + 0xdc) = 0;
          FUN_0109c76c(puVar56,local_b0);
          if (*(char *)(uVar42 + 0x54) != '\0') {
            **(undefined2 **)(uVar42 + 0x30) = 0;
            *(undefined2 *)(uVar42 + 0x52) = 0;
          }
          FUN_0109c334(puVar56,uVar42,puVar32,0,0);
          plVar38 = (long *)puVar56[0x23];
          local_140 = plVar38;
          if (plVar38 == (long *)0x0) {
            FUN_02b32b68(&local_100,&local_140);
          }
          else {
            plVar1 = plVar38 + 5;
            do {
              lVar34 = *plVar1;
              cVar11 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar26) {
                *(int *)plVar1 = (int)lVar34 + 1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if ((int)lVar34 == -1) {
LAB_0141f21c:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
            FUN_02b32b68(&local_100,&local_140);
            if (plVar38 != (long *)0x0) {
              plVar53 = plVar38 + 5;
              do {
                lVar34 = *plVar53;
                iVar28 = (int)lVar34 + -1;
                cVar11 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar53,0x10);
                if (bVar26) {
                  *(int *)plVar53 = iVar28;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (iVar28 == 0) {
                (**(code **)(*plVar38 + 0x10))(plVar38);
                plVar53 = local_1a8;
              }
              else {
                plVar53 = local_1a8;
                if ((int)lVar34 == 0) goto LAB_0141ec18;
              }
            }
          }
          puVar47 = puVar32 + 5;
          do {
            uVar42 = *puVar47;
            iVar28 = (int)uVar42 + -1;
            cVar11 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(puVar47,0x10);
            if (bVar26) {
              *(int *)puVar47 = iVar28;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar28 == 0) {
            (**(code **)(*puVar32 + 0x10))(puVar32);
          }
          else if ((int)uVar42 == 0) goto LAB_0141ec18;
          local_b0 = (ulong *)0xc77fdaa2ff3e5d3e;
          local_a8 = "StreamText";
          local_a0 = (undefined1 *)0xa;
          local_98 = (ulong *)0x0;
          uVar27 = FUN_0141f968(param_2,&local_b0);
          local_f0._0_3_ = CONCAT12((uVar27 & 0xff) == 0 || 0xff < uVar27,(undefined2)local_f0);
          if (local_98 != (ulong *)0x0) {
            (**(code **)(*local_98 + 0x20))();
          }
          local_f0 = (char *)((ulong)local_f0 & 0xffffffffffff0000);
          local_b0 = (ulong *)0x2ff0d39da79c1a86;
          local_a8 = "IsUserInput";
          local_a0 = (undefined1 *)0xb;
          local_98 = (ulong *)0x0;
          uVar27 = FUN_0141f968(param_2,&local_b0);
          if (local_98 != (ulong *)0x0) {
            (**(code **)(*local_98 + 0x20))();
          }
          puVar14 = PTR_DAT_047d6528;
          local_150 = (undefined8 *)0x0;
          uStack_148 = 0;
          local_f8 = CONCAT44(local_f8._4_4_,(uint)((uVar27 & 0xff) != 0 && 0xff < uVar27));
          if ((local_138 != (ulong *)0x0) &&
             (puVar29 = (undefined8 *)local_138[1], puVar29 != (undefined8 *)0x0)) {
            if (((*PTR_DAT_047d6520 & 1) == 0) &&
               (iVar28 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar28 != 0)) {
              uVar30 = FUN_0151c130();
              *(undefined8 *)puVar14 = uVar30;
              __cxa_guard_release(PTR_DAT_047d6520);
            }
            do {
              if (puVar29 == (undefined8 *)puVar14) {
                FUN_00d7c390(&local_150,&local_138);
                break;
              }
              puVar29 = (undefined8 *)*puVar29;
            } while (puVar29 != (undefined8 *)0x0);
          }
          FUN_011c9a24(&local_e0,&local_150,&local_128);
          puVar29 = local_150;
          if (local_150 != (undefined8 *)0x0) {
            psVar2 = (short *)(local_150 + 3);
            do {
              sVar44 = *psVar2;
              cVar11 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar26) {
                *psVar2 = sVar44 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            plVar53 = local_1a8;
            if (sVar44 == 1) {
              piVar41 = (int *)((long)local_150 + 0x1c);
              do {
                iVar28 = *piVar41;
                cVar11 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(piVar41,0x10);
                if (bVar26) {
                  *piVar41 = -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (iVar28 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar28 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar28 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar34 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar34;
                local_b0 = (ulong *)*puVar29;
                FUN_00c44438(lVar34 + 0x8040,&local_b0);
                plVar53 = local_1a8;
              }
            }
            else if (sVar44 == 0) goto LAB_0141e154;
          }
          if (local_e0 != (ulong *)0x0) {
            if (*(short *)((long)local_e0 + 0x1a) != 0) {
              if (local_e0 == (ulong *)0x0) goto LAB_0141d6d8;
              if (*(short *)((long)local_e0 + 0x1a) != 0) {
                psVar2 = (short *)((long)local_e0 + 0x1a);
                sVar44 = *(short *)((long)local_e0 + 0x1a);
                do {
                  sVar10 = *psVar2;
                  if (sVar10 == sVar44) {
                    cVar11 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                    if (bVar26) {
                      *psVar2 = sVar44 + 1;
                      cVar11 = ExclusiveMonitorsStatus();
                    }
                    if (cVar11 != '\0') goto LAB_0141e118;
                    bVar26 = true;
                  }
                  else {
                    ClearExclusiveLocal();
LAB_0141e118:
                    bVar26 = false;
                  }
                  plVar53 = local_1a8;
                  if (bVar26) {
                    uVar42 = local_e0[2];
                    plVar38 = (long *)(uVar42 - 0x28);
                    if (uVar42 != 0) {
                      if ((uVar35 & 0xfffffffe) != 2) goto LAB_0141eed8;
                      local_160 = (ulong *)0x0;
                      uStack_158 = 0;
                      if ((local_138 == (ulong *)0x0) ||
                         (puVar29 = (undefined8 *)local_138[1], puVar29 == (undefined8 *)0x0))
                      goto LAB_0141e778;
                      if (((*PTR_DAT_047d6520 & 1) == 0) &&
                         (iVar28 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar28 != 0)) {
                        uVar30 = FUN_0151c130();
                        *(undefined8 *)PTR_DAT_047d6528 = uVar30;
                        __cxa_guard_release(PTR_DAT_047d6520);
                      }
                      goto LAB_0141e6c8;
                    }
                    break;
                  }
                  sVar44 = sVar10;
                } while (sVar10 != 0);
              }
            }
LAB_0141e128:
            puVar49 = local_e0;
            if (local_e0 != (ulong *)0x0) {
              puVar8 = local_e0 + 3;
              do {
                sVar44 = (short)*puVar8;
                cVar11 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(puVar8,0x10);
                if (bVar26) {
                  *(short *)puVar8 = sVar44 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              plVar53 = local_1a8;
              if (sVar44 == 1) {
                piVar41 = (int *)((long)local_e0 + 0x1c);
                do {
                  iVar28 = *piVar41;
                  cVar11 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(piVar41,0x10);
                  if (bVar26) {
                    *piVar41 = -1;
                    cVar11 = ExclusiveMonitorsStatus();
                  }
                } while (cVar11 != '\0');
                if (iVar28 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar28 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar28 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar37 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar37;
                  local_120 = *puVar49;
                  FUN_00c44438(lVar37 + 0x8040,&local_120);
                  plVar53 = local_1a8;
                }
              }
              else if (sVar44 == 0) goto LAB_0141e154;
            }
          }
LAB_0141d6d8:
          if (local_100 != (long *)0x0) {
            plVar53 = local_100 + 5;
            do {
              lVar37 = *plVar53;
              iVar28 = (int)lVar37 + -1;
              cVar11 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(plVar53,0x10);
              if (bVar26) {
                *(int *)plVar53 = iVar28;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (iVar28 == 0) {
              (**(code **)(*local_100 + 0x10))();
              plVar53 = local_1a8;
            }
            else {
              plVar53 = local_1a8;
              if ((int)lVar37 == 0) goto LAB_0141ec18;
            }
          }
          if (puVar32 != (ulong *)0x0) {
            do {
              uVar42 = *puVar47;
              iVar28 = (int)uVar42 + -1;
              cVar11 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(puVar47,0x10);
              if (bVar26) {
                *(int *)puVar47 = iVar28;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (iVar28 == 0) {
              (**(code **)(*puVar32 + 0x10))(puVar32);
              plVar53 = local_1a8;
            }
            else {
              plVar53 = local_1a8;
              if ((int)uVar42 == 0) {
LAB_0141ec18:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint32_t>::max()",
                           "DecrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                           ,0x58,"Reference counter underflows.");
              }
            }
          }
          if (local_b8 != (ulong *)0x0) {
            (**(code **)(*local_b8 + 0x20))();
          }
          if (local_70 != (ulong *)0x0) {
            (**(code **)(*local_70 + 0x20))();
          }
        }
        if (plVar53 != (long *)0x0) {
          (**(code **)(*plVar53 + 0x20))(plVar53);
        }
      }
      if (plVar45 != (long *)0x0) {
        (**(code **)(*plVar45 + 0x60))();
      }
    }
    puVar32 = local_138;
    if (local_138 != (ulong *)0x0) {
      puVar47 = local_138 + 3;
      do {
        sVar44 = (short)*puVar47;
        cVar11 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(puVar47,0x10);
        if (bVar26) {
          *(short *)puVar47 = sVar44 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (sVar44 == 1) {
        piVar41 = (int *)((long)local_138 + 0x1c);
        do {
          iVar28 = *piVar41;
          cVar11 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar41,0x10);
          if (bVar26) {
            *piVar41 = -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar28 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar28 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar28 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar37 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar37;
          local_88 = (char *)*puVar32;
          FUN_00c44438(lVar37 + 0x8040,&local_88);
        }
      }
      else if (sVar44 == 0) {
LAB_0141e154:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  if (local_128 != (ulong *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
  if (puVar56 != (ulong *)0x0) {
    uVar42 = puVar56[6];
    psVar2 = (short *)(uVar42 + 0x1a);
    do {
      sVar44 = *psVar2;
      cVar11 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar26) {
        *psVar2 = sVar44 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (sVar44 == 1) {
      *(undefined8 *)(uVar42 + 0x10) = 0;
      (**(code **)(*puVar56 + 0x50))(puVar56);
    }
    else if (sVar44 == 0) {
LAB_0141f0f0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar20 = local_190;
  puVar8 = local_1a0;
  puVar49 = local_1b0;
  puVar47 = local_1b8;
  puVar32 = local_1c0;
  puVar56 = local_1c8;
  if (puVar25 != (ulong *)0x0) {
    (**(code **)(*puVar25 + 0x20))(puVar25);
  }
  if (puVar21 != (ulong *)0x0) {
    (**(code **)(*puVar21 + 0x20))(puVar21);
  }
  if (puVar24 != (ulong *)0x0) {
    (**(code **)(*puVar24 + 0x20))(puVar24);
  }
  if (puVar23 != (ulong *)0x0) {
    (**(code **)(*puVar23 + 0x20))(puVar23);
  }
  if (local_198 != (ulong *)0x0) {
    (**(code **)(*local_198 + 0x20))();
  }
  if (local_188 != (ulong *)0x0) {
    (**(code **)(*local_188 + 0x20))();
  }
  if (puVar22 != (ulong *)0x0) {
    (**(code **)(*puVar22 + 0x20))(puVar22);
  }
  if (puVar56 != (ulong *)0x0) {
    (**(code **)(*puVar56 + 0x20))(puVar56);
  }
  if (puVar32 != (ulong *)0x0) {
    (**(code **)(*puVar32 + 0x20))(puVar32);
  }
  if (puVar47 != (ulong *)0x0) {
    (**(code **)(*puVar47 + 0x20))(puVar47);
  }
  if (puVar49 != (ulong *)0x0) {
    (**(code **)(*puVar49 + 0x20))(puVar49);
  }
  if (puVar8 != (ulong *)0x0) {
    (**(code **)(*puVar8 + 0x20))(puVar8);
  }
  if (puVar20 != (ulong *)0x0) {
    (**(code **)(*puVar20 + 0x20))(puVar20);
  }
  return;
LAB_0141ca28:
  if ((char)plVar45[6] != '\0') {
    return;
  }
  goto LAB_0141ca50;
  while (puVar29 = (undefined8 *)*puVar29, puVar29 != (undefined8 *)0x0) {
LAB_0141e6c8:
    if (puVar29 == (undefined8 *)PTR_DAT_047d6528) {
      FUN_00d7c390(&local_160,&local_138);
      break;
    }
  }
LAB_0141e778:
  FUN_013fad00(&local_b0,&local_160);
  puVar49 = local_160;
  if (local_160 != (ulong *)0x0) {
    puVar8 = local_160 + 3;
    do {
      sVar44 = (short)*puVar8;
      cVar11 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar26) {
        *(short *)puVar8 = sVar44 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (sVar44 == 1) {
      piVar41 = (int *)((long)local_160 + 0x1c);
      do {
        iVar28 = *piVar41;
        cVar11 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar41,0x10);
        if (bVar26) {
          *piVar41 = -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar28 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar28 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar28 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar34 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar34;
        local_120 = *puVar49;
        FUN_00c44438(lVar34 + 0x8040,&local_120);
      }
    }
    else if (sVar44 == 0) goto LAB_0141e154;
  }
  puVar8 = local_1b0;
  puVar49 = (ulong *)PTR_DAT_047d8b70;
  if (local_1b0 != (ulong *)0x0) {
    puVar49 = local_1b0 + 6;
  }
  local_120 = *puVar49;
  puVar49 = (ulong *)PTR_PTR_047d4508;
  if (local_1b0 != (ulong *)0x0) {
    puVar49 = local_1b0 + 7;
  }
  local_118 = (char *)*puVar49;
  if (local_1b0 == (ulong *)0x0) {
    local_110 = (char *)0x0;
  }
  else {
    local_110 = (char *)local_1b0[8];
  }
  local_108 = (ulong *)0x0;
  puVar49 = (ulong *)0x0;
  if (local_1b0 != (ulong *)0x0) {
    (**(code **)(*local_1b0 + 0x18))(local_1b0);
    puVar49 = puVar8;
  }
  local_108 = puVar49;
  FUN_02702a08(&local_b0,&local_120,1);
  if (local_108 != (ulong *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  ppuVar6 = &local_1b0;
  if (uVar35 != 2) {
    ppuVar6 = &local_1b8;
  }
  puVar49 = *ppuVar6;
  puVar8 = (ulong *)PTR_DAT_047d8b70;
  if (puVar49 != (ulong *)0x0) {
    puVar8 = puVar49 + 6;
  }
  uVar48 = *puVar8;
  puVar8 = (ulong *)PTR_PTR_047d4508;
  if (puVar49 != (ulong *)0x0) {
    puVar8 = puVar49 + 7;
  }
  uVar52 = *puVar8;
  if (puVar49 == (ulong *)0x0) {
    uVar54 = 0;
  }
  else {
    uVar54 = puVar49[8];
    (**(code **)(*puVar49 + 0x18))(puVar49);
  }
  *(ulong *)(uVar42 + 0x180) = uVar48;
  *(ulong *)(uVar42 + 0x188) = uVar52;
  *(ulong *)(uVar42 + 400) = uVar54;
  if (puVar49 != (ulong *)0x0) {
    (**(code **)(*puVar49 + 0x18))(puVar49);
  }
  plVar53 = *(long **)(uVar42 + 0x198);
  *(ulong **)(uVar42 + 0x198) = puVar49;
  if (plVar53 != (long *)0x0) {
    (**(code **)(*plVar53 + 0x20))();
  }
  if (puVar49 != (ulong *)0x0) {
    (**(code **)(*puVar49 + 0x20))(puVar49);
  }
  ppuVar6 = &local_1c0;
  if (uVar35 != 2) {
    ppuVar6 = &local_1c8;
  }
  puVar49 = *ppuVar6;
  puVar8 = (ulong *)PTR_DAT_047d8b70;
  if (puVar49 != (ulong *)0x0) {
    puVar8 = puVar49 + 6;
  }
  uVar48 = *puVar8;
  puVar8 = (ulong *)PTR_PTR_047d4508;
  if (puVar49 != (ulong *)0x0) {
    puVar8 = puVar49 + 7;
  }
  uVar52 = *puVar8;
  if (puVar49 == (ulong *)0x0) {
    uVar54 = 0;
  }
  else {
    uVar54 = puVar49[8];
    (**(code **)(*puVar49 + 0x18))(puVar49);
  }
  *(ulong *)(uVar42 + 0x1a0) = uVar48;
  *(ulong *)(uVar42 + 0x1a8) = uVar52;
  *(ulong *)(uVar42 + 0x1b0) = uVar54;
  if (puVar49 != (ulong *)0x0) {
    (**(code **)(*puVar49 + 0x18))(puVar49);
  }
  plVar53 = *(long **)(uVar42 + 0x1b8);
  *(ulong **)(uVar42 + 0x1b8) = puVar49;
  if (plVar53 != (long *)0x0) {
    (**(code **)(*plVar53 + 0x20))();
  }
  if (puVar49 != (ulong *)0x0) {
    (**(code **)(*puVar49 + 0x20))(puVar49);
  }
  puVar49 = (ulong *)PTR_DAT_047d8b70;
  if (puVar22 != (ulong *)0x0) {
    puVar49 = puVar22 + 6;
  }
  local_120 = *puVar49;
  puVar49 = (ulong *)PTR_PTR_047d4508;
  if (puVar22 != (ulong *)0x0) {
    puVar49 = puVar22 + 7;
  }
  local_118 = (char *)*puVar49;
  if (puVar22 == (ulong *)0x0) {
    local_110 = (char *)0x0;
  }
  else {
    local_110 = (char *)puVar22[8];
  }
  local_108 = (ulong *)0x0;
  puVar49 = (ulong *)0x0;
  if (puVar22 != (ulong *)0x0) {
    (**(code **)(*puVar22 + 0x18))(puVar22);
    puVar49 = puVar22;
  }
  uVar57 = 0x3f800000;
  if (uVar35 != 3) {
    uVar57 = 0;
  }
  local_108 = puVar49;
  FUN_02702868(uVar57,&local_b0,&local_120);
  if (local_108 != (ulong *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  if (puVar32 != (ulong *)0x0) {
    do {
      uVar48 = *puVar47;
      cVar11 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(puVar47,0x10);
      if (bVar26) {
        *(int *)puVar47 = (int)uVar48 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if ((int)uVar48 == -1) goto LAB_0141f21c;
  }
  iVar28 = FUN_01497a08(puVar32[6]);
  do {
    uVar48 = *puVar47;
    iVar12 = (int)uVar48 + -1;
    cVar11 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(puVar47,0x10);
    if (bVar26) {
      *(int *)puVar47 = iVar12;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*puVar32 + 0x10))(puVar32);
    if (-1 < iVar28) goto LAB_0141ea00;
LAB_0141ee24:
    puVar49 = (ulong *)PTR_DAT_047d8b70;
    if (puVar21 != (ulong *)0x0) {
      puVar49 = puVar21 + 6;
    }
    local_120 = *puVar49;
    puVar49 = (ulong *)PTR_PTR_047d4508;
    if (puVar21 != (ulong *)0x0) {
      puVar49 = puVar21 + 7;
    }
    local_118 = (char *)*puVar49;
    if (puVar21 == (ulong *)0x0) {
      local_110 = (char *)0x0;
    }
    else {
      local_110 = (char *)puVar21[8];
    }
    local_108 = (ulong *)0x0;
    puVar49 = (ulong *)0x0;
    if (puVar21 != (ulong *)0x0) {
      (**(code **)(*puVar21 + 0x18))(puVar21);
      puVar49 = puVar21;
    }
    local_108 = puVar49;
    FUN_02702868(0,&local_b0,&local_120);
    if (local_108 != (ulong *)0x0) {
      pcVar39 = *(code **)(*local_108 + 0x20);
      goto LAB_0141f144;
    }
  }
  else {
    if ((int)uVar48 == 0) goto LAB_0141ec18;
    if (iVar28 < 0) goto LAB_0141ee24;
LAB_0141ea00:
    puVar49 = (ulong *)PTR_DAT_047d8b70;
    if (puVar21 != (ulong *)0x0) {
      puVar49 = puVar21 + 6;
    }
    local_120 = *puVar49;
    puVar49 = (ulong *)PTR_PTR_047d4508;
    if (puVar21 != (ulong *)0x0) {
      puVar49 = puVar21 + 7;
    }
    local_118 = (char *)*puVar49;
    if (puVar21 == (ulong *)0x0) {
      local_110 = (char *)0x0;
    }
    else {
      local_110 = (char *)puVar21[8];
    }
    local_108 = (ulong *)0x0;
    puVar49 = (ulong *)0x0;
    if (puVar21 != (ulong *)0x0) {
      (**(code **)(*puVar21 + 0x18))(puVar21);
      puVar49 = puVar21;
    }
    local_108 = puVar49;
    FUN_02702868(0x3f800000,&local_b0,&local_120);
    if (local_108 != (ulong *)0x0) {
      (**(code **)(*local_108 + 0x20))();
    }
    local_120 = 0xdb0fe9bdbd4d5852;
    local_118 = "namelist";
    local_110 = (char *)0x8;
    local_108 = (ulong *)0x0;
    FUN_01513554(&local_168,&local_120,iVar28);
    local_178 = (ulong *)0x0;
    uStack_170 = 0;
    if ((local_138 != (ulong *)0x0) &&
       (puVar29 = (undefined8 *)local_138[1], puVar29 != (undefined8 *)0x0)) {
      if (((*PTR_DAT_047d6520 & 1) == 0) &&
         (iVar28 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar28 != 0)) {
        uVar30 = FUN_0151c130();
        *(undefined8 *)PTR_DAT_047d6528 = uVar30;
        __cxa_guard_release(PTR_DAT_047d6520);
      }
      do {
        if (puVar29 == (undefined8 *)PTR_DAT_047d6528) {
          FUN_00d7c390(&local_178,&local_138);
          break;
        }
        puVar29 = (undefined8 *)*puVar29;
      } while (puVar29 != (undefined8 *)0x0);
    }
    puVar49 = (ulong *)PTR_DAT_047d8b70;
    if (puVar25 != (ulong *)0x0) {
      puVar49 = puVar25 + 6;
    }
    local_120 = *puVar49;
    puVar49 = (ulong *)PTR_PTR_047d4508;
    if (puVar25 != (ulong *)0x0) {
      puVar49 = puVar25 + 7;
    }
    local_118 = (char *)*puVar49;
    if (puVar25 == (ulong *)0x0) {
      local_110 = (char *)0x0;
    }
    else {
      local_110 = (char *)puVar25[8];
    }
    local_108 = (ulong *)0x0;
    puVar49 = (ulong *)0x0;
    if (puVar25 != (ulong *)0x0) {
      (**(code **)(*puVar25 + 0x18))(puVar25);
      puVar49 = puVar25;
    }
    local_180 = local_168;
    local_108 = puVar49;
    if (local_168 != (long *)0x0) {
      plVar53 = local_168 + 5;
      do {
        lVar34 = *plVar53;
        cVar11 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar53,0x10);
        if (bVar26) {
          *(int *)plVar53 = (int)lVar34 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if ((int)lVar34 == -1) goto LAB_0141f21c;
    }
    FUN_0111d018(&local_178,&local_120,&local_180);
    if (local_180 != (long *)0x0) {
      plVar53 = local_180 + 5;
      do {
        lVar34 = *plVar53;
        iVar28 = (int)lVar34 + -1;
        cVar11 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar53,0x10);
        if (bVar26) {
          *(int *)plVar53 = iVar28;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar28 == 0) {
        (**(code **)(*local_180 + 0x10))();
      }
      else if ((int)lVar34 == 0) goto LAB_0141ec18;
    }
    if (local_108 != (ulong *)0x0) {
      (**(code **)(*local_108 + 0x20))();
    }
    puVar49 = local_178;
    if (local_178 != (ulong *)0x0) {
      puVar8 = local_178 + 3;
      do {
        sVar44 = (short)*puVar8;
        cVar11 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar26) {
          *(short *)puVar8 = sVar44 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (sVar44 == 1) {
        piVar41 = (int *)((long)local_178 + 0x1c);
        do {
          iVar28 = *piVar41;
          cVar11 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar41,0x10);
          if (bVar26) {
            *piVar41 = -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (iVar28 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar28 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar28 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar34 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar34;
          local_120 = *puVar49;
          FUN_00c44438(lVar34 + 0x8040,&local_120);
        }
      }
      else if (sVar44 == 0) goto LAB_0141e154;
    }
    if (local_168 != (long *)0x0) {
      plVar53 = local_168 + 5;
      do {
        lVar34 = *plVar53;
        iVar28 = (int)lVar34 + -1;
        cVar11 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar53,0x10);
        if (bVar26) {
          *(int *)plVar53 = iVar28;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar28 == 0) {
        pcVar39 = *(code **)(*local_168 + 0x10);
LAB_0141f144:
        (*pcVar39)();
      }
      else if ((int)lVar34 == 0) goto LAB_0141ec18;
    }
  }
  puVar49 = local_98;
  if (local_98 != (ulong *)0x0) {
    puVar8 = local_98 + 3;
    do {
      sVar44 = (short)*puVar8;
      cVar11 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar26) {
        *(short *)puVar8 = sVar44 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (sVar44 == 1) {
      piVar41 = (int *)((long)local_98 + 0x1c);
      do {
        iVar28 = *piVar41;
        cVar11 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar41,0x10);
        if (bVar26) {
          *piVar41 = -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar28 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar28 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar28 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar34 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar34;
        local_120 = *puVar49;
        FUN_00c44438(lVar34 + 0x8040,&local_120);
      }
    }
    else if (sVar44 == 0) goto LAB_0141e154;
  }
  nn::os::FinalizeLightEvent((LightEventType *)&local_a8);
LAB_0141eed8:
  local_b0 = (ulong *)0x84afc2f09582cf2f;
  local_a8 = "MessageSpeed";
  local_a0 = (undefined1 *)0xc;
  local_98 = (ulong *)0x0;
  uVar48 = FUN_01470908(param_2,&local_b0);
  uVar57 = 0;
  if ((uVar48 & 0xff) != 0) {
    uVar57 = (undefined4)(uVar48 >> 0x20);
  }
  FUN_02158200(plVar38,uVar57);
  if (local_98 != (ulong *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  local_b0 = (ulong *)0x8f04cd84560e289e;
  local_a8 = "NotOpenWindow";
  local_a0 = (undefined1 *)0xd;
  local_98 = (ulong *)0x0;
  uVar27 = FUN_0141f968(param_2,&local_b0);
  if (local_98 != (ulong *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if ((uVar27 & 0xff) == 0 || uVar27 < 0x100) {
    plVar53 = (long *)(uVar42 + 200);
    lVar34 = nn::os::GetCurrentThread();
    do {
      if (*plVar53 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(uVar42 + 0xd0));
          while (*plVar53 == 0) {
            cVar11 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar53,0x10);
            if (bVar26) {
              *plVar53 = lVar34;
              cVar11 = ExclusiveMonitorsStatus();
            }
            if (cVar11 == '\0') goto LAB_0141ef94;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar11 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar53,0x10);
      if (bVar26) {
        *plVar53 = lVar34;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
LAB_0141ef94:
    if (*(int *)(uVar42 + 0x2c0) == 0) {
      *(undefined4 *)(uVar42 + 0x2c0) = 1;
    }
    *(undefined8 *)(uVar42 + 200) = 0;
    nn::os::SignalLightEvent((LightEventType *)(uVar42 + 0xd0));
  }
  FUN_01514abc(plVar38,&local_100);
  FUN_0129e8c0(lVar37);
  if (uVar35 - 2 < 3) {
    plVar53 = (long *)(**(code **)plVar45[5])(plVar45 + 5);
    if (((*PTR_DAT_047d6520 & 1) == 0) &&
       (iVar28 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar28 != 0)) {
      uVar30 = FUN_0151c130();
      *(undefined8 *)PTR_DAT_047d6528 = uVar30;
      __cxa_guard_release(PTR_DAT_047d6520);
    }
    for (; plVar53 != (long *)0x0; plVar53 = (long *)*plVar53) {
      if (plVar53 == (long *)PTR_DAT_047d6528) {
        FUN_00f740a4(plVar45);
        break;
      }
    }
  }
  local_168 = (long *)0x54adff1e82350638;
  local_b0 = (ulong *)0x0;
  local_a8 = (char *)0x0;
  FUN_0111db28(&local_b0,&local_e0);
  puVar29 = (undefined8 *)FUN_01235878(param_2 + 0x158,&local_168);
  FUN_0111db28(puVar29 + 2,&local_b0);
  puVar49 = local_b0;
  *puVar29 = FUN_02b21914;
  if (local_b0 != (ulong *)0x0) {
    puVar8 = local_b0 + 3;
    do {
      sVar44 = (short)*puVar8;
      cVar11 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar26) {
        *(short *)puVar8 = sVar44 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (sVar44 == 1) {
      piVar41 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar28 = *piVar41;
        cVar11 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(piVar41,0x10);
        if (bVar26) {
          *piVar41 = -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar28 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar28 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar28 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar37 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar37;
        local_120 = *puVar49;
        FUN_00c44438(lVar37 + 0x8040,&local_120);
      }
    }
    else if (sVar44 == 0) goto LAB_0141e154;
  }
  lVar37 = *(long *)(uVar42 + 8);
  psVar2 = (short *)(lVar37 + 0x1a);
  do {
    sVar44 = *psVar2;
    cVar11 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar26) {
      *psVar2 = sVar44 + -1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if (sVar44 == 1) {
    *(undefined8 *)(lVar37 + 0x10) = 0;
    (**(code **)(*plVar38 + 0x50))(plVar38);
    plVar53 = local_1a8;
  }
  else {
    plVar53 = local_1a8;
    if (sVar44 == 0) goto LAB_0141f0f0;
  }
  goto LAB_0141e128;
}


