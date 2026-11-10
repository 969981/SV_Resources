/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00260d28; name: FUN_00260d28
 */


void FUN_00260d28(long *param_1,long param_2,undefined8 *param_3,long *param_4,char *param_5,
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
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long local_5a0;
  long *plStack_598;
  undefined8 local_590;
  long lStack_588;
  undefined1 auStack_580 [32];
  undefined1 *local_560;
  undefined1 auStack_550 [32];
  undefined1 *local_530;
  undefined8 local_520;
  long lStack_518;
  undefined8 local_510;
  long lStack_508;
  undefined8 local_500;
  long lStack_4f8;
  undefined1 local_4f0;
  long local_4e8;
  long lStack_4e0;
  undefined8 local_4d8;
  size_t local_4d0;
  void *pvStack_4c8;
  long *local_4c0;
  undefined1 auStack_4b8 [104];
  undefined8 *local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 uStack_438;
  ulong local_300;
  long *local_2f8;
  undefined8 local_2f0;
  long *local_2e8;
  ulong local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  long *local_2c8;
  ulong local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  long *local_2a8;
  undefined8 local_2a0;
  undefined8 local_1b0;
  long *local_1a8;
  
  if ((*(long *)(param_2 + 0x18) == 0) ||
     (plVar4 = (long *)std::__shared_weak_count::lock(), plVar4 == (long *)0x0)) {
    lVar10 = *param_4;
    plVar4 = (long *)0x0;
  }
  else {
    lVar8 = *(long *)(param_2 + 0x10);
    lVar10 = *param_4;
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
      local_590 = *(undefined8 *)(param_2 + 0x20);
      lStack_588 = *(long *)(param_2 + 0x28);
      if (lStack_588 != 0) {
        plVar5 = (long *)(lStack_588 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_560 = (undefined1 *)0x0;
      local_5a0 = lVar8;
      plStack_598 = plVar4;
      if (&local_5a0 != (long *)(param_2 + 0x10)) {
        plVar5 = *(long **)(param_2 + 0x50);
        if (plVar5 == (long *)0x0) {
          local_560 = (undefined1 *)0x0;
        }
        else if (plVar5 == (long *)(param_2 + 0x30)) {
          local_560 = auStack_580;
          (**(code **)(*plVar5 + 0x28))();
        }
        else {
          local_560 = (undefined1 *)(**(code **)(*plVar5 + 0x38))();
        }
      }
      local_530 = (undefined1 *)0x0;
      if ((&local_5a0 == (long *)(param_2 + 0x10)) ||
         (plVar5 = *(long **)(param_2 + 0x80), plVar5 == (long *)0x0)) {
        local_530 = (undefined1 *)0x0;
        local_520 = *param_3;
        lStack_518 = param_3[1];
      }
      else if (plVar5 == (long *)(param_2 + 0x60)) {
        local_530 = auStack_550;
        (**(code **)(*plVar5 + 0x28))();
        local_520 = *param_3;
        lStack_518 = param_3[1];
      }
      else {
        local_530 = (undefined1 *)(**(code **)(*plVar5 + 0x38))();
        local_520 = *param_3;
        lStack_518 = param_3[1];
      }
      if (lStack_518 != 0) {
        plVar5 = (long *)(lStack_518 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_510 = param_3[2];
      lStack_508 = param_3[3];
      if (lStack_508 != 0) {
        plVar5 = (long *)(lStack_508 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_500 = param_3[4];
      lStack_4f8 = param_3[5];
      if (lStack_4f8 != 0) {
        plVar5 = (long *)(lStack_4f8 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_4f0 = *(undefined1 *)(param_3 + 6);
      local_4e8 = *param_4;
      lStack_4e0 = param_4[1];
      if (lStack_4e0 != 0) {
        plVar5 = (long *)(lStack_4e0 + 8);
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
      local_4c0 = plVar5;
      __n = strlen(param_5);
      if (0xffffffffffffffef < __n) {
                    /* try { // try from 002613c4 to 002613cb has its CatchHandler @ 002613f0 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        __dest = (void *)((long)&local_4d8 + 1);
        local_4d8 = CONCAT71(local_4d8._1_7_,(char)((int)__n << 1));
        if (__n != 0) goto LAB_002610a0;
      }
      else {
        uVar13 = __n + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar13,1);
        local_4d8 = uVar13 | 1;
        local_4d0 = __n;
        pvStack_4c8 = __dest;
LAB_002610a0:
        memcpy(__dest,param_5,__n);
      }
      *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 002610bc to 002610c3 has its CatchHandler @ 00261420 */
      FUN_00200584(auStack_4b8,param_6);
      plVar12 = *(long **)(lVar10 + 0x240);
      puVar9 = *(undefined8 **)(lVar10 + 0x4b8);
      plVar6 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x138,8);
      plVar6[2] = 0;
      plVar7 = plVar6 + 1;
      *plVar7 = 0;
      puVar3 = PTR_DAT_047cba58;
      plVar6[3] = (long)plVar12;
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
      plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x2b0,0x10);
      plVar7[2] = 0;
      plVar14 = plVar7 + 1;
      *plVar14 = 0;
      *plVar7 = (long)&PTR_FUN_0448bca0;
      plVar7[4] = (long)plVar12;
      FUN_006c5398(plVar7 + 6);
      plVar7[6] = (long)&PTR_LAB_0448bcf0;
      lVar10 = (**(code **)(*plVar12 + 0x10))(plVar12,0x10000,0x10);
      if (lVar10 == 0) {
        local_1b0 = (long *)CONCAT44(local_1b0._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0,(Result *)&local_1b0,"");
      }
      FUN_006c4058(plVar7 + 0xc,plVar5,0,lVar10,0x10000,1);
      plVar7[0x50] = (long)plVar12;
      plVar7[0x51] = 0x10000;
      plVar7[0xc] = (long)&PTR_LAB_0448bd38;
      plVar7[0x52] = (long)plVar5;
      plVar7[0x53] = (long)plVar6;
      *(undefined1 *)((long)plVar7 + 0x2a1) = 1;
                    /* try { // try from 00261228 to 00261233 has its CatchHandler @ 00261404 */
      FUN_00261a04(&local_450,&local_5a0);
                    /* try { // try from 00261234 to 0026123f has its CatchHandler @ 00261400 */
      FUN_00261a04(&local_300,&local_450);
                    /* try { // try from 00261240 to 0026124b has its CatchHandler @ 002613fc */
      FUN_00261a04(&local_1b0,&local_300);
                    /* try { // try from 00261250 to 00261257 has its CatchHandler @ 002613f8 */
      FUN_00261a04(plVar7 + 0x26,&local_1b0);
      FUN_00261638(&local_1b0);
      FUN_00261638(&local_300);
      FUN_00261638(&local_450);
      local_2f8 = (long *)0x0;
      local_300 = 0;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar2) {
          *plVar14 = *plVar14 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      local_1b0 = plVar7 + 6;
      local_1a8 = plVar7;
      (**(code **)*puVar9)(puVar9,&local_1b0,&local_300);
      if (local_1a8 != (long *)0x0) {
        plVar12 = local_1a8 + 1;
        do {
          lVar10 = *plVar12;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = lVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*local_1a8 + 0x10))(local_1a8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_2f8 != (long *)0x0) {
        plVar12 = local_2f8 + 1;
        do {
          lVar10 = *plVar12;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = lVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*local_2f8 + 0x10))(local_2f8);
          std::__shared_weak_count::__release_weak();
        }
      }
      *param_1 = (long)plVar5;
      param_1[1] = (long)plVar6;
      do {
        lVar10 = *plVar14;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar2) {
          *plVar14 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
      FUN_00261638(&local_5a0);
      goto LAB_00261350;
    }
  }
  uVar11 = *(undefined8 *)(lVar10 + 0x238);
  local_2e8 = (long *)FUN_01cf7e20();
  local_2f0 = 0;
  local_300 = 0;
  local_2f8 = (long *)0x0;
  local_2c8 = (long *)FUN_01cf7e20();
  local_2d0 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2a8 = (long *)FUN_01cf7e20();
  local_2b0 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_2a0 = 0;
  local_448 = 0;
  local_440 = FUN_01cf7e20();
  uStack_438 = 0;
  local_450 = &local_448;
  FUN_00210394(&local_1b0,&local_300,0x10,"Library is shutting down.",&local_450);
  FUN_00211fc0(&local_5a0,uVar11,&local_1b0);
  param_1[1] = (long)plStack_598;
  *param_1 = local_5a0;
  FUN_001fc7e8(&local_1b0);
  FUN_01cfa44c(&local_450,local_448);
  if ((local_2c0 & 1) != 0) {
    (**(code **)(*local_2a8 + 0x18))(local_2a8,local_2b0,local_2c0 & 0xfffffffffffffffe,1);
  }
  if ((local_2e0 & 1) != 0) {
    (**(code **)(*local_2c8 + 0x18))(local_2c8,local_2d0,local_2e0 & 0xfffffffffffffffe,1);
  }
  if ((local_300 & 1) != 0) {
    (**(code **)(*local_2e8 + 0x18))(local_2e8,local_2f0,local_300 & 0xfffffffffffffffe,1);
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
LAB_00261350:
  plVar5 = plVar4 + 1;
  do {
    lVar10 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar10 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__shared_weak_count::__release_weak();
  }
  return;
}


