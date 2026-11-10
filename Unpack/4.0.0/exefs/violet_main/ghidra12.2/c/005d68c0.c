/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005d68c0; name: FUN_005d68c0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_005d68c0(undefined4 *param_1,long *param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined8 uVar12;
  long lVar13;
  ulong *puVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long *local_178;
  long *plStack_170;
  undefined8 local_168;
  long *plStack_160;
  long *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined *local_100;
  long *plStack_f8;
  undefined8 *******local_f0;
  undefined8 *******pppppppuStack_e8;
  long *local_e0;
  undefined8 local_d8;
  long **local_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 local_b0;
  long lStack_a8;
  long local_a0;
  long **local_98;
  long *local_90;
  undefined *local_88;
  long *local_70;
  long *local_68;
  
  puVar6 = PTR_DAT_047cbb38;
  puVar2 = PTR_DAT_047cbb30;
  if ((param_4 & 1) != 0) {
    FUN_005e23ac(&local_70,*(long *)(*param_2 + 8) + 8,*(long *)(*param_2 + 8) + 0x48);
    local_f0 = &local_f0;
    puVar1 = puVar2 + 0x10;
    plStack_f8 = (long *)(puVar6 + 0x10);
    local_98 = (long **)0x0;
    local_90 = (long *)0x0;
    local_100 = puVar1;
    pppppppuStack_e8 = local_f0;
    (**(code **)(*local_70 + 0x10))(local_70,&local_d8);
    local_98 = &plStack_f8;
    thunk_FUN_006c4e40(&local_100);
    local_100 = puVar1;
    FUN_006c4274(&plStack_f8);
    uVar12 = (**(code **)(*local_70 + 0x38))();
                    /* try { // try from 005d6974 to 005d697b has its CatchHandler @ 005d6df8 */
    FUN_005bf624(&local_178,uVar12);
    if (local_68 == (long *)0x0) {
LAB_005d699c:
    }
    else {
      plVar15 = local_68 + 1;
      do {
        lVar17 = *plVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar17 != 0) goto LAB_005d699c;
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
    if ((int)local_178 != 0) {
      lStack_a8 = 0;
      local_b0 = 0;
      local_98 = (long **)0x0;
      local_a0 = 0;
      plStack_c8 = (long *)0x0;
      local_d0 = (long **)0x0;
      local_b8 = 0;
      uStack_c0 = 0;
      pppppppuStack_e8 = (undefined8 *******)0x0;
      local_f0 = (undefined8 *******)0x0;
      local_d8 = 0;
      local_e0 = (long *)0x0;
      plStack_f8 = (long *)0x0;
      local_100 = (undefined *)0x0;
      pppppppuStack_e8 = (undefined8 *******)FUN_01cf7e20();
      local_f0 = (undefined8 *******)0x0;
      local_100 = (undefined *)0x0;
      plStack_f8 = (long *)0x0;
      plStack_c8 = (long *)FUN_01cf7e20();
      local_d0 = (long **)0x0;
      lStack_a8 = 0;
      local_e0 = (long *)0x0;
      local_d8 = 0;
      local_a0 = 0;
      local_98 = (long **)0x0;
      local_90 = (long *)FUN_01cf7e20();
      FUN_005bf764(param_1,&local_178,&local_100);
      lVar13 = lStack_a8;
      lVar17 = local_a0;
      if (lStack_a8 != 0) {
        while (lVar17 != lVar13) {
          FUN_005bdd78(lVar17 + -0xa8);
          lVar17 = lVar17 + -0xa8;
        }
        local_a0 = lVar13;
        (**(code **)(*local_90 + 0x18))(local_90,lStack_a8,(long)local_98 - lStack_a8,8);
      }
      if (((ulong)local_e0 & 1) != 0) {
        (**(code **)(*plStack_c8 + 0x18))
                  (plStack_c8,local_d0,(ulong)local_e0 & 0xfffffffffffffffe,1);
      }
      if (((ulong)local_100 & 1) != 0) {
        (**(code **)((long)*pppppppuStack_e8 + 0x18))
                  (pppppppuStack_e8,local_f0,(ulong)local_100 & 0xfffffffffffffffe,1);
      }
      FUN_027c2bd0(&local_128,local_120);
      if ((char)uStack_150 != '\0') {
        FUN_01cfa44c(&local_148,uStack_140);
      }
      if (((ulong)plStack_170 & 1) == 0) {
        return;
      }
      plVar15 = local_158;
      plVar16 = plStack_170;
      goto LAB_005d6dc8;
    }
    plVar15 = (long *)0x0;
    if (*(long *)(param_3 + 0x20) != 0) {
      plVar15 = (long *)(*(long *)(param_3 + 0x20) + 8);
    }
    if (*(int *)(param_3 + 0x18) != 0) {
      lVar17 = (long)*(int *)(param_3 + 0x18) << 3;
      do {
        lVar18 = *plVar15;
        lVar13 = *(long *)(lVar18 + 0x28);
        if (lVar13 == 0) {
          puVar14 = (ulong *)(*(ulong *)(lVar18 + 8) & 0xfffffffffffffffe);
          if ((*(ulong *)(lVar18 + 8) & 1) != 0) {
            puVar14 = (ulong *)*puVar14;
          }
                    /* try { // try from 005d6a94 to 005d6a97 has its CatchHandler @ 005d6e3c */
          lVar13 = FUN_00616230(puVar14);
          *(long *)(lVar18 + 0x28) = lVar13;
        }
        FUN_005e0960(lVar13,&local_128);
        plVar15 = plVar15 + 1;
        lVar17 = lVar17 + -8;
      } while (lVar17 != 0);
    }
    FUN_027c2bd0(&local_128,local_120);
    if ((char)uStack_150 != '\0') {
      FUN_01cfa44c(&local_148,uStack_140);
    }
    if (((ulong)plStack_170 & 1) != 0) {
      (**(code **)(*local_158 + 0x18))
                (local_158,plStack_160,(ulong)plStack_170 & 0xfffffffffffffffe,1);
    }
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  FUN_005d6f90(&local_178,*(undefined8 *)(*param_2 + 8),param_3,&local_70);
  local_f0 = &local_f0;
  puVar2 = puVar2 + 0x10;
  plStack_f8 = (long *)(puVar6 + 0x10);
  local_98 = (long **)0x0;
  local_90 = (long *)0x0;
  local_100 = puVar2;
  pppppppuStack_e8 = local_f0;
  (**(code **)(*local_178 + 0x10))(local_178,&local_d8);
  local_98 = &plStack_f8;
  thunk_FUN_006c4e40(&local_100);
  local_100 = puVar2;
  FUN_006c4274(&plStack_f8);
  plVar16 = plStack_170;
  plVar15 = local_178;
  local_178 = (long *)0x0;
  plStack_170 = (long *)0x0;
  (**(code **)(*plVar15 + 0x30))(&local_100);
  if (plVar16 != (long *)0x0) {
    plVar15 = plVar16 + 1;
    do {
      lVar17 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_170 != (long *)0x0) {
    plVar15 = plStack_170 + 1;
    do {
      lVar17 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_170 + 0x10))(plStack_170);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_68 != (long *)0x0) {
    plVar15 = local_68 + 1;
    do {
      lVar17 = *plVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *plVar15 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar2 = PTR_DAT_047ce710;
  if (local_88 != (undefined *)0x0) {
    puVar2 = local_88;
  }
  FUN_005e957c(&local_178,puVar2,&local_a0);
  pppppppuVar11 = pppppppuStack_e8;
  pppppppuVar10 = local_f0;
  plVar3 = plStack_f8;
  uVar9 = local_148;
  uVar8 = uStack_150;
  plVar7 = local_158;
  uVar12 = local_168;
  plVar16 = plStack_170;
  plVar15 = local_178;
  *param_1 = local_100._0_4_;
  plStack_f8 = (long *)0x0;
  local_f0 = (undefined8 *******)0x0;
  pppppppuStack_e8 = (undefined8 *******)0x0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(long **)(param_1 + 8) = local_e0;
  *(undefined8 ********)(param_1 + 6) = pppppppuVar11;
  *(undefined8 ********)(param_1 + 4) = pppppppuVar10;
  *(long **)(param_1 + 2) = plVar3;
  if ((char)local_d8 != '\0') {
    *(undefined8 *)(param_1 + 0x10) = uStack_c0;
    *(long **)(param_1 + 0xe) = plStack_c8;
    *(long ***)(param_1 + 0xc) = local_d0;
    plVar3 = (long *)(param_1 + 0xe);
    *(long *)(param_1 + 0x12) = local_b8;
    if (local_b8 == 0) {
      *(long **)(param_1 + 0xc) = plVar3;
    }
    else {
      *(long **)(*plVar3 + 0x10) = plVar3;
      local_d0 = &plStack_c8;
      plStack_c8 = (long *)0x0;
      local_b8 = 0;
    }
    *(undefined1 *)(param_1 + 10) = 1;
  }
  local_178 = (long *)0x0;
  plStack_170 = (long *)0x0;
  local_168 = 0;
  *(undefined8 *)(param_1 + 0x28) = local_128;
  *(long **)(param_1 + 0x16) = plVar16;
  *(long **)(param_1 + 0x14) = plVar15;
  *(long **)(param_1 + 0x1a) = plStack_160;
  *(undefined8 *)(param_1 + 0x18) = uVar12;
  local_158 = (long *)0x0;
  uStack_150 = 0;
  local_148 = 0;
  *(undefined8 *)(param_1 + 0x1e) = uVar8;
  *(long **)(param_1 + 0x1c) = plVar7;
  *(undefined8 *)(param_1 + 0x22) = uStack_140;
  *(undefined8 *)(param_1 + 0x20) = uVar9;
  *(undefined8 *)(param_1 + 0x26) = uStack_130;
  *(undefined8 *)(param_1 + 0x24) = local_138;
  *(undefined8 *)(param_1 + 0x2c) = uStack_118;
  *(undefined8 *)(param_1 + 0x2a) = local_120;
  *(undefined8 *)(param_1 + 0x30) = uStack_108;
  *(undefined8 *)(param_1 + 0x2e) = local_110;
  FUN_005fed5c(&local_b0);
  if ((char)local_d8 != '\0') {
    FUN_01cfa44c(&local_d0,plStack_c8);
  }
  if (((ulong)plStack_f8 & 1) == 0) {
    return;
  }
  plVar15 = local_e0;
  plStack_160 = (long *)pppppppuStack_e8;
  plVar16 = plStack_f8;
LAB_005d6dc8:
  (**(code **)(*plVar15 + 0x18))(plVar15,plStack_160,(ulong)plVar16 & 0xfffffffffffffffe,1);
  return;
}


