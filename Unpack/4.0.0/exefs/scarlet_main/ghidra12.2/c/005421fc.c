/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005421fc; name: FUN_005421fc
 */


void FUN_005421fc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
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
  
  FUN_00551dd8(&local_90);
  plVar6 = (long *)FUN_0053f478(*param_2);
  lVar11 = *plVar6;
  plVar7 = (long *)FUN_0053f478(*param_2);
  plVar6 = local_88;
  lVar5 = local_90;
  lVar10 = *plVar7;
  lVar1 = plVar7[1];
  if (lVar1 != 0) {
    plVar7 = (long *)(lVar1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_90 = 0;
  local_88 = (long *)0x0;
  plVar13 = *(long **)(lVar11 + 0x240);
  puVar12 = *(undefined8 **)(lVar11 + 0x4b8);
  plVar8 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0xd0,8);
  plVar8[2] = 0;
  plVar9 = plVar8 + 1;
  *plVar9 = 0;
  puVar4 = PTR_DAT_047cc158;
  plVar8[3] = (long)plVar13;
  plVar7 = plVar8 + 4;
  *plVar8 = (long)(puVar4 + 0x10);
  FUN_006c4254(plVar7);
  plVar8[4] = (long)(PTR_DAT_047cc168 + 0x10);
  nn::os::InitializeEvent(plVar8 + 6,0,0);
  plVar8[4] = (long)(PTR_DAT_047cc160 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar8 + 0xb),false,0);
  *(undefined1 *)(plVar8 + 0x19) = 0;
  if (plVar8 != (long *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar9 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x160,8);
  plVar14 = plVar9 + 1;
  *plVar14 = 0;
  plVar9[2] = 0;
  plVar9[3] = (long)plVar13;
  *plVar9 = (long)&PTR_FUN_044c8478;
  FUN_006c5398(plVar9 + 4);
  plVar9[4] = (long)&PTR_LAB_044c84b0;
  lVar11 = (**(code **)(*plVar13 + 0x10))(plVar13,0x10000,0x10);
  if (lVar11 == 0) {
    local_70 = (long *)CONCAT44(local_70._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_70,"");
  }
  FUN_006c4058(plVar9 + 10,plVar7,0,lVar11,0x10000,1);
  plVar9[10] = (long)&PTR_LAB_044c84e0;
  plVar9[0x27] = (long)plVar13;
  plVar9[0x28] = 0x10000;
  *(undefined1 *)((long)plVar9 + 0x159) = 1;
  plVar9[0x29] = (long)plVar7;
  plVar9[0x2a] = (long)plVar8;
  plVar9[0x23] = lVar10;
  plVar9[0x24] = lVar1;
  plVar9[0x25] = lVar5;
  plVar9[0x26] = (long)plVar6;
  local_80 = 0;
  local_78 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = *plVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_70 = plVar9 + 4;
  local_68 = plVar9;
  (**(code **)*puVar12)(puVar12,&local_70,&local_80);
  if (local_68 != (long *)0x0) {
    plVar6 = local_68 + 1;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_78 != (long *)0x0) {
    plVar6 = local_78 + 1;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_78 + 0x10))(local_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar7;
  param_1[1] = plVar8;
  if (plVar9 != (long *)0x0) {
    do {
      lVar10 = *plVar14;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_88 != (long *)0x0) {
    plVar6 = local_88 + 1;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*local_88 + 0x10))(local_88);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


