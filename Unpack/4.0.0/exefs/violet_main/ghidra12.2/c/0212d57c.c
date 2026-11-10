/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0212d57c; name: FUN_0212d57c
 */


void FUN_0212d57c(undefined8 param_1,long *param_2,long param_3)

{
  long **pplVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long **pplVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long **pplVar18;
  long **local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  long *local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  long *local_138;
  long *local_130 [4];
  char *pcStack_110;
  undefined8 local_108;
  long *local_100;
  long *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  long *local_e0;
  long *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  long *local_c0;
  long *local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  long *plStack_78;
  long **local_68;
  
  local_138 = (long *)0x8b122487cf66ea75;
  local_130[0] = (long *)0x3c35f11;
  local_130[1] = (long *)0xe;
  local_130[2] = (long *)0x0;
  local_130[3] = (long *)0x6474aae35d54c34c;
  pcStack_110 = "TreeNear:End";
  local_108 = 0xc;
  local_100 = (long *)0x0;
  local_f8 = (long *)0xcb9b664a303c681d;
  pcStack_f0 = "GrassNear:Start";
  local_e8 = 0xf;
  local_e0 = (long *)0x0;
  local_190 = &local_138;
  local_d8 = (long *)0x2d927685be30d0e4;
  pcStack_d0 = "GrassNear:End";
  local_b8 = (long *)0xf245bfbc32da7760;
  pcStack_b0 = "TreeFar:Start";
  local_c8 = 0xd;
  local_c0 = (long *)0x0;
  local_a8 = 0xd;
  local_a0 = (long *)0x0;
  local_98 = (long *)0x3ee668ae7aea2981;
  pcStack_90 = "TreeFar:End";
  local_88 = 0xb;
  local_80 = (long *)0x0;
  local_160 = *(undefined8 *)(*param_2 + 8);
  local_170 = &local_168;
  uStack_158 = 0x3ffffffffffffff;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_168 = 0;
  lVar9 = FUN_0212be14(&local_170,&local_138,&local_190);
  *(undefined8 *)(lVar9 + 0x40) = 0x49e043f7c831bf1c;
  *(char **)(lVar9 + 0x48) = "WorldInstanceFadeNearStart";
  *(undefined8 *)(lVar9 + 0x50) = 0x1a;
  plVar10 = *(long **)(lVar9 + 0x58);
  *(undefined8 *)(lVar9 + 0x58) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(undefined8 *)(lVar9 + 0x58) = 0;
  local_190 = local_130 + 3;
  lVar9 = FUN_0212be14(&local_170,local_130 + 3,&local_190);
  *(undefined8 *)(lVar9 + 0x40) = 0x249cc2805586b665;
  *(char **)(lVar9 + 0x48) = "WorldInstanceFadeNearEnd";
  *(undefined8 *)(lVar9 + 0x50) = 0x18;
  plVar10 = *(long **)(lVar9 + 0x58);
  *(undefined8 *)(lVar9 + 0x58) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(undefined8 *)(lVar9 + 0x58) = 0;
  local_190 = local_130 + 7;
  lVar9 = FUN_0212be14(&local_170,local_130 + 7,&local_190);
  *(undefined8 *)(lVar9 + 0x40) = 0x900b8d8d3691fc09;
  *(char **)(lVar9 + 0x48) = "DetailInstanceFadeNearStart";
  *(undefined8 *)(lVar9 + 0x50) = 0x1b;
  plVar10 = *(long **)(lVar9 + 0x58);
  *(undefined8 *)(lVar9 + 0x58) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(undefined8 *)(lVar9 + 0x58) = 0;
  local_190 = local_130 + 0xb;
  lVar9 = FUN_0212be14(&local_170,local_130 + 0xb,&local_190);
  *(undefined8 *)(lVar9 + 0x40) = 0x812d60652befb5f8;
  *(char **)(lVar9 + 0x48) = "DetailInstanceFadeNearEnd";
  *(undefined8 *)(lVar9 + 0x50) = 0x19;
  plVar10 = *(long **)(lVar9 + 0x58);
  *(undefined8 *)(lVar9 + 0x58) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(undefined8 *)(lVar9 + 0x58) = 0;
  local_190 = local_130 + 0xf;
  lVar9 = FUN_0212be14(&local_170,local_130 + 0xf,&local_190);
  *(undefined8 *)(lVar9 + 0x40) = 0xc5e5d8a7ea22b261;
  *(char **)(lVar9 + 0x48) = "WorldInstanceFadeFarStart";
  *(undefined8 *)(lVar9 + 0x50) = 0x19;
  plVar10 = *(long **)(lVar9 + 0x58);
  *(undefined8 *)(lVar9 + 0x58) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(undefined8 *)(lVar9 + 0x58) = 0;
  local_190 = &local_98;
  lVar9 = FUN_0212be14(&local_170,&local_98,&local_190);
  *(undefined8 *)(lVar9 + 0x40) = 0xd94a1e2d442e7240;
  *(char **)(lVar9 + 0x48) = "WorldInstanceFadeFarEnd";
  *(undefined8 *)(lVar9 + 0x50) = 0x17;
  plVar10 = *(long **)(lVar9 + 0x58);
  *(undefined8 *)(lVar9 + 0x58) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  puVar6 = PTR_DAT_047d8b70;
  puVar3 = PTR_DAT_047d4240;
  *(undefined8 *)(lVar9 + 0x58) = 0;
  puVar5 = PTR_DAT_047d4250;
  puVar4 = PTR_DAT_047d4248;
  pplVar18 = &local_138;
LAB_0212d8b0:
  plVar10 = pplVar18[1];
  local_68 = (long **)0x0;
  if ((char)*plVar10 == '\0') {
    pplVar12 = (long **)FUN_00d44228();
    if (pplVar12 != (long **)0x0) {
      (*(code *)(*pplVar12)[3])(pplVar12);
    }
  }
  else {
    if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar3), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,puVar4,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar3);
    }
    uVar11 = *(undefined8 *)puVar4;
    *(undefined8 *)puVar5 = uVar11;
    FUN_00cf9884(&local_190,uVar11,plVar10);
    pplVar12 = local_68;
    local_68 = (long **)0x0;
    if (pplVar12 != (long **)0x0) {
      (*(code *)(*pplVar12)[4])();
    }
    pplVar12 = local_190;
  }
  local_68 = pplVar12;
  FUN_0212c084(&local_190,&local_68);
  plVar10 = *(long **)(param_3 + 0x160);
  pplVar1 = (long **)puVar6;
  if (local_190 != (long **)0x0) {
    pplVar1 = local_190 + 6;
  }
  if (plVar10 == (long *)0x0) {
LAB_0212d9f4:
    bVar7 = false;
  }
  else {
    uVar14 = (long)plVar10 - ((ulong)plVar10 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    plVar13 = *pplVar1;
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      plVar15 = (long *)((long)plVar10 - 1U & (ulong)plVar13);
    }
    else {
      plVar15 = plVar13;
      if (plVar10 <= plVar13) {
        uVar2 = 0;
        if (plVar10 != (long *)0x0) {
          uVar2 = (ulong)plVar13 / (ulong)plVar10;
        }
        plVar15 = (long *)((long)plVar13 - uVar2 * (long)plVar10);
      }
    }
    plVar16 = *(long **)(*(long *)(param_3 + 0x158) + (long)plVar15 * 8);
    if ((plVar16 == (long *)0x0) || (plVar16 = (long *)*plVar16, plVar16 == (long *)0x0))
    goto LAB_0212d9f4;
    if (uVar14 < 2) {
      do {
        if ((long *)plVar16[1] == plVar13) {
          if ((long *)plVar16[2] == plVar13) goto LAB_0212dae4;
        }
        else if ((long *)((ulong)plVar16[1] & (long)plVar10 - 1U) != plVar15) goto LAB_0212d9f4;
        plVar16 = (long *)*plVar16;
        bVar7 = false;
      } while (plVar16 != (long *)0x0);
    }
    else {
      do {
        plVar17 = (long *)plVar16[1];
        if (plVar17 == plVar13) {
          if ((long *)plVar16[2] == plVar13) goto LAB_0212dae4;
        }
        else {
          if (plVar10 <= plVar17) {
            uVar14 = 0;
            if (plVar10 != (long *)0x0) {
              uVar14 = (ulong)plVar17 / (ulong)plVar10;
            }
            plVar17 = (long *)((long)plVar17 - uVar14 * (long)plVar10);
          }
          if (plVar17 != plVar15) goto LAB_0212d9f4;
        }
        plVar16 = (long *)*plVar16;
        bVar7 = false;
      } while (plVar16 != (long *)0x0);
    }
  }
  goto LAB_0212d9f8;
