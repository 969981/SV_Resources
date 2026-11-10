/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bb200; name: FUN_027bb200
 */


void FUN_027bb200(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 local_d0;
  long *local_c8;
  long local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  ulong local_a0;
  long *plStack_98;
  undefined1 auStack_90 [32];
  undefined8 local_70;
  long *local_68;
  long local_60;
  long *local_58;
  
                    /* try { // try from 027bb228 to 027bb233 has its CatchHandler @ 027bb57c */
  FUN_006957ac(auStack_90,0);
                    /* try { // try from 027bb240 to 027bb253 has its CatchHandler @ 027bb568 */
  FUN_00684a60(&local_b0,*(undefined8 *)PTR_PTR_047cbcf8,param_4,param_3);
  uVar3 = (ulong)&local_b0 | 1;
  if (((ulong)local_b0 & 1) != 0) {
    uVar3 = local_a0;
  }
                    /* try { // try from 027bb268 to 027bb26f has its CatchHandler @ 027bb53c */
  FUN_00672e2c(auStack_90,uVar3);
  if (((ulong)local_b0 & 1) != 0) {
    (**(code **)(*plStack_98 + 0x18))(plStack_98,local_a0,(ulong)local_b0 & 0xfffffffffffffffe,1);
  }
  lVar10 = *(long *)(*(long *)(*param_2 + 8) + 0x48);
  local_d0 = 0;
  local_c8 = (long *)0x0;
  FUN_006737e0(&local_c0,*(undefined8 *)(*param_2 + 8),auStack_90,&local_d0);
  plVar2 = local_b8;
  lVar9 = local_c0;
  plVar12 = *(long **)(lVar10 + 0x240);
  uVar11 = *(undefined8 *)(lVar10 + 0x4b8);
  local_70 = 0;
  local_68 = (long *)0x0;
  local_c0 = 0;
  local_b8 = (long *)0x0;
  plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x110,8);
  plVar7[2] = 0;
  plVar8 = plVar7 + 1;
  *plVar8 = 0;
  puVar6 = PTR_DAT_047cf328;
  plVar7[3] = (long)plVar12;
  plVar1 = plVar7 + 4;
  *plVar7 = (long)(puVar6 + 0x10);
  FUN_006c4254(plVar1);
  plVar7[4] = (long)(PTR_DAT_047cf330 + 0x10);
  nn::os::InitializeEvent(plVar7 + 6,0,0);
  plVar7[4] = (long)(PTR_DAT_047cf338 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar7 + 0xb),false,0);
  *(undefined1 *)(plVar7 + 0x21) = 0;
  if (plVar7 != (long *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar2 != (long *)0x0) {
    plVar8 = plVar2 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar8 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x78,8);
  *plVar8 = (long)&PTR_LAB_044d4488;
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8[3] = (long)plVar12;
  FUN_006c4a3c(plVar8 + 4,plVar1,lVar9);
  plVar8[4] = (long)&PTR_FUN_044d44c0;
  *(undefined1 *)(plVar8 + 0xe) = 1;
  plVar8[10] = (long)plVar1;
  plVar8[0xb] = (long)plVar7;
  plVar8[0xc] = lVar9;
  plVar8[0xd] = (long)plVar2;
  local_60 = lVar9;
  local_58 = plVar2;
  local_b0 = plVar8 + 4;
  local_a8 = plVar8;
  FUN_006c5470(uVar11,&local_b0,&local_70,&local_60);
  if (local_58 != (long *)0x0) {
    plVar2 = local_58 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_58 + 0x10))(local_58);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_a8 != (long *)0x0) {
    plVar2 = local_a8 + 1;
    do {
      lVar9 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_a8 + 0x10))(local_a8);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar7;
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_b8 != (long *)0x0) {
    plVar1 = local_b8 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_b8 + 0x10))(local_b8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_c8 != (long *)0x0) {
    plVar1 = local_c8 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_c8 + 0x10))(local_c8);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00695800(auStack_90);
  return;
}


