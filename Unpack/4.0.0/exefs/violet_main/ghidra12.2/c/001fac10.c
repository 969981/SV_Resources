/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001fac10; name: FUN_001fac10
 */


void FUN_001fac10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                 undefined8 param_5,int *param_6,undefined8 *param_7)

{
  ulong uVar1;
  long *plVar2;
  void *pvVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 *puVar12;
  code *pcVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined1 auStack_190 [8];
  long *local_188;
  long local_180;
  long *local_178;
  undefined8 local_170;
  long *local_168;
  undefined8 local_160;
  long *local_158;
  undefined8 local_150;
  long *local_148;
  undefined1 local_140;
  undefined1 auStack_138 [8];
  long *local_130;
  undefined1 auStack_128 [8];
  long *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  long local_100;
  long *local_f8;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined1 *local_e0;
  undefined **local_d0;
  long alStack_c0 [4];
  long *local_a0;
  int local_90;
  undefined8 local_88;
  ulong uStack_80;
  void *local_78;
  long *local_70;
  int local_68;
  
  *param_1 = *param_7;
  lVar11 = param_7[1];
  param_1[1] = lVar11;
  if (lVar11 != 0) {
    plVar7 = (long *)(lVar11 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  plVar7 = (long *)FUN_01cf7e20();
  param_1[0xc] = plVar7;
  if ((*param_4 & 1) == 0) {
    uVar22 = *(undefined8 *)(param_4 + 8);
    uVar16 = *(undefined8 *)param_4;
    param_1[0xb] = *(undefined8 *)(param_4 + 0x10);
    param_1[10] = uVar22;
    param_1[9] = uVar16;
  }
  else {
    uVar1 = *(ulong *)(param_4 + 8);
    pvVar3 = *(void **)(param_4 + 0x10);
    if (uVar1 < 0x17) {
      pvVar8 = (void *)((long)param_1 + 0x49);
      *(char *)(param_1 + 9) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 001fb590 to 001fb597 has its CatchHandler @ 001fb5bc */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar14 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar14,1);
      param_1[10] = uVar1;
      param_1[0xb] = pvVar8;
      param_1[9] = uVar14 | 1;
    }
    memcpy(pvVar8,pvVar3,uVar1 + 1);
  }
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xd),false,0);
  FUN_0020ff38();
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoSDK_NPLN-1_8_3-Release");
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoSDK_Google_APIs_For_NPLN-1_8_3-Release");
  FUN_0025d9d0(*(undefined4 *)(*(long *)*param_7 + 0x20));
  iVar20 = *param_6;
  local_90 = iVar20;
  local_70 = (long *)FUN_01cf7e20();
  if ((*(ulong *)(param_6 + 2) & 1) == 0) {
    uStack_80 = *(ulong *)(param_6 + 4);
    local_88 = *(ulong *)(param_6 + 2);
    local_78 = *(void **)(param_6 + 6);
  }
  else {
    uVar1 = *(ulong *)(param_6 + 4);
    pvVar3 = *(void **)(param_6 + 6);
    if (uVar1 < 0x17) {
      pvVar8 = (void *)((long)&local_88 + 1);
      local_88 = CONCAT71(local_88._1_7_,(char)((int)uVar1 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 001fb598 to 001fb59f has its CatchHandler @ 001fb5ac */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar14 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = (void *)(**(code **)(*local_70 + 0x10))(local_70,uVar14,1);
      local_88 = uVar14 | 1;
      uStack_80 = uVar1;
      local_78 = pvVar8;
    }
    memcpy(pvVar8,pvVar3,uVar1 + 1);
    iVar20 = local_90;
  }
  local_68 = param_6[10];
  plVar18 = *(long **)(*(long *)*param_1 + 0x238);
  local_a0 = (long *)0x0;
  plVar7 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18,0x40,8);
  *(int *)(plVar7 + 2) = iVar20;
  *plVar7 = (long)&PTR_LAB_044878a8;
  plVar7[1] = (long)plVar18;
  plVar18 = (long *)FUN_01cf7e20();
  pvVar3 = local_78;
  uVar1 = uStack_80;
  plVar7[6] = (long)plVar18;
  if ((local_88 & 1) == 0) {
    plVar7[5] = (long)local_78;
    plVar7[4] = uStack_80;
    plVar7[3] = local_88;
  }
  else {
    if (uStack_80 < 0x17) {
      pvVar8 = (void *)((long)plVar7 + 0x19);
      *(char *)(plVar7 + 3) = (char)((int)uStack_80 << 1);
    }
    else {
      if (0xffffffffffffffef < uStack_80) {
                    /* try { // try from 001fb5a0 to 001fb5a7 has its CatchHandler @ 001fb5a8 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar14 = uStack_80 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = (void *)(**(code **)(*plVar18 + 0x10))(plVar18,uVar14,1);
      plVar7[4] = uVar1;
      plVar7[5] = (long)pvVar8;
      plVar7[3] = uVar14 | 1;
    }
    memcpy(pvVar8,pvVar3,uVar1 + 1);
  }
  *(int *)(plVar7 + 7) = local_68;
  uStack_e8 = *(undefined8 *)(*(long *)*param_1 + 0x238);
  local_f0 = PTR_DAT_047cba30 + 0x10;
  local_d0 = &local_f0;
  local_170 = 180000;
  local_e0 = &LAB_001fb780;
  if (*param_6 != 3) {
    local_e0 = &LAB_001fbd50;
  }
  local_a0 = plVar7;
  FUN_001fc328(&local_100,(long *)*param_1,param_2,param_4,alStack_c0,&local_f0,&local_170,param_5);
  local_118 = (undefined8 *)0x0;
  local_110 = (undefined8 *)0x0;
  local_108 = (undefined8 *)0x0;
  plVar7 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  puVar6 = PTR_DAT_047cba40;
  if (plVar7 == (long *)0x0) {
LAB_001faf8c:
    if (local_108 <= local_110) {
LAB_001fafbc:
      lVar11 = (long)local_110 - (long)local_118 >> 3;
      uVar1 = lVar11 + 1;
      if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 001fb588 to 001fb58f has its CatchHandler @ 001fb5c4 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      uVar14 = (long)local_108 - (long)local_118 >> 2;
      if (uVar1 <= uVar14) {
        uVar1 = uVar14;
      }
      if (0xffffffffffffffe < (ulong)((long)local_108 - (long)local_118 >> 3)) {
        uVar1 = 0x1fffffffffffffff;
      }
      if (uVar1 == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
      }
      puVar17 = local_118;
      puVar12 = (undefined8 *)(lVar9 + lVar11 * 8);
      local_108 = (undefined8 *)(lVar9 + uVar1 * 8);
      puVar15 = puVar12 + 1;
      *puVar12 = plVar7;
      puVar6 = PTR_LAB_047cba48;
      puVar19 = local_110;
      while (PTR_LAB_047cba48 = puVar6, puVar21 = local_110, puVar19 != local_118) {
        puVar19 = puVar19 + -1;
        uVar16 = *puVar19;
        *puVar19 = 0;
        puVar12 = puVar12 + -1;
        *puVar12 = uVar16;
        puVar6 = PTR_LAB_047cba48;
      }
      while (local_118 = puVar12, local_110 = puVar15, puVar21 != puVar17) {
        puVar21 = puVar21 + -1;
        puVar19 = (undefined8 *)*puVar21;
        *puVar21 = 0;
        puVar15 = local_110;
        puVar12 = local_118;
        if (puVar19 != (undefined8 *)0x0) {
          (**(code **)*puVar19)(puVar19);
          FUN_0049e790(puVar6,puVar19);
          puVar15 = local_110;
          puVar12 = local_118;
        }
      }
      if (puVar17 != (undefined8 *)0x0) {
        FUN_0049e790(PTR_LAB_047cba48,puVar17);
      }
      goto LAB_001fb0a8;
    }
  }
  else {
    if (local_f8 != (long *)0x0) {
      plVar18 = local_f8 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = *plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *plVar7 = (long)(puVar6 + 0x10);
      plVar7[1] = local_100;
      plVar7[2] = (long)local_f8;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = *plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      std::__shared_weak_count::__release_weak();
      goto LAB_001faf8c;
    }
    *plVar7 = (long)(PTR_DAT_047cba40 + 0x10);
    plVar7[1] = local_100;
    plVar7[2] = 0;
    if (local_108 <= local_110) goto LAB_001fafbc;
  }
  *local_110 = plVar7;
  local_110 = local_110 + 1;
LAB_001fb0a8:
  FUN_002135b0(&local_170);
  FUN_00262630(auStack_128,param_3,&local_118,&local_170);
  FUN_00273abc(&local_170);
  FUN_00256e08(auStack_138,*param_1);
  FUN_00256860(&local_170,auStack_138,auStack_128);
  plVar7 = local_168;
  uVar16 = local_170;
  local_170 = 0;
  local_168 = (long *)0x0;
  plVar18 = (long *)param_1[3];
  param_1[2] = uVar16;
  param_1[3] = plVar7;
  if (plVar18 != (long *)0x0) {
    plVar7 = plVar18 + 1;
    do {
      lVar11 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar7 = local_158;
  uVar16 = local_160;
  local_160 = 0;
  local_158 = (long *)0x0;
  plVar18 = (long *)param_1[5];
  param_1[4] = uVar16;
  param_1[5] = plVar7;
  if (plVar18 != (long *)0x0) {
    plVar7 = plVar18 + 1;
    do {
      lVar11 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar7 = local_148;
  uVar16 = local_150;
  local_150 = 0;
  local_148 = (long *)0x0;
  plVar18 = (long *)param_1[7];
  param_1[6] = uVar16;
  param_1[7] = plVar7;
  if (plVar18 != (long *)0x0) {
    plVar7 = plVar18 + 1;
    do {
      lVar11 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined1 *)(param_1 + 8) = local_140;
  if (local_148 != (long *)0x0) {
    plVar7 = local_148 + 1;
    do {
      lVar11 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*local_148 + 0x10))(local_148);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_158 != (long *)0x0) {
    plVar7 = local_158 + 1;
    do {
      lVar11 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*local_158 + 0x10))(local_158);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_168 != (long *)0x0) {
    plVar7 = local_168 + 1;
    do {
      lVar11 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*local_168 + 0x10))(local_168);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00203d34(local_100 + 0x20,param_1 + 2);
  plVar7 = local_f8;
  if (local_f8 != (long *)0x0) {
    plVar18 = local_f8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar18 = (long *)param_1[7];
  param_1[6] = local_100;
  param_1[7] = local_f8;
  if (plVar18 != (long *)0x0) {
    plVar2 = plVar18 + 1;
    do {
      lVar11 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar18 = plVar7 + 1;
    do {
      lVar11 = *plVar18;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_180 = local_100;
  local_178 = local_f8;
  if (local_f8 != (long *)0x0) {
    plVar7 = local_f8 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = *plVar7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_0020ff44(&local_170,&local_180);
  plVar7 = local_168;
  uVar16 = local_170;
  local_170 = 0;
  local_168 = (long *)0x0;
  lVar11 = param_1[0x12];
  param_1[0x11] = uVar16;
  param_1[0x12] = plVar7;
  if (lVar11 == 0) {
    *(undefined1 *)(param_1 + 0x13) = (undefined1)local_160;
  }
  else {
    std::__shared_weak_count::__release_weak();
    *(undefined1 *)(param_1 + 0x13) = (undefined1)local_160;
    if (local_168 != (long *)0x0) {
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_178 != (long *)0x0) {
    std::__shared_weak_count::__release_weak();
  }
  FUN_0020ffc0(auStack_190,param_1 + 0x11);
  if (local_188 != (long *)0x0) {
    plVar7 = local_188 + 1;
    do {
      lVar11 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*local_188 + 0x10))(local_188);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00257d1c(*param_1);
  if (local_130 != (long *)0x0) {
    plVar7 = local_130 + 1;
    do {
      lVar11 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*local_130 + 0x10))(local_130);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_120 != (long *)0x0) {
    plVar7 = local_120 + 1;
    do {
      lVar11 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*local_120 + 0x10))(local_120);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar19 = local_118;
  puVar6 = PTR_LAB_047cba48;
  puVar12 = local_110;
  if (local_118 != (undefined8 *)0x0) {
    while (puVar12 != puVar19) {
      puVar12 = puVar12 + -1;
      puVar17 = (undefined8 *)*puVar12;
      *puVar12 = 0;
      if (puVar17 != (undefined8 *)0x0) {
        (**(code **)*puVar17)(puVar17);
        FUN_0049e790(puVar6,puVar17);
      }
    }
    local_110 = puVar19;
    FUN_0049e790(PTR_LAB_047cba48,local_118);
  }
  if (local_f8 != (long *)0x0) {
    plVar7 = local_f8 + 1;
    do {
      lVar11 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*local_f8 + 0x10))(local_f8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_d0 != (undefined **)0x0) {
    if (local_d0 == &local_f0) {
      pcVar13 = *(code **)(*local_d0 + 0x10);
      ppuVar10 = &local_f0;
    }
    else {
      pcVar13 = *(code **)(*local_d0 + 0x18);
      ppuVar10 = local_d0;
    }
    (*pcVar13)(ppuVar10);
  }
  if (local_a0 != (long *)0x0) {
    if (local_a0 == alStack_c0) {
      pcVar13 = *(code **)(*local_a0 + 0x10);
      plVar7 = alStack_c0;
    }
    else {
      pcVar13 = *(code **)(*local_a0 + 0x18);
      plVar7 = local_a0;
    }
    (*pcVar13)(plVar7);
  }
  if ((local_88 & 1) != 0) {
    (**(code **)(*local_70 + 0x18))(local_70,local_78,local_88 & 0xfffffffffffffffe,1);
  }
  return;
}


