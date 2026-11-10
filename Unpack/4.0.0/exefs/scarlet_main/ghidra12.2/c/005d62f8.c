/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005d62f8; name: FUN_005d62f8
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_005d62f8(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  code *pcVar11;
  long lVar12;
  long alStack_290 [4];
  long *local_270;
  byte local_260;
  undefined7 uStack_25f;
  undefined8 local_250;
  long *plStack_248;
  byte local_240;
  undefined7 uStack_23f;
  undefined8 local_230;
  long *plStack_228;
  byte local_208;
  undefined7 uStack_207;
  undefined8 local_1f8;
  long *plStack_1f0;
  byte local_1e8;
  undefined7 uStack_1e7;
  undefined8 local_1d8;
  long *plStack_1d0;
  byte local_1c8;
  undefined7 uStack_1c7;
  undefined8 local_1b8;
  long *plStack_1b0;
  long *local_1a8;
  long *local_1a0;
  int local_198 [2];
  undefined *local_190;
  undefined8 *******pppppppuStack_188;
  undefined8 *******local_180;
  long *plStack_178;
  char local_170;
  long *local_168;
  long local_160;
  undefined8 uStack_158;
  long local_150;
  byte local_148;
  undefined1 auStack_147 [15];
  undefined1 *local_138;
  byte local_128;
  undefined1 auStack_127 [15];
  undefined1 *local_118;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  byte *local_f0;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 *******pppppppuStack_c0;
  undefined8 *******local_b8;
  long *plStack_b0;
  char local_a8 [8];
  long *local_a0;
  long local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  long *plStack_78;
  undefined **local_68;
  undefined8 local_60;
  
  lVar12 = *(long *)(param_1 + 0x180);
  FUN_005d68c0(local_198,param_1 + 200,param_1 + 0xd8,*(undefined1 *)(param_1 + 0x148));
  local_b8 = local_180;
  pppppppuStack_c0 = pppppppuStack_188;
  puVar1 = local_190;
  if (local_198[0] != 0) {
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,local_198[0]);
    local_190 = (undefined *)0x0;
    pppppppuStack_188 = (undefined8 *******)0x0;
    local_180 = (undefined8 *******)0x0;
    puStack_c8 = puVar1;
    plStack_b0 = plStack_178;
    local_a8[0] = '\0';
    if (local_170 != '\0') {
      local_a0 = local_168;
      uStack_90 = uStack_158;
      local_98 = local_160;
      local_88 = local_150;
      if (local_150 == 0) {
        local_a0 = &local_98;
      }
      else {
        *(long **)(local_160 + 0x10) = &local_98;
        local_168 = &local_160;
        local_160 = 0;
        local_150 = 0;
      }
      local_a8[0] = '\x01';
    }
    plStack_78 = (long *)0x0;
    local_80 = 0;
    FUN_005bdc74(local_198);
    lVar8 = *(long *)(param_1 + 0x160);
    goto joined_r0x005d6640;
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    puVar2 = auStack_147;
    if ((local_148 & 1) != 0) {
      puVar2 = local_138;
    }
    FUN_005d6e90(*(long *)(param_1 + 0x160),puVar2);
  }
  puVar2 = auStack_147;
  if ((local_148 & 1) != 0) {
    puVar2 = local_138;
  }
  puVar3 = auStack_127;
  if ((local_128 & 1) != 0) {
    puVar3 = local_118;
  }
  if ((*local_f0 & 1) == 0) {
    pbVar9 = local_f0 + 1;
    if ((local_f0[0x68] & 1) == 0) goto LAB_005d643c;
LAB_005d6414:
    pbVar10 = *(byte **)(local_f0 + 0x78);
    if ((local_f0[0x88] & 1) == 0) goto LAB_005d644c;
LAB_005d6424:
    local_f0 = *(byte **)(local_f0 + 0x98);
  }
  else {
    pbVar9 = *(byte **)(local_f0 + 0x10);
    if ((local_f0[0x68] & 1) != 0) goto LAB_005d6414;
LAB_005d643c:
    pbVar10 = local_f0 + 0x69;
    if ((local_f0[0x88] & 1) != 0) goto LAB_005d6424;
LAB_005d644c:
    local_f0 = local_f0 + 0x89;
  }
  FUN_005c92c4(&local_260,puVar2,puVar3,local_108,local_100,uStack_f8,pbVar9,pbVar10,local_f0);
  lVar8 = *(long *)(*(long *)(param_1 + 200) + 8);
  plVar7 = (long *)FUN_01cf7e20();
  FUN_005e6418(&local_d0,lVar8 + 8,lVar8 + 0x48);
  local_270 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x20,8);
  *local_270 = (long)&PTR_FUN_044cef88;
  local_270[1] = (long)plVar7;
  local_270[3] = (long)puStack_c8;
  local_270[2] = (long)local_d0;
  FUN_00541f78(&local_1a8,&local_260,param_1 + 0x150,alStack_290,
               *(long *)(*(long *)(param_1 + 200) + 8) + 0x48);
  puVar1 = PTR_DAT_047cbb30 + 0x10;
  pppppppuStack_c0 = &pppppppuStack_c0;
  local_60 = 0;
  local_68 = (undefined **)0x0;
  puStack_c8 = PTR_DAT_047cbb38 + 0x10;
  local_d0 = puVar1;
  local_b8 = pppppppuStack_c0;
  (**(code **)(*local_1a8 + 0x10))(local_1a8,local_a8);
  local_68 = &puStack_c8;
  thunk_FUN_006c4e40(&local_d0);
  local_d0 = puVar1;
  FUN_006c4274(&puStack_c8);
  plVar6 = local_1a0;
  plVar7 = local_1a8;
  local_1a8 = (long *)0x0;
  local_1a0 = (long *)0x0;
  (**(code **)(*plVar7 + 0x30))(&local_d0);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 1;
    do {
      lVar8 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1a0 != (long *)0x0) {
    plVar7 = local_1a0 + 1;
    do {
      lVar8 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_1a0 + 0x10))(local_1a0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_270 != (long *)0x0) {
    if (local_270 == alStack_290) {
      pcVar11 = *(code **)(*local_270 + 0x10);
    }
    else {
      pcVar11 = *(code **)(*local_270 + 0x18);
    }
    (*pcVar11)();
  }
  if ((local_1c8 & 1) != 0) {
    (**(code **)(*plStack_1b0 + 0x18))
              (plStack_1b0,local_1b8,CONCAT71(uStack_1c7,local_1c8) & 0xfffffffffffffffe,1);
  }
  if ((local_1e8 & 1) != 0) {
    (**(code **)(*plStack_1d0 + 0x18))
              (plStack_1d0,local_1d8,CONCAT71(uStack_1e7,local_1e8) & 0xfffffffffffffffe,1);
  }
  if ((local_208 & 1) != 0) {
    (**(code **)(*plStack_1f0 + 0x18))
              (plStack_1f0,local_1f8,CONCAT71(uStack_207,local_208) & 0xfffffffffffffffe,1);
  }
  if ((local_240 & 1) != 0) {
    (**(code **)(*plStack_228 + 0x18))
              (plStack_228,local_230,CONCAT71(uStack_23f,local_240) & 0xfffffffffffffffe,1);
  }
  if ((local_260 & 1) == 0) {
    FUN_005bdc74(local_198);
    lVar8 = *(long *)(param_1 + 0x160);
  }
  else {
    (**(code **)(*plStack_248 + 0x18))
              (plStack_248,local_250,CONCAT71(uStack_25f,local_260) & 0xfffffffffffffffe,1);
    FUN_005bdc74(local_198);
    lVar8 = *(long *)(param_1 + 0x160);
  }
