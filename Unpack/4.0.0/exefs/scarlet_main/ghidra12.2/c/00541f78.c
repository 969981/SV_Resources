/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00541f78; name: FUN_00541f78
 */


void FUN_00541f78(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long *in_x3;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long local_90;
  long *local_88;
  undefined8 local_80;
  long *local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  
  lVar9 = *in_x3;
  FUN_00540e48(&local_90);
  plVar2 = local_88;
  lVar8 = local_90;
  plVar11 = *(long **)(lVar9 + 0x240);
  uVar10 = *(undefined8 *)(lVar9 + 0x4b8);
  local_80 = 0;
  local_78 = (long *)0x0;
  local_90 = 0;
  local_88 = (long *)0x0;
  plVar6 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0xe0,8);
  plVar6[2] = 0;
  plVar7 = plVar6 + 1;
  *plVar7 = 0;
  puVar5 = PTR_DAT_047cdec0;
  plVar6[3] = (long)plVar11;
  plVar1 = plVar6 + 4;
  *plVar6 = (long)(puVar5 + 0x10);
  FUN_006c4254(plVar1);
  plVar6[4] = (long)(PTR_DAT_047cdec8 + 0x10);
  nn::os::InitializeEvent(plVar6 + 6,0,0);
  plVar6[4] = (long)(PTR_DAT_047cded0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar6 + 0xb),false,0);
  *(undefined1 *)(plVar6 + 0x1b) = 0;
  if (plVar6 != (long *)0x0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (plVar2 != (long *)0x0) {
    plVar7 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x78,8);
  *plVar7 = (long)&PTR_LAB_044c81c0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = (long)plVar11;
  FUN_006c4a3c(plVar7 + 4,plVar1,lVar8);
  plVar7[4] = (long)&PTR_FUN_044c81f8;
  *(undefined1 *)(plVar7 + 0xe) = 1;
  plVar7[10] = (long)plVar1;
  plVar7[0xb] = (long)plVar6;
  plVar7[0xc] = lVar8;
  plVar7[0xd] = (long)plVar2;
  local_70 = lVar8;
  local_68 = plVar2;
  local_60 = plVar7 + 4;
  local_58 = plVar7;
  FUN_006c5470(uVar10,&local_60,&local_80,&local_70);
  if (local_68 != (long *)0x0) {
    plVar2 = local_68 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_58 != (long *)0x0) {
    plVar2 = local_58 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_58 + 0x10))(local_58);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar6;
  if (local_78 != (long *)0x0) {
    plVar1 = local_78 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_78 + 0x10))(local_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_88 != (long *)0x0) {
    plVar1 = local_88 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_88 + 0x10))(local_88);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


