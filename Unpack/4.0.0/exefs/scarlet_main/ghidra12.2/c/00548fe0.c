/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00548fe0; name: FUN_00548fe0
 */


void FUN_00548fe0(long param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long local_130;
  undefined4 local_128;
  undefined1 auStack_120 [56];
  undefined8 local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  undefined8 ***local_c8;
  undefined8 ***pppuStack_c0;
  undefined1 auStack_b0 [64];
  long **local_70;
  undefined8 uStack_68;
  
  lVar7 = *(long *)(param_1 + 0x10);
  local_130 = param_1;
  local_128 = param_2;
                    /* try { // try from 00549010 to 0054901b has its CatchHandler @ 005492c0 */
  FUN_00263db4(auStack_120,param_3);
  plVar9 = *(long **)(lVar7 + 0x240);
  puVar8 = *(undefined8 **)(lVar7 + 0x850);
  plVar5 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x78,8);
  plVar5[2] = 0;
  plVar10 = plVar5 + 1;
  *plVar10 = 0;
  puVar4 = PTR_DAT_047cc0d8;
  plVar5[3] = (long)plVar9;
  plVar1 = plVar5 + 4;
  *plVar5 = (long)(puVar4 + 0x10);
  FUN_006c4254(plVar1);
  plVar5[4] = (long)(PTR_DAT_047cc0e0 + 0x10);
  nn::os::InitializeEvent(plVar5 + 6,0,0);
  plVar5[4] = (long)(PTR_DAT_047cc0e8 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar5 + 0xb),false,0);
  if (plVar5 != (long *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x70,8);
  plVar11 = plVar6 + 1;
  *plVar11 = 0;
  plVar6[2] = 0;
  plVar6[3] = (long)plVar9;
  *plVar6 = (long)&PTR_LAB_044c8d98;
  FUN_006c4a3c(plVar6 + 4,plVar1,0);
  *(undefined1 *)((long)plVar6 + 0x69) = 1;
  plVar6[4] = (long)&PTR_FUN_044c8dd0;
  plVar6[0xb] = (long)plVar1;
  plVar6[0xc] = (long)plVar5;
  plVar6[10] = (long)&local_130;
  local_e8 = 0;
  local_e0 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_d8 = plVar6 + 4;
  local_d0 = plVar6;
  (**(code **)*puVar8)(puVar8,&local_d8,&local_e8);
  if (local_d0 != (long *)0x0) {
    plVar9 = local_d0 + 1;
    do {
      lVar7 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*local_d0 + 0x10))(local_d0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_e0 != (long *)0x0) {
    plVar9 = local_e0 + 1;
    do {
      lVar7 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*local_e0 + 0x10))(local_e0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar6 != (long *)0x0) {
    do {
      lVar7 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar9 = (long *)(PTR_DAT_047cbb30 + 0x10);
  local_c8 = &local_c8;
  local_70 = (long **)0x0;
  uStack_68 = 0;
  local_d0 = (long *)(PTR_DAT_047cbb38 + 0x10);
  local_d8 = plVar9;
  pppuStack_c0 = local_c8;
  (**(code **)(plVar5[4] + 0x10))(plVar1,auStack_b0);
  local_70 = &local_d0;
  thunk_FUN_006c4e40(&local_d8);
  local_d8 = plVar9;
  FUN_006c4274(&local_d0);
  (**(code **)(plVar5[4] + 0x30))(plVar1);
  if (plVar5 != (long *)0x0) {
    do {
      lVar7 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00264004(auStack_120);
  return;
}


