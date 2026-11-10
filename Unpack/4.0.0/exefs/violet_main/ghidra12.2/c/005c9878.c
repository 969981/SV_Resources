/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005c9878; name: FUN_005c9878
 */


void FUN_005c9878(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  uVar4 = *param_2;
  plVar5 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  plVar8 = (long *)(**(code **)(*param_4 + 0x10))(param_4,0xe0,8);
  plVar8[2] = 0;
  plVar9 = plVar8 + 1;
  *plVar9 = 0;
  puVar2 = PTR_DAT_047cdec0;
  plVar8[3] = (long)param_4;
  plVar1 = plVar8 + 4;
  *plVar8 = (long)(puVar2 + 0x10);
  FUN_006c4254(plVar1);
  plVar8[4] = (long)(PTR_DAT_047cdec8 + 0x10);
  nn::os::InitializeEvent(plVar8 + 6,0,0);
  plVar8[4] = (long)(PTR_DAT_047cded0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar8 + 0xb),false,0);
  *(undefined1 *)(plVar8 + 0x1b) = 0;
  if (plVar8 != (long *)0x0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = *plVar9 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plVar5 != (long *)0x0) {
    plVar9 = plVar5 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar7) {
        *plVar9 = *plVar9 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_80 = uVar4;
  local_78 = plVar5;
  local_70 = plVar1;
  local_68 = plVar8;
  plVar9 = (long *)(**(code **)(*param_4 + 0x10))(param_4,0x88,8);
  puVar2 = PTR_DAT_047ce7d0 + 0x10;
  plVar9[2] = 0;
  plVar9[3] = (long)param_4;
  *plVar9 = (long)puVar2;
  plVar9[1] = 0;
  FUN_005c9b6c(plVar9 + 4,&local_70,&local_80,param_3);
  if (local_78 != (long *)0x0) {
    plVar3 = local_78 + 1;
    do {
      lVar10 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_78 + 0x10))(local_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_68 != (long *)0x0) {
    plVar3 = local_68 + 1;
    do {
      lVar10 = *plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_a0 = uVar4;
  local_98 = plVar5;
  local_90 = plVar9 + 4;
  local_88 = plVar9;
  FUN_006c5470(param_5,&local_90,param_6,&local_a0);
  if (local_98 != (long *)0x0) {
    plVar5 = local_98 + 1;
    do {
      lVar10 = *plVar5;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar7) {
        *plVar5 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_98 + 0x10))(local_98);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_88 != (long *)0x0) {
    plVar5 = local_88 + 1;
    do {
      lVar10 = *plVar5;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar7) {
        *plVar5 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_88 + 0x10))(local_88);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar8;
  return;
}


