/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005e27e4; name: FUN_005e27e4
 */


void FUN_005e27e4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  
  plVar7 = (long *)(param_2 + 0x38);
  plVar10 = *(long **)(*plVar7 + 0x238);
  plVar4 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x38,8);
  *plVar4 = (long)(PTR_DAT_047ce6a0 + 0x10);
  plVar4[1] = 0;
  puVar1 = PTR_DAT_047ce6a8;
  plVar4[2] = 0;
  plVar4[3] = (long)plVar10;
  plVar4[4] = (long)(puVar1 + 0x10);
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar11 = *(long **)(*plVar7 + 0x238);
  plVar10 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x78,8);
  puVar1 = PTR_DAT_047ce6b0 + 0x10;
  plVar10[2] = 0;
  plVar10[3] = (long)plVar11;
  *plVar10 = (long)puVar1;
  plVar10[1] = 0;
  FUN_005dce30(plVar10 + 4,param_2,plVar7);
  plVar11 = (long *)plVar4[6];
  plVar4[5] = (long)(plVar10 + 4);
  plVar4[6] = (long)plVar10;
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 1;
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar4[4] = (long)(PTR_DAT_047ce6b8 + 0x10);
  local_88 = 0x14;
  lVar8 = *plVar7;
  local_98 = plVar4 + 4;
  local_90 = plVar4;
  FUN_005e20c0(&local_a8,&local_98);
  plVar10 = local_a0;
  lVar6 = local_a8;
  plVar11 = *(long **)(lVar8 + 0x240);
  uVar9 = *(undefined8 *)(lVar8 + 0x4b8);
  local_80 = 0;
  local_78 = (long *)0x0;
  local_a8 = 0;
  local_a0 = (long *)0x0;
  plVar7 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0xf0,8);
  plVar7[2] = 0;
  plVar5 = plVar7 + 1;
  *plVar5 = 0;
  puVar1 = PTR_DAT_047cea08;
  plVar7[3] = (long)plVar11;
  plVar4 = plVar7 + 4;
  *plVar7 = (long)(puVar1 + 0x10);
  FUN_006c4254(plVar4);
  plVar7[4] = (long)(PTR_DAT_047cea10 + 0x10);
  nn::os::InitializeEvent(plVar7 + 6,0,0);
  plVar7[4] = (long)(PTR_DAT_047cea18 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar7 + 0xb),false,0);
  *(undefined1 *)(plVar7 + 0x1d) = 0;
  if (plVar7 != (long *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (plVar10 != (long *)0x0) {
    plVar5 = plVar10 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x78,8);
  *plVar5 = (long)&PTR_LAB_044cf438;
  plVar5[1] = 0;
  plVar5[2] = 0;
  plVar5[3] = (long)plVar11;
  FUN_006c4a3c(plVar5 + 4,plVar4,lVar6);
  plVar5[4] = (long)&PTR_FUN_044cf470;
  *(undefined1 *)(plVar5 + 0xe) = 1;
  plVar5[10] = (long)plVar4;
  plVar5[0xb] = (long)plVar7;
  plVar5[0xc] = lVar6;
  plVar5[0xd] = (long)plVar10;
  local_70 = lVar6;
  local_68 = plVar10;
  local_60 = plVar5 + 4;
  local_58 = plVar5;
  FUN_006c5470(uVar9,&local_60,&local_80,&local_70);
  if (local_68 != (long *)0x0) {
    plVar10 = local_68 + 1;
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_58 != (long *)0x0) {
    plVar10 = local_58 + 1;
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_58 + 0x10))(local_58);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar4;
  param_1[1] = plVar7;
  if (local_78 != (long *)0x0) {
    plVar4 = local_78 + 1;
    do {
      lVar6 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_78 + 0x10))(local_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_a0 != (long *)0x0) {
    plVar4 = local_a0 + 1;
    do {
      lVar6 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_a0 + 0x10))(local_a0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_90 != (long *)0x0) {
    plVar4 = local_90 + 1;
    do {
      lVar6 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_90 + 0x10))(local_90);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


