/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005e20c0; name: FUN_005e20c0
 */


void FUN_005e20c0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  lVar14 = *param_2;
  lVar12 = *(long *)(*(long *)(lVar14 + 8) + 0x48);
  lVar3 = *(long *)(*(long *)(lVar14 + 8) + 0x50);
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar14 = *param_2;
  }
  lVar2 = param_2[1];
  lVar4 = param_2[2];
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = *(long **)(lVar12 + 0x240);
  puVar11 = *(undefined8 **)(lVar12 + 0x4b8);
  plVar8 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0xf0,8);
  plVar8[2] = 0;
  plVar9 = plVar8 + 1;
  *plVar9 = 0;
  puVar7 = PTR_DAT_047cea08;
  plVar8[3] = (long)plVar13;
  plVar1 = plVar8 + 4;
  *plVar8 = (long)(puVar7 + 0x10);
  FUN_006c4254(plVar1);
  plVar8[4] = (long)(PTR_DAT_047cea10 + 0x10);
  nn::os::InitializeEvent(plVar8 + 6,0,0);
  plVar8[4] = (long)(PTR_DAT_047cea18 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar8 + 0xb),false,0);
  *(undefined1 *)(plVar8 + 0x1d) = 0;
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
  plVar9 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x168,8);
  plVar15 = plVar9 + 1;
  *plVar15 = 0;
  plVar9[2] = 0;
  plVar9[3] = (long)plVar13;
  *plVar9 = (long)&PTR_FUN_044cf4b8;
  FUN_006c5398(plVar9 + 4);
  plVar9[4] = (long)&PTR_LAB_044cf4f0;
  lVar10 = (**(code **)(*plVar13 + 0x10))(plVar13,0x10000,0x10);
  if (lVar10 == 0) {
    local_70 = (long *)CONCAT44(local_70._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_70,"");
  }
  FUN_006c4058(plVar9 + 10,plVar1,0,lVar10,0x10000,1);
  plVar9[0x2b] = (long)plVar8;
  plVar9[0x29] = 0x10000;
  plVar9[0x2a] = (long)plVar1;
  plVar9[10] = (long)&PTR_LAB_044cf520;
  *(undefined1 *)((long)plVar9 + 0x161) = 1;
  plVar9[0x23] = lVar12;
  plVar9[0x24] = lVar3;
  plVar9[0x25] = lVar4;
  plVar9[0x26] = lVar14;
  plVar9[0x27] = lVar2;
  plVar9[0x28] = (long)plVar13;
  local_80 = 0;
  local_78 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = *plVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_70 = plVar9 + 4;
  local_68 = plVar9;
  (**(code **)*puVar11)(puVar11,&local_70,&local_80);
  if (local_68 != (long *)0x0) {
    plVar13 = local_68 + 1;
    do {
      lVar12 = *plVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_78 != (long *)0x0) {
    plVar13 = local_78 + 1;
    do {
      lVar12 = *plVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_78 + 0x10))(local_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar8;
  if (plVar9 != (long *)0x0) {
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
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


