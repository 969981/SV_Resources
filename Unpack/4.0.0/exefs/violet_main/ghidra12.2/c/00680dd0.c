/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00680dd0; name: FUN_00680dd0
 */


/* WARNING: Removing unreachable block (ram,0x006814e4) */

void FUN_00680dd0(undefined8 *param_1,long *param_2,long *param_3,char *param_4,undefined8 param_5,
                 byte param_6,long *param_7)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  size_t sVar4;
  void *pvVar5;
  long *plVar6;
  size_t __n;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  void *__dest;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  undefined1 auStack_5b0 [144];
  byte local_520;
  long local_518;
  long *local_510;
  ulong local_500;
  size_t sStack_4f8;
  void *local_4f0;
  long *local_4e8;
  long *local_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long local_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  ulong local_4a0;
  size_t sStack_498;
  void *local_490;
  long *plStack_488;
  undefined1 auStack_480 [144];
  byte local_3f0;
  long local_3e8;
  long *local_3e0;
  long *local_3d0;
  long *local_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long local_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  ulong local_380;
  size_t sStack_378;
  void *local_370;
  long *local_368;
  undefined1 auStack_360 [144];
  byte local_2d0;
  long local_2c8;
  long *local_2c0;
  long *local_2b0;
  long *local_2a0;
  long *plStack_298;
  long lStack_290;
  long lStack_288;
  long local_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  ulong local_260;
  size_t sStack_258;
  void *local_250;
  long *local_248;
  undefined1 auStack_240 [144];
  byte local_1b0;
  long local_1a8;
  long *local_1a0;
  long *local_190;
  long *local_180;
  long *plStack_178;
  long local_170;
  long lStack_168;
  long local_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  ulong local_140;
  size_t sStack_138;
  void *local_130;
  long *plStack_128;
  undefined1 auStack_120 [144];
  byte local_90;
  long local_88;
  long *local_80;
  long *local_70;
  
  plVar6 = (long *)FUN_01cf7e20();
  local_4e8 = plVar6;
  __n = strlen(param_4);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 006815f4 to 006815fb has its CatchHandler @ 00681620 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_500 = CONCAT71(local_500._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_500 | 1);
    if (__n != 0) goto LAB_00680e7c;
  }
  else {
    uVar12 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar12,1);
    local_500 = uVar12 | 1;
    sStack_4f8 = __n;
    local_4f0 = __dest;
