/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0067b958; name: FUN_0067b958
 */


void FUN_0067b958(undefined8 *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *local_2e0;
  long lStack_2d8;
  undefined1 auStack_2d0 [56];
  long local_298;
  long lStack_290;
  long local_288;
  long lStack_280;
  long local_278;
  long lStack_270;
  long local_268;
  long lStack_260;
  long local_258;
  long lStack_250;
  long *local_240;
  long lStack_238;
  undefined1 auStack_230 [56];
  long local_1f8;
  long lStack_1f0;
  long local_1e8;
  long lStack_1e0;
  long local_1d8;
  long lStack_1d0;
  long local_1c8;
  long lStack_1c0;
  long local_1b8;
  long lStack_1b0;
  long *local_1a0;
  long *plStack_198;
  undefined1 auStack_190 [56];
  long local_158;
  long lStack_150;
  long local_148;
  long lStack_140;
  long local_138;
  long lStack_130;
  long local_128;
  long lStack_120;
  long local_118;
  long lStack_110;
  long *local_100;
  long *plStack_f8;
  undefined1 auStack_f0 [56];
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  
  local_2e0 = (long *)*param_2;
  lVar8 = *(long *)(local_2e0[1] + 0x48);
  lStack_2d8 = param_2[1];
  if (lStack_2d8 != 0) {
    plVar4 = (long *)(lStack_2d8 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0067a474(auStack_2d0,param_2[10]);
  lStack_290 = param_2[0xc];
  local_298 = param_2[0xb];
  lStack_280 = param_2[0xe];
  local_288 = param_2[0xd];
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  lStack_270 = param_2[0x10];
  local_278 = param_2[0xf];
  lStack_260 = param_2[0x12];
  local_268 = param_2[0x11];
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  local_258 = *param_3;
  lStack_250 = param_3[1];
  if (lStack_250 != 0) {
    plVar4 = (long *)(lStack_250 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar9 = *(long **)(lVar8 + 0x240);
  puVar7 = *(undefined8 **)(lVar8 + 0x4b8);
  plVar4 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0xf0,8);
  plVar4[2] = 0;
  plVar6 = plVar4 + 1;
  *plVar6 = 0;
  puVar3 = PTR_DAT_047cf490;
  plVar4[3] = (long)plVar9;
  plVar5 = plVar4 + 4;
  *plVar4 = (long)(puVar3 + 0x10);
  FUN_006c4254();
  plVar4[4] = (long)(PTR_DAT_047cf498 + 0x10);
  nn::os::InitializeEvent(plVar4 + 6,0,0);
  plVar4[4] = (long)(PTR_DAT_047cf4a0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar4 + 0xb),false,0);
  *(undefined1 *)(plVar4 + 0x1d) = 0;
  if (plVar4 != (long *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar6 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x1d8,8);
  plVar6[2] = 0;
  plVar10 = plVar6 + 1;
  *plVar10 = 0;
  *plVar6 = (long)&PTR_LAB_044d4c40;
  plVar6[3] = (long)plVar9;
  FUN_006c5398();
  plVar6[4] = (long)&PTR_LAB_044d4c78;
  lVar8 = (**(code **)(*plVar9 + 0x10))(plVar9,0x10000,0x10);
  if (lVar8 == 0) {
    local_100 = (long *)CONCAT44(local_100._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_100,"");
  }
  FUN_006c4058(plVar6 + 10,plVar5,0,lVar8,0x10000,1);
  lStack_238 = lStack_2d8;
  local_240 = local_2e0;
  plVar6[10] = (long)&PTR_LAB_044d4ca8;
  plVar6[0x36] = (long)plVar9;
  plVar6[0x37] = 0x10000;
  *(undefined1 *)((long)plVar6 + 0x1d1) = 1;
  plVar6[0x38] = (long)plVar5;
  plVar6[0x39] = (long)plVar4;
  local_2e0 = (long *)0x0;
  lStack_2d8 = 0;
  FUN_0067a474(auStack_230,auStack_2d0);
  plStack_198 = (long *)lStack_238;
  local_1a0 = local_240;
  local_1c8 = local_268;
  local_1e8 = local_288;
  lStack_1f0 = lStack_290;
  local_1f8 = local_298;
  local_298 = 0;
  lStack_290 = 0;
  local_288 = 0;
  lStack_1e0 = lStack_280;
  lStack_1d0 = lStack_270;
  local_1d8 = local_278;
  local_278 = 0;
  lStack_270 = 0;
  local_268 = 0;
  lStack_1c0 = lStack_260;
  local_1b8 = local_258;
  lStack_1b0 = lStack_250;
  if (lStack_250 != 0) {
    plVar9 = (long *)(lStack_250 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  local_240 = (long *)0x0;
  lStack_238 = 0;
  FUN_0067a474(auStack_190,auStack_230);
  plStack_f8 = plStack_198;
  local_100 = local_1a0;
  local_128 = local_1c8;
  local_148 = local_1e8;
  lStack_150 = lStack_1f0;
  local_158 = local_1f8;
  local_1f8 = 0;
  lStack_1f0 = 0;
  local_1e8 = 0;
  lStack_140 = lStack_1e0;
  lStack_130 = lStack_1d0;
  local_138 = local_1d8;
  local_1d8 = 0;
  lStack_1d0 = 0;
  local_1c8 = 0;
  lStack_120 = lStack_1c0;
  local_118 = local_1b8;
  lStack_110 = lStack_1b0;
  if (lStack_1b0 != 0) {
    plVar9 = (long *)(lStack_1b0 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  local_1a0 = (long *)0x0;
  plStack_198 = (long *)0x0;
  FUN_0067a474(auStack_f0,auStack_190);
  local_88 = local_128;
  local_a8 = local_148;
  lStack_b0 = lStack_150;
  local_b8 = local_158;
  local_158 = 0;
  lStack_150 = 0;
  local_148 = 0;
  lStack_a0 = lStack_140;
  lStack_90 = lStack_130;
  local_98 = local_138;
  local_138 = 0;
  lStack_130 = 0;
  local_128 = 0;
  lStack_80 = lStack_120;
  local_78 = local_118;
  local_70 = lStack_110;
  if (lStack_110 != 0) {
    plVar9 = (long *)(lStack_110 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar6[0x24] = (long)plStack_f8;
  plVar6[0x23] = (long)local_100;
  plStack_f8 = (long *)0x0;
  local_100 = (long *)0x0;
  FUN_0067a474(plVar6 + 0x25,auStack_f0);
  plVar6[0x2d] = lStack_b0;
  plVar6[0x2c] = local_b8;
  plVar6[0x2f] = lStack_a0;
  plVar6[0x2e] = local_a8;
  local_a8 = 0;
  local_b8 = 0;
  lStack_b0 = 0;
  plVar6[0x31] = lStack_90;
  plVar6[0x30] = local_98;
  plVar6[0x33] = lStack_80;
  plVar6[0x32] = local_88;
  local_88 = 0;
  local_98 = 0;
  lStack_90 = 0;
  plVar6[0x34] = local_78;
  plVar6[0x35] = local_70;
  if (local_70 != 0) {
    plVar9 = (long *)(local_70 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_0067bec0(&local_100);
  FUN_0067bec0(&local_1a0);
  FUN_0067bec0(&local_240);
  local_1a0 = (long *)0x0;
  plStack_198 = (long *)0x0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = *plVar10 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_100 = plVar6 + 4;
  plStack_f8 = plVar6;
  (**(code **)*puVar7)(puVar7,&local_100,&local_1a0);
  if (plStack_f8 != (long *)0x0) {
    plVar9 = plStack_f8 + 1;
    do {
      lVar8 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_198 != (long *)0x0) {
    plVar9 = plStack_198 + 1;
    do {
      lVar8 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_198 + 0x10))(plStack_198);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar5;
  param_1[1] = plVar4;
  do {
    lVar8 = *plVar10;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = lVar8 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
  }
  FUN_0067bec0(&local_2e0);
  FUN_006927a0(param_2[10]);
                    /* try { // try from 0067be58 to 0067be63 has its CatchHandler @ 0067beac */
  FUN_00692744(param_2 + 2,0);
  param_2[10] = (long)(param_2 + 2);
  return;
}


