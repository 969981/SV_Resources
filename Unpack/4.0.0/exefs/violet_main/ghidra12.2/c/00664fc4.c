/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00664fc4; name: FUN_00664fc4
 */


void FUN_00664fc4(long *param_1)

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
  puVar1 = PTR_DAT_047cf2a8 + 0x10;
  plVar8 = (long *)param_1[0xb2];
  puVar2 = PTR_DAT_047cf2a8 + 0x50;
  param_1[0x8e] = (long)(PTR_DAT_047ce3e0 + 0x10);
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
  param_1[0xa4] = (long)(puVar6 + 0x10);
  if (plVar8 == (long *)0x0) {
LAB_00665028:
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
    if (lVar7 != 0) goto LAB_00665028;
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
  param_1[99] = (long)(PTR_DAT_047cf260 + 0x10);
  param_1[0x73] = (long)(puVar6 + 0x10);
  if (plVar8 == (long *)0x0) {
LAB_006650bc:
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
    if (lVar7 != 0) goto LAB_006650bc;
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
LAB_00665170:
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
    if (lVar7 != 0) goto LAB_00665170;
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
LAB_00665204:
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
    if (lVar7 != 0) goto LAB_00665204;
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
      goto joined_r0x006652c0;
    }
  }
  lVar7 = param_1[0x12];
joined_r0x006652c0:
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006652a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)puVar1 + 0xc0))();
  return;
}


