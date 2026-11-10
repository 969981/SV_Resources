/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0023d700; name: FUN_0023d700
 */


void FUN_0023d700(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  
  puVar5 = PTR_DAT_047cbe90;
  plVar7 = (long *)param_1[0x71];
  puVar1 = PTR_DAT_047cc048 + 0x10;
  *param_1 = (long)(PTR_DAT_047cc038 + 0x10);
  param_1[0x4b] = (long)puVar1;
  param_1[99] = (long)(puVar5 + 0x10);
  if (plVar7 == (long *)0x0) {
LAB_0023d760:
    plVar7 = (long *)param_1[0x6b];
  }
  else {
    plVar2 = plVar7 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 != 0) goto LAB_0023d760;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
    plVar7 = (long *)param_1[0x6b];
  }
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar1 = PTR_DAT_047cbb08;
  if (param_1[0x4e] != 0) {
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0xc0))();
  }
  plVar7 = (long *)param_1[0x3e];
  param_1[9] = (long)(PTR_DAT_047cc040 + 0x10);
  param_1[0x30] = (long)(puVar5 + 0x10);
  if (plVar7 == (long *)0x0) {
LAB_0023d814:
    plVar7 = (long *)param_1[0x38];
  }
  else {
    plVar2 = plVar7 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 != 0) goto LAB_0023d814;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
    plVar7 = (long *)param_1[0x38];
  }
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (param_1[0x1b] != 0) {
    (**(code **)(**(long **)puVar1 + 0xc0))();
  }
  plVar7 = (long *)param_1[0x14];
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
      lVar6 = param_1[0x11];
      goto joined_r0x0023d8e8;
    }
  }
  lVar6 = param_1[0x11];
joined_r0x0023d8e8:
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0023d8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)puVar1 + 0xc0))();
  return;
}


