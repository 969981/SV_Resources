/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0066b644; name: FUN_0066b644
 */


void FUN_0066b644(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  long local_d8;
  long *local_d0;
  byte local_c8;
  undefined7 uStack_c7;
  ulong local_c0;
  ulong local_b8;
  long *local_b0;
  byte local_a0;
  undefined7 uStack_9f;
  ulong local_90;
  long *plStack_88;
  undefined8 local_80;
  long *local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  
  FUN_0066b4d4(&local_c8);
  uVar3 = (ulong)&local_c8 | 1;
  if ((local_c8 & 1) != 0) {
    uVar3 = local_b8;
  }
                    /* try { // try from 0066b68c to 0066b69b has its CatchHandler @ 0066b9c8 */
  FUN_00684810(&local_a0,"current",uVar3);
  if ((local_c8 & 1) != 0) {
    (**(code **)(*local_b0 + 0x18))
              (local_b0,local_b8,CONCAT71(uStack_c7,local_c8) & 0xfffffffffffffffe,1);
  }
                    /* try { // try from 0066b6c0 to 0066b6cb has its CatchHandler @ 0066b9c0 */
  FUN_0068f7cc(&local_c8,0);
  uVar3 = (ulong)&local_a0 | 1;
  if ((local_a0 & 1) != 0) {
    uVar3 = local_90;
  }
                    /* try { // try from 0066b6e4 to 0066b707 has its CatchHandler @ 0066b9e4 */
  FUN_0066bb94(&local_c8,uVar3);
  if (local_b0 == (long *)0x0) {
    puVar7 = (ulong *)(local_c0 & 0xfffffffffffffffe);
    if ((local_c0 & 1) != 0) {
      puVar7 = (ulong *)*puVar7;
    }
    local_b0 = (long *)FUN_00535218(puVar7);
  }
  FUN_0026f698(param_3,local_b0,1);
  lVar11 = *(long *)(*(long *)(*param_2 + 8) + 0x48);
  FUN_0066dbdc(&local_d8,*(long *)(*param_2 + 8),&local_c8,param_4);
  plVar2 = local_d0;
  lVar10 = local_d8;
  plVar13 = *(long **)(lVar11 + 0x240);
  uVar12 = *(undefined8 *)(lVar11 + 0x4b8);
  local_80 = 0;
  local_78 = (long *)0x0;
  local_d8 = 0;
  local_d0 = (long *)0x0;
  plVar8 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x130,8);
  plVar8[2] = 0;
  plVar9 = plVar8 + 1;
  *plVar9 = 0;
  puVar6 = PTR_DAT_047cf310;
  plVar8[3] = (long)plVar13;
  plVar1 = plVar8 + 4;
  *plVar8 = (long)(puVar6 + 0x10);
  FUN_006c4254(plVar1);
  plVar8[4] = (long)(PTR_DAT_047cf318 + 0x10);
  nn::os::InitializeEvent(plVar8 + 6,0,0);
  plVar8[4] = (long)(PTR_DAT_047cf320 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar8 + 0xb),false,0);
  *(undefined1 *)(plVar8 + 0x25) = 0;
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
  *plVar9 = (long)&PTR_LAB_044d3ee8;
  plVar9[1] = 0;
  plVar9[2] = 0;
  plVar9[3] = (long)plVar13;
  FUN_006c4a3c(plVar9 + 4,plVar1,lVar10);
  plVar9[4] = (long)&PTR_FUN_044d3f20;
  *(undefined1 *)(plVar9 + 0xe) = 1;
  plVar9[10] = (long)plVar1;
  plVar9[0xb] = (long)plVar8;
  plVar9[0xc] = lVar10;
  plVar9[0xd] = (long)plVar2;
  local_70 = lVar10;
  local_68 = plVar2;
  local_60 = plVar9 + 4;
  local_58 = plVar9;
  FUN_006c5470(uVar12,&local_60,&local_80,&local_70);
  if (local_68 != (long *)0x0) {
    plVar2 = local_68 + 1;
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
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_58 != (long *)0x0) {
    plVar2 = local_58 + 1;
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
      (**(code **)(*local_58 + 0x10))(local_58);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar8;
  if (local_78 != (long *)0x0) {
    plVar1 = local_78 + 1;
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
      (**(code **)(*local_78 + 0x10))(local_78);
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
      FUN_0068f820(&local_c8);
      goto joined_r0x0066b950;
    }
  }
  FUN_0068f820(&local_c8);
joined_r0x0066b950:
  if ((local_a0 & 1) != 0) {
    (**(code **)(*plStack_88 + 0x18))
              (plStack_88,local_90,CONCAT71(uStack_9f,local_a0) & 0xfffffffffffffffe,1);
  }
  return;
}


