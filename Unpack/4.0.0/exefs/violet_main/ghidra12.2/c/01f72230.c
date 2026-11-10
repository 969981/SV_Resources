/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f72230; name: FUN_01f72230
 */


/* WARNING: Removing unreachable block (ram,0x01f72860) */
/* WARNING: Removing unreachable block (ram,0x01f72864) */
/* WARNING: Removing unreachable block (ram,0x01f7286c) */
/* WARNING: Removing unreachable block (ram,0x01f72874) */
/* WARNING: Removing unreachable block (ram,0x01f72878) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f72230(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  void *pvVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  void *pvVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 local_128;
  ulong uStack_120;
  void *local_118;
  long *local_110;
  long *local_108;
  long *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  ulong uStack_e8;
  void *local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  ulong uStack_b0;
  void *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  undefined *local_88;
  undefined8 local_80;
  ulong uStack_78;
  void *local_70;
  long *local_68;
  
  plVar13 = *(long **)(param_2 + 8);
  plVar11 = *(long **)(param_2 + 0x10);
  lVar10 = *(long *)(param_2 + 0x18);
  if (plVar11 != (long *)0x0) {
    plVar1 = (long *)((long)plVar11 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7 = PTR_DAT_047cfaf8;
  local_110 = (long *)FUN_01cf7e20();
  if ((*(byte *)(param_3 + 8) & 1) == 0) {
    uStack_120 = *(ulong *)(param_3 + 0x10);
    local_128 = *(ulong *)(param_3 + 8);
    local_118 = *(void **)(param_3 + 0x18);
  }
  else {
    uVar2 = *(ulong *)(param_3 + 0x10);
    pvVar3 = *(void **)(param_3 + 0x18);
    if (uVar2 < 0x17) {
      pvVar12 = (void *)((long)&local_128 + 1);
      local_128 = CONCAT71(local_128._1_7_,(char)((int)uVar2 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar2) {
                    /* try { // try from 01f72978 to 01f7297f has its CatchHandler @ 01f72a84 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar16 = uVar2 + 0x10 & 0xfffffffffffffff0;
      pvVar12 = (void *)(**(code **)(*local_110 + 0x10))(local_110,uVar16,1);
      local_128 = uVar16 | 1;
      uStack_120 = uVar2;
      local_118 = pvVar12;
    }
    memcpy(pvVar12,pvVar3,uVar2 + 1);
  }
  plVar15 = *(long **)(lVar10 + 0x240);
  puVar14 = *(undefined8 **)(lVar10 + 0x4b8);
  plVar8 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x2b0,8);
  plVar8[2] = 0;
  plVar9 = plVar8 + 1;
  *plVar9 = 0;
  puVar6 = PTR_DAT_047cfae0;
  plVar8[3] = (long)plVar15;
  plVar1 = plVar8 + 4;
  *plVar8 = (long)(puVar6 + 0x10);
  FUN_006c4254(plVar1);
  plVar8[4] = (long)(PTR_DAT_047cfae8 + 0x10);
  nn::os::InitializeEvent(plVar8 + 6,0,0);
  plVar8[4] = (long)(PTR_DAT_047cfaf0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar8 + 0xb),false,0);
  *(undefined1 *)(plVar8 + 0x55) = 0;
  if (plVar8 != (long *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x178,8);
  plVar17 = plVar9 + 1;
  *plVar17 = 0;
  plVar9[2] = 0;
  plVar9[3] = (long)plVar15;
  *plVar9 = (long)&PTR_FUN_044d9a10;
  FUN_006c5398(plVar9 + 4);
  plVar9[4] = (long)&PTR_LAB_044d9a48;
  lVar10 = (**(code **)(*plVar15 + 0x10))(plVar15,0x10000,0x10);
  if (lVar10 == 0) {
    local_98 = (long *)CONCAT44(local_98._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_98,"");
  }
  FUN_006c4058(plVar9 + 10,plVar1,0,lVar10,0x10000,1);
  *(undefined1 *)((long)plVar9 + 0x171) = 1;
  plVar9[0x2a] = (long)plVar15;
  plVar9[0x2b] = 0x10000;
  plVar9[10] = (long)&PTR_LAB_044d9a78;
  local_f8 = puVar7 + 0x10;
  plVar9[0x2c] = (long)plVar1;
  plVar9[0x2d] = (long)plVar8;
  local_108 = plVar13;
  local_100 = plVar11;
  local_d8 = (long *)FUN_01cf7e20();
  pvVar3 = local_118;
  uVar2 = uStack_120;
  if ((local_128 & 1) == 0) {
    local_e0 = local_118;
    uStack_e8 = uStack_120;
    local_f0 = local_128;
  }
  else {
    if (uStack_120 < 0x17) {
      pvVar12 = (void *)((long)&local_f0 + 1);
      local_f0 = CONCAT71(local_f0._1_7_,(char)((int)uStack_120 << 1));
    }
    else {
      if (0xffffffffffffffef < uStack_120) {
                    /* try { // try from 01f72984 to 01f7298b has its CatchHandler @ 01f72a30 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar16 = uStack_120 + 0x10 & 0xfffffffffffffff0;
      pvVar12 = (void *)(**(code **)(*local_d8 + 0x10))(local_d8,uVar16,1);
      local_f0 = uVar16 | 1;
      uStack_e8 = uVar2;
      local_e0 = pvVar12;
    }
    memcpy(pvVar12,pvVar3,uVar2 + 1);
    plVar13 = local_108;
    plVar11 = local_100;
  }
  local_c0 = puVar7 + 0x10;
  local_108 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = plVar13;
  local_c8 = plVar11;
  local_a0 = (long *)FUN_01cf7e20();
  pvVar3 = local_e0;
  uVar2 = uStack_e8;
  if ((local_f0 & 1) == 0) {
    local_a8 = local_e0;
    uStack_b0 = uStack_e8;
    local_b8 = local_f0;
  }
  else {
    if (uStack_e8 < 0x17) {
      pvVar12 = (void *)((long)&local_b8 + 1);
      local_b8 = CONCAT71(local_b8._1_7_,(char)((int)uStack_e8 << 1));
    }
    else {
      if (0xffffffffffffffef < uStack_e8) {
                    /* try { // try from 01f7298c to 01f72993 has its CatchHandler @ 01f729ec */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar16 = uStack_e8 + 0x10 & 0xfffffffffffffff0;
      pvVar12 = (void *)(**(code **)(*local_a0 + 0x10))(local_a0,uVar16,1);
      local_b8 = uVar16 | 1;
      uStack_b0 = uVar2;
      local_a8 = pvVar12;
    }
    memcpy(pvVar12,pvVar3,uVar2 + 1);
    plVar13 = local_d0;
    plVar11 = local_c8;
  }
  local_88 = puVar7 + 0x10;
  local_d0 = (long *)0x0;
  local_c8 = (long *)0x0;
  local_98 = plVar13;
  local_90 = plVar11;
  local_68 = (long *)FUN_01cf7e20();
  pvVar3 = local_a8;
  uVar2 = uStack_b0;
  if ((local_b8 & 1) == 0) {
    local_70 = local_a8;
    uStack_78 = uStack_b0;
    local_80 = local_b8;
    local_98 = plVar13;
    local_90 = plVar11;
  }
  else {
    if (uStack_b0 < 0x17) {
      pvVar12 = (void *)((long)&local_80 + 1);
      local_80 = CONCAT71(local_80._1_7_,(char)((int)uStack_b0 << 1));
    }
    else {
      if (0xffffffffffffffef < uStack_b0) {
                    /* try { // try from 01f72994 to 01f7299b has its CatchHandler @ 01f729c8 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar16 = uStack_b0 + 0x10 & 0xfffffffffffffff0;
      pvVar12 = (void *)(**(code **)(*local_68 + 0x10))(local_68,uVar16,1);
      local_80 = uVar16 | 1;
      uStack_78 = uVar2;
      local_70 = pvVar12;
    }
    memcpy(pvVar12,pvVar3,uVar2 + 1);
  }
  plVar9[0x23] = (long)local_98;
  plVar9[0x24] = (long)local_90;
  local_98 = (long *)0x0;
  local_90 = (long *)0x0;
  plVar9[0x25] = (long)(puVar7 + 0x10);
  plVar11 = (long *)FUN_01cf7e20();
  pvVar3 = local_70;
  uVar2 = uStack_78;
  plVar9[0x29] = (long)plVar11;
  if ((local_80 & 1) == 0) {
    plVar9[0x28] = (long)local_70;
    plVar9[0x27] = uStack_78;
    plVar9[0x26] = local_80;
    local_88 = puVar7 + 0x10;
  }
  else {
    if (uStack_78 < 0x17) {
      pvVar12 = (void *)((long)plVar9 + 0x131);
      *(char *)(plVar9 + 0x26) = (char)((int)uStack_78 << 1);
    }
    else {
      if (0xffffffffffffffef < uStack_78) {
                    /* try { // try from 01f7299c to 01f729a3 has its CatchHandler @ 01f729a4 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar16 = uStack_78 + 0x10 & 0xfffffffffffffff0;
      pvVar12 = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,uVar16,1);
      plVar9[0x27] = uVar2;
      plVar9[0x28] = (long)pvVar12;
      plVar9[0x26] = uVar16 | 1;
    }
    memcpy(pvVar12,pvVar3,uVar2 + 1);
    local_88 = puVar7 + 0x10;
    (**(code **)(*local_68 + 0x18))(local_68,pvVar3,local_80 & 0xfffffffffffffffe,1);
  }
  local_c0 = puVar7 + 0x10;
  if ((local_b8 & 1) != 0) {
    local_c0 = puVar7 + 0x10;
    (**(code **)(*local_a0 + 0x18))(local_a0,local_a8,local_b8 & 0xfffffffffffffffe,1);
  }
  if (local_c8 != (long *)0x0) {
    plVar11 = local_c8 + 1;
    do {
      lVar10 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_c8 + 0x10))(local_c8);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_f8 = puVar7 + 0x10;
  if ((local_f0 & 1) != 0) {
    local_f8 = puVar7 + 0x10;
    (**(code **)(*local_d8 + 0x18))(local_d8,local_e0,local_f0 & 0xfffffffffffffffe,1);
  }
  if (local_100 != (long *)0x0) {
    plVar11 = local_100 + 1;
    do {
      lVar10 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_100 + 0x10))(local_100);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_d0 = (long *)0x0;
  local_c8 = (long *)0x0;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = *plVar17 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  local_98 = plVar9 + 4;
  local_90 = plVar9;
  (**(code **)*puVar14)(puVar14,&local_98,&local_d0);
  if (local_90 != (long *)0x0) {
    plVar11 = local_90 + 1;
    do {
      lVar10 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_90 + 0x10))(local_90);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_c8 != (long *)0x0) {
    plVar11 = local_c8 + 1;
    do {
      lVar10 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_c8 + 0x10))(local_c8);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar8;
  do {
    lVar10 = *plVar17;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar5) {
      *plVar17 = lVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__shared_weak_count::__release_weak();
  }
  if ((local_128 & 1) != 0) {
    (**(code **)(*local_110 + 0x18))(local_110,local_118,local_128 & 0xfffffffffffffffe,1);
  }
  return;
}


