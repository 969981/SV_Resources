/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0067c844; name: FUN_0067c844
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_0067c844(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  int *piVar5;
  undefined2 uVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  undefined *puVar10;
  int iVar11;
  long *******ppppppplVar12;
  ulong uVar13;
  uint uVar14;
  ulong *puVar15;
  byte *pbVar16;
  long lVar17;
  undefined *puVar18;
  byte *pbVar19;
  long lVar20;
  long *******ppppppplVar21;
  long ******pppppplVar22;
  long *******ppppppplVar23;
  ulong uVar24;
  long *******ppppppplVar25;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  byte *pbVar31;
  int *piVar32;
  ulong uVar33;
  bool bVar34;
  long lVar35;
  undefined4 local_2b0 [2];
  long *******local_2a8;
  long *******ppppppplStack_2a0;
  long *******local_298;
  long *plStack_290;
  char local_288;
  long *local_280;
  long local_278;
  undefined8 uStack_270;
  long local_268;
  long local_260;
  long lStack_258;
  long local_250;
  long *plStack_248;
  long *local_240;
  long *local_238;
  long *local_230;
  long *******local_228;
  long *******ppppppplStack_220;
  long *******local_218;
  long *plStack_210;
  char local_208;
  long *local_200;
  long local_1f8;
  undefined8 uStack_1f0;
  long local_1e8;
  undefined *local_1e0;
  long *******local_1d8;
  long *******ppppppplStack_1d0;
  long *******local_1c8;
  long *plStack_1c0;
  char local_1b8 [8];
  long *local_1b0;
  long local_1a8;
  undefined8 uStack_1a0;
  long local_198;
  undefined1 auStack_190 [24];
  long *******local_178;
  long local_170;
  long ******local_150;
  long *plStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long local_108;
  long *local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  long *local_e0;
  long *******local_d8;
  long *******local_d0;
  long *******ppppppplStack_c8;
  long *******local_c0;
  long *local_b8;
  char local_b0 [8];
  long *local_a8;
  long local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined1 auStack_88 [8];
  ulong local_80;
  undefined *local_78;
  long *******local_70;
  undefined8 local_68;
  
  lVar17 = *(long *)(param_1 + 0x170);
  local_f8 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_e0 = (long *)FUN_01cf7e20();
  piVar32 = *(int **)(param_1 + 0x130);
  piVar5 = *(int **)(param_1 + 0x138);
  if (piVar32 != piVar5) {
    puVar1 = PTR_DAT_047cbb30 + 0x10;
    ppppppplVar21 = (long *******)(PTR_DAT_047cbb38 + 0x10);
    do {
      lVar26 = *(long *)(*(long *)(param_1 + 0xf8) + (long)*piVar32 * 8 + 8);
      if (*(int *)(lVar26 + 0x1c) == 5) {
        lVar35 = *(long *)(lVar26 + 0x10);
      }
      else {
                    /* try { // try from 0067c954 to 0067c973 has its CatchHandler @ 0067d834 */
        FUN_00696bf8(lVar26);
        *(undefined4 *)(lVar26 + 0x1c) = 5;
        puVar15 = (ulong *)(*(ulong *)(lVar26 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(lVar26 + 8) & 1) != 0) {
          puVar15 = (ulong *)*puVar15;
        }
        lVar35 = FUN_0069def0(puVar15);
        *(long *)(lVar26 + 0x10) = lVar35;
      }
                    /* try { // try from 0067c97c to 0067c987 has its CatchHandler @ 0067d85c */
      FUN_00693fd4(&local_230,0);
                    /* try { // try from 0067c988 to 0067c997 has its CatchHandler @ 0067d854 */
      FUN_00267510(&local_1e0,"current");
      ppppppplVar23 = (long *******)((ulong)&local_1e0 | 1);
      if (((ulong)local_1e0 & 1) != 0) {
        ppppppplVar23 = ppppppplStack_1d0;
      }
                    /* try { // try from 0067c9ac to 0067c9b3 has its CatchHandler @ 0067d838 */
      FUN_0067d9e4(&local_230,ppppppplVar23);
      if (((ulong)local_1e0 & 1) != 0) {
        (*(code *)(*local_1c8)[3])
                  (local_1c8,ppppppplStack_1d0,(ulong)local_1e0 & 0xfffffffffffffffe,1);
      }
      FUN_0067df04(&local_150,*(undefined8 *)(*(long *)(param_1 + 200) + 8),&local_230,
                   param_1 + 0x150);
      local_178 = (long *******)0x0;
      local_170 = 0;
      local_1e0 = puVar1;
      local_1d8 = ppppppplVar21;
      ppppppplStack_1d0 = (long *******)&ppppppplStack_1d0;
      local_1c8 = (long *******)&ppppppplStack_1d0;
      (*(code *)(*local_150)[2])(local_150,local_1b8);
      local_178 = (long *******)&local_1d8;
      thunk_FUN_006c4e40(&local_1e0);
      local_1e0 = puVar1;
      FUN_006c4274(&local_1d8);
      plVar4 = plStack_148;
      pppppplVar22 = local_150;
      local_150 = (long ******)0x0;
      plStack_148 = (long *)0x0;
      (*(code *)(*pppppplVar22)[6])(&local_d8);
      if (plVar4 != (long *)0x0) {
        plVar2 = plVar4 + 1;
        do {
          lVar26 = *plVar2;
          cVar7 = '\x01';
          bVar34 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar34) {
            *plVar2 = lVar26 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_148 != (long *)0x0) {
        plVar4 = plStack_148 + 1;
        do {
          lVar26 = *plVar4;
          cVar7 = '\x01';
          bVar34 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar34) {
            *plVar4 = lVar26 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plStack_148 + 0x10))(plStack_148);
          std::__shared_weak_count::__release_weak();
        }
      }
      puVar10 = PTR_DAT_047cba80;
      if ((int)local_d8 != 0) {
        plStack_248 = (long *)FUN_01cf7e20();
        local_298 = local_c0;
        ppppppplStack_2a0 = ppppppplStack_c8;
        local_2a8 = local_d0;
        local_2b0[0] = (int)local_d8;
        ppppppplStack_c8 = (long *******)0x0;
        local_c0 = (long *******)0x0;
        local_d0 = (long *******)0x0;
        plStack_290 = local_b8;
        local_288 = '\0';
        if (local_b0[0] != '\0') {
          local_280 = local_a8;
          uStack_270 = uStack_98;
          local_278 = local_a0;
          local_268 = local_90;
          if (local_90 == 0) {
            local_280 = &local_278;
          }
          else {
            *(long **)(local_a0 + 0x10) = &local_278;
            local_a0 = 0;
            local_90 = 0;
            local_a8 = &local_a0;
          }
          local_288 = '\x01';
        }
        local_260 = 0;
        lStack_258 = 0;
        local_250 = 0;
        FUN_006946b8(auStack_88);
        if (local_b0[0] != '\0') {
          FUN_01cfa44c(&local_a8,local_a0);
        }
        if (((ulong)local_d0 & 1) != 0) {
          (**(code **)(*local_b8 + 0x18))(local_b8,local_c0,(ulong)local_d0 & 0xfffffffffffffffe,1);
        }
        FUN_00694028(&local_230);
        goto LAB_0067d51c;
      }
      puVar15 = (ulong *)(local_80 & 0xfffffffffffffffe);
      if ((local_80 & 1) != 0) {
        puVar15 = (ulong *)*puVar15;
      }
      if (local_78 == PTR_DAT_047cba80) {
                    /* try { // try from 0067cae0 to 0067cb37 has its CatchHandler @ 0067d864 */
        FUN_001fcdc8(&local_78,puVar15,PTR_DAT_047cba80);
      }
      puVar3 = (undefined8 *)(lVar35 + 0x18);
      puVar15 = (ulong *)(*(ulong *)(lVar35 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(lVar35 + 8) & 1) == 0) {
        puVar18 = (undefined *)*puVar3;
        if (puVar18 != puVar10) goto LAB_0067cb0c;
LAB_0067cb34:
        FUN_001fcdc8(puVar3,puVar15);
      }
      else {
        puVar15 = (ulong *)*puVar15;
        puVar18 = (undefined *)*puVar3;
        if (puVar18 == puVar10) goto LAB_0067cb34;
LAB_0067cb0c:
        FUN_001fcec0(puVar18,local_78);
      }
      FUN_006946b8(auStack_88);
      if (local_b0[0] != '\0') {
        FUN_01cfa44c(&local_a8,local_a0);
      }
      if (((ulong)local_d0 & 1) != 0) {
        (**(code **)(*local_b8 + 0x18))(local_b8,local_c0,(ulong)local_d0 & 0xfffffffffffffffe,1);
      }
      FUN_00694028(&local_230);
      lVar26 = *(long *)(*(long *)(param_1 + 200) + 8);
      local_108 = *(long *)(lVar26 + 0x48);
      local_100 = *(long **)(lVar26 + 0x50);
      if (local_100 != (long *)0x0) {
        plVar4 = local_100 + 1;
        do {
          cVar7 = '\x01';
          bVar34 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar34) {
            *plVar4 = *plVar4 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      plStack_148 = *(long **)(local_108 + 0x1c8);
      local_150 = *(long *******)(local_108 + 0x1c0);
      uStack_138 = *(undefined8 *)(local_108 + 0x1d8);
      uStack_140 = *(undefined8 *)(local_108 + 0x1d0);
      uStack_128 = *(undefined8 *)(local_108 + 0x1e8);
      local_130 = *(undefined8 *)(local_108 + 0x1e0);
      uStack_118 = *(undefined8 *)(local_108 + 0x1f8);
      uStack_120 = *(undefined8 *)(local_108 + 0x1f0);
      FUN_00683668(&local_1e0,piVar32 + 4);
      pbVar19 = *(byte **)(lVar35 + 0x18);
      if ((*pbVar19 & 1) == 0) {
        pbVar19 = pbVar19 + 1;
      }
      else {
        pbVar19 = *(byte **)(pbVar19 + 0x10);
      }
      uVar14 = FUN_00254720("ugcstore.upload");
      FUN_00680dd0(&local_240,&local_108,&local_150,pbVar19,&local_1e0,uVar14 & 1,param_1 + 0x150);
      ppppppplVar23 = (long *******)(PTR_DAT_047cbb30 + 0x10);
      local_d0 = (long *******)(PTR_DAT_047cbb38 + 0x10);
      local_70 = (long *******)0x0;
      local_68 = 0;
      local_d8 = ppppppplVar23;
      ppppppplStack_c8 = (long *******)&ppppppplStack_c8;
      local_c0 = (long *******)&ppppppplStack_c8;
      (**(code **)(*local_240 + 0x10))(local_240,local_b0);
      local_70 = (long *******)&local_d0;
      thunk_FUN_006c4e40(&local_d8);
      local_d8 = ppppppplVar23;
      FUN_006c4274(&local_d0);
      plVar2 = local_238;
      plVar4 = local_240;
      local_240 = (long *)0x0;
      local_238 = (long *)0x0;
      (**(code **)(*plVar4 + 0x30))(&local_230);
      if (plVar2 != (long *)0x0) {
        plVar4 = plVar2 + 1;
        do {
          lVar26 = *plVar4;
          cVar7 = '\x01';
          bVar34 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar34) {
            *plVar4 = lVar26 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_238 != (long *)0x0) {
        plVar4 = local_238 + 1;
        do {
          lVar26 = *plVar4;
          cVar7 = '\x01';
          bVar34 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar34) {
            *plVar4 = lVar26 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*local_238 + 0x10))(local_238);
          std::__shared_weak_count::__release_weak();
        }
      }
      if ((int)local_230 == 0) {
        bVar34 = true;
      }
      else {
        plStack_248 = (long *)FUN_01cf7e20();
        local_298 = local_218;
        ppppppplStack_2a0 = ppppppplStack_220;
        local_2a8 = local_228;
        ppppppplStack_220 = (long *******)0x0;
        local_218 = (long *******)0x0;
        local_228 = (long *******)0x0;
        local_288 = '\0';
        if (local_208 != '\0') {
          local_280 = local_200;
          uStack_270 = uStack_1f0;
          local_278 = local_1f8;
          local_268 = local_1e8;
          if (local_1e8 == 0) {
            local_280 = &local_278;
          }
          else {
            *(long **)(local_1f8 + 0x10) = &local_278;
            local_1f8 = 0;
            local_1e8 = 0;
            local_200 = &local_1f8;
          }
          local_288 = '\x01';
        }
        bVar34 = false;
        local_260 = 0;
        lStack_258 = 0;
        local_250 = 0;
        local_2b0[0] = (int)local_230;
        plStack_290 = plStack_210;
      }
      if (local_208 != '\0') {
        FUN_01cfa44c(&local_200,local_1f8);
      }
      if (((ulong)local_228 & 1) != 0) {
        (**(code **)(*plStack_210 + 0x18))
                  (plStack_210,local_218,(ulong)local_228 & 0xfffffffffffffffe,1);
      }
      FUN_01e7396c(&local_1e0);
      if (local_100 != (long *)0x0) {
        plVar4 = local_100 + 1;
        do {
          lVar26 = *plVar4;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *plVar4 = lVar26 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (!bVar34) goto LAB_0067d51c;
      piVar32 = piVar32 + 0x28;
    } while (piVar32 != piVar5);
  }
  if (*(int *)(param_1 + 0xf0) != 0) {
    uVar29 = 0;
    do {
      uVar30 = local_f0;
      lVar26 = *(long *)(*(long *)(param_1 + 0xf8) + ((long)(uVar29 << 0x20) >> 0x1d) + 8);
      if (*(int *)(lVar26 + 0x1c) == 6) {
        uVar27 = *(undefined8 *)(lVar26 + 0x10);
        lVar26 = *(long *)(param_1 + 0x110);
        if (local_f0 < local_e8) {
          FUN_006830a4(local_f0,*(undefined2 *)(lVar26 + uVar29 * 2),uVar27);
          local_f0 = uVar30 + 0x28;
        }
        else {
          lVar35 = (long)(local_f0 - local_f8) >> 3;
          uVar30 = lVar35 * -0x3333333333333333 + 1;
          if (0x666666666666666 < uVar30) {
                    /* try { // try from 0067d710 to 0067d717 has its CatchHandler @ 0067d7c0 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar20 = (long)(local_e8 - local_f8) >> 3;
          uVar24 = lVar20 * -0x6666666666666666;
          if (uVar30 <= uVar24) {
            uVar30 = uVar24;
          }
          if (0x333333333333332 < (ulong)(lVar20 * -0x3333333333333333)) {
            uVar30 = 0x666666666666666;
          }
          if (uVar30 == 0) {
            lVar20 = 0;
          }
          else {
            lVar20 = (**(code **)(*local_e0 + 0x10))(local_e0,uVar30 * 0x28,8);
          }
          uVar28 = lVar20 + lVar35 * 8;
          uVar33 = lVar20 + uVar30 * 0x28;
          FUN_006830a4(uVar28,*(undefined2 *)(lVar26 + uVar29 * 2),uVar27);
          uVar24 = local_e8;
          uVar30 = local_f8;
          local_e8 = uVar33;
          uVar33 = uVar28 + 0x28;
          uVar13 = local_f8;
          if (local_f0 != local_f8) {
            lVar26 = 0;
            do {
              lVar35 = local_f0 + lVar26;
              uVar6 = *(undefined2 *)(lVar35 + -0x28);
              lVar20 = uVar28 + lVar26;
              *(undefined8 *)(lVar20 + -0x18) = 0;
              *(undefined8 *)(lVar20 + -0x10) = 0;
              lVar26 = lVar26 + -0x28;
              *(undefined8 *)(lVar20 + -0x20) = 0;
              *(undefined2 *)(lVar20 + -0x28) = uVar6;
              *(undefined8 *)(lVar20 + -8) = *(undefined8 *)(lVar35 + -8);
              uVar27 = *(undefined8 *)(lVar35 + -0x20);
              *(undefined8 *)(lVar20 + -0x18) = *(undefined8 *)(lVar35 + -0x18);
              *(undefined8 *)(lVar20 + -0x20) = uVar27;
              *(undefined8 *)(lVar20 + -0x10) = *(undefined8 *)(lVar35 + -0x10);
              *(undefined8 *)(lVar35 + -0x20) = 0;
              *(undefined8 *)(lVar35 + -0x18) = 0;
              *(undefined8 *)(lVar35 + -0x10) = 0;
            } while (local_f8 - local_f0 != lVar26);
            uVar28 = uVar28 + lVar26;
            uVar13 = local_f0;
          }
          while (uVar9 = uVar13, local_f8 = uVar28, local_f0 = uVar33, uVar9 != uVar30) {
            pbVar19 = *(byte **)(uVar9 - 0x20);
            uVar33 = local_f0;
            uVar28 = local_f8;
            uVar13 = uVar9 - 0x28;
            if (pbVar19 != (byte *)0x0) {
              if (*(byte **)(uVar9 - 0x18) == pbVar19) {
                pbVar16 = pbVar19;
              }
              else {
                pbVar16 = *(byte **)(uVar9 - 0x18);
                do {
                  pbVar31 = pbVar16 + -0x20;
                  if ((*pbVar31 & 1) != 0) {
                    (**(code **)(**(long **)(pbVar16 + -8) + 0x18))
                              (*(long **)(pbVar16 + -8),*(undefined8 *)(pbVar16 + -0x10),
                               *(ulong *)(pbVar16 + -0x20) & 0xfffffffffffffffe,1);
                  }
                  pbVar16 = pbVar31;
                } while (pbVar19 != pbVar31);
                pbVar16 = *(byte **)(uVar9 - 0x20);
              }
              lVar26 = *(long *)(uVar9 - 0x10);
              plVar4 = *(long **)(uVar9 - 8);
              *(byte **)(uVar9 - 0x18) = pbVar19;
              (**(code **)(*plVar4 + 0x18))(plVar4,pbVar16,lVar26 - (long)pbVar16,8);
              uVar33 = local_f0;
              uVar28 = local_f8;
            }
          }
          if (uVar30 != 0) {
            (**(code **)(*local_e0 + 0x18))(local_e0,uVar30,uVar24 - uVar30,8);
          }
        }
      }
      uVar29 = uVar29 + 1;
    } while (uVar29 < (ulong)(long)*(int *)(param_1 + 0xf0));
  }
                    /* try { // try from 0067d06c to 0067d07f has its CatchHandler @ 0067d830 */
  FUN_00267510(&local_1e0,"current");
  lVar26 = param_1 + 0xd8;
  ppppppplVar21 = (long *******)((ulong)&local_1e0 | 1);
  if (((ulong)local_1e0 & 1) != 0) {
    ppppppplVar21 = ppppppplStack_1d0;
  }
                    /* try { // try from 0067d098 to 0067d09f has its CatchHandler @ 0067d804 */
  FUN_0067db04(lVar26,ppppppplVar21);
  if (((ulong)local_1e0 & 1) != 0) {
    (*(code *)(*local_1c8)[3])(local_1c8,ppppppplStack_1d0,(ulong)local_1e0 & 0xfffffffffffffffe,1);
  }
  FUN_0067f64c(&local_230,*(undefined8 *)(*(long *)(param_1 + 200) + 8),lVar26,param_1 + 0x150);
                    /* try { // try from 0067d0dc to 0067d0e3 has its CatchHandler @ 0067d7c4 */
  FUN_006928dc(lVar26);
  ppppppplVar21 = (long *******)(PTR_DAT_047cbb30 + 0x10);
  ppppppplStack_c8 = (long *******)&ppppppplStack_c8;
  local_68 = 0;
  local_70 = (long *******)0x0;
  local_d0 = (long *******)(PTR_DAT_047cbb38 + 0x10);
  local_d8 = ppppppplVar21;
  local_c0 = ppppppplStack_c8;
  (**(code **)(*local_230 + 0x10))(local_230,local_b0);
  local_70 = (long *******)&local_d0;
  thunk_FUN_006c4e40(&local_d8);
  local_d8 = ppppppplVar21;
  FUN_006c4274(&local_d0);
  ppppppplVar21 = local_228;
  plVar4 = local_230;
  local_230 = (long *)0x0;
  local_228 = (long *******)0x0;
  (**(code **)(*plVar4 + 0x30))(&local_1e0);
  if (ppppppplVar21 != (long *******)0x0) {
    ppppppplVar23 = ppppppplVar21 + 1;
    do {
      pppppplVar22 = *ppppppplVar23;
      cVar7 = '\x01';
      bVar34 = (bool)ExclusiveMonitorPass(ppppppplVar23,0x10);
      if (bVar34) {
        *ppppppplVar23 = (long ******)((long)pppppplVar22 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (pppppplVar22 == (long ******)0x0) {
      (*(code *)(*ppppppplVar21)[2])(ppppppplVar21);
      std::__shared_weak_count::__release_weak();
      goto joined_r0x0067d184;
    }
  }
joined_r0x0067d184:
  if ((int)local_1e0 == 0) {
    iVar11 = (int)local_178;
    uVar29 = (ulong)local_178 & 0xffffffff;
    local_d0 = (long *******)0x0;
    local_d8 = (long *******)0x0;
    ppppppplStack_c8 = (long *******)0x0;
    local_c0 = (long *******)FUN_01cf7e20();
    if (0 < iVar11) {
      uVar30 = 0;
      ppppppplVar21 = (long *******)0x0;
      ppppppplVar23 = (long *******)0x0;
      while( true ) {
        uVar24 = (ulong)*(ushort *)(*(long *)(param_1 + 0x110) + uVar30 * 2);
        if (uVar24 < (ulong)((long)ppppppplVar23 - (long)ppppppplVar21 >> 3)) {
          FUN_00680d84(ppppppplVar21 + uVar24);
          ppppppplVar21 = local_d8;
          ppppppplVar23 = ppppppplStack_c8;
        }
        else {
          FUN_00680d38(&local_150,*(undefined8 *)(local_170 + uVar30 * 8 + 8));
          if (local_d0 < ppppppplStack_c8) {
            *local_d0 = local_150;
            ppppppplVar21 = local_d8;
            local_d0 = local_d0 + 1;
            ppppppplVar23 = ppppppplStack_c8;
          }
          else {
            lVar26 = (long)local_d0 - (long)local_d8 >> 3;
            uVar24 = lVar26 + 1;
            if (uVar24 >> 0x3d != 0) {
                    /* try { // try from 0067d718 to 0067d71f has its CatchHandler @ 0067d720 */
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            uVar33 = (long)ppppppplStack_c8 - (long)local_d8 >> 2;
            if (uVar24 <= uVar33) {
              uVar24 = uVar33;
            }
            if (0xffffffffffffffe < (ulong)((long)ppppppplStack_c8 - (long)local_d8 >> 3)) {
              uVar24 = 0x1fffffffffffffff;
            }
            if (uVar24 == 0) {
              lVar35 = 0;
            }
            else {
              lVar35 = (*(code *)(*local_c0)[2])(local_c0,uVar24 << 3,8);
            }
            ppppppplVar12 = local_d8;
            ppppppplVar21 = (long *******)(lVar35 + lVar26 * 8);
            ppppppplVar25 = ppppppplVar21 + 1;
            *ppppppplVar21 = local_150;
            ppppppplVar23 = (long *******)(lVar35 + uVar24 * 8);
            while (local_d0 != local_d8) {
              local_d0 = local_d0 + -1;
              ppppppplVar21 = ppppppplVar21 + -1;
              *ppppppplVar21 = *local_d0;
            }
            local_d0 = ppppppplVar25;
            if (local_d8 != (long *******)0x0) {
              lVar26 = (long)ppppppplStack_c8 - (long)local_d8;
              local_d8 = ppppppplVar21;
              ppppppplStack_c8 = ppppppplVar23;
              (*(code *)(*local_c0)[3])(local_c0,ppppppplVar12,lVar26,8);
              ppppppplVar21 = local_d8;
              ppppppplVar23 = ppppppplStack_c8;
            }
          }
        }
        ppppppplStack_c8 = ppppppplVar23;
        local_d8 = ppppppplVar21;
        uVar30 = uVar30 + 1;
        if (uVar30 == uVar29) break;
        ppppppplVar21 = local_d8;
        ppppppplVar23 = local_d0;
      }
    }
    FUN_0067dc24(local_2b0,&local_1e0,&local_d8);
    if (local_d8 != (long *******)0x0) {
      local_d0 = local_d8;
      (*(code *)(*local_c0)[3])(local_c0,local_d8,(long)ppppppplStack_c8 - (long)local_d8,8);
    }
  }
  else {
    plStack_248 = (long *)FUN_01cf7e20();
    local_298 = local_1c8;
    ppppppplStack_2a0 = ppppppplStack_1d0;
    local_2a8 = local_1d8;
    local_288 = '\0';
    local_1d8 = (long *******)0x0;
    ppppppplStack_1d0 = (long *******)0x0;
    local_1c8 = (long *******)0x0;
    local_2b0[0] = (int)local_1e0;
    plStack_290 = plStack_1c0;
    if (local_1b8[0] != '\0') {
      local_280 = local_1b0;
      uStack_270 = uStack_1a0;
      local_278 = local_1a8;
      local_268 = local_198;
      if (local_198 == 0) {
        local_280 = &local_278;
      }
      else {
        *(long **)(local_1a8 + 0x10) = &local_278;
        local_1b0 = &local_1a8;
        local_1a8 = 0;
        local_198 = 0;
      }
      local_288 = '\x01';
    }
    local_250 = 0;
    local_260 = 0;
    lStack_258 = 0;
  }
  FUN_0069344c(auStack_190);
  if (local_1b8[0] != '\0') {
    FUN_01cfa44c(&local_1b0,local_1a8);
  }
  if (((ulong)local_1d8 & 1) != 0) {
    (**(code **)(*plStack_1c0 + 0x18))
              (plStack_1c0,local_1c8,(ulong)local_1d8 & 0xfffffffffffffffe,1);
  }
  if (local_228 != (long *******)0x0) {
    ppppppplVar21 = local_228 + 1;
    do {
      pppppplVar22 = *ppppppplVar21;
      cVar7 = '\x01';
      bVar34 = (bool)ExclusiveMonitorPass(ppppppplVar21,0x10);
      if (bVar34) {
        *ppppppplVar21 = (long ******)((long)pppppplVar22 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (pppppplVar22 == (long ******)0x0) {
      (*(code *)(*local_228)[2])(local_228);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_0067d51c:
  uVar29 = local_f8;
  uVar30 = local_f0;
  if (local_f8 != 0) {
    while (uVar24 = uVar30, uVar24 != uVar29) {
      pbVar19 = *(byte **)(uVar24 - 0x20);
      uVar30 = uVar24 - 0x28;
      if (pbVar19 != (byte *)0x0) {
        if (*(byte **)(uVar24 - 0x18) == pbVar19) {
          pbVar16 = pbVar19;
        }
        else {
          pbVar16 = *(byte **)(uVar24 - 0x18);
          do {
            pbVar31 = pbVar16 + -0x20;
            if ((*pbVar31 & 1) != 0) {
              (**(code **)(**(long **)(pbVar16 + -8) + 0x18))
                        (*(long **)(pbVar16 + -8),*(undefined8 *)(pbVar16 + -0x10),
                         *(ulong *)(pbVar16 + -0x20) & 0xfffffffffffffffe,1);
            }
            pbVar16 = pbVar31;
          } while (pbVar19 != pbVar31);
          pbVar16 = *(byte **)(uVar24 - 0x20);
        }
        lVar26 = *(long *)(uVar24 - 0x10);
        plVar4 = *(long **)(uVar24 - 8);
        *(byte **)(uVar24 - 0x18) = pbVar19;
        (**(code **)(*plVar4 + 0x18))(plVar4,pbVar16,lVar26 - (long)pbVar16,8);
      }
    }
    local_f0 = uVar29;
    (**(code **)(*local_e0 + 0x18))(local_e0,local_f8,local_e8 - local_f8,8);
  }
  nn::os::LockMutex((MutexType *)(lVar17 + 0x38));
  *(undefined4 *)(lVar17 + 0x58) = local_2b0[0];
  *(long ********)(lVar17 + 0x68) = ppppppplStack_2a0;
  *(long ********)(lVar17 + 0x60) = local_2a8;
  *(long **)(lVar17 + 0x78) = plStack_290;
  *(long ********)(lVar17 + 0x70) = local_298;
  local_2a8 = (long *******)0x0;
  ppppppplStack_2a0 = (long *******)0x0;
  local_298 = (long *******)0x0;
  *(undefined1 *)(lVar17 + 0x80) = 0;
  if (local_288 != '\0') {
    *(long **)(lVar17 + 0x88) = local_280;
    *(undefined8 *)(lVar17 + 0x98) = uStack_270;
    *(long *)(lVar17 + 0x90) = local_278;
    plVar4 = (long *)(lVar17 + 0x90);
    *(long *)(lVar17 + 0xa0) = local_268;
    if (local_268 == 0) {
      *(long **)(lVar17 + 0x88) = plVar4;
    }
    else {
      *(long **)(*plVar4 + 0x10) = plVar4;
      local_280 = &local_278;
      local_278 = 0;
      local_268 = 0;
    }
    *(undefined1 *)(lVar17 + 0x80) = 1;
  }
  *(long *)(lVar17 + 0xb0) = lStack_258;
  *(long *)(lVar17 + 0xa8) = local_260;
  *(long **)(lVar17 + 0xc0) = plStack_248;
  *(long *)(lVar17 + 0xb8) = local_250;
  local_250 = 0;
  local_260 = 0;
  lStack_258 = 0;
  *(undefined1 *)(lVar17 + 200) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar17 + 0x38));
  if (local_260 != 0) {
    lStack_258 = local_260;
    (**(code **)(*plStack_248 + 0x18))(plStack_248,local_260,local_250 - local_260,8);
  }
  if (local_288 != '\0') {
    FUN_01cfa44c(&local_280,local_278);
  }
  if (((ulong)local_2a8 & 1) != 0) {
    (**(code **)(*plStack_290 + 0x18))
              (plStack_290,local_298,(ulong)local_2a8 & 0xfffffffffffffffe,1);
  }
  return 1;
}