LAB_00680e7c:
    memcpy(__dest,param_4,__n);
  }
  plVar6 = local_4e8;
  pvVar5 = local_4f0;
  sVar4 = sStack_4f8;
  uVar12 = local_500;
  *(undefined1 *)((long)__dest + __n) = 0;
  lVar10 = *param_2;
  local_500 = 0;
  sStack_4f8 = 0;
  local_4f0 = (void *)0x0;
  FUN_00683668(auStack_5b0,param_5);
  local_518 = *param_7;
  local_510 = (long *)param_7[1];
  if (local_510 != (long *)0x0) {
    plVar7 = local_510 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lStack_4d8 = param_3[1];
  local_4e0 = (long *)*param_3;
  lStack_4c8 = param_3[3];
  lStack_4d0 = param_3[2];
  lStack_4b8 = param_3[5];
  local_4c0 = param_3[4];
  lStack_4a8 = param_3[7];
  lStack_4b0 = param_3[6];
  sStack_498 = sVar4;
  local_4a0 = uVar12;
  plStack_488 = plVar6;
  local_490 = pvVar5;
  local_520 = param_6 & 1;
  FUN_00683668(auStack_480,auStack_5b0);
  local_3f0 = local_520;
  local_3e8 = local_518;
  local_3e0 = local_510;
  if (local_510 != (long *)0x0) {
    plVar6 = local_510 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar13 = *(long **)(lVar10 + 0x240);
  puVar9 = *(undefined8 **)(lVar10 + 0x4b8);
  local_3d0 = plVar13;
  plVar7 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0xd0,8);
  plVar7[2] = 0;
  plVar8 = plVar7 + 1;
  *plVar8 = 0;
  puVar3 = PTR_DAT_047cc158;
  plVar7[3] = (long)plVar13;
  plVar6 = plVar7 + 4;
  *plVar7 = (long)(puVar3 + 0x10);
  FUN_006c4254(plVar6);
  plVar7[4] = (long)(PTR_DAT_047cc168 + 0x10);
  nn::os::InitializeEvent(plVar7 + 6,0,0);
  plVar7[4] = (long)(PTR_DAT_047cc160 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar7 + 0xb),false,0);
  *(undefined1 *)(plVar7 + 0x19) = 0;
  if (plVar7 != (long *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar8 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x280,0x10);
  plVar8[2] = 0;
  plVar11 = plVar8 + 1;
  *plVar11 = 0;
  *plVar8 = (long)&PTR_LAB_044d50b0;
  plVar8[4] = (long)plVar13;
  FUN_006c5398(plVar8 + 6);
  plVar8[6] = (long)&PTR_LAB_044d50e8;
  lVar10 = (**(code **)(*plVar13 + 0x10))(plVar13,0x10000,0x10);
  if (lVar10 == 0) {
    local_180 = (long *)CONCAT44(local_180._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_180,"");
  }
  FUN_006c4058(plVar8 + 0xc,plVar6,0,lVar10,0x10000,1);
  local_370 = local_490;
  sStack_378 = sStack_498;
  local_380 = local_4a0;
  plVar8[0x4a] = (long)plVar13;
  plVar8[0x4b] = 0x10000;
  plVar8[0x4c] = (long)plVar6;
  plVar8[0x4d] = (long)plVar7;
  *(undefined1 *)((long)plVar8 + 0x271) = 1;
  plVar8[0xc] = (long)&PTR_LAB_044d5118;
  lStack_3b8 = lStack_4d8;
  local_3c0 = local_4e0;
  lStack_3a8 = lStack_4c8;
  lStack_3b0 = lStack_4d0;
  lStack_398 = lStack_4b8;
  local_3a0 = local_4c0;
  lStack_388 = lStack_4a8;
  lStack_390 = lStack_4b0;
  local_4a0 = 0;
  sStack_498 = 0;
  local_490 = (void *)0x0;
  local_368 = plStack_488;
  FUN_00683668(auStack_360,auStack_480);
  local_250 = local_370;
  sStack_258 = sStack_378;
  local_260 = local_380;
  local_2d0 = local_3f0;
  local_2c8 = local_3e8;
  local_2c0 = local_3e0;
  if (local_3e0 != (long *)0x0) {
    plVar13 = local_3e0 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = *plVar13 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_298 = (long *)lStack_3b8;
  local_2a0 = local_3c0;
  lStack_288 = lStack_3a8;
  lStack_290 = lStack_3b0;
  local_2b0 = local_3d0;
  lStack_278 = lStack_398;
  local_280 = local_3a0;
  lStack_268 = lStack_388;
  lStack_270 = lStack_390;
  sStack_378 = 0;
  local_370 = (void *)0x0;
  local_380 = 0;
  local_248 = local_368;
  FUN_00683668(auStack_240,auStack_360);
  local_130 = local_250;
  sStack_138 = sStack_258;
  local_140 = local_260;
  local_1b0 = local_2d0;
  local_1a8 = local_2c8;
  local_1a0 = local_2c0;
  if (local_2c0 != (long *)0x0) {
    plVar13 = local_2c0 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = *plVar13 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lStack_168 = lStack_288;
  local_170 = lStack_290;
  plStack_178 = plStack_298;
  local_180 = local_2a0;
  local_190 = local_2b0;
  lStack_148 = lStack_268;
  local_150 = lStack_270;
  lStack_158 = lStack_278;
  local_160 = local_280;
  sStack_258 = 0;
  local_250 = (void *)0x0;
  local_260 = 0;
  plStack_128 = local_248;
  FUN_00683668(auStack_120,auStack_240);
  local_90 = local_1b0;
  local_88 = local_1a8;
  local_80 = local_1a0;
  if (local_1a0 != (long *)0x0) {
    plVar13 = local_1a0 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = *plVar13 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  local_70 = local_190;
  plVar8[0x2b] = lStack_158;
  plVar8[0x2a] = local_160;
  plVar8[0x2d] = lStack_148;
  plVar8[0x2c] = local_150;
  plVar8[0x27] = (long)plStack_178;
  plVar8[0x26] = (long)local_180;
  plVar8[0x29] = lStack_168;
  plVar8[0x28] = local_170;
  plVar8[0x2f] = sStack_138;
  plVar8[0x2e] = local_140;
  plVar8[0x31] = (long)plStack_128;
  plVar8[0x30] = (long)local_130;
  local_140 = 0;
  sStack_138 = 0;
  local_130 = (void *)0x0;
  FUN_00683668(plVar8 + 0x32,auStack_120);
  *(byte *)(plVar8 + 0x44) = local_90;
  plVar8[0x45] = local_88;
  plVar8[0x46] = (long)local_80;
  if (local_80 == (long *)0x0) {
    plVar8[0x48] = (long)local_70;
  }
  else {
    plVar13 = local_80 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = *plVar13 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar8[0x48] = (long)local_70;
    if (local_80 != (long *)0x0) {
      plVar13 = local_80 + 1;
      do {
        lVar10 = *plVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar2) {
          *plVar13 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  FUN_01e7396c(auStack_120);
  if ((local_140 & 1) != 0) {
    (**(code **)(*plStack_128 + 0x18))(plStack_128,local_130,local_140 & 0xfffffffffffffffe,1);
  }
  if (local_1a0 == (long *)0x0) {
LAB_00681308:
    FUN_01e7396c(auStack_240);
  }
  else {
    plVar13 = local_1a0 + 1;
    do {
      lVar10 = *plVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 != 0) goto LAB_00681308;
    (**(code **)(*local_1a0 + 0x10))(local_1a0);
    std::__shared_weak_count::__release_weak();
    FUN_01e7396c(auStack_240);
  }
  if ((local_260 & 1) != 0) {
    (**(code **)(*local_248 + 0x18))(local_248,local_250,local_260 & 0xfffffffffffffffe,1);
  }
  if (local_2c0 == (long *)0x0) {
LAB_00681358:
    FUN_01e7396c(auStack_360);
  }
  else {
    plVar13 = local_2c0 + 1;
    do {
      lVar10 = *plVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 != 0) goto LAB_00681358;
    (**(code **)(*local_2c0 + 0x10))(local_2c0);
    std::__shared_weak_count::__release_weak();
    FUN_01e7396c(auStack_360);
  }
  if ((local_380 & 1) != 0) {
    (**(code **)(*local_368 + 0x18))(local_368,local_370,local_380 & 0xfffffffffffffffe,1);
  }
  plStack_298 = (long *)0x0;
  local_2a0 = (long *)0x0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = *plVar11 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_180 = plVar8 + 6;
  plStack_178 = plVar8;
  (**(code **)*puVar9)(puVar9,&local_180,&local_2a0);
  if (plStack_178 != (long *)0x0) {
    plVar13 = plStack_178 + 1;
    do {
      lVar10 = *plVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_298 != (long *)0x0) {
    plVar13 = plStack_298 + 1;
    do {
      lVar10 = *plVar13;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar2) {
        *plVar13 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_298 + 0x10))(plStack_298);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar6;
  param_1[1] = plVar7;
  do {
    lVar10 = *plVar11;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = lVar10 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__shared_weak_count::__release_weak();
  }
  if (local_3e0 == (long *)0x0) {
LAB_00681488:
    FUN_01e7396c(auStack_480);
  }
  else {
    plVar6 = local_3e0 + 1;
    do {
      lVar10 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 != 0) goto LAB_00681488;
    (**(code **)(*local_3e0 + 0x10))(local_3e0);
    std::__shared_weak_count::__release_weak();
    FUN_01e7396c(auStack_480);
  }
  if ((local_4a0 & 1) != 0) {
    (**(code **)(*plStack_488 + 0x18))(plStack_488,local_490,local_4a0 & 0xfffffffffffffffe,1);
  }
  if (local_510 != (long *)0x0) {
    plVar6 = local_510 + 1;
    do {
      lVar10 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_510 + 0x10))(local_510);
      std::__shared_weak_count::__release_weak();
      FUN_01e7396c(auStack_5b0);
      goto LAB_00681500;
    }
  }
  FUN_01e7396c(auStack_5b0);
LAB_00681500:
  if ((local_500 & 1) != 0) {
    (**(code **)(*local_4e8 + 0x18))(local_4e8,local_4f0,local_500 & 0xfffffffffffffffe,1);
  }
  return;
}


