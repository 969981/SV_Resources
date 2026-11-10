/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0020c2f8; name: FUN_0020c2f8
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0020c2f8(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long *******ppppppplVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  size_t sVar10;
  ulong *puVar11;
  long lVar12;
  undefined8 uVar13;
  byte *__s;
  undefined1 auStack_2d0 [184];
  undefined8 local_218;
  byte local_210;
  undefined7 uStack_20f;
  ulong local_208;
  undefined8 local_200;
  long *plStack_1f8;
  undefined8 local_1f0;
  long local_1e0;
  long *plStack_1d8;
  long *local_1d0;
  long *local_1c8;
  byte *local_1c0;
  byte *local_1b8;
  byte *local_1b0;
  undefined *local_1a8;
  long *local_198;
  long *local_190;
  undefined1 auStack_188 [8];
  ulong local_180;
  long local_170;
  undefined *local_160;
  long *local_158;
  long *******local_150;
  long *******local_148;
  long *local_140;
  undefined8 local_138;
  undefined8 local_130;
  long *local_128;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long *plStack_108;
  byte *local_100;
  long **local_f8;
  undefined8 uStack_f0;
  ulong local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  long *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  long *******local_a8;
  long *******local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  long *local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 local_68;
  long *local_60;
  undefined *local_58;
  undefined **local_50;
  undefined8 local_48;
  
  uVar13 = *(undefined8 *)(param_1 + 0x138);
  local_c0 = (long *)FUN_01cf7e20();
  local_c8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
                    /* try { // try from 0020c324 to 0020c32f has its CatchHandler @ 0020cd1c */
  FUN_00213edc(&local_210,0);
  if (local_1f0 == 0) {
    puVar11 = (ulong *)(local_208 & 0xfffffffffffffffe);
    if ((local_208 & 1) != 0) {
      puVar11 = (ulong *)*puVar11;
    }
                    /* try { // try from 0020c354 to 0020c36b has its CatchHandler @ 0020cd24 */
    local_1f0 = FUN_0021d28c(puVar11);
    if ((*(byte *)(param_1 + 0x108) & 1) == 0) goto LAB_0020c340;
LAB_0020c364:
    lVar12 = *(long *)(param_1 + 0x118);
  }
  else {
    if ((*(byte *)(param_1 + 0x108) & 1) != 0) goto LAB_0020c364;
LAB_0020c340:
    lVar12 = param_1 + 0x109;
  }
  FUN_00205b6c(local_1f0,lVar12);
  FUN_002134d0(&local_160,*(undefined8 *)(param_1 + 0xe0));
  ppppppplVar3 = (long *******)((ulong)&local_160 | 1);
  if (((ulong)local_160 & 1) != 0) {
    ppppppplVar3 = local_150;
  }
                    /* try { // try from 0020c390 to 0020c397 has its CatchHandler @ 0020ccf0 */
  FUN_0020ce60(&local_210,ppppppplVar3);
  if (((ulong)local_160 & 1) != 0) {
    (*(code *)(*local_148)[3])(local_148,local_150,(ulong)local_160 & 0xfffffffffffffffe,1);
  }
  local_160 = (undefined *)0x0;
  local_158 = (long *)0x0;
  FUN_0020d12c(&local_1d0,*(undefined8 *)(param_1 + 0xd0),&local_210,&local_160);
  if (local_158 != (long *)0x0) {
    plVar1 = local_158 + 1;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_158 + 0x10))(local_158);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar8 = PTR_DAT_047cbb38;
  puVar7 = PTR_DAT_047cbb30;
  local_a8 = (long *******)&local_a8;
  local_48 = 0;
  local_50 = (undefined **)0x0;
  local_b0 = PTR_DAT_047cbb38 + 0x10;
  puVar2 = PTR_DAT_047cbb30 + 0x10;
  local_b8 = puVar2;
  local_a0 = local_a8;
  (**(code **)(*local_1d0 + 0x10))(local_1d0,&local_90);
  local_50 = &local_b0;
  thunk_FUN_006c4e40(&local_b8);
  local_b8 = puVar2;
  FUN_006c4274(&local_b0);
  plVar9 = local_1c8;
  plVar1 = local_1d0;
  local_1d0 = (long *)0x0;
  local_1c8 = (long *)0x0;
  (**(code **)(*plVar1 + 0x30))(&local_160);
  if (plVar9 == (long *)0x0) {
LAB_0020c4a8:
  }
  else {
    plVar1 = plVar9 + 1;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 != 0) goto LAB_0020c4a8;
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__shared_weak_count::__release_weak();
  }
  if ((int)local_160 != 0) {
    local_a0 = (long *******)FUN_01cf7e20();
    local_a8 = (long *******)0x0;
    local_b8 = (undefined *)0x0;
    local_b0 = (undefined *)0x0;
    local_80 = (long *)FUN_01cf7e20();
    local_88 = 0;
    local_98 = (long *)0x0;
    local_90 = 0;
    local_60 = (long *)FUN_01cf7e20();
    local_68 = 0;
    local_78 = 0;
    local_70 = 0;
    local_58 = (undefined *)0x0;
    FUN_0020cf80(auStack_2d0,&local_160,&local_b8);
    if ((local_78 & 1) != 0) {
      (**(code **)(*local_60 + 0x18))(local_60,local_68,local_78 & 0xfffffffffffffffe,1);
    }
    if (((ulong)local_98 & 1) != 0) {
      (**(code **)(*local_80 + 0x18))(local_80,local_88,(ulong)local_98 & 0xfffffffffffffffe,1);
    }
    if (((ulong)local_b8 & 1) != 0) {
      (*(code *)(*local_a0)[3])(local_a0,local_a8,(ulong)local_b8 & 0xfffffffffffffffe,1);
    }
    FUN_0021d964(&local_110);
    if ((char)local_138 != '\0') {
      FUN_01cfa44c(&local_130,local_128);
    }
    if (((ulong)local_158 & 1) != 0) {
      (**(code **)(*local_140 + 0x18))(local_140,local_148,(ulong)local_158 & 0xfffffffffffffffe,1);
    }
    if (local_1c8 != (long *)0x0) {
      plVar1 = local_1c8 + 1;
      do {
        lVar12 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_1c8 + 0x10))(local_1c8);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_00213f34(&local_210);
    goto joined_r0x0020cafc;
  }
  if ((*local_100 & 1) == 0) {
    __s = local_100 + 1;
  }
  else {
    __s = *(byte **)(local_100 + 0x10);
  }
  sVar10 = strlen((char *)__s);
                    /* try { // try from 0020c6b4 to 0020c6bf has its CatchHandler @ 0020cc48 */
  FUN_01f77cc0(&local_d8,__s,sVar10);
  FUN_0021d964(&local_110);
  if ((char)local_138 != '\0') {
    FUN_01cfa44c(&local_130,local_128);
  }
  if (((ulong)local_158 & 1) != 0) {
    (**(code **)(*local_140 + 0x18))(local_140,local_148,(ulong)local_158 & 0xfffffffffffffffe,1);
  }
  if (local_1c8 != (long *)0x0) {
    plVar1 = local_1c8 + 1;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_1c8 + 0x10))(local_1c8);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00213f34(&local_210);
                    /* try { // try from 0020c744 to 0020c74f has its CatchHandler @ 0020cc44 */
  FUN_00214dc8(auStack_188,0);
  if (local_170 == 0) {
    puVar11 = (ulong *)(local_180 & 0xfffffffffffffffe);
    if ((local_180 & 1) != 0) {
      puVar11 = (ulong *)*puVar11;
    }
                    /* try { // try from 0020c774 to 0020c7ab has its CatchHandler @ 0020cce0 */
    local_170 = FUN_0021d28c(puVar11);
    if ((*(byte *)(param_1 + 0x108) & 1) == 0) goto LAB_0020c760;
LAB_0020c784:
    lVar12 = *(long *)(param_1 + 0x118);
  }
  else {
    if ((*(byte *)(param_1 + 0x108) & 1) != 0) goto LAB_0020c784;
LAB_0020c760:
    lVar12 = param_1 + 0x109;
  }
  FUN_00205b6c(local_170,lVar12);
  uVar4 = (ulong)&local_d8 | 1;
  if ((local_d8 & 1) != 0) {
    uVar4 = local_c8;
  }
  FUN_00207dd8(auStack_188,uVar4);
  local_160 = (undefined *)0x0;
  local_158 = (long *)0x0;
  FUN_00207ef8(&local_198,*(undefined8 *)(param_1 + 0xd0),auStack_188,&local_160);
  if (local_158 != (long *)0x0) {
    plVar1 = local_158 + 1;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_158 + 0x10))(local_158);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_150 = (long *******)&local_150;
  local_158 = (long *)(puVar8 + 0x10);
  local_f8 = (long **)0x0;
  uStack_f0 = 0;
  local_160 = puVar7 + 0x10;
  local_148 = local_150;
  (**(code **)(*local_198 + 0x10))(local_198,&local_138);
  local_f8 = &local_158;
  thunk_FUN_006c4e40(&local_160);
  local_160 = puVar7 + 0x10;
  FUN_006c4274(&local_158);
  plVar9 = local_190;
  plVar1 = local_198;
  local_198 = (long *)0x0;
  local_190 = (long *)0x0;
  (**(code **)(*plVar1 + 0x30))(&local_b8);
  if (plVar9 == (long *)0x0) {
LAB_0020c87c:
    if ((int)local_b8 != 0) goto LAB_0020c884;
LAB_0020c960:
    puVar2 = PTR_DAT_047cbb58;
    if (local_58 != (undefined *)0x0) {
      puVar2 = local_58;
    }
                    /* try { // try from 0020c974 to 0020c97b has its CatchHandler @ 0020cba8 */
    FUN_0021b394(&local_1d0,puVar2);
    if ((*local_1c0 & 1) == 0) {
      local_1c0 = local_1c0 + 1;
    }
    else {
      local_1c0 = *(byte **)(local_1c0 + 0x10);
    }
    FUN_00266fc0(&local_210,local_1c0);
    lVar12 = (long)&local_1f0 + 1;
    if ((local_1f0 & 1) != 0) {
      lVar12 = local_1e0;
    }
    if ((*local_1b8 & 1) == 0) {
      local_1b8 = local_1b8 + 1;
      if ((*local_1b0 & 1) == 0) goto LAB_0020c9e8;
LAB_0020c9d0:
      local_1b0 = *(byte **)(local_1b0 + 0x10);
    }
    else {
      local_1b8 = *(byte **)(local_1b8 + 0x10);
      if ((*local_1b0 & 1) != 0) goto LAB_0020c9d0;
LAB_0020c9e8:
      local_1b0 = local_1b0 + 1;
    }
    puVar2 = PTR_DAT_047cbb60;
    if (local_1a8 != (undefined *)0x0) {
      puVar2 = local_1a8;
    }
    local_218 = *(undefined8 *)(puVar2 + 0x10);
    FUN_00201264(&local_160,lVar12,local_1b8,local_1b0,&local_218);
    FUN_00209d4c(auStack_2d0,&local_b8,&local_160);
    if ((local_120 & 1) != 0) {
      (**(code **)(*plStack_108 + 0x18))(plStack_108,local_110,local_120 & 0xfffffffffffffffe,1);
    }
    if (((ulong)local_140 & 1) != 0) {
      (**(code **)(*local_128 + 0x18))(local_128,local_130,(ulong)local_140 & 0xfffffffffffffffe,1);
    }
    if (((ulong)local_160 & 1) != 0) {
      (*(code *)(*local_148)[3])(local_148,local_150,(ulong)local_160 & 0xfffffffffffffffe,1);
    }
    if ((local_1f0 & 1) != 0) {
      (**(code **)(*plStack_1d8 + 0x18))(plStack_1d8,local_1e0,local_1f0 & 0xfffffffffffffffe,1);
    }
    if ((local_210 & 1) != 0) {
      (**(code **)(*plStack_1f8 + 0x18))
                (plStack_1f8,local_200,CONCAT71(uStack_20f,local_210) & 0xfffffffffffffffe,1);
    }
    FUN_0021b534(&local_1d0);
  }
  else {
    plVar1 = plVar9 + 1;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 != 0) goto LAB_0020c87c;
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__shared_weak_count::__release_weak();
    if ((int)local_b8 == 0) goto LAB_0020c960;
