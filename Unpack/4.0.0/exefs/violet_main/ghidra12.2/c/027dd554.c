/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027dd554; name: FUN_027dd554
 */


void FUN_027dd554(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long *local_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  undefined1 auStack_260 [8];
  long local_258;
  long local_250;
  long lStack_248;
  long local_240;
  long lStack_238;
  long local_230;
  long lStack_228;
  long lStack_220;
  long local_218;
  long local_210;
  undefined4 local_208;
  long *local_200;
  long *local_1f8;
  undefined8 local_1f0;
  long *local_1e8;
  long *local_1e0;
  long lStack_1d8;
  long local_1d0;
  long lStack_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long local_1b0;
  long lStack_1a8;
  long local_1a0;
  long lStack_198;
  long local_190;
  long lStack_188;
  long lStack_180;
  long local_178;
  long local_170;
  undefined4 local_168;
  long *local_160;
  long *plStack_158;
  long local_150;
  long lStack_148;
  undefined1 auStack_140 [8];
  long local_138;
  long local_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long lStack_100;
  long local_f8;
  long local_f0;
  undefined4 local_e8;
  long *local_e0;
  long *plStack_d8;
  long local_d0;
  long lStack_c8;
  undefined1 auStack_c0 [8];
  long local_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long local_78;
  long local_70;
  undefined4 local_68;
  
  lVar9 = *(long *)(param_2 + 0x10);
  FUN_005ea564(&local_e0,param_3);
  local_160 = (long *)0x0;
  plStack_158 = (long *)0x0;
  FUN_005d3a70(&local_200,*(undefined8 *)(lVar9 + 8),&local_e0,&local_160);
  if (plStack_158 != (long *)0x0) {
    plVar1 = plStack_158 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_005fb510(&local_e0);
  lVar9 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + 8) + 0x48);
                    /* try { // try from 027dd5f0 to 027dd5fb has its CatchHandler @ 027dd9d0 */
  FUN_005bcdd0(&local_280,param_3);
  plVar6 = local_1f8;
  plVar2 = local_200;
  plVar11 = *(long **)(lVar9 + 0x240);
  uVar10 = *(undefined8 *)(lVar9 + 0x4b8);
  local_1f0 = 0;
  local_1e8 = (long *)0x0;
  local_200 = (long *)0x0;
  local_1f8 = (long *)0x0;
  plVar7 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,400,8);
  plVar7[2] = 0;
  plVar8 = plVar7 + 1;
  *plVar8 = 0;
  puVar5 = PTR_DAT_047ce6c0;
  plVar7[3] = (long)plVar11;
  plVar1 = plVar7 + 4;
  *plVar7 = (long)(puVar5 + 0x10);
  FUN_006c4254(plVar1);
  plVar7[4] = (long)(PTR_DAT_047ce6c8 + 0x10);
  nn::os::InitializeEvent(plVar7 + 6,0,0);
  plVar7[4] = (long)(PTR_DAT_047ce6d0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar7 + 0xb),false,0);
  *(undefined1 *)(plVar7 + 0x31) = 0;
  if (plVar7 != (long *)0x0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0xf8,8);
  *plVar8 = (long)&PTR_FUN_044ce618;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8[3] = (long)plVar11;
  FUN_006c4a3c(plVar8 + 4,plVar1,plVar2);
  local_1d0 = lStack_270;
  lStack_1d8 = lStack_278;
  local_1e0 = local_280;
  plVar8[4] = (long)&PTR_FUN_044ce650;
  plVar8[0x1a] = (long)plVar1;
  plVar8[0x1b] = (long)plVar7;
  plVar8[0x1c] = (long)plVar2;
  plVar8[0x1d] = (long)plVar6;
  *(undefined1 *)(plVar8 + 0x1e) = 1;
  lStack_278 = 0;
  lStack_270 = 0;
  local_280 = (long *)0x0;
  lStack_1c8 = lStack_268;
  FUN_027d3bd4(auStack_1c0,auStack_260);
  local_150 = local_1d0;
  plStack_158 = (long *)lStack_1d8;
  local_160 = local_1e0;
  local_178 = local_218;
  lStack_1a8 = lStack_248;
  local_1b0 = local_250;
  local_250 = 0;
  lStack_248 = 0;
  local_1b8 = local_258;
  lStack_198 = lStack_238;
  local_1a0 = local_240;
  local_170 = local_210;
  local_218 = 0;
  local_168 = local_208;
  lStack_188 = lStack_228;
  local_190 = local_230;
  lStack_180 = lStack_220;
  local_240 = 0;
  local_1d0 = 0;
  lStack_228 = 0;
  lStack_220 = 0;
  local_1e0 = (long *)0x0;
  lStack_1d8 = 0;
  lStack_148 = lStack_1c8;
  FUN_027d3bd4(auStack_140,auStack_1c0);
  local_d0 = local_150;
  plStack_d8 = plStack_158;
  local_e0 = local_160;
  local_f8 = local_178;
  lStack_128 = lStack_1a8;
  local_130 = local_1b0;
  local_1b0 = 0;
  lStack_1a8 = 0;
  local_138 = local_1b8;
  lStack_118 = lStack_198;
  local_120 = local_1a0;
  local_f0 = local_170;
  local_178 = 0;
  local_e8 = local_168;
  lStack_108 = lStack_188;
  local_110 = local_190;
  lStack_100 = lStack_180;
  local_1a0 = 0;
  local_150 = 0;
  lStack_188 = 0;
  lStack_180 = 0;
  local_160 = (long *)0x0;
  plStack_158 = (long *)0x0;
  lStack_c8 = lStack_148;
  FUN_027d3bd4(auStack_c0,auStack_140);
  local_78 = local_f8;
  lStack_a0 = local_120;
  lStack_a8 = lStack_128;
  local_b0 = local_130;
  local_130 = 0;
  lStack_128 = 0;
  local_120 = 0;
  local_b8 = local_138;
  local_70 = local_f0;
  lStack_98 = lStack_118;
  local_f8 = 0;
  local_68 = local_e8;
  lStack_88 = lStack_108;
  local_90 = local_110;
  lStack_80 = lStack_100;
  lStack_108 = 0;
  lStack_100 = 0;
  plVar8[0xb] = (long)plStack_d8;
  plVar8[10] = (long)local_e0;
  plVar8[0xd] = lStack_c8;
  plVar8[0xc] = local_d0;
  local_d0 = 0;
  local_e0 = (long *)0x0;
  plStack_d8 = (long *)0x0;
  FUN_027d3bd4(plVar8 + 0xe,auStack_c0);
  plVar8[0xf] = local_b8;
  plVar8[0x11] = lStack_a8;
  plVar8[0x10] = local_b0;
  plVar8[0x13] = lStack_98;
  plVar8[0x12] = lStack_a0;
  lStack_a8 = 0;
  lStack_a0 = 0;
  local_b0 = 0;
  plVar8[0x18] = local_70;
  plVar8[0x15] = lStack_88;
  plVar8[0x14] = local_90;
  plVar8[0x17] = local_78;
  plVar8[0x16] = lStack_80;
  lStack_88 = 0;
  lStack_80 = 0;
  local_78 = 0;
  *(undefined4 *)(plVar8 + 0x19) = local_68;
  FUN_005d54c0(&local_e0);
  FUN_005d54c0(&local_160);
  FUN_005d54c0(&local_1e0);
  local_160 = plVar2;
  plStack_158 = plVar6;
  local_e0 = plVar8 + 4;
  plStack_d8 = plVar8;
  FUN_006c5470(uVar10,&local_e0,&local_1f0,&local_160);
  if (plStack_158 != (long *)0x0) {
    plVar2 = plStack_158 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_d8 != (long *)0x0) {
    plVar2 = plStack_d8 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar7;
  if (local_1e8 != (long *)0x0) {
    plVar1 = local_1e8 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_1e8 + 0x10))(local_1e8);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_005d54c0(&local_280);
  if (local_1f8 != (long *)0x0) {
    plVar1 = local_1f8 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_1f8 + 0x10))(local_1f8);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


