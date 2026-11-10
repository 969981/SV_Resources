/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027b8804; name: FUN_027b8804
 */


void FUN_027b8804(undefined8 *param_1,long *param_2,undefined8 param_3)

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
  undefined8 uVar11;
  long *plVar12;
  undefined8 local_e8;
  long *local_e0;
  ulong local_d8;
  long *local_d0;
  ulong local_c8;
  long *local_c0;
  ulong local_b8;
  long *plStack_b0;
  long *local_a8;
  long *local_a0;
  ulong local_98;
  long *plStack_90;
  undefined1 auStack_88 [8];
  ulong local_80;
  long local_70;
  undefined8 local_60;
  long *local_58;
  
                    /* try { // try from 027b8828 to 027b8833 has its CatchHandler @ 027b8c7c */
  FUN_00694e1c(auStack_88,0);
  uVar11 = *(undefined8 *)PTR_PTR_047cbcf8;
                    /* try { // try from 027b8840 to 027b884f has its CatchHandler @ 027b8c78 */
  FUN_00267510(&local_a8,uVar11);
  uVar3 = (ulong)&local_a8 | 1;
  if (((ulong)local_a8 & 1) != 0) {
    uVar3 = local_98;
  }
                    /* try { // try from 027b8864 to 027b886b has its CatchHandler @ 027b8c4c */
  FUN_0066bcb4(auStack_88,uVar3);
  if (((ulong)local_a8 & 1) != 0) {
    (**(code **)(*plStack_90 + 0x18))(plStack_90,local_98,(ulong)local_a8 & 0xfffffffffffffffe,1);
  }
  if (local_70 == 0) {
    puVar7 = (ulong *)(local_80 & 0xfffffffffffffffe);
    if ((local_80 & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
                    /* try { // try from 027b88a4 to 027b88a7 has its CatchHandler @ 027b8c80 */
    local_70 = FUN_0068f0d8(puVar7);
  }
  lVar10 = local_70;
  FUN_0066b4d4(&local_c8,param_2);
  uVar3 = (ulong)&local_c8 | 1;
  if ((local_c8 & 1) != 0) {
    uVar3 = local_b8;
  }
                    /* try { // try from 027b88d4 to 027b88e3 has its CatchHandler @ 027b8c30 */
  FUN_00684810(&local_a8,uVar11,uVar3);
  uVar3 = (ulong)&local_a8 | 1;
  if (((ulong)local_a8 & 1) != 0) {
    uVar3 = local_98;
  }
                    /* try { // try from 027b88f8 to 027b88ff has its CatchHandler @ 027b8c04 */
  FUN_0066bdd4(lVar10,uVar3);
  if (((ulong)local_a8 & 1) != 0) {
    (**(code **)(*plStack_90 + 0x18))(plStack_90,local_98,(ulong)local_a8 & 0xfffffffffffffffe,1);
  }
  if ((local_c8 & 1) != 0) {
    (**(code **)(*plStack_b0 + 0x18))(plStack_b0,local_b8,local_c8 & 0xfffffffffffffffe,1);
  }
                    /* try { // try from 027b8948 to 027b8953 has its CatchHandler @ 027b8c80 */
  FUN_0066bef4(lVar10,param_3);
  lVar10 = *(long *)(*(long *)(*param_2 + 8) + 0x48);
  local_e8 = 0;
  local_e0 = (long *)0x0;
  FUN_00670070(&local_d8,*(undefined8 *)(*param_2 + 8),auStack_88,&local_e8);
  plVar2 = local_d0;
  uVar3 = local_d8;
  plVar12 = *(long **)(lVar10 + 0x240);
  uVar11 = *(undefined8 *)(lVar10 + 0x4b8);
  local_60 = 0;
  local_58 = (long *)0x0;
  local_d8 = 0;
  local_d0 = (long *)0x0;
  plVar8 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x110,8);
  plVar8[2] = 0;
  plVar9 = plVar8 + 1;
  *plVar9 = 0;
  puVar6 = PTR_DAT_047cf328;
  plVar8[3] = (long)plVar12;
  plVar1 = plVar8 + 4;
  *plVar8 = (long)(puVar6 + 0x10);
  FUN_006c4254(plVar1);
  plVar8[4] = (long)(PTR_DAT_047cf330 + 0x10);
  nn::os::InitializeEvent(plVar8 + 6,0,0);
  plVar8[4] = (long)(PTR_DAT_047cf338 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar8 + 0xb),false,0);
  *(undefined1 *)(plVar8 + 0x21) = 0;
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
  plVar9 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x78,8);
  *plVar9 = (long)&PTR_LAB_044d4220;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[3] = (long)plVar12;
  FUN_006c4a3c(plVar9 + 4,plVar1,uVar3);
  plVar9[4] = (long)&PTR_FUN_044d4258;
  *(undefined1 *)(plVar9 + 0xe) = 1;
  plVar9[10] = (long)plVar1;
  plVar9[0xb] = (long)plVar8;
  plVar9[0xc] = uVar3;
  plVar9[0xd] = (long)plVar2;
  local_c8 = uVar3;
  local_c0 = plVar2;
  local_a8 = plVar9 + 4;
  local_a0 = plVar9;
  FUN_006c5470(uVar11,&local_a8,&local_60,&local_c8);
  if (local_c0 != (long *)0x0) {
    plVar2 = local_c0 + 1;
    do {
      lVar10 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_c0 + 0x10))(local_c0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_a0 != (long *)0x0) {
    plVar2 = local_a0 + 1;
    do {
      lVar10 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_a0 + 0x10))(local_a0);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar8;
  if (local_58 != (long *)0x0) {
    plVar1 = local_58 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_58 + 0x10))(local_58);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_d0 != (long *)0x0) {
    plVar1 = local_d0 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_d0 + 0x10))(local_d0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_e0 != (long *)0x0) {
    plVar1 = local_e0 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_e0 + 0x10))(local_e0);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00694e70(auStack_88);
  return;
}