LAB_0020c884:
    local_148 = (long *******)FUN_01cf7e20();
    local_150 = (long *******)0x0;
    local_160 = (undefined *)0x0;
    local_158 = (long *)0x0;
    local_128 = (long *)FUN_01cf7e20();
    local_130 = 0;
    local_140 = (long *)0x0;
    local_138 = 0;
    plStack_108 = (long *)FUN_01cf7e20();
    local_110 = 0;
    local_100 = (byte *)0x0;
    local_120 = 0;
    uStack_118 = 0;
    FUN_00209d4c(auStack_2d0,&local_b8,&local_160);
    if ((local_120 & 1) != 0) {
      (**(code **)(*plStack_108 + 0x18))(plStack_108,local_110,local_120 & 0xfffffffffffffffe,1);
    }
    if (((ulong)local_140 & 1) != 0) {
      (**(code **)(*local_128 + 0x18))(local_128,local_130,(ulong)local_140 & 0xfffffffffffffffe,1);
    }
    if (((ulong)local_160 & 1) != 0) {
      (*(code *)(*local_148)[3])(local_148,local_150,(ulong)local_160 & 0xfffffffffffffffe,1);
    }
  }
  FUN_00215a14(&local_68);
  if ((char)local_90 != '\0') {
    FUN_01cfa44c(&local_88,local_80);
  }
  if (((ulong)local_b0 & 1) != 0) {
    (**(code **)(*local_98 + 0x18))(local_98,local_a0,(ulong)local_b0 & 0xfffffffffffffffe,1);
  }
  if (local_190 != (long *)0x0) {
    plVar1 = local_190 + 1;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_190 + 0x10))(local_190);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00214e1c(auStack_188);
joined_r0x0020cafc:
  if ((local_d8 & 1) != 0) {
    (**(code **)(*local_c0 + 0x18))(local_c0,local_c8,local_d8 & 0xfffffffffffffffe,1);
  }
  FUN_00200f9c(uVar13,auStack_2d0);
  FUN_001fc7e8(auStack_2d0);
  return 1;
}


