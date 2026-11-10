/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006a90d0; name: FUN_006a90d0
 */


void FUN_006a90d0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  
  puVar6 = PTR_DAT_047cbe90;
  puVar1 = PTR_DAT_047cf8c8 + 0x10;
  plVar8 = (long *)param_1[0xb2];
  puVar2 = PTR_DAT_047cf8c8 + 0x50;
  param_1[0x8e] = (long)(PTR_DAT_047ce3e0 + 0x10);
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
  param_1[0xa4] = (long)(puVar6 + 0x10);
  if (plVar8 == (long *)0x0) {
LAB_006a9134:
    plVar8 = (long *)param_1[0xac];
  }
  else {
    plVar3 = plVar8 + 1;
    do {
      lVar7 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 != 0) goto LAB_006a9134;
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__shared_weak_count::__release_weak();
    plVar8 = (long *)param_1[0xac];
  }
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 1;
    do {
      lVar7 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)param_1[0x81];
  param_1[99] = (long)(PTR_DAT_047cf880 + 0x10);
  param_1[0x73] = (long)(puVar6 + 0x10);
  if (plVar8 == (long *)0x0) {
LAB_006a91c8:
    plVar8 = (long *)param_1[0x7b];
  }
  else {
    plVar3 = plVar8 + 1;
    do {
      lVar7 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 != 0) goto LAB_006a91c8;
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__shared_weak_count::__release_weak();
    plVar8 = (long *)param_1[0x7b];
  }
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 1;
    do {
      lVar7 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar1 = PTR_DAT_047cbb08;
  if (param_1[0x68] != 0) {
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0xc0))();
  }
  plVar8 = (long *)param_1[0x56];
  param_1[0x3c] = (long)(PTR_DAT_047ce3d0 + 0x10);
  param_1[0x48] = (long)(puVar6 + 0x10);
  if (plVar8 == (long *)0x0) {
LAB_006a927c:
    plVar8 = (long *)param_1[0x50];
  }
  else {
    plVar3 = plVar8 + 1;
    do {
      lVar7 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 != 0) goto LAB_006a927c;
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__shared_weak_count::__release_weak();
    plVar8 = (long *)param_1[0x50];
  }
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 1;
    do {
      lVar7 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)param_1[0x2f];
  param_1[10] = (long)(PTR_DAT_047ce3d8 + 0x10);
  param_1[0x21] = (long)(puVar6 + 0x10);
  if (plVar8 == (long *)0x0) {
LAB_006a9310:
    plVar8 = (long *)param_1[0x29];
  }
  else {
    plVar3 = plVar8 + 1;
    do {
      lVar7 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 != 0) goto LAB_006a9310;
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__shared_weak_count::__release_weak();
    plVar8 = (long *)param_1[0x29];
  }
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 1;
    do {
      lVar7 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)param_1[0x15];
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 1;
    do {
      lVar7 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
      lVar7 = param_1[0x12];
      goto joined_r0x006a93cc;
    }
  }
  lVar7 = param_1[0x12];
joined_r0x006a93cc:
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006a93ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)puVar1 + 0xc0))();
  return;
}


