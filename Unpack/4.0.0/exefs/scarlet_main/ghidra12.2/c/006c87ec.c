/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c87ec; name: FUN_006c87ec
 */


void FUN_006c87ec(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  ulong *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  ulong local_a8;
  long *plStack_a0;
  undefined1 auStack_98 [8];
  ulong local_90;
  long local_80;
  undefined8 local_70;
  long *local_68;
  long local_60;
  long *local_58;
  
                    /* try { // try from 006c8810 to 006c881b has its CatchHandler @ 006c8b80 */
  FUN_00709174(auStack_98,0);
  FUN_006ebde0(&local_b8);
  uVar3 = (ulong)&local_b8 | 1;
  if (((ulong)local_b8 & 1) != 0) {
    uVar3 = local_a8;
  }
                    /* try { // try from 006c883c to 006c8843 has its CatchHandler @ 006c8b48 */
  FUN_006c8e48(auStack_98,uVar3);
  if (((ulong)local_b8 & 1) != 0) {
    (**(code **)(*plStack_a0 + 0x18))(plStack_a0,local_a8,(ulong)local_b8 & 0xfffffffffffffffe,1);
  }
  if (local_80 == 0) {
    puVar7 = (ulong *)(local_90 & 0xfffffffffffffffe);
    if ((local_90 & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
                    /* try { // try from 006c887c to 006c887f has its CatchHandler @ 006c8b40 */
    local_80 = FUN_00535218(puVar7);
  }
  FUN_006ee960(local_80,param_3);
  local_b8 = (long *)0x0;
  local_b0 = (long *)0x0;
  FUN_006e1154(&local_c8,*(undefined8 *)(*(long *)(param_2 + 8) + 8),auStack_98,&local_b8);
  if (local_b0 != (long *)0x0) {
    plVar1 = local_b0 + 1;
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*local_b0 + 0x10))(local_b0);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar2 = local_c0;
  lVar11 = local_c8;
  lVar10 = *(long *)(*(long *)(*(long *)(param_2 + 8) + 8) + 0x48);
  plVar13 = *(long **)(lVar10 + 0x240);
  uVar12 = *(undefined8 *)(lVar10 + 0x4b8);
  local_70 = 0;
  local_68 = (long *)0x0;
  local_c8 = 0;
  local_c0 = (long *)0x0;
  plVar8 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x238,8);
  plVar8[2] = 0;
  plVar9 = plVar8 + 1;
  *plVar9 = 0;
  puVar6 = PTR_DAT_047cfb60;
  plVar8[3] = (long)plVar13;
  plVar1 = plVar8 + 4;
  *plVar8 = (long)(puVar6 + 0x10);
  FUN_006c4254(plVar1);
  plVar8[4] = (long)(PTR_DAT_047cfb68 + 0x10);
  nn::os::InitializeEvent(plVar8 + 6,0,0);
  plVar8[4] = (long)(PTR_DAT_047cfb70 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar8 + 0xb),false,0);
  *(undefined1 *)(plVar8 + 0x46) = 0;
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
  if (plVar2 != (long *)0x0) {
    plVar9 = plVar2 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = *plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x78,8);
  *plVar9 = (long)&PTR_LAB_044d98c0;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[3] = (long)plVar13;
  FUN_006c4a3c(plVar9 + 4,plVar1,lVar11);
  plVar9[4] = (long)&PTR_FUN_044d98f8;
  *(undefined1 *)(plVar9 + 0xe) = 1;
  plVar9[10] = (long)plVar1;
  plVar9[0xb] = (long)plVar8;
  plVar9[0xc] = lVar11;
  plVar9[0xd] = (long)plVar2;
  local_60 = lVar11;
  local_58 = plVar2;
  local_b8 = plVar9 + 4;
  local_b0 = plVar9;
  FUN_006c5470(uVar12,&local_b8,&local_70,&local_60);
  if (local_58 != (long *)0x0) {
    plVar2 = local_58 + 1;
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
      (**(code **)(*local_58 + 0x10))(local_58);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_b0 != (long *)0x0) {
    plVar2 = local_b0 + 1;
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
      (**(code **)(*local_b0 + 0x10))(local_b0);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar8;
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 1;
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_c0 != (long *)0x0) {
    plVar1 = local_c0 + 1;
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*local_c0 + 0x10))(local_c0);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_007091c8(auStack_98);
  return;
}


