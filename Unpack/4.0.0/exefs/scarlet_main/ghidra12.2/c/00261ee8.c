/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00261ee8; name: FUN_00261ee8
 */


undefined8 FUN_00261ee8(long param_1)

{
  undefined *puVar1;
  undefined7 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *local_240;
  undefined *puStack_238;
  undefined8 *****local_230;
  undefined8 *****pppppuStack_228;
  undefined1 auStack_218 [64];
  undefined **local_1d8;
  undefined8 uStack_1d0;
  long *local_188;
  long *local_180;
  long *local_178;
  long *local_170;
  long *****local_168;
  long *****ppppplStack_160;
  byte local_158;
  undefined7 uStack_157;
  undefined8 local_148;
  long *plStack_140;
  int local_138 [2];
  byte local_130;
  undefined7 uStack_12f;
  undefined8 local_120;
  long *plStack_118;
  char local_110;
  undefined1 auStack_108 [8];
  undefined8 local_100;
  byte local_e8;
  undefined7 uStack_e7;
  undefined7 *local_d8;
  long *plStack_d0;
  long *local_c8;
  long *local_c0;
  long *****local_b8;
  long *****ppppplStack_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *plStack_90;
  ulong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *plStack_70;
  undefined8 local_68;
  long **local_60;
  undefined8 uStack_58;
  
  uVar11 = *(undefined8 *)(param_1 + 0x230);
  lVar10 = param_1 + 0x188;
  if ((*(byte *)(param_1 + 0x198) & 1) == 0) {
    lVar9 = param_1 + 0x199;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x1a8);
  }
                    /* try { // try from 00261f34 to 00261f43 has its CatchHandler @ 002623ec */
  (**(code **)(**(long **)(param_1 + 0x140) + 0x40))
            (&local_c8,*(long **)(param_1 + 0x140),param_1 + 0x150,lVar10,lVar9,param_1 + 0x1b8);
  puVar6 = PTR_DAT_047cbb38;
  puVar5 = PTR_DAT_047cbb30;
  local_230 = &local_230;
  local_1d8 = (undefined **)0x0;
  uStack_1d0 = 0;
  puStack_238 = PTR_DAT_047cbb38 + 0x10;
  puVar1 = PTR_DAT_047cbb30 + 0x10;
  local_240 = puVar1;
  pppppuStack_228 = local_230;
  (**(code **)(*local_c8 + 0x10))(local_c8,auStack_218);
  local_1d8 = &puStack_238;
  thunk_FUN_006c4e40(&local_240);
  local_240 = puVar1;
  FUN_006c4274(&puStack_238);
  plVar7 = local_c0;
  plVar8 = local_c8;
  local_c8 = (long *)0x0;
  local_c0 = (long *)0x0;
  (**(code **)(*plVar8 + 0x30))(&local_240);
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 1;
    do {
      lVar9 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_c0 == (long *)0x0) {
LAB_0026200c:
  }
  else {
    plVar8 = local_c0 + 1;
    do {
      lVar9 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 != 0) goto LAB_0026200c;
    (**(code **)(*local_c0 + 0x10))(local_c0);
    std::__shared_weak_count::__release_weak();
  }
  if ((int)local_240 == 0) goto LAB_002623b4;
  FUN_001fc7e8(&local_240);
  (**(code **)(**(long **)(param_1 + 0xe0) + 0x10))(&local_178,*(long **)(param_1 + 0xe0),lVar10);
  local_b8 = (long *****)&local_b8;
  plVar8 = (long *)(puVar5 + 0x10);
  local_c0 = (long *)(puVar6 + 0x10);
  local_60 = (long **)0x0;
  uStack_58 = 0;
  local_c8 = plVar8;
  ppppplStack_b0 = local_b8;
  (**(code **)(*local_178 + 0x10))(local_178,&uStack_a0);
  local_60 = &local_c0;
  thunk_FUN_006c4e40(&local_c8);
  local_c8 = plVar8;
  FUN_006c4274(&local_c0);
  plVar7 = local_170;
  plVar8 = local_178;
  local_178 = (long *)0x0;
  local_170 = (long *)0x0;
  (**(code **)(*plVar8 + 0x30))(local_138);
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 1;
    do {
      lVar9 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_170 == (long *)0x0) {
LAB_002620ec:
    if (local_138[0] != 0) goto LAB_002620f4;
LAB_002621e4:
    puVar2 = &uStack_e7;
    if ((local_e8 & 1) != 0) {
      puVar2 = local_d8;
    }
    FUN_0025da98(&local_178,*(undefined8 *)(param_1 + 0xd0),puVar2);
    if ((*(byte *)(param_1 + 0x198) & 1) == 0) {
      lVar9 = param_1 + 0x199;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x1a8);
    }
                    /* try { // try from 00262228 to 0026223b has its CatchHandler @ 002623e8 */
    (**(code **)(**(long **)(param_1 + 0x110) + 0x40))
              (&local_188,*(long **)(param_1 + 0x110),param_1 + 0x150,lVar10,lVar9,&local_178);
    local_b8 = (long *****)&local_b8;
    plVar8 = (long *)(puVar5 + 0x10);
    local_c0 = (long *)(puVar6 + 0x10);
    local_60 = (long **)0x0;
    uStack_58 = 0;
    local_c8 = plVar8;
    ppppplStack_b0 = local_b8;
    (**(code **)(*local_188 + 0x10))(local_188,&uStack_a0);
    local_60 = &local_c0;
    thunk_FUN_006c4e40(&local_c8);
    local_c8 = plVar8;
    FUN_006c4274(&local_c0);
    plVar7 = local_180;
    plVar8 = local_188;
    local_188 = (long *)0x0;
    local_180 = (long *)0x0;
    (**(code **)(*plVar8 + 0x30))(&local_240);
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 1;
      do {
        lVar10 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_180 != (long *)0x0) {
      plVar8 = local_180 + 1;
      do {
        lVar10 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*local_180 + 0x10))(local_180);
        std::__shared_weak_count::__release_weak();
      }
    }
    if ((local_158 & 1) != 0) {
      (**(code **)(*plStack_140 + 0x18))
                (plStack_140,local_148,CONCAT71(uStack_157,local_158) & 0xfffffffffffffffe,1);
    }
    if (((ulong)local_178 & 1) == 0) goto LAB_00262354;
    plVar8 = local_178;
