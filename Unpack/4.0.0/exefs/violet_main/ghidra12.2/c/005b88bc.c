/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005b88bc; name: FUN_005b88bc
 */


void FUN_005b88bc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  
  puVar8 = PTR_DAT_047cbe90;
  puVar1 = PTR_DAT_047ce3c0 + 0x10;
  plVar10 = (long *)param_1[0xb3];
  puVar2 = PTR_DAT_047ce3c0 + 0x68;
  puVar3 = PTR_DAT_047ce3e0 + 0x10;
  param_1[2] = (long)(PTR_DAT_047ce3c0 + 0x98);
  param_1[0x8f] = (long)puVar3;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
  param_1[0xa5] = (long)(puVar8 + 0x10);
  if (plVar10 == (long *)0x0) {
LAB_005b8928:
    plVar10 = (long *)param_1[0xad];
  }
  else {
    plVar4 = plVar10 + 1;
    do {
      lVar9 = *plVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 != 0) goto LAB_005b8928;
    (**(code **)(*plVar10 + 0x10))(plVar10);
    std::__shared_weak_count::__release_weak();
    plVar10 = (long *)param_1[0xad];
  }
  if (plVar10 != (long *)0x0) {
    plVar4 = plVar10 + 1;
    do {
      lVar9 = *plVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar10 = (long *)param_1[0x82];
  param_1[0x5d] = (long)(PTR_DAT_047ce3d8 + 0x10);
  param_1[0x74] = (long)(puVar8 + 0x10);
  if (plVar10 == (long *)0x0) {
LAB_005b89bc:
    plVar10 = (long *)param_1[0x7c];
  }
  else {
    plVar4 = plVar10 + 1;
    do {
      lVar9 = *plVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 != 0) goto LAB_005b89bc;
    (**(code **)(*plVar10 + 0x10))(plVar10);
    std::__shared_weak_count::__release_weak();
    plVar10 = (long *)param_1[0x7c];
  }
  if (plVar10 != (long *)0x0) {
    plVar4 = plVar10 + 1;
    do {
      lVar9 = *plVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar10 = (long *)param_1[0x68];
  if (plVar10 == (long *)0x0) {
LAB_005b8a38:
    lVar9 = param_1[0x65];
    puVar7 = (undefined8 *)PTR_DAT_047cbb08;
  }
  else {
    plVar4 = plVar10 + 1;
    do {
      lVar9 = *plVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 != 0) goto LAB_005b8a38;
    (**(code **)(*plVar10 + 0x10))(plVar10);
    std::__shared_weak_count::__release_weak();
    lVar9 = param_1[0x65];
    puVar7 = (undefined8 *)PTR_DAT_047cbb08;
  }
  PTR_DAT_047cbb08 = (undefined *)puVar7;
  if (lVar9 != 0) {
    (**(code **)(*(long *)*puVar7 + 0xc0))();
  }
  plVar10 = (long *)param_1[0x50];
  param_1[0x32] = (long)(PTR_DAT_047ce3c8 + 0x10);
  param_1[0x42] = (long)(puVar8 + 0x10);
  if (plVar10 == (long *)0x0) {
LAB_005b8a90:
    plVar10 = (long *)param_1[0x4a];
  }
  else {
    plVar4 = plVar10 + 1;
    do {
      lVar9 = *plVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 != 0) goto LAB_005b8a90;
    (**(code **)(*plVar10 + 0x10))(plVar10);
    std::__shared_weak_count::__release_weak();
    plVar10 = (long *)param_1[0x4a];
  }
  if (plVar10 != (long *)0x0) {
    plVar4 = plVar10 + 1;
    do {
      lVar9 = *plVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (param_1[0x37] != 0) {
    (**(code **)(*(long *)*puVar7 + 0xc0))();
  }
  plVar10 = (long *)param_1[0x25];
  param_1[0xb] = (long)(PTR_DAT_047ce3d0 + 0x10);
  param_1[0x17] = (long)(puVar8 + 0x10);
  if (plVar10 != (long *)0x0) {
    plVar4 = plVar10 + 1;
    do {
      lVar9 = *plVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__shared_weak_count::__release_weak();
      plVar10 = (long *)param_1[0x1f];
      goto joined_r0x005b8b6c;
    }
  }
  plVar10 = (long *)param_1[0x1f];
joined_r0x005b8b6c:
  if (plVar10 != (long *)0x0) {
    plVar4 = plVar10 + 1;
    do {
      lVar9 = *plVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}