joined_r0x005d6640:
  if (lVar8 != 0) {
    FUN_005d6e90(lVar8,&DAT_03c886bc);
  }
  nn::os::LockMutex((MutexType *)(lVar12 + 0x38));
  *(undefined4 *)(lVar12 + 0x58) = local_d0._0_4_;
  *(undefined8 ********)(lVar12 + 0x68) = pppppppuStack_c0;
  *(undefined **)(lVar12 + 0x60) = puStack_c8;
  *(long **)(lVar12 + 0x78) = plStack_b0;
  *(undefined8 ********)(lVar12 + 0x70) = local_b8;
  puStack_c8 = (undefined *)0x0;
  pppppppuStack_c0 = (undefined8 *******)0x0;
  local_b8 = (undefined8 *******)0x0;
  *(undefined1 *)(lVar12 + 0x80) = 0;
  if (local_a8[0] != '\0') {
    *(long **)(lVar12 + 0x88) = local_a0;
    *(undefined8 *)(lVar12 + 0x98) = uStack_90;
    *(long *)(lVar12 + 0x90) = local_98;
    plVar7 = (long *)(lVar12 + 0x90);
    *(long *)(lVar12 + 0xa0) = local_88;
    if (local_88 == 0) {
      *(long **)(lVar12 + 0x88) = plVar7;
    }
    else {
      *(long **)(*plVar7 + 0x10) = plVar7;
      local_a0 = &local_98;
      local_98 = 0;
      local_88 = 0;
    }
    *(undefined1 *)(lVar12 + 0x80) = 1;
  }
  *(long **)(lVar12 + 0xb0) = plStack_78;
  *(undefined8 *)(lVar12 + 0xa8) = local_80;
  plStack_78 = (long *)0x0;
  local_80 = 0;
  *(undefined1 *)(lVar12 + 0xb8) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar12 + 0x38));
  if (plStack_78 != (long *)0x0) {
    plVar7 = plStack_78 + 1;
    do {
      lVar12 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_a8[0] != '\0') {
    FUN_01cfa44c(&local_a0,local_98);
  }
  if (((ulong)puStack_c8 & 1) != 0) {
    (**(code **)(*plStack_b0 + 0x18))(plStack_b0,local_b8,(ulong)puStack_c8 & 0xfffffffffffffffe,1);
  }
  return 1;
}


