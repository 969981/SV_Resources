/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0212ce34; name: FUN_0212ce34
 */


void FUN_0212ce34(long param_1,long param_2)

{
  ulong *puVar1;
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
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  char *pcVar18;
  long *local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  long local_138;
  char *local_130 [2];
  long *local_120;
  long local_118;
  char *pcStack_110;
  undefined8 local_108;
  long *local_100;
  long local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  long *local_e0;
  long local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  long *local_c0;
  long local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  long local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  long lStack_78;
  long *local_68;
  
  local_138 = -0x74eddb783099158b;
  local_130[0] = "TreeNear:Start";
  local_130[1] = (char *)0xe;
  local_120 = (long *)0x0;
  local_118 = 0x6474aae35d54c34c;
  pcStack_110 = "TreeNear:End";
  local_108 = 0xc;
  local_100 = (long *)0x0;
  local_f8 = -0x346499b5cfc397e3;
  pcStack_f0 = "GrassNear:Start";
  local_e8 = 0xf;
  local_e0 = (long *)0x0;
  local_d8 = 0x2d927685be30d0e4;
  pcStack_d0 = "GrassNear:End";
  local_b8 = -0xdba4043cd2588a0;
  pcStack_b0 = "TreeFar:Start";
  local_c8 = 0xd;
  local_c0 = (long *)0x0;
  local_a8 = 0xd;
  local_a0 = (long *)0x0;
  local_98 = 0x3ee668ae7aea2981;
  pcStack_90 = "TreeFar:End";
  local_68 = &local_138;
  local_88 = 0xb;
  local_80 = (long *)0x0;
  local_160 = *(undefined8 *)(param_2 + 8);
  local_170 = &local_168;
  uStack_158 = 0x3ffffffffffffff;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_168 = 0;
  lVar9 = FUN_0212be14(&local_170,&local_138,&local_68);
  *(undefined8 *)(lVar9 + 0x40) = 0x49e043f7c831bf1c;
  *(char **)(lVar9 + 0x48) = "WorldInstanceFadeNearStart";
  *(undefined8 *)(lVar9 + 0x50) = 0x1a;
  plVar10 = *(long **)(lVar9 + 0x58);
  *(undefined8 *)(lVar9 + 0x58) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(undefined8 *)(lVar9 + 0x58) = 0;
  local_68 = &local_118;
  lVar9 = FUN_0212be14(&local_170,&local_118,&local_68);
  *(undefined8 *)(lVar9 + 0x40) = 0x249cc2805586b665;
  *(char **)(lVar9 + 0x48) = "WorldInstanceFadeNearEnd";
  *(undefined8 *)(lVar9 + 0x50) = 0x18;
  plVar10 = *(long **)(lVar9 + 0x58);
  *(undefined8 *)(lVar9 + 0x58) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(undefined8 *)(lVar9 + 0x58) = 0;
  local_68 = &local_f8;
  lVar9 = FUN_0212be14(&local_170,&local_f8,&local_68);
  *(undefined8 *)(lVar9 + 0x40) = 0x900b8d8d3691fc09;
  *(char **)(lVar9 + 0x48) = "DetailInstanceFadeNearStart";
  *(undefined8 *)(lVar9 + 0x50) = 0x1b;
  plVar10 = *(long **)(lVar9 + 0x58);
  *(undefined8 *)(lVar9 + 0x58) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(undefined8 *)(lVar9 + 0x58) = 0;
  local_68 = &local_d8;
  lVar9 = FUN_0212be14(&local_170,&local_d8,&local_68);
  *(undefined8 *)(lVar9 + 0x40) = 0x812d60652befb5f8;
  *(char **)(lVar9 + 0x48) = "DetailInstanceFadeNearEnd";
  *(undefined8 *)(lVar9 + 0x50) = 0x19;
  plVar10 = *(long **)(lVar9 + 0x58);
  *(undefined8 *)(lVar9 + 0x58) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(undefined8 *)(lVar9 + 0x58) = 0;
  local_68 = &local_b8;
  lVar9 = FUN_0212be14(&local_170,&local_b8,&local_68);
  *(undefined8 *)(lVar9 + 0x40) = 0xc5e5d8a7ea22b261;
  *(char **)(lVar9 + 0x48) = "WorldInstanceFadeFarStart";
  *(undefined8 *)(lVar9 + 0x50) = 0x19;
  plVar10 = *(long **)(lVar9 + 0x58);
  *(undefined8 *)(lVar9 + 0x58) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(undefined8 *)(lVar9 + 0x58) = 0;
  local_68 = &local_98;
  lVar9 = FUN_0212be14(&local_170,&local_98,&local_68);
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
  plVar10 = &local_138;
LAB_0212d160:
  pcVar18 = (char *)plVar10[1];
  local_178 = (long *)0x0;
  if (*pcVar18 == '\0') {
    plVar12 = (long *)FUN_00d44228();
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  else {
    if (((*puVar3 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar3), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,puVar4,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar3);
    }
    uVar11 = *(undefined8 *)puVar4;
    *(undefined8 *)puVar5 = uVar11;
    FUN_00cf9884(&local_68,uVar11,pcVar18);
    plVar12 = local_178;
    local_178 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    plVar12 = local_68;
  }
  local_178 = plVar12;
  FUN_0212c084(&local_68,&local_178);
  uVar14 = *(ulong *)(param_1 + 0x160);
  puVar1 = (ulong *)puVar6;
  if (local_68 != (long *)0x0) {
    puVar1 = (ulong *)(local_68 + 6);
  }
  if (uVar14 == 0) {
LAB_0212d2a4:
    bVar7 = false;
  }
  else {
    uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar13 = *puVar1;
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar14 - 1 & uVar13;
    }
    else {
      uVar16 = uVar13;
      if (uVar14 <= uVar13) {
        uVar16 = 0;
        if (uVar14 != 0) {
          uVar16 = uVar13 / uVar14;
        }
        uVar16 = uVar13 - uVar16 * uVar14;
      }
    }
    plVar17 = *(long **)(*(long *)(param_1 + 0x158) + uVar16 * 8);
    if ((plVar17 == (long *)0x0) || (plVar17 = (long *)*plVar17, plVar17 == (long *)0x0))
    goto LAB_0212d2a4;
    if (uVar15 < 2) {
      do {
        if (plVar17[1] == uVar13) {
          if (plVar17[2] == uVar13) goto LAB_0212d368;
        }
        else if ((plVar17[1] & uVar14 - 1) != uVar16) goto LAB_0212d2a4;
        plVar17 = (long *)*plVar17;
        bVar7 = false;
      } while (plVar17 != (long *)0x0);
    }
    else {
      do {
        uVar15 = plVar17[1];
        if (uVar15 == uVar13) {
          if (plVar17[2] == uVar13) goto LAB_0212d368;
        }
        else {
          if (uVar14 <= uVar15) {
            uVar2 = 0;
            if (uVar14 != 0) {
              uVar2 = uVar15 / uVar14;
            }
            uVar15 = uVar15 - uVar2 * uVar14;
          }
          if (uVar15 != uVar16) goto LAB_0212d2a4;
        }
        plVar17 = (long *)*plVar17;
        bVar7 = false;
      } while (plVar17 != (long *)0x0);
    }
  }
  goto LAB_0212d2a8;
LAB_0212d368:
  bVar7 = (char)plVar17[6] != '\0';
LAB_0212d2a8:
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (bVar7) {
    local_68 = plVar10;
    lVar9 = FUN_0212be14(&local_170,plVar10,&local_68);
    uVar11 = FUN_01f995a0(lVar9 + 0x40);
    local_68 = plVar10;
    lVar9 = FUN_0212be14(&local_170,plVar10,&local_68);
    FUN_01f990fc(uVar11,lVar9 + 0x40);
  }
  plVar10 = plVar10 + 4;
  if (plVar10 == &lStack_78) {
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
    if (local_120 != (long *)0x0) {
      (**(code **)(*local_120 + 0x20))();
    }
    return;
  }
  goto LAB_0212d160;
}


