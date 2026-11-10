/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0053991c; name: FUN_0053991c
 */


void FUN_0053991c(undefined8 *param_1,long *param_2,byte *param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  ulong local_b0;
  long *plStack_a8;
  undefined1 auStack_a0 [48];
  undefined8 local_70;
  long *local_68;
  
                    /* try { // try from 00539944 to 0053994f has its CatchHandler @ 00539d64 */
  FUN_00570be0(auStack_a0,0);
  if ((*(byte *)(param_2 + 10) & 1) == 0) {
    lVar12 = (long)param_2 + 0x51;
  }
  else {
    lVar12 = param_2[0xc];
  }
                    /* try { // try from 00539968 to 00539973 has its CatchHandler @ 00539d60 */
  FUN_0056dd80(&local_c0,lVar12);
  uVar3 = (ulong)&local_c0 | 1;
  if (((ulong)local_c0 & 1) != 0) {
    uVar3 = local_b0;
  }
                    /* try { // try from 00539988 to 0053998f has its CatchHandler @ 00539d28 */
  FUN_00539d68(auStack_a0,uVar3);
  if (((ulong)local_c0 & 1) != 0) {
    (**(code **)(*plStack_a8 + 0x18))(plStack_a8,local_b0,(ulong)local_c0 & 0xfffffffffffffffe,1);
  }
  if ((*param_3 & 1) == 0) {
    if (*param_3 < 2) goto LAB_005399e0;
    param_3 = param_3 + 1;
  }
  else {
    if (*(long *)(param_3 + 8) == 0) goto LAB_005399e0;
    param_3 = *(byte **)(param_3 + 0x10);
  }
                    /* try { // try from 005399d8 to 005399df has its CatchHandler @ 00539d20 */
  FUN_00539e88(auStack_a0,param_3);
LAB_005399e0:
  local_c0 = (long *)0x0;
  local_b8 = (long *)0x0;
  FUN_0053b708(&local_d0,*(undefined8 *)(*param_2 + 8),auStack_a0,&local_c0);
  if (local_b8 != (long *)0x0) {
    plVar1 = local_b8 + 1;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_b8 + 0x10))(local_b8);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar1 = local_c8;
  lVar8 = local_d0;
  lVar12 = *param_2;
  lVar4 = param_2[1];
  lVar11 = *(long *)(*(long *)(lVar12 + 8) + 0x48);
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = *plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_d0 = 0;
  local_c8 = (long *)0x0;
  plVar14 = *(long **)(lVar11 + 0x240);
  puVar13 = *(undefined8 **)(lVar11 + 0x4b8);
  plVar9 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0xe0,8);
  plVar9[2] = 0;
  plVar10 = plVar9 + 1;
  *plVar10 = 0;
  puVar7 = PTR_DAT_047cdde8;
  plVar9[3] = (long)plVar14;
  plVar2 = plVar9 + 4;
  *plVar9 = (long)(puVar7 + 0x10);
  FUN_006c4254(plVar2);
  plVar9[4] = (long)(PTR_DAT_047cddf0 + 0x10);
  nn::os::InitializeEvent(plVar9 + 6,0,0);
  plVar9[4] = (long)(PTR_DAT_047cddf8 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar9 + 0xb),false,0);
  *(undefined1 *)(plVar9 + 0x1b) = 0;
  if (plVar9 != (long *)0x0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = *plVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar10 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x160,8);
  plVar15 = plVar10 + 1;
  *plVar15 = 0;
  plVar10[2] = 0;
  plVar10[3] = (long)plVar14;
  *plVar10 = (long)&PTR_LAB_044c7c88;
  FUN_006c5398(plVar10 + 4);
  plVar10[4] = (long)&PTR_LAB_044c7cc0;
  lVar11 = (**(code **)(*plVar14 + 0x10))(plVar14,0x10000,0x10);
  if (lVar11 == 0) {
    local_c0 = (long *)CONCAT44(local_c0._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_c0,"");
  }
  FUN_006c4058(plVar10 + 10,plVar2,0,lVar11,0x10000,1);
  *(undefined1 *)((long)plVar10 + 0x159) = 1;
  plVar10[0x27] = (long)plVar14;
  plVar10[0x28] = 0x10000;
  plVar10[10] = (long)&PTR_LAB_044c7cf0;
  plVar10[0x29] = (long)plVar2;
  plVar10[0x2a] = (long)plVar9;
  plVar10[0x23] = lVar12;
  plVar10[0x24] = lVar4;
  plVar10[0x25] = lVar8;
  plVar10[0x26] = (long)plVar1;
  local_70 = 0;
  local_68 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = *plVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_c0 = plVar10 + 4;
  local_b8 = plVar10;
  (**(code **)*puVar13)(puVar13,&local_c0,&local_70);
  if (local_b8 != (long *)0x0) {
    plVar1 = local_b8 + 1;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_b8 + 0x10))(local_b8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 1;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar2;
  param_1[1] = plVar9;
  if (plVar10 != (long *)0x0) {
    do {
      lVar12 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_c8 != (long *)0x0) {
    plVar1 = local_c8 + 1;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_c8 + 0x10))(local_c8);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00570c38(auStack_a0);
  return;
}