LAB_00262344:
    (*(code *)(*ppppplStack_160)[3])(ppppplStack_160,local_168,(ulong)plVar8 & 0xfffffffffffffffe,1)
    ;
  }
  else {
    plVar8 = local_170 + 1;
    do {
      lVar9 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 != 0) goto LAB_002620ec;
    (**(code **)(*local_170 + 0x10))(local_170);
    std::__shared_weak_count::__release_weak();
    if (local_138[0] == 0) goto LAB_002621e4;
LAB_002620f4:
    ppppplStack_b0 = (long *****)FUN_01cf7e20();
    local_b8 = (long *****)0x0;
    local_c8 = (long *)0x0;
    local_c0 = (long *)0x0;
    plStack_90 = (long *)FUN_01cf7e20();
    local_98 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    plStack_70 = (long *)FUN_01cf7e20();
    local_78 = 0;
    local_68 = 0;
    local_88 = 0;
    uStack_80 = 0;
    FUN_00260510(&local_240,local_138,&local_c8);
    if ((local_88 & 1) == 0) {
      if ((local_a8 & 1) == 0) goto LAB_0026213c;
LAB_00262190:
      (**(code **)(*plStack_90 + 0x18))(plStack_90,local_98,local_a8 & 0xfffffffffffffffe,1);
      if (((ulong)local_c8 & 1) == 0) goto LAB_00262354;
LAB_002621b4:
      ppppplStack_160 = ppppplStack_b0;
      local_168 = local_b8;
      plVar8 = local_c8;
      goto LAB_00262344;
    }
    (**(code **)(*plStack_70 + 0x18))(plStack_70,local_78,local_88 & 0xfffffffffffffffe,1);
    if ((local_a8 & 1) != 0) goto LAB_00262190;
LAB_0026213c:
    if (((ulong)local_c8 & 1) != 0) goto LAB_002621b4;
  }
LAB_00262354:
  if ((local_e8 & 1) != 0) {
    (**(code **)(*plStack_d0 + 0x18))
              (plStack_d0,local_d8,CONCAT71(uStack_e7,local_e8) & 0xfffffffffffffffe,1);
  }
  if (local_110 != '\0') {
    FUN_01cfa44c(auStack_108,local_100);
  }
  if ((local_130 & 1) != 0) {
    (**(code **)(*plStack_118 + 0x18))
              (plStack_118,local_120,CONCAT71(uStack_12f,local_130) & 0xfffffffffffffffe,1);
  }
LAB_002623b4:
  FUN_00200f9c(uVar11,&local_240);
  FUN_001fc7e8(&local_240);
  return 1;
}


