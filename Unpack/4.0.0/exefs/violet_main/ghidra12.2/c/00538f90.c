/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00538f90; name: FUN_00538f90
 */


void FUN_00538f90(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  lVar9 = *param_3;
  lVar2 = param_3[1];
  lVar8 = *(long *)(*(long *)(param_2 + 8) + 0x48);
  *param_3 = 0;
  param_3[1] = 0;
  plVar11 = *(long **)(lVar8 + 0x240);
  puVar10 = *(undefined8 **)(lVar8 + 0x4b8);
  plVar6 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0xf8,8);
  plVar6[2] = 0;
  plVar7 = plVar6 + 1;
  *plVar7 = 0;
  puVar5 = PTR_DAT_047cddd0;
  plVar6[3] = (long)plVar11;
  plVar1 = plVar6 + 4;
  *plVar6 = (long)(puVar5 + 0x10);
  FUN_006c4254(plVar1);
  plVar6[4] = (long)(PTR_DAT_047cddd8 + 0x10);
  nn::os::InitializeEvent(plVar6 + 6,0,0);
  plVar6[4] = (long)(PTR_DAT_047cdde0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar6 + 0xb),false,0);
  *(undefined1 *)(plVar6 + 0x1e) = 0;
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
  plVar7 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x150,8);
  plVar12 = plVar7 + 1;
  *plVar12 = 0;
  plVar7[2] = 0;
  plVar7[3] = (long)plVar11;
  *plVar7 = (long)&PTR_LAB_044c7920;
  FUN_006c5398(plVar7 + 4);
  plVar7[4] = (long)&PTR_LAB_044c7958;
  lVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,0x10000,0x10);
  if (lVar8 == 0) {
    local_70 = (long *)CONCAT44(local_70._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_70,"");
  }
  FUN_006c4058(plVar7 + 10,plVar1,0,lVar8,0x10000,1);
  *(undefined1 *)((long)plVar7 + 0x149) = 1;
  plVar7[0x25] = (long)plVar11;
  plVar7[0x26] = 0x10000;
  plVar7[10] = (long)&PTR_LAB_044c7988;
  plVar7[0x27] = (long)plVar1;
  plVar7[0x28] = (long)plVar6;
  plVar7[0x23] = lVar9;
  plVar7[0x24] = lVar2;
  local_80 = 0;
  local_78 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_70 = plVar7 + 4;
  local_68 = plVar7;
  (**(code **)*puVar10)(puVar10,&local_70,&local_80);
  if (local_68 != (long *)0x0) {
    plVar11 = local_68 + 1;
    do {
      lVar9 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_78 != (long *)0x0) {
    plVar11 = local_78 + 1;
    do {
      lVar9 = *plVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*local_78 + 0x10))(local_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar6;
  if (plVar7 != (long *)0x0) {
    do {
      lVar9 = *plVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


