/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005caca0; name: FUN_005caca0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_005caca0(int *param_1,long *param_2,long param_3,undefined8 param_4,long *param_5,
                 uint param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *******ppppppplVar16;
  long lVar17;
  long lVar18;
  long *******ppppppplVar19;
  undefined8 *local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  ulong local_220;
  long *local_218;
  ulong local_210;
  long *plStack_208;
  undefined *local_200;
  long *plStack_1f8;
  long *******local_1f0;
  long *******ppppppplStack_1e8;
  long *local_1e0;
  undefined8 local_1d8;
  long **local_1d0;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  long local_1b8;
  undefined8 local_1b0;
  long lStack_1a8;
  long local_1a0;
  long **local_198;
  long *local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  byte *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  long *local_130;
  long *local_128;
  long *******local_120;
  long *local_118;
  undefined8 local_110;
  long *local_108;
  long *local_100;
  undefined8 uStack_f8;
  long *******local_f0;
  long *local_e8;
  undefined *local_e0;
  long *plStack_d8;
  long *******local_d0;
  long *******ppppppplStack_c8;
  long *local_c0;
  undefined8 uStack_b8;
  long *******local_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lStack_88;
  long local_80;
  long **local_78;
  long *local_70;
  
  puVar5 = PTR_DAT_047cbb38;
  puVar2 = PTR_DAT_047cbb30;
  if ((param_6 & 1) != 0) {
    FUN_005e23ac(&local_130,*(long *)(*param_2 + 8) + 8,*(long *)(*param_2 + 8) + 0x48);
    local_1f0 = (long *******)&local_1f0;
    puVar1 = puVar2 + 0x10;
    plStack_1f8 = (long *)(puVar5 + 0x10);
    local_198 = (long **)0x0;
    local_190 = (long *)0x0;
    local_200 = puVar1;
    ppppppplStack_1e8 = local_1f0;
    (**(code **)(*local_130 + 0x10))(local_130,&local_1d8);
    local_198 = &plStack_1f8;
    thunk_FUN_006c4e40(&local_200);
    local_200 = puVar1;
    FUN_006c4274(&plStack_1f8);
    uVar9 = (**(code **)(*local_130 + 0x38))();
                    /* try { // try from 005cad60 to 005cad67 has its CatchHandler @ 005cb870 */
    FUN_005bf624(&local_e0,uVar9);
    if (local_128 == (long *)0x0) {
LAB_005cad88:
    }
    else {
      plVar14 = local_128 + 1;
      do {
        lVar17 = *plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = lVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar17 != 0) goto LAB_005cad88;
      (**(code **)(*local_128 + 0x10))(local_128);
      std::__shared_weak_count::__release_weak();
    }
    if ((int)local_e0 != 0) {
      lStack_1a8 = 0;
      local_1b0 = 0;
      local_198 = (long **)0x0;
      local_1a0 = 0;
      plStack_1f8 = (long *)0x0;
      local_200 = (undefined *)0x0;
      plStack_1c8 = (long *)0x0;
      local_1d0 = (long **)0x0;
      local_1b8 = 0;
      uStack_1c0 = 0;
      ppppppplStack_1e8 = (long *******)0x0;
      local_1f0 = (long *******)0x0;
      local_1d8 = 0;
      local_1e0 = (long *)0x0;
      ppppppplStack_1e8 = (long *******)FUN_01cf7e20();
      local_1f0 = (long *******)0x0;
      local_200 = (undefined *)0x0;
      plStack_1f8 = (long *)0x0;
      plStack_1c8 = (long *)FUN_01cf7e20();
      local_1d0 = (long **)0x0;
      lStack_1a8 = 0;
      local_1e0 = (long *)0x0;
      local_1d8 = 0;
      local_1a0 = 0;
      local_198 = (long **)0x0;
      local_190 = (long *)FUN_01cf7e20();
      FUN_005bf764(param_1,&local_e0,&local_200);
      lVar11 = lStack_1a8;
      lVar17 = local_1a0;
      if (lStack_1a8 != 0) {
        while (lVar17 != lVar11) {
          FUN_005bdd78(lVar17 + -0xa8);
          lVar17 = lVar17 + -0xa8;
        }
        local_1a0 = lVar11;
        (**(code **)(*local_190 + 0x18))(local_190,lStack_1a8,(long)local_198 - lStack_1a8,8);
      }
      if (((ulong)local_1e0 & 1) != 0) {
        (**(code **)(*plStack_1c8 + 0x18))
                  (plStack_1c8,local_1d0,(ulong)local_1e0 & 0xfffffffffffffffe,1);
      }
      if (((ulong)local_200 & 1) != 0) {
        (*(code *)(*ppppppplStack_1e8)[3])
                  (ppppppplStack_1e8,local_1f0,(ulong)local_200 & 0xfffffffffffffffe,1);
      }
      FUN_027c2bd0(&local_90,lStack_88);
      if ((char)uStack_b8 != '\0') {
        FUN_01cfa44c(&local_b0,plStack_a8);
      }
      if (((ulong)plStack_d8 & 1) == 0) {
        return;
      }
      plVar14 = local_c0;
      ppppppplVar16 = ppppppplStack_c8;
      plVar15 = plStack_d8;
      goto LAB_005cb700;
    }
    lVar17 = *(long *)(param_3 + 0x30);
    if (lVar17 == 0) {
      puVar10 = (ulong *)(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_3 + 8) & 1) != 0) {
        puVar10 = (ulong *)*puVar10;
      }
                    /* try { // try from 005cae48 to 005cae4b has its CatchHandler @ 005cb744 */
      lVar17 = FUN_00615af4(puVar10);
      *(long *)(param_3 + 0x30) = lVar17;
    }
    plVar14 = (long *)0x0;
    if (*(long *)(lVar17 + 0x20) != 0) {
      plVar14 = (long *)(*(long *)(lVar17 + 0x20) + 8);
    }
    if (*(int *)(lVar17 + 0x18) != 0) {
      lVar17 = (long)*(int *)(lVar17 + 0x18) << 3;
      do {
        lVar18 = *plVar14;
        lVar11 = *(long *)(lVar18 + 0x28);
        if (lVar11 == 0) {
          puVar10 = (ulong *)(*(ulong *)(lVar18 + 8) & 0xfffffffffffffffe);
          if ((*(ulong *)(lVar18 + 8) & 1) != 0) {
            puVar10 = (ulong *)*puVar10;
          }
                    /* try { // try from 005caea4 to 005caea7 has its CatchHandler @ 005cb8b4 */
          lVar11 = FUN_00616230(puVar10);
          *(long *)(lVar18 + 0x28) = lVar11;
        }
        FUN_005e0960(lVar11,&local_90);
        plVar14 = plVar14 + 1;
        lVar17 = lVar17 + -8;
      } while (lVar17 != 0);
    }
    FUN_027c2bd0(&local_90,lStack_88);
    if ((char)uStack_b8 != '\0') {
      FUN_01cfa44c(&local_b0,plStack_a8);
    }
    if (((ulong)plStack_d8 & 1) != 0) {
      (**(code **)(*local_c0 + 0x18))
                (local_c0,ppppppplStack_c8,(ulong)plStack_d8 & 0xfffffffffffffffe,1);
    }
  }
  local_e8 = (long *)FUN_01cf7e20();
  local_f0 = (long *******)0x0;
  local_100 = (long *)0x0;
  uStack_f8 = 0;
  local_220 = 0;
  local_218 = (long *)0x0;
  FUN_005cd630(&local_130,*(undefined8 *)(*param_2 + 8),param_3,&local_220);
  local_d0 = (long *******)&local_d0;
  puVar2 = puVar2 + 0x10;
  plStack_d8 = (long *)(puVar5 + 0x10);
  local_78 = (long **)0x0;
  local_70 = (long *)0x0;
  local_e0 = puVar2;
  ppppppplStack_c8 = local_d0;
  (**(code **)(*local_130 + 0x10))(local_130,&uStack_b8);
  local_78 = &plStack_d8;
  thunk_FUN_006c4e40(&local_e0);
  local_e0 = puVar2;
  FUN_006c4274(&plStack_d8);
  plVar15 = local_128;
  plVar14 = local_130;
  local_130 = (long *)0x0;
  local_128 = (long *)0x0;
  (**(code **)(*plVar14 + 0x30))(&local_200);
  if (plVar15 != (long *)0x0) {
    plVar14 = plVar15 + 1;
    do {
      lVar17 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_128 != (long *)0x0) {
    plVar14 = local_128 + 1;
    do {
      lVar17 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*local_128 + 0x10))(local_128);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_218 == (long *)0x0) {
LAB_005cb024:
    if ((int)local_200 != 0) goto LAB_005cb02c;
LAB_005cb0c8:
    if ((*local_170 & 1) == 0) {
      pbVar12 = local_170 + 1;
    }
    else {
      pbVar12 = *(byte **)(local_170 + 0x10);
    }
    FUN_005f6390(&local_e0,pbVar12);
    if ((local_e8 == plStack_a8) || (uVar13 = (**(code **)(*local_e8 + 0x20))(), (uVar13 & 1) != 0))
    {
      if (((ulong)local_100 & 1) != 0) {
        (**(code **)(*local_e8 + 0x18))(local_e8,local_f0,(ulong)local_100 & 0xfffffffffffffffe,1);
      }
      local_100 = local_c0;
      local_c0 = (long *)((ulong)local_c0 & 0xffffffffffff0000);
      local_f0 = local_b0;
      uStack_f8 = uStack_b8;
    }
    else {
                    /* try { // try from 005cb4c4 to 005cb4cf has its CatchHandler @ 005cb748 */
      FUN_01d0e1a8(&local_100,&local_c0);
      if (((ulong)local_c0 & 1) != 0) {
        (**(code **)(*plStack_a8 + 0x18))
                  (plStack_a8,local_b0,(ulong)local_c0 & 0xfffffffffffffffe,1);
      }
    }
    if (((ulong)local_e0 & 1) == 0) {
      lVar17 = *param_5;
    }
    else {
      (*(code *)(*ppppppplStack_c8)[3])
                (ppppppplStack_c8,local_d0,(ulong)local_e0 & 0xfffffffffffffffe,1);
      lVar17 = *param_5;
    }
    if (lVar17 != 0) {
      ppppppplVar16 = (long *******)((ulong)&local_100 | 1);
      if (((ulong)local_100 & 1) != 0) {
        ppppppplVar16 = local_f0;
      }
      FUN_005cbab4(lVar17,ppppppplVar16);
    }
    FUN_00606de0(&local_1b0);
    if ((char)local_1d8 != '\0') {
      FUN_01cfa44c(&local_1d0,plStack_1c8);
    }
    if (((ulong)plStack_1f8 & 1) != 0) {
      (**(code **)(*local_1e0 + 0x18))
                (local_1e0,ppppppplStack_1e8,(ulong)plStack_1f8 & 0xfffffffffffffffe,1);
    }
    ppppppplVar16 = (long *******)((ulong)&local_100 | 1);
    if (((ulong)local_100 & 1) != 0) {
      ppppppplVar16 = local_f0;
    }
    plVar14 = (long *)FUN_01cf7e20();
    local_118 = plVar14;
    plVar15 = (long *)strlen((char *)ppppppplVar16);
    if ((long *)0xffffffffffffffef < plVar15) {
                    /* try { // try from 005cb738 to 005cb73f has its CatchHandler @ 005cb740 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (plVar15 < (long *)0x17) {
      local_130 = (long *)CONCAT71(local_130._1_7_,(char)((int)plVar15 << 1));
      ppppppplVar19 = (long *******)((ulong)&local_130 | 1);
      if (plVar15 != (long *)0x0) goto LAB_005cb274;
    }
    else {
      ppppppplVar19 =
           (long *******)
           (**(code **)(*plVar14 + 0x10))(plVar14,(ulong)(plVar15 + 2) & 0xfffffffffffffff0,1);
      local_130 = (long *)((ulong)(plVar15 + 2) & 0xfffffffffffffff0 | 1);
      local_128 = plVar15;
      local_120 = ppppppplVar19;
LAB_005cb274:
      memcpy(ppppppplVar19,ppppppplVar16,(size_t)plVar15);
    }
    *(undefined1 *)((long)ppppppplVar19 + (long)plVar15) = 0;
    local_110 = 0;
    local_108 = (long *)0x0;
    FUN_005eb3e8(&local_e0,&local_130,param_4);
    FUN_005cbbc0(&local_200,param_2,&local_e0,param_7);
    FUN_005fa1e0(&local_e0);
    uVar8 = local_148;
    uVar7 = uStack_180;
    uVar6 = uStack_188;
    plVar15 = local_190;
    lVar11 = local_1a0;
    lVar17 = lStack_1a8;
    uVar9 = local_1b0;
    ppppppplVar19 = ppppppplStack_1e8;
    ppppppplVar16 = local_1f0;
    plVar14 = plStack_1f8;
    if ((int)local_200 == 5) {
      lStack_88 = 0;
      local_90 = 0;
      local_78 = (long **)0x0;
      local_80 = 0;
      plStack_d8 = (long *)0x0;
      local_e0 = (undefined *)0x0;
      plStack_a8 = (long *)0x0;
      local_b0 = (long *******)0x0;
      uStack_98 = 0;
      uStack_a0 = 0;
      ppppppplStack_c8 = (long *******)0x0;
      local_d0 = (long *******)0x0;
      uStack_b8 = 0;
      local_c0 = (long *)0x0;
      ppppppplStack_c8 = (long *******)FUN_01cf7e20();
      local_d0 = (long *******)0x0;
      local_e0 = (undefined *)0x0;
      plStack_d8 = (long *)0x0;
      plStack_a8 = (long *)FUN_01cf7e20();
      local_b0 = (long *******)0x0;
      lStack_88 = 0;
      local_c0 = (long *)0x0;
      uStack_b8 = 0;
      local_80 = 0;
      local_78 = (long **)0x0;
      local_70 = (long *)FUN_01cf7e20();
                    /* try { // try from 005cb308 to 005cb31b has its CatchHandler @ 005cb7f0 */
      FUN_005bdb10(&local_220,"No game session creation ticket found during tracking. detail: ",
                   &plStack_1f8);
      uVar13 = (ulong)&local_220 | 1;
      if ((local_220 & 1) != 0) {
        uVar13 = local_210;
      }
      local_238 = 0;
      local_230 = FUN_01cf7e20();
      uStack_228 = 0;
      local_240 = &local_238;
      FUN_005bde30(param_1,&local_e0,0xd,uVar13,&local_240);
      FUN_01cfa44c(&local_240,local_238);
      if ((local_220 & 1) != 0) {
        (**(code **)(*plStack_208 + 0x18))(plStack_208,local_210,local_220 & 0xfffffffffffffffe,1);
      }
      lVar11 = lStack_88;
      lVar17 = local_80;
      if (lStack_88 != 0) {
        while (lVar17 != lVar11) {
          FUN_005bdd78(lVar17 + -0xa8);
          lVar17 = lVar17 + -0xa8;
        }
        local_80 = lVar11;
        (**(code **)(*local_70 + 0x18))(local_70,lStack_88,(long)local_78 - lStack_88,8);
      }
      if (((ulong)local_c0 & 1) != 0) {
        (**(code **)(*plStack_a8 + 0x18))
                  (plStack_a8,local_b0,(ulong)local_c0 & 0xfffffffffffffffe,1);
      }
      if (((ulong)local_e0 & 1) == 0) {
        FUN_005bdc74(&local_200);
      }
      else {
        (*(code *)(*ppppppplStack_c8)[3])
                  (ppppppplStack_c8,local_d0,(ulong)local_e0 & 0xfffffffffffffffe,1);
        FUN_005bdc74(&local_200);
      }
    }
    else {
      *param_1 = (int)local_200;
      *(undefined1 *)(param_1 + 10) = 0;
      plStack_1f8 = (long *)0x0;
      local_1f0 = (long *******)0x0;
      ppppppplStack_1e8 = (long *******)0x0;
      *(long **)(param_1 + 8) = local_1e0;
      *(long ********)(param_1 + 6) = ppppppplVar19;
      *(long ********)(param_1 + 4) = ppppppplVar16;
      *(long **)(param_1 + 2) = plVar14;
      if ((char)local_1d8 != '\0') {
        *(undefined8 *)(param_1 + 0x10) = uStack_1c0;
        *(long **)(param_1 + 0xe) = plStack_1c8;
        *(long ***)(param_1 + 0xc) = local_1d0;
        plVar14 = (long *)(param_1 + 0xe);
        *(long *)(param_1 + 0x12) = local_1b8;
        if (local_1b8 == 0) {
          *(long **)(param_1 + 0xc) = plVar14;
        }
        else {
          *(long **)(*plVar14 + 0x10) = plVar14;
          local_1d0 = &plStack_1c8;
          plStack_1c8 = (long *)0x0;
          local_1b8 = 0;
        }
        *(undefined1 *)(param_1 + 10) = 1;
      }
      lStack_1a8 = 0;
      local_1a0 = 0;
      local_1b0 = 0;
      *(undefined8 *)(param_1 + 0x28) = local_160;
      *(long *)(param_1 + 0x16) = lVar17;
      *(undefined8 *)(param_1 + 0x14) = uVar9;
      *(long ***)(param_1 + 0x1a) = local_198;
      *(long *)(param_1 + 0x18) = lVar11;
      local_190 = (long *)0x0;
      uStack_188 = 0;
      uStack_180 = 0;
      *(undefined8 *)(param_1 + 0x1e) = uVar6;
      *(long **)(param_1 + 0x1c) = plVar15;
      *(undefined8 *)(param_1 + 0x22) = uStack_178;
      *(undefined8 *)(param_1 + 0x20) = uVar7;
      *(undefined8 *)(param_1 + 0x26) = uStack_168;
      *(byte **)(param_1 + 0x24) = local_170;
      *(undefined8 *)(param_1 + 0x2c) = uStack_150;
      *(undefined8 *)(param_1 + 0x2a) = local_158;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      *(undefined8 *)(param_1 + 0x30) = uStack_140;
      *(undefined8 *)(param_1 + 0x2e) = uVar8;
      FUN_005bdc74(&local_200);
    }
    if (local_108 != (long *)0x0) {
      plVar14 = local_108 + 1;
      do {
        lVar17 = *plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = lVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*local_108 + 0x10))(local_108);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (((ulong)local_130 & 1) != 0) {
      plVar14 = local_118;
      ppppppplVar16 = local_120;
      plVar15 = local_130;
      goto LAB_005cb6dc;
    }
  }
  else {
    plVar14 = local_218 + 1;
    do {
      lVar17 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 != 0) goto LAB_005cb024;
    (**(code **)(*local_218 + 0x10))(local_218);
    std::__shared_weak_count::__release_weak();
    if ((int)local_200 == 0) goto LAB_005cb0c8;
LAB_005cb02c:
    lStack_88 = 0;
    local_90 = 0;
    local_78 = (long **)0x0;
    local_80 = 0;
    plStack_d8 = (long *)0x0;
    local_e0 = (undefined *)0x0;
    plStack_a8 = (long *)0x0;
    local_b0 = (long *******)0x0;
    uStack_98 = 0;
    uStack_a0 = 0;
    ppppppplStack_c8 = (long *******)0x0;
    local_d0 = (long *******)0x0;
    uStack_b8 = 0;
    local_c0 = (long *)0x0;
    ppppppplStack_c8 = (long *******)FUN_01cf7e20();
    local_d0 = (long *******)0x0;
    local_e0 = (undefined *)0x0;
    plStack_d8 = (long *)0x0;
    plStack_a8 = (long *)FUN_01cf7e20();
    local_b0 = (long *******)0x0;
    lStack_88 = 0;
    local_c0 = (long *)0x0;
    uStack_b8 = 0;
    local_80 = 0;
    local_78 = (long **)0x0;
    local_70 = (long *)FUN_01cf7e20();
    FUN_005cb908(param_1,&local_200,&local_e0);
    lVar11 = lStack_88;
    lVar17 = local_80;
    if (lStack_88 != 0) {
      while (lVar17 != lVar11) {
        FUN_005bdd78(lVar17 + -0xa8);
        lVar17 = lVar17 + -0xa8;
      }
      local_80 = lVar11;
      (**(code **)(*local_70 + 0x18))(local_70,lStack_88,(long)local_78 - lStack_88,8);
    }
    if (((ulong)local_c0 & 1) != 0) {
      (**(code **)(*plStack_a8 + 0x18))(plStack_a8,local_b0,(ulong)local_c0 & 0xfffffffffffffffe,1);
    }
    if (((ulong)local_e0 & 1) != 0) {
      (*(code *)(*ppppppplStack_c8)[3])
                (ppppppplStack_c8,local_d0,(ulong)local_e0 & 0xfffffffffffffffe,1);
    }
    FUN_00606de0(&local_1b0);
    if ((char)local_1d8 != '\0') {
      FUN_01cfa44c(&local_1d0,plStack_1c8);
    }
    if (((ulong)plStack_1f8 & 1) != 0) {
      plVar14 = local_1e0;
      ppppppplVar16 = ppppppplStack_1e8;
      plVar15 = plStack_1f8;
LAB_005cb6dc:
      (**(code **)(*plVar14 + 0x18))(plVar14,ppppppplVar16,(ulong)plVar15 & 0xfffffffffffffffe,1);
    }
  }
  if (((ulong)local_100 & 1) == 0) {
    return;
  }
  plVar14 = local_e8;
  ppppppplVar16 = local_f0;
  plVar15 = local_100;
LAB_005cb700:
  (**(code **)(*plVar14 + 0x18))(plVar14,ppppppplVar16,(ulong)plVar15 & 0xfffffffffffffffe,1);
  return;
}


