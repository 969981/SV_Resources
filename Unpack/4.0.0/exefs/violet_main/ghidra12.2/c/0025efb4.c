/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025efb4; name: FUN_0025efb4
 */


void FUN_0025efb4(long *param_1,long param_2,undefined8 *param_3,long *param_4,char *param_5,
                 undefined8 param_6)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  size_t __n;
  void *__dest;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long local_460;
  long *plStack_458;
  undefined8 local_450;
  long lStack_448;
  undefined1 auStack_440 [32];
  undefined1 *local_420;
  undefined8 local_410;
  long lStack_408;
  undefined8 local_400;
  long lStack_3f8;
  undefined8 local_3f0;
  long lStack_3e8;
  undefined1 local_3e0;
  long local_3d8;
  long lStack_3d0;
  undefined8 local_3c8;
  size_t local_3c0;
  void *pvStack_3b8;
  long *local_3b0;
  undefined1 auStack_3a8 [72];
  undefined8 *local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  ulong local_260;
  long *local_258;
  undefined8 local_250;
  long *local_248;
  ulong local_240;
  undefined8 local_238;
  undefined8 local_230;
  long *local_228;
  ulong local_220;
  undefined8 local_218;
  undefined8 local_210;
  long *local_208;
  undefined8 local_200;
  undefined8 local_160;
  long *local_158;
  
  if ((*(long *)(param_2 + 0x18) == 0) ||
     (plVar4 = (long *)std::__shared_weak_count::lock(), plVar4 == (long *)0x0)) {
    lVar14 = *param_4;
    plVar4 = (long *)0x0;
  }
  else {
    lVar8 = *(long *)(param_2 + 0x10);
    lVar14 = *param_4;
    if (lVar8 != 0) {
      plVar5 = plVar4 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      local_450 = *(undefined8 *)(param_2 + 0x20);
      lStack_448 = *(long *)(param_2 + 0x28);
      if (lStack_448 != 0) {
        plVar5 = (long *)(lStack_448 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_420 = (undefined1 *)0x0;
      local_460 = lVar8;
      plStack_458 = plVar4;
      if ((&local_460 == (long *)(param_2 + 0x10)) ||
         (plVar5 = *(long **)(param_2 + 0x50), plVar5 == (long *)0x0)) {
        local_420 = (undefined1 *)0x0;
        local_410 = *param_3;
        lStack_408 = param_3[1];
joined_r0x0025f1dc:
        local_160._4_4_ = (undefined4)((ulong)local_160 >> 0x20);
      }
      else {
        if (plVar5 != (long *)(param_2 + 0x30)) {
          local_420 = (undefined1 *)(**(code **)(*plVar5 + 0x38))();
          local_410 = *param_3;
          lStack_408 = param_3[1];
          goto joined_r0x0025f1dc;
        }
        local_420 = auStack_440;
        (**(code **)(*plVar5 + 0x28))(plVar5,auStack_440);
        local_410 = *param_3;
        lStack_408 = param_3[1];
      }
      if (lStack_408 != 0) {
        plVar5 = (long *)(lStack_408 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_400 = param_3[2];
      lStack_3f8 = param_3[3];
      if (lStack_3f8 != 0) {
        plVar5 = (long *)(lStack_3f8 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_3f0 = param_3[4];
      lStack_3e8 = param_3[5];
      if (lStack_3e8 != 0) {
        plVar5 = (long *)(lStack_3e8 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_3e0 = *(undefined1 *)(param_3 + 6);
      local_3d8 = *param_4;
      lStack_3d0 = param_4[1];
      if (lStack_3d0 != 0) {
        plVar5 = (long *)(lStack_3d0 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar5 = (long *)FUN_01cf7e20();
      local_3b0 = plVar5;
      __n = strlen(param_5);
      if (0xffffffffffffffef < __n) {
                    /* try { // try from 0025f5f4 to 0025f5fb has its CatchHandler @ 0025f620 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        __dest = (void *)((long)&local_3c8 + 1);
        local_3c8 = CONCAT71(local_3c8._1_7_,(char)((int)__n << 1));
        if (__n != 0) goto LAB_0025f2d0;
      }
      else {
        uVar12 = __n + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar12,1);
        local_3c8 = uVar12 | 1;
        local_3c0 = __n;
        pvStack_3b8 = __dest;
LAB_0025f2d0:
        memcpy(__dest,param_5,__n);
      }
      *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 0025f2ec to 0025f2f3 has its CatchHandler @ 0025f650 */
      FUN_00203970(auStack_3a8,param_6);
      plVar11 = *(long **)(lVar14 + 0x240);
      puVar9 = *(undefined8 **)(lVar14 + 0x4b8);
      plVar6 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x138,8);
      plVar6[2] = 0;
      plVar7 = plVar6 + 1;
      *plVar7 = 0;
      puVar3 = PTR_DAT_047cba58;
      plVar6[3] = (long)plVar11;
      plVar5 = plVar6 + 4;
      *plVar6 = (long)(puVar3 + 0x10);
      FUN_006c4254(plVar5);
      plVar6[4] = (long)(PTR_DAT_047cba60 + 0x10);
      nn::os::InitializeEvent(plVar6 + 6,0,0);
      plVar6[4] = (long)(PTR_DAT_047cba68 + 0x10);
      nn::os::InitializeMutex((MutexType *)(plVar6 + 0xb),false,0);
      *(undefined1 *)(plVar6 + 0x26) = 0;
      if (plVar6 != (long *)0x0) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = *plVar7 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar7 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x260,0x10);
      plVar7[2] = 0;
      plVar13 = plVar7 + 1;
      *plVar13 = 0;
      *plVar7 = (long)&PTR_FUN_0448bb28;
      plVar7[4] = (long)plVar11;
      FUN_006c5398(plVar7 + 6);
      plVar7[6] = (long)&PTR_LAB_0448bb78;
      lVar14 = (**(code **)(*plVar11 + 0x10))(plVar11,0x10000,0x10);
      if (lVar14 == 0) {
        local_160 = (long *)CONCAT44(local_160._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0,(Result *)&local_160,"");
      }
      FUN_006c4058(plVar7 + 0xc,plVar5,0,lVar14,0x10000,1);
      plVar7[0x46] = (long)plVar11;
      plVar7[0x47] = 0x10000;
      plVar7[0xc] = (long)&PTR_LAB_0448bbc0;
      plVar7[0x48] = (long)plVar5;
      plVar7[0x49] = (long)plVar6;
      *(undefined1 *)((long)plVar7 + 0x251) = 1;
                    /* try { // try from 0025f458 to 0025f463 has its CatchHandler @ 0025f634 */
      FUN_0025fb9c(&local_360,&local_460);
                    /* try { // try from 0025f464 to 0025f46f has its CatchHandler @ 0025f630 */
      FUN_0025fb9c(&local_260,&local_360);
                    /* try { // try from 0025f470 to 0025f47b has its CatchHandler @ 0025f62c */
      FUN_0025fb9c(&local_160,&local_260);
                    /* try { // try from 0025f480 to 0025f487 has its CatchHandler @ 0025f628 */
      FUN_0025fb9c(plVar7 + 0x26,&local_160);
      FUN_0025f824(&local_160);
      FUN_0025f824(&local_260);
      FUN_0025f824(&local_360);
      local_258 = (long *)0x0;
      local_260 = 0;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar2) {
          *plVar13 = *plVar13 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      local_160 = plVar7 + 6;
      local_158 = plVar7;
      (**(code **)*puVar9)(puVar9,&local_160,&local_260);
      if (local_158 != (long *)0x0) {
        plVar11 = local_158 + 1;
        do {
          lVar14 = *plVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *plVar11 = lVar14 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*local_158 + 0x10))(local_158);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_258 != (long *)0x0) {
        plVar11 = local_258 + 1;
        do {
          lVar14 = *plVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *plVar11 = lVar14 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*local_258 + 0x10))(local_258);
          std::__shared_weak_count::__release_weak();
        }
      }
      *param_1 = (long)plVar5;
      param_1[1] = (long)plVar6;
      do {
        lVar14 = *plVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar2) {
          *plVar13 = lVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
      FUN_0025f824(&local_460);
      goto LAB_0025f580;
    }
  }
  uVar10 = *(undefined8 *)(lVar14 + 0x238);
  local_248 = (long *)FUN_01cf7e20();
  local_250 = 0;
  local_260 = 0;
  local_258 = (long *)0x0;
  local_228 = (long *)FUN_01cf7e20();
  local_230 = 0;
  local_240 = 0;
  local_238 = 0;
  local_208 = (long *)FUN_01cf7e20();
  local_210 = 0;
  local_220 = 0;
  local_218 = 0;
  local_200 = 0;
  local_358 = 0;
  local_350 = FUN_01cf7e20();
  uStack_348 = 0;
  local_360 = &local_358;
  FUN_00210394(&local_160,&local_260,0x10,"Library is shutting down.",&local_360);
  FUN_00211fc0(&local_460,uVar10,&local_160);
  param_1[1] = (long)plStack_458;
  *param_1 = local_460;
  FUN_001fc7e8(&local_160);
  FUN_01cfa44c(&local_360,local_358);
  if ((local_220 & 1) != 0) {
    (**(code **)(*local_208 + 0x18))(local_208,local_210,local_220 & 0xfffffffffffffffe,1);
  }
  if ((local_240 & 1) != 0) {
    (**(code **)(*local_228 + 0x18))(local_228,local_230,local_240 & 0xfffffffffffffffe,1);
  }
  if ((local_260 & 1) != 0) {
    (**(code **)(*local_248 + 0x18))(local_248,local_250,local_260 & 0xfffffffffffffffe,1);
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
LAB_0025f580:
  plVar5 = plVar4 + 1;
  do {
    lVar14 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar14 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar14 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__shared_weak_count::__release_weak();
  }
  return;
}