LAB_0212dae4:
  bVar7 = (char)plVar16[6] != '\0';
LAB_0212d9f8:
  if (local_190 != (long **)0x0) {
    (*(code *)(*local_190)[4])();
  }
  if (pplVar12 != (long **)0x0) {
    (*(code *)(*pplVar12)[4])(pplVar12);
  }
  if (bVar7) {
    local_190 = pplVar18;
    lVar9 = FUN_0212be14(&local_170,pplVar18,&local_190);
    local_190 = *(long ***)(lVar9 + 0x40);
    uStack_188 = *(undefined8 *)(lVar9 + 0x48);
    local_180 = *(undefined8 *)(lVar9 + 0x50);
    local_178 = *(long **)(lVar9 + 0x58);
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 0x18))();
    }
    FUN_0212dc50(param_1,param_3,pplVar18,&local_190);
    FUN_01f990fc(&local_190);
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 0x20))();
    }
  }
  pplVar18 = pplVar18 + 4;
  if (pplVar18 == &plStack_78) {
    FUN_0212bfcc(&local_170,local_168);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x20))();
    }
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
    if (local_100 != (long *)0x0) {
      (**(code **)(*local_100 + 0x20))();
    }
    if (local_130[2] != (long *)0x0) {
      (**(code **)(*local_130[2] + 0x20))();
    }
    return;
  }
  goto LAB_0212d8b0;
}


