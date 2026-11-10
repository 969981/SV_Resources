/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f73520; name: FUN_01f73520
 */


void FUN_01f73520(undefined8 *param_1,long param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 *puVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  long *plVar16;
  long local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  ulong local_e8;
  long *plStack_e0;
  undefined1 auStack_d8 [16];
  uint local_c8;
  uint uStack_c4;
  long local_c0;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  long *local_78;
  long local_70;
  long *local_68;
  
                    /* try { // try from 01f73548 to 01f73553 has its CatchHandler @ 01f738e4 */
  FUN_00700cc8(auStack_d8,0);
  FUN_006ec9a0(&local_f8);
  uVar4 = (ulong)&local_f8 | 1;
  if (((ulong)local_f8 & 1) != 0) {
    uVar4 = local_e8;
  }
                    /* try { // try from 01f73574 to 01f7357b has its CatchHandler @ 01f738b8 */
  FUN_006c77a4(auStack_d8,uVar4);
  if (((ulong)local_f8 & 1) != 0) {
    (**(code **)(*plStack_e0 + 0x18))(plStack_e0,local_e8,(ulong)local_f8 & 0xfffffffffffffffe,1);
  }
  local_90 = *(undefined4 *)(param_3 + 8);
  uStack_8c = 1;
  puVar15 = *(undefined4 **)(param_3 + 0x10);
  puVar5 = *(undefined4 **)(param_3 + 0x18);
  if (puVar15 != puVar5) {
    do {
      uVar9 = FUN_006ec9c0(*puVar15);
      uVar4 = (ulong)local_c8;
      uVar1 = local_c8 + 1;
      if (local_c8 == uStack_c4) {
                    /* try { // try from 01f735f8 to 01f73603 has its CatchHandler @ 01f738e8 */
        FUN_00531134(&local_c8,uVar1);
      }
      puVar15 = puVar15 + 1;
      *(undefined4 *)(local_c0 + uVar4 * 4) = uVar9;
      local_c8 = uVar1;
    } while (puVar5 != puVar15);
  }
  local_f8 = (long *)0x0;
  local_f0 = (long *)0x0;
  FUN_006cf6f4(&local_108,*(undefined8 *)(*(long *)(param_2 + 8) + 8),auStack_d8,&local_f8);
  if (local_f0 != (long *)0x0) {
    plVar2 = local_f0 + 1;
    do {
      lVar13 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_f0 + 0x10))(local_f0);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar3 = local_100;
  lVar13 = local_108;
  lVar12 = *(long *)(*(long *)(*(long *)(param_2 + 8) + 8) + 0x48);
  plVar16 = *(long **)(lVar12 + 0x240);
  uVar14 = *(undefined8 *)(lVar12 + 0x4b8);
  local_80 = 0;
  local_78 = (long *)0x0;
  local_108 = 0;
  local_100 = (long *)0x0;
  plVar10 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0xf8,8);
  plVar10[2] = 0;
  plVar11 = plVar10 + 1;
  *plVar11 = 0;
  puVar8 = PTR_DAT_047cfb18;
  plVar10[3] = (long)plVar16;
  plVar2 = plVar10 + 4;
  *plVar10 = (long)(puVar8 + 0x10);
  FUN_006c4254(plVar2);
  plVar10[4] = (long)(PTR_DAT_047cfb20 + 0x10);
  nn::os::InitializeEvent(plVar10 + 6,0,0);
  plVar10[4] = (long)(PTR_DAT_047cfb28 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar10 + 0xb),false,0);
  *(undefined1 *)(plVar10 + 0x1e) = 0;
  if (plVar10 != (long *)0x0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = *plVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plVar3 != (long *)0x0) {
    plVar11 = plVar3 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *plVar11 = *plVar11 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar11 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x78,8);
  *plVar11 = (long)&PTR_LAB_044d85e8;
  plVar11[1] = 0;
  plVar11[2] = 0;
  plVar11[3] = (long)plVar16;
  FUN_006c4a3c(plVar11 + 4,plVar2,lVar13);
  plVar11[4] = (long)&PTR_FUN_044d8620;
  *(undefined1 *)(plVar11 + 0xe) = 1;
  plVar11[10] = (long)plVar2;
  plVar11[0xb] = (long)plVar10;
  plVar11[0xc] = lVar13;
  plVar11[0xd] = (long)plVar3;
  local_70 = lVar13;
  local_68 = plVar3;
  local_f8 = plVar11 + 4;
  local_f0 = plVar11;
  FUN_006c5470(uVar14,&local_f8,&local_80,&local_70);
  if (local_68 != (long *)0x0) {
    plVar3 = local_68 + 1;
    do {
      lVar13 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_f0 != (long *)0x0) {
    plVar3 = local_f0 + 1;
    do {
      lVar13 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_f0 + 0x10))(local_f0);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar2;
  param_1[1] = plVar10;
  if (local_78 != (long *)0x0) {
    plVar2 = local_78 + 1;
    do {
      lVar13 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_78 + 0x10))(local_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_100 != (long *)0x0) {
    plVar2 = local_100 + 1;
    do {
      lVar13 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*local_100 + 0x10))(local_100);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00700d28(auStack_d8);
  return;
}


