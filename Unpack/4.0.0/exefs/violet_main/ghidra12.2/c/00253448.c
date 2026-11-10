/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00253448; name: FUN_00253448
 */


void FUN_00253448(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  *param_1 = (long)(PTR_DAT_047cc1b0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(param_1 + 1),false,0);
  uVar4 = FUN_01cf7e20();
  FUN_01e9fa84(param_1 + 5,uVar4);
  uVar4 = FUN_01cf7e20();
  FUN_01e9fa84(param_1 + 7,uVar4);
  param_1[9] = 0;
  param_1[10] = 0;
  nn::nifm::Initialize();
  plVar10 = *(long **)(*param_2 + 0x240);
  puVar5 = (undefined8 *)FUN_0024799c();
  plVar6 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x78,8);
  plVar6[2] = 0;
  plVar7 = plVar6 + 1;
  *plVar7 = 0;
  puVar3 = PTR_DAT_047cc0d8;
  plVar6[3] = (long)plVar10;
  plVar9 = plVar6 + 4;
  *plVar6 = (long)(puVar3 + 0x10);
  FUN_006c4254(plVar9);
  plVar6[4] = (long)(PTR_DAT_047cc0e0 + 0x10);
  nn::os::InitializeEvent(plVar6 + 6,0,0);
  plVar6[4] = (long)(PTR_DAT_047cc0e8 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar6 + 0xb),false,0);
  if (plVar6 != (long *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar7 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x148,8);
  plVar11 = plVar7 + 1;
  *plVar11 = 0;
  plVar7[2] = 0;
  plVar7[3] = (long)plVar10;
  *plVar7 = (long)&PTR_LAB_0448b598;
  FUN_006c5398(plVar7 + 4);
  plVar7[4] = (long)&PTR_LAB_0448b5e8;
  lVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,0x10000,0x10);
  if (lVar8 == 0) {
    local_70 = (long *)CONCAT44(local_70._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_70,"");
  }
  FUN_006c4058(plVar7 + 10,plVar9,0,lVar8,0x10000,1);
  plVar7[0x27] = (long)plVar6;
  plVar7[0x25] = 0x10000;
  plVar7[0x26] = (long)plVar9;
  plVar7[10] = (long)&PTR_LAB_0448b630;
  *(undefined1 *)((long)plVar7 + 0x141) = 1;
  plVar7[0x23] = (long)param_1;
  plVar7[0x24] = (long)plVar10;
  local_80 = 0;
  local_78 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  local_70 = plVar7 + 4;
  local_68 = plVar7;
  (**(code **)*puVar5)(puVar5,&local_70,&local_80);
  if (local_68 != (long *)0x0) {
    plVar10 = local_68 + 1;
    do {
      lVar8 = *plVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_78 != (long *)0x0) {
    plVar10 = local_78 + 1;
    do {
      lVar8 = *plVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*local_78 + 0x10))(local_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar7 != (long *)0x0) {
    do {
      lVar8 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined1 *)(plVar6 + 5) = 1;
  param_1[9] = (long)plVar9;
  plVar9 = (long *)param_1[10];
  param_1[10] = (long)plVar6;
  if (plVar9 != (long *)0x0) {
    plVar6 = plVar9 + 1;
    do {
      lVar8 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


