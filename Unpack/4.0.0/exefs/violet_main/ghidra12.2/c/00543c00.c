/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00543c00; name: FUN_00543c00
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00543c00(long param_1)

{
  long *plVar1;
  long **pplVar2;
  void *__src;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long **pplVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 *puVar11;
  void *__dest;
  long lVar12;
  code *pcVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined4 local_3f0 [2];
  ulong local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  long *plStack_3d0;
  char local_3c8;
  undefined8 *local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  long local_3a8;
  undefined8 local_3a0;
  long *plStack_398;
  long **local_390;
  long *local_388;
  undefined8 *******pppppppuStack_380;
  undefined8 *******local_378;
  long *plStack_370;
  undefined1 local_368;
  long *local_360;
  long local_358;
  undefined8 uStack_350;
  long *local_348;
  byte local_340 [8];
  ulong local_338;
  undefined8 uStack_330;
  long **local_328;
  long *plStack_320;
  undefined4 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [8];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  long **local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined **local_2a0;
  undefined8 local_298;
  long **pplStack_290;
  void *local_288;
  undefined ***local_280;
  undefined4 local_278 [2];
  ulong local_270;
  undefined8 local_268;
  undefined8 local_260;
  long *plStack_258;
  undefined1 auStack_250 [8];
  ulong local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  long *plStack_230;
  ulong local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  long *plStack_210;
  undefined8 local_208;
  long **local_200;
  long *local_1f8;
  undefined8 *******pppppppuStack_1f0;
  undefined8 *******local_1e8;
  long *plStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  long *local_1d0;
  long local_1c8;
  undefined8 uStack_1c0;
  long *local_1b8;
  byte local_1b0;
  undefined7 uStack_1af;
  ulong local_1a8;
  undefined8 uStack_1a0;
  long **local_198;
  long *plStack_190;
  ulong local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  long *local_170;
  undefined8 local_168;
  undefined1 auStack_160 [8];
  undefined8 local_158;
  undefined8 uStack_150;
  long **local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  byte local_110;
  undefined7 uStack_10f;
  long *local_108;
  ulong local_100;
  long *local_f8;
  undefined1 auStack_f0 [8];
  long local_e8;
  char local_dc;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  char local_b8;
  MutexType aMStack_b0 [32];
  undefined **local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined ***local_70;
  
  lVar16 = *(long *)(param_1 + 0x140);
  plVar1 = (long *)(param_1 + 0xe0);
  plVar8 = (long *)FUN_01cf7e20();
  plVar9 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x170,8);
  plVar9[2] = 0;
  plVar14 = plVar9 + 1;
  *plVar14 = 0;
  puVar5 = PTR_DAT_047cded8;
  plVar9[3] = (long)plVar8;
  plVar8 = plVar9 + 4;
  *plVar9 = (long)(puVar5 + 0x10);
  FUN_006c4254(plVar8);
  plVar9[4] = (long)(PTR_DAT_047cdee0 + 0x10);
  nn::os::InitializeEvent(plVar9 + 6,0,0);
  plVar9[4] = (long)(PTR_DAT_047cdee8 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar9 + 0xb),false,0);
  *(undefined1 *)(plVar9 + 0x2d) = 0;
  if (plVar9 != (long *)0x0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = *plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_b8 = '\0';
  local_d8 = plVar8;
  local_d0 = plVar9;
  local_c8 = plVar8;
  local_c0 = plVar9;
  nn::os::InitializeMutex(aMStack_b0,false,0);
  plVar9 = local_c0;
  plVar8 = local_c8;
  local_c8 = (long *)0x0;
  local_c0 = (long *)0x0;
  lVar15 = *plVar1;
  lVar12 = *(long *)(lVar15 + 0x20);
  if ((*(byte *)(lVar12 + 0x68) & 1) == 0) {
    lVar12 = lVar12 + 0x69;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x78);
  }
  FUN_00567c9c(&local_110,lVar12);
  uVar10 = (ulong)&local_110 | 1;
  if ((local_110 & 1) != 0) {
    uVar10 = local_100;
  }
  FUN_027dd11c(&local_200,lVar15 + 0x10,uVar10);
  local_298 = FUN_0053a47c(&local_200);
  pplStack_290 = &local_d8;
  local_2a0 = &PTR_LAB_044c83c8;
  local_280 = &local_2a0;
  local_88 = (undefined *)FUN_0053a47c(&local_200);
  local_90 = &PTR_LAB_044c8420;
  local_70 = &local_90;
  FUN_0053a3ac(auStack_f0,&local_200,&local_2a0,&local_90);
  if (local_70 != (undefined ***)0x0) {
    if (local_70 == &local_90) {
      pcVar13 = (code *)(*local_70)[2];
    }
    else {
      pcVar13 = (code *)(*local_70)[3];
    }
    (*pcVar13)();
  }
  if (local_280 != (undefined ***)0x0) {
    if (local_280 == &local_2a0) {
      pcVar13 = (code *)(*local_280)[2];
    }
    else {
      pcVar13 = (code *)(*local_280)[3];
    }
    (*pcVar13)();
  }
  if ((local_1b0 & 1) != 0) {
    (**(code **)((long)*local_198 + 0x18))
              (local_198,uStack_1a0,CONCAT71(uStack_1af,local_1b0) & 0xfffffffffffffffe,1);
  }
  if (((ulong)local_1d0 & 1) != 0) {
    (**(code **)(*local_1b8 + 0x18))(local_1b8,uStack_1c0,(ulong)local_1d0 & 0xfffffffffffffffe,1);
  }
  if (((ulong)pppppppuStack_1f0 & 1) != 0) {
    (**(code **)(*(long *)CONCAT44(uStack_1d4,local_1d8) + 0x18))
              ((long *)CONCAT44(uStack_1d4,local_1d8),plStack_1e0,
               (ulong)pppppppuStack_1f0 & 0xfffffffffffffffe,1);
  }
  if (local_1f8 != (long *)0x0) {
    plVar14 = local_1f8 + 1;
    do {
      lVar12 = *plVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_1f8 + 0x10))(local_1f8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((local_110 & 1) != 0) {
    (**(code **)(*local_f8 + 0x18))
              (local_f8,local_100,CONCAT71(uStack_10f,local_110) & 0xfffffffffffffffe,1);
  }
  FUN_00551dcc(auStack_f0);
  FUN_0053f488(&local_110,*plVar1);
  plStack_190 = (long *)0x0;
  local_198 = (long **)0x0;
  uStack_140 = 0;
  pplVar2 = (long **)(PTR_DAT_047cc108 + 0x10);
  pppppppuStack_1f0 = &pppppppuStack_1f0;
  plVar14 = (long *)(PTR_DAT_047cc110 + 0x10);
  local_148 = (long **)0x0;
  local_200 = pplVar2;
  local_1f8 = plVar14;
  local_1e8 = pppppppuStack_1f0;
  (**(code **)(*plVar8 + 0x10))(plVar8,&local_1d8);
  local_198 = &local_1f8;
  (**(code **)(*(long *)CONCAT71(uStack_10f,local_110) + 0x10))
            ((long *)CONCAT71(uStack_10f,local_110),&local_188);
  local_148 = &local_1f8;
  FUN_006c4e40(&local_200);
  local_200 = pplVar2;
  local_1f8 = plVar14;
  FUN_00248a2c(&local_1f8);
  nn::os::LockMutex(aMStack_b0);
  cVar3 = local_b8;
  nn::os::UnlockMutex(aMStack_b0);
  if (cVar3 == '\0') {
    local_2a0 = (undefined **)((ulong)local_2a0 & 0xffffffffffffff00);
    local_280 = (undefined ***)FUN_01cf7e20();
    local_288 = (void *)0x0;
    local_278[0] = 0;
    local_298 = 0;
    pplStack_290 = (long **)0x0;
    plStack_258 = (long *)FUN_01cf7e20();
    local_260 = 0;
    local_270 = 0;
    local_268 = 0;
    FUN_01e74fb0(auStack_250);
    plStack_230 = (long *)FUN_01cf7e20();
    local_238 = 0;
    local_248 = 0;
    uStack_240 = 0;
    plStack_210 = (long *)FUN_01cf7e20();
    local_218 = 0;
    local_208 = 0;
    local_88 = (undefined *)0x0;
    local_228 = 0;
    uStack_220 = 0;
    local_80 = FUN_01cf7e20();
    local_78 = 0;
    local_90 = &local_88;
    FUN_005454e4(&local_200,&local_2a0,0xe,"Timed out to get my UserSession.",&local_90);
    nn::os::LockMutex(aMStack_b0);
    if (local_b8 == '\0') {
      FUN_00546160(local_d8,&local_200);
      local_b8 = '\x01';
    }
    nn::os::UnlockMutex(aMStack_b0);
    FUN_005453d4(&local_200);
    FUN_01cfa44c(&local_90,local_88);
    if ((local_228 & 1) == 0) {
      if ((local_248 & 1) == 0) goto LAB_00544064;
LAB_00544348:
      (**(code **)(*plStack_230 + 0x18))(plStack_230,local_238,local_248 & 0xfffffffffffffffe,1);
      FUN_01cfa410(auStack_250);
    }
    else {
      (**(code **)(*plStack_210 + 0x18))(plStack_210,local_218,local_228 & 0xfffffffffffffffe,1);
      if ((local_248 & 1) != 0) goto LAB_00544348;
LAB_00544064:
      FUN_01cfa410(auStack_250);
    }
    if ((local_270 & 1) != 0) {
      (**(code **)(*plStack_258 + 0x18))(plStack_258,local_260,local_270 & 0xfffffffffffffffe,1);
    }
    if ((local_298 & 1) != 0) {
      (*(code *)(*local_280)[3])(local_280,local_288,local_298 & 0xfffffffffffffffe,1);
    }
  }
  uVar10 = (**(code **)(*(long *)CONCAT71(uStack_10f,local_110) + 0x20))();
  puVar6 = PTR_DAT_047cbb38;
  puVar5 = PTR_DAT_047cbb30;
  if ((uVar10 & 1) == 0) {
    if (local_108 != (long *)0x0) {
      plVar14 = local_108 + 1;
      do {
        lVar12 = *plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_108 + 0x10))(local_108);
        std::__shared_weak_count::__release_weak();
      }
    }
    pppppppuStack_1f0 = &pppppppuStack_1f0;
    pplVar2 = (long **)(puVar5 + 0x10);
    local_1f8 = (long *)(puVar6 + 0x10);
    plStack_190 = (long *)0x0;
    local_198 = (long **)0x0;
    local_200 = pplVar2;
    local_1e8 = pppppppuStack_1f0;
    (**(code **)(*plVar8 + 0x10))(plVar8,&local_1d8);
    local_198 = &local_1f8;
    thunk_FUN_006c4e40(&local_200);
    local_200 = pplVar2;
    FUN_006c4274(&local_1f8);
    (**(code **)(*plVar8 + 0x30))(&local_200,plVar8);
    if (plVar9 == (long *)0x0) {
LAB_00544220:
      if ((int)local_200 != 0) goto LAB_00544228;
LAB_00544664:
      plStack_300 = local_170;
      uStack_308 = uStack_178;
      local_310 = local_180;
      local_328 = local_198;
      uStack_330 = uStack_1a0;
      local_338 = local_1a8;
      local_378 = local_1e8;
      pppppppuStack_380 = pppppppuStack_1f0;
      local_388 = local_1f8;
      local_390 = (long **)((ulong)local_390 & 0xffffffff00000000);
      local_368 = 0;
      pppppppuStack_1f0 = (undefined8 *******)0x0;
      local_1f8 = (long *)0x0;
      local_1e8 = (undefined8 *******)0x0;
      plStack_370 = plStack_1e0;
      if ((char)local_1d8 != '\0') {
        local_360 = local_1d0;
        uStack_350 = uStack_1c0;
        local_358 = local_1c8;
        local_348 = local_1b8;
        if (local_1b8 == (long *)0x0) {
          local_360 = &local_358;
        }
        else {
          *(long **)(local_1c8 + 0x10) = &local_358;
          local_1d0 = &local_1c8;
          local_1c8 = 0;
          local_1b8 = (long *)0x0;
        }
        local_368 = 1;
      }
      uStack_1a0 = 0;
      local_1a8 = 0;
      local_340[0] = local_1b0;
      local_198 = (long **)0x0;
      plStack_320 = plStack_190;
      local_318 = (undefined4)local_188;
      local_170 = (long *)0x0;
      uStack_178 = 0;
      local_180 = 0;
      uStack_2f8 = local_168;
      FUN_027d3bd4(auStack_2f0,auStack_160);
      local_2b8 = local_128;
      uStack_2c0 = uStack_130;
      local_2c8 = local_138;
      local_2d8 = local_148;
      uStack_2e0 = uStack_150;
      local_2e8 = local_158;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = (long **)0x0;
      uStack_2d0 = uStack_140;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_2b0 = uStack_120;
      local_2a8 = local_118;
    }
    else {
      plVar8 = plVar9 + 1;
      do {
        lVar12 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 != 0) goto LAB_00544220;
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
      if ((int)local_200 == 0) goto LAB_00544664;
LAB_00544228:
      local_2a0 = (undefined **)((ulong)local_2a0 & 0xffffffffffffff00);
      local_280 = (undefined ***)FUN_01cf7e20();
      local_288 = (void *)0x0;
      local_278[0] = 0;
      local_298 = 0;
      pplStack_290 = (long **)0x0;
      plStack_258 = (long *)FUN_01cf7e20();
      local_260 = 0;
      local_270 = 0;
      local_268 = 0;
      FUN_01e74fb0(auStack_250);
      plStack_230 = (long *)FUN_01cf7e20();
      local_238 = 0;
      local_248 = 0;
      uStack_240 = 0;
      plStack_210 = (long *)FUN_01cf7e20();
      local_218 = 0;
      local_208 = 0;
      local_88 = (undefined *)0x0;
      local_228 = 0;
      uStack_220 = 0;
      local_80 = FUN_01cf7e20();
      local_78 = 0;
      local_90 = &local_88;
      FUN_005454e4(&local_390,&local_2a0,0xe,"Failed to get my UserSession.",&local_90);
      FUN_01cfa44c(&local_90,local_88);
      if ((local_228 & 1) == 0) {
        if ((local_248 & 1) == 0) goto LAB_005442c8;
LAB_005443c0:
        (**(code **)(*plStack_230 + 0x18))(plStack_230,local_238,local_248 & 0xfffffffffffffffe,1);
        FUN_01cfa410(auStack_250);
      }
      else {
        (**(code **)(*plStack_210 + 0x18))(plStack_210,local_218,local_228 & 0xfffffffffffffffe,1);
        if ((local_248 & 1) != 0) goto LAB_005443c0;
LAB_005442c8:
        FUN_01cfa410(auStack_250);
      }
      if ((local_270 & 1) != 0) {
        (**(code **)(*plStack_258 + 0x18))(plStack_258,local_260,local_270 & 0xfffffffffffffffe,1);
      }
      if ((local_298 & 1) != 0) {
        (*(code *)(*local_280)[3])(local_280,local_288,local_298 & 0xfffffffffffffffe,1);
      }
    }
    FUN_005453d4(&local_200);
    plVar9 = (long *)0x0;
  }
  else {
    pppppppuStack_1f0 = &pppppppuStack_1f0;
    pplVar2 = (long **)(PTR_DAT_047cbb30 + 0x10);
    local_1f8 = (long *)(PTR_DAT_047cbb38 + 0x10);
    plStack_190 = (long *)0x0;
    local_198 = (long **)0x0;
    local_200 = pplVar2;
    local_1e8 = pppppppuStack_1f0;
    (**(code **)(*(long *)CONCAT71(uStack_10f,local_110) + 0x10))
              ((long *)CONCAT71(uStack_10f,local_110),&local_1d8);
    local_198 = &local_1f8;
    thunk_FUN_006c4e40(&local_200);
    local_200 = pplVar2;
    FUN_006c4274(&local_1f8);
    puVar11 = (undefined4 *)(**(code **)(*(long *)CONCAT71(uStack_10f,local_110) + 0x38))();
    local_2a0 = (undefined **)CONCAT44(local_2a0._4_4_,*puVar11);
    local_280 = (undefined ***)FUN_01cf7e20();
    if ((*(ulong *)(puVar11 + 2) & 1) == 0) {
      pplStack_290 = *(long ***)(puVar11 + 4);
      local_298 = *(ulong *)(puVar11 + 2);
      local_288 = *(void **)(puVar11 + 6);
    }
    else {
      pplVar2 = *(long ***)(puVar11 + 4);
      __src = *(void **)(puVar11 + 6);
      if (pplVar2 < (long **)0x17) {
        __dest = (void *)((long)&local_298 + 1);
        local_298 = CONCAT71(local_298._1_7_,(char)((int)pplVar2 << 1));
      }
      else {
        if ((long **)0xffffffffffffffef < pplVar2) {
                    /* try { // try from 00544d00 to 00544d07 has its CatchHandler @ 00544d08 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        __dest = (void *)(*(code *)(*local_280)[2])
                                   (local_280,(ulong)(pplVar2 + 2) & 0xfffffffffffffff0,1);
        local_298 = (ulong)(pplVar2 + 2) & 0xfffffffffffffff0 | 1;
        pplStack_290 = pplVar2;
        local_288 = __dest;
      }
      memcpy(__dest,__src,(long)pplVar2 + 1);
    }
                    /* try { // try from 00544478 to 0054447b has its CatchHandler @ 00544d20 */
    FUN_00542760(local_278,puVar11 + 10);
    local_200 = (long **)((ulong)local_200 & 0xffffffffffffff00);
    plStack_1e0 = (long *)FUN_01cf7e20();
    local_1e8 = (undefined8 *******)0x0;
    local_1f8 = (long *)0x0;
    pppppppuStack_1f0 = (undefined8 *******)0x0;
    local_1d8 = 0;
    local_1b8 = (long *)FUN_01cf7e20();
    uStack_1c0 = 0;
    local_1d0 = (long *)0x0;
    local_1c8 = 0;
    FUN_01e74fb0(&local_1b0);
    plStack_190 = (long *)FUN_01cf7e20();
    local_198 = (long **)0x0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_170 = (long *)FUN_01cf7e20();
    uStack_178 = 0;
    local_188 = 0;
    local_180 = 0;
    local_168 = 0;
    FUN_00545678(&local_390,&local_2a0,&local_200);
    if ((local_188 & 1) == 0) {
      if ((local_1a8 & 1) == 0) goto LAB_00544508;
LAB_005445c0:
      (**(code **)(*plStack_190 + 0x18))(plStack_190,local_198,local_1a8 & 0xfffffffffffffffe,1);
      FUN_01cfa410(&local_1b0);
      if (((ulong)local_1d0 & 1) != 0) goto LAB_005445f0;
LAB_00544518:
      if (((ulong)local_1f8 & 1) == 0) goto LAB_00544520;
LAB_00544618:
      (**(code **)(*plStack_1e0 + 0x18))
                (plStack_1e0,local_1e8,(ulong)local_1f8 & 0xfffffffffffffffe,1);
    }
    else {
      (**(code **)(*local_170 + 0x18))(local_170,uStack_178,local_188 & 0xfffffffffffffffe,1);
      if ((local_1a8 & 1) != 0) goto LAB_005445c0;
LAB_00544508:
      FUN_01cfa410(&local_1b0);
      if (((ulong)local_1d0 & 1) == 0) goto LAB_00544518;
LAB_005445f0:
      (**(code **)(*local_1b8 + 0x18))(local_1b8,uStack_1c0,(ulong)local_1d0 & 0xfffffffffffffffe,1)
      ;
      if (((ulong)local_1f8 & 1) != 0) goto LAB_00544618;
LAB_00544520:
    }
    if ((char)local_278[0] != '\0') {
      FUN_01cfa44c(&local_270,local_268);
    }
    if ((local_298 & 1) != 0) {
      (*(code *)(*local_280)[3])(local_280,local_288,local_298 & 0xfffffffffffffffe,1);
    }
    if (local_108 != (long *)0x0) {
      plVar8 = local_108 + 1;
      do {
        lVar12 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_108 + 0x10))(local_108);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (local_dc != '\0') {
    FUN_01f6f208(auStack_f0);
  }
  if (local_e8 != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (plVar9 != (long *)0x0) {
    plVar8 = plVar9 + 1;
    do {
      lVar12 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  nn::os::FinalizeMutex(aMStack_b0);
  if (local_c0 == (long *)0x0) {
LAB_00544800:
    if (local_d0 == (long *)0x0) goto LAB_00544820;
LAB_00544808:
    plVar8 = local_d0 + 1;
    do {
      lVar12 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 != 0) goto LAB_00544820;
    (**(code **)(*local_d0 + 0x10))(local_d0);
    std::__shared_weak_count::__release_weak();
  }
  else {
    plVar8 = local_c0 + 1;
    do {
      lVar12 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 != 0) goto LAB_00544800;
    (**(code **)(*local_c0 + 0x10))(local_c0);
    std::__shared_weak_count::__release_weak();
    if (local_d0 != (long *)0x0) goto LAB_00544808;
LAB_00544820:
  }
  if ((int)local_390 != 0) {
    local_1f8 = (long *)0x0;
    local_200 = (long **)0x0;
    FUN_00544ed0(local_3f0,&local_390,&local_200);
    if (local_1f8 != (long *)0x0) {
      plVar1 = local_1f8 + 1;
      do {
        lVar12 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_1f8 + 0x10))(local_1f8);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_005453d4(&local_390);
    goto LAB_00544880;
  }
                    /* try { // try from 0054493c to 00544943 has its CatchHandler @ 00544d10 */
  FUN_0054507c(&local_200,local_340);
  *(undefined8 *)(*plVar1 + 0xa0) = local_168;
  if ((local_188 & 1) != 0) {
    (**(code **)(*local_170 + 0x18))(local_170,uStack_178,local_188 & 0xfffffffffffffffe,1);
  }
  if ((local_1a8 & 1) != 0) {
    (**(code **)(*plStack_190 + 0x18))(plStack_190,local_198,local_1a8 & 0xfffffffffffffffe,1);
  }
  FUN_01cfa410(&local_1b0);
  if (((ulong)local_1d0 & 1) != 0) {
    (**(code **)(*local_1b8 + 0x18))(local_1b8,uStack_1c0,(ulong)local_1d0 & 0xfffffffffffffffe,1);
  }
  if (((ulong)local_1f8 & 1) != 0) {
    (**(code **)(*plStack_1e0 + 0x18))
              (plStack_1e0,local_1e8,(ulong)local_1f8 & 0xfffffffffffffffe,1);
  }
  FUN_005453d4(&local_390);
  if (*(long *)(param_1 + 0xf0) == 0) {
    local_1f8 = (long *)0x0;
    pppppppuStack_1f0 = (undefined8 *******)FUN_01cf7e20();
    local_1e8 = (undefined8 *******)0x0;
    local_200 = &local_1f8;
    FUN_005434fc(local_3f0,plVar1,0,&DAT_03c886bc,&local_200);
    FUN_01cfa44c(&local_200,local_1f8);
    goto LAB_00544880;
  }
  FUN_005421fc(&local_390,plVar1,(long *)(param_1 + 0xf0),param_1 + 0x100,0);
  pplVar7 = local_390;
  pppppppuStack_1f0 = &pppppppuStack_1f0;
  pplVar2 = (long **)(puVar5 + 0x10);
  local_1f8 = (long *)(puVar6 + 0x10);
  plStack_190 = (long *)0x0;
  local_198 = (long **)0x0;
  local_200 = pplVar2;
  local_1e8 = pppppppuStack_1f0;
  (*(code *)(*local_390)[2])(local_390,&local_1d8);
  local_198 = &local_1f8;
  thunk_FUN_006c4e40(&local_200);
  local_200 = pplVar2;
  FUN_006c4274(&local_1f8);
  plVar8 = local_388;
  local_390 = (long **)0x0;
  local_388 = (long *)0x0;
  (*(code *)(*pplVar7)[6])(&local_200,pplVar7);
  if (plVar8 == (long *)0x0) {
LAB_00544ab8:
    if (local_388 == (long *)0x0) goto LAB_00544ad8;
LAB_00544ac0:
    plVar8 = local_388 + 1;
    do {
      lVar12 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 != 0) goto LAB_00544ad8;
    (**(code **)(*local_388 + 0x10))(local_388);
    std::__shared_weak_count::__release_weak();
    if ((int)local_200 == 0) goto LAB_00544c7c;
LAB_00544ae0:
    local_390 = (long **)0x0;
    local_388 = (long *)0x0;
    FUN_0054373c(local_3f0,&local_200,&local_390);
    if (local_388 != (long *)0x0) {
      plVar1 = local_388 + 1;
      do {
        lVar12 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*local_388 + 0x10))(local_388);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    plVar9 = plVar8 + 1;
    do {
      lVar12 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 != 0) goto LAB_00544ab8;
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__shared_weak_count::__release_weak();
    if (local_388 != (long *)0x0) goto LAB_00544ac0;
LAB_00544ad8:
    if ((int)local_200 != 0) goto LAB_00544ae0;
LAB_00544c7c:
    local_388 = (long *)0x0;
    pppppppuStack_380 = (undefined8 *******)FUN_01cf7e20();
    local_378 = (undefined8 *******)0x0;
    local_390 = &local_388;
    FUN_005434fc(local_3f0,plVar1,0,&DAT_03c886bc,&local_390);
    FUN_01cfa44c(&local_390,local_388);
  }
  if ((char)local_1d8 != '\0') {
    FUN_01cfa44c(&local_1d0,local_1c8);
  }
  if (((ulong)local_1f8 & 1) != 0) {
    (**(code **)(*plStack_1e0 + 0x18))
              (plStack_1e0,local_1e8,(ulong)local_1f8 & 0xfffffffffffffffe,1);
  }
LAB_00544880:
  nn::os::LockMutex((MutexType *)(lVar16 + 0x38));
  *(undefined4 *)(lVar16 + 0x58) = local_3f0[0];
  *(undefined8 *)(lVar16 + 0x68) = uStack_3e0;
  *(ulong *)(lVar16 + 0x60) = local_3e8;
  *(long **)(lVar16 + 0x78) = plStack_3d0;
  *(undefined8 *)(lVar16 + 0x70) = local_3d8;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3d8 = 0;
  *(undefined1 *)(lVar16 + 0x80) = 0;
  if (local_3c8 != '\0') {
    *(undefined8 **)(lVar16 + 0x88) = local_3c0;
    *(undefined8 *)(lVar16 + 0x98) = uStack_3b0;
    *(undefined8 *)(lVar16 + 0x90) = local_3b8;
    plVar1 = (long *)(lVar16 + 0x90);
    *(long *)(lVar16 + 0xa0) = local_3a8;
    if (local_3a8 == 0) {
      *(long **)(lVar16 + 0x88) = plVar1;
    }
    else {
      *(long **)(*plVar1 + 0x10) = plVar1;
      local_3c0 = &local_3b8;
      local_3b8 = 0;
      local_3a8 = 0;
    }
    *(undefined1 *)(lVar16 + 0x80) = 1;
  }
  *(long **)(lVar16 + 0xb0) = plStack_398;
  *(undefined8 *)(lVar16 + 0xa8) = local_3a0;
  local_3a0 = 0;
  plStack_398 = (long *)0x0;
  *(undefined1 *)(lVar16 + 0xb8) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar16 + 0x38));
  if (plStack_398 != (long *)0x0) {
    plVar1 = plStack_398 + 1;
    do {
      lVar16 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_398 + 0x10))(plStack_398);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_3c8 != '\0') {
    FUN_01cfa44c(&local_3c0,local_3b8);
  }
  if ((local_3e8 & 1) != 0) {
    (**(code **)(*plStack_3d0 + 0x18))(plStack_3d0,local_3d8,local_3e8 & 0xfffffffffffffffe,1);
  }
  return 1;
}


