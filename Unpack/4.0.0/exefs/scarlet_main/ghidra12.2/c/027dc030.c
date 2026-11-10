/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027dc030; name: FUN_027dc030
 */


void FUN_027dc030(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long local_90;
  long *local_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  lVar11 = *(long *)(param_2 + 0x10);
  lVar10 = *(long *)(*(long *)(lVar11 + 8) + 0x48);
  plVar3 = *(long **)(*(long *)(lVar11 + 8) + 0x50);
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar3 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = *plVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar11 = *(long *)(param_2 + 0x10);
  }
  uVar2 = *(undefined8 *)(lVar11 + 0x18);
  plVar4 = *(long **)(lVar11 + 0x20);
  if (plVar4 == (long *)0x0) {
    FUN_00546cb8(&local_90,uVar2);
  }
  else {
    plVar1 = plVar4 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_00546cb8(&local_90,uVar2);
    do {
      lVar11 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar1 = local_88;
  lVar11 = local_90;
  local_90 = 0;
  local_88 = (long *)0x0;
  plVar13 = *(long **)(lVar10 + 0x240);
  puVar12 = *(undefined8 **)(lVar10 + 0x4b8);
  plVar8 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x78,8);
  plVar8[2] = 0;
  plVar9 = plVar8 + 1;
  *plVar9 = 0;
  puVar7 = PTR_DAT_047cc0d8;
  plVar8[3] = (long)plVar13;
  plVar4 = plVar8 + 4;
  *plVar8 = (long)(puVar7 + 0x10);
  FUN_006c4254(plVar4);
  plVar8[4] = (long)(PTR_DAT_047cc0e0 + 0x10);
  nn::os::InitializeEvent(plVar8 + 6,0,0);
  plVar8[4] = (long)(PTR_DAT_047cc0e8 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar8 + 0xb),false,0);
  if (plVar8 != (long *)0x0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar9 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x150,8);
  plVar14 = plVar9 + 1;
  *plVar14 = 0;
  plVar9[2] = 0;
  plVar9[3] = (long)plVar13;
  *plVar9 = (long)&PTR_FUN_044c8038;
  FUN_006c5398(plVar9 + 4);
  plVar9[4] = (long)&PTR_LAB_044c8070;
  lVar10 = (**(code **)(*plVar13 + 0x10))(plVar13,0x10000,0x10);
  if (lVar10 == 0) {
    local_70 = (long *)CONCAT44(local_70._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_70,"");
  }
  FUN_006c4058(plVar9 + 10,plVar4,0,lVar10,0x10000,1);
  plVar9[10] = (long)&PTR_LAB_044c80a0;
  plVar9[0x25] = (long)plVar13;
  plVar9[0x26] = 0x10000;
  *(undefined1 *)((long)plVar9 + 0x149) = 1;
  plVar9[0x27] = (long)plVar4;
  plVar9[0x28] = (long)plVar8;
  plVar9[0x23] = lVar11;
  plVar9[0x24] = (long)plVar1;
  local_80 = 0;
  local_78 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = *plVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_70 = plVar9 + 4;
  local_68 = plVar9;
  (**(code **)*puVar12)(puVar12,&local_70,&local_80);
  if (local_68 != (long *)0x0) {
    plVar1 = local_68 + 1;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_78 != (long *)0x0) {
    plVar1 = local_78 + 1;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_78 + 0x10))(local_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar4;
  param_1[1] = plVar8;
  if (plVar9 != (long *)0x0) {
    do {
      lVar10 = *plVar14;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_88 != (long *)0x0) {
    plVar4 = local_88 + 1;
    do {
      lVar10 = *plVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_88 + 0x10))(local_88);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar3 + 1;
    do {
      lVar10 = *plVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


