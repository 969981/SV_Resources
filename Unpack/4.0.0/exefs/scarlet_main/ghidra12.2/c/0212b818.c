/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0212b818; name: FUN_0212b818
 */


void FUN_0212b818(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  char *pcVar11;
  long lVar12;
  undefined4 uVar13;
  long *local_180;
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
  lVar6 = FUN_0212be14(&local_170,&local_138,&local_68);
  *(undefined8 *)(lVar6 + 0x40) = 0x49e043f7c831bf1c;
  *(char **)(lVar6 + 0x48) = "WorldInstanceFadeNearStart";
  *(undefined8 *)(lVar6 + 0x50) = 0x1a;
  plVar7 = *(long **)(lVar6 + 0x58);
  *(undefined8 *)(lVar6 + 0x58) = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(undefined8 *)(lVar6 + 0x58) = 0;
  local_68 = &local_118;
  lVar6 = FUN_0212be14(&local_170,&local_118,&local_68);
  *(undefined8 *)(lVar6 + 0x40) = 0x249cc2805586b665;
  *(char **)(lVar6 + 0x48) = "WorldInstanceFadeNearEnd";
  *(undefined8 *)(lVar6 + 0x50) = 0x18;
  plVar7 = *(long **)(lVar6 + 0x58);
  *(undefined8 *)(lVar6 + 0x58) = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(undefined8 *)(lVar6 + 0x58) = 0;
  local_68 = &local_f8;
  lVar6 = FUN_0212be14(&local_170,&local_f8,&local_68);
  *(undefined8 *)(lVar6 + 0x40) = 0x900b8d8d3691fc09;
  *(char **)(lVar6 + 0x48) = "DetailInstanceFadeNearStart";
  *(undefined8 *)(lVar6 + 0x50) = 0x1b;
  plVar7 = *(long **)(lVar6 + 0x58);
  *(undefined8 *)(lVar6 + 0x58) = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(undefined8 *)(lVar6 + 0x58) = 0;
  local_68 = &local_d8;
  lVar6 = FUN_0212be14(&local_170,&local_d8,&local_68);
  *(undefined8 *)(lVar6 + 0x40) = 0x812d60652befb5f8;
  *(char **)(lVar6 + 0x48) = "DetailInstanceFadeNearEnd";
  *(undefined8 *)(lVar6 + 0x50) = 0x19;
  plVar7 = *(long **)(lVar6 + 0x58);
  *(undefined8 *)(lVar6 + 0x58) = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(undefined8 *)(lVar6 + 0x58) = 0;
  local_68 = &local_b8;
  lVar6 = FUN_0212be14(&local_170,&local_b8,&local_68);
  *(undefined8 *)(lVar6 + 0x40) = 0xc5e5d8a7ea22b261;
  *(char **)(lVar6 + 0x48) = "WorldInstanceFadeFarStart";
  *(undefined8 *)(lVar6 + 0x50) = 0x19;
  plVar7 = *(long **)(lVar6 + 0x58);
  *(undefined8 *)(lVar6 + 0x58) = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(undefined8 *)(lVar6 + 0x58) = 0;
  local_68 = &local_98;
  lVar6 = FUN_0212be14(&local_170,&local_98,&local_68);
  *(undefined8 *)(lVar6 + 0x40) = 0xd94a1e2d442e7240;
  *(char **)(lVar6 + 0x48) = "WorldInstanceFadeFarEnd";
  *(undefined8 *)(lVar6 + 0x50) = 0x17;
  plVar7 = *(long **)(lVar6 + 0x58);
  *(undefined8 *)(lVar6 + 0x58) = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  puVar2 = PTR_LAB_047dcd90;
  puVar1 = PTR_DAT_047d8b70;
  lVar12 = 0;
  *(undefined8 *)(lVar6 + 0x58) = 0;
  do {
    plVar7 = (long *)((long)&local_138 + lVar12);
    uVar8 = FUN_0212bec8(param_1,plVar7);
    uVar4 = FUN_012595d8(param_1,uVar8);
    pcVar11 = *(char **)((long)local_130 + lVar12);
    bVar3 = (uVar4 & 0xff) != 0;
    local_180 = (long *)0x0;
    if (*pcVar11 == '\0') {
      plVar10 = (long *)FUN_00d44228();
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar8 = *(undefined8 *)PTR_DAT_047d4248;
      *(undefined8 *)PTR_DAT_047d4250 = uVar8;
      FUN_00cf9884(&local_68,uVar8,pcVar11);
      plVar10 = local_180;
      local_180 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      plVar10 = local_68;
    }
    local_180 = plVar10;
    FUN_0212c084(&local_178,&local_180);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
    local_68 = (long *)puVar1;
    if (local_178 != (long *)0x0) {
      local_68 = local_178 + 6;
    }
    local_68 = (long *)*local_68;
    puVar9 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_68);
    *(bool *)(puVar9 + 2) = bVar3 && 0xff < uVar4;
    *puVar9 = puVar2;
    if (bVar3 && 0xff < uVar4) {
      local_68 = plVar7;
      lVar6 = FUN_0212be14(&local_170,plVar7,&local_68);
      uVar13 = FUN_01f9918c(lVar6 + 0x40);
      local_68 = *(long **)((long)&local_138 + lVar12);
      puVar9 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_68);
      *(undefined4 *)(puVar9 + 2) = uVar13;
      *puVar9 = PTR_LAB_047dcdf0;
    }
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 0x20))();
    }
    lVar12 = lVar12 + 0x20;
  } while (lVar12 != 0xc0);
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


